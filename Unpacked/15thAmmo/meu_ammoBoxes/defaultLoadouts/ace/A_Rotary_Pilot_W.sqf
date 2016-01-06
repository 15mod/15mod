// REVISION 14OCT14

 _unit = _this select 1;

 if (!local _unit) exitWith {};

 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "MEF_Vest_Tan_Armor_L";
 _unit addheadgear "H_PilotHelmetHeli_B";

 _unit unassignItem "itemRadio";
 _unit removeItem "itemRadio";
 _unit addItem "itemRadio";
 _unit assignItem "itemRadio";
 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";
 _unit addItem "G_Aviator";
 _unit assignItem "G_Aviator";

 //M9 and Ammo
 _unit addmagazine "rhsusf_mag_15Rnd_9x19_FMJ";
 _unit addmagazine "rhsusf_mag_15Rnd_9x19_FMJ";
 _unit addmagazine "rhsusf_mag_15Rnd_9x19_FMJ";
 _unit addmagazine "rhsusf_mag_15Rnd_9x19_FMJ";
 _unit additem "rhsusf_weap_m9";

 //EQUIPMENT ADD
 _unit addweapon "Binocular";
 _unit additem "ItemWatch";
 _unit additem "ItemMap";
 _unit additem "ItemGPS";
 _unit additem "ItemCompass";
 _unit additem "itemandroid";
 _unit additem "ItemCtabHCam";
 _unit additem "NVGoggles_OPFOR";
 _unit additem "ACE_EarPlugs";

 //EQUIPMENT ASSIGN
 _unit assignitem "Binocular";
 _unit assignitem "ItemWatch";
 _unit assignitem "ItemMap";
 _unit assignitem "ItemGPS";
 _unit assignitem "ItemCompass";
 _unit assignitem "NVGoggles_OPFOR";

 //Grenades
 _unit addmagazine "Chemlight_green";
 _unit addmagazine "Chemlight_green";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";

 _unit adduniform "OliveCoveralls";

 //Bandages
 _unit additem "ACE_fieldDressing";
 _unit additem "ACE_fieldDressing";