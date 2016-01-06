//script to simulate carrier arrestor recovery 
//created by Franzee
//modified by John_Spartan


// private ["_FA18","_sensor","_speed","_vel_initial","_vel_reduced","_vel_updated","_distance","_distAdj"];
_FA18 = _this;
_FA18_pilot = driver _FA18;
_FA18_WSO = gunner _FA18;
_FA18 animate ["tailhook",1];
_sensor = "EmptyDetector" createVehicle [0,0,0];
sleep 2;


while {(alive _FA18) && (_FA18 animationphase "tailhook" > 0.1)} do 
{
	
	_sensor setpos [(getpos _FA18 select 0),(getpos _FA18 select 1)];
	_speed = speed _FA18;
	If (((getpos _FA18 select 2) - (getpos _sensor select 2) < 1) or (getpos _FA18 select 2 < 1)) exitWith {}; 
	sleep 0.1;
};

if (_FA18 distance (nearestObject [_FA18, "JDG_carrier_4"]) > 50) exitWith {_FA18 animate ["tailhook",0]; deletevehicle _sensor;};


if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Touch Down...", "PLAIN DOWN",0.6];};
_animCable = [_FA18] execVM "\js_jc_fa18\scripts\CARRIER_OPS\FA18_nimitz_wire_anim.sqf";
_FA18 animate ["tailhook",0.3];

sleep 0.5;
if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Wire caught...", "PLAIN DOWN",0.6];};
if (speed _FA18 > 250) exitWith {_FA18 animate ["tailhook",0]; deletevehicle _sensor; _FA18 say3D "FA18_tailhook_trap_snapped_sound"; if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Wire snapped! Full trust and pull up!", "PLAIN DOWN",0.6];};};
_FA18 say3D "FA18_tailhook_trap_sound";

_sleep_time = 0.8;

while {(alive _FA18) && (_FA18 animationphase "tailhook" > 0.1)} do 
{
	If (speed _FA18 < 5) exitWith {};
	_vel_reduced = velocity _FA18;
	_FA18 setvelocity [((_vel_reduced select 0) * 0.75),((_vel_reduced select 1) * 0.75),((_vel_reduced select 2) * 0.75)];
	sleep _sleep_time;
	if (_sleep_time <=0.2) then {_sleep_time = 0.03;} else {_sleep_time = _sleep_time - 0.1;};
};

while{(alive _FA18) && (_FA18 animationphase "tailhook" > 0.1)} do 
{
	
	_FA18 setVelocity [(velocity _FA18 select 0)*0.0,(velocity _FA18 select 1)*0.0,(velocity _FA18 select 2)*1];
	sleep 0.1;
};

if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Wire released...", "PLAIN DOWN",0.6];};
deletevehicle _sensor;
sleep 0.1;
if ((_FA18 animationphase "tailhook" < 1)) exitWith {}; 

		