////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon Sep 07 18:45:08 2015 : Created on Mon Sep 07 18:45:08 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class MEUAV8B : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AV8B_Pilot = "AV8B_Pilot";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class KIA_AV8B_Pilot: DefaultDie
		{
			actions = "DeadActions";
			file = "\MEUAV8B\Data\Anim\KIA_AV8B_Pilot.rtm";
			speed = 0.5;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"unconscious",0.1};
		};
		class Crew;
		class AV8B_Pilot: Crew
		{
			file = "\MEUAV8B\Data\Anim\AV8B_Pilot.rtm";
			interpolateTo[] = {"KIA_AV8B_Pilot",1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		AV8B_Pilot = "";
	};
};
class defaultEventhandlers;
class CfgPatches
{
	class MEUAV8B
	{
		units[] = {"MEUAV8B2","MEUAV8BWreck"};
		weapons[] = {"AV8bsafe"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Weapons_F"};
		magazines[] = {"MEU_GBU12_LGB","MEU_Sidewinder","MEU_Missile_AGM_02_F","MEU_14Rnd_Rockets","MEU_300Rnd_25mm_shells_T"};
	};
};
class CfgAmmo
{
	class Rocketbase;
	class MissileBase;
	class B_25mm;
	class ACE_GBU12;
	class MEU_GBU12: ACE_GBU12
	{
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 50;
		model = "\meuav8b\gbu12fly";
		proxyShape = "\meuav8b\gbu12_proxy";
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		explosionSoundEffect = "DefaultExplosion";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",6,1.5,400};
		whistleDist = 24;
		maverickWeaponIndexOffset = 0;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 350;
		class CamShakeExplode
		{
			power = "(230*0.2)";
			duration = "((round (230^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((30 + 230^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 230;
			duration = "((round (230^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(230^0.25)";
			duration = "((round (230^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((230^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class MEU_B_25mm: B_25mm
	{
		hit = 75;
		indirectHit = 12;
		indirectHitRange = 10;
		cost = 25;
		airLock = 1;
		explosive = 0.4;
		caliber = 3.8;
		deflecting = 0;
		deflectingChance = 0;
		deflectingRandomness = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		soundFly[] = {"A3\Sounds_F\weapons\Explosion\cannon_fly",1,1,50};
		trackLead = 0;
		tracerScale = 1;
		tracerStartTime = 0.1;
		tracerEndTime = 4;
		nvgOnly = 0;
		typicalSpeed = 1030;
		visibleFire = 40;
		audibleFire = 40;
		visibleFireTime = 15;
		audiblefiretime = 15;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 25;
		class CamShakeExplode
		{
			power = "(25*0.2)";
			duration = "((round (25^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((2 + 25^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 25;
			duration = "((round (25^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(25^0.25)";
			duration = "((round (25^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((25^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Missile_AGM_02_F;
	class MEU_Maverick_AT: Missile_AGM_02_F
	{
		model = "\MEUAV8B\agm65_fly";
		proxyShape = "\MEUAV8B\agm65_proxy";
		hit = 2100;
		indirectHit = 85;
		indirectHitRange = 10;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",6,1.3,400};
		cost = 1500;
		airLock = 0;
		laserLock = 1;
		irLock = 1;
		nvLock = 0;
		initTime = 0;
		airFriction = 0.05;
		weaponLockSystem = "2 + 16";
		cmimmunity = 0.8;
		maxControlRange = 8000;
		fuseDistance = 500;
		trackOversteer = 1;
		trackLead = 1;
		timeToLive = 40;
		maneuvrability = 27;
		simulationStep = 0.01;
		sideAirFriction = 0.2;
		maxSpeed = 828;
		thrustTime = 5;
		thrust = 240;
		craterEffects = "AAMissileCrater";
		effectsMissile = "missile3";
		explosionEffects = "AAMissileExplosion";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		whistleDist = 24;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 25;
		maverickWeaponIndexOffset = 0;
		class CamShakeExplode
		{
			power = "(110*0.2)";
			duration = "((round (110^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((10 + 110^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(80^0.25)";
			duration = "((round (80^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((80^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 4;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class MEU_Sidewinder_AA: MissileBase
	{
		model = "\MEUAV8B\sidewinder_fly";
		proxyShape = "\MEUAV8B\sidewinder_proxy";
		hit = 300;
		indirectHit = 85;
		indirectHitRange = 10;
		maneuvrability = 27;
		simulationStep = 0.002;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",6,1.3,400};
		airLock = 1;
		irLock = 1;
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
		craterEffects = "AAMissileCrater";
		effectsMissile = "missile3";
		explosionEffects = "AAMissileExplosion";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		whistleDist = 24;
		maverickWeaponIndexOffset = 0;
	};
	class R_Hydra_HE;
	class R_Hydra_HE2: R_Hydra_HE
	{
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
	class 300Rnd_25mm_shells;
	class MEU_300Rnd_25mm_shells_T: 300Rnd_25mm_shells
	{
		ammo = "MEU_B_25mm";
		tracersevery = 1;
		nameSound = "cannon";
	};
	class 24Rnd_Missiles;
	class MEU_14Rnd_Rockets: 24Rnd_Missiles
	{
		displayName = "FFAR";
		ammo = "R_Hydra_he2";
		count = 14;
		initSpeed = 44;
		maxLeadSpeed = 200;
		nameSound = "rockets";
		sound[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.12202,1.3,1100};
		reloadSound[] = {"A3\sounds_f\dummysound",0.00031622776,1};
	};
	class MEU_Missile_AGM_02_F: VehicleMagazine
	{
		scope = 2;
		displayNameShort = "MAVERICK";
		count = 4;
		ammo = "MEU_Maverick_AT";
		initSpeed = 0;
		maxLeadSpeed = 450;
		sound[] = {"\A3\sounds_f\dummysound",1,1,1300};
		reloadSound[] = {"\A3\sounds_f\dummysound",0.00031622776,1,20};
		nameSound = "missiles";
	};
	class MEU_GBU12_LGB: VehicleMagazine
	{
		scope = 2;
		displayName = "GBU-12";
		ammo = "MEU_GBU12";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] = {"",1,1};
		reloadSound[] = {"",0.00031622776,1};
		count = 2;
		nameSound = "cannon";
	};
	class MEU_Sidewinder: VehicleMagazine
	{
		scope = 2;
		displayName = "SIDEWINDER";
		ammo = "MEU_Sidewinder_AA";
		count = 2;
		initSpeed = 0;
		maxLeadSpeed = 500;
		sound[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.1220185,1.3,1100};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1,20};
		nameSound = "missiles";
	};
};
class CfgWeapons
{
	class CannonCore;
	class gatling_25mm: CannonCore
	{
		class manual;
	};
	class MEU_gatling_25mm: gatling_25mm
	{
		nameSound = "cannon";
		burst = 0;
		reloadTime = 0.034;
		autoFire = 0;
		displayName = "GAU-12 Cannon 25mm";
		magazines[] = {"MEU_300Rnd_25mm_shells_T"};
		class manual: manual
		{
			burst = 0;
			autoFire = 1;
			canLock = 2;
			displayname = "GAU-12 Cannon 25mm";
			reloadTime = 0.034;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\Weapons\gatling\gatling5",1.7782794,1,4500};
				soundBegin[] = {"begin1",0.33};
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.31622776,1,20};
				closure2[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",0.31622776,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundContinuous = 0;
			};
		};
	};
	class Missile_AGM_02_Plane_CAS_01_F;
	class MEU_Maverick_F: Missile_AGM_02_Plane_CAS_01_F
	{
		CanLock = 2;
		magazines[] = {"MEU_Missile_AGM_02_F"};
		displayname = "AGM-65 Maverick";
		weaponLockDelay = 3;
	};
	class GBU12BombLauncher;
	class MEU_GBU12BombLauncher: GBU12BombLauncher
	{
		magazines[] = {"MEU_GBU12_LGB","2Rnd_GBU12_LGB","2Rnd_GBU12_LGB_MI10"};
	};
	class rocketpods;
	class AV8bsafe: rocketpods
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
	class missiles_DAR: rocketpods
	{
		class burst;
	};
	class MEU_FFAR_Smallpod: missiles_DAR
	{
		displayname = "LAU-68D/A Rocket Launcher";
		magazines[] = {"MEU_14Rnd_Rockets"};
		class burst: burst
		{
			displayname = "LAU-68D/A Rocket Launcher";
		};
	};
	class MissileLauncher;
	class SidewinderLaucher_AV8B: MissileLauncher
	{
		displayName = "AIM-9 SIDEWINDER";
		minRange = 300;
		minRangeProbab = 0.025;
		midRange = 2500;
		midRangeProbab = 0.09;
		maxRange = 9000;
		maxRangeProbab = 0.01;
		CanLock = 2;
		weaponLockDelay = 3;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.8,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.8,2.5};
		reloadTime = 0.1;
		magazineReloadTime = 30;
		magazines[] = {"MEU_Sidewinder"};
		cursor = "missile";
		cursorSize = 1;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,2000};
			soundBegin[] = {"Begin1",0.33};
		};
	};
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints;
		class AnimationSources;
	};
	class MEUAV8B2: Plane
	{
		scope = 2;
		simulation = "airplane";
		crew = "B_Pilot_F";
		destrType = "DestructWreck";
		model = "\MEUav8b\av8b2";
		picture = "\MEUav8b\data\ui\av8b_CA.paa";
		Icon = "\MEUav8b\data\ui\icomap_AV8B_CA.paa";
		mapSize = 14;
		side = 1;
		faction = "BLU_F";
		displayName = "MEU AV-8B Harrier II (CAS)";
		vehicleClass = "Air";
		accuracy = 1;
		camouflage = 10;
		typicalCargo[] = {"B_Pilot_F"};
		getInAction = "pilot_plane_cas_01_Enter";
		getOutAction = "pilot_plane_cas_01_Exit";
		getInRadius = 10;
		precisegetinout = 1;
		driverAction = "AV8B_Pilot";
		radarType = 4;
		driverCanSee = 31;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 16;
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		fuelCapacity = 1200;
		fuelConsumptionRate = 0.138;
		class Eventhandlers: defaultEventhandlers
		{
			init = "if (!isNil {meu_fnc_bitchinBetty}) then {_this spawn meu_fnc_bitchinBetty;};";
		};
		maxSpeed = 1040;
		landingSpeed = 200;
		acceleration = 300;
		vtol = 2;
		altFullForce = 15000;
		altNoForce = 35000;
		rudderInfluence = 0.03;
		aileronSensitivity = 0.8;
		elevatorSensitivity = 1.5;
		aileronControlsSensitivityCoef = 1;
		elevatorControlsSensitivity = 1;
		rudderControlsSensitivityCoef = 4;
		elevatorCoef[] = {0.6,0.7,0.9,0.4,0.35,0.3,0.3};
		aileronCoef[] = {0.6,1,0.95,0.9,0.85,0.8,0.75};
		rudderCoef[] = {0.6,1,1,0.9,0.8,0.7,0.6};
		flapsFrictionCoef = 0.32;
		angleOfIndicence = 0.05235987;
		draconicForceXCoef = 7.4;
		draconicForceYCoef = 3;
		draconicForceZCoef = 0.1;
		draconicTorqueXCoef = 1.2;
		draconicTorqueYCoef = 3;
		envelope[] = {0,0.2,1.2,3,5.1,7,7.3,7,6.3,5.2,3.8,1.8,0.5,0};
		thrustCoef[] = {0.9,0.8,0.9,1.3,1.2,1.2,1.1,1,0.9,0.2,0.1,0.1,0};
		landingAoa = 0.174533;
		minFireTime = 30;
		driveOnComponent[] = {"Wheel_1","Wheel_2","Wheel_3_1","Wheel_3_2"};
		enableGPS = 1;
		irScanGround = "True";
		laserScanner = 1;
		irScanRangeMin = 500;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 1;
		irTarget = "true";
		armor = 60;
		damageResistance = 0.01246;
		epeImpulseDamageCoef = 20;
		cost = 20000000;
		weapons[] = {"AV8bsafe","MEU_gatling_25mm","MEU_GBU12BombLauncher","MEU_Maverick_F","SidewinderLaucher_AV8B","MEU_FFAR_Smallpod","CMFlareLauncher"};
		magazines[] = {"MEU_300Rnd_25mm_shells_T","MEU_Missile_AGM_02_F","MEU_GBU12_LGB","MEU_Sidewinder","MEU_14Rnd_Rockets","240Rnd_CMFlare_Chaff_Magazine"};
		fov = 0.4;
		type = 2;
		threat[] = {1,1,1};
		availableForSupportTypes[] = {"CAS_Bombing"};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		dammageHalf[] = {"\MEUAV8B\data\ah1z_monitor_glass_ca.paa","\MEUAV8B\data\ah1z_monitor_glass_destr_co.paa"};
		dammageFull[] = {"\MEUAV8B\data\ah1z_monitor_glass_ca.paa","\MEUAV8B\data\ah1z_monitor_glass_destr_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"MEUav8b\data\av8b_glass.rvmat","MEUav8b\data\av8b_glass_damage.rvmat","MEUav8b\data\av8b_glass_damage.rvmat","MEUav8b\data\av8b_glass_in.rvmat","MEUav8b\data\av8b_glass_in_damage.rvmat","MEUav8b\data\av8b_glass_in_damage.rvmat","MEUav8b\data\av8b_int.rvmat","MEUav8b\data\av8b_int.rvmat","MEUav8b\data\av8b_int_destruct.rvmat","MEUav8b\data\av8b_ext.rvmat","MEUav8b\data\av8b_ext_damage.rvmat","MEUav8b\data\av8b_ext_destruct.rvmat"};
		};
		canBeShot = "true";
		dustEffect = "HeliDust";
		waterEffect = "HeliWater";
		memoryPointLRocket = "L raketa";
		memoryPointRRocket = "P raketa";
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
			class Left
			{
				position = "light_1_pos";
				direction = "light_1_dir";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				color[] = {0.07,0.99,0.89};
				ambient[] = {0.0085,0.0095,0.01};
				intensity = 100000;
				size = 1;
				innerAngle = 45;
				outerAngle = 90;
				coneFadeCoef = 5;
				useFlare = 1;
				flareSize = 4;
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
		class Exhausts
		{
			class Exhaust_1
			{
				position = "Exhaust_1_pos";
				direction = "nozzle_1_1";
				effect = "ExhaustsEffectJet";
			};
			class Exhaust_2
			{
				position = "Exhaust_2_pos";
				direction = "nozzle_1_2";
				effect = "ExhaustsEffectJet";
			};
			class Exhaust_3
			{
				position = "Exhaust_3_pos";
				direction = "nozzle_2_1";
				effect = "ExhaustsEffectJet";
			};
			class Exhaust_4
			{
				position = "Exhaust_4_pos";
				direction = "nozzle_2_2";
				effect = "ExhaustsEffectJet";
			};
		};
		class MFD
		{
			class statichud
			{
				enableParallax = 0;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.485,0.4};
					pos10[] = {1.225,1.1};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,0.5,0.4,1};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.4975,0.38};
					};
					class Center
					{
						type = "fixed";
						pos[] = {0.4975,"(0.383)"};
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.383};
						pos10[] = {1.47,1.483};
					};
					class ASL_Instrument
					{
						type = "rotational";
						source = "altitudeASL";
						center[] = {0.9,0.340206};
						min = 0;
						max = 20000;
						minAngle = 0;
						maxAngle = 72000;
						aspectRatio = 1.13402;
					};
					class Speed_Instrument: ASL_Instrument
					{
						source = "speed";
						center[] = {0.1,0.340206};
						max = 555.556;
						maxAngle = 7200;
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.4975,0.38};
						min = -0.5236;
						max = 0.5236;
						minAngle = 159.25;
						maxAngle = 200.75;
						aspectRatio = 1;
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.4};
						pos3[] = {0.722,0.4};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.61};
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.4975,0.38};
						pos10[] = {1.4675,1.48};
						type = "horizon";
						angle = 0;
					};
					class LevelP5: Level0
					{
						angle = 5;
					};
					class LevelM5: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
				};
				class draw
				{
					alpha = 0.4;
					color[] = {0,0.5,0.4};
					condition = "on";
					class PlaneW
					{
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						points[] = {{"PlaneW",{-0.08,0},1},{"PlaneW",{-0.03,0},1},{"PlaneW",{-0.015,0.0283784},1},{"PlaneW",{0,0},1},{"PlaneW",{0.015,0.0283784},1},{"PlaneW",{0.03,0},1},{"PlaneW",{0.08,0},1}};
					};
					class HorizonBankRot
					{
						type = "line";
						points[] = {{"HorizonBankRot",{0,0.396907},1},{"HorizonBankRot",{0.01,0.419588},1},{"HorizonBankRot",{-0.01,0.419588},1},{"HorizonBankRot",{0,0.396907},1}};
					};
					class Horizont
					{
						clipTL[] = {0,0};
						clipBR[] = {1,1};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{"Level0",{-0.2,0},1},{"Level0",{-0.05,0},1},{},{"Level0",{0.05,0},1},{"Level0",{0.2,0},1}};
							};
							class VALM_1_0
							{
								type = "text";
								source = "static";
								text = 0;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0",{-0.23,-0.025},1};
								right[] = {"Level0",{-0.13,-0.025},1};
								down[] = {"Level0",{-0.23,0.025},1};
							};
							class VALM_2_0: VALM_1_0
							{
								align = "right";
								pos[] = {"Level0",{0.22,-0.025},1};
								right[] = {"Level0",{0.32,-0.025},1};
								down[] = {"Level0",{0.22,0.025},1};
							};
							class LevelM5: Level0
							{
								type = "line";
								points[] = {{"LevelM5",{-0.2,-0.03},1},{"LevelM5",{-0.2,0},1},{"LevelM5",{-0.15,0},1},{},{"LevelM5",{-0.1,0},1},{"LevelM5",{-0.05,0},1},{},{"LevelM5",{0.05,0},1},{"LevelM5",{0.1,0},1},{},{"LevelM5",{0.15,0},1},{"LevelM5",{0.2,0},1},{"LevelM5",{0.2,-0.03},1}};
							};
							class VALM_1_5
							{
								type = "text";
								source = "static";
								text = -5;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5",{-0.23,-0.085},1};
								right[] = {"LevelM5",{-0.13,-0.085},1};
								down[] = {"LevelM5",{-0.23,-0.035},1};
							};
							class VALM_2_5: VALM_1_5
							{
								align = "right";
								pos[] = {"LevelM5",{0.22,-0.085},1};
								right[] = {"LevelM5",{0.32,-0.085},1};
								down[] = {"LevelM5",{0.22,-0.035},1};
							};
							class LevelP5: Level0
							{
								type = "line";
								points[] = {{"LevelP5",{-0.2,0.03},1},{"LevelP5",{-0.2,0},1},{"LevelP5",{-0.05,0},1},{},{"LevelP5",{0.05,0},1},{"LevelP5",{0.2,0},1},{"LevelP5",{0.2,0.03},1}};
							};
							class VALP_1_5
							{
								type = "text";
								source = "static";
								text = "5";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5",{-0.23,0.035},1};
								right[] = {"LevelP5",{-0.13,0.035},1};
								down[] = {"LevelP5",{-0.23,0.085},1};
							};
							class VALP_2_5: VALP_1_5
							{
								align = "right";
								pos[] = {"LevelP5",{0.22,0.035},1};
								right[] = {"LevelP5",{0.32,0.035},1};
								down[] = {"LevelP5",{0.22,0.085},1};
							};
							class LevelM10: Level0
							{
								type = "line";
								points[] = {{"LevelM10",{-0.2,-0.03},1},{"LevelM10",{-0.2,0},1},{"LevelM10",{-0.15,0},1},{},{"LevelM10",{-0.1,0},1},{"LevelM10",{-0.05,0},1},{},{"LevelM10",{0.05,0},1},{"LevelM10",{0.1,0},1},{},{"LevelM10",{0.15,0},1},{"LevelM10",{0.2,0},1},{"LevelM10",{0.2,-0.03},1}};
							};
							class VALM_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10",{-0.23,-0.085},1};
								right[] = {"LevelM10",{-0.13,-0.085},1};
								down[] = {"LevelM10",{-0.23,-0.035},1};
							};
							class VALM_2_10: VALM_1_10
							{
								align = "right";
								pos[] = {"LevelM10",{0.22,-0.085},1};
								right[] = {"LevelM10",{0.32,-0.085},1};
								down[] = {"LevelM10",{0.22,-0.035},1};
							};
							class LevelP10: Level0
							{
								type = "line";
								points[] = {{"LevelP10",{-0.2,0.03},1},{"LevelP10",{-0.2,0},1},{"LevelP10",{-0.05,0},1},{},{"LevelP10",{0.05,0},1},{"LevelP10",{0.2,0},1},{"LevelP10",{0.2,0.03},1}};
							};
							class VALP_1_10
							{
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10",{-0.23,0.035},1};
								right[] = {"LevelP10",{-0.13,0.035},1};
								down[] = {"LevelP10",{-0.23,0.085},1};
							};
							class VALP_2_10: VALP_1_10
							{
								align = "right";
								pos[] = {"LevelP10",{0.22,0.035},1};
								right[] = {"LevelP10",{0.32,0.035},1};
								down[] = {"LevelP10",{0.22,0.085},1};
							};
							class LevelM15: Level0
							{
								type = "line";
								points[] = {{"LevelM15",{-0.2,-0.03},1},{"LevelM15",{-0.2,0},1},{"LevelM15",{-0.15,0},1},{},{"LevelM15",{-0.1,0},1},{"LevelM15",{-0.05,0},1},{},{"LevelM15",{0.05,0},1},{"LevelM15",{0.1,0},1},{},{"LevelM15",{0.15,0},1},{"LevelM15",{0.2,0},1},{"LevelM15",{0.2,-0.03},1}};
							};
							class VALM_1_15
							{
								type = "text";
								source = "static";
								text = -15;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15",{-0.23,-0.085},1};
								right[] = {"LevelM15",{-0.13,-0.085},1};
								down[] = {"LevelM15",{-0.23,-0.035},1};
							};
							class VALM_2_15: VALM_1_15
							{
								align = "right";
								pos[] = {"LevelM15",{0.22,-0.085},1};
								right[] = {"LevelM15",{0.32,-0.085},1};
								down[] = {"LevelM15",{0.22,-0.035},1};
							};
							class LevelP15: Level0
							{
								type = "line";
								points[] = {{"LevelP15",{-0.2,0.03},1},{"LevelP15",{-0.2,0},1},{"LevelP15",{-0.05,0},1},{},{"LevelP15",{0.05,0},1},{"LevelP15",{0.2,0},1},{"LevelP15",{0.2,0.03},1}};
							};
							class VALP_1_15
							{
								type = "text";
								source = "static";
								text = "15";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15",{-0.23,0.035},1};
								right[] = {"LevelP15",{-0.13,0.035},1};
								down[] = {"LevelP15",{-0.23,0.085},1};
							};
							class VALP_2_15: VALP_1_15
							{
								align = "right";
								pos[] = {"LevelP15",{0.22,0.035},1};
								right[] = {"LevelP15",{0.32,0.035},1};
								down[] = {"LevelP15",{0.22,0.085},1};
							};
							class LevelM20: Level0
							{
								type = "line";
								points[] = {{"LevelM20",{-0.2,-0.03},1},{"LevelM20",{-0.2,0},1},{"LevelM20",{-0.15,0},1},{},{"LevelM20",{-0.1,0},1},{"LevelM20",{-0.05,0},1},{},{"LevelM20",{0.05,0},1},{"LevelM20",{0.1,0},1},{},{"LevelM20",{0.15,0},1},{"LevelM20",{0.2,0},1},{"LevelM20",{0.2,-0.03},1}};
							};
							class VALM_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20",{-0.23,-0.085},1};
								right[] = {"LevelM20",{-0.13,-0.085},1};
								down[] = {"LevelM20",{-0.23,-0.035},1};
							};
							class VALM_2_20: VALM_1_20
							{
								align = "right";
								pos[] = {"LevelM20",{0.22,-0.085},1};
								right[] = {"LevelM20",{0.32,-0.085},1};
								down[] = {"LevelM20",{0.22,-0.035},1};
							};
							class LevelP20: Level0
							{
								type = "line";
								points[] = {{"LevelP20",{-0.2,0.03},1},{"LevelP20",{-0.2,0},1},{"LevelP20",{-0.05,0},1},{},{"LevelP20",{0.05,0},1},{"LevelP20",{0.2,0},1},{"LevelP20",{0.2,0.03},1}};
							};
							class VALP_1_20
							{
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20",{-0.23,0.035},1};
								right[] = {"LevelP20",{-0.13,0.035},1};
								down[] = {"LevelP20",{-0.23,0.085},1};
							};
							class VALP_2_20: VALP_1_20
							{
								align = "right";
								pos[] = {"LevelP20",{0.22,0.035},1};
								right[] = {"LevelP20",{0.32,0.035},1};
								down[] = {"LevelP20",{0.22,0.085},1};
							};
							class LevelM25: Level0
							{
								type = "line";
								points[] = {{"LevelM25",{-0.2,-0.03},1},{"LevelM25",{-0.2,0},1},{"LevelM25",{-0.15,0},1},{},{"LevelM25",{-0.1,0},1},{"LevelM25",{-0.05,0},1},{},{"LevelM25",{0.05,0},1},{"LevelM25",{0.1,0},1},{},{"LevelM25",{0.15,0},1},{"LevelM25",{0.2,0},1},{"LevelM25",{0.2,-0.03},1}};
							};
							class VALM_1_25
							{
								type = "text";
								source = "static";
								text = -25;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25",{-0.23,-0.085},1};
								right[] = {"LevelM25",{-0.13,-0.085},1};
								down[] = {"LevelM25",{-0.23,-0.035},1};
							};
							class VALM_2_25: VALM_1_25
							{
								align = "right";
								pos[] = {"LevelM25",{0.22,-0.085},1};
								right[] = {"LevelM25",{0.32,-0.085},1};
								down[] = {"LevelM25",{0.22,-0.035},1};
							};
							class LevelP25: Level0
							{
								type = "line";
								points[] = {{"LevelP25",{-0.2,0.03},1},{"LevelP25",{-0.2,0},1},{"LevelP25",{-0.05,0},1},{},{"LevelP25",{0.05,0},1},{"LevelP25",{0.2,0},1},{"LevelP25",{0.2,0.03},1}};
							};
							class VALP_1_25
							{
								type = "text";
								source = "static";
								text = "25";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25",{-0.23,0.035},1};
								right[] = {"LevelP25",{-0.13,0.035},1};
								down[] = {"LevelP25",{-0.23,0.085},1};
							};
							class VALP_2_25: VALP_1_25
							{
								align = "right";
								pos[] = {"LevelP25",{0.22,0.035},1};
								right[] = {"LevelP25",{0.32,0.035},1};
								down[] = {"LevelP25",{0.22,0.085},1};
							};
							class LevelM30: Level0
							{
								type = "line";
								points[] = {{"LevelM30",{-0.2,-0.03},1},{"LevelM30",{-0.2,0},1},{"LevelM30",{-0.15,0},1},{},{"LevelM30",{-0.1,0},1},{"LevelM30",{-0.05,0},1},{},{"LevelM30",{0.05,0},1},{"LevelM30",{0.1,0},1},{},{"LevelM30",{0.15,0},1},{"LevelM30",{0.2,0},1},{"LevelM30",{0.2,-0.03},1}};
							};
							class VALM_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30",{-0.23,-0.085},1};
								right[] = {"LevelM30",{-0.13,-0.085},1};
								down[] = {"LevelM30",{-0.23,-0.035},1};
							};
							class VALM_2_30: VALM_1_30
							{
								align = "right";
								pos[] = {"LevelM30",{0.22,-0.085},1};
								right[] = {"LevelM30",{0.32,-0.085},1};
								down[] = {"LevelM30",{0.22,-0.035},1};
							};
							class LevelP30: Level0
							{
								type = "line";
								points[] = {{"LevelP30",{-0.2,0.03},1},{"LevelP30",{-0.2,0},1},{"LevelP30",{-0.05,0},1},{},{"LevelP30",{0.05,0},1},{"LevelP30",{0.2,0},1},{"LevelP30",{0.2,0.03},1}};
							};
							class VALP_1_30
							{
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30",{-0.23,0.035},1};
								right[] = {"LevelP30",{-0.13,0.035},1};
								down[] = {"LevelP30",{-0.23,0.085},1};
							};
							class VALP_2_30: VALP_1_30
							{
								align = "right";
								pos[] = {"LevelP30",{0.22,0.035},1};
								right[] = {"LevelP30",{0.32,0.035},1};
								down[] = {"LevelP30",{0.22,0.085},1};
							};
							class LevelM35: Level0
							{
								type = "line";
								points[] = {{"LevelM35",{-0.2,-0.03},1},{"LevelM35",{-0.2,0},1},{"LevelM35",{-0.15,0},1},{},{"LevelM35",{-0.1,0},1},{"LevelM35",{-0.05,0},1},{},{"LevelM35",{0.05,0},1},{"LevelM35",{0.1,0},1},{},{"LevelM35",{0.15,0},1},{"LevelM35",{0.2,0},1},{"LevelM35",{0.2,-0.03},1}};
							};
							class VALM_1_35
							{
								type = "text";
								source = "static";
								text = -35;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35",{-0.23,-0.085},1};
								right[] = {"LevelM35",{-0.13,-0.085},1};
								down[] = {"LevelM35",{-0.23,-0.035},1};
							};
							class VALM_2_35: VALM_1_35
							{
								align = "right";
								pos[] = {"LevelM35",{0.22,-0.085},1};
								right[] = {"LevelM35",{0.32,-0.085},1};
								down[] = {"LevelM35",{0.22,-0.035},1};
							};
							class LevelP35: Level0
							{
								type = "line";
								points[] = {{"LevelP35",{-0.2,0.03},1},{"LevelP35",{-0.2,0},1},{"LevelP35",{-0.05,0},1},{},{"LevelP35",{0.05,0},1},{"LevelP35",{0.2,0},1},{"LevelP35",{0.2,0.03},1}};
							};
							class VALP_1_35
							{
								type = "text";
								source = "static";
								text = "35";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35",{-0.23,0.035},1};
								right[] = {"LevelP35",{-0.13,0.035},1};
								down[] = {"LevelP35",{-0.23,0.085},1};
							};
							class VALP_2_35: VALP_1_35
							{
								align = "right";
								pos[] = {"LevelP35",{0.22,0.035},1};
								right[] = {"LevelP35",{0.32,0.035},1};
								down[] = {"LevelP35",{0.22,0.085},1};
							};
							class LevelM40: Level0
							{
								type = "line";
								points[] = {{"LevelM40",{-0.2,-0.03},1},{"LevelM40",{-0.2,0},1},{"LevelM40",{-0.15,0},1},{},{"LevelM40",{-0.1,0},1},{"LevelM40",{-0.05,0},1},{},{"LevelM40",{0.05,0},1},{"LevelM40",{0.1,0},1},{},{"LevelM40",{0.15,0},1},{"LevelM40",{0.2,0},1},{"LevelM40",{0.2,-0.03},1}};
							};
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40",{-0.23,-0.085},1};
								right[] = {"LevelM40",{-0.13,-0.085},1};
								down[] = {"LevelM40",{-0.23,-0.035},1};
							};
							class VALM_2_40: VALM_1_40
							{
								align = "right";
								pos[] = {"LevelM40",{0.22,-0.085},1};
								right[] = {"LevelM40",{0.32,-0.085},1};
								down[] = {"LevelM40",{0.22,-0.035},1};
							};
							class LevelP40: Level0
							{
								type = "line";
								points[] = {{"LevelP40",{-0.2,0.03},1},{"LevelP40",{-0.2,0},1},{"LevelP40",{-0.05,0},1},{},{"LevelP40",{0.05,0},1},{"LevelP40",{0.2,0},1},{"LevelP40",{0.2,0.03},1}};
							};
							class VALP_1_40
							{
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40",{-0.23,0.035},1};
								right[] = {"LevelP40",{-0.13,0.035},1};
								down[] = {"LevelP40",{-0.23,0.085},1};
							};
							class VALP_2_40: VALP_1_40
							{
								align = "right";
								pos[] = {"LevelP40",{0.22,0.035},1};
								right[] = {"LevelP40",{0.32,0.035},1};
								down[] = {"LevelP40",{0.22,0.085},1};
							};
							class LevelM45: Level0
							{
								type = "line";
								points[] = {{"LevelM45",{-0.2,-0.03},1},{"LevelM45",{-0.2,0},1},{"LevelM45",{-0.15,0},1},{},{"LevelM45",{-0.1,0},1},{"LevelM45",{-0.05,0},1},{},{"LevelM45",{0.05,0},1},{"LevelM45",{0.1,0},1},{},{"LevelM45",{0.15,0},1},{"LevelM45",{0.2,0},1},{"LevelM45",{0.2,-0.03},1}};
							};
							class VALM_1_45
							{
								type = "text";
								source = "static";
								text = -45;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45",{-0.23,-0.085},1};
								right[] = {"LevelM45",{-0.13,-0.085},1};
								down[] = {"LevelM45",{-0.23,-0.035},1};
							};
							class VALM_2_45: VALM_1_45
							{
								align = "right";
								pos[] = {"LevelM45",{0.22,-0.085},1};
								right[] = {"LevelM45",{0.32,-0.085},1};
								down[] = {"LevelM45",{0.22,-0.035},1};
							};
							class LevelP45: Level0
							{
								type = "line";
								points[] = {{"LevelP45",{-0.2,0.03},1},{"LevelP45",{-0.2,0},1},{"LevelP45",{-0.05,0},1},{},{"LevelP45",{0.05,0},1},{"LevelP45",{0.2,0},1},{"LevelP45",{0.2,0.03},1}};
							};
							class VALP_1_45
							{
								type = "text";
								source = "static";
								text = "45";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45",{-0.23,0.035},1};
								right[] = {"LevelP45",{-0.13,0.035},1};
								down[] = {"LevelP45",{-0.23,0.085},1};
							};
							class VALP_2_45: VALP_1_45
							{
								align = "right";
								pos[] = {"LevelP45",{0.22,0.035},1};
								right[] = {"LevelP45",{0.32,0.035},1};
								down[] = {"LevelP45",{0.22,0.085},1};
							};
							class LevelM50: Level0
							{
								type = "line";
								points[] = {{"LevelM50",{-0.2,-0.03},1},{"LevelM50",{-0.2,0},1},{"LevelM50",{-0.15,0},1},{},{"LevelM50",{-0.1,0},1},{"LevelM50",{-0.05,0},1},{},{"LevelM50",{0.05,0},1},{"LevelM50",{0.1,0},1},{},{"LevelM50",{0.15,0},1},{"LevelM50",{0.2,0},1},{"LevelM50",{0.2,-0.03},1}};
							};
							class VALM_1_50
							{
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50",{-0.23,-0.085},1};
								right[] = {"LevelM50",{-0.13,-0.085},1};
								down[] = {"LevelM50",{-0.23,-0.035},1};
							};
							class VALM_2_50: VALM_1_50
							{
								align = "right";
								pos[] = {"LevelM50",{0.22,-0.085},1};
								right[] = {"LevelM50",{0.32,-0.085},1};
								down[] = {"LevelM50",{0.22,-0.035},1};
							};
							class LevelP50: Level0
							{
								type = "line";
								points[] = {{"LevelP50",{-0.2,0.03},1},{"LevelP50",{-0.2,0},1},{"LevelP50",{-0.05,0},1},{},{"LevelP50",{0.05,0},1},{"LevelP50",{0.2,0},1},{"LevelP50",{0.2,0.03},1}};
							};
							class VALP_1_50
							{
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50",{-0.23,0.035},1};
								right[] = {"LevelP50",{-0.13,0.035},1};
								down[] = {"LevelP50",{-0.23,0.085},1};
							};
							class VALP_2_50: VALP_1_50
							{
								align = "right";
								pos[] = {"LevelP50",{0.22,0.035},1};
								right[] = {"LevelP50",{0.32,0.035},1};
								down[] = {"LevelP50",{0.22,0.085},1};
							};
						};
					};
					class PlaneHeading
					{
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						points[] = {{"Velocity",{0,-0.0189189},1},{"Velocity",{0.014,-0.0132432},1},{"Velocity",{0.02,0},1},{"Velocity",{0.014,0.0132432},1},{"Velocity",{0,0.0189189},1},{"Velocity",{-0.014,0.0132432},1},{"Velocity",{-0.02,0},1},{"Velocity",{-0.014,-0.0132432},1},{"Velocity",{0,-0.0189189},1},{},{"Velocity",{0.04,0},1},{"Velocity",{0.02,0},1},{},{"Velocity",{-0.04,0},1},{"Velocity",{-0.02,0},1},{},{"Velocity",{0,-0.0378378},1},{"Velocity",{0,-0.0189189},1},{}};
					};
					class Static
					{
						clipTL[] = {0,0.1};
						clipBR[] = {1,0};
						type = "line";
						points[] = {{{0.21,0.52},1},{{0.19,0.5},1},{{0.21,0.48},1},{},{{0.18,0.2},1},{{0.18,0.85},1},{},{{0.79,0.52},1},{{0.81,0.5},1},{{0.79,0.48},1},{},{{0.82,0.2},1},{{0.82,0.85},1},{},{{0.52,"0.08+0.01"},1},{{0.5,"0.06+0.01"},1},{{0.48,"0.08+0.01"},1},{},{{0.2,"0.055+0.01"},1},{{0.8,"0.055+0.01"},1},{}};
					};
					class SpeedNumberbox
					{
						class Text
						{
							type = "text";
							source = "static";
							text = "SPD";
							align = "right";
							scale = 1;
							pos[] = {{0.2,0.311856},1};
							right[] = {{0.26,0.311856},1};
							down[] = {{0.2,0.368557},1};
						};
						class Box
						{
							type = "line";
							points[] = {{{0.18,0.368557},1},{{-1,0.368557},1},{{-1,0.311856},1},{{0.18,0.311856},1},{{0.18,0.368557},1}};
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "center";
						scale = 1;
						pos[] = {{0.1,0.311856},1};
						right[] = {{0.16,0.311856},1};
						down[] = {{0.1,0.368557},1};
					};
					class AltNumberASL
					{
						class Text
						{
							type = "text";
							source = "static";
							text = "ASL";
							align = "left";
							scale = 1;
							pos[] = {{0.8,0.311856},1};
							right[] = {{0.86,0.311856},1};
							down[] = {{0.8,0.368557},1};
						};
						class Box
						{
							type = "line";
							points[] = {{{0.82,0.368557},1},{{1,0.368557},1},{{1,0.311856},1},{{0.82,0.311856},1},{{0.82,0.368557},1}};
						};
					};
					class AltNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {{0.9,0.311856},1};
						right[] = {{0.96,0.311856},1};
						down[] = {{0.9,0.368557},1};
					};
					class AltNumberAGL
					{
						class Text
						{
							type = "text";
							source = "static";
							text = "AGL";
							align = "left";
							scale = 1;
							pos[] = {{0.8,0.53866},1};
							right[] = {{0.86,0.53866},1};
							down[] = {{0.8,0.595361},1};
						};
						class Box
						{
							type = "line";
							points[] = {{{0.82,0.595361},1},{{1,0.595361},1},{{1,0.53866},1},{{0.82,0.53866},1},{{0.82,0.595361},1}};
						};
						class AltNumber
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.9,0.53866},1};
							right[] = {{0.96,0.53866},1};
							down[] = {{0.9,0.595361},1};
						};
					};
					class Gear
					{
						condition = "ils";
						color[] = {0,0.125,0.1};
						class Text
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "left";
							scale = 1;
							pos[] = {{0.99,0.822165},1};
							right[] = {{1.05,0.822165},1};
							down[] = {{0.99,0.878866},1};
						};
					};
					class Flaps
					{
						condition = "flaps";
						color[] = {0,0.125,0.1};
						class Text
						{
							type = "text";
							source = "static";
							text = "FLAPS";
							align = "left";
							scale = 1;
							pos[] = {{0.99,0.878866},1};
							right[] = {{1.05,0.878866},1};
							down[] = {{0.99,0.935567},1};
						};
					};
					class Lights
					{
						condition = "lights";
						color[] = {0,0.125,0.1};
						class Text
						{
							type = "text";
							source = "static";
							text = "LIGHTS";
							align = "right";
							scale = 1;
							pos[] = {{0.01,0.822165},1};
							right[] = {{0.07,0.822165},1};
							down[] = {{0.01,0.878866},1};
						};
					};
					class CollisionLights
					{
						condition = "collisionlights";
						color[] = {0,0.125,0.1};
						class Text
						{
							type = "text";
							source = "static";
							text = "ANTI-COL";
							align = "right";
							scale = 1;
							pos[] = {{0.01,0.878866},1};
							right[] = {{0.07,0.878866},1};
							down[] = {{0.01,0.935567},1};
						};
					};
					class Stall
					{
						condition = "stall";
						color[] = {1,0,0};
						blinkingPattern[] = {0.2,0.2};
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "STALL";
							align = "center";
							scale = 1;
							pos[] = {{0.5,0.204124},1};
							right[] = {{0.56,0.204124},1};
							down[] = {{0.5,0.260825},1};
						};
					};
					class Ammo
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {{0.5,0.822165},1};
						right[] = {{0.56,0.822165},1};
						down[] = {{0.5,0.878866},1};
					};
					class Weapons
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {{0.5,0.878866},1};
						right[] = {{0.56,0.878866},1};
						down[] = {{0.5,0.935567},1};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "Heading";
						sourceScale = 0.1;
						top = 0.2;
						center = 0.5;
						bottom = 0.8;
						lineXleft = 0.102062;
						lineYright = 0.0907216;
						lineXleftMajor = 0.102062;
						lineYrightMajor = 0.0793814;
						majorLineEach = 5;
						numberEach = 5;
						step = 0.2;
						StepSize = 0.03;
						align = "center";
						scale = 1;
						pos[] = {0.2,0.0198454};
						right[] = {0.26,0.0198454};
						down[] = {0.2,0.0765464};
					};
					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = {0,0};
							clipBR[] = {1,1};
							class ILS
							{
								type = "line";
								points[] = {{"ILS_W",{-0.24,0},1},{"ILS_W",{0.24,0},1},{},{"ILS_W",{0,0.0227027},1},{"ILS_W",{0,-0.0227027},1},{},{"ILS_W",{0.12,0.0227027},1},{"ILS_W",{0.12,-0.0227027},1},{},{"ILS_W",{0.24,0.0227027},1},{"ILS_W",{0.24,-0.0227027},1},{},{"ILS_W",{-0.12,0.0227027},1},{"ILS_W",{-0.12,-0.0227027},1},{},{"ILS_W",{-0.24,0.0227027},1},{"ILS_W",{-0.24,-0.0227027},1},{},{"ILS_H",{0,-0.227027},1},{"ILS_H",{0,0.227027},1},{},{"ILS_H",{0.024,0},1},{"ILS_H",{-0.024,0},1},{},{"ILS_H",{0.024,0.113514},1},{"ILS_H",{-0.024,0.113514},1},{},{"ILS_H",{0.024,0.227027},1},{"ILS_H",{-0.024,0.227027},1},{},{"ILS_H",{0.024,-0.113514},1},{"ILS_H",{-0.024,-0.113514},1},{},{"ILS_H",{0.024,-0.227027},1},{"ILS_H",{-0.024,-0.227027},1}};
							};
						};
					};
				};
			};
			class parallaxhud
			{
				enableParallax = 1;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.485,0.4};
					pos10[] = {1.225,1.1};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,0.5,0.4,1};
				class bones
				{
					class WeaponAim: Pos10Vector
					{
						source = "weapon";
					};
					class Target: Pos10Vector
					{
						source = "target";
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.4};
						pos10[] = {1.24,1.1};
					};
				};
				class draw
				{
					class RadarTargets
					{
						type = "radar";
						pos0[] = {0.485,0.4};
						pos10[] = {1.225,1.1};
						points[] = {{{-0.05,-0.0472973},1},{{0.05,-0.0472973},1},{{0.05,0.0472973},1},{{-0.05,0.0472973},1},{{-0.05,-0.0472973},1}};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							points[] = {{"WeaponAim",{0.01,0},1},{"WeaponAim",{-0.01,0},1},{},{"WeaponAim",{0,0.00945946},1},{"WeaponAim",{0,-0.00945946},1},{},{"WeaponAim",{0,-0.0662162},1},{"WeaponAim",{0.049,-0.0463514},1},{"WeaponAim",{0.07,0},1},{"WeaponAim",{0.049,0.0463514},1},{"WeaponAim",{0,0.0662162},1},{"WeaponAim",{-0.049,0.0463514},1},{"WeaponAim",{-0.07,0},1},{"WeaponAim",{-0.049,-0.0463514},1},{"WeaponAim",{0,-0.0662162},1},{},{"WeaponAim",{0,-0.132432},1},{"WeaponAim",{0.07,-0.115216},1},{"WeaponAim",{0.1218,-0.0662162},1},{"WeaponAim",{0.14,0},1},{"WeaponAim",{0.1218,0.0662162},1},{"WeaponAim",{0.07,0.115216},1},{"WeaponAim",{0,0.132432},1},{"WeaponAim",{-0.07,0.115216},1},{"WeaponAim",{-0.1218,0.0662162},1},{"WeaponAim",{-0.14,0},1},{"WeaponAim",{-0.1218,-0.0662162},1},{"WeaponAim",{-0.07,-0.115216},1},{"WeaponAim",{0,-0.132432},1},{},{"WeaponAim",{0,-0.132432},1},{"WeaponAim",{0,-0.151351},1},{},{"WeaponAim",{-0.07,-0.11469},1},{"WeaponAim",{-0.08,-0.131074},1},{},{"WeaponAim",{-0.121244,-0.0662162},1},{"WeaponAim",{-0.138564,-0.0756757},1},{},{"WeaponAim",{-0.14,5.78881e-009},1},{"WeaponAim",{-0.16,6.61578e-009},1},{},{"WeaponAim",{-0.121244,0.0662162},1},{"WeaponAim",{-0.138564,0.0756757},1},{},{"WeaponAim",{-0.07,0.11469},1},{"WeaponAim",{-0.08,0.131074},1},{},{"WeaponAim",{1.22392e-008,0.132432},1},{"WeaponAim",{1.39876e-008,0.151351},1},{},{"WeaponAim",{0.07,0.11469},1},{"WeaponAim",{0.08,0.131074},1},{},{"WeaponAim",{0.121244,0.0662162},1},{"WeaponAim",{0.138564,0.0756757},1},{},{"WeaponAim",{0.14,-1.57924e-009},1},{"WeaponAim",{0.16,-1.80485e-009},1},{},{"WeaponAim",{0.121244,-0.0662162},1},{"WeaponAim",{0.138564,-0.0756757},1},{},{"WeaponAim",{0.07,-0.11469},1},{"WeaponAim",{0.08,-0.131074},1},{}};
						};
					};
					class Bomb
					{
						condition = "bomb";
						class Circle
						{
							type = "line";
							points[] = {{"WeaponAim",{0,-0.0945946},1},{"WeaponAim",{0.05,-0.0822973},1},{"WeaponAim",{0.087,-0.0472973},1},{"WeaponAim",{0.1,0},1},{"WeaponAim",{0.087,0.0472973},1},{"WeaponAim",{0.05,0.0822973},1},{"WeaponAim",{0,0.0945946},1},{"WeaponAim",{-0.05,0.0822973},1},{"WeaponAim",{-0.087,0.0472973},1},{"WeaponAim",{-0.1,0},1},{"WeaponAim",{-0.087,-0.0472973},1},{"WeaponAim",{-0.05,-0.0822973},1},{"WeaponAim",{0,-0.0945946},1},{},{"Velocity",0.001,"WeaponAim",{0,0},1},{"Velocity",{0,0},1},{},{"Target",{0,-0.0662162},1},{"Target",{0.07,0},1},{"Target",{0,0.0662162},1},{"Target",{-0.07,0},1},{"Target",{0,-0.0662162},1}};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							points[] = {{"WeaponAim",{0,-0.236486},1},{"WeaponAim",{0.125,-0.205743},1},{"WeaponAim",{0.2175,-0.118243},1},{"WeaponAim",{0.25,0},1},{"WeaponAim",{0.2175,0.118243},1},{"WeaponAim",{0.125,0.205743},1},{"WeaponAim",{0,0.236486},1},{"WeaponAim",{-0.125,0.205743},1},{"WeaponAim",{-0.2175,0.118243},1},{"WeaponAim",{-0.25,0},1},{"WeaponAim",{-0.2175,-0.118243},1},{"WeaponAim",{-0.125,-0.205743},1},{"WeaponAim",{0,-0.236486},1},{},{"Target",{0,-0.0662162},1},{"Target",{0.07,0},1},{"Target",{0,0.0662162},1},{"Target",{-0.07,0},1},{"Target",{0,-0.0662162},1}};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							points[] = {{"WeaponAim",{0,-0.17027},1},{"WeaponAim",{0.09,-0.148135},1},{"WeaponAim",{0.1566,-0.0851351},1},{"WeaponAim",{0.18,0},1},{"WeaponAim",{0.1566,0.0851351},1},{"WeaponAim",{0.09,0.148135},1},{"WeaponAim",{0,0.17027},1},{"WeaponAim",{-0.09,0.148135},1},{"WeaponAim",{-0.1566,0.0851351},1},{"WeaponAim",{-0.18,0},1},{"WeaponAim",{-0.1566,-0.0851351},1},{"WeaponAim",{-0.09,-0.148135},1},{"WeaponAim",{0,-0.17027},1},{},{"Target",{0,-0.0662162},1},{"Target",{0.07,0},1},{"Target",{0,0.0662162},1},{"Target",{-0.07,0},1},{"Target",{0,-0.0662162},1}};
						};
					};
					class Rockets
					{
						condition = "Rocket";
						class Circle
						{
							type = "line";
							points[] = {{"WeaponAim",{0.01,0},1},{"WeaponAim",{-0.01,0},1},{},{"WeaponAim",{0,0.00945946},1},{"WeaponAim",{0,-0.00945946},1},{},{"WeaponAim",{0,-0.113514},1},{"WeaponAim",{0.06,-0.0987568},1},{"WeaponAim",{0.1044,-0.0567568},1},{"WeaponAim",{0.12,0},1},{"WeaponAim",{0.1044,0.0567568},1},{"WeaponAim",{0.06,0.0987568},1},{"WeaponAim",{0,0.113514},1},{"WeaponAim",{-0.06,0.0987568},1},{"WeaponAim",{-0.1044,0.0567568},1},{"WeaponAim",{-0.12,0},1},{"WeaponAim",{-0.1044,-0.0567568},1},{"WeaponAim",{-0.06,-0.0987568},1},{"WeaponAim",{0,-0.113514},1},{}};
						};
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Greenlight1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class VTOL
			{
				source = "user";
				animPeriod = 2.5;
			};
			class Muzzle_flash
			{
				source = "machinegun";
				weapon = "MEU_gatling_25mm";
			};
		};
		class UserActions
		{
			class Greenlighton
			{
				displayName = "<t color='#008000'>Formation Lights On";
				position = "zamerny";
				radius = 6;
				condition = "this animationPhase ""Greenlightstart"" < 0.5 && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""Greenlightstart"",1];";
				animPeriod = 0;
				onlyforplayer = 1;
				priority = -7;
			};
			class Greenlightoff
			{
				displayName = "<t color='#008000'>Formation Lights Off";
				position = "zamerny";
				radius = 6;
				condition = "this animationPhase ""Greenlightstart"" > 0.5 && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""Greenlightstart"",0];";
				animPeriod = 0;
				onlyforplayer = 1;
				priority = -7;
			};
		};
		class Library
		{
			libTextDesc = "MEU AV8B2";
		};
		insideSoundCoef = 0.05;
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"meuAV8b\ext\ext-jetair-cabine-close1",0.056234132,1};
		soundGetOut[] = {"meuAV8b\ext\ext-jetair-cabine-open1",0.056234132,1,30};
		soundDammage[] = {"meuAV8b\int\alarm_loop1",1,1};
		soundEngineOnInt[] = {"meuAV8b\int\int-av8b-start-1",0.56234133,1};
		soundEngineOnExt[] = {"meuAV8b\ext\ext-av8b-stop-1",0.7943282,1,700};
		soundEngineOffInt[] = {"meuAV8b\int\int-av8b-stop-1",0.56234133,1};
		soundEngineOffExt[] = {"meuAV8b\ext\ext-av8b-stop-1",0.7943282,1,700};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.8,1,2};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.8,1.5,2};
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_01\gear_up",0.7943282,1,150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_01\gear_down",0.7943282,1,150};
		soundFlapsUp[] = {"meuAV8b\ext\ext-jetair-flaps",0.63095737,1,100};
		soundFlapsDown[] = {"meuAV8b\ext\ext-jetair-flaps",0.63095737,1,100};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"meuAV8b\ext\ext-jetair-engine-low1",2.5118864,1,1300};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "engineOn*camPos*(rpm factor[0.85, 0])";
			};
			class EngineHighOut
			{
				sound[] = {"meuAV8b\ext\ext-jetair-engine-high5",2.5118864,1.3,1600};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.55, 1.0])";
			};
			class ForsageOut
			{
				sound[] = {"meuAV8b\ext\ext-av8b-forsage-1",3.1622777,1.1,2000};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.5, 1.0])";
				cone[] = {3.14,3.92,2,0.4};
			};
			class WindNoiseOut
			{
				sound[] = {"meuAV8b\ext\ext-jetair-wind1",1,1,100};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[] = {"meuAV8b\int\int-av8b-engine-low",1,1};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
			};
			class EngineHighIn
			{
				sound[] = {"meuAV8b\int\int-av8b-engine",1,1};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
			};
			class ForsageIn
			{
				sound[] = {"meuAV8b\int\int-av8b-forsage-1",0.31622776,1.1};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = {"meuAV8b\int\int-jetair-wind1",0.4466836,1};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = "+0";
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = "+0";
					initFov = 0.1;
					minFov = 0.0022;
					maxFov = 1.1;
					horizontallyStabilized = 1;
					visionMode[] = {"Normal","NVG","TI"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName = "M";
					initFov = 0.1;
					minFov = 0.1;
					maxFov = 0.1;
					horizontallyStabilized = 1;
					gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "N";
					initFov = 0.0286;
					minFov = 0.0286;
					maxFov = 0.0286;
					horizontallyStabilized = 1;
					gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
				};
				class Far: Wide
				{
					opticsDisplayName = "F";
					initFov = 0.019;
					minFov = 0.019;
					maxFov = 0.019;
					horizontallyStabilized = 1;
					gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
				};
				showMiniMapInOptics = 1;
				showUAVViewpInOptics = 0;
				showSlingLoadManagerInOptics = 0;
			};
			minTurn = -40;
			maxTurn = 40;
			initTurn = 0;
			minElev = -10;
			maxElev = 100;
			initElev = 0;
			maxXRotSpeed = 0.4;
			maxYRotSpeed = 0.4;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
		memoryPointDriverOptics = "slingcamera";
		unitInfoType = "RscOptics_AV_pilot";
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName = "WingVortices";
				position = "body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "body_vapour_L_S";
			};
			class BodyRight
			{
				effectName = "BodyVortices";
				position = "body_vapour_R_S";
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyDriver;
	class ProxyWeapon;
	class ProxyAGM65: ProxyWeapon
	{
		model = "\MEUAV8B\AGM65";
		simulation = "maverickweapon";
	};
	class Proxygbu12: ProxyWeapon
	{
		model = "\MEUAV8B\GBU12";
		simulation = "maverickweapon";
	};
	class ProxyAIM9XSidewinder: ProxyWeapon
	{
		model = "\MEUAV8B\AIM9XSidewinder";
		simulation = "maverickweapon";
	};
};
class cfgMods
{
	author = "76561197982468872";
	timepacked = "1441644308";
};
//};
