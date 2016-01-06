private ["_logic", "_units", "_activated", "_test"];

// Argument 0 is module logic
_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = [_this,1,[],[[]]] call BIS_fnc_param;
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = [_this,2,true,[true]] call BIS_fnc_param;

_this call BIS_fnc_log;

if (_activated) then {
  {
    diag_log "Hello";
    if (_x isKindOf "jdg_carrier_spawner") then {
      hint "A nimitz is on map";
      "FOUND A NIMITZ" call BIS_fnc_log;
      _test = _x getVariable "test";
      hint _test;
      _test call BIS_fnc_log;
      ["This Nimitz is called %1", vehicleVarName _x] call BIS_fnc_log;
    };
  } forEach _units; 
};
