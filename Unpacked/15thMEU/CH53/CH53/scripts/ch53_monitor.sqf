// [] = execVM "\ch53\scripts\alert.sqf"; 

_debug = false;

_vehicle = _this select 0;
_maxspeed = 315;
_initheight = 2;
_wait = 0.5;

//Initiate Warning Flags
	_CritHydraulics = false;
	_CritEngine = false;
	_WarnCollision = false;
	_WarnDamage = false;
	_WarnEngine = false;
	_WarnFuelPres = false;
	_WarnFuel = false;
	_WarnSink = false;
	_CautRamp = false;
	_CautFuel = false;

//Initiate Variables
	_fuel = 0;
	_fuelLow = 0.5;
	_fuelCrit = 0.1;
	_resultfuel = 0;
	

functionName_incomingMissile = 
{
    private["_unit", "_ammo", "_whoFired"];
	_unit = _this select 0;
	_ammo = _this select 1;

	_whoFired = _this select 2;
 	_dirPlayer = getDir _unit;
	_dirEnemy = getDir _whoFired;
	_altPlayer = getPosAsl _unit select 2;
	_altEnemy = getPosAsl _whoFired select 2;
	
		if(_altPlayer - _altEnemy < 0)then
		{	
			if((_dirPlayer - _dirEnemy > -45 &&_dirPlayer - _dirEnemy < 45) || (_dirPlayer - _dirEnemy > 315 || _dirPlayer - _dirEnemy < -315))then
			{
				playSound ["Missile6OClockH", true];
				if (_debug) then {hint "DEBUG: Rocket 6 oClock"};
			};
			if((_dirPlayer - _dirEnemy > -315 &&_dirPlayer - _dirEnemy < -225) || (_dirPlayer - _dirEnemy > 45 &&_dirPlayer - _dirEnemy < 135))then
			{
				playSound ["Missile3OClockH", true];
				if (_debug) then {hint "DEBUG: Rocket 3 oClock"};
			};
			if((_dirPlayer - _dirEnemy > -225 &&_dirPlayer - _dirEnemy < -135) || (_dirPlayer - _dirEnemy > 135 &&_dirPlayer - _dirEnemy < 225))then
			{
				playSound ["Missile12OClockH", true];
				if (_debug) then {hint "DEBUG: Rocket 12 oClock"};
			};
			if((_dirPlayer - _dirEnemy > -135 &&_dirPlayer - _dirEnemy < -45) || (_dirPlayer - _dirEnemy > 225 &&_dirPlayer - _dirEnemy < 335))then
			{
				playSound ["Missile9OClockH", true];
				if (_debug) then {hint "DEBUG: Rocket 9 oClock"};
			};
	
		}
	else
	{	
    
        if(_altPlayer - _altEnemy > 0)then
        {						
			if((_dirPlayer - _dirEnemy > -45 &&_dirPlayer - _dirEnemy < 45) || (_dirPlayer - _dirEnemy > 315 || _dirPlayer - _dirEnemy < -315))then
			{
				playSound ["Missile6OClockL", true];
				if (_debug) then {hint "DEBUG: Rocket 6 oClock"};
			};
			if((_dirPlayer - _dirEnemy > -315 &&_dirPlayer - _dirEnemy < -225) || (_dirPlayer - _dirEnemy > 45 &&_dirPlayer - _dirEnemy < 135))then
			{
				playSound ["Missile3OClockL", true];
				if (_debug) then {hint "DEBUG: Rocket 3 oClock"};
			};
			if((_dirPlayer - _dirEnemy > -225 &&_dirPlayer - _dirEnemy < -135) || (_dirPlayer - _dirEnemy > 135 &&_dirPlayer - _dirEnemy < 225))then
			{
				playSound ["Missile12OClockL", true];
				if (_debug) then {hint "DEBUG: Rocket 12 oClock"};
			};
			if((_dirPlayer - _dirEnemy > -135 &&_dirPlayer - _dirEnemy < -45) || (_dirPlayer - _dirEnemy > 225 &&_dirPlayer - _dirEnemy < 335))then
			{
				playSound ["Missile9OClockL", true];
				if (_debug) then {hint "DEBUG: Rocket 9 oClock"};
			};
        };
	};
};


_EHMissile = _vehicle addEventHandler ["IncomingMissile", "_this call functionName_incomingMissile"];


while {(player in (crew _vehicle)) && (alive _vehicle)} do {
//while {(alive _vehicle)} do {
	_driver = driver _vehicle;
	_speed = speed _vehicle;
	_alt = (getPosASL _vehicle) select 2;
	_Ralt = (getPos _vehicle) select 2;
	_fuel = fuel _vehicle;
	sleep _wait;
	_resultfuel = _fuel - (fuel _vehicle);
	_resultalt = _alt - ((getPosASL _vehicle) select 2);
	_resultRalt = _Ralt - ((getPos _vehicle) select 2);
	
	_hydraulicsFailT = _vehicle getVariable "HydraulicsFailure";
	_engineFailT = _vehicle getVariable "EngineFailure";
	_rotorFailT = _vehicle getVariable "RotorFailure";
	_avionicsFailT = _vehicle getVariable "AvionicsFailure";
	
	//hintsilent format ["aaa %1",(fuel _vehicle )];
	
	// WARNING // LOOP // Aircraft is rapidly approaching nearby terrain
	if((_resultRalt > (6 * _wait)) && !(_WarnSink) && (_Ralt < 30) && !(_WarnCollision)) then {
		playSound ["cup_dws_critical_pullup",true];
		if (_debug) then {hint "DEBUG: Pull Up"};
		sleep (1.4 - _wait);
	};
	
	// CRITICAL // LOOP // Hydraulics Failure
	if((_hydraulicsFailT) && !(_CritHydraulics)) then {
		playSound ["cup_dws_critical_hydraulicsfailure",true];
		if (_debug) then {hint "DEBUG: Hydraulics Failure"};
		sleep (4 - _wait);
	};
	
	// CRITICAL // LOOP // Engine Failure
	if((_engineFailT) && !(_CritEngine)) then {
		playSound ["cup_dws_critical_enginefailure",true];
		if (_debug) then {hint "DEBUG: Engine Failure"};
		sleep (4 - _wait);
	};
	
	// WARNING // SINGLE // Damage Critical	
	if((damage _vehicle > 0.9) && !(_WarnDamage)) then {
		playSound ["cup_dws_warning_damagecritical",true];
		if (_debug) then {hint "DEBUG: Damage Critical"};
		sleep (4 - _wait);
	};
	
	// WARNING // LOOP // Loosing Fuel
	if((_resultfuel > (0.015 * _wait)) && !(_WarnFuelPres)) then {
		playSound ["cup_dws_warning_fuelpressure",true];
		if (_debug) then {hint "DEBUG: Fuel Pressure"};
		sleep 5;
	};
	
	// WARNING // LOOP // Aircraft is sinking too quickly
	if((((_resultalt > (2 * _wait)) && (!isEngineOn _vehicle))||((_resultalt > (15 * _wait)) && (isEngineOn _vehicle))) && !(_WarnSink)) then {
		playSound ["cup_dws_warning_sinkrate",true];
		if (_debug) then {hint "DEBUG: Sinkrate"};
		sleep 5;
	};
	
	// WARNING // SINGLE // Fuel Critical
	if(( fuel _vehicle < _fuelCrit) && !(_WarnFuel)) then {
		playSound ["cup_dws_warning_fuelcritical",true];
		_WarnFuel = true;
		_CautFuel = true;
		if (_debug) then {hint "DEBUG: Fuel Critical"};
		sleep 5;
	};
	
	// CAUTION // LOOP // Aircraft is going too fast
	if((_speed > _maxspeed) && !(_WarnSink)) then {
		playSound ["cup_dws_caution_overspeed",true];
		if (_debug) then {hint "DEBUG: Maximum Speed"};
		sleep 5;
	};
	
	// CAUTION // SINGLE // Ramp Open
	if((_vehicle animationPhase "ramp_bottom" > 0) && !(_CautRamp) && (_Ralt > 50)) then {
		playSound ["cup_dws_caution_rampopen",true];
		_CautRamp = true;
		if (_debug) then {hint "DEBUG: Ramp Open"};
		sleep 5;
	};
	
	// CAUTION // SINGLE // Fuel Low
	if(( fuel _vehicle < _fuelLow) && !(_CautFuel)) then {
		playSound ["cup_dws_caution_fuelow",true];
		_CautFuel = true;
		if (_debug) then {hint "DEBUG: Fuel Low"};
		sleep 5;
	};
	
	// ************ RESET VARIABLES *************
	
	if((_alt < 50) && (_CautRamp)) then {
		_CautRamp = false;
	};
	
	if((fuel _vehicle > _fuelCrit) && (_WarnFuel)) then {
		_WarnFuel = false;
	};
	
	if((fuel _vehicle > _fuelLow) && (_CautFuel)) then {
		_WarnFuel = false;
	};
	
};


	_vehicle removeAllEventHandlers "IncomingMissile";