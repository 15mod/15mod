////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Dec 08 08:51:01 2015 : Created on Tue Dec 08 08:51:01 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class ace_compat_rhs_usf3 : config.bin{
class CfgPatches
{
	class ace_rhsusf_c_weapons_comp
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"rhsusf_c_weapons","rhsusf_c_troops","ace_javelin"};
		author[] = {"Ruthberg","GitHawk"};
		version = "3.4.1.0";
		versionStr = "3.4.1.0";
		versionAr[] = {3,4,1,0};
		magazines[] = {};
		ammo[] = {"rhsusf_B_300winmag","rhs_ammo_556x45_Mk318_Ball","rhs_ammo_556x45_Mk262_Ball","rhs_ammo_762x51_M80_Ball","rhs_ammo_762x51_M118_Special_Ball","rhs_ammo_762x51_M993_Ball","rhs_ammo_45ACP_MHP","rhs_ammo_M_fgm148_AT"};
	};
};
class CfgAmmo
{
	class BulletBase;
	class rhsusf_B_300winmag: BulletBase
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 37.821;
		ACE_bulletMass = 14.256;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.31};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {847,867,877};
		ACE_barrelLengths[] = {508.0,609.6,660.4};
	};
	class B_556x45_Ball;
	class rhs_ammo_556x45_Mk318_Ball: B_556x45_Ball
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.0176;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.307};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {780,886,950};
		ACE_barrelLengths[] = {254.0,393.7,508.0};
	};
	class rhs_ammo_556x45_Mk262_Ball: B_556x45_Ball
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.9896;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.361};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {624,816,832,838};
		ACE_barrelLengths[] = {190.5,368.3,457.2,508.0};
	};
	class rhs_ammo_762x51_M80_Ball: BulletBase
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.2};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {700,800,820,833,845};
		ACE_barrelLengths[] = {254.0,406.4,508.0,609.6,660.4};
	};
	class rhs_ammo_762x51_M118_Special_Ball: rhs_ammo_762x51_M80_Ball
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 11.34;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.243};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {750,780,790,794};
		ACE_barrelLengths[] = {406.4,508.0,609.6,660.4};
	};
	class rhs_ammo_762x51_M993_Ball: rhs_ammo_762x51_M80_Ball
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 8.2296;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.377};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {875,910,930};
		ACE_barrelLengths[] = {330.2,406.4,508.0};
	};
	class rhs_ammo_45ACP_MHP: BulletBase
	{
		ACE_caliber = 11.481;
		ACE_bulletLength = 17.272;
		ACE_bulletMass = 14.904;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.195};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {230,250,285};
		ACE_barrelLengths[] = {101.6,127.0,228.6};
	};
	class M_Titan_AT;
	class rhs_ammo_M_fgm148_AT: M_Titan_AT
	{
		irLock = 0;
		laserLock = 0;
		airLock = 0;
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 5e-005;
			maxDeflection = 0.025;
			incDeflection = 5e-005;
			canVanillaLock = 0;
			defaultSeekerType = "Optic";
			seekerTypes[] = {"Optic"};
			defaultSeekerLockMode = "LOBL";
			seekerLockModes[] = {"LOBL"};
			seekerAngle = 180;
			seekerAccuracy = 1;
			seekerMinRange = 0;
			seekerMaxRange = 2500;
			defaultAttackProfile = "JAV_TOP";
			attackProfiles[] = {"JAV_TOP","JAV_DIR"};
		};
	};
};
class cfgMagazines
{
	class CA_Magazine;
	class VehicleMagazine;
	class rhs_mag_30Rnd_556x45_M855A1_Stanag;
	class rhs_mag_30Rnd_556x45_M200_Stanag;
	class rhsusf_100Rnd_556x45_soft_pouch: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		ace_isbelt = 1;
	};
	class rhsusf_100Rnd_556x45_M200_soft_pouch: rhs_mag_30Rnd_556x45_M200_Stanag
	{
		ace_isbelt = 1;
	};
	class rhsusf_50Rnd_762x51: CA_Magazine
	{
		ace_isbelt = 1;
	};
	class rhs_mag_100rnd_127x99_mag: VehicleMagazine
	{
		ace_isbelt = 1;
	};
	class RHS_48Rnd_40mm_MK19: VehicleMagazine
	{
		ace_isbelt = 1;
	};
};
class CfgWeapons
{
	class Pistol_Base_F;
	class Rifle_Base_F;
	class srifle_EBR_F;
	class launch_O_Titan_F;
	class UGL_F;
	class rhs_weap_XM2010_Base_F: Rifle_Base_F
	{
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 609.6;
	};
	class arifle_MX_Base_F;
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368.3;
		class M203_GL: UGL_F
		{
			magazines[] = {"rhs_mag_M441_HE","rhs_mag_M433_HEDP","rhs_mag_M4009","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_M661_green","rhs_mag_M662_red","rhs_mag_M713_red","rhs_mag_M714_white","rhs_mag_M715_green","rhs_mag_M716_yellow","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
		};
		class M320_GL: M203_GL
		{
			magazines[] = {"rhs_mag_M441_HE","rhs_mag_M433_HEDP","rhs_mag_M4009","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_M661_green","rhs_mag_M662_red","rhs_mag_M713_red","rhs_mag_M714_white","rhs_mag_M715_green","rhs_mag_M716_yellow","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
		};
	};
	class rhs_weap_m4a1;
	class rhs_weap_mk18: rhs_weap_m4a1
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 261.62;
	};
	class rhs_weap_m16a4: rhs_weap_m4_Base
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 508.0;
	};
	class rhs_weap_m240_base;
	class rhs_weap_m240B: rhs_weap_m240_base
	{
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 629.92;
	};
	class rhs_weap_m14ebrri: srifle_EBR_F
	{
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 558.8;
	};
	class rhs_weap_sr25: rhs_weap_m14ebrri
	{
		ACE_barrelTwist = 285.75;
		ACE_barrelLength = 609.6;
	};
	class rhs_weap_sr25_ec: rhs_weap_sr25
	{
		ACE_barrelTwist = 285.75;
		ACE_barrelLength = 508.0;
	};
	class rhs_weap_M590_5RD: Rifle_Base_F
	{
		ACE_barrelTwist = 0.0;
		ACE_twistDirection = 0;
		ACE_barrelLength = 469.9;
	};
	class rhs_weap_M590_8RD: rhs_weap_M590_5RD
	{
		ACE_barrelTwist = 0.0;
		ACE_twistDirection = 0;
		ACE_barrelLength = 508.0;
	};
	class hgun_ACPC2_F;
	class rhsusf_weap_m1911a1: hgun_ACPC2_F
	{
		ACE_barrelTwist = 406.4;
		ACE_barrelLength = 127.0;
	};
	class rhsusf_acc_sniper_base;
	class rhsusf_acc_LEUPOLDMK4: rhsusf_acc_sniper_base
	{
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
	};
	class rhsusf_acc_LEUPOLDMK4_2: rhsusf_acc_sniper_base
	{
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
	};
	class rhs_weap_fgm148: launch_O_Titan_F
	{
		ace_javelin_enabled = 1;
		weaponInfoType = "ACE_RscOptics_javelin";
		modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d";
		canLock = 0;
		lockingTargetSound[] = {"",0,1};
		lockedTargetSound[] = {"",0,1};
	};
	class rhsusf_ach_helmet_ocp;
	class rhsusf_opscore_01: rhsusf_ach_helmet_ocp
	{
		ace_hearing_protection = 0.5;
		ace_hearing_lowerVolume = 0.6;
	};
	class rhsusf_opscore_01_tan: rhsusf_opscore_01{};
	class rhsusf_opscore_03_ocp: rhsusf_opscore_01{};
	class rhsusf_cvc_helmet: rhsusf_opscore_01
	{
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.8;
	};
	class rhsusf_cvc_green_helmet: rhsusf_cvc_helmet{};
	class rhsusf_cvc_ess: rhsusf_cvc_helmet{};
	class rhsusf_cvc_green_ess: rhsusf_cvc_ess{};
	class H_PilotHelmetHeli_B;
	class H_CrewHelmetHeli_B;
	class rhsusf_hgu56p: H_PilotHelmetHeli_B
	{
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.75;
	};
	class rhsusf_hgu56p_mask: H_CrewHelmetHeli_B
	{
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.75;
	};
	class H_HelmetB;
	class RHS_jetpilot_usaf: H_HelmetB
	{
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.8;
	};
};
class cfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class MBT_01_base_F: Tank_F{};
	class rhsusf_m1a1tank_base: MBT_01_base_F
	{
		ace_refuel_fuelCapacity = 1909;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ace_fcs_Enabled = 0;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						ace_fcs_Enabled = 0;
					};
					class Loader: CommanderOptics
					{
						ace_fcs_Enabled = 0;
					};
				};
			};
		};
	};
	class Heli_light_03_base_F;
	class RHS_UH1_Base: Heli_light_03_base_F
	{
		ace_refuel_fuelCapacity = 1447;
	};
	class Heli_Transport_01_base_F;
	class RHS_UH60_Base: Heli_Transport_01_base_F
	{
		ace_refuel_fuelCapacity = 1360;
	};
	class Heli_Transport_02_base_F;
	class RHS_CH_47F_base: Heli_Transport_02_base_F
	{
		ace_refuel_fuelCapacity = 3914;
	};
	class Heli_Attack_01_base_F;
	class RHS_AH1Z_base: Heli_Attack_01_base_F
	{
		ace_refuel_fuelCapacity = 1600;
	};
	class RHS_AH64_base: Heli_Attack_01_base_F
	{
		ace_refuel_fuelCapacity = 1420;
	};
	class MBT_01_arty_base_F;
	class rhsusf_m109tank_base: MBT_01_arty_base_F
	{
		ace_refuel_fuelCapacity = 511;
	};
	class MRAP_01_base_F;
	class rhsusf_hmmwe_base: MRAP_01_base_F
	{
		ace_refuel_fuelCapacity = 95;
	};
	class rhsusf_rg33_base: MRAP_01_base_F
	{
		ace_refuel_fuelCapacity = 302;
	};
	class Truck_01_base_F;
	class rhsusf_fmtv_base: Truck_01_base_F
	{
		ace_refuel_fuelCapacity = 219;
	};
	class APC_Tracked_02_base_F;
	class rhsusf_m113_tank_base: APC_Tracked_02_base_F
	{
		ace_refuel_fuelCapacity = 360;
	};
	class APC_Tracked_03_base_F;
	class RHS_M2A2_Base: APC_Tracked_03_base_F
	{
		ace_refuel_fuelCapacity = 746;
	};
	class Plane_CAS_01_base_F;
	class RHS_A10: Plane_CAS_01_base_F
	{
		ace_refuel_fuelCapacity = 6223;
	};
	class Plane_Base_F;
	class RHS_C130J_Base: Plane_Base_F
	{
		ace_refuel_fuelCapacity = 25704;
	};
};
//};
