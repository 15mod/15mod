_T = _this select 0;
_P = _T getVariable "dll_tow_P";
[_T, _P] spawn DLL_fnc_tow;
_T setvariable ["dll_tow_canAttach", false];
//_aID = _this select 2;
//_T removeaction _aID;
