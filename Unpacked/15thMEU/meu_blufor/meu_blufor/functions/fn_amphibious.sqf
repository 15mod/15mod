/*
fn_amphibious
fight9

scripted movement for tracked amphibious AAV

*/

// handle anims/var/msg
meu_fnc_amphibious_animate = {
	params ["_veh","_phase"];
	{ _veh animate [_x,_phase]; } foreach ["plate_front","turbine_cover_right","turbine_cover_left"];
	_veh vehicleChat (["Amphibious Drive Disengaged","Amphibious Drive Engaged"] select _phase);
	_veh setVariable ["meu_fnc_amphibious_engaged",([false,true] select _phase)];
	true
};

// key handler fnc
meu_fnc_amphibious_key_handler = {
	params ["_veh","_pressed"];
	
	// checks
	if (player != driver _veh) exitWith {false};
	if ( !(surfaceIsWater position _veh) || !((position _veh select 2) < -0.4) ) exitWith {false};
	if !(isEngineOn _veh) exitWith {false};
	
	// get key codes	
	private ["_dir","_speed","_vel","_fnc_setVel","_fnc_rotate"];
	_dir = direction _veh;
	_speed = speed _veh;
	_vel = velocity _veh;
	
	// fncs for movement
	_fnc_setVel = {
		if (abs _speed < 20) then {
			_veh setVelocity  [ 
				(_vel select 0) + (sin _dir * _this),
				(_vel select 1) + (cos _dir * _this),
				0
			];
		};
		true
	};
	_fnc_rotate = {
		private ["_nVel","_nDir"];
		_nVel = [_vel,_this] call BIS_fnc_rotateVector2D;
		_nDir = [vectorDir _veh,_this] call BIS_fnc_rotateVector2D;
		_veh setVectorDir _nDir;
		_veh setVelocity _nVel;
		true
	};
	
	// handle pressed key
	if (_pressed in actionKeys "carFastForward") then { 0.5 call _fnc_setVel };
	if (_pressed in actionKeys "carForward") then { 0.02 call _fnc_setVel };
	if (_pressed in actionKeys "carBack") then { -0.02 call _fnc_setVel };
	if (_pressed in actionKeys "carLeft") then { 0.3 call _fnc_rotate };
	if (_pressed in actionKeys "carRight") then { -0.3 call _fnc_rotate };
		
	false // return false to allow default key control
};

// params
private ["_unit","_veh","_anim"];
_veh = _this;
_unit = player;

// checks
if (_unit != driver _veh) exitWith {false};

// animate
_anim = [_veh,1] spawn meu_fnc_amphibious_animate;

// add DEH and action to remove
private ["_id","_stopEH","_stopAN","_action"];
_id = findDisplay 46 displayAddEventHandler ["KeyDown",{ [vehicle player,_this select 1] call meu_fnc_amphibious_key_handler; }];

// string end code
_stopEH = format ["findDisplay 46 displayRemoveEventHandler [""KeyDown"",%1];",_id];
_stopAN = format ["_anim = [%1,0] spawn meu_fnc_amphibious_animate;",(_veh call BIS_fnc_objectVar)];

// stop action
_action = player addAction [
	"<t color='#ff0000'>Disengage Amphibious Drive",
	{
		call compile (_this select 3 select 0);
		player removeAction (_this select 2);
	},
	[(_stopEH + _stopAN)],
	6,
	false,
	true,
	"",
	(format ["player == driver %1",(_veh call BIS_fnc_objectVar)])
];

// remove DEH if player leaves aav
private "_getOut";
_getOut = [_veh,_stopEH,_action] spawn {
	params ["_veh","_code","_action"];
	waitUntil { !(player in _veh) || {!(_veh getVariable ["meu_fnc_amphibious_engaged",true])} };
	call compile _code;
	player removeAction _action;
	_veh setVariable ["meu_fnc_amphibious_engaged",false];
};



