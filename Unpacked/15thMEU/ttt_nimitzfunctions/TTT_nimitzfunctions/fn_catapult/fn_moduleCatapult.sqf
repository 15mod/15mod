private ["_logic", "_units", "_activated", "_v"];

// Argument 0 is module logic
_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = [_this,1,[],[[]]] call BIS_fnc_param;
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = [_this,2,true,[true]] call BIS_fnc_param;

// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then {
  [] call TTT_fnc_alive;
  "Catapult activated" call BIS_fnc_log;
  {
    // use the vehicle, not the crew, if any
    _v = vehicle _x;
    if (_v isKindOf "Plane") then {
      [_v, _logic] spawn TTT_fnc_syncCatapult;
    };
  } forEach _units;
};

// Module function is executed by spawn command, so returned value is not necessary.
// However, it's a good practice to include one.
true;
