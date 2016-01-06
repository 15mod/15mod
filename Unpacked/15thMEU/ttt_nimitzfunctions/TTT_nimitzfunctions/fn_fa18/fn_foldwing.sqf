// bridge function to fa18
if (isClass(configFile >> "CfgPatches" >> "JS_JC_FA18")) then {
  _this execVM  "\js_jc_fa18\scripts\MISC\FA18_foldwings.sqf";
  waitUntil {(_this select 0) animationphase "l_wingfold" >= 0.7; };
} else {
  "No foldwings available" call BIS_fnc_log;
};
true
