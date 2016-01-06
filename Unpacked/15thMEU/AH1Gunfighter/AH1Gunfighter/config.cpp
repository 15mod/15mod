////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon Sep 07 18:59:08 2015 : Created on Mon Sep 07 18:59:08 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class AH1Gunfighter : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AH1Z_Pilot = "AH1Z_Pilot";
		AH1Z_Gunner = "AH1Z_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AH1Z_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "\AH1gunfighter\ah1z\Anims\AH1Z_Dead.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class KIA_AH1Z_Pilot: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\AH1gunfighter\ah1z\Anims\KIA_AH1Z_Pilot.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class AH1Z_Pilot: Crew
		{
			file = "\AH1gunfighter\ah1z\Anims\AH1Z_Pilot.rtm";
			interpolateTo[] = {"KIA_AH1Z_Pilot",1};
		};
		class KIA_AH1Z_Gunner: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\AH1gunfighter\ah1z\Anims\KIA_AH1Z_Gunner.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class AH1Z_Gunner: Crew
		{
			file = "\AH1gunfighter\ah1z\Anims\AH1Z_Gunner.rtm";
			interpolateTo[] = {"KIA_AH1Z_Gunner",1};
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
	class M_Sidewinder_AA: MissileBase
	{
		model = "AH1gunfighter\ah1z\sidewinder_fly";
		proxyShape = "AH1gunfighter\ah1z\sidewinder_proxy";
		hit = 300;
		indirectHit = 85;
		indirectHitRange = 10;
		maneuvrability = 27;
		simulationStep = 0.002;
		airLock = 1;
		irLock = 0;
		cost = 15000;
		maxSpeed = 828;
		timeToLive = 35;
		sideAirFriction = 0.2;
		trackOversteer = 1;
		trackLead = 1;
		initTime = 0;
		thrustTime = 5;
		thrust = 2900;
		fuseDistance = 500;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		weaponlocksystem = "2 + 4 + 8";
		cmimmunity = 0.8;
		whistleDist = 20;
	};
	class ACE_Hellfire_AGM114K;
	class M_Hellfire_AT2: ACE_Hellfire_AGM114K
	{
		manualControl = 1;
		irLock = 1;
		laserLock = 1;
		model = "AH1gunfighter\ah1z\AGM114Hellfire";
		proxyShape = "AH1gunfighter\ah1z\AGM114Hellfire_proxy";
		muzzleeffect = "BIS_fnc_effectFiredHeliRocket";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01",3.1622777,1,2500};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",6,1.5,400};
		whistledist = 24;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 25;
	};
	class R_Hydra_HE;
	class R_Hydra_HE2: R_Hydra_HE
	{
		model = "AH1gunfighter\ah1z\70mmRocket";
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
	class 2Rnd_Sidewinder_AH1Z: VehicleMagazine
	{
		scope = 2;
		displayName = "SIDEWINDER";
		ammo = "M_Sidewinder_AA";
		count = 2;
		initSpeed = 0;
		maxLeadSpeed = 500;
		sound[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.1220185,1.3,1100};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1,20};
		nameSound = "missiles";
	};
	class 300Rnd_20mm_shells;
	class 750Rnd_M197_AH1: 300Rnd_20mm_shells
	{
		displayName = "M197";
		ammo = "ACE_20mm_HE";
		count = 750;
	};
	class 6Rnd_ACE_Hellfire_AGM114K;
	class 8Rnd_Hellfire: 6Rnd_ACE_Hellfire_AGM114K
	{
		displayName = "HELLFIRE AGM114K";
		count = 8;
		ammo = "M_Hellfire_AT2";
	};
	class 14Rnd_FFAR: VehicleMagazine
	{
		scope = 2;
		displayName = "FFAR";
		ammo = "R_Hydra_HE";
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
	class AH1safe: RocketPods
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
	class SidewinderLaucher_AH1Z: MissileLauncher
	{
		displayName = "SIDEWINDER";
		minRange = 300;
		minRangeProbab = 0.025;
		midRange = 2500;
		midRangeProbab = 0.09;
		maxRange = 9000;
		maxRangeProbab = 0.01;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",1,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",1,2.5};
		reloadTime = 0.1;
		magazineReloadTime = 30;
		magazines[] = {"2Rnd_Sidewinder_AH1Z"};
		cursor = "missile";
		cursorSize = 1;
		weaponlockdelay = 3;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,2000};
			soundBegin[] = {"Begin1",0.33};
		};
	};
	class ACE_gatling_20mm_Comanche;
	class M197: ACE_gatling_20mm_Comanche
	{
		displayName = "M197";
		magazines[] = {"750Rnd_M197_AH1"};
		class manual: CannonCore
		{
			reloadTime = 0.06;
			displayName = "M197";
			autoFire = 1;
			burst = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"AH1gunfighter\sounds\a10vulcanVII",1.7782794,1,2500};
				soundBegin[] = {"Begin1",0.33};
			};
		};
	};
	class FFARLauncher: RocketPods
	{
		magazines[] = {"38Rnd_FFAR","28Rnd_FFAR"};
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
				begin1[] = {"\AH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
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
				begin1[] = {"\AH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
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
				begin1[] = {"\AH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
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
				begin1[] = {"\AH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
				soundBegin[] = {"Begin1",0.33};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.1220185,1.2,700};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
	class FFARLauncher_14: FFARLauncher
	{
		magazines[] = {"14Rnd_FFAR"};
	};
	class missiles_DAGR;
	class HellfireLauncher: missiles_DAGR
	{
		displayName = "HELLFIRE AGM114K";
		magazines[] = {"8Rnd_Hellfire"};
		laser = 1;
		canLock = 2;
		lockAcquire = 0;
		weaponlockdelay = 3;
		weaponsoundeffect = "DefaultRifle";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			Begin1[] = {"AH1gunfighter\sounds\RocketLauncher_Shot05",1.12202,1.3,2000};
			soundfly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.1,700};
			soundBegin[] = {"Begin1",0.33};
		};
	};
};
class defaultEventhandlers;
class CfgPatches
{
	class Gunfighter
	{
		units[] = {"meu_AH1Z"};
		weapons[] = {"AH1safe","M197","SidewinderLaucher_AH1Z","HellfireLauncher"};
		requiredVersion = 0.01;
		requiredAddons[] = {"A3_Air_F","A3_Weapons_F","A3_Anims_F","A3_Anims_F_Config_Sdr"};
		Magazines[] = {"2Rnd_Sidewinder_AH1Z","750Rnd_M197_AH1","8Rnd_Hellfire","14Rnd_FFAR","38Rnd_FFAR"};
	};
};
class RCWSOptics;
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
	class meu_AH1Z: Helicopter
	{
		destrType = "DestructWreck";
		crew = "B_Helipilot_F";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		displayName = "AH-1Z Cobra";
		accuracy = 1;
		driveraction = "AH1Z_Pilot";
		memoryPointsGetInDriver = "pos_driver";
		memoryPointsGetInDriverDir = "pos_driver_dir";
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		typicalCargo[] = {"B_Helipilot_F","B_Helipilot_F"};
		driverCompartments = "Compartment1";
		gunnerUsesPilotView = "false";
		gunnerHasFlares = 1;
		enableManualFire = 1;
		irScanGround = "True";
		irScanRangeMin = 2000;
		irScanRangeMax = 8000;
		irScanToEyeFactor = 2;
		irTarget = "true";
		class Eventhandlers: defaultEventhandlers
		{
			init = "if (!isNil {meu_fnc_bitchinBetty}) then {_this spawn meu_fnc_bitchinBetty;};";
		};
		selectionFireAnim = "muzzleFlash";
		selectionHRotorStill = "mainRotorStatic";
		selectionHRotorMove = "mainRotorBlurred";
		selectionVRotorStill = "tailRotorStatic";
		selectionVRotorMove = "tailRotorBlurred";
		selectionDamage = "trup";
		altFullForce = 5000;
		altNoForce = 10000;
		bodyFrictionCoef = 0.6;
		cyclicasideforcecoef = 2;
		cyclicforwardforcecoef = 3;
		frontRotorForceCoef = 1.2;
		backRotorForceCoef = 3;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		driveOnComponent[] = {"Skids"};
		simulation = "helicopterrtd";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "AH1gunfighter\RTD_Heli_Light_03.xml";
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
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 2;
			};
		};
		maxSpeed = 296;
		fuelCapacity = 1200;
		fuelConsumptionRate = 0.138;
		vehicleClass = "Air";
		enableSweep = "true";
		precision = 200;
		availableForSupportTypes[] = {"CAS_Heli"};
		camouflage = 50;
		maxfordingdepth = 1;
		sensitivity = 3;
		sensitivityear = 3;
		canBeShot = "true";
		audible = 7;
		minGForce = 0.2;
		maxGForce = 2;
		washDownStrength = "1.0f";
		washDownDiameter = "40.0f";
		gForceShakeAttenuation = 0.5;
		neutralMainRotorDive = 0;
		mainBladeRadius = 6.1;
		tailBladeRadius = 1.2;
		mainBladeCenter = "-main_rotor";
		tailBladeCenter = "-tail_rotor";
		maxMainRotorDive = 0;
		minMainRotorDive = 0;
		liftForceCoef = 1.3;
		mainrotordive = 0;
		backrotordive = 0;
		mainRotorSpeed = -1;
		backRotorSpeed = 3;
		flapsFrictionCoef = 0.5;
		driverCanEject = 1;
		extCameraPosition[] = {0,6,-18};
		leftDustEffect = "vbs2_fx_lowTrackDustEffects";
		rightDustEffect = "vbs2_fx_lowTrackDustEffects";
		driverlefthandanimname = "lever_pilot";
		driverleftleganimname = "pedalL";
		driverrighthandanimname = "stick_pilot";
		driverrightleganimname = "pedalR";
		memoryPointLMissile = "Missile_1";
		memoryPointRMissile = "Missile_2";
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		laserScanner = 1;
		getInRadius = 2.5;
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		radarType = 4;
		showAllTargets = 2;
		LockDetectionSystem = "1 + 2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		armor = 60;
		armorStructural = 1;
		damageResistance = 0.01039;
		epeImpulseDamageCoef = 20;
		cost = 50000000;
		model = "AH1gunfighter\ah1z\ah1z.p3d";
		picture = "AH1gunfighter\ui\ah1z_CA";
		mapSize = 15.5;
		Icon = "AH1gunfighter\ui\icomap_ah1z_CA";
		weapons[] = {"AH1safe","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"38Rnd_FFAR","240Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelectionsTextures[] = {"AH1gunfighter\ah1z\data\ah1z_body_co.paa","AH1gunfighter\ah1z\data\ah1z_engines_co.paa"};
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
		soundDammage[] = {"AH1Gunfighter\sounds\alarm_loop1",0.3,1};
		soundGetIn[] = {"AH1Gunfighter\Sounds\heli_door_01",0.31622776,1};
		soundGetOut[] = {"AH1Gunfighter\Sounds\heli_door_02",0.31622776,1,50};
		soundEnviron[] = {"","db-30",1};
		soundEngineOnInt[] = {"AH1Gunfighter\sounds\AHint\AHStartin.wss",0.8316228,1};
		soundEngineOnExt[] = {"AH1Gunfighter\sounds\AHext\AHStartout.wss",1.77828,1,700};
		soundEngineOffInt[] = {"AH1Gunfighter\sounds\AHint\AHStopin.wss",0.8316228,1};
		soundEngineOffExt[] = {"AH1Gunfighter\sounds\AHext\AHStopout.wss",1.77828,1,700};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",3,1,2};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",3,1,2};
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",1,1};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",2.5118864,1,300};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1,1};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1,1,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",1,1,100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",1,1,100};
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",1.7782794,1,100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",1.7782794,1,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		class Sounds
		{
			class Engineext
			{
				sound[] = {"AH1Gunfighter\sounds\AHext\AHEngineout.wss",3.1622777,1,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowext
			{
				sound[] = {"AH1Gunfighter\sounds\AHint\AHRotorLow.wss",5.3088446,1,1600};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2,0.9};
			};
			class RotorHighext
			{
				sound[] = {"AH1Gunfighter\sounds\AHint\AHRotorHigh.wss",5.0118723,1,1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8,3.14,2,0.9};
			};
			class EngineInt
			{
				sound[] = {"AH1Gunfighter\sounds\AHint\AHEngineIn.wss",2.041738,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowInt
			{
				sound[] = {"AH1Gunfighter\sounds\AHint\AHRotorLow.wss",2.137962,1};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighInt
			{
				sound[] = {"AH1Gunfighter\sounds\AHint\AHRotorHigh.wss",2.041738,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
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
				class Engineext
				{
					sound[] = {"AH1Gunfighter\sounds\AHext\AHEngineout.wss",3.1622777,1,800};
					frequency = "rotorSpeed";
					volume = "camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorLowext
				{
					sound[] = {"AH1Gunfighter\sounds\AHint\AHRotorLow.wss",5.3088446,1,1600};
					frequency = "rotorSpeed";
					volume = "camPos*(0 max (rotorSpeed-0.1))";
					cone[] = {1.8,3.14,2,0.9};
				};
				class RotorHighext
				{
					sound[] = {"AH1Gunfighter\sounds\AHint\AHRotorHigh.wss",5.0118723,1,1800};
					frequency = "rotorSpeed";
					volume = "camPos*10*(0 max (rotorThrust-0.95))";
					cone[] = {1.8,3.14,2,0.9};
				};
				class EngineInt
				{
					sound[] = {"AH1Gunfighter\sounds\AHint\AHEngineIn.wss",2.041738,1};
					frequency = "rotorSpeed";
					volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorLowInt
				{
					sound[] = {"AH1Gunfighter\sounds\AHint\AHRotorLow.wss",2.137962,1};
					frequency = "rotorSpeed";
					volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
				};
				class RotorHighInt
				{
					sound[] = {"AH1Gunfighter\sounds\AHint\AHRotorHigh.wss",2.041738,1};
					frequency = "rotorSpeed";
					volume = "(1-camPos)*3*(rotorThrust-0.9)";
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
					class HUDCenter
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.847,0.845};
					};
					class VelocityVector
					{
						type = "vector";
						source = "velocityToView";
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
					class HorizonVector
					{
						type = "horizon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.990727,0.987899};
						angle = 0;
					};
					class GunnerAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0,-0.0025};
						pos10[] = {0.01,0.0025};
					};
					class VerticalSpeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1;
						min = -15;
						max = 15;
						minPos[] = {0,-0.15};
						maxPos[] = {0,0.15};
					};
				};
				class Draw
				{
					alpha = 1;
					color[] = {0.25,1,0.25};
					condition = "on";
					class Static
					{
						type = "line";
						width = 4;
						points[] = {{{0.48,0.14},1},{{0.5,0.12},1},{{0.52,0.14},1},{},{{0.4,0.86},1},{{0.4,0.94},1},{{0.6,0.94},1},{{0.6,0.86},1},{{0.4,0.86},1},{},{{0.4,0.9},1},{{0.408,0.9},1},{},{{0.6,0.9},1},{{0.592,0.9},1},{},{{0.5,0.86},1},{{0.5,0.868},1},{},{{0.5,0.94},1},{{0.5,0.932},1}};
					};
					class VelocityLine
					{
						type = "line";
						width = 4;
						points[] = {{"HUDCenter",1},{"VelocityVector",1}};
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
							pos[] = {{0.22,0.2},1};
							right[] = {{0.28,0.2},1};
							down[] = {{0.22,0.24},1};
						};
						class CollectiveNumber
						{
							type = "text";
							source = "rtdCollective";
							sourceScale = 100;
							align = "left";
							scale = 1;
							pos[] = {{0.22,0.2},1};
							right[] = {{0.28,0.2},1};
							down[] = {{0.22,0.24},1};
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						scale = 1;
						pos[] = {{0.16,0.48},1};
						right[] = {{0.22,0.48},1};
						down[] = {{0.16,0.52},1};
					};
					class AltNumber
					{
						type = "text";
						source = "altitudeAGL";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.84,0.48},1};
						right[] = {{0.9,0.48},1};
						down[] = {{0.84,0.52},1};
					};
					class Weapons
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 0.5;
						pos[] = {{0,0.85},1};
						right[] = {{0.04,0.85},1};
						down[] = {{0,0.89},1};
					};
					class Ammo
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 0.5;
						pos[] = {{0,0.9},1};
						right[] = {{0.04,0.9},1};
						down[] = {{0,0.94},1};
					};
					class VerticalSpeedScale
					{
						type = "line";
						width = 4;
						points[] = {{"VerticalSpeedBone",{0.85,0.48},1},{"VerticalSpeedBone",{0.87,0.5},1},{"VerticalSpeedBone",{0.85,0.52},1},{},{{0.875,0.35},1},{{0.885,0.35},1},{},{{0.875,0.4},1},{{0.885,0.4},1},{},{{0.875,0.45},1},{{0.885,0.45},1},{},{{0.875,0.5},1},{{0.895,0.5},1},{},{{0.875,0.55},1},{{0.885,0.55},1},{},{{0.875,0.6},1},{{0.885,0.6},1},{},{{0.875,0.65},1},{{0.885,0.65},1}};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1;
						width = 4;
						top = 0.2;
						center = 0.5;
						bottom = 0.8;
						lineXleft = 0.11;
						lineYright = 0.1;
						lineXleftMajor = 0.11;
						lineYrightMajor = 0.09;
						majorLineEach = 2;
						numberEach = 2;
						step = 22.5;
						stepSize = "(0.80 - 0.20) / 6";
						align = "center";
						scale = 1;
						pos[] = {0.2,0.05};
						right[] = {0.26,0.05};
						down[] = {0.2,0.09};
					};
					class HorizonLine
					{
						clipTL[] = {0.2,0.145};
						clipBR[] = {0.8,0.855};
						class HorizonLineDraw
						{
							type = "line";
							width = 4;
							points[] = {{"HorizonVector",{"-6 * 0.0375",0},1},{"HorizonVector",{"-5 * 0.0375",0},1},{},{"HorizonVector",{"-4 * 0.0375",0},1},{"HorizonVector",{"-3 * 0.0375",0},1},{},{"HorizonVector",{"-2 * 0.0375",0},1},{"HorizonVector",{"-1 * 0.0375",0},1},{},{"HorizonVector",{"1 * 0.0375",0},1},{"HorizonVector",{"2 * 0.0375",0},1},{},{"HorizonVector",{"3 * 0.0375",0},1},{"HorizonVector",{"4 * 0.0375",0},1},{},{"HorizonVector",{"5 * 0.0375",0},1},{"HorizonVector",{"6 * 0.0375",0},1}};
						};
					};
					class Gunner
					{
						type = "line";
						width = 4;
						points[] = {{"GunnerAim",{"0.5 - 0.015","0.9 - 0.008"},1},{"GunnerAim",{"0.5 - 0.015","0.9 + 0.008"},1},{"GunnerAim",{"0.5 + 0.015","0.9 + 0.008"},1},{"GunnerAim",{"0.5 + 0.015","0.9 - 0.008"},1},{"GunnerAim",{"0.5 - 0.015","0.9 - 0.008"},1}};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							width = 4;
							points[] = {{"ForwardVector",1,"WeaponAim",{0.025,0},1},{"ForwardVector",1,"WeaponAim",{0.01,0},1},{},{"ForwardVector",1,"WeaponAim",{0,0.0248559},1},{"ForwardVector",1,"WeaponAim",{0,0.00994236},1},{},{"ForwardVector",1,"WeaponAim",{-0.025,0},1},{"ForwardVector",1,"WeaponAim",{-0.01,0},1},{},{"ForwardVector",1,"WeaponAim",{0,-0.0248559},1},{"ForwardVector",1,"WeaponAim",{0,-0.00994236},1}};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 4;
							points[] = {{"ForwardVector",1,"HUDCenter",{0,-0.248559},1},{"ForwardVector",1,"HUDCenter",{0.0434,-0.244781},1},{"ForwardVector",1,"HUDCenter",{0.0855,-0.233571},1},{"ForwardVector",1,"HUDCenter",{0.125,-0.215252},1},{"ForwardVector",1,"HUDCenter",{0.1607,-0.190396},1},{"ForwardVector",1,"HUDCenter",{0.1915,-0.159774},1},{"ForwardVector",1,"HUDCenter",{0.2165,-0.12428},1},{"ForwardVector",1,"HUDCenter",{0.234925,-0.0850072},1},{"ForwardVector",1,"HUDCenter",{0.2462,-0.0431499},1},{"ForwardVector",1,"HUDCenter",{0.25,0},1},{"ForwardVector",1,"HUDCenter",{0.2462,0.0431499},1},{"ForwardVector",1,"HUDCenter",{0.234925,0.0850072},1},{"ForwardVector",1,"HUDCenter",{0.2165,0.12428},1},{"ForwardVector",1,"HUDCenter",{0.1915,0.159774},1},{"ForwardVector",1,"HUDCenter",{0.1607,0.190396},1},{"ForwardVector",1,"HUDCenter",{0.125,0.215252},1},{"ForwardVector",1,"HUDCenter",{0.0855,0.233571},1},{"ForwardVector",1,"HUDCenter",{0.0434,0.244781},1},{"ForwardVector",1,"HUDCenter",{0,0.248559},1},{"ForwardVector",1,"HUDCenter",{-0.0434,0.244781},1},{"ForwardVector",1,"HUDCenter",{-0.0855,0.233571},1},{"ForwardVector",1,"HUDCenter",{-0.125,0.215252},1},{"ForwardVector",1,"HUDCenter",{-0.1607,0.190396},1},{"ForwardVector",1,"HUDCenter",{-0.1915,0.159774},1},{"ForwardVector",1,"HUDCenter",{-0.2165,0.12428},1},{"ForwardVector",1,"HUDCenter",{-0.234925,0.0850072},1},{"ForwardVector",1,"HUDCenter",{-0.2462,0.0431499},1},{"ForwardVector",1,"HUDCenter",{-0.25,0},1},{"ForwardVector",1,"HUDCenter",{-0.2462,-0.0431499},1},{"ForwardVector",1,"HUDCenter",{-0.234925,-0.0850072},1},{"ForwardVector",1,"HUDCenter",{-0.2165,-0.12428},1},{"ForwardVector",1,"HUDCenter",{-0.1915,-0.159774},1},{"ForwardVector",1,"HUDCenter",{-0.1607,-0.190396},1},{"ForwardVector",1,"HUDCenter",{-0.125,-0.215252},1},{"ForwardVector",1,"HUDCenter",{-0.0855,-0.233571},1},{"ForwardVector",1,"HUDCenter",{-0.0434,-0.244781},1},{"ForwardVector",1,"HUDCenter",{0,-0.248559},1}};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							width = 4;
							points[] = {{"ForwardVector",1,"HUDCenter",{-0.15,-0.149135},1},{"ForwardVector",1,"HUDCenter",{-0.15,-0.129251},1},{},{"ForwardVector",1,"HUDCenter",{-0.15,0.149135},1},{"ForwardVector",1,"HUDCenter",{-0.15,0.129251},1},{},{"ForwardVector",1,"HUDCenter",{0.15,-0.149135},1},{"ForwardVector",1,"HUDCenter",{0.15,-0.129251},1},{},{"ForwardVector",1,"HUDCenter",{0.15,0.149135},1},{"ForwardVector",1,"HUDCenter",{0.15,0.129251},1},{},{"ForwardVector",1,"HUDCenter",{-0.15,-0.149135},1},{"ForwardVector",1,"HUDCenter",{-0.13,-0.149135},1},{},{"ForwardVector",1,"HUDCenter",{-0.15,0.149135},1},{"ForwardVector",1,"HUDCenter",{-0.13,0.149135},1},{},{"ForwardVector",1,"HUDCenter",{0.15,-0.149135},1},{"ForwardVector",1,"HUDCenter",{0.13,-0.149135},1},{},{"ForwardVector",1,"HUDCenter",{0.15,0.149135},1},{"ForwardVector",1,"HUDCenter",{0.13,0.149135},1}};
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
				direction = "gunnerview";
				hitpoint = "L svetlo";
				selection = "L svetlo";
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
		class HitPoints: HitPoints
		{
			class HitEngine: HitEngine
			{
				armor = 999;
				name = "motor";
				convexComponent = "motor";
			};
			class HitHRotor: HitHRotor
			{
				armor = 2.9;
				radius = 0.4;
				minimalHit = 0.09;
				explosionShielding = 2.5;
				name = "velka vrtule";
			};
			class HitVRotor: HitVRotor
			{
				armor = 1.5;
				radius = 0.06;
				minimalHit = 0.05;
				explosionShielding = 6;
				name = "mala vrtule";
			};
			class HitFuel: HitFuel
			{
				armor = 1;
				radius = 0.25;
				minimalHit = 0.05;
			};
			class HitAvionics: HitAvionics
			{
				armor = 2;
				radius = 0.4;
				minimalHit = 0.05;
				name = "elektronika";
				visual = "elektronika";
			};
			class HitGlass1: HitGlass2
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
			class HitGlass2: HitGlass2
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
			class HitGlass3: HitGlass3
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
			class HitGlass4: HitGlass4
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
			class HitGlass5: HitGlass5
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ace_fcs_Enabled = 1;
				ace_laser_CanLockLaser = 1;
				ace_laser_selfdesignate_Enabled = 1;
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				isCopilot = 1;
				gunnerAction = "AH1Z_Gunner";
				gunnerInAction = "AH1Z_Gunner";
				gunnerCompartments = "Compartment1";
				weapons[] = {"AH1safe","M197","HellfireLauncher","SidewinderLaucher_AH1Z","Laserdesignator_mounted"};
				magazines[] = {"750Rnd_M197_AH1","8Rnd_Hellfire","2Rnd_Sidewinder_AH1Z","Laserbatteries"};
				laser = 1;
				allowTabLock = 1;
				gunnerHasFlares = 1;
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				primaryGunner = 1;
				memoryPointGun = "machinegun";
				minElev = -51;
				maxElev = 9;
				initElev = 6;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				gunnerCanEject = 1;
				stabilizedInAxes = 3;
				gunnerOpticsModel = "";
				gunnerForceOptics = 0;
				turretInfoType = "RscOptics_Heli_Attack_01_gunner";
				maxhorizontalrotspeed = 3;
				maxverticalrotspeed = 3;
				class OpticsIn
				{
					class Wide
					{
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
						directionStabilized = 1;
						initanglex = 0;
						initangley = 0;
						initfov = 0.1;
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
		};
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
		threat[] = {1,1,0.6};
		class AnimationSources: AnimationSources
		{
			class 20mmBarrels
			{
				source = "revolving";
				weapon = "M197";
			};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass4";
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
			class Formationon
			{
				displayName = "<t color='#00FF7F'>Formation Lights On";
				position = "zamerny";
				radius = 5;
				condition = "this animationPhase ""Greentipstart"" < 0.5 && (player in [driver this,gunner this]) && (alive this)";
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
				condition = "this animationPhase ""Greentipstart"" > 0.5 && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""Greentipstart"",0];";
				animPeriod = 0;
				onlyforplayer = 1;
				priority = -7;
			};
		};
		class Library
		{
			libTextDesc = "AH1Z";
		};
		dammageHalf[] = {"AH1gunfighter\ah1z\data\ah1z_monitor_glass_ca.paa","AH1gunfighter\ah1z\data\ah1z_monitor_glass_destr_co.paa"};
		dammageFull[] = {"AH1gunfighter\ah1z\data\ah1z_monitor_glass_ca.paa","AH1gunfighter\ah1z\data\ah1z_monitor_glass_destr_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"AH1gunfighter\ah1z\data\ah1z_body.rvmat","AH1gunfighter\ah1z\data\ah1z_body_damage.rvmat","AH1gunfighter\ah1z\data\ah1z_body_destruct.rvmat","AH1gunfighter\ah1z\data\ah1z_glass.rvmat","AH1gunfighter\ah1z\data\ah1z_glass_damage.rvmat","AH1gunfighter\ah1z\data\ah1z_glass_damage.rvmat","AH1gunfighter\ah1z\data\ah1z_glass_in.rvmat","AH1gunfighter\ah1z\data\ah1z_glass_in_damage.rvmat","AH1gunfighter\ah1z\data\ah1z_glass_in_damage.rvmat","AH1gunfighter\ah1z\data\ah1z_cockpit.rvmat","AH1gunfighter\ah1z\data\ah1z_cockpit.rvmat","AH1gunfighter\ah1z\data\ah1z_cockpit_destruct.rvmat","AH1gunfighter\ah1z\data\ah1z_engines.rvmat","AH1gunfighter\ah1z\data\ah1z_engines_damage.rvmat","AH1gunfighter\ah1z\data\ah1z_engines_destruct.rvmat","AH1gunfighter\ah1z\data\ah1z_monitors.rvmat","AH1gunfighter\ah1z\data\ah1z_monitors.rvmat","AH1gunfighter\ah1z\data\ah1z_monitors_destruct.rvmat"};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyDriver;
	class ProxyWeapon;
	class ProxyAGM114Hellfire: ProxyWeapon
	{
		model = "\AH1gunfighter\ah1z\AGM114Hellfire";
		simulation = "maverickweapon";
	};
	class ProxyAIM9XSidewinder: ProxyWeapon
	{
		model = "\AH1gunfighter\ah1z\AIM9XSidewinder";
		simulation = "maverickweapon";
	};
};
class cfgMods
{
	author = "76561197982468872";
	timepacked = "1441645148";
};
//};
