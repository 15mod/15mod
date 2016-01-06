"tailhook up" call BIS_fnc_log;
private ["_plane", "_tailhookUp"];

_plane = _this select 0;

_tailhookUp = _plane getVariable "NimitzTailhook";

if (!isNil "_tailhookUp") then {
	_plane removeAction _tailhookUp;
};

_plane setVariable ["NimitzTailhook", nil];
