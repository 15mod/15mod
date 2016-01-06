////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon Sep 07 19:01:55 2015 : Created on Mon Sep 07 19:01:55 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class UH1Gunfighter : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		UH1Y_Pilot = "UH1Y_Pilot";
		UH1Y_Gunner = "UH1Y_Gunner";
		UH1Y_Gunner02 = "UH1Y_Gunner02";
		UH1Y_Cargo01 = "UH1Y_Cargo01";
		UH1Y_Cargo02 = "UH1Y_Cargo02";
		UH1Y_Cargo03 = "UH1Y_Cargo03";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_UH1Y_Pilot: DefaultDie
		{
			actions = "DeadActions";
			file = "\UH1gunfighter\UH1Y\Anims\KIA_UH1Y_Pilot.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1Y_Pilot: Crew
		{
			file = "\UH1gunfighter\UH1Y\Anims\UH1Y_Pilot.rtm";
			interpolateTo[] = {"KIA_UH1Y_Pilot",1};
		};
		class KIA_UH1Y_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\UH1gunfighter\UH1Y\Anims\KIA_UH1Y_Gunner01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1Y_Gunner: Crew
		{
			file = "\UH1gunfighter\UH1Y\Anims\UH1Y_Gunner.rtm";
			interpolateTo[] = {"KIA_UH1Y_Gunner",1};
		};
		class KIA_UH1Y_Gunner02: DefaultDie
		{
			actions = "DeadActions";
			file = "\UH1gunfighter\UH1Y\Anims\KIA_UH1Y_Pilot.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1Y_Gunner02: Crew
		{
			file = "\UH1gunfighter\UH1Y\Anims\UH1Y_Pilot.rtm";
			interpolateTo[] = {"KIA_UH1Y_Gunner02",1};
		};
		class KIA_UH1Y_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\UH1gunfighter\UH1Y\Anims\KIA_cargo_01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1Y_Cargo01: Crew
		{
			file = "\UH1gunfighter\UH1Y\Anims\cargo_01.rtm";
			interpolateTo[] = {"KIA_UH1Y_Cargo01",0.1};
			connectTo[] = {"UH1Y_Cargo01",0.3,"UH1Y_Cargo01_V1",0.1,"UH1Y_Cargo01_V2",0.1,"UH1Y_Cargo01_V3",0.1};
			equivalentTo = "UH1Y_Cargo01";
			variantsAI[] = {"UH1Y_Cargo01",0.4,"UH1Y_Cargo01_V1",0.2,"UH1Y_Cargo01_V2",0.2,"UH1Y_Cargo01_V3",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UH1Y_Cargo01_V1: UH1Y_Cargo01
		{
			file = "\UH1gunfighter\UH1Y\Anims\cargo_01nadech.rtm";
			interpolateTo[] = {"KIA_UH1Y_Cargo01",1};
			connectTo[] = {"UH1Y_Cargo01",0.1};
			speed = 0.395;
			looped = "false";
			variantAfter[] = {5,5,5};
		};
		class UH1Y_Cargo01_V2: UH1Y_Cargo01_V1
		{
			file = "\UH1gunfighter\UH1Y\Anims\cargo_01poposed.rtm";
			speed = 0.588;
		};
		class UH1Y_Cargo01_V3: UH1Y_Cargo01_V1
		{
			file = "\UH1gunfighter\UH1Y\Anims\cargo_01presunruky.rtm";
			speed = 0.491;
		};
		class KIA_UH1Y_Cargo02: KIA_UH1Y_Cargo01
		{
			file = "\UH1gunfighter\UH1Y\Anims\KIA_cargo_02.rtm";
		};
		class UH1Y_Cargo02: Crew
		{
			file = "\UH1gunfighter\UH1Y\Anims\cargo_02.rtm";
			interpolateTo[] = {"KIA_UH1Y_Cargo02",0.1};
			connectTo[] = {"UH1Y_Cargo02",0.3,"UH1Y_Cargo02_V1",0.1,"UH1Y_Cargo02_V2",0.1,"UH1Y_Cargo02_V3",0.1};
			equivalentTo = "UH1Y_Cargo02";
			variantsAI[] = {"UH1Y_Cargo02",0.4,"UH1Y_Cargo02_V1",0.2,"UH1Y_Cargo02_V2",0.2,"UH1Y_Cargo02_V3",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UH1Y_Cargo02_V1: UH1Y_Cargo02
		{
			file = "\UH1gunfighter\UH1Y\Anims\cargo_02poposed.rtm";
			interpolateTo[] = {"KIA_UH1Y_Cargo02",1};
			connectTo[] = {"UH1Y_Cargo02",0.1};
			speed = 0.652;
			looped = "false";
			variantAfter[] = {5,5,5};
		};
		class UH1Y_Cargo02_V2: UH1Y_Cargo02_V1
		{
			file = "\UH1gunfighter\UH1Y\Anims\cargo_02predklon.rtm";
			speed = 0.3125;
		};
		class UH1Y_Cargo02_V3: UH1Y_Cargo02_V1
		{
			file = "\UH1gunfighter\UH1Y\Anims\cargo_02presunruky.rtm";
			speed = 0.37;
		};
		class KIA_UH1Y_Cargo03: KIA_UH1Y_Cargo01
		{
			file = "\UH1gunfighter\UH1Y\Anims\KIA_cargo_03.rtm";
		};
		class UH1Y_Cargo03: Crew
		{
			file = "\UH1gunfighter\UH1Y\Anims\cargo_03.rtm";
			interpolateTo[] = {"KIA_UH1Y_Cargo03",0.1};
			connectTo[] = {"UH1Y_Cargo03",0.3,"UH1Y_Cargo03_V1",0.1,"UH1Y_Cargo03_V2",0.1,"UH1Y_Cargo03_V3",0.1};
			equivalentTo = "UH1Y_Cargo03";
			variantsAI[] = {"UH1Y_Cargo03",0.4,"UH1Y_Cargo03_V1",0.1,"UH1Y_Cargo03_V2",0.25,"UH1Y_Cargo03_V3",0.25};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UH1Y_Cargo03_V1: UH1Y_Cargo03
		{
			file = "\UH1gunfighter\UH1Y\Anims\cargo_03predklon.rtm";
			interpolateTo[] = {"KIA_UH1Y_Cargo03",1};
			connectTo[] = {"UH1Y_Cargo03",0.1};
			speed = 0.37;
			looped = "false";
			variantAfter[] = {5,5,5};
		};
		class UH1Y_Cargo03_V2: UH1Y_Cargo03_V1
		{
			file = "\UH1gunfighter\UH1Y\Anims\cargo_03presunruky.rtm";
			speed = 0.37;
			variantAfter[] = {5,5,5};
		};
		class UH1Y_Cargo03_V3: UH1Y_Cargo03_V1
		{
			file = "\UH1gunfighter\UH1Y\Anims\cargo_03protazenizad.rtm";
			speed = 0.491;
			variantAfter[] = {5,5,5};
		};
	};
};
class CfgAmmo
{
	class Default;
	class RocketCore;
	class RocketBase;
	class BulletBase;
	class MissileCore;
	class MissileBase;
	class B_762x51_Ball;
	class R_Hydra_HE;
	class R_Hydra_HE2: R_Hydra_HE
	{
		model = "UH1gunfighter\UH1Y\70mmRocket";
		hit = 250;
		indirectHit = 50;
		indirectHitRange = 15;
		cost = 200;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;
		timeToLive = 20;
		fuseDistance = 40;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",6,1.5,400};
		whistleDist = 24;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 35;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 14Rnd_FFAR: VehicleMagazine
	{
		scope = 2;
		displayName = "FFAR";
		ammo = "R_Hydra_HE2";
		count = 14;
		initSpeed = 44;
		maxLeadSpeed = 200;
		nameSound = "rockets";
		sound[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.12202,1.3,1100};
		reloadSound[] = {"A3\sounds_f\dummysound",0.00031622776,1};
	};
	class 28Rnd_FFAR: 14Rnd_FFAR
	{
		count = 28;
	};
	class 38Rnd_FFAR: 14Rnd_FFAR
	{
		count = 38;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Default;
	class M134_minigun;
	class LauncherCore;
	class RocketPods;
	class CannonCore;
	class MissileLauncher;
	class MGun;
	class M134_minigun_2: M134_minigun{};
	class uh1safe: RocketPods
	{
		CanLock = 0;
		displayName = "MASTER ARM - SAFE";
		displayNameMagazine = "MASTER ARM - SAFE";
		shortNameMagazine = "MASTER ARM - SAFE";
		nameSound = "";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {};
		burst = 0;
		reloadTime = 0.01;
		magazineReloadTime = 0.1;
	};
	class uhgun1safe: uh1safe{};
	class uhgun2safe: uh1safe{};
	class FFARLauncher_14: RocketPods
	{
		magazines[] = {"14Rnd_FFAR"};
		displayName = "HYDRA";
		modes[] = {"Far_AI","Burst1","Burst2","Burst4"};
		showaimcursorinternal = 0;
		weaponlockdelay = 2;
		weaponlocksystem = 4;
		cursor = "EmptyCursor";
		cursoraim = "rocket";
		class Far_AI: RocketPods
		{
			minRange = 50;
			minRangeProbab = 0.041;
			midRange = 600;
			midRangeProbab = 0.21;
			maxRange = 2500;
			maxRangeProbab = 0.11;
			displayName = "HYDRA-SINGLE";
			burst = 1;
			reloadTime = 0.08;
			autofire = "false";
			showToPlayer = 0;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"\UH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
				soundBegin[] = {"Begin1",0.33};
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.1220185,1.2,700};
		};
		class Burst1: Mode_SemiAuto
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.01;
			displayName = "HYDRA 70/Single";
			burst = 1;
			canLock = 1;
			reloadTime = 0.15;
			autoFire = "false";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"\UH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
				soundBegin[] = {"Begin1",0.33};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",2.5,1.2,700};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class Burst2: Mode_Burst
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			canLock = 1;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			displayName = "HYDRA 70/Ripple 2";
			reloadTime = 0.25;
			autoFire = "false";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"\UH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
				soundBegin[] = {"Begin1",0.33};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.1220185,1.2,700};
			burst = 2;
			soundContinuous = 0;
			soundBurst = 0;
		};
		class Burst4: Mode_FullAuto
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			canLock = 1;
			maxRange = 3;
			maxRangeProbab = 0.01;
			reloadTime = 0.25;
			autoFire = "false";
			displayName = "HYDRA 70/Ripple 4";
			burst = 4;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"\UH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
				soundBegin[] = {"Begin1",0.33};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.1220185,1.2,700};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
};
class defaultEventhandlers;
class CfgPatches
{
	class UH1Gunfighter
	{
		units[] = {"meu_UH1Y"};
		weapons[] = {"UHgun1safe","UHgun2safe","UH1safe","FFARLauncher_14"};
		requiredVersion = 0.01;
		requiredAddons[] = {"A3_Air_F","A3_Weapons_F","A3_Anims_F","A3_Anims_F_Config_Sdr"};
		Magazines[] = {"14Rnd_FFAR"};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class Air: AllVehicles
	{
		class HitPoints;
		class ViewPilot;
	};
	class Helicopter: Air
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitWinch;
		};
		class Reflectors
		{
			class Right;
		};
		class Turrets
		{
			class MainTurret;
		};
		class Eventhandlers;
		class ViewOptics;
		class ViewPilot;
		class AnimationSources;
		class RotorLibHelicopterProperties;
	};
	class meu_UH1Y: Helicopter
	{
		destrType = "DestructWreck";
		scope = 2;
		side = 1;
		audible = 20;
		maximumLoad = 2500;
		AGM_FastRoping = 1;
		AGM_FastRoping_Positions[] = {{1.4,-0.15,0.1},{-1.4,-0.15,0.1}};
		slingLoadMemoryPoint = "slingLoad";
		slingLoadMaxCargoMass = 2500;
		model = "UH1gunfighter\UH1Y\UH1Y.p3d";
		picture = "UH1gunfighter\UI\picture_UH1Y_CA.paa";
		icon = "UH1gunfighter\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		cost = 5000000;
		displayName = "UH1Y Venom";
		class Eventhandlers: defaultEventhandlers
		{
			init = "if (!isNil {meu_fnc_bitchinBetty}) then {_this spawn meu_fnc_bitchinBetty;};";
		};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		faction = "BLU_F";
		vehicleClass = "Air";
		availableForSupportTypes[] = {"CAS_Heli","Drop","Transport"};
		cargoCanEject = 1;
		driverCanEject = 1;
		getInRadius = 2.5;
		camouflage = 50;
		crewVulnerable = 1;
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		driveOnComponent[] = {"Skids"};
		simulation = "helicopterrtd";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "UH1gunfighter\RTD_Heli_Light_02.xml";
			defaultCollective = 0.7;
			autoHoverCorrection[] = {4,3.3,0};
			maxTorque = 2700;
			stressDamagePerSec = 0.0033333332;
			retreatBladeStallWarningSpeed = 87.5;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 110000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
		};
		class Library
		{
			libTextDesc = "UH1Y";
		};
		fuelCapacity = 1200;
		fuelConsumptionRate = 0.138;
		selectionHRotorStill = "mala vrtule staticka";
		selectionHRotorMove = "mala vrtule blur";
		selectionVRotorStill = "velka vrtule staticka";
		selectionVRotorMove = "velka vrtule Blur";
		selectionDamage = "trup";
		maxSpeed = 280;
		mainRotorSpeed = 1.2;
		backRotorSpeed = 6.1;
		driverRightHandAnimName = "stick";
		bodyFrictionCoef = 0.6;
		canBeShot = "true";
		enableSweep = "true";
		minGForce = 0.2;
		maxGForce = 2;
		washDownStrength = "1.0f";
		washDownDiameter = "40.0f";
		gForceShakeAttenuation = 0.5;
		cyclicasideforcecoef = 2;
		cyclicforwardforcecoef = 3;
		frontRotorForceCoef = 1.2;
		backRotorForceCoef = 3;
		liftForceCoef = 1.3;
		maxfordingdepth = 0.55;
		mainBladeRadius = 6.1;
		tailBladeRadius = 1.2;
		mainBladeCenter = "velka vrtule";
		tailBladeCenter = "mala vrtule";
		sensitivity = 3;
		sensitivityear = 3;
		accuracy = 1;
		maxMainRotorDive = 0;
		minMainRotorDive = 0;
		mainrotordive = 0;
		backrotordive = 0;
		extCameraPosition[] = {0.5,2,-20};
		flapsFrictionCoef = 0.5;
		altFullForce = 5000;
		altNoForce = 10000;
		leftDustEffect = "vbs2_fx_lowTrackDustEffects";
		rightDustEffect = "vbs2_fx_lowTrackDustEffects";
		commanderCanSee = "31";
		gunnerCanSee = "31";
		driverCanSee = "31";
		cargocansee = "31";
		turretcansee = "31";
		armor = 30;
		armorStructural = 1;
		damageResistance = 0.01039;
		epeImpulseDamageCoef = 20;
		weapons[] = {"UH1safe","FFARLauncher_14","CMFlareLauncher"};
		magazines[] = {"14Rnd_FFAR","240Rnd_CMFlare_Chaff_Magazine"};
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		memoryPointGun[] = {"machinegun","machinegun_2"};
		gunBeg[] = {"muzzle_1","muzzle_2"};
		gunEnd[] = {"chamber_1","chamber_2"};
		irScanGround = "True";
		irScanRangeMin = 2000;
		irScanRangeMax = 8000;
		irScanToEyeFactor = 2;
		irTarget = "true";
		nightVision = 1;
		precision = 200;
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		radarType = 4;
		LockDetectionSystem = "1 + 2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		precisegetinout = 1;
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		cargoGetInAction[] = {"GetInHelicopterCargo"};
		cargoGetOutAction[] = {"GetOutHelicopterCargo"};
		driverAction = "UH1Y_Pilot";
		driverInAction = "UH1Y_Pilot";
		hideWeaponsCargo = 1;
		cargoAction[] = {"UH1Y_Cargo02","UH1Y_Cargo03","UH1Y_Cargo03","UH1Y_Cargo02","UH1Y_Cargo01","UH1Y_Cargo01","UH1Y_Cargo01"};
		cargoIsCoDriver[] = {0,0,0,0,0,0,0,0,0};
		gunnerUsesPilotView = "false";
		gunnerOpticsModel = "";
		enableManualFire = 0;
		transportSoldier = 1;
		crew = "B_Helipilot_F";
		transportAmmo = 0;
		transportMaxMagazines = 150;
		transportMaxWeapons = 30;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 11;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
		initCargoAngleY = 10;
		minCargoAngleY = -60;
		maxCargoAngleY = 120;
		minFireTime = 30;
		threat[] = {1,0.05,0.05};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		cargoProxyIndexes[] = {5};
		class pilotCamera
		{
			turretInfoType = "RscOptics_UAV_gunner";
			showHMD = 0;
			stabilizedInAxes = 3;
			minElev = -20;
			maxElev = 90;
			initElev = 0;
			minTurn = -110;
			maxTurn = 110;
			initTurn = 0;
			maxXRotSpeed = 0.5;
			maxYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 1;
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.1;
					minFov = 0.0022;
					maxFov = 1.1;
					directionStabilized = 1;
					visionMode[] = {"Normal","NVG","TI"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
				};
				showMiniMapInOptics = 0;
				showUAVViewpInOptics = 0;
				showSlingLoadManagerInOptics = 1;
			};
		};
		memoryPointDriverOptics = "slingCamera";
		class cargoturret;
		class Turrets: Turrets
		{
			class CoPilotObs: MainTurret
			{
				ace_laser_CanLockLaser = 1;
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				gunnerCanEject = 1;
				CanEject = 1;
				gunnerHasFlares = 1;
				gunnerName = "Co-Pilot";
				gunnerAction = "UH1Y_Gunner02";
				gunnerInAction = "UH1Y_Gunner02";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				selectionFireAnim = "";
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				viewGunnerShadow = 1;
				body = "ObsTurret";
				proxyIndex = 3;
				gun = "ObsGun";
				turretInfoType = "RscOptics_UAV_gunner";
				minElev = -80;
				maxElev = 25;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				turretCanSee = "31";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				outGunnerMayFire = 1;
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGun = "gun_end";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "pedalL";
				gunnerRightLegAnimName = "pedalR";
				commanding = -2;
				laser = 1;
				memoryPointGunnerOptics = "commanderview";
				gunnerCompartments = "Compartment2";
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
				primaryGunner = 1;
				startEngine = 0;
				soundServo[] = {"",0.01,1};
				gunnerForceOptics = "false";
				gunnerOpticsShowCursor = 0;
				class OpticsIn
				{
					class Wide
					{
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
						directionStabilized = 1;
						initanglex = 0;
						initangley = 0;
						initfov = 0.2;
						maxanglex = 30;
						maxangley = 100;
						maxfov = 1.1;
						minanglex = -30;
						minangley = -100;
						minfov = 0.0022;
						opticsdisplayname = "W";
						horizontallyStabilized = 1;
						verticallyStabilized = 1;
						thermalmode[] = {0,1};
						visionmode[] = {"Normal","NVG","Ti"};
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 10;
						minAngleX = -75;
						maxAngleX = 85;
						initAngleY = 0;
						minAngleY = -170;
						maxAngleY = 170;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
			class MainTurret: MainTurret
			{
				CanEject = 1;
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -60;
				maxElev = 30;
				initElev = 0;
				minTurn = -5;
				maxTurn = 185;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				selectionFireAnim = "zasleh";
				animationSourceHatch = "";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				gunnerCanEject = 1;
				weapons[] = {"UHgun1safe","M134_minigun"};
				magazines[] = {"5000Rnd_762x51_Belt"};
				gunnerName = "Crew-Chief";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "UH1Y_Gunner";
				gunnerInAction = "UH1Y_Gunner";
				commanding = -3;
				turretCanSee = "31";
				primaryGunner = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					initFov = 0.75;
					minFov = 0.375;
					maxFov = 0.75;
					visionMode[] = {};
				};
				class OpticsIn
				{
					class ViewOptics: ViewGunner
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
					};
				};
				gunnerCompartments = "Compartment2";
				soundAttenuationTurret = "HeliAttenuationGunner";
				disableSoundAttenuation = 0;
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				proxyIndex = 2;
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				selectionFireAnim = "zasleh_1";
				gunnerName = "DoorGunner";
				commanding = -3;
				minTurn = -180;
				maxTurn = 0;
				initTurn = 0;
				weapons[] = {"UHgun2safe","M134_minigun_2"};
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview_2";
				turretCanSee = "31";
				primaryGunner = 0;
				soundAttenuationTurret = "HeliAttenuationGunner";
				disableSoundAttenuation = 0;
			};
			class CargoTurret_01: cargoturret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Passenger (BenchRight)";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 1;
				maxElev = 10;
				minElev = -65;
				maxTurn = -60;
				minTurn = -120;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
			};
			class CargoTurret_07: cargoturret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Passenger (BenchLeft)";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 2;
				maxElev = 10;
				minElev = -65;
				maxTurn = 120;
				minTurn = 60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
			};
			class CargoTurret_02: cargoturret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Passenger (RL)";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 7;
				maxElev = 10;
				minElev = -65;
				maxTurn = 38;
				minTurn = -40;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
			};
			class CargoTurret_03: cargoturret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Passenger (RR)";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 6;
				maxElev = 10;
				minElev = -65;
				maxTurn = 45;
				minTurn = -30;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
			};
			class CargoTurret_04: cargoturret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Passenger (Left)";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 4;
				maxElev = 10;
				minElev = -65;
				maxTurn = -20;
				minTurn = -88;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
			};
			class CargoTurret_06: cargoturret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Passenger (Right)";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 3;
				maxElev = 10;
				minElev = -65;
				maxTurn = 88;
				minTurn = 20;
				ejectDeadGunner = 0;
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 0.25;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 0;
			};
			class HitEngine1: HitEngine
			{
				name = "engine_1_hit";
				convexComponent = "engine_1_hit";
			};
			class HitEngine2: HitEngine
			{
				name = "engine_2_hit";
				convexComponent = "engine_2_hit";
			};
			class HitEngine3: HitEngine
			{
				name = "engine_3_hit";
				convexComponent = "engine_3_hit";
			};
			class HitAvionics
			{
				armor = 0.15;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 0;
			};
			class HitVRotor
			{
				armor = 0.3;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.3;
			};
			class HitHRotor
			{
				armor = 0.2;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.1;
			};
			class HitMissiles
			{
				armor = 0.1;
				material = 51;
				name = "munice";
				visual = "munice";
				passThrough = 0.5;
			};
			class HitRGlass
			{
				armor = 0.1;
				material = 51;
				name = "sklo predni P";
				visual = "sklo predni P";
				passThrough = 0;
			};
			class HitLGlass
			{
				armor = 0.1;
				material = 51;
				name = "sklo predni L";
				visual = "sklo predni L";
				passThrough = 0;
			};
			class HitGlass1: HitGlass1
			{
				armor = 1.3;
				radius = 0.45;
				explosionShielding = 6;
			};
			class HitGlass2: HitGlass2
			{
				armor = 1.3;
				radius = 0.45;
				explosionShielding = 6;
			};
			class HitGlass3: HitGlass3
			{
				armor = 1.3;
				radius = 0.35;
				explosionShielding = 6;
			};
			class HitGlass4: HitGlass4
			{
				armor = 1.3;
				radius = 0.35;
				explosionShielding = 6;
			};
			class HitGlass5: HitGlass5
			{
				armor = 1.3;
				radius = 0.46;
				explosionShielding = 6;
			};
			class HitWinch
			{
				armor = 0.1;
				material = 51;
				name = "slingLoad";
				visual = "";
				passThrough = 0;
				radius = 0.1;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class Explo
					{
						simulation = "particles";
						type = "WinchDestructionExplo";
						position = "slingLoad";
						intensity = 1;
						interval = 1;
						lifeTime = 0.06;
					};
					class Sparks
					{
						simulation = "particles";
						type = "WinchDestructionSparks";
						position = "slingLoad";
						intensity = 1;
						interval = 1;
						lifeTime = 0.1;
					};
				};
			};
			class HitTransmission
			{
				armor = 0.8;
				material = -1;
				name = "transmission";
				passThrough = 0.8;
			};
			class HitLight
			{
				armor = 0.1;
				material = -1;
				name = "light";
				passThrough = 0;
			};
			class HitHydraulics
			{
				armor = 0.8;
				material = -1;
				name = "hydraulics";
				passThrough = 0.8;
			};
			class HitGear
			{
				armor = 0.9;
				material = -1;
				name = "gear";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 0.4;
				material = -1;
				name = "fuel tanks";
				passThrough = 0.5;
			};
			class HitHStabilizerL1
			{
				armor = 0.8;
				material = -1;
				name = "HStabilizerL1";
				passThrough = 1;
			};
			class HitHStabilizerR1
			{
				armor = 0.8;
				material = -1;
				name = "HStabilizerR1";
				passThrough = 1;
			};
			class HitVStabilizer1
			{
				armor = 0.8;
				material = -1;
				name = "VStabilizer1";
				passThrough = 1;
			};
			class HitTail
			{
				armor = 0.8;
				material = -1;
				name = "tail boom";
				passThrough = 1;
			};
			class HitPitotTube
			{
				armor = 0.5;
				material = -1;
				name = "pitot tube";
				passThrough = 0.2;
			};
			class HitStaticPort
			{
				armor = 0.1;
				material = -1;
				name = "static port";
				passThrough = 1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_1
			{
				source = "revolving";
				weapon = "M134_minigun";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "M134_minigun_2";
			};
			class Redlight1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Greenlight1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Greentip1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Redlighton
			{
				displayName = "<t color='#FF0000'>Redlight On";
				position = "zamerny";
				radius = 5;
				condition = "this animationPhase ""Redlightstart"" < 0.5 && (player in [driver this,gunner this,commander this]) && (alive this)";
				statement = "this animate [""Redlightstart"",1];";
				onlyforplayer = 1;
				animPeriod = 0;
				priority = -8;
			};
			class Redlightoff
			{
				displayName = "<t color='#FF0000'>Redlight Off";
				position = "zamerny";
				radius = 5;
				condition = "this animationPhase ""Redlightstart"" > 0.5 && (player in [driver this,gunner this,commander this]) && (alive this)";
				statement = "this animate [""Redlightstart"",0];";
				onlyforplayer = 1;
				priority = -8;
			};
			class Greenlighton
			{
				displayName = "<t color='#008000'>Greenlight On";
				position = "zamerny";
				radius = 5;
				condition = "this animationPhase ""Greenlightstart"" < 0.5 && (player in [driver this,gunner this,commander this]) && (alive this)";
				statement = "this animate [""Greenlightstart"",1];";
				animPeriod = 0;
				onlyforplayer = 1;
				priority = -7;
			};
			class Greenlightoff
			{
				displayName = "<t color='#008000'>Greenlight Off";
				position = "zamerny";
				radius = 5;
				condition = "this animationPhase ""Greenlightstart"" > 0.5 && (player in [driver this,gunner this,commander this]) && (alive this)";
				statement = "this animate [""Greenlightstart"",0];";
				animPeriod = 0;
				onlyforplayer = 1;
				priority = -7;
			};
			class Formationon
			{
				displayName = "<t color='#00FF7F'>Formation Lights On";
				position = "zamerny";
				radius = 5;
				condition = "this animationPhase ""Greentipstart"" < 0.5 && (player in [driver this,gunner this,commander this]) && (alive this)";
				statement = "this animate [""Greentipstart"",1];";
				animPeriod = 0;
				onlyforplayer = 1;
				priority = -7;
			};
			class Formationoff
			{
				displayName = "<t color='#00FF7F'>Formation Lights Off";
				position = "zamerny";
				radius = 5;
				condition = "this animationPhase ""Greentipstart"" > 0.5 && (player in [driver this,gunner this,commander this]) && (alive this)";
				statement = "this animate [""Greentipstart"",0];";
				animPeriod = 0;
				onlyforplayer = 1;
				priority = -7;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliCom";
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {1,1,1,1};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.025,0.025,0.1};
				helmetRight[] = {0.05,0,0};
				helmetDown[] = {0,-0.05,0};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.5,0.572};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.847,0.845};
					};
					class ForwardVector
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.347,0.345};
					};
					class VelocityVector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.847,0.845};
					};
					class HorizonVector
					{
						type = "horizon";
						pos0[] = {0.5,0.572};
						pos10[] = {0.990727,1.0599};
						angle = 0;
					};
					class VerticalSpeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1;
						min = -15;
						max = 15;
						minPos[] = {0,-0.09};
						maxPos[] = {0,0.09};
					};
				};
				class Draw
				{
					alpha = 1;
					color[] = {0,1,0.3};
					condition = "on";
					class Static
					{
						type = "line";
						width = 4;
						points[] = {{{0.5,0.115},1},{{0.5,0.135},1},{},{{0.81,0.5},1},{{0.83,0.5},1}};
					};
					class VelocityLine
					{
						type = "line";
						width = 4;
						points[] = {{"PlaneW",1},{"VelocityVector",1}};
					};
					class CollectiveGroup
					{
						condition = "simulRTD";
						class CollectiveText
						{
							type = "text";
							source = "static";
							text = "%";
							align = "right";
							scale = 1;
							pos[] = {{0.2,0.2},1};
							right[] = {{0.26,0.2},1};
							down[] = {{0.2,0.25},1};
						};
						class CollectiveNumber
						{
							type = "text";
							source = "rtdCollective";
							sourceScale = 100;
							align = "left";
							scale = 1;
							pos[] = {{0.2,0.2},1};
							right[] = {{0.26,0.2},1};
							down[] = {{0.2,0.25},1};
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						scale = 1;
						pos[] = {{0.2,"0.50 - 0.025"},1};
						right[] = {{0.26,"0.50 - 0.025"},1};
						down[] = {{0.2,"0.50 + 0.025"},1};
					};
					class AltNumber
					{
						type = "text";
						source = "altitudeAGL";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.8,"0.50 - 0.025"},1};
						right[] = {{0.86,"0.50 - 0.025"},1};
						down[] = {{0.8,"0.50 + 0.025"},1};
					};
					class Weapons
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0,0.9},1};
						right[] = {{0.06,0.9},1};
						down[] = {{0,0.95},1};
					};
					class Ammo
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {{0.5,0.65},1};
						right[] = {{0.56,0.65},1};
						down[] = {{0.5,0.7},1};
					};
					class AltScale
					{
						type = "scale";
						horizontal = 0;
						source = "altitudeAGL";
						sourceScale = 1;
						min = 0;
						width = 4;
						top = "0.50 + 0.20";
						center = 0.5;
						bottom = "0.50 - 0.25";
						lineXleft = 0.835;
						lineYright = 0.845;
						lineXleftMajor = 0.835;
						lineYrightMajor = 0.855;
						majorLineEach = 5;
						numberEach = 5;
						step = 20;
						stepSize = "(0.25 + 0.20) / 15";
						align = "right";
						scale = 1;
						pos[] = {0.87,"0.50 + 0.20 - 0.025"};
						right[] = {0.93,"0.50 + 0.20 - 0.025"};
						down[] = {0.87,"0.50 + 0.20 + 0.025"};
					};
					class VerticalSpeedScale
					{
						type = "line";
						width = 4;
						points[] = {{"VerticalSpeedBone",{0.86,0.84},1},{"VerticalSpeedBone",{0.87,0.85},1},{"VerticalSpeedBone",{0.86,0.86},1},{},{{0.885,0.76},1},{{0.895,0.76},1},{},{{0.885,0.79},1},{{0.895,0.79},1},{},{{0.885,0.82},1},{{0.895,0.82},1},{},{{0.885,0.85},1},{{0.905,0.85},1},{},{{0.885,0.88},1},{{0.895,0.88},1},{},{{0.885,0.91},1},{{0.895,0.91},1},{},{{0.885,0.94},1},{{0.895,0.94},1}};
					};
					class VspeedNumberStaticP15
					{
						type = "text";
						source = "static";
						text = 15;
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.91,0.73},1};
						right[] = {{"0.91 + 0.06",0.73},1};
						down[] = {{0.91,"0.73 + 0.05"},1};
					};
					class VspeedNumberStaticM15
					{
						type = "text";
						source = "static";
						text = -15;
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.91,0.91},1};
						right[] = {{"0.91 + 0.06",0.91},1};
						down[] = {{0.91,"0.91 + 0.05"},1};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1;
						width = 4;
						top = 0.3;
						center = 0.5;
						bottom = 0.7;
						lineXleft = 0.11;
						lineYright = 0.1;
						lineXleftMajor = 0.11;
						lineYrightMajor = 0.09;
						majorLineEach = 3;
						numberEach = 3;
						step = 10;
						stepSize = "(0.70 - 0.30) / 10";
						align = "center";
						scale = 1;
						pos[] = {0.3,0.04};
						right[] = {0.36,0.04};
						down[] = {0.3,0.09};
					};
					class HorizontalLine
					{
						clipTL[] = {0.2,0.12};
						clipBR[] = {0.8,0.96};
						class HorizontalLineDraw
						{
							type = "line";
							width = 4;
							points[] = {{"HorizonVector",{"-6 * 0.0375",0},1},{"HorizonVector",{"-5 * 0.0375",0},1},{},{"HorizonVector",{"-4 * 0.0375",0},1},{"HorizonVector",{"-3 * 0.0375",0},1},{},{"HorizonVector",{"-2 * 0.0375",0},1},{"HorizonVector",{"-1 * 0.0375",0},1},{},{"HorizonVector",{"1 * 0.0375",0},1},{"HorizonVector",{"2 * 0.0375",0},1},{},{"HorizonVector",{"3 * 0.0375",0},1},{"HorizonVector",{"4 * 0.0375",0},1},{},{"HorizonVector",{"5 * 0.0375",0},1},{"HorizonVector",{"6 * 0.0375",0},1}};
						};
					};
					class MGun
					{
						condition = "on";
						class Circle
						{
							type = "line";
							width = 4;
							points[] = {{"ForwardVector",1,"WeaponAim",{0.05,0},1},{"ForwardVector",1,"WeaponAim",{0.025,0},1},{},{"ForwardVector",1,"WeaponAim",{0,0.0497118},1},{"ForwardVector",1,"WeaponAim",{0,0.0248559},1},{},{"ForwardVector",1,"WeaponAim",{-0.05,0},1},{"ForwardVector",1,"WeaponAim",{-0.025,0},1},{},{"ForwardVector",1,"WeaponAim",{0,-0.0497118},1},{"ForwardVector",1,"WeaponAim",{0,-0.0248559},1}};
						};
					};
					class Rockets
					{
						condition = "missile";
						class Circle
						{
							type = "line";
							width = 4;
							points[] = {{"ForwardVector",1,"WeaponAim",{-0.25,-0.25},1},{"ForwardVector",1,"WeaponAim",{-0.25,-0.2},1},{},{"ForwardVector",1,"WeaponAim",{-0.25,0.25},1},{"ForwardVector",1,"WeaponAim",{-0.25,0.2},1},{},{"ForwardVector",1,"WeaponAim",{0.25,-0.25},1},{"ForwardVector",1,"WeaponAim",{0.25,-0.2},1},{},{"ForwardVector",1,"WeaponAim",{0.25,0.25},1},{"ForwardVector",1,"WeaponAim",{0.25,0.2},1},{},{"ForwardVector",1,"WeaponAim",{-0.25,-0.25},1},{"ForwardVector",1,"WeaponAim",{-0.2,-0.25},1},{},{"ForwardVector",1,"WeaponAim",{-0.25,0.25},1},{"ForwardVector",1,"WeaponAim",{-0.2,0.25},1},{},{"ForwardVector",1,"WeaponAim",{0.25,-0.25},1},{"ForwardVector",1,"WeaponAim",{0.2,-0.25},1},{},{"ForwardVector",1,"WeaponAim",{0.25,0.25},1},{"ForwardVector",1,"WeaponAim",{0.2,0.25},1},{},{"ForwardVector",1,"WeaponAim",{0.035,0.0347983},1},{"ForwardVector",1,"WeaponAim",{0.018,0.0178963},1},{},{"ForwardVector",1,"WeaponAim",{-0.035,0.0347983},1},{"ForwardVector",1,"WeaponAim",{-0.018,0.0178963},1},{},{"ForwardVector",1,"WeaponAim",{-0.035,-0.0347983},1},{"ForwardVector",1,"WeaponAim",{-0.018,-0.0178963},1},{},{"ForwardVector",1,"WeaponAim",{0.035,-0.0347983},1},{"ForwardVector",1,"WeaponAim",{0.018,-0.0178963},1}};
						};
					};
				};
			};
		};
		class MarkerLights
		{
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.8,0,0};
				ambient[] = {0.08,0,0};
				blinking = "false";
				intensity = 80;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
			};
			class WhiteStill: RedStill
			{
				name = "bily pozicni";
				color[] = {1,1,1};
				ambient[] = {0.1,0.1,0.1};
				blinking = 1;
				intensity = 80;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class GreenStill: RedStill
			{
				name = "zeleny pozicni";
				color[] = {0,0.8,0};
				ambient[] = {0,0.08,0};
				blinking = "false";
				intensity = 80;
			};
			class WhiteBlinking: RedStill
			{
				name = "bily pozicni blik";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
				intensity = 90;
			};
			class RedBlinking: RedStill
			{
				name = "cerveny pozicni blik";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
				intensity = 90;
			};
		};
		class Reflectors
		{
			class Middle
			{
				position = "gun_begin";
				direction = "gun_end";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				color[] = {0.07,0.99,0.89};
				ambient[] = {0.0085,0.0095,0.01};
				innerAngle = 45;
				outerAngle = 90;
				coneFadeCoef = 5;
				intensity = 100000;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 4;
				flareMaxDistance = 300;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 5;
					quadratic = 2;
					hardLimitStart = 400;
					hardLimitEnd = 500;
				};
			};
		};
		dammageHalf[] = {};
		dammageFull[] = {};
		class Damage
		{
			tex[] = {};
			mat[] = {"UH1gunfighter\uh1y\data\uh1y_sklo.rvmat","UH1gunfighter\uh1y\data\uh1y_sklo_damage.rvmat","UH1gunfighter\uh1y\data\uh1y_sklo_damage.rvmat","UH1gunfighter\uh1y\data\uh1y_sklo_in.rvmat","UH1gunfighter\uh1y\data\uh1y_sklo_in_damage.rvmat","UH1gunfighter\uh1y\data\uh1y_sklo_in_damage.rvmat","UH1gunfighter\uh1y\data\uh1y_ext.rvmat","UH1gunfighter\uh1y\data\uh1y_ext_damage.rvmat","UH1gunfighter\uh1y\data\uh1y_ext_destruct.rvmat","UH1gunfighter\uh1y\data\uh1y_int.rvmat","UH1gunfighter\uh1y\data\uh1y_int_damage.rvmat","UH1gunfighter\uh1y\data\uh1y_int_destruct.rvmat","UH1gunfighter\uh1y\data\launcher.rvmat","UH1gunfighter\uh1y\data\launcher.rvmat","UH1gunfighter\uh1y\data\launcher_destruct.rvmat","UH1gunfighter\uh1y\data\uh1y_cockpit.rvmat","UH1gunfighter\uh1y\data\uh1y_cockpit_damage.rvmat","UH1gunfighter\uh1y\data\uh1y_cockpit_destruct.rvmat"};
		};
		insideSoundCoef = 0.05;
		attenuationEffectType = "HeliAttenuation";
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",1,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",1,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",1,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.33,"soundGeneralCollision2",0.33,"soundGeneralCollision3",0.33};
		soundLandCrashes[] = {"emptySound",0};
		soundBuildingCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundArmorCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundWoodCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",1,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",1,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",1,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1,1,100};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		soundDammage[] = {"UH1Gunfighter\sounds\alarm_loop1",0.31622776,1};
		soundGetIn[] = {"UH1Gunfighter\Sounds\heli_door_01",0.31622776,1};
		soundGetOut[] = {"UH1Gunfighter\Sounds\heli_door_02",0.31622776,1,40};
		soundEnviron[] = {"","db-30",1};
		soundEngineOnInt[] = {"UH1Gunfighter\sounds\UHint\int-start-final",0.8466836,1};
		soundEngineOnExt[] = {"UH1Gunfighter\sounds\UHext\ext-motor-start",1.7466836,1,700};
		soundEngineOffInt[] = {"UH1Gunfighter\sounds\UHint\int-stop-final",0.8466836,1};
		soundEngineOffExt[] = {"UH1Gunfighter\sounds\UHext\ext-motor-stop",1.7466836,1,700};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",3,1,2};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",3,1,2};
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",1,1};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",2.5118864,1,150};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1,1};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1,1,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",1,1};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1,1,80};
		slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1,1};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1,1,80};
		slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1,1};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1,1,80};
		slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1,1};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1,1,80};
		slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"UH1Gunfighter\sounds\UHext\uh1y",2.5118864,1,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] = {"UH1Gunfighter\sounds\UHint\int-rotor-single5b",1.4118865,1,1400};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class RotorNoiseExt
			{
				sound[] = {"UH1Gunfighter\sounds\UHint\int-rotor-single5a",2.5118864,1,1600};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,2,0.5};
			};
			class EngineInt
			{
				sound[] = {"UH1Gunfighter\sounds\UHext\uh1y",1,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[] = {"UH1Gunfighter\sounds\UHint\int-rotor-single5b",1,1};
				frequency = "rotorSpeed * (1 - rotorThrust/5)";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.2238721,1,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.2238721,1,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",1,1,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandExt",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",1,1,100};
				frequency = 1;
				volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_open_int",0.56234133,1,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.35481337,1,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"UH1Gunfighter\sounds\UHext\uh1y",2.5118864,1,800};
					frequency = "rotorSpeed";
					volume = "camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[] = {"UH1Gunfighter\sounds\UHint\int-rotor-single5b",1.4118865,1,1400};
					frequency = "rotorSpeed * (1-rotorThrust/5)";
					volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class RotorNoiseExt
				{
					sound[] = {"UH1Gunfighter\sounds\UHint\int-rotor-single5a",2.5118864,1,1600};
					frequency = "rotorSpeed";
					volume = "camPos*10*(0 max (rotorThrust-0.9))";
					cone[] = {1.6,3.14,2,0.5};
				};
				class EngineInt
				{
					sound[] = {"UH1Gunfighter\sounds\UHext\uh1y",1,1};
					frequency = "rotorSpeed";
					volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[] = {"UH1Gunfighter\sounds\UHint\int-rotor-single5b",1,1};
					frequency = "rotorSpeed * (1 - rotorThrust/5)";
					volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.31622776,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.2238721,1,20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.2238721,1,20};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",1,1,100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
				};
				class scrubLandExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandExt",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05])";
				};
				class scrubBuildingInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",1,1,100};
					frequency = 1;
					volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubBuildingExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_open_int",0.56234133,1,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.35481337,1,50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
	};
};
class cfgMods
{
	author = "76561197982468872";
	timepacked = "1441645315";
};
//};
