// bridge function to fa18
if (isClass(configFile >> "CfgPatches" >> "JS_JC_FA18")) then {
  _this execVM  "\js_jc_fa18\scripts\LOADOUTS\FA18_instant_loadouts.sqf";
} else {
  "No loadout available" call BIS_fnc_log;
};
true
