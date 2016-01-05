class CfgPatches
{
	class 15thmeu_mods
	{
		units[] = {};
		weapons[] = {};
		author[] = {"15thMEU"};
		requiredVersion = 1.32;
		requiredAddons[] = {
			"A3_Weapons_F",
			"rhsusf_c_weapons",
			"ace_huntir"
		};
	};
};

class CfgWeapons {
	// Allow RHS M203 and M320 to fire the HuntIR round.
	class UGL_F;
	class Rifle_Base_F;
	class LMG_Mk200_F;
	class arifle_MX_Base_F : Rifle_Base_F {};
	class rhs_weap_m4_Base : arifle_MX_Base_F {	
		class  M203_GL : UGL_F {
			magazines[] = {
				"rhs_mag_M441_HE",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M4009",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_M661_green",
				"rhs_mag_M662_red",
				"rhs_mag_M713_red",
				"rhs_mag_M714_white",
				"rhs_mag_M715_green",
				"rhs_mag_M716_yellow",

				//bis compatibility
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell",
				"3Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell",
					
				//ACE3 Compatibility
				"ACE_HuntIR_M203"
			};
		};
		class  M320_GL : M203_GL {
			magazines[] += {};
		};
	);