//script to simulate mid air refueling from "buddy pod" of FA18 F
//created by Franzee
//modified by John_Spartan

// private ["_FA18_TANKER","_FA18_CLIENT","_sensor","_speed_tanker","_altitude_tanker","_refuel_probe","_refuel_drogue","_refuel_probe_pos","_refuel_drogue_pos","_Fuel_client","_vel_tanker","_vel_tanker_x","_vel_tanker_y","_vel_tanker_z"];
_FA18_TANKER = _this;
_FA18_TANKER_PILOT = driver _FA18_TANKER;
_FA18_TANKER_WSO = gunner _FA18_TANKER;

_sensor = "EmptyDetector" createVehicle [0,0,0];
_sensor attachTo [_FA18_TANKER,[0,0,0],"refuel_drogue"];

sleep 0.1;

_FA18_CLIENT = nearestobject [_sensor,"PLANE"];
_FA18_CLIENT_PILOT = driver _FA18_CLIENT;
_FA18_CLIENT_WSO = gunner _FA18_CLIENT;


if ((player == _FA18_CLIENT_PILOT) or (player == _FA18_CLIENT_WSO)) then {titleText ["Align refueling probe with the connetcion \n point on refueling drogue...", "PLAIN DOWN",1];};
if (_FA18_CLIENT animationphase "fuel_probe" < 0.5) exitWith {if ((player == _FA18_CLIENT_PILOT) or (player == _FA18_CLIENT_WSO)) then {titleText ["Refueling probe must be extended...", "PLAIN DOWN",1];};};
if (_FA18_TANKER animationphase "auxtank_switch" < 0.1) exitWith {if ((player == _FA18_CLIENT_PILOT) or (player == _FA18_CLIENT_WSO)) then {titleText ["Refueling not possible, \n not enough fuel left to share...", "PLAIN DOWN",1];};};
if (_FA18_TANKER animationphase "auxtank_switch" < 0.1) exitWith {if ((player == _FA18_TANKER_PILOT) or (player == _FA18_TANKER_WSO)) then {titleText ["Refueling not possible, \n not enough fuel left to share...", "PLAIN DOWN",1];};};

while {(alive _FA18_TANKER) && (alive _FA18_CLIENT) && (_FA18_CLIENT animationphase "fuel_probe" > 0.5)} do 
{
	
	
	_speed_tanker = speed _FA18_TANKER;
	_altitude_tanker = getPosASL _FA18_TANKER select 2;

	_refuel_probe = _FA18_CLIENT selectionposition "refuel_probe";
	_refuel_drogue = _FA18_TANKER selectionposition "refuel_drogue";
	_refuel_probe_pos = _FA18_CLIENT ModelToWorld _refuel_probe;
	_refuel_drogue_pos = _FA18_TANKER ModelToWorld _refuel_drogue;
	_distance = _refuel_probe_pos distance _refuel_drogue_pos;

	If (_distance < 7) exitWith {};
 
	sleep 0.5;
};

switch (typeOf _FA18_CLIENT) do 
{
		case "JS_JC_FA18E": {_FA18_CLIENT attachTo [_FA18_TANKER,[-0.8,-6.8,-0.8],"refuel_drogue"];};
		case "JS_JC_FA18F": {_FA18_CLIENT attachTo [_FA18_TANKER,[-0.8,-6.5,-1.0],"refuel_drogue"];};
};

if ((player == _FA18_TANKER_PILOT) or (player == _FA18_TANKER_WSO)) then {titleText ["Fuel probe attached, initiating fuel transfer...", "PLAIN DOWN",1];};
if ((player == _FA18_CLIENT_PILOT) or (player == _FA18_CLIENT_WSO)) then {titleText ["Fuel probe attached, initiating fuel transfer...", "PLAIN DOWN",1];};

while {(alive _FA18_TANKER) && (alive _FA18_CLIENT) && (_FA18_CLIENT animationphase "fuel_probe" > 0.5)} do 
{
	
	_Fuel_client = fuel _FA18_CLIENT;
	_FA18_CLIENT setfuel (_Fuel_client + 0.01);

	_Fuel_TANKER = _FA18_TANKER animationPhase "auxtank_switch";
	_FA18_TANKER animate ["auxtank_switch",(_Fuel_TANKER -0.0075)];
	
	If (_Fuel_client > 0.98) exitWith 
	{
		if ((player == _FA18_TANKER_PILOT) or (player == _FA18_TANKER_WSO)) then {titleText ["Refueling complete...", "PLAIN DOWN",1];};
		if ((player == _FA18_CLIENT_PILOT) or (player == _FA18_CLIENT_WSO)) then {titleText ["Refueling complete...", "PLAIN DOWN",1];};
	};
	
	If (_Fuel_TANKER < 0.1) exitWith 
	{
		if ((player == _FA18_TANKER_PILOT) or (player == _FA18_TANKER_WSO)) then {titleText ["Refueling canceled, \n not enough fuel left to share...", "PLAIN DOWN",1];};
		if ((player == _FA18_CLIENT_PILOT) or (player == _FA18_CLIENT_WSO)) then {titleText ["Refueling canceled, \n not enough fuel left to share...", "PLAIN DOWN",1];};
	};

	_vel_tanker = velocity _FA18_TANKER;
	_vel_tanker_x = _vel_tanker select 0;
	_vel_tanker_y = _vel_tanker select 1;
	_vel_tanker_z = _vel_tanker select 2;

	If (_vel_tanker_x > 350) exitWith 
	{
		if ((player == _FA18_TANKER_PILOT) or (player == _FA18_TANKER_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",1];};
		if ((player == _FA18_CLIENT_PILOT) or (player == _FA18_CLIENT_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",1];};

	};
	If (_vel_tanker_y > 350) exitWith 
	{
		if ((player == _FA18_TANKER_PILOT) or (player == _FA18_TANKER_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",1];};
		if ((player == _FA18_CLIENT_PILOT) or (player == _FA18_CLIENT_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",1];};

	};

	If (_vel_tanker_z > 350) exitWith 
	{
		if ((player == _FA18_TANKER_PILOT) or (player == _FA18_TANKER_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",1];};
		if ((player == _FA18_CLIENT_PILOT) or (player == _FA18_CLIENT_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",1];};

	};
	sleep 1;
};


sleep 1;
detach _FA18_CLIENT;
_FA18_TANKER animate ["fuel_drogue",0];
_FA18_CLIENT animate ["fuel_probe",0];
deletevehicle _sensor;
exit;

