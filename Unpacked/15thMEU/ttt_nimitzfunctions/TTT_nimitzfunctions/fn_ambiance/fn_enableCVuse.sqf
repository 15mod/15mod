private ["_v", "_plane"];

_v = _this select 0;

if (_v isKindOf "Plane") then {
  _plane = _v;
  if (!(_plane isKindOf "JS_JC_FA18")) then {
    [[_plane], "TTT_fnc_syncTailhook", true, true] spawn BIS_fnc_MP; 
  };
  [[_plane, ObjNull], "TTT_fnc_syncCatapult", true, true] spawn BIS_fnc_MP;
  [[_plane], "TTT_fnc_syncFuelAction", true, true] spawn BIS_fnc_MP;
  [[_plane], "TTT_fnc_syncIFLOLS", true, true] spawn BIS_fnc_MP;
  [_plane] spawn DLL_fnc_syncTowing;
  (format ["%1 fit for carrier use", _plane]) call BIS_fnc_log;
};
