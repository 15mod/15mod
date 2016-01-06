// REVISION 15/JAN/15

//15th Weapons MG Ammo Man
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
 (unitBackpack _unit) additemCargo ["acc_flashlight",1];
 (unitBackpack _unit) additemCargo ["NVGoggles_OPFOR",1];
 (unitBackpack _unit) addmagazineCargo ["MEU_100Rnd_M240_762x51",5];
 (unitBackpack _unit) additemCargo ["SmokeshellBlue",1];
 (unitBackpack _unit) additemCargo ["AV_ESS_tan_clr",1];


 _unit addmagazine "MEU_30Rnd_M855A1_556x45";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T";


 _unit addweapon "CUP_arifle_M4CAR_black";
 _unit addPrimaryWeaponItem "CUP_optic_ACOG";
 _unit addPrimaryWeaponItem "CUP_acc_ANPEQ_15";


 _unit addweapon "rangefinder";
 _unit assignitem "rangefinder";


 _unit addmagazine "HandGrenade";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit additem "ace_Earplugs";


 _unit adduniform "MEF_Wood_IN_MARPAT_LS";