// Based on JDogs launch script, rewritten by TeTeT

private ["_plane", "_catapult", "_action", "_catNr", "_time", "_vSpeed",
         "_nimspots", "_use", "_cat1", "_cat2", "_cat3", "_cat4"];

_nimspots = ["nimspots"] call TTT_fnc_global;

_cat1 = ["JDG_carrier_deck_5"] call TTT_fnc_global;
_cat2 = ["JDG_carrier_deck_4"] call TTT_fnc_global;
_cat3 = ["JDG_carrier_deck_8"] call TTT_fnc_global;
_cat4 = ["JDG_carrier_deck_10"] call TTT_fnc_global;

_plane = [_this, 0] call BIS_fnc_param;
_action = [_this, 2] call BIS_fnc_param;
_params = [_this, 3, []] call BIS_fnc_param;
_catapult = [_params, 0, ObjNull] call BIS_fnc_param;
_crew = [_params, 1, ObjNull] call BIS_fnc_param;

_catNr = [_catapult, 3] call BIS_fnc_param;

if (vehicle player != _plane) exitWith {};
_plane removeAction _action;

_crew switchMove "nimitz_cat2";

_time = 1 + random 2;

// give some time for shooter animation to finish
if (!isNull _crew) then {
  _time = _time + 4;
};
sleep _time;

// Blur pilot
_catBlur = ppEffectCreate ["radialBlur", 450];
_catBlur ppEffectEnable true;
_catBlur ppEffectAdjust [0.01,0.01,0.15,0.15];
_catBlur ppEffectCommit 1;

// Launch
detach _plane;

_nimspots setVariable ["nimCat1FX", 1, true];
[_plane] spawn TTT_fnc_steamShot;
if (_catNr == 1) then {
  _cat1 say3D "catLaunch2";
};
if (_catNr == 2) then {
  _cat2 say3D "catLaunch2";
};
if (_catNr == 3) then {
  _cat3 say3D "catLaunch2";
};
if (_catNr == 4) then {
  _cat4 say3D "catLaunch2";
};

// Modified launch by Yanko
_vSpeed = _plane getVariable "TTT_vLaunch";

_v=1;
while {(_v < _vSpeed) and (alive _plane)} do {
	format  ["Accelerating %1", speed _plane] call BIS_fnc_log;
	// TeTeT: set the vert velocity to .8 to jump over the gaps
	(vehicle _plane) setvelocity [_v * sin (getdir (vehicle player)), _v * cos (getdir (vehicle player)), .8];
	// _v=_v+6;
	// Yanko: accelerate proportionally to max 69.44 m/s = 250 km/h
	_v = _v + 5 * _vSpeed / 69.44;
	// TeTeT: increase delay to accelerate until end of runway on carrier
	sleep 0.25;
};

// Fade out Blur
_catBlur ppEffectAdjust [0,0,0,0];
_catBlur ppEffectCommit 5;

// stop steam
_nimspots setVariable ["nimCat1FX", 0, true];

sleep 3;

[_catNr, 0] spawn TTT_fnc_catapultJbd;
_use = format ["nimCat%1Use", _catNr];
_nimspots setVariable [_use, 0, true];

deleteVehicle _crew;

sleep 10;
ppEffectDestroy _catBlur;  // Remove blur effect so it can be used again

// initialize action again
[_plane, objNull, _catapult] call TTT_fnc_addCatapultAction;
