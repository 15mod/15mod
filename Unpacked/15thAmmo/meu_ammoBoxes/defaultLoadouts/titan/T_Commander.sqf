// REVISION 15/JAN/15

//Delta Company, Commander Loadout

 _unit = _this select 1;
 
 if (!local _unit) exitWith {};

 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "MEF_Vest_Tan_Armor";
 _unit addheadgear "H_HelmetCrew_I";

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit additem "NVGoggles_OPFOR";
 _unit assignItem "NVGoggles_OPFOR";

 _unit additem "itemandroid";
 _unit assignitem "itemandroid";

 _unit additem "itemRadio";
 _unit additem "itemRadio";
 _unit assignitem "itemRadio";

 _unit addbackpack "tf_rt113g_wood_big";

 (unitBackpack _unit) additemCargo ["ACE_fieldDressing",4];

 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 
 _unit addweapon "CUP_arifle_M4CAR_black";
 _unit addPrimaryWeaponItem "CUP_optic_CompM2_Black";
 _unit addPrimaryWeaponItem "CUP_acc_ANPEQ_15";

 _unit addmagazine "MEU_M882_9mm";
 _unit addmagazine "MEU_M882_9mm";
 _unit addmagazine "MEU_M882_9mm";
 _unit addmagazine "MEU_M882_9mm";
 _unit addmagazine "MEU_M882_9mm";

 _unit addweapon "CUP_hgun_M9";

 _unit addweapon "Binocular";
 _unit assignitem "Binocular";

 _unit addmagazine "SmokeShellBlue";
 _unit addmagazine "SmokeShellRed";
 _unit addmagazine "SmokeShellRed";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";
 _unit additem "ACE_EarPlugs";

 _unit adduniform "MEF_Wood_IN_MARPAT_LS";
