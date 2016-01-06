////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Nov 08 15:54:20 2015 : Created on Sun Nov 08 15:54:20 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class ATLAS_Weapons : config.bin{
class CfgPatches
{
	class ATLAS_Weapons
	{
		units[] = {"ATLAS_B_CRAM","ATLAS_O_CRAM","ATLAS_I_CRAM","ATLAS_B_RAM_Launcher","ATLAS_O_RAM_Launcher","ATLAS_I_RAM_Launcher","ATLAS_O_SS_Launcher","ATLAS_I_SS_Launcher","ATLAS_B_SS_Launcher"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_weapons_F","A3_Weapons_F_beta"};
		author = "ATLAS";
	};
};
class Mode_FullAuto;
class Mode_burst;
class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase: BulletCore{};
	class ShellCore;
	class ShellBase: ShellCore{};
	class FlareCore;
	class ShotDeployCore;
	class ShotDeployBase: ShotDeployCore{};
	class SubmunitionCore;
	class SubmunitionBase: SubmunitionCore{};
	class SubmunitionBullet: SubmunitionBase{};
	class MissileCore;
	class MissileBase: MissileCore{};
	class GrenadeCore;
	class Grenade: Default{};
	class GrenadeBase: GrenadeCore{};
	class BombCore;
	class LaserBombCore;
	class RocketCore;
	class RocketBase: RocketCore{};
	class ShotgunCore;
	class ShotgunBase: ShotgunCore{};
	class MineCore;
	class BoundingMineCore;
	class DirectionalBombCore;
	class PipeBombCore;
	class MineBase: MineCore{};
	class BoundingMineBase: BoundingMineCore{};
	class DirectionalBombBase: DirectionalBombCore{};
	class PipeBombBase: PipeBombCore{};
	class B_19mm_HE;
	class M_Air_AA;
	class smokeshell;
	class smokeshellred;
	class smokeshellgreen;
	class F_20mm_Green;
	class F_20mm_Red;
	class chemlight_blue;
	class O_IRStrobe;
	class B_20mm;
	class APERSTripMine_Wire_Ammo;
	class B_762x51_Minigun_Tracer_Red;
	class B_762x51_Minigun_Tracer_Red_splash;
	class M_RIM_116: M_Air_AA
	{
		hit = 800;
		weaponlocksystem = "2 + 4 + 8";
	};
	class M_RIM_7: M_RIM_116
	{
		hit = 1300;
		manualcontrol = 1;
	};
	class B_20mm_Tracer_Red: B_20mm
	{
		hit = 75;
		indirecthit = 21;
		indirecthitrange = 1;
		caliber = 3;
		typicalspeed = 725;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
		airlock = 1;
		tracklead = 1;
	};
	class B_25mm_Tracer_Red: B_20mm_Tracer_Red
	{
		hit = 90;
		indirecthit = 21;
		indirecthitrange = 2;
	};
	class B_20mm_Tracer_Yellow: B_20mm_Tracer_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_25mm_Tracer_Yellow: B_20mm_Tracer_Yellow
	{
		hit = 90;
		indirecthit = 21;
		indirecthitrange = 2;
	};
	class B_20mm_Tracer_Green: B_20mm_Tracer_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_25mm_Tracer_Green: B_20mm_Tracer_Green
	{
		hit = 90;
		indirecthit = 21;
		indirecthitrange = 2;
	};
};
class CfgMagazines
{
	class 4Rnd_AAA_missiles;
	class 300Rnd_20mm_shells;
	class 24Rnd_Missiles;
	class 6Rnd_Missile_AGM_02_F;
	class 4Rnd_Bomb_04_F;
	class SmokeShell;
	class FlareRed_F;
	class Chemlight_blue;
	class O_IR_Grenade;
	class CA_Magazine;
	class APERSTripMine_Wire_Mag;
	class 5000Rnd_762x51_Belt;
	class 2Rnd_GBU12_LGB;
	class 2Rnd_AAA_missiles;
	class 4Rnd_GAA_missiles;
	class 60Rnd_CMFlareMagazine;
	class 1550Rnd_20mm_Tracer_Red: 300Rnd_20mm_shells
	{
		displayname = "1550Rnd 20mm Tracer Red";
		ammo = "B_20mm_Tracer_Red";
		count = 1550;
		weight = 140;
		tracersEvery = 1;
		maxleadspeed = 700;
	};
	class 300Rnd_20mm_Tracer_Red: 1550Rnd_20mm_Tracer_Red
	{
		displayname = "300Rnd 20mm Tracer Red";
		count = 300;
	};
	class 1550Rnd_20mm_Tracer_Yellow: 1550Rnd_20mm_Tracer_Red
	{
		displayname = "1550Rnd 20mm Tracer Yellow";
		ammo = "B_20mm_Tracer_Yellow";
	};
	class 300Rnd_20mm_Tracer_Yellow: 1550Rnd_20mm_Tracer_Yellow
	{
		displayname = "300Rnd 20mm Tracer Yellow";
		count = 300;
	};
	class 1550Rnd_20mm_Tracer_Green: 1550Rnd_20mm_Tracer_Red
	{
		displayname = "1550Rnd 20mm Tracer Green";
		ammo = "B_20mm_Tracer_Green";
	};
	class 300Rnd_20mm_Tracer_Green: 1550Rnd_20mm_Tracer_Green
	{
		displayname = "300Rnd 20mm Tracer Green";
		count = 300;
	};
	class 300Rnd_25mm_Tracer_Red: 300Rnd_20mm_Tracer_Red
	{
		displayname = "300Rnd 25mm Tracer Red";
		ammo = "B_25mm_Tracer_Red";
	};
	class 300Rnd_25mm_Tracer_Yellow: 300Rnd_20mm_Tracer_Red
	{
		displayname = "300Rnd 25mm Tracer Yellow";
		ammo = "B_25mm_Tracer_Yellow";
	};
	class 300Rnd_25mm_Tracer_Green: 300Rnd_20mm_Tracer_Red
	{
		displayname = "300Rnd 25mm Tracer Green";
		ammo = "B_25mm_Tracer_Green";
	};
	class 21Rnd_AAA_RIM_116: 4Rnd_AAA_missiles
	{
		ammo = "M_RIM_116";
		count = 21;
	};
	class 8Rnd_AAA_RIM_7: 21Rnd_AAA_RIM_116
	{
		ammo = "M_RIM_7";
		count = 8;
	};
};
class CfgWeapons
{
	class MissileLauncher;
	class missiles_ASRAAM: MissileLauncher
	{
		magazines[] = {"2Rnd_AAA_missiles","2Rnd_AAA_missiles_MI02","4Rnd_AAA_missiles","4Rnd_AAA_missiles_MI02","1Rnd_AAA_Missiles"};
	};
	class CannonCore;
	class Binocular;
	class GrenadeLauncher;
	class Default;
	class MGunCore;
	class RocketPods;
	class SmokeLauncher;
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		class LowROF: Mode_FullAuto{};
		class close: LowROF{};
		class near: close{};
		class short: close{};
		class medium: close{};
		class far: close{};
	};
	class M61_Vulcan_CIWS: Gatling_30mm_Plane_CAS_01_F
	{
		displayname = "M61";
		magazines[] = {"1550Rnd_20mm_Tracer_Red","1550Rnd_20mm_Tracer_Yellow","1550Rnd_20mm_Tracer_Green"};
		burst = 1;
		multiplier = 3;
		reloadtime = 0.42;
		modes[] = {"LowROF","AI"};
		muzzleEnd = "muzzle";
		muzzlePos = "Chamber";
		selectionFireAnim = "Zasleh";
		class GunParticles
		{
			class Effect
			{
				positionname = "effect_pos";
				directionname = "effect_dir";
				effectname = "machinegun3";
			};
		};
		class LowROF: LowROF
		{
			burst = 1;
		};
		class AI: LowROF
		{
			aiDispersionCoefX = 0;
			aiDispersionCoefY = 0;
			dispersion = 0.005;
			showtoplayer = 0;
			aiRateOfFire = 0;
			aiRateofFireDistance = 700;
			minrange = 300;
			minrangeprobab = 0.35;
			midrange = 700;
			midrangeprobab = 0.88;
			maxrange = 1500;
			maxrangeprobab = 0.3;
			burst = 1;
		};
	};
	class M61_Vulcan_CIWS_stepped: M61_Vulcan_CIWS
	{
		class AI: AI
		{
			midrange = 500;
			maxrange = 750;
		};
	};
	class M61_Vulcan: M61_Vulcan_CIWS
	{
		muzzleEnd = "";
		muzzlePos = "";
		selectionFireAnim = "";
		displaynameshort = "M61";
		type = 65536;
		ballisticscomputer = 2;
		magazines[] = {"300Rnd_20mm_Tracer_Red","300Rnd_20mm_Tracer_Yellow","300Rnd_20mm_Tracer_Green"};
		class GunParticles: GunParticles
		{
			class Shell
			{
				directionname = "shell_eject_dir";
				effectname = "HeavyGunCartridge1";
				positionname = "shell_eject_pos";
			};
		};
		class LowROF: LowROF
		{
			displayname = "M61";
			autofire = 1;
		};
	};
	class ATLAS_GAU12: M61_Vulcan
	{
		displayname = "GAU12";
		displaynameshort = "GAU12";
		magazines[] = {"300Rnd_25mm_Tracer_Red","300Rnd_25mm_Tracer_Yellow","300Rnd_25mm_Tracer_Green"};
		class LowROF: LowROF
		{
			displayname = "GAU-12";
		};
	};
	class missiles_RIM_116: missiles_ASRAAM
	{
		displayname = "RIM-116";
		magazines[] = {"21Rnd_AAA_RIM_116"};
		maxrange = 1500;
		maxrangeprobab = 0.3;
		midrange = 1000;
		midrangeprobab = 0.88;
		minrange = 500;
		minrangeprobab = 0.35;
		weaponlockdelay = 0.3;
		initspeed = 30;
		burst = 1;
		reloadtime = 3;
	};
	class missiles_RIM_116_naval: missiles_RIM_116
	{
		maxrange = 2200;
		midrange = 1500;
		minrange = 750;
	};
	class missiles_RIM_116_stepped: missiles_RIM_116
	{
		maxrange = 1000;
		midrange = 700;
	};
	class missiles_RIM_7: missiles_RIM_116
	{
		displayname = "RIM-7";
		magazines[] = {"8Rnd_AAA_RIM_7"};
		maxrange = 9000;
		maxrangeprobab = 0.001;
		midrangeprobab = 0.01;
		minrangeprobab = 0.1;
		reloadtime = 7;
	};
	class missiles_RIM_7_naval: missiles_RIM_7
	{
		maxrange = 3000;
		maxrangeprobab = 0.3;
		midrange = 2500;
		midrangeprobab = 0.88;
		minrange = 2000;
		minrangeprobab = 0.35;
	};
	class missiles_RIM_7_stepped: missiles_RIM_7
	{
		maxrange = 1500;
		maxrangeprobab = 0.3;
		midrange = 1100;
		midrangeprobab = 0.88;
		minrange = 900;
		minrangeprobab = 0.35;
	};
};
class CfgVehicles
{
	class LandVehicle;
	class NATO_Box_base;
	class EAST_Box_Base;
	class IND_Box_Base;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class ATLAS_staticWeapon_base: StaticMGWeapon
	{
		_generalmacro = "ATLAS_staticWeapon_base";
		author = "ATLAS";
		displayname = "Static Weapon";
		model = "";
		scope = 0;
		scopecurator = 0;
		canlock = 2;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "turret";
				gun = "gun";
				gunbeg = "muzzle";
				gunend = "chamber";
				gunnerlefthandanimname = "";
				gunnerrighthandanimname = "";
				gunneropticsmodel = "\A3\weapons_F\reticle\Optics_Gunner_02_F";
				stablilizedinAxes = 4;
				viewgunnerinExternal = 0;
				castGunnerShadow = 0;
				magazines[] = {};
				weapons[] = {};
				memorypointgun = "muzzle";
				memorypointgunneroptics = "camera_pos";
				particlesdir = "effect_dir";
				particlespos = "effect_pos";
				turretinfotype = "RscOptics_APC_Tracked_01_gunner";
				forceHideGunner = 1;
				gunnerforceoptics = 1;
				selectionFireAnim = "zasleh";
				gunneraction = "Disabled";
				gunnerinaction = "Disabled";
				optics = 1;
				class ViewOptics
				{
					continous = 1;
					initanglex = 0;
					initangley = 0;
					initfov = 0.7;
					maxanglex = 85;
					maxangley = 240;
					maxfov = 1;
					maxmovex = 0;
					maxmovey = 0;
					maxmovez = 0;
					minanglex = -25;
					minangley = -240;
					minfov = 0.029;
					minmovex = 0;
					minmovey = 0;
					minmovez = 0;
					thermalmode[] = {0,1};
					visionmode[] = {"normal","nvg","Ti"};
				};
				class Hitpoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "turret";
						visual = "";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.25;
						class DestructionEffects
						{
							class Smoke
							{
								intensity = 5;
								interval = 1;
								lifetime = 30;
								position = "turretdestruct_pos";
								simulation = "particles";
								type = "WeaponWreckSmoke";
							};
						};
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						name = "gun";
						visual = "";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.25;
						class DestructionEffects
						{
							class Smoke
							{
								intensity = 2;
								interval = 1;
								lifetime = 30;
								position = "gundestruct_pos";
								simulation = "particles";
								type = "WeaponWreckSmoke";
							};
						};
					};
				};
			};
		};
	};
	class ATLAS_CIWS_staticweapon_base: ATLAS_staticWeapon_base
	{
		_generalmacro = "ATLAS_CIWS_staticweapon_base";
		author = "ATLAS";
		displayname = "CIWS";
		gunnercansee = 31;
		minfiretime = 5;
		irScanRangeMin = 4000;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 5;
		radarType = 4;
		armor = 100;
		class UserActions{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minelev = -25;
				maxelev = 85;
				minturn = -180;
				maxturn = 180;
				visionmode[] = {"Ti"};
				class Hitpoints: Hitpoints
				{
					class HitTurret: HitTurret
					{
						armor = 10;
					};
					class HitGun: HitGun
					{
						armor = 10;
					};
				};
			};
		};
	};
	class ATLAS_missile_staticweapon_base: ATLAS_CIWS_staticweapon_base
	{
		_generalmacro = "ATLAS_missile_staticweapon_base";
		author = "ATLAS";
		displayname = "Missile Turret";
		memorypointmissiledir = "missile_pos";
		memorypointmissile = "missile_dir";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				missilebeg = "missile_dir";
				missileEnd = "missile_pos";
			};
		};
		class AnimationSources
		{
			class missiles_revolving
			{
				source = "revolving";
				weapon = "Missiles_RIM_116";
			};
		};
	};
	class ATLAS_RAM_Launcher_base: ATLAS_missile_staticweapon_base
	{
		_generalmacro = "ATLAS_RAM_Launcher_base";
		author = "ATLAS";
		displayname = "Mk-49 GMLS";
		model = "\ATLAS_Weapons\static\RAM_Launcher.p3d";
		icon = "\ATLAS_Weapons\static\data\ui\RAM_Launcher_icon.paa";
		picture = "\ATLAS_Weapons\static\data\ui\RAM_Launcher_picture.paa";
		uipicture = "\ATLAS_Weapons\static\data\ui\RAM_Launcher_picture.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"21Rnd_AAA_RIM_116"};
				weapons[] = {"missiles_RIM_116"};
				maxelev = 80;
			};
		};
	};
	class ATLAS_RAM_Launcher_naval_base: ATLAS_RAM_Launcher_base
	{
		_generalMacro = "ATLAS_RAM_Launcher_naval_base";
		author = "ATLAS";
		displayname = "";
		picture = "";
		icon = "";
		uipicture = "";
		istarget = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"missiles_RIM_116_naval"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class missiles_revolving: missiles_revolving
			{
				weapon = "Missiles_RIM_116_naval";
			};
		};
	};
	class ATLAS_SS_Launcher_base: ATLAS_missile_staticweapon_base
	{
		_generalmacro = "ATLAS_SS_Launcher_base";
		author = "ATLAS";
		displayname = "Mk-29 GMLS";
		model = "\ATLAS_Weapons\static\SS_Launcher.p3d";
		icon = "\ATLAS_Weapons\static\data\ui\SS_Launcher_icon.paa";
		picture = "\ATLAS_Weapons\static\data\ui\SS_Launcher_picture.paa";
		uipicture = "\ATLAS_Weapons\static\data\ui\SS_Launcher_picture.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"8Rnd_AAA_RIM_7"};
				weapons[] = {"missiles_RIM_7"};
				minelev = -10;
				maxelev = 35;
			};
		};
		class AnimationSources: AnimationSources
		{
			class missiles_revolving: missiles_revolving
			{
				weapon = "Missiles_RIM_7";
			};
		};
	};
	class ATLAS_SS_Launcher_naval_base: ATLAS_SS_Launcher_base
	{
		_generalmacro = "ATLAS_SS_Launcher_naval_base";
		author = "ATLAS";
		displayname = "";
		icon = "";
		picture = "";
		uipicture = "";
		istarget = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"missiles_RIM_7_naval"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class missiles_revolving: missiles_revolving
			{
				weapon = "Missiles_RIM_7_Naval";
			};
		};
	};
	class ATLAS_gatling_staticweapon_base: ATLAS_CIWS_staticweapon_base
	{
		_generalmacro = "ATLAS_gatling_staticweapon_base";
		author = "ATLAS";
		displayname = "Gatling Canon";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"1550Rnd_20mm_Tracer_Red"};
				weapons[] = {"M61_Vulcan_CIWS"};
			};
		};
		class AnimationSources
		{
			class gatling
			{
				source = "revolving";
				weapon = "M61_Vulcan_CIWS";
			};
		};
	};
	class ATLAS_CRAM_base: ATLAS_gatling_staticweapon_base
	{
		_generalMacro = "ATLAS_CRAM_base";
		author = "ATLAS";
		displayname = "C-RAM";
		model = "\ATLAS_Weapons\static\CRAM.p3d";
		picture = "\ATLAS_weapons\static\data\ui\CRAM_picture.paa";
		uipicture = "\ATLAS_weapons\static\data\ui\CRAM_picture.paa";
		icon = "\ATLAS_weapons\static\data\ui\CRAM_icon.paa";
	};
	class ATLAS_Phalanx_base: ATLAS_CRAM_base
	{
		_generalMacro = "ATLAS_Phalanx_base";
		author = "ATLAS";
		displayname = "";
		picture = "";
		uipicture = "";
		icon = "";
		scope = 0;
		scopecurator = 0;
		istarget = 0;
	};
	class ATLAS_B_Phalanx: ATLAS_Phalanx_base
	{
		_generalMacro = "ATLAS_B_Phalanx";
		author = "ATLAS";
		scope = 1;
		scopecurator = 1;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
	};
	class ATLAS_O_Phalanx: ATLAS_B_Phalanx
	{
		_generalMacro = "ATLAS_O_Phalanx";
		author = "ATLAS";
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"1550Rnd_20mm_Tracer_Green"};
			};
		};
	};
	class ATLAS_I_Phalanx: ATLAS_B_Phalanx
	{
		_generalMacro = "ATLAS_I_Phalanx";
		author = "ATLAS";
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"1550Rnd_20mm_Tracer_Yellow"};
			};
		};
	};
	class ATLAS_B_CRAM: ATLAS_CRAM_base
	{
		_generalMacro = "ATLAS_B_CRAM";
		author = "ATLAS";
		side = 1;
		scope = 2;
		scopecurator = 2;
		faction = "BLU_F";
		crew = "B_UAV_AI";
	};
	class ATLAS_O_CRAM: ATLAS_B_CRAM
	{
		_generalMacro = "ATLAS_O_CRAM";
		author = "ATLAS";
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"1550Rnd_20mm_Tracer_Green"};
			};
		};
	};
	class ATLAS_I_CRAM: ATLAS_B_CRAM
	{
		_generalMacro = "ATLAS_I_CRAM";
		author = "ATLAS";
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"1550Rnd_20mm_Tracer_Yellow"};
			};
		};
	};
	class ATLAS_B_RAM_Launcher: ATLAS_RAM_Launcher_base
	{
		_generalMacro = "ATLAS_B_RAM_Launcher";
		author = "ATLAS";
		scope = 2;
		scopecurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
	};
	class ATLAS_O_RAM_Launcher: ATLAS_B_RAM_Launcher
	{
		_generalMacro = "ATLAS_O_RAM_Launcher";
		author = "ATLAS";
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
	};
	class ATLAS_I_RAM_Launcher: ATLAS_B_RAM_Launcher
	{
		_generalMacro = "ATLAS_I_RAM_Launcher";
		author = "ATLAS";
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI";
	};
	class ATLAS_B_RAM_Launcher_naval: ATLAS_RAM_Launcher_naval_base
	{
		_generalMacro = "ATLAS_B_RAM_Launcher_naval";
		author = "ATLAS";
		scope = 1;
		scopecurator = 1;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
	};
	class ATLAS_O_RAM_Launcher_naval: ATLAS_B_RAM_Launcher_naval
	{
		_generalMacro = "ATLAS_O_RAM_Launcher_naval";
		author = "ATLAS";
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
	};
	class ATLAS_I_RAM_Launcher_naval: ATLAS_B_RAM_Launcher_naval
	{
		_generalMacro = "ATLAS_I_RAM_Launcher_naval";
		author = "ATLAS";
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI";
	};
	class ATLAS_B_SS_Launcher: ATLAS_SS_Launcher_base
	{
		_generalmacro = "ATLAS_B_SS_Launcher";
		author = "ATLAS";
		scope = 2;
		scopecurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
	};
	class ATLAS_O_SS_Launcher: ATLAS_B_SS_Launcher
	{
		_generalmacro = "ATLAS_O_SS_Launcher";
		author = "ATLAS";
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
	};
	class ATLAS_I_SS_Launcher: ATLAS_B_SS_Launcher
	{
		_generalmacro = "ATLAS_I_SS_Launcher";
		author = "ATLAS";
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI";
	};
	class ATLAS_B_SS_Launcher_naval: ATLAS_SS_Launcher_naval_base
	{
		_generalmacro = "ATLAS_B_SS_Launcher_naval";
		author = "ATLAS";
		scope = 1;
		scopecurator = 1;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
	};
	class ATLAS_O_SS_Launcher_naval: ATLAS_B_SS_Launcher_naval
	{
		_generalmacro = "ATLAS_O_SS_Launcher_naval";
		author = "ATLAS";
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
	};
	class ATLAS_I_SS_Launcher_naval: ATLAS_B_SS_Launcher_naval
	{
		_generalmacro = "ATLAS_I_SS_Launcher_naval";
		author = "ATLAS";
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI";
	};
};
class cfgMods
{
	author = "J0nes";
	timepacked = "1446994460";
};
//};
