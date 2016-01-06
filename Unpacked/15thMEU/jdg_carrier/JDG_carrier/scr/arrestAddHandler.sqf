// TS
if (isDedicated) exitWith {};

_jet = _this select 0;
_action = _this select 2;

_jet removeAction _action;
_jet setVariable ["jdgHOOK", 1];
_enableArrest = _jet addEventHandler ["LandedTouchDown", {_this execVM "\JDG_carrier\scr\arrest.sqf"}];
_jet animate ["tailhook",1];

_jet addAction [("<t color=""#00A0FA"">" + ("Tailhook Up") + "</t>"), "\JDG_carrier\scr\arrestRemoveHandler.sqf", [], 5, false, true, "", "driver _target == _this"];
