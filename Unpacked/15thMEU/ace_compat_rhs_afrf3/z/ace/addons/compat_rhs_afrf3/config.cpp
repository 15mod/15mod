////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Dec 08 08:51:01 2015 : Created on Tue Dec 08 08:51:01 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class ace_compat_rhs_afrf3 : config.bin{
class CfgPatches
{
	class ace_rhs_c_weapons_comp
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"rhs_c_weapons","rhs_c_troops"};
		author[] = {"Ruthberg","GitHawk"};
		version = "3.4.1.0";
		versionStr = "3.4.1.0";
		versionAr[] = {3,4,1,0};
		magazines[] = {};
		ammo[] = {"rhs_B_545x39_Ball","rhs_B_545x39_Ball_Tracer_Green","rhs_B_762x54_Ball","rhs_B_762x54_Ball_Tracer_Green","rhs_B_762x54_7N1_Ball","rhs_B_762x39_Ball","rhs_B_762x39_Tracer","rhs_B_9x19_7N21","rhs_B_9x18_57N181S","rhs_ammo_127x108mm_x5"};
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_556x45_Ball;
	class rhs_B_545x39_Ball: B_556x45_Ball
	{
		ACE_caliber = 5.588;
		ACE_bulletLength = 21.59;
		ACE_bulletMass = 3.42792;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.168};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {780,880,920};
		ACE_barrelLengths[] = {254.0,414.02,508.0};
	};
	class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
	{
		ACE_caliber = 5.588;
		ACE_bulletLength = 21.59;
		ACE_bulletMass = 3.22704;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.168};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {785,883,925};
		ACE_barrelLengths[] = {254.0,414.02,508.0};
	};
	class B_762x51_Ball;
	class rhs_B_762x54_Ball: B_762x51_Ball
	{
		ACE_caliber = 7.925;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.8496;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.4};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {700,800,820,833};
		ACE_barrelLengths[] = {406.4,508.0,609.6,660.4};
	};
	class rhs_B_762x54_Ball_Tracer_Green: B_762x51_Ball
	{
		ACE_caliber = 7.925;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.6552;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.395};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {680,750,798,800};
		ACE_barrelLengths[] = {406.4,508.0,609.6,660.4};
	};
	class rhs_B_762x54_7N1_Ball: rhs_B_762x54_Ball
	{
		ACE_caliber = 7.925;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.8496;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.4};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {700,800,820,833};
		ACE_barrelLengths[] = {406.4,508.0,609.6,660.4};
	};
	class rhs_B_762x39_Ball: B_762x51_Ball
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 7.9704;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.275};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {650,716,750};
		ACE_barrelLengths[] = {254.0,414.02,508.0};
	};
	class rhs_B_762x39_Tracer: rhs_B_762x39_Ball
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 7.5816;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.275};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {650,716,750};
		ACE_barrelLengths[] = {254.0,414.02,508.0};
	};
	class B_9x21_Ball;
	class rhs_B_9x19_7N21: B_9x21_Ball
	{
		ACE_caliber = 9.017;
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 5.19696;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.14};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {445,460,480};
		ACE_barrelLengths[] = {101.6,127.0,228.6};
	};
	class rhs_B_9x18_57N181S: B_9x21_Ball
	{
		ACE_caliber = 9.271;
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 6.00048;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.125};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {298,330,350};
		ACE_barrelLengths[] = {96.52,127.0,228.6};
	};
	class SubmunitionBase;
	class rhs_ammo_127x108mm_x5: SubmunitionBase
	{
		ACE_rearm_caliber = 13;
	};
};
class cfgMagazines
{
	class VehicleMagazine;
	class rhs_30Rnd_545x39_AK;
	class rhs_100Rnd_762x54mmR: rhs_30Rnd_545x39_AK
	{
		ace_isbelt = 1;
	};
	class rhs_mag_127x108mm_50: VehicleMagazine
	{
		ace_isbelt = 1;
	};
	class rhs_mag_127x108mm_150: rhs_mag_127x108mm_50
	{
		ace_isbelt = 0;
	};
	class rhs_mag_127x108mm_1470: rhs_mag_127x108mm_50
	{
		ace_isbelt = 0;
	};
};
class CfgWeapons
{
	class hgun_Rook40_F;
	class rhs_weap_pya: hgun_Rook40_F
	{
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 111.76;
	};
	class Pistol_Base_F;
	class rhs_weap_makarov_pmm: rhs_weap_pya
	{
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 93.472;
	};
	class rhs_weap_ak74m_Base_F;
	class rhs_weap_ak74m: rhs_weap_ak74m_Base_F
	{
		ACE_barrelTwist = 199.898;
		ACE_barrelLength = 414.02;
	};
	class rhs_weap_akm: rhs_weap_ak74m
	{
		ACE_barrelTwist = 199.898;
		ACE_barrelLength = 414.02;
	};
	class rhs_weap_aks74;
	class rhs_weap_aks74u: rhs_weap_aks74
	{
		ACE_barrelTwist = 160.02;
		ACE_barrelLength = 210.82;
	};
	class rhs_weap_svd: rhs_weap_ak74m
	{
		ACE_barrelTwist = 238.76;
		ACE_barrelLength = 619.76;
	};
	class rhs_weap_svdp;
	class rhs_weap_svds: rhs_weap_svdp
	{
		ACE_barrelTwist = 238.76;
		ACE_barrelLength = 563.88;
	};
	class rhs_pkp_base;
	class rhs_weap_pkp: rhs_pkp_base
	{
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 657.86;
	};
	class rhs_weap_pkm: rhs_weap_pkp
	{
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 645.16;
	};
	class rhs_weap_rpk74m: rhs_weap_pkp
	{
		ACE_barrelTwist = 195.072;
		ACE_barrelLength = 589.28;
	};
	class rhs_acc_sniper_base;
	class rhs_acc_pso1m2: rhs_acc_sniper_base
	{
		ACE_ScopeAdjust_Vertical[] = {0,0};
		ACE_ScopeAdjust_Horizontal[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.0;
		ACE_ScopeAdjust_HorizontalIncrement = 0.5;
	};
	class Launcher_Base_F;
	class rhs_weap_rpg7: Launcher_Base_F
	{
		ace_reloadlaunchers_enabled = 1;
	};
	class H_HelmetB;
	class rhs_tsh4: H_HelmetB
	{
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.8;
	};
	class rhs_tsh4_ess: rhs_tsh4{};
	class rhs_tsh4_bala: rhs_tsh4{};
	class rhs_tsh4_ess_bala: rhs_tsh4{};
	class rhs_zsh7a: H_HelmetB
	{
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.8;
	};
	class rhs_zsh7a_mike: rhs_zsh7a{};
	class rhs_gssh18: H_HelmetB
	{
		ace_hearing_protection = 0.5;
		ace_hearing_lowerVolume = 0.6;
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
	class Car;
	class Car_F: Car
	{
		class ViewPilot;
		class NewTurret;
	};
	class Wheeled_APC_F: Car_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class CommanderOptics;
	};
	class rhs_bmd_base: Tank_F
	{
		ace_refuel_fuelCapacity = 300;
		class Turrets: Turrets
		{
			class CommanderOptics: NewTurret
			{
				ace_fcs_Enabled = 0;
			};
			class MainTurret: MainTurret
			{
				ace_fcs_Enabled = 0;
			};
			class GPMGTurret1: NewTurret
			{
				ace_fcs_Enabled = 0;
			};
		};
	};
	class rhs_bmp1tank_base: Tank_F
	{
		ace_refuel_fuelCapacity = 460;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ace_fcs_Enabled = 0;
			};
			class Com_BMP1: NewTurret
			{
				ace_fcs_Enabled = 0;
			};
		};
	};
	class rhs_bmp_base: rhs_bmp1tank_base{};
	class rhs_bmp1_vdv: rhs_bmp_base{};
	class rhs_bmp2e_vdv: rhs_bmp1_vdv
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						ace_fcs_Enabled = 0;
					};
				};
			};
		};
	};
	class rhs_bmp3tank_base: Tank_F
	{
		ace_refuel_fuelCapacity = 460;
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
				};
			};
			class GPMGTurret1: NewTurret
			{
				ace_fcs_Enabled = 0;
			};
		};
	};
	class rhs_btr_base: Wheeled_APC_F
	{
		ace_refuel_fuelCapacity = 300;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ace_fcs_Enabled = 0;
			};
			class CommanderOptics: CommanderOptics
			{
				ace_fcs_Enabled = 0;
			};
		};
	};
	class rhs_a3spruttank_base: Tank_F
	{
		ace_refuel_fuelCapacity = 400;
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
				};
			};
			class GPMGTurret1: NewTurret
			{
				ace_fcs_Enabled = 0;
			};
		};
	};
	class rhs_a3t72tank_base: Tank_F
	{
		ace_refuel_fuelCapacity = 1200;
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
					class CommanderMG: CommanderOptics
					{
						ace_fcs_Enabled = 0;
					};
				};
			};
		};
	};
	class rhs_t72bd_tv: rhs_a3t72tank_base{};
	class rhs_t90_tv: rhs_t72bd_tv
	{
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
				};
			};
		};
	};
	class rhs_tank_base: Tank_F
	{
		ace_refuel_fuelCapacity = 1200;
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
					class CommanderMG: CommanderOptics
					{
						ace_fcs_Enabled = 0;
					};
				};
			};
		};
	};
	class rhs_infantry_msv_base;
	class rhs_pilot_base: rhs_infantry_msv_base
	{
		ace_gforcecoef = 0.55;
	};
	class O_Plane_CAS_02_F;
	class RHS_su25_base: O_Plane_CAS_02_F
	{
		ace_refuel_fuelCapacity = 3600;
	};
	class Heli_Light_02_base_F;
	class RHS_Mi8_base: Heli_Light_02_base_F
	{
		ace_refuel_fuelCapacity = 3700;
	};
	class Heli_Attack_02_base_F;
	class RHS_Ka52_base: Heli_Attack_02_base_F
	{
		ace_refuel_fuelCapacity = 1870;
	};
	class RHS_Mi24_base: Heli_Attack_02_base_F
	{
		ace_refuel_fuelCapacity = 1851;
	};
	class rhs_t80b: rhs_tank_base
	{
		ace_refuel_fuelCapacity = 1100;
	};
	class Truck_F;
	class RHS_Ural_BaseTurret: Truck_F
	{
		ace_refuel_fuelCapacity = 360;
	};
	class rhs_truck: Truck_F
	{
		ace_refuel_fuelCapacity = 210;
	};
	class MRAP_02_base_F;
	class rhs_tigr_base: MRAP_02_base_F
	{
		ace_refuel_fuelCapacity = 138;
	};
	class Offroad_01_base_f;
	class RHS_UAZ_Base: Offroad_01_base_f
	{
		ace_refuel_fuelCapacity = 78;
	};
	class APC_Tracked_02_base_F;
	class rhs_zsutank_base: APC_Tracked_02_base_F
	{
		ace_refuel_fuelCapacity = 515;
	};
	class rhs_btr60_base: rhs_btr_base
	{
		ace_refuel_fuelCapacity = 290;
	};
	class rhs_btr70_vmf: rhs_btr_base
	{
		ace_refuel_fuelCapacity = 350;
	};
	class rhs_btr70_msv: rhs_btr70_vmf{};
	class rhs_btr80_msv: rhs_btr70_msv
	{
		ace_refuel_fuelCapacity = 300;
	};
	class rhs_2s3tank_base: Tank_F
	{
		ace_refuel_fuelCapacity = 830;
	};
	class OTR21_Base: Truck_F
	{
		ace_refuel_fuelCapacity = 500;
	};
};
//};
