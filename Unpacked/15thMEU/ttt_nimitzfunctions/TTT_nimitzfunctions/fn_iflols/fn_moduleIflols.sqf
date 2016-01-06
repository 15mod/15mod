private ["_logic", "_units", "_activated"];

// Argument 0 is module logic
_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = [_this,1,[],[[]]] call BIS_fnc_param;
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = [_this,2,true,[true]] call BIS_fnc_param;

[str(_this)] call BIS_fnc_log;

// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then {
  [] call TTT_fnc_alive;
  "IFLOLS activated" call BIS_fnc_log;
  {
    [_x] call TTT_fnc_syncIflols;
  } forEach _units;
};

// Module function is executed by spawn command, so returned value is not necessary.
// However, it's a good practice to include one.
true;
