// REVISION 15/JAN/15

//15th Weapons MG Team Leader
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


 _unit additem "itemGPS";
 _unit assignitem "itemGPS";


_unit addbackpack "MEF_Wood_Kitbag";


 (unitBackpack _unit) additemCargo ["itemRadio",2];
 (unitBackpack _unit) additemCargo ["ACE_fieldDressing",3];
 (unitBackpack _unit) additemCargo ["acc_flashlight",1];
 (unitBackpack _unit) additemCargo ["NVGoggles_OPFOR",1];
 (unitBackpack _unit) addmagazineCargo ["MEU_100Rnd_M240_762x51_T",2];
 (unitBackpack _unit) addmagazineCargo ["SmokeshellBlue",1];
(unitBackpack _unit) additemCargo ["AV_ESS_tan_clr",1];


 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";


 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";


 _unit addweapon "CUP_arifle_M4CAR_BUIS_GL";
 _unit addPrimaryWeaponItem "CUP_optic_ACOG";
 _unit addPrimaryWeaponItem "CUP_acc_ANPEQ_15";


 _unit addweapon "rangefinder";
 _unit assignitem "rangefinder";


 _unit addmagazine "1Rnd_SmokeRed_Grenade_Shell";
 _unit addmagazine "1Rnd_SmokeRed_Grenade_Shell";
 _unit addmagazine "HandGrenade";
 _unit addmagazine "HandGrenade";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit additem "ace_Earplugs";


 _unit adduniform "MEF_Wood_IN_MARPAT_LS";