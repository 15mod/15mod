private ["_Unit", "_FA18", "_Paintscheme_init", "_Weapon_station_1", "_Weapon_station_2", "_Weapon_station_3", "_Weapon_station_4", "_Weapon_station_5", "_Weapon_station_6", "_Weapon_station_7", "_Weapon_station_8", "_Weapon_station_9", "_Weapon_station_10", "_Weapon_station_11", "_Weapon_station_12", "_Weapon_station_13", "_Weapon_station_14", "_Weapon_station_15", "_Weapon_station_16", "_Weapon_station_17", "_Weapon_station_18", "_Weapon_station_19", "_Wings_Fold_status"];

//lets get all the variables from module init to set up our plane as expected
_Unit = _this select 0;
_Paintscheme_init = _this select 1;
_Weapon_station_1 = _this select 2;
_Weapon_station_2 = _this select 3;

_Weapon_station_3 = _this select 4;
_Weapon_station_4 = _this select 5;
_Weapon_station_5 = _this select 6;
_Weapon_station_6 = _this select 7;
_Weapon_station_7 = _this select 8;
_Weapon_station_8 = _this select 9;
_Weapon_station_9 = _this select 10;
_Weapon_station_10 = _this select 11;
_Weapon_station_11 = _this select 12;
_Weapon_station_12 = _this select 13;
_Weapon_station_13 = _this select 14;
_Weapon_station_14 = _this select 15;
_Weapon_station_15 = _this select 16;
_Weapon_station_16 = _this select 17;
_Weapon_station_17 = _this select 18;
_Weapon_station_18 = _this select 19;
_Weapon_station_19 = _this select 20;
_Wings_Fold_status = _this select 21;


//checks to make sure the plane is actualy JS_JC_FA18E type and we have captured the plane not the driver before proceeding
if (_Unit isKindOf "Man") then {_FA18 = vehicle _Unit} else {_FA18 = _Unit};
if ((typeOf _FA18) != "JS_JC_FA18E") ExitWith {};

//dummy animation status check to ensure that this code is executed after initial plane init code
//putting the execution of this code on hold untill our main init has been executed
WaitUntil {_FA18 animationphase "init_done_switch" > 0.5};

//US NAVY GREY SKIN
if (_Paintscheme_init == 1) then 
{
	_FA18 setObjectTextureGlobal [0, "\js_jc_fa18\data\fa18e_hull_co.paa"];
	_FA18 setObjectTextureGlobal [1, "\js_jc_fa18\data\fa18_misc_co.paa"];      
	_FA18 animate ["paint_scheme_switch",0.4];
};

//VFA-14 CAG SKIN
if (_Paintscheme_init == 2) then 
{
	_FA18 setObjectTextureGlobal [0, "\js_jc_fa18_squads\data\fa18e_hull_vfa14cag_co.paa"];
	_FA18 setObjectTextureGlobal [1, "\js_jc_fa18\data\fa18_misc_co.paa"];      
	_FA18 animate ["paint_scheme_switch",0.0];
};

//VFA-14 LOW SKIN
if (_Paintscheme_init == 3) then 
{
	_FA18 setObjectTextureGlobal [0, "\js_jc_fa18_squads\data\fa18e_hull_vfa14low_co.paa"];
	_FA18 setObjectTextureGlobal [1, "\js_jc_fa18\data\fa18_misc_co.paa"];      
	_FA18 animate ["paint_scheme_switch",0.04];
};

//VFA-27 CAG SKIN
if (_Paintscheme_init == 4) then 
{
	_FA18 setObjectTextureGlobal [0, "\js_jc_fa18_squads\data\fa18e_hull_vfa27cag_co.paa"];
	_FA18 setObjectTextureGlobal [1, "\js_jc_fa18\data\fa18_misc_co.paa"];      
	_FA18 animate ["paint_scheme_switch",0.08];
};

//VFA-27 LOW SKIN
if (_Paintscheme_init == 5) then 
{
	_FA18 setObjectTextureGlobal [0, "\js_jc_fa18_squads\data\fa18e_hull_vfa27low_co.paa"];
	_FA18 setObjectTextureGlobal [1, "\js_jc_fa18\data\fa18_misc_co.paa"];      
	_FA18 animate ["paint_scheme_switch",0.12];
};

//VFA-31 CAG SKIN
if (_Paintscheme_init == 6) then 
{
	_FA18 setObjectTextureGlobal [0, "\js_jc_fa18_squads\data\fa18e_hull_vfa31cag_co.paa"];
	_FA18 setObjectTextureGlobal [1, "\js_jc_fa18\data\fa18_misc_co.paa"];      
	_FA18 animate ["paint_scheme_switch",0.16];
};

//VFA-31 LOW SKIN
if (_Paintscheme_init == 7) then 
{
	_FA18 setObjectTextureGlobal [0, "\js_jc_fa18_squads\data\fa18e_hull_vfa31low_co.paa"];
	_FA18 setObjectTextureGlobal [1, "\js_jc_fa18\data\fa18_misc_co.paa"];      
	_FA18 animate ["paint_scheme_switch",0.2];
};

//VMFA-232 CAG SKIN
if (_Paintscheme_init == 8) then 
{
	_FA18 setObjectTextureGlobal [0, "\js_jc_fa18_squads\data\fa18e_hull_vmfa232cag_co.paa"];
	_FA18 setObjectTextureGlobal [1, "\js_jc_fa18\data\fa18_misc_co.paa"];      
	_FA18 animate ["paint_scheme_switch",0.24];
};

//VMFA-232 LOW SKIN
if (_Paintscheme_init == 9) then 
{
	_FA18 setObjectTextureGlobal [0, "\js_jc_fa18_squads\data\fa18e_hull_vmfa232low_co.paa"];
	_FA18 setObjectTextureGlobal [1, "\js_jc_fa18\data\fa18_misc_co.paa"];      
	_FA18 animate ["paint_scheme_switch",0.28];
};

//VMFA-314 CAG SKIN
if (_Paintscheme_init == 10) then 
{
	_FA18 setObjectTextureGlobal [0, "\js_jc_fa18_squads\data\fa18e_hull_vmfa314cag_co.paa"];
	_FA18 setObjectTextureGlobal [1, "\js_jc_fa18\data\fa18_misc_co.paa"];      
	_FA18 animate ["paint_scheme_switch",0.32];

};

//VMFA-314 LOW SKIN
if (_Paintscheme_init == 11) then 
{
	_FA18 setObjectTextureGlobal [0, "\js_jc_fa18_squads\data\fa18e_hull_vmfa314low_co.paa"];
	_FA18 setObjectTextureGlobal [1, "\js_jc_fa18\data\fa18_misc_co.paa"];      
	_FA18 animate ["paint_scheme_switch",0.36];
};

//USMC GREY SKIN
if (_Paintscheme_init == 12) then 
{
	_FA18 setObjectTextureGlobal [0, "\js_jc_fa18_squads\data\fa18e_hull_USMC_co.paa"];
	_FA18 setObjectTextureGlobal [1, "\js_jc_fa18\data\fa18_misc_co.paa"];      
	_FA18 animate ["paint_scheme_switch",0.44];
};

if (_Wings_Fold_status == 1) then
{
	_FA18 animate ["l_wingfold",1];
	_FA18 animate ["r_wingfold",1];
};

//LOADOUT INIT
if ((_Weapon_station_11 != "js_m_fa18_empty") or (_Weapon_station_13 != "js_m_fa18_empty")) then {_Weapon_station_5 = "js_m_fa18_bombrack_x1";}; 
if ((_Weapon_station_12 != "js_m_fa18_empty") or (_Weapon_station_14 != "js_m_fa18_empty")) then {_Weapon_station_6 = "js_m_fa18_bombrack_x1";}; 
if ((_Weapon_station_15 != "js_m_fa18_empty") or (_Weapon_station_17 != "js_m_fa18_empty")) then {_Weapon_station_7 = "js_m_fa18_bombrack_x1";}; 
if ((_Weapon_station_16 != "js_m_fa18_empty") or (_Weapon_station_18 != "js_m_fa18_empty")) then {_Weapon_station_8 = "js_m_fa18_bombrack_x1";}; 
[_FA18,_Weapon_station_1,_Weapon_station_2,_Weapon_station_3,_Weapon_station_4,_Weapon_station_5,_Weapon_station_6,_Weapon_station_7,_Weapon_station_8,_Weapon_station_9,_Weapon_station_10,_Weapon_station_11,_Weapon_station_12,_Weapon_station_13,_Weapon_station_14,_Weapon_station_15,_Weapon_station_16,_Weapon_station_17,_Weapon_station_18,_Weapon_station_19] execvm "js_jc_fa18\scripts\LOADOUTS\FA18_instant_loadouts.sqf";


Exit;
