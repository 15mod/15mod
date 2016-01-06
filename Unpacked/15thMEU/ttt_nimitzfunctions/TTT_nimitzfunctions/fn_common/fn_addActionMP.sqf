// based upon
// http://forums.bistudio.com/showthread.php?156406-AddAction-multiplayer-for-allplayers
private["_object", "_title", "_script", "_arguments", "_priority", "_showWindow", "_hideOnUse",
        "_shortCut", "_condition"];
_object = _this select 0;
_title = _this select 1;
_script = _this select 2;
_arguments = _this select 3;
_priority = _this select 4;
_showWindow = _this select 5;
_hideOnUse = _this select 6;
_shortCut = _this select 7;
_condition = _this select 8;

if(isNull _object) exitWith {};

_title = _title call TTT_fnc_colAct;

_object addAction [_title, _script, _arguments, _priority, _showWindow, _hideOnUse, _shortCut, _condition];
