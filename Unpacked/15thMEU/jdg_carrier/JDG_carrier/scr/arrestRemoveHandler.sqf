// TS
if (isDedicated) exitWith {};

_jet = _this select 0;
_action = _this select 2;

_jet removeAction _action;
_jet removeEventHandler ["LandedTouchDown", 0];
_jet setVariable ["jdgHOOK", 0];
_jet animate ["tailhook",0];

_enableArrest = _jet addAction[("<t color=""#00A0FA"">" + ("Tailhook Down") + "</t>"), "\JDG_carrier\scr\arrestAddHandler.sqf", [], 5, false, true, "", 
								"((getPosASL _target) select 2 > 20)
								and (speed _target > 150)
								and (speed _target < 500)
								and ((_target distance nimspots) < 5000)
								and ([nimspots, _target] call BIS_fnc_relativeDirTo < 250)
								and ([nimspots, _target] call BIS_fnc_relativeDirTo > 110)"];
