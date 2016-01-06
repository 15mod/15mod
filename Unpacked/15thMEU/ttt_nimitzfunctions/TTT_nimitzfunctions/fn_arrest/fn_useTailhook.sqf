//script to simulate carrier arrestor recovery
//created by Franzee
//modified by John_Spartan
//modified by TeTeT


// private ["_plane","_sensor","_speed","_vel_initial","_vel_reduced","_vel_updated","_distance","_distAdj"];
private ["_plane", "_pilot", "_wso", "_sensor", "_posWires", "_tailhook", "_distZ", "_jdgNimArrestor"];
_plane = _this;
_pilot = driver _plane;
_wso = gunner _plane;

_sensor = "EmptyDetector" createVehicle [0,0,0];
sleep 2;

"Approach" call BIS_fnc_log;

// TTT
// while {(alive _plane) && (_plane animationphase "tailhook" > 0.1)} do
_jdgNimArrestor = ["jdgNimArrestor"] call TTT_fnc_global;
_posWires = getPosASL _jdgNimArrestor;
format["Wires pos: %1", _posWires] call BIS_fnc_log;
//while {(alive _plane) && (!isNil(_plane getVariable "NimitzTailhook"))} do
while {alive _plane} do
{
	_tailhook = _plane getVariable "NimitzTailhook";
    if (isNil "_tailhook") exitWith {};

	_sensor setpos [(getpos _plane select 0),(getpos _plane select 1)];
	_speed = speed _plane;
	// TTT
	// If (((getpos _plane select 2) - (getpos _sensor select 2) < 1) or (getpos _plane select 2 < 1)) exitWith {};
    _distZ = (getposASL _plane select 2) - (_posWires select 2);
    // format ["_distZ: %1", _distZ] call BIS_fnc_log;
	If (_distZ < 1) exitWith {};
	sleep 0.1;
};
"Touching down or aborting" call BIS_fnc_log;

if (_plane distance _posWires > 100 || _distZ > 2) exitWith {
        "Raising tailhook, aborting, distance > 100 or _distZ > 2" call BIS_fnc_log;
	format["Plane pos: %1", position _plane] call BIS_fnc_log;
	format["Distance: %1", (_plane distance _posWires)] call BIS_fnc_log;
	_plane animate ["tailhook",0];
        [_plane] call TTT_fnc_tailhookUp;
        deletevehicle _sensor;
};

"Touch down for real" call BIS_fnc_log;

if ((player == _pilot) or (player == _wso)) then {
	titleText ["Touch Down...", "PLAIN DOWN",0.6];
};
_plane setVariable ["jdgHook", 1, true];
[_plane] spawn TTT_fnc_wires;
sleep 0.5;
if ((player == _pilot) or (player == _wso)) then {
	titleText ["Wire caught...", "PLAIN DOWN",0.6];
};
if (speed _plane > 250) exitWith {
  	_plane animate ["tailhook",0];
	deletevehicle _sensor;
	_plane say3D "trapBreak";
	if ((player == _pilot) or (player == _wso)) then {
		titleText ["Wire snapped! Full thrust and pull up!", "PLAIN DOWN",0.6];
	};
};

_sleep_time = 0.8;

// while {(alive _plane) && (_plane animationphase "tailhook" > 0.1)} do
while {alive _plane} do
{
	_tailhook = _plane getVariable "NimitzTailhook";
        if (isNil "_tailhook") exitWith {};
	if (speed _plane < 5) exitWith {};
	_vel_reduced = velocity _plane;
	_plane setvelocity [((_vel_reduced select 0) * 0.75),((_vel_reduced select 1) * 0.75),((_vel_reduced select 2) * 0.75)];
	sleep _sleep_time;
	if (_sleep_time <=0.2) then {_sleep_time = 0.03;} else {_sleep_time = _sleep_time - 0.1;};
};

while{alive _plane} do
{

	_plane setVelocity [(velocity _plane select 0)*0.0,(velocity _plane select 1)*0.0,(velocity _plane select 2)*1];
	sleep 0.1;
	_tailhook = _plane getVariable "NimitzTailhook";
        if (isNil "_tailhook") exitWith {};
	_tailhook call BIS_fnc_log;
	// if (isNil(_plane getVariable "NimitzTailhook")) exitWith {};
};

if ((player == _pilot) or (player == _wso)) then {
	titleText ["Wire released...", "PLAIN DOWN",0.6];
};
"wire released" call BIS_fnc_log;
_plane setVariable ["jdgHook", 0, true];
_plane animate ["tailhook", 0];

deletevehicle _sensor;
sleep 0.1;
if ((_plane animationphase "tailhook" < 1)) exitWith {};

