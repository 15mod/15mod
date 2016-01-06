// REVISION 15/JAN/15

//15th Marauder Assistant Automatic Rifleman Loadout
//By: 2ndLt Callaghan

 _unit = _this select 1;
 
 if (!local _unit) exitWith {};

 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "MEF_Vest_Tan_Infantry";
 _unit addheadgear "MEF_Wood_Helmet_LWH";

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit unassignItem "itemRadio";
 _unit removeItem "itemRadio";

 _unit additem "NVGoggles_OPFOR";
 _unit assignitem "NVGoggles_OPFOR";

 _unit addbackpack "MEF_Wood_Kitbag";

 (unitBackpack _unit) additemCargo ["ACE_fieldDressing",2];
 (unitBackpack _unit) additemCargo ["acc_flashlight",1];
 (unitBackpack _unit) addmagazineCargo ["MEU_30Rnd_M855A1_556x45_Stanag",4]; 
 (unitBackpack _unit) addmagazineCargo ["MEU_30Rnd_M855A1_556x45_T_Stanag",4];
 (unitBackpack _unit) addmagazineCargo ["SmokeshellBlue",1];

 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";

 _unit addweapon "CUP_arifle_M4CAR_black";
 _unit addPrimaryWeaponItem "CUP_optic_ACOG";
 _unit addPrimaryWeaponItem "CUP_acc_ANPEQ_15";

 _unit addweapon "Binocular";
 _unit assignitem "Binocular";

 _unit addmagazine "HandGrenade";
 _unit addmagazine "HandGrenade";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "ace_M84";
 _unit addmagazine "ace_M84";
 _unit additem "ACE_EarPlugs";

 _unit adduniform "MEF_Wood_IN_MARPAT_LS";