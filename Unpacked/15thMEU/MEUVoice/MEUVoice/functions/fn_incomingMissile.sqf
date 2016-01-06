/* 
* fn_incomingMissile
* fight9
*
* _veh addEventHandler ["IncomingMissile","_this call meu_fnc_incomingMissile;"];
* 
* meu_missile(1-12)(H/L)
*
* 
TODO: 

make fnc_getCrew globally defined - meu_fnc_bitchinBetty_getCrew
*/

#define RANGE(MIN,MAX)	_bearing > MIN && _bearing < MAX
#define GETRANGE(MIN,MAX,NUMBER) if ( RANGE(MIN,MAX) ) exitWith { #NUMBER };

// local fnc
/* private "_fnc_getCrew";
_fnc_getCrew = {
	private ["_crew","_isNull"];
	_isNull = { if (!isNull _this && {isPlayer _this}) then { _crew pushBack _this; }; };
	_crew = [];
	{ _x call _isNull } forEach [driver _this, commander _this, gunner _this];
	_crew
}; */
 
private ["_unit","_enemy","_bearing","_clock","_height","_sound"];
// params
_unit = _this select 0;
//_ammo = _this select 1;
_enemy = _this select 2;

// checks
if !(alive _unit) exitWith {false};
if !(local _unit) exitWith {false};
if (count crew _unit < 1) exitWith {false};
if !(isEngineOn _unit) exitWith {false};

// get relative direction
_bearing = [_unit,_enemy] call BIS_fnc_relativeDirTo;

// get clock dir
_clock = call {
	// (MIN,MAX,NUM)
	GETRANGE(0,15,12)
	GETRANGE(15,45,1)
	GETRANGE(45,75,2)
	GETRANGE(75,105,3)
	GETRANGE(105,135,4)
	GETRANGE(135,165,5)
	GETRANGE(165,195,6)
	GETRANGE(195,225,7)
	GETRANGE(225,255,8)
	GETRANGE(255,285,9)
	GETRANGE(285,315,10)
	GETRANGE(315,345,11)
	GETRANGE(345,360,12)
	""
};
if (_clock == "") exitWith {false};

// determine height above sea level
_height = if (getPosASL _unit select 2 < getPosASL _enemy select 2) then [{"H"},{"L"}];

// combine values
_sound = "meu_missile" + _clock + _height;

//hint str _sound;
playSound [_sound,true];
//[[_sound,true],"BIS_fnc_playSound",(_unit call _fnc_getCrew)] call BIS_fnc_MP; 

true 