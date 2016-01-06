// do the actual launch procedure from a catapult

#define DECK 17.5
#define YELLOW 1
#define CIRCLEPOS2(p,d,r) CIRCLEPOS((p select 0), (p select 1), d, r)
#define CIRCLEPOS(x,y,d,r) [x+r*sin(d),y+r*cos(d)]
#define CREWDISTANCE 10

private ["_pilot", "_plane", "_catapult", "_pos", "_name", "_msg",
	 "_catNr", "_steamFX", "_action", "_catDirections", "_dir",
	 "_catEnd", "_nimspots", "_msg", "_weightCalc",
	 "_soldiers", "_yellow", "_posCrew", "_posPlane", "_unit"];

_nimspots = ["nimspots"] call TTT_fnc_global;

_catDirections = [nil, 355, 358.3, 355.3, 0.2];

// unclear why this is vehicle, should be the target?
_plane = vehicle ([_this, 0, ObjNull] call BIS_fnc_param);
_pilot = [_this, 1, ObjNull] call BIS_fnc_param;
_action = [_this, 2, -1] call BIS_fnc_param;
_params = [_this, 3, []] call BIS_fnc_param;
_catapult = [_params, 0, ObjNull] call BIS_fnc_param;
_crew = [_params, 1, true] call BIS_fnc_param;

format ["Activating catapult %1 for %2 in %3 with crew %4", _catapult, _pilot, _plane, _crew] call BIS_fnc_log;

// needed for BIS_fnc_MP
// following BI Threa 181223-Reliable-Animations-Dedicated-Server by sxp2high
TTT_fnc_switchMove = {
  (_this select 0) switchMove (_this select 1);
};

_plane removeAction _action;

if (driver _plane != _pilot) exitWith {};

_pos = _catapult select 0;
_name = _catapult select 1;
_short = _catapult select 2;
_catNr = _catapult select 3;

while {(_plane distance _pos > 10) && alive _plane} do {
  _msg = format ["Move closer to %1 (%2)", _name, _plane distance _pos];
  titleText [_msg, "PLAIN DOWN"];
  sleep 1;
};

// this process is a bit weird, but works
// first stop the plane, then set it at the right spot
// next attach it to the Nimitz, so it owns it's coordinate system
// and the player cannot move it
// set it to a fixed direction

_catEnd = format["%1T", _short];
(format ["End of cat: %1", _catEnd]) call BIS_fnc_log;

_plane setVelocity [0,0,0];
// force plane to catapult
[_plane, _short] call TTT_fnc_setObjPos;
[_plane, _catEnd] call TTT_fnc_setObjDir;
// raise jet blast deflector
[_catNr, 1] spawn TTT_fnc_catapultJbd;

sleep 1;
// hinder player from moving away
_plane attachTo [_nimspots];
_plane setDir (_catDirections select _catNr);

// steam
switch (_catNr) do {
	case 1: { _nimspots setVariable["nimCat1Use", 1, true]};
	case 2: { _nimspots setVariable["nimCat2Use", 1, true]};
	case 3: { _nimspots setVariable["nimCat3Use", 1, true]};
	case 4: { _nimspots setVariable["nimCat4Use", 1, true]};
};

format ["Calling steam for %1", _catNr] call BIS_fnc_log;
_steamFX = [_catNr] spawn TTT_fnc_steamStart;
JDG_steamFX = _catNr;
publicVariable "JDG_steamFX";

if (_crew) then {
  _soldiers = [] call TTT_fnc_soldierTypes;
  _yellow = _soldiers select YELLOW;
  _posPlane = getPos _plane;
  _dir = getDir _plane - 45;
  if (_catNr == 4) then {
    _dir = getDir _plane + 45;
  };
  _posCrew = CIRCLEPOS2(_posPlane, _dir, CREWDISTANCE);
  if (_catNr < 4) then {
    _unit = [_yellow, _posCrew, DECK, getDir _plane + 90] call TTT_fnc_placevehicle;
  } else {
    _unit = [_yellow, _posCrew, DECK, getDir _plane - 90] call TTT_fnc_placevehicle;
  };
  removeAllWeapons _unit;
  _unit setBehaviour "Careless";
  // _unit switchMove "nimitz_cat1";
  [[_unit, "nimitz_cat1"], "TTT_fnc_switchMove", nil, true] call BIS_fnc_MP;
  // [[_unit, "LISTEN_BRIEFING"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;
} else {
  _unit = ObjNull;
};

_msg = "Salute" call TTT_fnc_colAct;
_plane addAction[
	_msg,
	TTT_fnc_launch,
	[_catapult, _unit],
	5,
	false,
	true,
	"",
	"driver _target == _this"
];

// support for showing the weight board and doing the weight calculation
_weightCalc = _plane getVariable "TTT_calcweight";
if (isNil "_weightCalc") then {
  _weightCalc = false;
};
if (_weightCalc) then {
  [_plane] call Yanko_fnc_calcWeight;
};
