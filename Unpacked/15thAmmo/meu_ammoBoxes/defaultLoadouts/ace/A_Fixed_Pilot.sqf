// REVISION 04/JAN/16

 _unit = _this select 1;

 if (!local _unit) exitWith {};

 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "FIR_pilot_vest";
 _unit addheadgear "FIR_USHelmetType1_USMC_Black_Close";

 _unit unassignItem "itemRadio";
 _unit removeItem "itemRadio";
 _unit addItem "itemRadio";
 _unit assignItem "itemRadio";
 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";
 _unit addItem "G_Aviator";
 _unit assignItem "G_Aviator";

 _unit addbackpack "B_Parachute";

 //WEAPONS
 _unit addmagazine "rhsusf_mag_15Rnd_9x19_FMJ";
 _unit addmagazine "rhsusf_mag_15Rnd_9x19_FMJ";
 _unit addmagazine "rhsusf_mag_15Rnd_9x19_FMJ";
 _unit addmagazine "rhsusf_mag_15Rnd_9x19_FMJ";
 _unit additem "rhsusf_weap_m9"; //Use this to hide pistol in clothes

 //EQUIPMENT ADD
 _unit addweapon "Binocular";
 _unit additem "ItemWatch";
 _unit additem "ItemMap";
 _unit additem "ItemGPS";
 _unit additem "ItemCompass";
 _unit additem "itemandroid";
 _unit additem "ItemCtabHCam";
 _unit additem "rhsusf_ANPVS_14";
 _unit additem "ACE_EarPlugs";

 //EQUIPMENT ASSIGN
 _unit assignitem "Binocular";
 _unit assignitem "ItemWatch";
 _unit assignitem "ItemMap";
 _unit assignitem "ItemGPS";
 _unit assignitem "ItemCompass";
 _unit assignitem "rhsusf_ANPVS_14";

 //Grenades
 _unit addmagazine "Chemlight_green";
 _unit addmagazine "Chemlight_green";
 _unit addmagazine "rhs_mag_an_m8hc";
 _unit addmagazine "rhs_mag_an_m8hc";
 _unit addmagazine "rhs_mag_m18_green";
 _unit addmagazine "rhs_mag_m18_green";

 _unit adduniform "FIR_Fighter_Pilot_USMC_Nomex";

 //Bandages
 _unit additem "ACE_fieldDressing";
 _unit additem "ACE_fieldDressing";