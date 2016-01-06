private ["_unit", "_height"];

_unit = [_this, 0, ObjNull] call BIS_fnc_param;
_height = [_this, 1, 17.5] call BIS_fnc_param;

// doesn't really help on the server
// waitUntil {alive _unit};
// if (isDedicated) exitWith {diag_log "No simple sync on dedi"};

"Syncing on client and server" call BIS_fnc_log;

if (_unit isKindOf "Air") then {
  if (!(_unit isKindOf "JS_JC_FA18")) then {
    [_unit] call TTT_fnc_syncTailhook;
  };
  [_unit, ObjNull] call TTT_fnc_syncCatapult;
  // compatibility with builtin functions
  _unit setVariable ["TTT_catHook", true, true];
  [_unit] call TTT_fnc_syncFuelAction;
  [_unit] call TTT_fnc_syncIFLOLS;
};

if (_unit isKindOf "Man") then {
  [_unit] call TTT_fnc_syncBoatAction;
  [_unit] call TTT_fnc_syncRepair;
  _unit addWeapon "B_UAVTerminal";
};

[_unit, _height] call TTT_fnc_syncOnShip;

waitUntil {!isNil "dll_tow_defs"};
[vehicle _unit] call DLL_fnc_syncTowing;
