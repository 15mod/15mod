// REVISION 27/AUG/15

//15th Weapons MG Gunner
//15thMEU Realism Unit, Weapons Platoon
//By: SSgt Callaghan

 _unit = _this select 1;
 
 if (!local _unit) exitWith {};


 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "MEF_Vest_Tan_Infantry_L";
 _unit addheadgear "MEF_Wood_Goggles_Helmet_LWH";


 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";


 _unit addbackpack "MEF_Wood_Kitbag";


 (unitBackpack _unit) additemCargo ["ACE_fieldDressing",3];
 (unitBackpack _unit) additemCargo ["NVGoggles_OPFOR",1];
 (unitBackpack _unit) additemCargo ["SmokeshellBlue",1];
 (unitBackpack _unit) additemCargo ["AV_ESS_tan_clr",1];


 _unit addmagazine "MEU_100Rnd_M240_762x51";
 _unit addmagazine "MEU_100Rnd_M240_762x51";
 _unit addmagazine "MEU_100Rnd_M240_762x51_T";


 _unit addweapon "CUP_lmg_M240";
 _unit addPrimaryWeaponItem "CUP_optic_ElcanM145";
 _unit addPrimaryWeaponItem "bipod_01_F_Blk";


 _unit addmagazine "MEU_M882_9mm";
 _unit addmagazine "MEU_M882_9mm";
 _unit addmagazine "MEU_M882_9mm";


 _unit addweapon "CUP_hgun_M9";


 _unit addmagazine "HandGrenade";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit additem "ace_Earplugs";


 _unit adduniform "MEF_Wood_IN_MARPAT_LS";