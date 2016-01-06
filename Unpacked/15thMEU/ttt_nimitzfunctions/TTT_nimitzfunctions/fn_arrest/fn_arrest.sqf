"arrest system enabled" call BIS_fnc_log;

private ["_plane", "_tailhookUp", "_msg"];

_plane = _this select 0;

// if NimitzTailhook is set, a player tries to lower hook 
// a second time. We ignore that
_tailhookUp = _plane getVariable "NimitzTailhook";
_tailhookUp call BIS_fnc_log;
if (!(isNil "_tailhookUp")) exitWith {};

"Action for tailhookUp added" call BIS_fnc_log;
_msg = "Tailhook Up" call TTT_fnc_colAct;
_tailhookUp = _plane addAction [_msg, TTT_fnc_tailhookUp , [], 5, false, true, "", "driver _target == _this"];

_plane setVariable ["NimitzTailhook", _tailhookUp];
_plane animate ["tailhook", 1];
_plane call TTT_fnc_useTailhook;
