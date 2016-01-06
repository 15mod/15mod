private ["_logic", "_units", "_activated", "_flightdeck", "_hangar", 
         "_tractor", "_dir", "_crew", "_brief", "_once"];

// Argument 0 is module logic
_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = [_this,1,[],[[]]] call BIS_fnc_param;
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = [_this,2,true,[true]] call BIS_fnc_param;

[str(_this)] call BIS_fnc_log;

_flightdeck = _logic getVariable "Flightdeck";
_hangar = _logic getVariable "Hangar";
_tractor = _logic getVariable "UGVTractor";
_crew = _logic getVariable "Crew";
_brief = _logic getVariable "Briefing";

// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then {
  [] call TTT_fnc_alive;
  _once = false;
  "Ambiance activated" call BIS_fnc_log;
  // for now use evil globals to populate the carrier
  {
    if (_x isKindOf "jdg_carrier_spawner") then {
      _once = true;
      _dir = getDir _x;
      [_x] call TTT_fnc_syncAmbiance;
    };
  } forEach _units;
  if (!_once) then {
    {
      [_x] call TTT_fnc_syncAmbiance;
    } forEach TTT_NimitzCarriers;
  };
};


