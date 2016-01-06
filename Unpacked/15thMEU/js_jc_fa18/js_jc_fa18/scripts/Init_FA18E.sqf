//Script created for the original F/A-18 mod
//by: John_Spartan & Saul
//by EULA licence this mod is distribuded with you have no permissions to edit/distribute this code
//WITHOUT permissions from it's original authors.

private ["_FA18"];
_FA18 = _this select 0;

_FA18 animate ["rearming_done_switch",1];
_FA18 animate ["eject_switch",0];
_FA18 animate ["rcanopy_hide",0];
_FA18 animate ["ejection_seat_hide",0];
_FA18 animate ["init_done_switch",0];
_FA18 animate ["tailhook_action_switch",0];
_FA18 animate ["paint_scheme_switch",0.4];
_FA18 animate ["pylon_3_hide",0];
_FA18 animate ["pylon_4_hide",0];
_FA18 animate ["pylon_5_hide",0];
_FA18 animate ["pylon_6_hide",0];
_FA18 animate ["pylon_7_hide",0];
_FA18 animate ["pylon_8_hide",0];

if (isPipEnabled) then {_FA18 animate ["Mirrors_pip_hide",0];} else {_FA18 animate ["Mirrors_pip_hide",1];};

[_FA18] execvm "js_jc_fa18\scripts\FUEL_CONTROL\FA18_fuel_init.sqf"; 
[_FA18] execvm "js_jc_fa18\scripts\FUEL_CONTROL\FA18_fuel_usage.sqf";
[_FA18] execvm "js_jc_fa18\scripts\FUEL_CONTROL\FA18_fuel_hud_update.sqf";
_FA18_fuel_tank_drop = _FA18 addEventHandler ["Fired",{_FA18_fuel_tank_drop = _this execVM "js_jc_fa18\scripts\FUEL_CONTROL\FA18_auxilary_fueltank_control.sqf"}];

//[_FA18] spawn JS_JC_fnc_FA18_FX_Gforce;
//[_FA18] spawn JS_JC_fnc_FA18_FX_Sonic_Boom;

//@RS compatability
//so far there is only two official expansions/plugins supported by original 
//authors of this F/A-18 mod, this is a compatability solution with no dependacies
//by: John_Spartan & Saul
if ((isClass(configFile >> "CfgPatches" >> "rs_mod_for_fa18")) and ((typeOf _FA18 == "rs_mod_for_fa18_E") or (typeOf _FA18 == "rs_mod_for_fa18_F"))) then {_FA18_RS_mod_init = [_FA18] execVM "rs_mod_for_fa18\scripts\rs_mod_for_fa18_init.sqf";};

//@EricJ_Blue_Angels mod compatability
//supported by original 
//authors of this F/A-18 mod, this is a compatability solution with no dependacies
//by: John_Spartan & Saul
if ((isClass(configFile >> "CfgPatches" >> "EricJ_BA_fa18")) and ((typeOf _FA18 == "EricJ_BA_fa18_E") or (typeOf _FA18 == "EricJ_BA_fa18_F"))) then {_FA18 animate ["pylon_3_hide",1]; _FA18 animate ["pylon_4_hide",1]; _FA18 animate ["pylon_5_hide",1]; _FA18 animate ["pylon_6_hide",1]; _FA18 animate ["pylon_7_hide",1]; _FA18 animate ["pylon_8_hide",1];};

_FA18 animate ["init_done_switch",1];

while {true} do 
{

If (_FA18 animationphase "l_wingfold" >= 0.0001 && isengineon _FA18 && speed _FA18 > 40) Then {_FA18 animate ["l_wingfold",0];};
If (_FA18 animationphase "r_wingfold" >= 0.0001 && isengineon _FA18 && speed _FA18 > 40) Then {_FA18 animate ["r_wingfold",0];};
if (("js_m_fa18_buddypod_x1" in magazines _FA18)) then {_FA18 animate ["Buddy_Pod_attach",0];} else {_FA18 animate ["Buddy_Pod_attach",1];};
If ((damage _FA18 > 0.85) and (player != driver _FA18)) then {[_FA18] spawn JS_JC_fnc_FA18_Ejection_E;};
If !(alive _FA18) ExitWith {};

sleep 1.0; 
};
 





