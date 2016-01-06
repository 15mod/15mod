
#define VERSION_DATE	01.04.2015 // release date

#define NO_ZEUS_WINDOW 		// delete line to enable the zeus dialog/disable zeus crate
#define NO_RESUPPLY_BRAVO 	// delete line to enable box_resuply_bravo
#define NO_BATTLESTAR_BOX	// delete line to enable Box_meu_arty
#define NO_LAR_BOX          // delete line to enable Box_meu_lar

#include "script_macros.hpp"

class CfgPatches
{
	class meu_ammoBoxes
	{
		units[] =
		{
			"Box_meu_ace",
			"Box_meu_arty",
			"Box_meu_bas",
			"Box_meu_lce",
			"Box_meu_gator",
			"Box_meu_hq",
			"Box_meu_inf",
			"Box_meu_spectre",
			"Box_meu_suply",
			"Box_meu_suply_Bravo",
			"Box_meu_titan",
			"Box_meu_wep",
			"Box_meu_vehicle",
			"Box_meu_lar",
			"Box_meu_soi_student",
			"Box_meu_soi_instructor",
			"Box_meu_empty",
			"Box_meu_Boats",
			"Box_meu_zeus",
			"meu_sign_ace",
			"meu_sign_armory",
			"meu_sign_bas",
			"meu_sign_empty",
			"meu_sign_gator",
			"meu_sign_lar",
			"meu_sign_hq",
			"meu_sign_rifle",
			"meu_sign_spectre",
			"meu_sign_titan",
			"meu_sign_weapons",
			"meu_flag_usmc"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		version = VERSION_DATE;
	};
};

class CfgNotifications
{
	class meu_vicCrates
	{
		title = "15th Vehicle Crate";
		iconPicture = "%1";
		iconText = "";
		description = "%2";
		color[] = {1,1,1,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
};

class CfgFunctions
{
	class meu {
		class crate {
			file = "\meu_ammoBoxes\crateFunctions";
			class vehicleLoadout {};
			class crate {};
		};
		class manager {
			file = "\meu_ammoBoxes\loadoutManager";
			class manager {};
		};
	};
};

class CfgVehicleClasses
{
	class meu_ammoBoxes { displayName = "[15th] Ammo Boxes"; };
	class meu_signs { displayName = "[15th] Signs"; };
};

class CfgVehicles
{
	class B_supplyCrate_F;
	class Box_NATO_AmmoVeh_F;
	class Box_meu_spectre: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Spectre Box)
		MEU_CRATE_TEXTURE(front_frc_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] =
		{
			{"Add Dive Goggles","recon\meu_fr_goggles.sqf"},
			{"Add Rebreather","recon\meu_fr_rebreather.sqf"},
			{"Add UAV Pack","recon\meu_fr_uav.sqf"},
			{"Add CRRC Pack","recon\meu_fr_crrc.sqf"},
			{"Add Steerable Parachute","recon\meu_fr_chute_steer.sqf"}
		};

		class TransportItems
		{
		// SUPPRESSORS
			MEU_CLASS_ITEM(Trixie_Cyclone,25)
			MEU_CLASS_ITEM(rhsusf_acc_nt4_black,25)
			MEU_CLASS_ITEM(rhsusf_acc_SR25S,25)
		// ATTACHMENTS
			MEU_CLASS_ITEM(rhsusf_acc_harris_bipod,25)

			MEU_CLASS_ITEM(rhsusf_acc_anpeq15A,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,25)
		// OPTICS
			MEU_CLASS_ITEM(optic_Arco,25)
			MEU_CLASS_ITEM(optic_Hamr,25)
			MEU_CLASS_ITEM(ACE_optic_Hamr_2d,25)
			MEU_CLASS_ITEM(ACE_optic_Hamr_PIP,25)
			MEU_CLASS_ITEM(optic_MRCO,25)
			MEU_CLASS_ITEM(optic_SOS,5)
			MEU_CLASS_ITEM(optic_DMS,5)
			MEU_CLASS_ITEM(optic_LRPS,5)
			MEU_CLASS_ITEM(optic_tws,5)
			MEU_CLASS_ITEM(optic_tws_mg,5)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ELCAN_ard,25)
			MEU_CLASS_ITEM(rhsusf_acc_eotech_552,25)
			MEU_CLASS_ITEM(rhsusf_acc_compm4,25)
			MEU_CLASS_ITEM(rhsusf_acc_LEUPOLDMK4,25)
			MEU_CLASS_ITEM(rhsusf_acc_LEUPOLDMK4_2,25)
		// HELMETS
			MEU_CLASS_ITEM(rhs_Booniehat_marpatd,30)
			MEU_CLASS_ITEM(rhs_Booniehat_marpatwd,30)
			MEU_CLASS_ITEM(rhsusf_mich_bare_norotos,30)
			MEU_CLASS_ITEM(rhsusf_mich_bare_norotos_arc,30)
			MEU_CLASS_ITEM(rhsusf_mich_bare_norotos_tan,30)
			MEU_CLASS_ITEM(rhsusf_mich_bare_norotos_arc_tan,30)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos,30)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_headset,30)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos_arc_headset,30)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_arc_headset,30)
		// NVG AND GOGGLES
			MEU_CLASS_ITEM(rhsusf_ANPVS_14,50)
			MEU_CLASS_ITEM(AV_ESS_tan,25)
			MEU_CLASS_ITEM(AV_ESS_tan_clr,25)
			MEU_CLASS_ITEM(G_B_Diving,25)
		// COMPUTERS
			MEU_CLASS_ITEM(itemctab,25)
			MEU_CLASS_ITEM(itemandroid,25)
			MEU_CLASS_ITEM(ItemcTabHCam,25)
			MEU_CLASS_ITEM(B_UavTerminal,5)
			MEU_CLASS_ITEM(ACE_HuntIR_monitor,5)
			MEU_CLASS_ITEM(ItemSMGR,25)
			MEU_CLASS_ITEM(ACE_DAGR,25)
			MEU_CLASS_ITEM(ACE_ATragMX,25)
			MEU_CLASS_ITEM(ACE_microDAGR,25)
			MEU_CLASS_ITEM(ACE_MX2A,25)
			MEU_CLASS_ITEM(ACE_Kestrel4500,25)
		// HANDHELD OPTICS
			MEU_CLASS_ITEM(Binocular,25)
			MEU_CLASS_ITEM(Rangefinder,25)
			MEU_CLASS_ITEM(ACE_Vector,25)
			MEU_CLASS_ITEM(Laserdesignator,10)
			MEU_CLASS_ITEM(Laserbatteries,20)
			MEU_CLASS_ITEM(ACE_SpottingScope,5)
			MEU_CLASS_ITEM(Leupold_Mk4,10)
		// ACCESSORIES
			MEU_CLASS_ITEM(ItemRadio,100)
			MEU_CLASS_ITEM(tf_anprc152,100)
			MEU_CLASS_ITEM(ace_earplugs,25)
			MEU_CLASS_ITEM(ACE_CableTie,50)
			MEU_CLASS_ITEM(ItemWatch,25)
			MEU_CLASS_ITEM(ACE_Altimeter,25)
			MEU_CLASS_ITEM(ItemCompass,25)
			MEU_CLASS_ITEM(ItemGPS,25)
			MEU_CLASS_ITEM(ItemMap,25)
			MEU_CLASS_ITEM(ace_MapTools,25)
			MEU_CLASS_ITEM(MineDetector,5)
			MEU_CLASS_ITEM(ToolKit,25)
			MEU_CLASS_ITEM(ace_DefusalKit,15)
			MEU_CLASS_ITEM(ACE_RangeCard,25)
			MEU_CLASS_ITEM(ACE_wirecutter,10)
			MEU_CLASS_ITEM(ACE_UAVBattery,5)
			MEU_CLASS_ITEM(ACE_SpareBarrel,5)
			MEU_CLASS_ITEM(ace_Clacker,10)
			MEU_CLASS_ITEM(ace_M26_Clacker,10)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,25)
		// RIGS AND CARRIERS
			MEU_CLASS_ITEM(V_HarnessO_brn,15)
			MEU_CLASS_ITEM(V_RebreatherB,5)
			MEU_CLASS_ITEM(rhsusf_spc,15)
			MEU_CLASS_ITEM(rhsusf_spc_corpsman,15)
			MEU_CLASS_ITEM(rhsusf_spc_IAR,15)
			MEU_CLASS_ITEM(rhsusf_spc_light,15)
			MEU_CLASS_ITEM(rhsusf_spc_machinegunner,15)
			MEU_CLASS_ITEM(rhsusf_spc_marksman,15)
			MEU_CLASS_ITEM(rhsusf_spc_rifleman,15)
			MEU_CLASS_ITEM(rhsusf_spc_teamleader,15)
			MEU_CLASS_ITEM(rhsusf_spc_squadleader,15)
		// UNIFORMS
			MEU_CLASS_ITEM(U_B_survival_uniform,25)
			MEU_CLASS_ITEM(U_B_Wetsuit,25)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,25)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,25)
		// MEDICAL
			MEU_CLASS_ITEM(ACE_fieldDressing,200)
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_personalAidKit,100)
			MEU_CLASS_ITEM(ACE_surgicalKit,50)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ace_Morphine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_bloodIV,100)
			MEU_CLASS_ITEM(ACE_bloodIV_500,100)
			MEU_CLASS_ITEM(ACE_bloodIV_250,100)
			MEU_CLASS_ITEM(ACE_plasmaIV,100)
			MEU_CLASS_ITEM(ACE_plasmaIV_500,100)
			MEU_CLASS_ITEM(ACE_plasmaIV_250,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		};
		class TransportMagazines
		{
		// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,100)

			MEU_CLASS_MAG(rhsusf_5Rnd_00Buck,100)
			MEU_CLASS_MAG(rhsusf_8Rnd_00Buck,100)
			MEU_CLASS_MAG(rhsusf_5Rnd_Slug,100)
			MEU_CLASS_MAG(rhsusf_8Rnd_Slug,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m993_Mag,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_B_SAW,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_T_SAW,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_556x45_M200_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m62_tracer,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m61_ap,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m82_blank,100)
			MEU_CLASS_MAG(rhs_mag_smaw_HEAA,100)
			MEU_CLASS_MAG(rhs_mag_smaw_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_smaw_SR,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,100)
			MEU_CLASS_MAG(rhsusf_mag_7x45acp_MHP,100)
			MEU_CLASS_MAG(MEU_5x762_Mag,100)
		// LAUNCHED
 			MEU_CLASS_MAG(rhs_mag_M441_HE,100)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_M781_Practice,100)
			MEU_CLASS_MAG(rhs_mag_M585_white,100)
			MEU_CLASS_MAG(rhs_mag_m661_green,100)
			MEU_CLASS_MAG(rhs_mag_m662_red,100)
			MEU_CLASS_MAG(rhs_mag_m713_Red,100)
			MEU_CLASS_MAG(rhs_mag_m714_White,100)
			MEU_CLASS_MAG(rhs_mag_m715_Green,100)
			MEU_CLASS_MAG(rhs_mag_m716_yellow,100)
			MEU_CLASS_MAG(1Rnd_SmokeBlue_Grenade_shell,50)
			MEU_CLASS_MAG(ACE_HuntIR_M203,30)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M781_Practice,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M714_white,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M433_HEDP,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M576_Buckshot,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M441_HE,100)
		// THROWN
			MEU_CLASS_MAG(ace_M84,100)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
			MEU_CLASS_MAG(rhs_mag_m67,30)
			MEU_CLASS_MAG(rhs_mag_m69,30)
			MEU_CLASS_MAG(rhs_mag_an_m8hc,30)

			MEU_CLASS_MAG(rhs_mag_m18_green,30)
			MEU_CLASS_MAG(rhs_mag_m18_purple,30)
			MEU_CLASS_MAG(rhs_mag_m18_red,30)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,30)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			//MEU_CLASS_MAG(rhs_mag_mk84,30) Fashbang, not working properly
			//MEU_CLASS_MAG(rhs_mag_m7a3_cs,30) CS GAS, not working properly
			//MEU_CLASS_MAG(rhs_mag_mk3a2,30) Concussion Grenade, not working properly
		//EXPLOSIVES
			MEU_CLASS_MAG(ATMine_Range_Mag,50)
			MEU_CLASS_MAG(APERSMine_Range_Mag,50)
			MEU_CLASS_MAG(APERSBoundingMine_Range_Mag,50)
			MEU_CLASS_MAG(SLAMDirectionalMine_Wire_Mag,50)
			MEU_CLASS_MAG(APERSTripMine_Wire_Mag,50)
			MEU_CLASS_MAG(ClaymoreDirectionalMine_Remote_Mag,50)
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,50)
			MEU_CLASS_MAG(SatchelCharge_Remote_Mag,50)
		};
		class TransportWeapons
		{
		// WEAPONS
			MEU_CLASS_WEAP(rhs_weap_m27iar,5)
			MEU_CLASS_WEAP(MEU_M40A5,20)
			MEU_CLASS_WEAP(rhs_weap_smaw_green,3)
			MEU_CLASS_WEAP(rhsusf_weap_m1911a1,30)
			MEU_CLASS_WEAP(rhsusf_weap_m9,30)
			MEU_CLASS_WEAP(HAFM_LAW,20)
			MEU_CLASS_WEAP(rhs_weap_M136,30)
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,20)
			MEU_CLASS_WEAP(rhs_weap_M136_hp,30)
			MEU_CLASS_WEAP(rhs_weap_sr25,30)
			MEU_CLASS_WEAP(rhs_weap_m240B,20)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L,20)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L_VFG,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S_VFG,20)
			MEU_CLASS_WEAP(rhs_weap_m32,20)
			MEU_CLASS_WEAP(rhs_weap_m4a1,20)
			MEU_CLASS_WEAP(rhs_weap_m4a1_carryhandle,20)
			MEU_CLASS_WEAP(rhs_weap_m4a1_carryhandle_grip,30)
			MEU_CLASS_WEAP(rhs_weap_m4a1_carryhandle_m203,20)
			MEU_CLASS_WEAP(rhs_weap_m4a1_carryhandle_m203S,30)
			MEU_CLASS_WEAP(rhs_weap_M590_8RD,20)

		};
		class TransportBackpacks
		{
		// BACKPACKS
			MEU_CLASS_BAG(tf_rt113g_wood_big,5)
			MEU_CLASS_BAG(tf_prc113,5)
			MEU_CLASS_BAG(B_AssaultPack_cbr,10)
			MEU_CLASS_BAG(B_AssaultPack_blk,10)
			MEU_CLASS_BAG(rhsusf_assault_eagleaiii_coy,10)
			MEU_CLASS_BAG(B_Carryall_cbr,10)
			MEU_CLASS_BAG(ACE_TacticalLadder_Pack,5)
			MEU_CLASS_BAG(B_Parachute,5)
		};
	};
	class Box_meu_bas: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] BAS Box)
		MEU_CRATE_TEXTURE(front_bas_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] =
		{
			{"MEU BAS Corpsman Loadout","bas\corpsmanloadout.sqf"}
		};

		class TransportItems
		{
			// ATTACHMENTS
			MEU_CLASS_ITEM(acc_flashlight,15)
			MEU_CLASS_ITEM(acc_pointer_IR,15)
			MEU_CLASS_ITEM(rhsusf_acc_harris_bipod,15)

			MEU_CLASS_ITEM(rhsusf_acc_anpeq15A,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			// OPTICS
			MEU_CLASS_ITEM(optic_Arco,15)
			MEU_CLASS_ITEM(optic_Hamr,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_PIP,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_PIP,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ELCAN_ard,15)
			MEU_CLASS_ITEM(rhsusf_acc_ELCAN,15)
			MEU_CLASS_ITEM(rhsusf_acc_eotech_552,15)
			MEU_CLASS_ITEM(rhsusf_acc_compm4,15)
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,10)
			MEU_CLASS_ITEM(ItemCompass,10)
			MEU_CLASS_ITEM(ItemGPS,10)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,10)
			MEU_CLASS_ITEM(ACE_MapTools,10)
			MEU_CLASS_ITEM(Binocular,10)
			MEU_CLASS_ITEM(Rangefinder,10)
			MEU_CLASS_ITEM(itemandroid,10)
            MEU_CLASS_ITEM(rhsusf_ANPVS_14,15)
			MEU_CLASS_ITEM(ace_earplugs,15)
			MEU_CLASS_ITEM(ace_CableTie,15)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,20)
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,20)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,20)
			// VESTS
			MEU_CLASS_ITEM(rhsusf_spc_corpsman,15)
			// MEDICAL
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_personalAidKit,100)
			MEU_CLASS_ITEM(ACE_surgicalKit,50)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ace_Morphine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_bloodIV,100)
			MEU_CLASS_ITEM(ACE_bloodIV_500,100)
			MEU_CLASS_ITEM(ACE_bloodIV_250,100)
			MEU_CLASS_ITEM(ACE_plasmaIV,100)
			MEU_CLASS_ITEM(ACE_plasmaIV_500,100)
			MEU_CLASS_ITEM(ACE_plasmaIV_250,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		};
		class TransportMagazines
		{
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,100)

			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,100)
			// Launched
			MEU_CLASS_MAG(rhs_mag_M585_white,50)
			MEU_CLASS_MAG(rhs_mag_m661_green,50)
			MEU_CLASS_MAG(rhs_mag_m662_red,50)
			MEU_CLASS_MAG(rhs_mag_m713_Red,50)
			MEU_CLASS_MAG(rhs_mag_m714_White,50)
			MEU_CLASS_MAG(rhs_mag_m715_Green,50)
			MEU_CLASS_MAG(rhs_mag_m716_yellow,50)
			MEU_CLASS_MAG(1Rnd_SmokeBlue_Grenade_shell,50)
			//Thrown
			MEU_CLASS_MAG(ace_M84,50)
			MEU_CLASS_MAG(Chemlight_blue,25)
			MEU_CLASS_MAG(Chemlight_red,25)
			MEU_CLASS_MAG(Chemlight_green,25)
			MEU_CLASS_MAG(Chemlight_yellow,25)
			MEU_CLASS_MAG(ace_HandFlare_White,25)
			MEU_CLASS_MAG(ace_HandFlare_Red,25)
			MEU_CLASS_MAG(ace_HandFlare_Green,25)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,25)
			MEU_CLASS_MAG(rhs_mag_an_m8hc,50)
			MEU_CLASS_MAG(rhs_mag_m18_green,50)
			MEU_CLASS_MAG(rhs_mag_m18_purple,50)
			MEU_CLASS_MAG(rhs_mag_m18_red,50)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,50)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			//MEU_CLASS_MAG(rhs_mag_mk84,30) Fashbang, not working properly
			//MEU_CLASS_MAG(rhs_mag_m7a3_cs,30) CS GAS, not working properly
			//MEU_CLASS_MAG(rhs_mag_mk3a2,30) Concussion Grenade, not working properly
		};
		class TransportWeapons
		{
			//Weapons
			MEU_CLASS_WEAP(rhsusf_weap_m9,30)
			MEU_CLASS_WEAP(rhs_weap_m4,20)
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			MEU_CLASS_WEAP(rhs_weap_m4_grip,30)
			MEU_CLASS_WEAP(rhs_weap_m4_m203,20)
			MEU_CLASS_WEAP(rhs_weap_m4_m203S,30)

		};
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_prc113,5)
			MEU_CLASS_BAG(tf_rt113g_wood_reg,5)
			MEU_CLASS_BAG(Trixie_Coyote_OCP,10)
		};
	};
	class Box_meu_inf: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Infantry Box)
		MEU_CRATE_TEXTURE(front_inf_final_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] =
		{
			{"MEU HQ Loadout","inf\meu_hq_loadout.sqf"},
			{"Squad Leader Loadout","inf\meu_squadLeader_lo.sqf"},
			{"Fire Team Leader Loadout","inf\meu_FT_loadout.sqf"},
			{"Rifleman Loadout","inf\meu_rifle_loadout.sqf"},
			{"M27 AR Loadout","inf\meu_ar-iar_loadout.sqf"},
			{"M27 AAR","inf\meu_aar-iar_loadout.sqf"},
			{"Automatic Rifleman Loadout","inf\meu_ar_loadout.sqf"},
			{"Assistant AR Loadout","inf\meu_aar_loadout.sqf"},
			{"RTO Loadout","inf\meu_rto_loadout.sqf"},
			{"Designated Marksman Loadout","inf\meu_dm_loadout.sqf"}
		};

		class TransportItems
		{
			// ATTACHMENTS
			MEU_CLASS_ITEM(acc_flashlight,15)
			MEU_CLASS_ITEM(acc_pointer_IR,15)
			MEU_CLASS_ITEM(rhsusf_acc_harris_bipod,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15A,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			// OPTICS
			MEU_CLASS_ITEM(optic_acog_holo,10)
			MEU_CLASS_ITEM(optic_Arco,15)
			MEU_CLASS_ITEM(optic_mrco,15)
			MEU_CLASS_ITEM(rhsusf_acc_LEUPOLDMK4,15)
			MEU_CLASS_ITEM(rhsusf_acc_LEUPOLDMK4_2,15)
			MEU_CLASS_ITEM(optic_Hamr,15)
			MEU_CLASS_ITEM(optic_tws,15)
			MEU_CLASS_ITEM(ACE_optic_MRCO_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_PIP,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_PIP,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ELCAN_ard,25)
			MEU_CLASS_ITEM(rhsusf_acc_ELCAN,25)
			MEU_CLASS_ITEM(rhsusf_acc_eotech_552,25)
			MEU_CLASS_ITEM(rhsusf_acc_compm4,25)
			// GOGGLES
            MEU_CLASS_ITEM(rhsusf_ANPVS_14,50)
			MEU_CLASS_ITEM(AV_ESS_blk_clr,50)
			MEU_CLASS_ITEM(AV_ESS_tan,50)
			MEU_CLASS_ITEM(AV_ESS_tan_clr,50)
			MEU_CLASS_ITEM(AV_ESS_grn,50)
			MEU_CLASS_ITEM(AV_ESS_grn_clr,50)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,20)
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,25)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,25)
			// VESTS
			MEU_CLASS_ITEM(rhsusf_spc_IAR,15)
			MEU_CLASS_ITEM(rhsusf_spc_marksman,15)
			MEU_CLASS_ITEM(rhsusf_spc_rifleman,15)
			MEU_CLASS_ITEM(rhsusf_spc_teamleader,15)
			MEU_CLASS_ITEM(rhsusf_spc_squadleader,15)
			// MEDICAL
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		    // ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,25)
			MEU_CLASS_ITEM(ItemSMGR,20)
			MEU_CLASS_ITEM(ace_CableTie,50)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(Rangefinder,20)
			MEU_CLASS_ITEM(Laserdesignator,1)
			MEU_CLASS_ITEM(Laserbatteries,5)
			MEU_CLASS_ITEM(B_UavTerminal,2)
			MEU_CLASS_ITEM(itemctab,4)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(ItemcTabHCam,2)
			MEU_CLASS_ITEM(ACE_HuntIR_monitor,15)
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ACE_MX2A,20)
			MEU_CLASS_ITEM(ace_Vector,5)
			MEU_CLASS_ITEM(ACE_microDAGR,25)
			MEU_CLASS_ITEM(ACE_RangeCard,25)
			MEU_CLASS_ITEM(ACE_DAGR,25)
			MEU_CLASS_ITEM(ACE_ATragMX,25)
			MEU_CLASS_ITEM(ACE_wirecutter,10)
			MEU_CLASS_ITEM(ACE_Kestrel4500,25)
			MEU_CLASS_ITEM(ACE_UAVBattery,5)
			MEU_CLASS_ITEM(ace_MapTools,25)
			MEU_CLASS_ITEM(ace_DefusalKit,15)
			MEU_CLASS_ITEM(ACE_SpareBarrel,5)
			MEU_CLASS_ITEM(ace_Clacker,10)
			MEU_CLASS_ITEM(ace_M26_Clacker,10)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,25)
		};
		class TransportMagazines {
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,100)

			MEU_CLASS_MAG(rhsusf_5Rnd_00Buck,100)
			MEU_CLASS_MAG(rhsusf_8Rnd_00Buck,100)
			MEU_CLASS_MAG(rhsusf_5Rnd_Slug,100)
			MEU_CLASS_MAG(rhsusf_8Rnd_Slug,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m993_Mag,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_B_SAW,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_T_SAW,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_556x45_M200_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,100)
			//Launched
			MEU_CLASS_MAG(rhs_mag_M441_HE,100)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_M781_Practice,100)
			MEU_CLASS_MAG(rhs_mag_M585_white,100)
			MEU_CLASS_MAG(rhs_mag_m661_green,100)
			MEU_CLASS_MAG(rhs_mag_m662_red,100)
			MEU_CLASS_MAG(rhs_mag_m713_Red,100)
			MEU_CLASS_MAG(rhs_mag_m714_White,100)
			MEU_CLASS_MAG(rhs_mag_m715_Green,100)
			MEU_CLASS_MAG(rhs_mag_m716_yellow,100)
			MEU_CLASS_MAG(1Rnd_SmokeBlue_Grenade_shell,50)
			MEU_CLASS_MAG(ACE_HuntIR_M203,30)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M781_Practice,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M714_white,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M433_HEDP,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M576_Buckshot,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M441_HE,100)
			// THROWN
			MEU_CLASS_MAG(ace_M84,100)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
			MEU_CLASS_MAG(rhs_mag_m67,50)
			MEU_CLASS_MAG(rhs_mag_m69,50)

			MEU_CLASS_MAG(rhs_mag_an_m8hc,50)
			MEU_CLASS_MAG(rhs_mag_m18_green,50)
			MEU_CLASS_MAG(rhs_mag_m18_purple,50)
			MEU_CLASS_MAG(rhs_mag_m18_red,50)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,50)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			//MEU_CLASS_MAG(rhs_mag_mk84,30) Fashbang, not working properly
			//MEU_CLASS_MAG(rhs_mag_m7a3_cs,30) CS GAS, not working properly
			//MEU_CLASS_MAG(rhs_mag_mk3a2,30) Concussion Grenade, not working properly
			// EXPLOSIVES
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,50)
			MEU_CLASS_MAG(ClaymoreDirectionalMine_Remote_Mag,50)
		};
		class TransportWeapons {
			// WEAPONS
			MEU_CLASS_WEAP(rhs_weap_m27iar,20)
			MEU_CLASS_WEAP(rhsusf_weap_m9,30)
			MEU_CLASS_WEAP(HAFM_LAW,20)
			MEU_CLASS_WEAP(rhs_weap_M136,30)
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,20)
			MEU_CLASS_WEAP(rhs_weap_M136_hp,30)
			MEU_CLASS_WEAP(rhs_weap_sr25,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L,20)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L_VFG,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S_VFG,20)
			MEU_CLASS_WEAP(rhs_weap_m32,20)
			MEU_CLASS_WEAP(rhs_weap_m4,20)
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			MEU_CLASS_WEAP(rhs_weap_m4_grip,30)
			MEU_CLASS_WEAP(rhs_weap_m4_m203,20)
			MEU_CLASS_WEAP(rhs_weap_m4_m203S,30)
			MEU_CLASS_WEAP(rhs_weap_M590_8RD,20)

		};
		class TransportBackpacks
		{
			MEU_CLASS_BAG(tf_prc113,5)
			MEU_CLASS_BAG(tf_rt113g_wood_reg,5)
			MEU_CLASS_BAG(tf_rt113g_wood_big,5)
			MEU_CLASS_BAG(B_AssaultPack_cbr,5)
			MEU_CLASS_BAG(B_Kitbag_cbr,5)
			MEU_CLASS_BAG(B_UAV_01_backpack_F,5)
		};
	};
	class Box_meu_wep: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Weapons Box)
		MEU_CRATE_TEXTURE(front_wpns_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] =
		{
			{"MG Squad Leader Loadout","wep\15th_MG_Squad_Leader.sqf"},
			{"MG Team Leader Loadout","wep\15th_MG_Team_Leader.sqf"},
			{"MG Gunner Loadout","wep\15th_Machinegunner.sqf"},
			{"MG Ammo Man Loadout","wep\15th_MG_Ammo_Man.sqf"},
			{"Assault Squad Leader Loadout","wep\15th_Assault_Squad_Leader.sqf"},
			{"Assault Team Leader Loadout","wep\15th_Assault_Team_Leader.sqf"},
			{"Assault Ammoman Loadout","wep\15th_Assault_Ammoman.sqf"},
			{"Mortar Squad Leader Loadout","wep\15th_Mortar_Squad_Leader.sqf"},
			{"Mortar Assistant Gunner Loadout","wep\15th_Mortar_Assistant_Gunner.sqf"},
			{"MEU HQ Loadout","inf\meu_hq_loadout.sqf",1},
			{"RTO Loadout","inf\meu_rto_loadout.sqf",1}
		};

		class TransportItems
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,5)
			MEU_CLASS_ITEM(acc_pointer_IR,5)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15A,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,25)
			MEU_CLASS_ITEM(optic_acog_holo,5)
			MEU_CLASS_ITEM(optic_Arco,15)
			MEU_CLASS_ITEM(optic_Hamr,15)
			MEU_CLASS_ITEM(optic_tws,5)
			MEU_CLASS_ITEM(optic_tws_mg,5)
			MEU_CLASS_ITEM(ACE_optic_MRCO_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_PIP,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_PIP,15)
			MEU_CLASS_ITEM(rhsusf_acc_harris_bipod,40)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ELCAN_ard,25)
			MEU_CLASS_ITEM(rhsusf_acc_ELCAN,25)
			MEU_CLASS_ITEM(rhsusf_acc_eotech_552,25)
			MEU_CLASS_ITEM(rhsusf_acc_compm4,25)
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,20)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(ace_CableTie,50)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(Rangefinder,20)
			MEU_CLASS_ITEM(B_UavTerminal,4)
			MEU_CLASS_ITEM(itemctab,4)
			MEU_CLASS_ITEM(itemandroid,10)
			MEU_CLASS_ITEM(ItemcTabHCam,10)
			MEU_CLASS_ITEM(ACE_HuntIR_monitor,15)
			MEU_CLASS_ITEM(ToolKit,20)
			MEU_CLASS_ITEM(MineDetector,10)
			MEU_CLASS_ITEM(rhsusf_ANPVS_14,20)
			MEU_CLASS_ITEM(ItemSMGR,20)
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ACE_MX2A,20)
			MEU_CLASS_ITEM(ace_Vector,20)
			MEU_CLASS_ITEM(ACE_microDAGR,25)
			MEU_CLASS_ITEM(ACE_RangeTable_82mm,25)
			MEU_CLASS_ITEM(ACE_RangeCard,25)
			MEU_CLASS_ITEM(ACE_DAGR,25)
			MEU_CLASS_ITEM(ACE_ATragMX,25)
			MEU_CLASS_ITEM(ACE_wirecutter,10)
			MEU_CLASS_ITEM(ACE_Kestrel4500,25)
			MEU_CLASS_ITEM(ACE_UAVBattery,5)
			MEU_CLASS_ITEM(ace_MapTools,25)
			MEU_CLASS_ITEM(ace_DefusalKit,15)
			MEU_CLASS_ITEM(ACE_SpareBarrel,5)
			MEU_CLASS_ITEM(ace_Clacker,10)
			MEU_CLASS_ITEM(ace_M26_Clacker,10)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,25)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,20)
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,25)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,25)
			// VESTS
			MEU_CLASS_ITEM(rhsusf_spc_machinegunner,15)
			MEU_CLASS_ITEM(rhsusf_spc_rifleman,15)
			MEU_CLASS_ITEM(rhsusf_spc_teamleader,15)
			MEU_CLASS_ITEM(rhsusf_spc_squadleader,15)
			// MEDICAL
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		};
		class TransportMagazines
		{
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,100)

			MEU_CLASS_MAG(rhsusf_100Rnd_762x51,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m62_tracer,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m61_ap,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m82_blank,100)
			MEU_CLASS_MAG(rhs_mag_smaw_HEAA,100)
			MEU_CLASS_MAG(rhs_mag_smaw_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_smaw_SR,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,100)
 			//Launched
			MEU_CLASS_MAG(rhs_mag_M441_HE,100)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_M781_Practice,100)
			MEU_CLASS_MAG(rhs_mag_M585_white,100)
			MEU_CLASS_MAG(rhs_mag_m661_green,100)
			MEU_CLASS_MAG(rhs_mag_m662_red,100)
			MEU_CLASS_MAG(rhs_mag_m713_Red,100)
			MEU_CLASS_MAG(rhs_mag_m714_White,100)
			MEU_CLASS_MAG(rhs_mag_m715_Green,100)
			MEU_CLASS_MAG(rhs_mag_m716_yellow,100)
			MEU_CLASS_MAG(1Rnd_SmokeBlue_Grenade_shell,50)
			MEU_CLASS_MAG(ACE_HuntIR_M203,30)
 			//Thrown
			MEU_CLASS_MAG(ace_M84,100)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
			MEU_CLASS_MAG(rhs_mag_m67,50)
			MEU_CLASS_MAG(rhs_mag_m69,50)

			MEU_CLASS_MAG(rhs_mag_an_m8hc,50)
			MEU_CLASS_MAG(rhs_mag_m18_green,50)
			MEU_CLASS_MAG(rhs_mag_m18_purple,50)
			MEU_CLASS_MAG(rhs_mag_m18_red,50)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,50)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			//MEU_CLASS_MAG(rhs_mag_mk84,30) Fashbang, not working properly
			//MEU_CLASS_MAG(rhs_mag_m7a3_cs,30) CS GAS, not working properly
			//MEU_CLASS_MAG(rhs_mag_mk3a2,30) Concussion Grenade, not working properly
			MEU_CLASS_MAG(Laserbatteries,5)
			// EXPLOSIVES
			MEU_CLASS_MAG(APERSMine_Range_Mag,20)
			MEU_CLASS_MAG(ClaymoreDirectionalMine_Remote_Mag,20)
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,20)
			MEU_CLASS_MAG(SatchelCharge_Remote_Mag,20)
			MEU_CLASS_MAG(SLAMDirectionalMine_Wire_Mag,20)
			// Laser designator
		};
		class TransportWeapons
		{
			// WEAPONS
			MEU_CLASS_WEAP(rhs_weap_smaw_green,20)
			MEU_CLASS_WEAP(Laserdesignator,1)
			MEU_CLASS_WEAP(rhsusf_weap_m1911a1,30)
			MEU_CLASS_WEAP(rhs_weap_m240B,20)
			MEU_CLASS_WEAP(rhs_weap_m4,20)
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			MEU_CLASS_WEAP(rhs_weap_m4_m203,20)
			MEU_CLASS_WEAP(rhs_weap_m4_m203S,30)
			MEU_CLASS_WEAP(rhsusf_weap_m9,20)
		};
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_prc113,5)
			MEU_CLASS_BAG(tf_rt113g_wood_reg,5)
			MEU_CLASS_BAG(tf_rt113g_wood_big,5)
			MEU_CLASS_BAG(B_AssaultPack_cbr,5)
			MEU_CLASS_BAG(B_Kitbag_cbr,5)
			MEU_CLASS_BAG(B_UAV_01_backpack_F,5)
			MEU_CLASS_BAG(rhs_M252_Bipod_Bag,5)
			MEU_CLASS_BAG(rhs_M252_Gun_Bag,5)
		};
	};
	class Box_meu_ace: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] ACE Box)
		MEU_CRATE_TEXTURE(front_ace_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] =
		{
			{"ACE Fixed Pilot","ace\A_Fixed_Pilot.sqf"},
			{"ACE Rotary Crew (Desert)","ace\A_Rotary_Crew_D.sqf"},
			{"ACE Rotary Pilot(Desert)","ace\A_Rotary_Pilot_D.sqf"},
			{"ACE Rotary Crew (Woodland)","ace\A_Rotary_Crew_W.sqf"},
			{"ACE Rotary Pilot (Woodland)","ace\A_Rotary_Pilot_W.sqf"}
		};

		class TransportItems
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,20)
			MEU_CLASS_ITEM(acc_pointer_IR,20)

			MEU_CLASS_ITEM(rhsusf_acc_anpeq15A,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,25)
			MEU_CLASS_ITEM(optic_Arco,15)
			MEU_CLASS_ITEM(optic_Hamr,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_eotech_552,25)
			MEU_CLASS_ITEM(rhsusf_acc_compm4,25)
			// MEDICAL
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		    // ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,2)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(rhsusf_ANPVS_14,25)
			MEU_CLASS_ITEM(itemctab,4)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(ItemCtabHCam,4)
			MEU_CLASS_ITEM(ace_earplugs,50)
			// UNIFORMS
			MEU_CLASS_ITEM(OliveCoveralls,5)
			MEU_CLASS_ITEM(FIR_Fighter_Pilot_USMC_Nomex,5)
			MEU_CLASS_ITEM(FIR_Fighter_Pilot_USMC_Nomex2,5)
			// GOGGLES
			MEU_CLASS_ITEM(AV_ESS_tan,25)
			MEU_CLASS_ITEM(G_Aviator,25)
			// VESTS
			MEU_CLASS_ITEM(V_TacVest_blk,5)
			MEU_CLASS_ITEM(rhsusf_spc,15)
			MEU_CLASS_ITEM(rhsusf_spc_light,15)
			MEU_CLASS_ITEM(FIR_pilot_vest,5)
			// HELMETS
			MEU_CLASS_ITEM(H_PilotHelmetFighter_B,5)
			MEU_CLASS_ITEM(H_CrewHelmetHeli_B,5)
			MEU_CLASS_ITEM(H_PilotHelmetHeli_B,5)
			MEU_CLASS_ITEM(FIR_USHelmetType1_USMC_Black_Close,5)
			MEU_CLASS_ITEM(FIR_USHelmetType1_USMC_Black_Open,5)
		};
		class TransportMagazines
		{
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,100)

			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,100)
			//Thrown
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
			MEU_CLASS_MAG(rhs_mag_an_m8hc,30)
			MEU_CLASS_MAG(rhs_mag_m18_green,30)
			MEU_CLASS_MAG(rhs_mag_m18_purple,30)
			MEU_CLASS_MAG(rhs_mag_m18_red,30)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,30)
			MEU_CLASS_MAG(SmokeShellBlue,50)
        };
		class TransportWeapons
		{
			// WEAPONS
			MEU_CLASS_WEAP(rhsusf_weap_m9,30)
			MEU_CLASS_WEAP(rhs_weap_m4,20)
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)

		};
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_prc113,5)
			MEU_CLASS_BAG(tf_rt113g_wood_reg,5)
			MEU_CLASS_BAG(B_AssaultPack_cbr,5)
			MEU_CLASS_BAG(B_Kitbag_cbr,5)
			MEU_CLASS_BAG(B_Parachute,5)
		};
	};
	class Box_meu_titan: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Titan Box)
		MEU_CRATE_TEXTURE(front_titan_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] =
		{
			{"Titan Commander","titan\T_Commander.sqf"},
			{"Titan Crewman","titan\T_Crewman.sqf"}
		};

		class TransportItems
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,12)
			MEU_CLASS_ITEM(acc_pointer_IR,12)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15A,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,25)
			MEU_CLASS_ITEM(optic_Arco,15)
			MEU_CLASS_ITEM(optic_Hamr,15)
			MEU_CLASS_ITEM(rhsusf_acc_eotech_552,25)
			MEU_CLASS_ITEM(rhsusf_acc_compm4,25)
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,6)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(ToolKit,25)
			MEU_CLASS_ITEM(ace_earplugs,50)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,20)
			MEU_CLASS_ITEM(H_HelmetCrew_I,15)
			//Crew Helmet
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,25)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,25)
			// VESTS
			MEU_CLASS_ITEM(rhsusf_spc,15)
			MEU_CLASS_ITEM(rhsusf_spc_light,15)
			MEU_CLASS_ITEM(rhsusf_spc_rifleman,15)
			// MEDICAL
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		};
		class TransportMagazines
		{
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,100)

			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,100)
			// THROWN
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
			MEU_CLASS_MAG(rhs_mag_an_m8hc,30)
			MEU_CLASS_MAG(rhs_mag_m18_green,30)
			MEU_CLASS_MAG(rhs_mag_m18_purple,30)
			MEU_CLASS_MAG(rhs_mag_m18_red,30)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,30)
			MEU_CLASS_MAG(SmokeShellBlue,50)
		};
		class TransportWeapons
		{
			// WEAPONS
			MEU_CLASS_WEAP(rhsusf_weap_m9,30)
			MEU_CLASS_WEAP(rhs_weap_m4,20)
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,30)

		};
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_prc113,5)
			MEU_CLASS_BAG(tf_rt113g_wood_reg,5)
		};
	};
	class Box_meu_gator: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Gator Box)
		MEU_CRATE_TEXTURE(front_aav_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] =
		{
			{"Gator Crew Chief Commander","gator\G_Crew_Chief.sqf"},
			{"Gator Crewman","gator\G_Crewman.sqf"}
		};

		class TransportItems
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,12)
			MEU_CLASS_ITEM(acc_pointer_IR,12)

			MEU_CLASS_ITEM(rhsusf_acc_anpeq15A,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,25)
			MEU_CLASS_ITEM(optic_Hamr,12)
			MEU_CLASS_ITEM(rhsusf_acc_eotech_552,25)
			MEU_CLASS_ITEM(rhsusf_acc_compm4,25)
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,18)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(tf_anprc152,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(Rangefinder,4)
			MEU_CLASS_ITEM(ToolKit,25)
			MEU_CLASS_ITEM(ace_earplugs,50)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,20)
			MEU_CLASS_ITEM(H_HelmetCrew_I,15)
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,25)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,25)
			MEU_CLASS_ITEM(OliveCoveralls,10)
			// VESTS
			MEU_CLASS_ITEM(rhsusf_spc,15)
			MEU_CLASS_ITEM(rhsusf_spc_light,15)
			MEU_CLASS_ITEM(rhsusf_spc_rifleman,15)
			// MEDICAL
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		};
		class TransportMagazines
		{
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,100)

			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,100)
			// SMOKE + 203
			MEU_CLASS_MAG(rhs_mag_an_m8hc,30)
			MEU_CLASS_MAG(rhs_mag_m18_green,30)
			MEU_CLASS_MAG(rhs_mag_m18_purple,30)
			MEU_CLASS_MAG(rhs_mag_m18_red,30)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,30)
			MEU_CLASS_MAG(SmokeShellBlue,50)
		};
		class TransportWeapons
		{
			// WEAPONS
			MEU_CLASS_WEAP(rhsusf_weap_m9,30)
			MEU_CLASS_WEAP(rhs_weap_M136,30)
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,20)
			MEU_CLASS_WEAP(rhs_weap_M136_hp,30)
			MEU_CLASS_WEAP(rhs_weap_m4,20)
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)

		};
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_prc113,5)
			MEU_CLASS_BAG(tf_rt113g_wood_reg,5)
		};
	};
	class Box_meu_arty: B_supplyCrate_F
	{
		#ifndef NO_BATTLESTAR_BOX
		MEU_CRATE_INFO([15th] Battlestar Box)
		#else
		scope = 0;
		#endif

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] =
		{
			{"A_Crew","arty\A_Crew.sqf"},
			{"A_RTO","arty\A_RTO.sqf"}
		};

		class TransportItems
		{
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,20)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Rangefinder,20)
			MEU_CLASS_ITEM(itemctab,10)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(ItemcTabHCam,4)
			MEU_CLASS_ITEM(optic_Arco,15)
			MEU_CLASS_ITEM(optic_Hamr,15)
			MEU_CLASS_ITEM(acc_flashlight,15)
            MEU_CLASS_ITEM(rhsusf_ANPVS_14,50)
			MEU_CLASS_ITEM(ace_earplugs,50)
			// HELMETS

			// UNIFORMS
			// VESTS

			// MEDICAL
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		};
		class TransportMagazines
		{
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,100)

			MEU_CLASS_MAG(rhs_200rnd_556x45_B_SAW,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_T_SAW,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_556x45_M200_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,100)
			// THROWN
			MEU_CLASS_MAG(rhs_mag_m67,30)
			MEU_CLASS_MAG(rhs_mag_m69,30)
			MEU_CLASS_MAG(rhs_mag_an_m8hc,30)
			MEU_CLASS_MAG(rhs_mag_m18_green,30)
			MEU_CLASS_MAG(rhs_mag_m18_purple,30)
			MEU_CLASS_MAG(rhs_mag_m18_red,30)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,30)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			//MEU_CLASS_MAG(rhs_mag_mk84,30) Fashbang, not working properly
			//MEU_CLASS_MAG(rhs_mag_m7a3_cs,30) CS GAS, not working properly
			//MEU_CLASS_MAG(rhs_mag_mk3a2,30) Concussion Grenade, not working properly
		};
		class TransportWeapons
		{
			// WEAPONS
			MEU_CLASS_WEAP(rhs_weap_m27iar,10)
			MEU_CLASS_WEAP(rhsusf_weap_m9,30)
			MEU_CLASS_WEAP(rhs_weap_M136,30)
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,20)
			MEU_CLASS_WEAP(rhs_weap_M136_hp,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L,20)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L_VFG,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S_VFG,20)
			MEU_CLASS_WEAP(rhs_weap_m4,20)
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
		};
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_rt113g_wood_reg,5)
			MEU_CLASS_BAG(B_Kitbag_cbr,5)
		};
	};
	class Box_meu_hq: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] MEU HQ Box)
		MEU_CRATE_TEXTURE(front_hq_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] =
		{
			{"MEU HQ Loadout","inf\meu_hq_loadout.sqf"},
			{"Squad Leader Loadout","inf\meu_squadLeader_lo.sqf"},
			{"Fire Team Leader Loadout","inf\meu_FT_loadout.sqf"},
			{"Rifleman Loadout","inf\meu_rifle_loadout.sqf"},
			{"M27 AR Loadout","inf\meu_ar-iar_loadout.sqf"},
			{"M27 AAR","inf\meu_aar-iar_loadout.sqf"},
			{"Automatic Rifleman Loadout","inf\meu_ar_loadout.sqf"},
			{"Assistant AR Loadout","inf\meu_aar_loadout.sqf"},
			{"RTO Loadout","inf\meu_rto_loadout.sqf"},
			{"Designated Marksman Loadout","inf\meu_dm_loadout.sqf"}
		};

		class TransportItems
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,5)
			MEU_CLASS_ITEM(acc_pointer_IR,5)

			MEU_CLASS_ITEM(rhsusf_acc_anpeq15A,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,25)
			MEU_CLASS_ITEM(rhsusf_acc_LEUPOLDMK4,25)
			MEU_CLASS_ITEM(rhsusf_acc_LEUPOLDMK4_2,25)
			MEU_CLASS_ITEM(optic_Arco,15)
			MEU_CLASS_ITEM(optic_Hamr,15)
			MEU_CLASS_ITEM(optic_tws,5)
			MEU_CLASS_ITEM(optic_tws_mg,5)
            MEU_CLASS_ITEM(rhsusf_ANPVS_14,50)
			MEU_CLASS_ITEM(ACE_optic_MRCO_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_PIP,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_PIP,15)
			MEU_CLASS_ITEM(rhsusf_acc_harris_bipod,40)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_eotech_552,25)
			MEU_CLASS_ITEM(rhsusf_acc_compm4,25)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,20)
			// UNIFORMS

			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,25)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,25)
			// VESTS
			MEU_CLASS_ITEM(rhsusf_spc_IAR,15)
			MEU_CLASS_ITEM(rhsusf_spc_rifleman,15)
			MEU_CLASS_ITEM(rhsusf_spc_teamleader,15)
			MEU_CLASS_ITEM(rhsusf_spc_squadleader,15)
			// MEDICAL
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,2)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(Rangefinder,20)
			MEU_CLASS_ITEM(Laserdesignator,2)
			MEU_CLASS_ITEM(Laserbatteries,4)
			MEU_CLASS_ITEM(B_UavTerminal,2)
			MEU_CLASS_ITEM(itemctab,4)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(ItemcTabHCam,2)
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ACE_Vector,25)
			MEU_CLASS_ITEM(ACE_microDAGR,25)
			MEU_CLASS_ITEM(ACE_RangeCard,25)
			MEU_CLASS_ITEM(ACE_DAGR,25)
			MEU_CLASS_ITEM(ACE_ATragMX,25)
			MEU_CLASS_ITEM(ACE_wirecutter,10)
			MEU_CLASS_ITEM(ACE_MX2A,25)
			MEU_CLASS_ITEM(ACE_CableTie,50)
			MEU_CLASS_ITEM(ACE_Kestrel4500,25)
			MEU_CLASS_ITEM(ACE_UAVBattery,5)
			MEU_CLASS_ITEM(ace_MapTools,25)
			MEU_CLASS_ITEM(ace_DefusalKit,15)
			MEU_CLASS_ITEM(ACE_SpareBarrel,5)
			MEU_CLASS_ITEM(ace_Clacker,10)
			MEU_CLASS_ITEM(ace_M26_Clacker,10)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,25)
		};
		class TransportMagazines
		{
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_B_SAW,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_T_SAW,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_556x45_M200_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,100)
			// Launched
			MEU_CLASS_MAG(rhs_mag_M441_HE,100)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_M781_Practice,100)
			MEU_CLASS_MAG(rhs_mag_M585_white,100)
			MEU_CLASS_MAG(rhs_mag_m661_green,100)
			MEU_CLASS_MAG(rhs_mag_m662_red,100)
			MEU_CLASS_MAG(rhs_mag_m713_Red,100)
			MEU_CLASS_MAG(rhs_mag_m714_White,100)
			MEU_CLASS_MAG(rhs_mag_m715_Green,100)
			MEU_CLASS_MAG(rhs_mag_m716_yellow,100)
			MEU_CLASS_MAG(1Rnd_SmokeBlue_Grenade_shell,50)
			MEU_CLASS_MAG(ACE_HuntIR_M203,30)
			//Thrown
			MEU_CLASS_MAG(ace_M84,100)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
			MEU_CLASS_MAG(rhs_mag_m67,30)
			MEU_CLASS_MAG(rhs_mag_m69,30)

			MEU_CLASS_MAG(rhs_mag_an_m8hc,30)
			MEU_CLASS_MAG(rhs_mag_m18_green,30)
			MEU_CLASS_MAG(rhs_mag_m18_purple,30)
			MEU_CLASS_MAG(rhs_mag_m18_red,30)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,30)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			//MEU_CLASS_MAG(rhs_mag_mk84,30) Fashbang, not working properly
			//MEU_CLASS_MAG(rhs_mag_m7a3_cs,30) CS GAS, not working properly
			//MEU_CLASS_MAG(rhs_mag_mk3a2,30) Concussion Grenade, not working properly
			// EXPLOSIVES
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,50)
			MEU_CLASS_MAG(ClaymoreDirectionalMine_Remote_Mag,20)
		};
		class TransportWeapons
		{
			// WEAPONS
			MEU_CLASS_WEAP(rhs_weap_m27iar,5)
			MEU_CLASS_WEAP(rhsusf_weap_m9,30)
			MEU_CLASS_WEAP(HAFM_LAW,20)
			MEU_CLASS_WEAP(rhs_weap_M136,30)
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,20)
			MEU_CLASS_WEAP(rhs_weap_M136_hp,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L,20)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L_VFG,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S_VFG,20)
			MEU_CLASS_WEAP(rhs_weap_m4,20)
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			MEU_CLASS_WEAP(rhs_weap_m4_grip,30)
			MEU_CLASS_WEAP(rhs_weap_m4_m203,20)
			MEU_CLASS_WEAP(rhs_weap_m4_m203S,30)
		};
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_prc113,5)
			MEU_CLASS_BAG(tf_rt113g_wood_reg,5)
			MEU_CLASS_BAG(tf_rt113g_wood_big,5)
			MEU_CLASS_BAG(B_AssaultPack_cbr,5)
			MEU_CLASS_BAG(B_Kitbag_cbr,5)
			MEU_CLASS_BAG(B_UAV_01_backpack_F,5)
		};
	};
	class Box_meu_lce: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Logistics Box)
		MEU_CRATE_TEXTURE(front_clb_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] =
		{
			{"LCE HQ","lce\lce_hq_loadout.sqf"},
			{"LCE Combat Engineer","lce\lce_engineer.sqf"},
			{"LCE EOD Team Lead","lce\eod_lead.sqf"},
			{"LCE EOD Technician","lce\eod_tech.sqf"},
			{"LCE MP Team Lead","lce\lce_mp_lead.sqf"},
			{"LCE Military Policeman","lce\lce_policeman.sqf"},
			{"LCE Supply Team lead","lce\lce_supply_lead.sqf"},
			{"LCE Supply Driver","lce\lce_supply_driver.sqf"},
		};

		class TransportItems
		{
			// ATTACHMENTS
			MEU_CLASS_ITEM(acc_flashlight,12)
			MEU_CLASS_ITEM(acc_pointer_IR,12)
			MEU_CLASS_ITEM(rhsusf_acc_harris_bipod,40)

			MEU_CLASS_ITEM(rhsusf_acc_anpeq15A,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,25)
			// OPTICS
			MEU_CLASS_ITEM(optic_Hamr,12)
			MEU_CLASS_ITEM(ACE_optic_MRCO_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_PIP,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_PIP,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_eotech_552,25)
			MEU_CLASS_ITEM(rhsusf_acc_compm4,25)
			// GOGGLES
            MEU_CLASS_ITEM(rhsusf_ANPVS_14,50)
			MEU_CLASS_ITEM(AV_ESS_blk_clr,100)
			MEU_CLASS_ITEM(AV_ESS_tan,100)
			MEU_CLASS_ITEM(AV_ESS_tan_clr,100)
			MEU_CLASS_ITEM(AV_ESS_grn,100)
			MEU_CLASS_ITEM(AV_ESS_grn_clr,100)
			// ACCESSORIES
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ACE_Vector,25)
			MEU_CLASS_ITEM(ACE_microDAGR,25)
			MEU_CLASS_ITEM(ACE_RangeCard,25)
			MEU_CLASS_ITEM(ACE_DAGR,25)
			MEU_CLASS_ITEM(ACE_ATragMX,25)
			MEU_CLASS_ITEM(ACE_HuntIR_monitor,15)
			MEU_CLASS_ITEM(ACE_wirecutter,10)
			MEU_CLASS_ITEM(ACE_MX2A,25)
			MEU_CLASS_ITEM(ACE_CableTie,50)
			MEU_CLASS_ITEM(ACE_Kestrel4500,25)
			MEU_CLASS_ITEM(ACE_UAVBattery,5)
			MEU_CLASS_ITEM(ace_MapTools,25)
			MEU_CLASS_ITEM(ace_DefusalKit,15)
			MEU_CLASS_ITEM(ACE_SpareBarrel,5)
			MEU_CLASS_ITEM(ace_Clacker,5)
			MEU_CLASS_ITEM(ace_M26_Clacker,5)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,10)
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,18)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemSMGR,20)
			MEU_CLASS_ITEM(tf_anprc152,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(Rangefinder,4)
			MEU_CLASS_ITEM(ToolKit,25)
			MEU_CLASS_ITEM(Laserdesignator,1)
			MEU_CLASS_ITEM(Laserbatteries,5)
			MEU_CLASS_ITEM(B_UavTerminal,2)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(itemctab,4)
			MEU_CLASS_ITEM(ItemcTabHCam,2)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,20)
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,25)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,25)
			// VESTS
			MEU_CLASS_ITEM(rhsusf_spc,15)
			MEU_CLASS_ITEM(rhsusf_spc_IAR,15)
			MEU_CLASS_ITEM(rhsusf_spc_light,15)
			MEU_CLASS_ITEM(rhsusf_spc_marksman,15)
			MEU_CLASS_ITEM(rhsusf_spc_rifleman,15)
			MEU_CLASS_ITEM(rhsusf_spc_teamleader,15)
			MEU_CLASS_ITEM(rhsusf_spc_squadleader,15)
			// MEDICAL
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		};
		class TransportMagazines
		{
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,100)

			MEU_CLASS_MAG(rhsusf_5Rnd_00Buck,100)
			MEU_CLASS_MAG(rhsusf_8Rnd_00Buck,100)
			MEU_CLASS_MAG(rhsusf_5Rnd_Slug,100)
			MEU_CLASS_MAG(rhsusf_8Rnd_Slug,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m993_Mag,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_B_SAW,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_T_SAW,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_556x45_M200_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,100)
			//Launched
			MEU_CLASS_MAG(rhs_mag_M441_HE,100)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_M781_Practice,100)
			MEU_CLASS_MAG(rhs_mag_M585_white,100)
			MEU_CLASS_MAG(rhs_mag_m661_green,100)
			MEU_CLASS_MAG(rhs_mag_m662_red,100)
			MEU_CLASS_MAG(rhs_mag_m713_Red,100)
			MEU_CLASS_MAG(rhs_mag_m714_White,100)
			MEU_CLASS_MAG(rhs_mag_m715_Green,100)
			MEU_CLASS_MAG(rhs_mag_m716_yellow,100)
			MEU_CLASS_MAG(1Rnd_SmokeBlue_Grenade_shell,50)
			MEU_CLASS_MAG(ACE_HuntIR_M203,30)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M781_Practice,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M714_white,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M433_HEDP,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M576_Buckshot,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M441_HE,100)
			// THROWN
			MEU_CLASS_MAG(ace_M84,100)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
			MEU_CLASS_MAG(rhs_mag_m67,30)
			MEU_CLASS_MAG(rhs_mag_m69,30)

			MEU_CLASS_MAG(rhs_mag_an_m8hc,30)
			MEU_CLASS_MAG(rhs_mag_m18_green,30)
			MEU_CLASS_MAG(rhs_mag_m18_purple,30)
			MEU_CLASS_MAG(rhs_mag_m18_red,30)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,30)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			//MEU_CLASS_MAG(rhs_mag_mk84,30) Fashbang, not working properly
			//MEU_CLASS_MAG(rhs_mag_m7a3_cs,30) CS GAS, not working properly
			//MEU_CLASS_MAG(rhs_mag_mk3a2,30) Concussion Grenade, not working properly
			// EXPLOSIVES
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,30)
			MEU_CLASS_MAG(ClaymoreDirectionalMine_Remote_Mag,30)
		};
		class TransportWeapons
		{
			// WEAPONS
			MEU_CLASS_WEAP(rhs_weap_m27iar,20)
			MEU_CLASS_WEAP(rhsusf_weap_m9,30)
			MEU_CLASS_WEAP(HAFM_LAW,20)
			MEU_CLASS_WEAP(rhs_weap_M136,30)
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,20)
			MEU_CLASS_WEAP(rhs_weap_M136_hp,30)

			MEU_CLASS_WEAP(rhs_weap_sr25,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L,20)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L_VFG,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S_VFG,20)
			MEU_CLASS_WEAP(rhs_weap_m32,20)
			MEU_CLASS_WEAP(rhs_weap_m4,20)
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			MEU_CLASS_WEAP(rhs_weap_m4_grip,30)
			MEU_CLASS_WEAP(rhs_weap_m4_m203,20)
			MEU_CLASS_WEAP(rhs_weap_m4_m203S,30)
			MEU_CLASS_WEAP(rhs_weap_M590_8RD,20)
		};
		class TransportBackpacks
		{
			MEU_CLASS_BAG(tf_prc113,5)
			MEU_CLASS_BAG(tf_rt113g_wood_reg,5)
			MEU_CLASS_BAG(B_AssaultPack_cbr,5)
			MEU_CLASS_BAG(B_Kitbag_cbr,5)
		};
	};
	class Box_meu_lar: B_supplyCrate_F
	{
		#ifndef NO_LAR_BOX
		MEU_CRATE_INFO([15th] LAR Box)
		MEU_CRATE_TEXTURE(front_lar_co)
		#else
		scope = 0;
		#endif


		MEU_MANAGER = 1;
		MEU_LOADOUTS[] =
		{
			{"Marauder AAR Loadout","lar\meu_laraar_loadout.sqf"},
			{"Marauder AR Loadout","lar\meu_larar_loadout.sqf"},
			{"Marauder Commander Loadout","lar\meu_larcom_loadout.sqf"},
			{"Marauder Crew Loadout","lar\meu_larcrew_loadout.sqf"},
			{"Marauder HQ Loadout","lar\meu_larhq_loadout.sqf"},
			{"Marauder Rifleman Loadout","lar\meu_larrifle_loadout.sqf"},
			{"Marauder RTO Loadout","lar\meu_larrto_loadout.sqf"},
			{"Marauder Team Leader Loadout","lar\meu_lartl_loadout.sqf"}
		};

		class TransportItems
		{
			// ATTACHMENTS
			MEU_CLASS_ITEM(acc_pointer_IR,20)
			MEU_CLASS_ITEM(acc_flashlight,20)
			MEU_CLASS_ITEM(rhsusf_acc_harris_bipod,40)

			// OPTICS
			MEU_CLASS_ITEM(optic_Hamr,20)
			MEU_CLASS_ITEM(optic_MRCO,20)
			MEU_CLASS_ITEM(optic_Holosight,20)
			MEU_CLASS_ITEM(optic_nvs,20)
			MEU_CLASS_ITEM(optic_tws,5)
			MEU_CLASS_ITEM(ACE_optic_MRCO_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_PIP,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_PIP,15)
			MEU_CLASS_ITEM(rhsusf_acc_LEUPOLDMK4,25)
			MEU_CLASS_ITEM(rhsusf_acc_LEUPOLDMK4_2,25)
			MEU_CLASS_ITEM(optic_LRPS,5)
			// HELMETS
			MEU_CLASS_ITEM(H_HelmetCrew_I,15)
			// NVG AND GOGGLES
            MEU_CLASS_ITEM(rhsusf_ANPVS_14,50)
			MEU_CLASS_ITEM(AV_ESS_blk,20)
			MEU_CLASS_ITEM(AV_ESS_blk_clr,20)
			MEU_CLASS_ITEM(AV_ESS_tan,20)
			MEU_CLASS_ITEM(AV_ESS_tan_clr,20)
			MEU_CLASS_ITEM(AV_ESS_grn,20)
			MEU_CLASS_ITEM(AV_ESS_grn_clr,20)
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,20)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(tf_anprc152,170)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(MineDetector,10)
			MEU_CLASS_ITEM(ToolKit,10)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(Rangefinder,20)
			MEU_CLASS_ITEM(Laserdesignator,3)
			MEU_CLASS_ITEM(Laserbatteries,9)
			MEU_CLASS_ITEM(B_UavTerminal,4)
			MEU_CLASS_ITEM(itemctab,4)
			MEU_CLASS_ITEM(itemandroid,10)
			MEU_CLASS_ITEM(ItemcTabHCam,10)
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ACE_Vector,25)
			MEU_CLASS_ITEM(ACE_microDAGR,25)
			MEU_CLASS_ITEM(ACE_RangeCard,25)
			MEU_CLASS_ITEM(ACE_DAGR,25)
			MEU_CLASS_ITEM(ACE_ATragMX,25)
			MEU_CLASS_ITEM(ACE_wirecutter,10)
			MEU_CLASS_ITEM(ACE_MX2A,25)
			MEU_CLASS_ITEM(ACE_CableTie,50)
			MEU_CLASS_ITEM(ACE_Kestrel4500,25)
			MEU_CLASS_ITEM(ACE_UAVBattery,5)
			MEU_CLASS_ITEM(ace_MapTools,25)
			MEU_CLASS_ITEM(ace_DefusalKit,15)
			MEU_CLASS_ITEM(ACE_SpareBarrel,5)
			MEU_CLASS_ITEM(ace_Clacker,10)
			MEU_CLASS_ITEM(ace_M26_Clacker,10)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,25)
			// UNIFORMS
			// MEDICAL
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		};
		class TransportMagazines
		{
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,100)

			MEU_CLASS_MAG(rhsusf_5Rnd_00Buck,100)
			MEU_CLASS_MAG(rhsusf_8Rnd_00Buck,100)
			MEU_CLASS_MAG(rhsusf_5Rnd_Slug,100)
			MEU_CLASS_MAG(rhsusf_8Rnd_Slug,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m993_Mag,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_B_SAW,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_T_SAW,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_556x45_M200_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,100)
			//Launched
			MEU_CLASS_MAG(rhs_mag_M441_HE,100)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_M781_Practice,100)
			MEU_CLASS_MAG(rhs_mag_M585_white,100)
			MEU_CLASS_MAG(rhs_mag_m661_green,100)
			MEU_CLASS_MAG(rhs_mag_m662_red,100)
			MEU_CLASS_MAG(rhs_mag_m713_Red,100)
			MEU_CLASS_MAG(rhs_mag_m714_White,100)
			MEU_CLASS_MAG(rhs_mag_m715_Green,100)
			MEU_CLASS_MAG(rhs_mag_m716_yellow,100)
			MEU_CLASS_MAG(1Rnd_SmokeBlue_Grenade_shell,50)
			MEU_CLASS_MAG(ACE_HuntIR_M203,30)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M781_Practice,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M714_white,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M433_HEDP,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M576_Buckshot,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M441_HE,100)
			// THROWN
			MEU_CLASS_MAG(ace_M84,100)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
			MEU_CLASS_MAG(rhs_mag_m67,30)
			MEU_CLASS_MAG(rhs_mag_m69,30)

			MEU_CLASS_MAG(rhs_mag_an_m8hc,30)
			MEU_CLASS_MAG(rhs_mag_m18_green,30)
			MEU_CLASS_MAG(rhs_mag_m18_purple,30)
			MEU_CLASS_MAG(rhs_mag_m18_red,30)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,30)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			//MEU_CLASS_MAG(rhs_mag_mk84,30) Fashbang, not working properly
			//MEU_CLASS_MAG(rhs_mag_m7a3_cs,30) CS GAS, not working properly
			//MEU_CLASS_MAG(rhs_mag_mk3a2,30) Concussion Grenade, not working properly
			// EXPLOSIVES
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,50)
		};
		class TransportWeapons
		{
			// WEAPONS

		};
		class TransportBackpacks
		{
			MEU_CLASS_BAG(tf_prc113,5)
			MEU_CLASS_BAG(tf_rt113g_wood_reg,10)
			MEU_CLASS_BAG(B_UAV_01_backpack_F,5)
		};
	};
	class Box_meu_Boats: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Boats)
		class TransportItems{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportBackPacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(B_CRRC_backpack,100)
		};
	};
	class Box_meu_soi_student: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] SOI - Student Box)
		MEU_CRATE_TEXTURE(front_student_co)

		MEU_MANAGER = 0;
		MEU_LOADOUTS[] =
		{
		};

		class TransportItems
		{
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,25)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,25)
			MEU_CLASS_ITEM(rhsusf_spc,15)
			MEU_CLASS_ITEM(rhsusf_spc_rifleman,15)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,20)
			// NVG AND GOGGLES
            MEU_CLASS_ITEM(rhsusf_ANPVS_14,50)
			// OPTICS
			MEU_CLASS_ITEM(ACE_optic_MRCO_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_2d,15)
			MEU_CLASS_ITEM(rhsusf_acc_harris_bipod,40)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_eotech_552,25)
			MEU_CLASS_ITEM(rhsusf_acc_compm4,25)
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ItemGPS,20)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(tf_anprc152,170)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(Rangefinder,20)
			MEU_CLASS_ITEM(ACE_CableTie,50)
			MEU_CLASS_ITEM(ItemcTabHCam,10)
			// MEDICAL
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		};
		class TransportMagazines
		{
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,100)

			MEU_CLASS_MAG(rhs_200rnd_556x45_B_SAW,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_T_SAW,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_556x45_M200_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,100)
			//Launched
			MEU_CLASS_MAG(rhs_mag_M441_HE,100)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_M781_Practice,100)
			MEU_CLASS_MAG(rhs_mag_M585_white,100)
			MEU_CLASS_MAG(rhs_mag_m661_green,100)
			MEU_CLASS_MAG(rhs_mag_m662_red,100)
			MEU_CLASS_MAG(rhs_mag_m713_Red,100)
			MEU_CLASS_MAG(rhs_mag_m714_White,100)
			MEU_CLASS_MAG(rhs_mag_m715_Green,100)
			MEU_CLASS_MAG(rhs_mag_m716_yellow,100)
			MEU_CLASS_MAG(1Rnd_SmokeBlue_Grenade_shell,50)
			// THROWN
			MEU_CLASS_MAG(ace_M84,100)
			MEU_CLASS_MAG(rhs_mag_m67,30)
			MEU_CLASS_MAG(rhs_mag_m69,30)
			MEU_CLASS_MAG(rhs_mag_an_m8hc,30)
			MEU_CLASS_MAG(rhs_mag_m18_green,30)
			MEU_CLASS_MAG(rhs_mag_m18_purple,30)
			MEU_CLASS_MAG(rhs_mag_m18_red,30)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,30)
			MEU_CLASS_MAG(SmokeShellBlue,50)
		};
		class TransportWeapons
		{
			// WEAPONS
			MEU_CLASS_WEAP(rhs_weap_m27iar,20)
			MEU_CLASS_WEAP(rhsusf_weap_m9,30)
			MEU_CLASS_WEAP(HAFM_LAW,20)
			MEU_CLASS_WEAP(rhs_weap_M136,30)
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,20)
			MEU_CLASS_WEAP(rhs_weap_M136_hp,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L,20)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L_VFG,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S_VFG,20)
			MEU_CLASS_WEAP(rhs_weap_m4,20)
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			MEU_CLASS_WEAP(rhs_weap_m4_m203,20)
		};
		class TransportBackpacks
		{
			MEU_CLASS_BAG(B_Kitbag_cbr,15)
		};
	};
	class Box_meu_soi_instructor: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] SOI - Instructor Box)
		MEU_CRATE_TEXTURE(front_instruct_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] =
		{
		};

		class TransportItems
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,15)
			MEU_CLASS_ITEM(acc_pointer_IR,15)
			MEU_CLASS_ITEM(optic_acog_holo,10)
			MEU_CLASS_ITEM(optic_Arco,15)
			MEU_CLASS_ITEM(optic_mrco,15)
			MEU_CLASS_ITEM(rhsusf_acc_LEUPOLDMK4,25)
			MEU_CLASS_ITEM(rhsusf_acc_LEUPOLDMK4_2,25)
			MEU_CLASS_ITEM(optic_Hamr,15)
			MEU_CLASS_ITEM(optic_tws,15)
			MEU_CLASS_ITEM(ACE_optic_MRCO_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_2d,15)
			MEU_CLASS_ITEM(ACE_optic_Arco_PIP,15)
			MEU_CLASS_ITEM(ACE_optic_Hamr_PIP,15)
			MEU_CLASS_ITEM(rhsusf_acc_harris_bipod,40)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,25)
			MEU_CLASS_ITEM(rhsusf_acc_ELCAN_ard,25)
			MEU_CLASS_ITEM(rhsusf_acc_ELCAN,25)
			MEU_CLASS_ITEM(rhsusf_acc_eotech_552,25)
			MEU_CLASS_ITEM(rhsusf_acc_compm4,25)

			MEU_CLASS_ITEM(rhsusf_acc_anpeq15A,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,25)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,25)
			// GOGGLES
            MEU_CLASS_ITEM(rhsusf_ANPVS_14,50)
			MEU_CLASS_ITEM(AV_ESS_blk_clr,50)
			MEU_CLASS_ITEM(AV_ESS_tan,50)
			MEU_CLASS_ITEM(AV_ESS_tan_clr,50)
			MEU_CLASS_ITEM(AV_ESS_grn,50)
			MEU_CLASS_ITEM(AV_ESS_grn_clr,50)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,20)
			MEU_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,20)
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,25)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,25)
			// VESTS
			MEU_CLASS_ITEM(rhsusf_spc,15)
			MEU_CLASS_ITEM(rhsusf_spc_light,15)
			MEU_CLASS_ITEM(rhsusf_spc_rifleman,15)
			MEU_CLASS_ITEM(rhsusf_spc_teamleader,15)
			MEU_CLASS_ITEM(rhsusf_spc_squadleader,15)
			// MEDICAL
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		    // ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,25)
			MEU_CLASS_ITEM(ItemSMGR,20)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(Rangefinder,20)
			MEU_CLASS_ITEM(Laserdesignator,1)
			MEU_CLASS_ITEM(Laserbatteries,5)
			MEU_CLASS_ITEM(itemctab,4)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(ItemcTabHCam,2)
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ACE_MX2A,20)
			MEU_CLASS_ITEM(ace_Vector,5)
			MEU_CLASS_ITEM(ACE_microDAGR,25)
			MEU_CLASS_ITEM(ACE_RangeCard,25)
			MEU_CLASS_ITEM(ACE_DAGR,25)
			MEU_CLASS_ITEM(ACE_ATragMX,25)
			MEU_CLASS_ITEM(ACE_wirecutter,10)
			MEU_CLASS_ITEM(ACE_Kestrel4500,25)
			MEU_CLASS_ITEM(ACE_UAVBattery,5)
			MEU_CLASS_ITEM(ace_MapTools,25)
			MEU_CLASS_ITEM(ace_DefusalKit,15)
			MEU_CLASS_ITEM(ACE_SpareBarrel,5)
			MEU_CLASS_ITEM(ace_Clacker,10)
			MEU_CLASS_ITEM(ace_M26_Clacker,10)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,25)
		};
		class TransportMagazines {
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,100)

			MEU_CLASS_MAG(rhsusf_5Rnd_00Buck,100)
			MEU_CLASS_MAG(rhsusf_8Rnd_00Buck,100)
			MEU_CLASS_MAG(rhsusf_5Rnd_Slug,100)
			MEU_CLASS_MAG(rhsusf_8Rnd_Slug,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m993_Mag,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_B_SAW,100)
			MEU_CLASS_MAG(rhs_200rnd_556x45_T_SAW,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_556x45_M200_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m62_tracer,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m61_ap,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m82_blank,100)
			MEU_CLASS_MAG(rhs_mag_smaw_HEAA,100)
			MEU_CLASS_MAG(rhs_mag_smaw_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_smaw_SR,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,100)
 			//Launched
 			MEU_CLASS_MAG(rhs_mag_M441_HE,100)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_M781_Practice,100)
			MEU_CLASS_MAG(rhs_mag_M585_white,100)
			MEU_CLASS_MAG(rhs_mag_m661_green,100)
			MEU_CLASS_MAG(rhs_mag_m662_red,100)
			MEU_CLASS_MAG(rhs_mag_m713_Red,100)
			MEU_CLASS_MAG(rhs_mag_m714_White,100)
			MEU_CLASS_MAG(rhs_mag_m715_Green,100)
			MEU_CLASS_MAG(rhs_mag_m716_yellow,100)
			MEU_CLASS_MAG(1Rnd_SmokeBlue_Grenade_shell,50)
			MEU_CLASS_MAG(ACE_HuntIR_M203,30)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M781_Practice,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M714_white,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M433_HEDP,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M576_Buckshot,100)
			MEU_CLASS_MAG(rhsusf_mag_6Rnd_M441_HE,100)
 			// THROWN
			MEU_CLASS_MAG(ace_M84,100)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
			MEU_CLASS_MAG(rhs_mag_m67,30)
			MEU_CLASS_MAG(rhs_mag_m69,30)

			MEU_CLASS_MAG(rhs_mag_an_m8hc,30)
			MEU_CLASS_MAG(rhs_mag_m18_green,30)
			MEU_CLASS_MAG(rhs_mag_m18_purple,30)
			MEU_CLASS_MAG(rhs_mag_m18_red,30)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,30)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			//MEU_CLASS_MAG(rhs_mag_mk84,30) Fashbang, not working properly
			//MEU_CLASS_MAG(rhs_mag_m7a3_cs,30) CS GAS, not working properly
			//MEU_CLASS_MAG(rhs_mag_mk3a2,30) Concussion Grenade, not working properly
			// EXPLOSIVES
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,50)
			MEU_CLASS_MAG(ClaymoreDirectionalMine_Remote_Mag,50)
		};
		class TransportWeapons {
			// WEAPONS
			MEU_CLASS_WEAP(rhs_weap_m27iar,20)
			MEU_CLASS_WEAP(rhs_weap_smaw_green,3)
			MEU_CLASS_WEAP(rhsusf_weap_m9,30)
			MEU_CLASS_WEAP(HAFM_LAW,20)
			MEU_CLASS_WEAP(rhs_weap_M136,30)
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,20)
			MEU_CLASS_WEAP(rhs_weap_M136_hp,30)
			MEU_CLASS_WEAP(rhs_weap_sr25,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L,20)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_L_VFG,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S,30)
			MEU_CLASS_WEAP(rhs_weap_m249_pip_S_VFG,20)
			MEU_CLASS_WEAP(rhs_weap_m32,20)
			MEU_CLASS_WEAP(rhs_weap_m4,20)
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			MEU_CLASS_WEAP(rhs_weap_m4_grip,30)
			MEU_CLASS_WEAP(rhs_weap_m4_m203,20)
			MEU_CLASS_WEAP(rhs_weap_m4_m203S,30)
			MEU_CLASS_WEAP(rhs_weap_M590_8RD,20)

		};
		class TransportBackpacks
		{
			MEU_CLASS_BAG(B_AssaultPack_cbr,5)
			MEU_CLASS_BAG(B_Kitbag_cbr,5)
			MEU_CLASS_BAG(B_Carryall_cbr,5)
		};
	};
	class Box_meu_empty: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Box Empty)
		MEU_CRATE_TEXTURE(front_empty_co)
		class TransportItems{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportBackPacks{};
	};
	class Box_meu_suply: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Resupply ALPHA)

		class TransportItems
		{
			// MEDICAL
			MEU_CLASS_ITEM(ACE_fieldDressing,500)
			MEU_CLASS_ITEM(ACE_epinephrine,75)
			MEU_CLASS_ITEM(ace_Morphine,100)
			MEU_CLASS_ITEM(ACE_bloodIV_500,50)
			MEU_CLASS_ITEM(ace_earplugs,10)
			MEU_CLASS_ITEM(tf_anprc152,10)
        };
		class TransportMagazines
		{
			// EQUIPMENT
			MEU_CLASS_MAG(Chemlight_red,20)
			MEU_CLASS_MAG(Chemlight_blue,20)
			MEU_CLASS_MAG(Chemlight_green,20)
            // AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,50)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,50)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,50)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,50)

			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m993_Mag,10)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,10)
			MEU_CLASS_MAG(rhs_200rnd_556x45_B_SAW,6)
			MEU_CLASS_MAG(rhs_200rnd_556x45_T_SAW,6)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51,2)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m62_tracer,2)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m61_ap,2)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,12)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_JHP,12)
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,4)
            //Launched
			MEU_CLASS_MAG(rhs_mag_M441_HE,15)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,15)
			MEU_CLASS_MAG(rhs_mag_m713_Red,24)
			MEU_CLASS_MAG(rhs_mag_m714_White,24)
			MEU_CLASS_MAG(rhs_mag_m715_Green,24)
            // Thrown
			MEU_CLASS_MAG(ace_M84,12)
			MEU_CLASS_MAG(Chemlight_blue,10)
			MEU_CLASS_MAG(ace_HandFlare_White,10)
			MEU_CLASS_MAG(ace_HandFlare_Green,10)
			MEU_CLASS_MAG(rhs_mag_m67,25)
			MEU_CLASS_MAG(rhs_mag_an_m8hc,120)
			MEU_CLASS_MAG(rhs_mag_m18_green,60)
			MEU_CLASS_MAG(rhs_mag_m18_purple,2)
			MEU_CLASS_MAG(rhs_mag_m18_red,12)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,2)
			MEU_CLASS_MAG(SmokeShellBlue,2)
			//MEU_CLASS_MAG(rhs_mag_mk84,30) Fashbang, not working properly
			//MEU_CLASS_MAG(rhs_mag_m7a3_cs,30) CS GAS, not working properly
			//MEU_CLASS_MAG(rhs_mag_mk3a2,30) Concussion Grenade, not working properly
        };
        class TransportWeapons
		{
			// WEAPONS
			MEU_CLASS_WEAP(HAFM_LAW,4)
			MEU_CLASS_WEAP(rhs_weap_M136,5)
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,5)
			MEU_CLASS_WEAP(rhs_weap_M136_hp,5)
        };
		class TransportBackpacks
		{

		};
	};
	class Box_meu_suply_Bravo: B_supplyCrate_F
	{
		#ifndef NO_RESUPPLY_BRAVO
		MEU_CRATE_INFO([15th] Resupply BRAVO)
		#else
		scope = 0;
		#endif

		class TransportItems {
			// MEDICAL
			MEU_CLASS_ITEM(ACE_fieldDressing,25)
			MEU_CLASS_ITEM(ACE_epinephrine,25)
		};
		class TransportMagazines {
			// EQUIPMENT
			MEU_CLASS_MAG(Chemlight_red,3)
			MEU_CLASS_MAG(Chemlight_blue,3)
			MEU_CLASS_MAG(Chemlight_green,3)
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,10)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,10)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,10)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,10)

			//Launched
			MEU_CLASS_MAG(rhs_mag_M441_HE,6)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,6)
			//Thrown
			MEU_CLASS_MAG(HandGrenade,6)
			MEU_CLASS_MAG(ace_M84,6)
			MEU_CLASS_MAG(SmokeShell,18)
			MEU_CLASS_MAG(SmokeShellPurple,2)
			MEU_CLASS_MAG(SmokeShellBlue,2)
			MEU_CLASS_MAG(SmokeShellRed,6)
			MEU_CLASS_MAG(SmokeShellGreen,12)
			MEU_CLASS_MAG(ace_M84,6)
			MEU_CLASS_MAG(rhs_mag_m67,6)
			MEU_CLASS_MAG(rhs_mag_an_m8hc,18)
			MEU_CLASS_MAG(rhs_mag_m18_green,12)
			MEU_CLASS_MAG(rhs_mag_m18_purple,2)
			MEU_CLASS_MAG(rhs_mag_m18_red,6)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,2)
			MEU_CLASS_MAG(SmokeShellBlue,2)
			//MEU_CLASS_MAG(rhs_mag_mk84,30) Fashbang, not working properly
			//MEU_CLASS_MAG(rhs_mag_m7a3_cs,30) CS GAS, not working properly
			//MEU_CLASS_MAG(rhs_mag_mk3a2,30) Concussion Grenade, not working properly
		};
		class TransportWeapons {
			MEU_CLASS_WEAP(rhs_weap_M136,3)
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,3)
			MEU_CLASS_WEAP(rhs_weap_M136_hp,3)
		};
		class TransportBackpacks {
			MEU_CLASS_BAG(B_Kitbag_cbr,5)
		};
	};
	class Box_meu_zeus: Box_meu_empty
	{
		displayname = "[15th] Zues Box";
		curatorInfoTypeEmpty = "RscDisplayAttributesInventory";
		model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon = "iconCrateSupp";
		mapSize = 1;
		#ifndef NO_ZEUS_WINDOW
		scope = 0;
		#endif
	};
	class Box_meu_vehicle: Box_NATO_AmmoVeh_F
	{
		MEU_VIC_INFO([15th] Vehicle Box)

		class UserActions
		{
			MEU_VIC_LOADOUT_CLEAR // base class
			/*
			how to add new loadouts:
			MEU_VIC_LOADOUT(class - any one word, action display name, file with loadout)
			note: no quotations on class
			*/
			MEU_VIC_LOADOUT(rifle,"Rifle Loadout","vehicle\infantry_rifle.sqf")
			MEU_VIC_LOADOUT(weapons,"Weapons Loadout","vehicle\infantry_mg.sqf")
			MEU_VIC_LOADOUT(assualt,"Assault Loadout","vehicle\infantry_assault.sqf")
			MEU_VIC_LOADOUT(bas,"Medical Loadout","vehicle\bas.sqf")
			MEU_VIC_LOADOUT(marauder,"Marauder Loadout","vehicle\marauder.sqf")
		};
	};

	#include "\meu_ammoBoxes\crateSigns\signConfig.hpp"
};

#include "\meu_ammoBoxes\loadoutManager\manager_dialog.hpp"