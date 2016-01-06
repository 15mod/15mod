private ["_logic", "_units", "_activated", "_type", "_nimCar3"];

// Argument 0 is module logic
_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = [_this,1,[],[[]]] call BIS_fnc_param;
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = [_this,2,true,[true]] call BIS_fnc_param;

_this call BIS_fnc_log;

_type = _logic getVariable "Type";
_type call BIS_fnc_log;

// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then {
  "Boat activated" call BIS_fnc_log;
  [] call TTT_fnc_alive;
  // initialize system to be free, make it public
  _boatRoom = "JDG_carrier_deck_9" call TTT_fnc_global;
  _boatRoom setVariable ["DavitInUse", false, true];
  {
    if (_x isKindOf "Man") then {
      [_x, _type] call TTT_fnc_syncBoatAction;
    };
  } forEach _units;
};

// Module function is executed by spawn command, so returned value is not necessary.
// However, it's a good practice to include one.
true;
