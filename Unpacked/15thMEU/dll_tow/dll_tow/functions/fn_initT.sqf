_T = _this select 0;
_towing = _T getVariable "dll_tow_towing";


// _action = _T addaction ["Attach vehicle", "JDG_carrier\scr\dll_tow\action_attach.sqf", [], 10, true, true, "", "_target getvariable ""dll_tow_canAttach"""];
_action = _T addaction ["Attach vehicle", DLL_fnc_action_attach, [], 10, true, true, "", "_target getvariable ""dll_tow_canAttach"""];
if(isnil("_towing")) then {
  _T setVariable ["dll_tow_towing", false];
  _towing = false;
};
if(!_towing) then {
  sleep 0.5; //make sure all vars are sent.
  // _nul = [_T] execVM "JDG_carrier\scr\dll_tow\searchP.sqf";
  _nul = [_T] spawn DLL_fnc_searchP;
};
