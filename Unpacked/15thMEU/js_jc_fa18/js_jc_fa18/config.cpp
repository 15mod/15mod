////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon Feb 02 07:21:47 2015 : Created on Mon Feb 02 07:21:47 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class js_jc_fa18 : config.bin{
class CfgPatches
{
	class JS_JC_FA18
	{
		units[] = {"JS_JC_FA18E","JS_JC_FA18F","JS_JC_Pilot"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F_Gamma"};
	};
};
class CfgAmmo
{
	class MissileBase;
	class LaserBombCore;
	class BombCore;
	class js_a_fa18_Aim9x: MissileBase
	{
		model = "\js_jc_fa18\stores\m_aim9x";
		proxyShape = "\js_jc_fa18\stores\m_aim9x";
		hit = 200;
		indirectHit = 85;
		maxSpeed = 828;
		indirectHitRange = 10;
		maneuvrability = 27;
		simulationStep = 0.002;
		airFriction = 0.05;
		sideAirFriction = 0.1;
		airLock = 2;
		irLock = 1;
		laserLock = 0;
		nvLock = 0;
		artilleryLock = 0;
		lockType = 0;
		weaponLockSystem = "2 + 16";
		missileLockCone = 150;
		cmimmunity = 0.8;
		timeToLive = 40;
		trackOversteer = 1;
		trackLead = 1;
		initTime = 0;
		thrustTime = 5;
		thrust = 240;
		fuseDistance = 100;
		cost = 1500;
		whistleDist = 20;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "FX_FA18_Missile_AA";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
	};
	class js_a_fa18_aim120c: MissileBase
	{
		model = "\js_jc_fa18\stores\m_aim120c";
		proxyShape = "\js_jc_fa18\stores\m_aim120c";
		hit = 300;
		indirectHit = 200;
		indirectHitRange = 10;
		maxSpeed = 850;
		airFriction = 0.078;
		sideAirFriction = 0.2;
		maneuvrability = 30;
		simulationStep = 0.002;
		airLock = 2;
		irLock = 1;
		laserLock = 0;
		nvLock = 0;
		artilleryLock = 0;
		lockType = 0;
		cmimmunity = 0.8;
		trackOversteer = 1;
		trackLead = 1;
		cost = 1000;
		timeToLive = 20;
		initTime = 0.25;
		thrustTime = 30.5;
		thrust = 385;
		fuseDistance = 750;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "FX_FA18_Missile_AA";
	};
	class js_a_fa18_Maverick: MissileBase
	{
		model = "\js_jc_fa18\stores\m_agm65d.p3d";
		proxyShape = "\js_jc_fa18\stores\m_agm65d.p3d";
		hit = 1400;
		indirectHit = 250;
		indirectHitRange = 10.5;
		maxSpeed = 400;
		maneuvrability = 14;
		simulationStep = 0.002;
		airFriction = 0.04;
		sideAirFriction = 0.08;
		airLock = 0;
		irLock = 1;
		laserLock = 1;
		nvLock = 0;
		artilleryLock = 0;
		lockType = 0;
		cmimmunity = 0.95;
		trackOversteer = 1;
		whistleDist = 8;
		maxControlRange = 11000;
		manualControl = 1;
		cost = 1000;
		timeToLive = 45;
		trackLead = 1;
		initTime = 0.15;
		thrustTime = 2;
		thrust = 366;
		fuseDistance = 500;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissile = "FX_FA18_Missile_AG";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		soundHit[] = {"",1,1,1900};
		class Hiteffects
		{
			hitWater = "ImpactEffectsSmall";
		};
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
	class js_a_fa18_harpoon: MissileBase
	{
		model = "\js_jc_fa18\stores\m_agm84.p3d";
		proxyShape = "\js_jc_fa18\stores\m_agm84.p3d";
		hit = 2500;
		indirectHit = 1500;
		indirectHitRange = 10.5;
		maxSpeed = 300;
		airFriction = 0.04;
		sideAirFriction = 0.08;
		maneuvrability = 14;
		simulationStep = 0.002;
		airLock = 0;
		irLock = 1;
		laserLock = 0;
		nvLock = 0;
		artilleryLock = 0;
		lockType = 0;
		whistleDist = 8;
		maxControlRange = 11000;
		manualControl = 1;
		cost = 1000;
		trackOversteer = 1;
		timeToLive = 120;
		trackLead = 1;
		initTime = 0.35;
		thrustTime = 2;
		thrust = 366;
		fuseDistance = 500;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissile = "FX_FA18_Missile_AG";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		soundHit[] = {"",1,1,1900};
		class Hiteffects
		{
			hitWater = "ImpactEffectsSmall";
		};
		class CamShakeExplode
		{
			power = "(150*0.2)";
			duration = "((round (150^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((10 + 150^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 150;
			duration = "((round (150^0.25))*0.2 max 0.2)";
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
	class js_a_fa18_GBU12_LGB: LaserBombCore
	{
		model = "\js_jc_fa18\stores\m_gbu12fly";
		proxyShape = "\js_jc_fa18\stores\m_gbu12";
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		maneuvrability = 20;
		airLock = 0;
		irLock = 0;
		laserLock = 1;
		nvLock = 0;
		artilleryLock = 0;
		lockType = 0;
		missileLockCone = 90;
		trackOversteer = 1;
		trackLead = 0.95;
		explosionTime = 2;
		fuseDistance = 35;
		whistleDist = 24;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1",2.51189,1,2400};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_big_2",2.51189,1,2400};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_big_3",2.51189,1,2400};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1",2.51189,1,2400};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2",2.51189,1,2400};
		multiSoundHit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		explosionSoundEffect = "DefaultExplosion";
	};
	class js_a_fa18_MK82: BombCore
	{
		model = "js_jc_fa18\stores\m_mk82";
		proxyShape = "js_jc_fa18\stores\m_mk82";
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		maneuvrability = 16;
		sideAirFriction = 0.1;
		simulation = "shotRocket";
		maxSpeed = 100;
		airLock = 0;
		irLock = 0;
		laserLock = 0;
		nvLock = 0;
		artilleryLock = 0;
		lockType = 0;
		maxControlRange = 10;
		timeToLive = 120;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
		whistleDist = 24;
		cost = 1000;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1",2.51189,1,1500};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_big_2",2.51189,1,1500};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_big_3",2.51189,1,1500};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1",2.51189,1,1500};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2",2.51189,1,1500};
		multiSoundHit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
	};
	class js_a_fa18_GBU38_JDAM: js_a_fa18_GBU12_LGB
	{
		model = "js_jc_fa18\stores\m_gbu38";
		proxyShape = "js_jc_fa18\stores\m_gbu38";
		simulation = "shotMissile";
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		airLock = 0;
		irLock = 0;
		laserLock = 1;
		nvLock = 0;
		artilleryLock = 0;
		lockType = 0;
		missileLockCone = 150;
		lockSeekRadius = 10000;
		autoSeekTarget = 1;
		cost = 1000;
	};
	class js_a_fa18_GBU32_JDAM: js_a_fa18_GBU38_JDAM
	{
		model = "js_jc_fa18\stores\m_gbu32";
		proxyShape = "js_jc_fa18\stores\m_gbu32";
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 18;
		cost = 1200;
	};
	class js_a_fa18_GBU31_JDAM: js_a_fa18_GBU38_JDAM
	{
		model = "js_jc_fa18\stores\m_gbu31";
		proxyShape = "js_jc_fa18\stores\m_gbu31";
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 25;
		cost = 1800;
	};
	class js_a_fa18_bombrack_x2: MissileBase
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		thrustTime = 0;
		thrust = 0;
		maxspeed = 0;
		timetolive = 0;
		maneuvrability = 0;
		model = "\js_jc_fa18\stores\m_bombrack_x2";
		proxyShape = "\js_jc_fa18\stores\m_bombrack_x2";
		airlock = 0;
		laserLock = 0;
		irLock = 0;
		initTime = 0;
		minRange = 0;
		minRangeProbab = 0;
		midRange = 0;
		midRangeProbab = 0;
		maxRange = 0;
		maxRangeProbab = 0;
		sideAirFriction = 0;
	};
	class js_a_fa18_altflir_pod: MissileBase
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		thrustTime = 0;
		thrust = 0;
		maxspeed = 0;
		timetolive = 0;
		maneuvrability = 0;
		model = "\js_jc_fa18\stores\m_altflir_pod.p3d";
		proxyShape = "\js_jc_fa18\stores\m_altflir_pod.p3d";
		airlock = 0;
		laserLock = 0;
		irLock = 0;
		initTime = 0;
		minRange = 0;
		minRangeProbab = 0;
		midRange = 0;
		midRangeProbab = 0;
		maxRange = 0;
		maxRangeProbab = 0;
		sideAirFriction = 0;
	};
	class js_a_fa18_wing_tank: LaserBombCore
	{
		hit = 5;
		indirectHit = 5;
		indirectHitRange = 1;
		cost = 40000000000;
		model = "\js_jc_fa18\stores\m_wing_tank";
		proxyShape = "\js_jc_fa18\stores\m_wing_tank";
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1",3.1622777,1,1400};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close",0.316228,1,50};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters",0.223872,1,75};
		airlock = 0;
		laserLock = 0;
		irLock = 0;
		initTime = 1000;
		minRange = 0;
		minRangeProbab = 0;
		midRange = 0;
		midRangeProbab = 0;
		maxRange = 0;
		maxRangeProbab = 0;
		sideAirFriction = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		class HitEffects{};
	};
	class js_a_fa18_buddy_pod: js_a_fa18_wing_tank
	{
		model = "\js_jc_fa18\stores\m_buddy_pod";
		proxyShape = "\js_jc_fa18\stores\m_buddy_pod";
	};
	class js_a_empty: MissileBase
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		thrustTime = 0;
		thrust = 0;
		maxspeed = 0;
		timetolive = 0;
		maneuvrability = 0;
		model = "\js_jc_fa18\stores\m_empty";
		proxyShape = "\js_jc_fa18\stores\m_empty";
		airlock = 0;
		laserLock = 0;
		irLock = 0;
		initTime = 0;
		minRange = 0;
		minRangeProbab = 0;
		midRange = 0;
		midRangeProbab = 0;
		maxRange = 0;
		maxRangeProbab = 0;
		sideAirFriction = 0;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class js_m_fa18_m61: VehicleMagazine
	{
		scope = 2;
		displayName = "M61A2 20mm";
		ammo = "B_20mm";
		count = 578;
		initSpeed = 1036;
		tracersEvery = 5;
		nameSound = "cannon";
	};
	class js_m_fa18_aim9x_x1: VehicleMagazine
	{
		scope = 2;
		displayName = "AIM-9X";
		displayNameShort = "AIM-9X";
		ammo = "js_a_fa18_aim9x";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 450;
		sound[] = {"A3\sounds_f\dummysound",1,1,1300};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1,20};
		nameSound = "missiles";
	};
	class js_m_fa18_aim120c_x1: VehicleMagazine
	{
		scope = 2;
		displayName = "AIM-120C";
		displayNameShort = "AIM-120C";
		count = 1;
		ammo = "js_a_fa18_aim120c";
		initSpeed = 40;
		maxLeadSpeed = 320;
		sound[] = {"A3\sounds_f\dummysound",31.6228,1,1100};
		soundFly[] = {"A3\sounds_f\dummysound",1,1.1,700};
		soundHit[] = {"A3\sounds_f\dummysound",15.848933,1,2000};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1,20};
		nameSound = "missiles";
	};
	class js_m_fa18_Maverick_x1: VehicleMagazine
	{
		scope = 2;
		displayName = "AGM-65D";
		displayNameShort = "AGM-65D";
		ammo = "js_a_fa18_Maverick";
		initSpeed = 0;
		maxLeadSpeed = 220;
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
		count = 1;
		nameSound = "missiles";
	};
	class js_m_fa18_Harpoon_x1: VehicleMagazine
	{
		scope = 2;
		displayName = "AGM-84";
		displayNameShort = "AGM-84";
		ammo = "js_a_fa18_harpoon";
		initSpeed = 0;
		maxLeadSpeed = 220;
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
		count = 1;
		nameSound = "missiles";
	};
	class js_m_fa18_GBU12_x1: VehicleMagazine
	{
		scope = 2;
		displayName = "GBU12 LGB";
		descriptionShort = "GBU12 LGB";
		displayNameShort = "GBU12 LGB";
		ammo = "js_a_fa18_GBU12_LGB";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
		count = 1;
		nameSound = "";
	};
	class js_m_fa18_MK82_x1: VehicleMagazine
	{
		scope = 2;
		displayName = "MK82";
		descriptionShort = "MK82";
		displayNameShort = "MK82";
		ammo = "js_a_fa18_MK82";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
		count = 1;
		nameSound = "";
	};
	class js_m_fa18_GBU38_JDAM_x1: VehicleMagazine
	{
		scope = 2;
		displayName = "GBU38";
		descriptionShort = "GBU38";
		displayNameShort = "GBU38";
		ammo = "js_a_fa18_GBU38_JDAM";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
		count = 1;
		nameSound = "";
	};
	class js_m_fa18_GBU32_JDAM_x1: VehicleMagazine
	{
		scope = 2;
		displayName = "GBU32";
		descriptionShort = "GBU32";
		displayNameShort = "GBU32";
		ammo = "js_a_fa18_GBU32_JDAM";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
		count = 1;
		nameSound = "";
	};
	class js_m_fa18_GBU31_JDAM_x1: VehicleMagazine
	{
		scope = 2;
		displayName = "GBU31";
		descriptionShort = "GBU31";
		displayNameShort = "GBU31";
		ammo = "js_a_fa18_GBU31_JDAM";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
		count = 1;
		nameSound = "";
	};
	class js_m_fa18_bombrack_x1: VehicleMagazine
	{
		scope = 2;
		displayName = "";
		count = 1;
		ammo = "js_a_fa18_bombrack_x2";
		initSpeed = 0;
		sound[] = {};
		reloadSound[] = {};
		nameSound = "";
	};
	class js_m_fa18_altflir_pod_x1: VehicleMagazine
	{
		scope = 2;
		displayName = "";
		count = 1;
		ammo = "js_a_fa18_altflir_pod";
		initSpeed = 0;
		sound[] = {};
		reloadSound[] = {};
		nameSound = "";
	};
	class js_m_fa18_wing_tank_x1: VehicleMagazine
	{
		scope = 2;
		displayName = "";
		count = 1;
		ammo = "js_a_fa18_wing_tank";
		initSpeed = 0;
		sound[] = {};
		reloadSound[] = {};
		nameSound = "";
	};
	class js_m_fa18_buddypod_x1: VehicleMagazine
	{
		scope = 2;
		displayName = "";
		count = 1;
		ammo = "js_a_fa18_buddy_pod";
		initSpeed = 0;
		sound[] = {};
		reloadSound[] = {};
		nameSound = "";
	};
	class js_m_fa18_empty: VehicleMagazine
	{
		scope = 2;
		displayName = "";
		count = 1;
		ammo = "js_a_empty";
		initSpeed = 0;
		sound[] = {};
		reloadSound[] = {};
		nameSound = "";
	};
	class js_m_fa18_fake_empty: VehicleMagazine
	{
		scope = 2;
		displayName = "";
		count = 1;
		ammo = "js_a_empty";
		initSpeed = 0;
		sound[] = {};
		reloadSound[] = {};
		nameSound = "";
	};
};
class CfgWeapons
{
	class CannonCore;
	class MissileLauncher;
	class SmokeLauncher;
	class RocketPods;
	class H_PilotHelmetFighter_B;
	class U_B_PilotCoveralls;
	class ItemInfo;
	class UniformItem;
	class js_w_fa18_m61: CannonCore
	{
		scope = 2;
		displayName = "M61A2 20mm";
		displayNameMagazine = "M61A2 20mm";
		shortNameMagazine = "M61A2 20mm";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		magazines[] = {"js_m_fa18_m61"};
		canLock = 2;
		ballisticsComputer = 2;
		modes[] = {"manual","close","short","medium","far"};
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "nosegun";
				directionName = "nosegun_dir";
			};
		};
		class manual: CannonCore
		{
			displayName = "M61A2 20mm";
			autoFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\gatling\gatling4",1.12202,1,1100};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			reloadTime = 0.02;
			dispersion = 0.0025;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			textureType = "fullAuto";
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 15;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
		};
	};
	class js_w_fa18_aim9xLaucher: MissileLauncher
	{
		canLock = 2;
		weaponLockDelay = 1;
		weaponLockSystem = 2;
		cmImmunity = 1;
		displayName = "AIM-9X Sidewinder";
		displayNameMagazine = "AIM-9X Sidewinder";
		shortNameMagazine = "AIM-9X";
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		minRange = 50;
		minRangeProbab = 0.6;
		midRange = 2000;
		midRangeProbab = 0.9;
		maxRange = 4000;
		maxRangeProbab = 0.7;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.12202,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.5,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		magazines[] = {"js_m_fa18_aim9x_x1"};
		holdsterAnimValue = 1;
		textureType = "semi";
	};
	class js_w_fa18_aim120cLaucher: MissileLauncher
	{
		canLock = 2;
		weaponLockDelay = 3;
		weaponLockSystem = 8;
		cmImmunity = 0.6;
		displayName = "AIM-120C AMRAAM";
		displayNameMagazine = "AIM-120C AMRAAM";
		shortNameMagazine = "AIM-120C";
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		cursorSize = 1;
		minRange = 300;
		minRangeProbab = 0.025;
		midRange = 2500;
		midRangeProbab = 0.09;
		maxRange = 9000;
		maxRangeProbab = 0.01;
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.12202,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.5,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		magazines[] = {"js_m_fa18_aim120c_x1"};
		aiRateOfFire = 5;
		aiRateOfFireDistance = 4000;
		textureType = "semi";
	};
	class js_w_fa18_MaverickLauncher: RocketPods
	{
		canLock = 2;
		autoFire = 0;
		displayName = "AGM-65D Maverick";
		displayNameMagazine = "AGM-65D Maverick";
		shortNameMagazine = "AGM-65D";
		magazines[] = {"js_m_fa18_Maverick_x1"};
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 500;
		nameSound = "MissileLauncher";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.12202,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.1,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		weaponLockDelay = 3;
		textureType = "fullAuto";
		minRange = 300;
		minRangeProbab = 0.25;
		midRange = 2500;
		midRangeProbab = 0.9;
		maxRange = 9000;
		maxRangeProbab = 0.01;
	};
	class js_w_fa18_HarpoonLauncher: RocketPods
	{
		canLock = 2;
		autoFire = 0;
		displayName = "AGM-84 Harpoon";
		displayNameMagazine = "AGM-84 Harpoon";
		shortNameMagazine = "AGM-84";
		magazines[] = {"js_m_fa18_Harpoon_x1"};
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 500;
		nameSound = "MissileLauncher";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.12202,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.1,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		weaponLockDelay = 3;
		textureType = "fullAuto";
		minRange = 300;
		minRangeProbab = 0.25;
		midRange = 2500;
		midRangeProbab = 0.9;
		maxRange = 9000;
		maxRangeProbab = 0.01;
	};
	class js_w_fa18_GBU12LGBLaucher: RocketPods
	{
		canLock = 2;
		displayName = "GBU12 LGB";
		displayNameMagazine = "GBU12 LGB";
		shortNameMagazine = "GBU12 LGB";
		magazines[] = {"js_m_fa18_GBU12_x1"};
		reloadTime = 0.1;
		magazineReloadTime = 0.5;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 500;
		nameSound = "";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		textureType = "fullAuto";
		missileLockCone = 180;
		weaponLockDelay = 1;
	};
	class js_w_fa18_Mk82BombLauncher: js_w_fa18_GBU12LGBLaucher
	{
		CanLock = 0;
		displayName = "MK82";
		displayNameMagazine = "MK82";
		shortNameMagazine = "MK82";
		magazines[] = {"js_m_fa18_MK82_x1"};
	};
	class js_w_fa18_GBU38BombLauncher: js_w_fa18_GBU12LGBLaucher
	{
		canLock = 2;
		weaponLockDelay = 0.5;
		weaponLockSystem = "2 + 8";
		cmImmunity = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		displayName = "GBU38 JDAM 500 lbs";
		displayNameMagazine = "JDAM 500 lbs";
		shortNameMagazine = "JDAM 500 lbs";
		magazines[] = {"js_m_fa18_GBU38_JDAM_x1"};
	};
	class js_w_fa18_GBU32BombLauncher: js_w_fa18_GBU12LGBLaucher
	{
		canLock = 2;
		weaponLockDelay = 3;
		cmImmunity = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		displayName = "GBU32 JDAM 1000lbs";
		displayNameMagazine = "JDAM 1000 lbs";
		shortNameMagazine = "JDAM 1000 lbs";
		magazines[] = {"js_m_fa18_GBU32_JDAM_x1"};
	};
	class js_w_fa18_GBU31BombLauncher: js_w_fa18_GBU12LGBLaucher
	{
		canLock = 2;
		weaponLockDelay = 3;
		cmImmunity = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		displayName = "GBU31 JDAM 2000 lbs";
		displayNameMagazine = "JDAM 2000 lbs";
		shortNameMagazine = "JDAM 2000 lbs";
		magazines[] = {"js_m_fa18_GBU31_JDAM_x1"};
	};
	class js_w_fa18_fueltank_holder: RocketPods
	{
		CanLock = 0;
		displayName = "480 gal. fuel tanks";
		displayNameMagazine = "480 gal. JP-8 fuel";
		shortNameMagazine = "480 gal.";
		nameSound = "";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {"js_m_fa18_wing_tank_x1"};
		burst = 0;
		reloadTime = 0.1;
		magazineReloadTime = 0.8;
	};
	class js_w_master_arms_safe: RocketPods
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
	class js_w_fa18_CMFlareLauncher: SmokeLauncher
	{
		scope = 2;
		displayName = "$STR_A3_CMFlareLauncher0";
		magazines[] = {"60Rnd_CMFlareMagazine","120Rnd_CMFlareMagazine","240Rnd_CMFlareMagazine","60Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","192Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine"};
		magazineReloadTime = 0.2;
		simulation = "cmlauncher";
		modes[] = {"Burst","Single","AIBurst"};
		class Single
		{
			displayName = "Flares single";
			reloadTime = 0.12;
			burst = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			showToPlayer = 1;
			multiplier = 2;
			soundBurst = 0;
			textureType = "semi";
			recoil = "Empty";
			recoilProne = "Empty";
			aiDispersionCoefY = 2.4;
			aiDispersionCoefX = 1.9;
			requiredOpticType = -1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			dispersion = 0.001;
			soundContinuous = 0;
			canLock = 0;
			autoFire = 0;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 100;
			midRangeProbab = 0.01;
			maxRange = 200;
			maxRangeProbab = 0.01;
			artilleryDispersion = 0.001;
			artilleryCharge = 0.001;
			useAction = 0;
			useActionTitle = "";
		};
		class Burst
		{
			displayName = "Flares burst";
			reloadTime = 0.2;
			burst = 5;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			showToPlayer = 1;
			multiplier = 2;
			soundBurst = 0;
			textureType = "burst";
			recoil = "Empty";
			recoilProne = "Empty";
			aiDispersionCoefY = 2.4;
			aiDispersionCoefX = 1.9;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			dispersion = 0.001;
			soundContinuous = 0;
			canLock = 0;
			autoFire = 0;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 100;
			midRangeProbab = 0.01;
			maxRange = 200;
			maxRangeProbab = 0.01;
			artilleryDispersion = 0.001;
			artilleryCharge = 0.001;
			useAction = 0;
			useActionTitle = "";
		};
		class AIBurst: Burst
		{
			burst = 5;
			showToPlayer = 0;
			minRange = 200;
			maxRange = 10000;
			soundBurst = 0;
		};
	};
	class JS_JC_FA18_PilotHelmet: H_PilotHelmetFighter_B
	{
		displayName = "$STR_A3_H_PilotHelmetFighter_B0";
		picture = "\A3\characters_f\Data\UI\icon_H_PilotHelmetFighter_B_CA.paa";
		model = "A3\Characters_F\Common\headgear_helmet_pilot";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_helmet_nato_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 60;
			uniformModel = "A3\Characters_F\Common\headgear_helmet_pilot";
			modelSides[] = {3,1};
			armor = "3*0.4";
			passThrough = 0.6;
		};
	};
	class JS_JC_FA18_PilotCoveralls: U_B_PilotCoveralls
	{
		scope = 2;
		displayName = "$STR_A3_Pilot_coveralls";
		picture = "\A3\characters_f\data\ui\icon_U_B_PilotCoveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "JS_JC_Pilot";
			containerClass = "JS_JC_Pilot_Uniform_container";
			mass = 80;
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		fz_f18_pilot = "fz_f18_pilot";
		fz_f18_commander = "fz_f18_commander";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class fz_f18_pilot_dead: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = "false";
			terminal = 1;
			file = "\js_jc_fa18\anim\fz_f18_pilot_kia.rtm";
			connectTo[] = {"DeadState",0.1};
		};
		class fz_f18_pilot: Crew
		{
			file = "\js_jc_fa18\anim\fz_f18_pilot.rtm";
			interpolateTo[] = {"fz_f18_pilot_dead",1};
		};
		class fz_f18_commander: Crew
		{
			file = "\js_jc_fa18\anim\fz_f18_commander.rtm";
			interpolateTo[] = {"fz_f18_pilot_dead",1};
		};
	};
};
class CfgSounds
{
	class FA18_foldwing_sound
	{
		sound[] = {"\js_jc_fa18\sounds\FX_FA18_foldwing_sound.wss",1.4125376,1,1100};
		name = "FA18_foldwing_sound";
		titles[] = {};
		duration = 3;
	};
	class FA18_tire_touchdown_in_sound
	{
		sound[] = {"\js_jc_fa18\sounds\FX_FA18_tire_touchdown_in.wss",1.4125376,1,1100};
		name = "FA18_tire_touchdown_in_sound";
		titles[] = {};
		duration = 3;
	};
	class FA18_tire_touchdown_ext_sound
	{
		sound[] = {"\js_jc_fa18\sounds\FX_FA18_tire_touchdown_ext.wss",1.7782794,1,1100};
		name = "FA18_tire_touchdown_ext_sound";
		titles[] = {};
		duration = 3;
	};
	class FA18_ejection_sound
	{
		sound[] = {"\js_jc_fa18\sounds\FX_FA18_ejection_ext.wss",3.1622777,1,1400};
		name = "FA18_ejection_sound";
		titles[] = {};
		duration = 3;
	};
	class FA18_tailhook_trap_sound
	{
		sound[] = {"\js_jc_fa18\sounds\FX_FA18_trap_wire.wss",1.4125376,1.3,1100};
		name = "FA18_tailhook_trap_sound";
		titles[] = {};
		duration = 4;
	};
	class FA18_tailhook_trap_snapped_sound
	{
		sound[] = {"\js_jc_fa18\sounds\FX_FA18_trap_wire_break.wss",1.4125376,1.3,1100};
		name = "FA18_tailhook_trap_snapped_sound";
		titles[] = {};
		duration = 4;
	};
	class FA18_tailhook_up_sound
	{
		sound[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Up",0.630957,1,100};
		name = "FA18_tailhook_up_sound";
		titles[] = {};
		duration = 3;
	};
	class FA18_tailhook_down_sound
	{
		sound[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Down",0.630957,1,100};
		name = "FA18_tailhook_up_sound";
		titles[] = {};
		duration = 3;
	};
	class FA18_sonic_boom_sound
	{
		sound[] = {"\js_jc_fa18\sounds\FX_FA18_sonicboom.wss",3.1622777,1,3500};
		name = "FA18_sonic_boom_sound";
		titles[] = {};
		duration = 5;
	};
};
class IGUIBack;
class RscFrame;
class RscPicture;
class RscCombo;
class RscButtonMenu;
class RscMapControl;
class RscObject;
class RscText;
class RscHTML;
class RscTextCheckbox;
class RscEdit;
class FA18_RscButtonMenu: RscButtonMenu
{
	animTextureNormal = "\js_jc_fa18\UI\FA18_GUI_main_button_normal_ca.paa";
	animTextureDisabled = "\js_jc_fa18\UI\FA18_GUI_main_button_disabled_ca.paa";
	animTextureOver = "\js_jc_fa18\UI\FA18_GUI_main_button_over_ca.paa";
	animTextureFocused = "\js_jc_fa18\UI\FA18_GUI_main_button_focus_ca.paa";
	animTexturePressed = "\js_jc_fa18\UI\FA18_GUI_main_button_down_ca.paa";
	animTextureDefault = "\js_jc_fa18\UI\FA18_GUI_main_button_default_ca.paa";
	colorBackground[] = {0,0,0,0.8};
	colorBackground2[] = {1,1,1,0.5};
	color[] = {1,1,1,1};
	color2[] = {1,1,1,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
};
class FA18_TARGETING_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['GPS_TGT_Display', (_this select 0)]";
	class controlsBackground
	{
		class FA18_TARGETING_MAP: RscMapControl
		{
			idc = 1200;
			maxSatelliteAlpha = 0;
			x = "0.358265 * safezoneW + safezoneX";
			y = "0.259146 * safezoneH + safezoneY";
			w = "0.28211 * safezoneW";
			h = "0.464952 * safezoneH";
		};
	};
	class Controls
	{
		class FA18_MFD_OVERLAY_LOADOUTS: RscPicture
		{
			idc = 1201;
			text = "\js_jc_fa18\UI\FA18_GUI_mfd_overlay.paa";
			x = "0.318894 * safezoneW + safezoneX";
			y = "0.211536 * safezoneH + safezoneY";
			w = "0.362204 * safezoneW";
			h = "0.579732 * safezoneH";
		};
		class FA18_SET_TGT_BUTTON_1610: FA18_RscButtonMenu
		{
			idc = 1610;
			x = "0.330706 * safezoneW + safezoneX";
			y = "0.345964 * safezoneH + safezoneY";
			w = "0.0183724 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Set GPS/INS target position";
			action = "[]Spawn JS_JC_fnc_FA18_GPS_TARGETING_SYS";
		};
		class FA18_CLEAR_TGT_BUTTON_1611: FA18_RscButtonMenu
		{
			idc = 1611;
			x = "0.330704 * safezoneW + safezoneX";
			y = "0.415981 * safezoneH + safezoneY";
			w = "0.0183724 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Clear current GPS/INS target";
			action = "[]Spawn JS_JC_fnc_FA18_GPS_TARGETING_CANCEL";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1613: FA18_RscButtonMenu
		{
			idc = 1613;
			x = "0.574804 * safezoneW + safezoneX";
			y = "0.22554 * safezoneH + safezoneY";
			w = "0.0183724 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
		class FA18_INFO_TXT_1: RscText
		{
			idc = 5001;
			colorText[] = {0,0,0,1};
			text = "SET TGT";
			x = "0.358265 * safezoneW + safezoneX";
			y = "0.348767 * safezoneH + safezoneY";
			w = "0.0551196 * safezoneW";
			h = "0.0224054 * safezoneH";
		};
		class FA18_INFO_TXT_2: RscText
		{
			idc = 5002;
			colorText[] = {0,0,0,1};
			text = "CLEAR TGT";
			x = "0.358267 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0721808 * safezoneW";
			h = "0.0224054 * safezoneH";
		};
		class FA18_INFO_TXT_3: RscText
		{
			idc = 5003;
			colorText[] = {0,0,0,1};
			text = "CLOSE";
			x = "0.564305 * safezoneW + safezoneX";
			y = "0.264748 * safezoneH + safezoneY";
			w = "0.0446204 * safezoneW";
			h = "0.0224054 * safezoneH";
		};
		class FA18_INFO_TXT_4: RscText
		{
			idc = 5004;
			colorText[] = {0,0,0,1};
			text = "GPS TGT NOT SET/ACTIVE";
			x = "0.41076 * safezoneW + safezoneX";
			y = "0.687652 * safezoneH + safezoneY";
			w = "0.169278 * safezoneW";
			h = "0.0196048 * safezoneH";
		};
	};
};
class FA18_E_MAIN_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_main_menu.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_LOADOUTS_BUTTON_1610: FA18_RscButtonMenu
		{
			idc = 1610;
			x = "0.456693 * safezoneW + safezoneX";
			y = "0.23114 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.13723 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Loadout selection menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_LOADOUT_UI";
		};
		class FA18_SKINS_BUTTON_1611: FA18_RscButtonMenu
		{
			idc = 1611;
			x = "0.312332 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.13723 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Paint schemes library menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_SKINS_UI";
		};
		class FA18_OPTIONS_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.59974 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.13723 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Options";
			action = "[]Spawn JS_JC_fnc_FA18_E_SETTINGS_UI";
		};
		class FA18_MANUAL_BUTTON_1613: FA18_RscButtonMenu
		{
			idc = 1613;
			x = "0.455379 * safezoneW + safezoneX";
			y = "0.634429 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.13723 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Pilots manual";
			action = "[]Spawn JS_JC_fnc_FA18_E_MANUAL_UI";
		};
		class FA18_CREDITS_EULA_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Credits & EULA";
			action = "[]Spawn JS_JC_fnc_FA18_E_CREDITS_EULA_UI";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_MAIN_RESTRICTED_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_main_menu_restricted.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_MANUAL_BUTTON_1613: FA18_RscButtonMenu
		{
			idc = 1613;
			x = "0.455379 * safezoneW + safezoneX";
			y = "0.634429 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.13723 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Pilots manual";
			action = "[]Spawn JS_JC_fnc_FA18_E_MANUAL_UI";
		};
		class FA18_CREDITS_EULA_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Credits & EULA";
			action = "[]Spawn JS_JC_fnc_FA18_E_CREDITS_EULA_UI";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_LOADOUTS_UI
{
	idd = 3010;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1205;
			text = "\js_jc_fa18\UI\FA18_GUI_arming_menu_e.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1204;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_LOAD_CUSTOM_BUTTON_1600: FA18_RscButtonMenu
		{
			idc = 1600;
			x = "0.422572 * safezoneW + safezoneX";
			y = "0.634429 * safezoneH + safezoneY";
			w = "0.1490 * safezoneW";
			h = "0.0898 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Apply custom loadout";
			action = "[]Spawn JS_JC_fnc_FA18_E_LOADOUT_APPLY";
		};
		class FA18_STATION_1_COMBO_3101: RscCombo
		{
			idc = 3101;
			x = "0.190281 * safezoneW + safezoneX";
			y = "0.312359 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 1";
		};
		class FA18_STATION_2_COMBO_3102: RscCombo
		{
			idc = 3102;
			x = "0.709977 * safezoneW + safezoneX";
			y = "0.312357 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 2";
		};
		class FA18_STATION_3_COMBO_3103: RscCombo
		{
			idc = 3103;
			x = "0.234902 * safezoneW + safezoneX";
			y = "0.36277 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 3";
		};
		class FA18_STATION_4_COMBO_3104: RscCombo
		{
			idc = 3104;
			x = "0.665358 * safezoneW + safezoneX";
			y = "0.36277 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 4";
		};
		class FA18_STATION_5_COMBO_3105: RscCombo
		{
			idc = 3105;
			x = "0.259836 * safezoneW + safezoneX";
			y = "0.41878 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 5";
		};
		class FA18_STATION_6_COMBO_3106: RscCombo
		{
			idc = 3106;
			x = "0.644361 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 6";
		};
		class FA18_STATION_7_COMBO_3107: RscCombo
		{
			idc = 3107;
			x = "0.354327 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 7";
		};
		class FA18_STATION_8_COMBO_3108: RscCombo
		{
			idc = 3108;
			x = "0.549871 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 8";
		};
		class FA18_STATION_9_COMBO_3109: RscCombo
		{
			idc = 3109;
			x = "0.451443 * safezoneW + safezoneX";
			y = "0.488798 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 9";
		};
		class FA18_STATION_10_COMBO_3110: RscCombo
		{
			idc = 3110;
			x = "0.451443 * safezoneW + safezoneX";
			y = "0.539208 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 10";
		};
		class FA18_STATION_11_COMBO_3111: RscCombo
		{
			idc = 3111;
			x = "0.354327 * safezoneW + safezoneX";
			y = "0.471994 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 11";
		};
		class FA18_STATION_12_COMBO_3112: RscCombo
		{
			idc = 3112;
			x = "0.549869 * safezoneW + safezoneX";
			y = "0.471994 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 12";
		};
		class FA18_STATION_13_COMBO_3113: RscCombo
		{
			idc = 3113;
			x = "0.354327 * safezoneW + safezoneX";
			y = "0.525205 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 13";
		};
		class FA18_STATION_14_COMBO_3114: RscCombo
		{
			idc = 3114;
			x = "0.549871 * safezoneW + safezoneX";
			y = "0.525205 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 14";
		};
		class FA18_STATION_15_COMBO_3115: RscCombo
		{
			idc = 3115;
			x = "0.259837 * safezoneW + safezoneX";
			y = "0.471994 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 15";
		};
		class FA18_STATION_16_COMBO_3116: RscCombo
		{
			idc = 3116;
			x = "0.644361 * safezoneW + safezoneX";
			y = "0.471994 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 16";
		};
		class FA18_STATION_17_COMBO_3117: RscCombo
		{
			idc = 3117;
			x = "0.259836 * safezoneW + safezoneX";
			y = "0.525205 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 17";
		};
		class FA18_STATION_18_COMBO_3118: RscCombo
		{
			idc = 3118;
			x = "0.644359 * safezoneW + safezoneX";
			y = "0.525205 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 18";
		};
		class FA18_STATION_19_COMBO_3119: RscCombo
		{
			idc = 3119;
			x = "0.451441 * safezoneW + safezoneX";
			y = "0.59242 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 19";
		};
		class FA18_REARM_BUTTON_1601: FA18_RscButtonMenu
		{
			idc = 1601;
			x = "0.160096 * safezoneW + safezoneX";
			y = "0.743653 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Rearm aircraft";
			action = "[]Spawn JS_JC_fnc_FA18_REARM";
		};
		class FA18_REPAIR_BUTTON_1602: FA18_RscButtonMenu
		{
			idc = 1602;
			x = "0.257212 * safezoneW + safezoneX";
			y = "0.743653 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Repair aircraft";
			action = "[]Spawn JS_JC_fnc_FA18_REPAIR";
		};
		class FA18_REFUEL_BUTTON_1603: FA18_RscButtonMenu
		{
			idc = 1603;
			x = "0.356953 * safezoneW + safezoneX";
			y = "0.743653 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Refuel aircraft";
			action = "[]Spawn JS_JC_fnc_FA18_REFUEL";
		};
		class FA18_MR_LOADOUT_BUTTON_1604: FA18_RscButtonMenu
		{
			idc = 1604;
			x = "0.552495 * safezoneW + safezoneX";
			y = "0.743659 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Multirole loadout";
			action = "[]Spawn JS_JC_fnc_FA18_E_LOADOUTS_MULTIROLE";
		};
		class FA18_CAP_LOADOUT_BUTTON_1605: FA18_RscButtonMenu
		{
			idc = 1605;
			x = "0.649609 * safezoneW + safezoneX";
			y = "0.743655 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Combat Air Patrol loadout";
			action = "[]Spawn JS_JC_fnc_FA18_E_LOADOUTS_CAP";
		};
		class FA18_CAS_LOADOUT_BUTTON_1606: FA18_RscButtonMenu
		{
			idc = 1606;
			x = "0.455379 * safezoneW + safezoneX";
			y = "0.743653 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Combat Air Support loadout";
			action = "[]Spawn JS_JC_fnc_FA18_E_LOADOUTS_CAS";
		};
		class FA18_EMPTY_LOADOUT_BUTTON_1607: FA18_RscButtonMenu
		{
			idc = 1607;
			x = "0.748036 * safezoneW + safezoneX";
			y = "0.743653 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Empty loadout, no weapons";
			action = "[]Spawn JS_JC_fnc_FA18_E_LOADOUTS_EMPTY";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1608: FA18_RscButtonMenu
		{
			idc = 1608;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1609: FA18_RscButtonMenu
		{
			idc = 1609;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_MANUAL_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_main_manual.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_MANUAL_0_BUTTON_1610: FA18_RscButtonMenu
		{
			idc = 1610;
			x = "0.456691 * safezoneW + safezoneX";
			y = "0.166726 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "About F/A-18 Super Hornet";
			action = "[]Spawn JS_JC_fnc_FA18_E_MANUAL_1_UI";
		};
		class FA18_MANUAL_1_BUTTON_1611: FA18_RscButtonMenu
		{
			idc = 1611;
			x = "0.33333 * safezoneW + safezoneX";
			y = "0.233939 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Controls";
			action = "[]Spawn JS_JC_fnc_FA18_E_MANUAL_2_UI";
		};
		class FA18_MANUAL_2_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.292647 * safezoneW + safezoneX";
			y = "0.41878 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Pre-flight setup";
			action = "[]Spawn JS_JC_fnc_FA18_E_MANUAL_3_UI";
		};
		class FA18_MANUAL_3_BUTTON_1613: FA18_RscButtonMenu
		{
			idc = 1613;
			x = "0.333332 * safezoneW + safezoneX";
			y = "0.595223 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Take off and landing";
			action = "[]Spawn JS_JC_fnc_FA18_E_MANUAL_4_UI";
		};
		class FA18_MANUAL_4_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.456695 * safezoneW + safezoneX";
			y = "0.687643 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "In-flight procedures";
			action = "[]Spawn JS_JC_fnc_FA18_E_MANUAL_5_UI";
		};
		class FA18_MANUAL_5_BUTTON_1615: FA18_RscButtonMenu
		{
			idc = 1615;
			x = "0.58268 * safezoneW + safezoneX";
			y = "0.595221 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Weapon systems";
			action = "[]Spawn JS_JC_fnc_FA18_E_MANUAL_6_UI";
		};
		class FA18_MANUAL_6_BUTTON_1616: FA18_RscButtonMenu
		{
			idc = 1616;
			x = "0.624675 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Navigation";
			action = "[]Spawn JS_JC_fnc_FA18_E_MANUAL_7_UI";
		};
		class FA18_MANUAL_7_BUTTON_1617: FA18_RscButtonMenu
		{
			idc = 1617;
			x = "0.58268 * safezoneW + safezoneX";
			y = "0.23674 * safezoneH + safezoneY";
			w = "0.08268 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Editor";
			action = "[]Spawn JS_JC_fnc_FA18_E_MANUAL_8_UI";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1618: FA18_RscButtonMenu
		{
			idc = 1618;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1619: FA18_RscButtonMenu
		{
			idc = 1619;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_MANUAL_1_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_1.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MANUAL_MAIN";
		};
		class FA18_BIFORUMS_BUTTON_1613: RscHTML
		{
			idc = 1613;
			x = "0.59974 * safezoneW + safezoneX";
			y = "0.766059 * safezoneH + safezoneY";
			w = "0.122046 * safezoneW";
			h = "0.106424 * safezoneH";
			filename = "";
			text = "";
			size = 0.023;
			tooltip = "BI Forums page to leave feedback";
			action = "";
		};
		class FA18_SUPPORTUS_BUTTON_1614: RscHTML
		{
			idc = 1614;
			x = "0.748038 * safezoneW + safezoneX";
			y = "0.766059 * safezoneH + safezoneY";
			w = "0.123358 * safezoneW";
			h = "0.106424 * safezoneH";
			filename = "";
			text = "";
			size = 0.023;
			tooltip = "Support develpment of this mod";
			action = "";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1615: FA18_RscButtonMenu
		{
			idc = 1615;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_MANUAL_2_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_2.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_MANUAL_3_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_3.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_MANUAL_4_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_4.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_MANUAL_5_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_5.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_MANUAL_6_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_6.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_MANUAL_7_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_7.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_MANUAL_8_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_8.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_SETTINGS_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_main_options.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_SKINS_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['FA18_E_SKINS_Display', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_main_skins_e.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_SKIN_GENERIC_1600: FA18_RscButtonMenu
		{
			idc = 1600;
			x = "0.748036 * safezoneW + safezoneX";
			y = "0.231142 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "ARMA GENERIC NAVY [2013]";
			action = "[]Spawn JS_JC_fnc_FA18_E_GENERIC_NAVY_PAINT";
		};
		class FA18_SKIN_VFA14CAG_1601: FA18_RscButtonMenu
		{
			idc = 1601;
			x = "0.0406705 * safezoneW + safezoneX";
			y = "0.231138 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VFA-14 CAG";
			action = "[]Spawn JS_JC_fnc_FA18_E_VFA14CAG_PAINT";
		};
		class FA18_SKIN_VFA14LOW_1602: FA18_RscButtonMenu
		{
			idc = 1602;
			x = "0.200779 * safezoneW + safezoneX";
			y = "0.23114 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VFA-14 LOW";
			action = "[]Spawn JS_JC_fnc_FA18_E_VFA14LOW_PAINT";
		};
		class FA18_SKIN_VFA27CAG_1603: FA18_RscButtonMenu
		{
			idc = 1603;
			x = "0.0406706 * safezoneW + safezoneX";
			y = "0.387975 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VFA-27 CAG";
			action = "[]Spawn JS_JC_fnc_FA18_E_VFA27CAG_PAINT";
		};
		class FA18_SKIN_VFA27LOW_1604: FA18_RscButtonMenu
		{
			idc = 1604;
			x = "0.200779 * safezoneW + safezoneX";
			y = "0.387975 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VFA-27 LOW";
			action = "[]Spawn JS_JC_fnc_FA18_E_VFA27LOW_PAINT";
		};
		class FA18_SKIN_VFA31CAG_1605: FA18_RscButtonMenu
		{
			idc = 1605;
			x = "0.0406706 * safezoneW + safezoneX";
			y = "0.628829 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VFA-31 CAG";
			action = "[]Spawn JS_JC_fnc_FA18_E_VFA31CAG_PAINT";
		};
		class FA18_SKIN_VFA31LOW_1606: FA18_RscButtonMenu
		{
			idc = 1606;
			x = "0.200779 * safezoneW + safezoneX";
			y = "0.628829 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VFA-31 LOW";
			action = "[]Spawn JS_JC_fnc_FA18_E_VFA31LOW_PAINT";
		};
		class FA18_SKIN_GENERIC_USMC_1607: FA18_RscButtonMenu
		{
			idc = 1607;
			x = "0.748036 * safezoneW + safezoneX";
			y = "0.387975 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "ARMA GENERIC USMC [2013]";
			action = "[]Spawn JS_JC_fnc_FA18_E_GENERIC_USMC_PAINT";
		};
		class FA18_SKIN_VMFA232CAG_1608: FA18_RscButtonMenu
		{
			idc = 1608;
			x = "0.40026 * safezoneW + safezoneX";
			y = "0.23114 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VMFA-232 CAG";
			action = "[]Spawn JS_JC_fnc_FA18_E_VMFA232CAG_PAINT";
		};
		class FA18_SKIN_VMFA232LOW_1609: FA18_RscButtonMenu
		{
			idc = 1609;
			x = "0.561682 * safezoneW + safezoneX";
			y = "0.23114 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VMFA-232 LOW";
			action = "[]Spawn JS_JC_fnc_FA18_E_VMFA232LOW_PAINT";
		};
		class FA18_SKIN_VMFA314CAG_1610: FA18_RscButtonMenu
		{
			idc = 1610;
			x = "0.40026 * safezoneW + safezoneX";
			y = "0.387975 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VMFA-314 CAG";
			action = "[]Spawn JS_JC_fnc_FA18_E_VMFA314CAG_PAINT";
		};
		class FA18_SKIN_VMFA314LOW_1611: FA18_RscButtonMenu
		{
			idc = 1611;
			x = "0.561682 * safezoneW + safezoneX";
			y = "0.387975 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VMFA-314 LOW";
			action = "[]Spawn JS_JC_fnc_FA18_E_VMFA314LOW_PAINT";
		};
		class FA18_RscTextCheckbox_2500: RscPicture
		{
			idc = 2500;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.149596 * safezoneW + safezoneX";
			y = "0.231138 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2501: RscPicture
		{
			idc = 2501;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.309705 * safezoneW + safezoneX";
			y = "0.23114 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2502: RscPicture
		{
			idc = 2502;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.148284 * safezoneW + safezoneX";
			y = "0.390774 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2503: RscPicture
		{
			idc = 2503;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.309706 * safezoneW + safezoneX";
			y = "0.390776 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2504: RscPicture
		{
			idc = 2504;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.149598 * safezoneW + safezoneX";
			y = "0.631628 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2505: RscPicture
		{
			idc = 2505;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.309706 * safezoneW + safezoneX";
			y = "0.63163 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2506: RscPicture
		{
			idc = 2506;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.509186 * safezoneW + safezoneX";
			y = "0.23114 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2507: RscPicture
		{
			idc = 2507;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.670608 * safezoneW + safezoneX";
			y = "0.23114 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2508: RscPicture
		{
			idc = 2508;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.509186 * safezoneW + safezoneX";
			y = "0.390776 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2509: RscPicture
		{
			idc = 2509;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.67061 * safezoneW + safezoneX";
			y = "0.390776 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2510: RscPicture
		{
			idc = 2510;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.856964 * safezoneW + safezoneX";
			y = "0.231142 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2511: RscPicture
		{
			idc = 2511;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.856964 * safezoneW + safezoneX";
			y = "0.390774 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1613: FA18_RscButtonMenu
		{
			idc = 1613;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_E_CREDITS_EULA_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_main_credits_eula.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_SUPPORTUS_BUTTON_1611: RscHTML
		{
			idc = 1611;
			x = "0.510498 * safezoneW + safezoneX";
			y = "0.687643 * safezoneH + safezoneY";
			w = "0.127294 * safezoneW";
			h = "0.109225 * safezoneH";
			filename = "";
			text = "";
			size = 0.023;
			tooltip = "Support develpment of this mod";
			action = "";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_MAIN_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_main_menu.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_LOADOUTS_BUTTON_1610: FA18_RscButtonMenu
		{
			idc = 1610;
			x = "0.456693 * safezoneW + safezoneX";
			y = "0.23114 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.13723 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Loadout selection menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_LOADOUT_UI";
		};
		class FA18_SKINS_BUTTON_1611: FA18_RscButtonMenu
		{
			idc = 1611;
			x = "0.312332 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.13723 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Paint schemes library menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_SKINS_UI";
		};
		class FA18_OPTIONS_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.59974 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.13723 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Options";
			action = "[]Spawn JS_JC_fnc_FA18_F_SETTINGS_UI";
		};
		class FA18_MANUAL_BUTTON_1613: FA18_RscButtonMenu
		{
			idc = 1613;
			x = "0.455379 * safezoneW + safezoneX";
			y = "0.634429 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.13723 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Pilots manual";
			action = "[]Spawn JS_JC_fnc_FA18_F_MANUAL_UI";
		};
		class FA18_CREDITS_EULA_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Credits & EULA";
			action = "[]Spawn JS_JC_fnc_FA18_F_CREDITS_EULA_UI";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_MAIN_RESTRICTED_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_main_menu_restricted.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_MANUAL_BUTTON_1613: FA18_RscButtonMenu
		{
			idc = 1613;
			x = "0.455379 * safezoneW + safezoneX";
			y = "0.634429 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.13723 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Pilots manual";
			action = "[]Spawn JS_JC_fnc_FA18_F_MANUAL_UI";
		};
		class FA18_CREDITS_EULA_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Credits & EULA";
			action = "[]Spawn JS_JC_fnc_FA18_F_CREDITS_EULA_UI";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_LOADOUTS_UI
{
	idd = 3010;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1205;
			text = "\js_jc_fa18\UI\FA18_GUI_arming_menu_f.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1204;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_LOAD_CUSTOM_BUTTON_1600: FA18_RscButtonMenu
		{
			idc = 1600;
			x = "0.422572 * safezoneW + safezoneX";
			y = "0.634429 * safezoneH + safezoneY";
			w = "0.1490 * safezoneW";
			h = "0.0898 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Apply custom loadout";
			action = "[]Spawn JS_JC_fnc_FA18_F_LOADOUT_APPLY";
		};
		class FA18_STATION_1_COMBO_3101: RscCombo
		{
			idc = 3101;
			x = "0.190281 * safezoneW + safezoneX";
			y = "0.312359 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 1";
		};
		class FA18_STATION_2_COMBO_3102: RscCombo
		{
			idc = 3102;
			x = "0.709977 * safezoneW + safezoneX";
			y = "0.312357 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 2";
		};
		class FA18_STATION_3_COMBO_3103: RscCombo
		{
			idc = 3103;
			x = "0.234902 * safezoneW + safezoneX";
			y = "0.36277 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 3";
		};
		class FA18_STATION_4_COMBO_3104: RscCombo
		{
			idc = 3104;
			x = "0.665358 * safezoneW + safezoneX";
			y = "0.36277 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 4";
		};
		class FA18_STATION_5_COMBO_3105: RscCombo
		{
			idc = 3105;
			x = "0.259836 * safezoneW + safezoneX";
			y = "0.41878 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 5";
		};
		class FA18_STATION_6_COMBO_3106: RscCombo
		{
			idc = 3106;
			x = "0.644361 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 6";
		};
		class FA18_STATION_7_COMBO_3107: RscCombo
		{
			idc = 3107;
			x = "0.354327 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 7";
		};
		class FA18_STATION_8_COMBO_3108: RscCombo
		{
			idc = 3108;
			x = "0.549871 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 8";
		};
		class FA18_STATION_9_COMBO_3109: RscCombo
		{
			idc = 3109;
			x = "0.451443 * safezoneW + safezoneX";
			y = "0.488798 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 9";
		};
		class FA18_STATION_10_COMBO_3110: RscCombo
		{
			idc = 3110;
			x = "0.451443 * safezoneW + safezoneX";
			y = "0.539208 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 10";
		};
		class FA18_STATION_11_COMBO_3111: RscCombo
		{
			idc = 3111;
			x = "0.354327 * safezoneW + safezoneX";
			y = "0.471994 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 11";
		};
		class FA18_STATION_12_COMBO_3112: RscCombo
		{
			idc = 3112;
			x = "0.549869 * safezoneW + safezoneX";
			y = "0.471994 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 12";
		};
		class FA18_STATION_13_COMBO_3113: RscCombo
		{
			idc = 3113;
			x = "0.354327 * safezoneW + safezoneX";
			y = "0.525205 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 13";
		};
		class FA18_STATION_14_COMBO_3114: RscCombo
		{
			idc = 3114;
			x = "0.549871 * safezoneW + safezoneX";
			y = "0.525205 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 14";
		};
		class FA18_STATION_15_COMBO_3115: RscCombo
		{
			idc = 3115;
			x = "0.259837 * safezoneW + safezoneX";
			y = "0.471994 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 15";
		};
		class FA18_STATION_16_COMBO_3116: RscCombo
		{
			idc = 3116;
			x = "0.644361 * safezoneW + safezoneX";
			y = "0.471994 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 16";
		};
		class FA18_STATION_17_COMBO_3117: RscCombo
		{
			idc = 3117;
			x = "0.259836 * safezoneW + safezoneX";
			y = "0.525205 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 17";
		};
		class FA18_STATION_18_COMBO_3118: RscCombo
		{
			idc = 3118;
			x = "0.644359 * safezoneW + safezoneX";
			y = "0.525205 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 18";
		};
		class FA18_STATION_19_COMBO_3119: RscCombo
		{
			idc = 3119;
			x = "0.451441 * safezoneW + safezoneX";
			y = "0.59242 * safezoneH + safezoneY";
			w = "0.0879296 * safezoneW";
			h = "0.0280066 * safezoneH";
			tooltip = "Weapon station 19";
		};
		class FA18_REARM_BUTTON_1601: FA18_RscButtonMenu
		{
			idc = 1601;
			x = "0.160096 * safezoneW + safezoneX";
			y = "0.743653 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Rearm aircraft";
			action = "[]Spawn JS_JC_fnc_FA18_REARM";
		};
		class FA18_REPAIR_BUTTON_1602: FA18_RscButtonMenu
		{
			idc = 1602;
			x = "0.257212 * safezoneW + safezoneX";
			y = "0.743653 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Repair aircraft";
			action = "[]Spawn JS_JC_fnc_FA18_REPAIR";
		};
		class FA18_REFUEL_BUTTON_1603: FA18_RscButtonMenu
		{
			idc = 1603;
			x = "0.356953 * safezoneW + safezoneX";
			y = "0.743653 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Refuel aircraft";
			action = "[]Spawn JS_JC_fnc_FA18_REFUEL";
		};
		class FA18_MR_LOADOUT_BUTTON_1604: FA18_RscButtonMenu
		{
			idc = 1604;
			x = "0.552495 * safezoneW + safezoneX";
			y = "0.743659 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Multirole loadout";
			action = "[]Spawn JS_JC_fnc_FA18_F_LOADOUTS_MULTIROLE";
		};
		class FA18_CAP_LOADOUT_BUTTON_1605: FA18_RscButtonMenu
		{
			idc = 1605;
			x = "0.649609 * safezoneW + safezoneX";
			y = "0.743655 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Combat Air Patrol loadout";
			action = "[]Spawn JS_JC_fnc_FA18_F_LOADOUTS_CAP";
		};
		class FA18_CAS_LOADOUT_BUTTON_1606: FA18_RscButtonMenu
		{
			idc = 1606;
			x = "0.455379 * safezoneW + safezoneX";
			y = "0.743653 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Combat Air Support loadout";
			action = "[]Spawn JS_JC_fnc_FA18_F_LOADOUTS_CAS";
		};
		class FA18_EMPTY_LOADOUT_BUTTON_1607: FA18_RscButtonMenu
		{
			idc = 1607;
			x = "0.748036 * safezoneW + safezoneX";
			y = "0.743653 * safezoneH + safezoneY";
			w = "0.0813676 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Empty loadout, no weapons";
			action = "[]Spawn JS_JC_fnc_FA18_F_LOADOUTS_EMPTY";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1608: FA18_RscButtonMenu
		{
			idc = 1608;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1609: FA18_RscButtonMenu
		{
			idc = 1609;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_MANUAL_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_main_manual.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_MANUAL_0_BUTTON_1610: FA18_RscButtonMenu
		{
			idc = 1610;
			x = "0.456691 * safezoneW + safezoneX";
			y = "0.166726 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "About F/A-18 Super Hornet";
			action = "[]Spawn JS_JC_fnc_FA18_F_MANUAL_1_UI";
		};
		class FA18_MANUAL_1_BUTTON_1611: FA18_RscButtonMenu
		{
			idc = 1611;
			x = "0.33333 * safezoneW + safezoneX";
			y = "0.233939 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Controls";
			action = "[]Spawn JS_JC_fnc_FA18_F_MANUAL_2_UI";
		};
		class FA18_MANUAL_2_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.292647 * safezoneW + safezoneX";
			y = "0.41878 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Pre-flight setup";
			action = "[]Spawn JS_JC_fnc_FA18_F_MANUAL_3_UI";
		};
		class FA18_MANUAL_3_BUTTON_1613: FA18_RscButtonMenu
		{
			idc = 1613;
			x = "0.333332 * safezoneW + safezoneX";
			y = "0.595223 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Take off and landing";
			action = "[]Spawn JS_JC_fnc_FA18_F_MANUAL_4_UI";
		};
		class FA18_MANUAL_4_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.456695 * safezoneW + safezoneX";
			y = "0.687643 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "In-flight procedures";
			action = "[]Spawn JS_JC_fnc_FA18_F_MANUAL_5_UI";
		};
		class FA18_MANUAL_5_BUTTON_1615: FA18_RscButtonMenu
		{
			idc = 1615;
			x = "0.58268 * safezoneW + safezoneX";
			y = "0.595221 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Weapon systems";
			action = "[]Spawn JS_JC_fnc_FA18_F_MANUAL_6_UI";
		};
		class FA18_MANUAL_6_BUTTON_1616: FA18_RscButtonMenu
		{
			idc = 1616;
			x = "0.624675 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0826794 * safezoneW";
			h = "0.137232 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Navigation";
			action = "[]Spawn JS_JC_fnc_FA18_F_MANUAL_7_UI";
		};
		class FA18_MANUAL_7_BUTTON_1617: FA18_RscButtonMenu
		{
			idc = 1617;
			x = "0.58268 * safezoneW + safezoneX";
			y = "0.23674 * safezoneH + safezoneY";
			w = "0.08268 * safezoneW";
			h = "0.137235 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Editor";
			action = "[]Spawn JS_JC_fnc_FA18_F_MANUAL_8_UI";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1618: FA18_RscButtonMenu
		{
			idc = 1618;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1619: FA18_RscButtonMenu
		{
			idc = 1619;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_MANUAL_1_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_1.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MANUAL_MAIN";
		};
		class FA18_BIFORUMS_BUTTON_1613: RscHTML
		{
			idc = 1613;
			x = "0.59974 * safezoneW + safezoneX";
			y = "0.766059 * safezoneH + safezoneY";
			w = "0.122046 * safezoneW";
			h = "0.106424 * safezoneH";
			filename = "";
			text = "";
			size = 0.023;
			tooltip = "BI Forums page to leave feedback";
			action = "";
		};
		class FA18_SUPPORTUS_BUTTON_1614: RscHTML
		{
			idc = 1614;
			x = "0.748038 * safezoneW + safezoneX";
			y = "0.766059 * safezoneH + safezoneY";
			w = "0.123358 * safezoneW";
			h = "0.106424 * safezoneH";
			filename = "";
			text = "";
			size = 0.023;
			tooltip = "Support develpment of this mod";
			action = "";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1615: FA18_RscButtonMenu
		{
			idc = 1615;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_MANUAL_2_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_2.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_MANUAL_3_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_3.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_MANUAL_4_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_4.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_MANUAL_5_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_5.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_MANUAL_6_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_6.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_MANUAL_7_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_7.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_MANUAL_8_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_manual_8.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MANUAL_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_SETTINGS_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_main_options.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_SKINS_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['FA18_F_SKINS_Display', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_main_skins_f.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_SKIN_GENERIC_1600: FA18_RscButtonMenu
		{
			idc = 1600;
			x = "0.748036 * safezoneW + safezoneX";
			y = "0.23114 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "ARMA GENERIC NAVY [2013]";
			action = "[]Spawn JS_JC_fnc_FA18_F_GENERIC_NAVY_PAINT";
		};
		class FA18_SKIN_VFA41CAG_1601: FA18_RscButtonMenu
		{
			idc = 1601;
			x = "0.0406706 * safezoneW + safezoneX";
			y = "0.231138 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VFA-41 CAG";
			action = "[]Spawn JS_JC_fnc_FA18_F_VFA41CAG_PAINT";
		};
		class FA18_SKIN_VFA41LOW_1602: FA18_RscButtonMenu
		{
			idc = 1602;
			x = "0.200779 * safezoneW + safezoneX";
			y = "0.231142 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VFA-41 LOW";
			action = "[]Spawn JS_JC_fnc_FA18_F_VFA41LOW_PAINT";
		};
		class FA18_SKIN_VFA103CAG_1603: FA18_RscButtonMenu
		{
			idc = 1603;
			x = "0.0406706 * safezoneW + safezoneX";
			y = "0.645631 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VFA-103 CAG";
			action = "[]Spawn JS_JC_fnc_FA18_F_VFA103CAG_PAINT";
		};
		class FA18_SKIN_VFA103LOW_1604: FA18_RscButtonMenu
		{
			idc = 1604;
			x = "0.200781 * safezoneW + safezoneX";
			y = "0.645629 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VFA-103 LOW";
			action = "[]Spawn JS_JC_fnc_FA18_F_VFA103LOW_PAINT";
		};
		class FA18_SKIN_VFA154CAG_1605: FA18_RscButtonMenu
		{
			idc = 1605;
			x = "0.0406708 * safezoneW + safezoneX";
			y = "0.387975 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VFA-154 CAG";
			action = "[]Spawn JS_JC_fnc_FA18_F_VFA154CAG_PAINT";
		};
		class FA18_SKIN_VFA154LOW_1606: FA18_RscButtonMenu
		{
			idc = 1606;
			x = "0.200781 * safezoneW + safezoneX";
			y = "0.387973 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VFA-154 LOW";
			action = "[]Spawn JS_JC_fnc_FA18_F_VFA154LOW_PAINT";
		};
		class FA18_SKIN_GENERIC_USMC_1607: FA18_RscButtonMenu
		{
			idc = 1607;
			x = "0.748038 * safezoneW + safezoneX";
			y = "0.387975 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "ARMA GENERIC USMC [2013]";
			action = "[]Spawn JS_JC_fnc_FA18_F_GENERIC_USMC_PAINT";
		};
		class FA18_SKIN_VMFA225CAG_1608: FA18_RscButtonMenu
		{
			idc = 1608;
			x = "0.40026 * safezoneW + safezoneX";
			y = "0.231142 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VMFA-225 CAG";
			action = "[]Spawn JS_JC_fnc_FA18_F_VMFA225CAG_PAINT";
		};
		class FA18_SKIN_VmFA225LOW_1609: FA18_RscButtonMenu
		{
			idc = 1609;
			x = "0.561682 * safezoneW + safezoneX";
			y = "0.23114 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "VMFA-225 LOW";
			action = "[]Spawn JS_JC_fnc_FA18_F_VMFA225LOW_PAINT";
		};
		class FA18_SKIN_GENERIC_1610: FA18_RscButtonMenu
		{
			idc = 1610;
			x = "0.40026 * safezoneW + safezoneX";
			y = "0.645631 * safezoneH + safezoneY";
			w = "0.146974 * safezoneW";
			h = "0.140036 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Royal Australian Air Force";
			action = "[]Spawn JS_JC_fnc_FA18_F_GENERIC_RAAF_PAINT";
		};
		class FA18_RscTextCheckbox_2500: RscPicture
		{
			idc = 2500;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.149596 * safezoneW + safezoneX";
			y = "0.231138 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2501: RscPicture
		{
			idc = 2501;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.309705 * safezoneW + safezoneX";
			y = "0.23114 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2502: RscPicture
		{
			idc = 2502;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.148286 * safezoneW + safezoneX";
			y = "0.648434 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2503: RscPicture
		{
			idc = 2503;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.309706 * safezoneW + safezoneX";
			y = "0.648436 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2504: RscPicture
		{
			idc = 2504;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.148284 * safezoneW + safezoneX";
			y = "0.390774 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2505: RscPicture
		{
			idc = 2505;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.309706 * safezoneW + safezoneX";
			y = "0.390776 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2506: RscPicture
		{
			idc = 2506;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.509186 * safezoneW + safezoneX";
			y = "0.23114 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2507: RscPicture
		{
			idc = 2507;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.670608 * safezoneW + safezoneX";
			y = "0.23114 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2508: RscPicture
		{
			idc = 2508;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.856964 * safezoneW + safezoneX";
			y = "0.231142 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2509: RscPicture
		{
			idc = 2509;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.856964 * safezoneW + safezoneX";
			y = "0.390774 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RscTextCheckbox_2510: RscPicture
		{
			idc = 2510;
			text = "\js_jc_fa18\UI\FA18_GUI_button_tickbox_off.paa";
			x = "0.507874 * safezoneW + safezoneX";
			y = "0.648432 * safezoneH + safezoneY";
			w = "0.0380584 * safezoneW";
			h = "0.0588132 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1613: FA18_RscButtonMenu
		{
			idc = 1613;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_CREDITS_EULA_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_main_credits_eula.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_SUPPORTUS_BUTTON_1611: RscHTML
		{
			idc = 1611;
			x = "0.510498 * safezoneW + safezoneX";
			y = "0.687643 * safezoneH + safezoneY";
			w = "0.127294 * safezoneW";
			h = "0.109225 * safezoneH";
			filename = "";
			text = "";
			size = 0.023;
			tooltip = "Support develpment of this mod";
			action = "";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_F_RESTRICTED_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_arming_menu_restricted.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_JC_fnc_FA18_F_RETURN_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18_RscButtonMenu
		{
			idc = 1614;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class FA18_SKINS_RESTRICTED_UI
{
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class FA18_MAIN_BOX_1200: RscPicture
		{
			idc = 1200;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.1 + safezoneW";
			h = "0.1 + safezoneH";
			text = "\js_jc_fa18\UI\FA18_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc = 1204;
			text = "\js_jc_fa18\UI\FA18_GUI_main_skins_restricted.paa";
			x = "0 * safezoneW + safezoneX";
			y = "0.052 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "0.84 * safezoneH";
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = "0.005 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.99 * safezoneW";
			h = "0.99 * safezoneH";
		};
		class FA18_SW_SUBSCRIBE_BUTTON_1610: RscHTML
		{
			idc = 1610;
			x = "0.381885 * safezoneW + safezoneX";
			y = "0.5 * safezoneH + safezoneY";
			w = "0.236228 * safezoneW";
			h = "0.0700156 * safezoneH";
			filename = "";
			text = "";
			size = 0.023;
			tooltip = "Subscribe to skin pack on steam workshop";
			action = "";
		};
		class FA18_AH_DOWNLOAD_BUTTON_1611: RscHTML
		{
			idc = 1611;
			x = "0.381887 * safezoneW + safezoneX";
			y = "0.710047 * safezoneH + safezoneY";
			w = "0.236228 * safezoneW";
			h = "0.0700156 * safezoneH";
			filename = "";
			text = "";
			size = 0.023;
			tooltip = "Download manualy this mod [full install]";
			action = "";
		};
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18_RscButtonMenu
		{
			idc = 1612;
			x = "0.787409 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.0918668 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_JC_fnc_FA18_E_RETURN_MAIN";
		};
		class FA18_CLOSE_DIALOG_BUTTON_1613: FA18_RscButtonMenu
		{
			idc = 1613;
			x = "0.877963 * safezoneW + safezoneX";
			y = "0.110712 * safezoneH + safezoneY";
			w = "0.094491 * safezoneW";
			h = "0.0255 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	};
};
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscProgress;
class RscIGProgress;
class RscHitZones;
class RscIGUIValue;
class RscIGUIText;
class RscInGameUI
{
	class RscUnitInfo;
	class RscUnitInfoAir;
	class Rsc_FA18_UnitInfo: RscUnitInfoAir
	{
		onLoad = "uiNamespace setVariable ['HUD', _this select 0]; [""onLoad"",_this,""RscUnitInfo"",'IGUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
		onUnload = "uiNamespace setVariable ['HUD', nil]; [""onUnload"",_this,""RscUnitInfo"",'IGUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
		idd = 300;
		controls[] = {"WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","CA_Radar","FA18_External_fuel_Progress","FA18_Afterburner_Status","FA18_Tailhook_Status"};
		class CA_ValueFuel: RscProgress
		{
			idc = 113;
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40) + (profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"", (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class FA18_External_fuel_Progress: CA_ValueFuel
		{
			idc = 9910;
			x = "5 * (((safezoneW / safezoneH) min 1.2) / 40) + (profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"", (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class FA18_Tailhook_Status: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			idc = 9907;
			text = "js_jc_fa18\ui\FA18_Toggles_clear_ca.paa";
			x = "8.0 * (((safezoneW / safezoneH) min 1.2) / 40) + (profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "3.4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"", (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "0.8 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class FA18_Afterburner_Status: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			idc = 9908;
			text = "js_jc_fa18\ui\FA18_Toggles_clear_ca.paa";
			x = "8.9 * (((safezoneW / safezoneH) min 1.2) / 40) + (profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "3.4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"", (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "0.8 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class CfgFunctions
{
	class JS_JC
	{
		class FA18E_SERVICE_MENU
		{
			class FA18_E_CREDITS_EULA_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_CREDITS_EULA_UI.sqf";
			};
			class FA18_E_LOADOUT_APPLY
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_LOADOUT_APPLY.sqf";
			};
			class FA18_E_LOADOUT_RESTRICTIONS_3105
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_LOADOUT_RESTRICTIONS_3105.sqf";
			};
			class FA18_E_LOADOUT_RESTRICTIONS_3106
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_LOADOUT_RESTRICTIONS_3106.sqf";
			};
			class FA18_E_LOADOUT_RESTRICTIONS_3107
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_LOADOUT_RESTRICTIONS_3107.sqf";
			};
			class FA18_E_LOADOUT_RESTRICTIONS_3108
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_LOADOUT_RESTRICTIONS_3108.sqf";
			};
			class FA18_E_LOADOUT_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_LOADOUT_UI.sqf";
			};
			class FA18_E_LOADOUTS_CAP
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_LOADOUTS_CAP.sqf";
			};
			class FA18_E_LOADOUTS_CAS
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_LOADOUTS_CAS.sqf";
			};
			class FA18_E_LOADOUTS_EMPTY
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_LOADOUTS_EMPTY.sqf";
			};
			class FA18_E_LOADOUTS_MULTIROLE
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_LOADOUTS_MULTIROLE.sqf";
			};
			class FA18_E_MAIN_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_MAIN_UI.sqf";
			};
			class FA18_E_MANUAL_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_MANUAL_UI.sqf";
			};
			class FA18_E_MANUAL_1_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_MANUAL_1_UI.sqf";
			};
			class FA18_E_MANUAL_2_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_MANUAL_2_UI.sqf";
			};
			class FA18_E_MANUAL_3_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_MANUAL_3_UI.sqf";
			};
			class FA18_E_MANUAL_4_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_MANUAL_4_UI.sqf";
			};
			class FA18_E_MANUAL_5_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_MANUAL_5_UI.sqf";
			};
			class FA18_E_MANUAL_6_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_MANUAL_6_UI.sqf";
			};
			class FA18_E_MANUAL_7_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_MANUAL_7_UI.sqf";
			};
			class FA18_E_MANUAL_8_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_MANUAL_8_UI.sqf";
			};
			class FA18_E_RETURN_MAIN
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_RETURN_MAIN.sqf";
			};
			class FA18_E_RETURN_MANUAL_MAIN
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_RETURN_MANUAL_MAIN.sqf";
			};
			class FA18_E_SETTINGS_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_SETTINGS_UI.sqf";
			};
			class FA18_E_SKINS_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_SKINS_UI.sqf";
			};
			class FA18_E_GENERIC_NAVY_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_GENERIC_NAVY_PAINT.sqf";
			};
			class FA18_E_GENERIC_USMC_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_GENERIC_USMC_PAINT.sqf";
			};
			class FA18_E_VFA14CAG_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_VFA14CAG_PAINT.sqf";
			};
			class FA18_E_VFA14LOW_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_VFA14LOW_PAINT.sqf";
			};
			class FA18_E_VFA27CAG_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_VFA27CAG_PAINT.sqf";
			};
			class FA18_E_VFA27LOW_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_VFA27LOW_PAINT.sqf";
			};
			class FA18_E_VFA31CAG_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_VFA31CAG_PAINT.sqf";
			};
			class FA18_E_VFA31LOW_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_VFA31LOW_PAINT.sqf";
			};
			class FA18_E_VMFA232CAG_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_VMFA232CAG_PAINT.sqf";
			};
			class FA18_E_VMFA232LOW_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_VMFA232LOW_PAINT.sqf";
			};
			class FA18_E_VMFA314CAG_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_VMFA314CAG_PAINT.sqf";
			};
			class FA18_E_VMFA314LOW_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_E_VMFA314LOW_PAINT.sqf";
			};
			class FA18_REARM
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_REARM.sqf";
			};
			class FA18_REFUEL
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_REFUEL.sqf";
			};
			class FA18_REPAIR
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_REPAIR.sqf";
			};
			class FA18_F_CREDITS_EULA_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_CREDITS_EULA_UI.sqf";
			};
			class FA18_F_LOADOUT_APPLY
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_LOADOUT_APPLY.sqf";
			};
			class FA18_F_LOADOUT_RESTRICTIONS_3105
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_LOADOUT_RESTRICTIONS_3105.sqf";
			};
			class FA18_F_LOADOUT_RESTRICTIONS_3106
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_LOADOUT_RESTRICTIONS_3106.sqf";
			};
			class FA18_F_LOADOUT_RESTRICTIONS_3107
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_LOADOUT_RESTRICTIONS_3107.sqf";
			};
			class FA18_F_LOADOUT_RESTRICTIONS_3108
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_LOADOUT_RESTRICTIONS_3108.sqf";
			};
			class FA18_F_LOADOUT_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_LOADOUT_UI.sqf";
			};
			class FA18_F_LOADOUTS_CAP
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_LOADOUTS_CAP.sqf";
			};
			class FA18_F_LOADOUTS_CAS
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_LOADOUTS_CAS.sqf";
			};
			class FA18_F_LOADOUTS_EMPTY
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_LOADOUTS_EMPTY.sqf";
			};
			class FA18_F_LOADOUTS_MULTIROLE
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_LOADOUTS_MULTIROLE.sqf";
			};
			class FA18_F_MAIN_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_MAIN_UI.sqf";
			};
			class FA18_F_MANUAL_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_MANUAL_UI.sqf";
			};
			class FA18_F_MANUAL_1_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_MANUAL_1_UI.sqf";
			};
			class FA18_F_MANUAL_2_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_MANUAL_2_UI.sqf";
			};
			class FA18_F_MANUAL_3_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_MANUAL_3_UI.sqf";
			};
			class FA18_F_MANUAL_4_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_MANUAL_4_UI.sqf";
			};
			class FA18_F_MANUAL_5_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_MANUAL_5_UI.sqf";
			};
			class FA18_F_MANUAL_6_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_MANUAL_6_UI.sqf";
			};
			class FA18_F_MANUAL_7_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_MANUAL_7_UI.sqf";
			};
			class FA18_F_MANUAL_8_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_MANUAL_8_UI.sqf";
			};
			class FA18_F_RETURN_MAIN
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_RETURN_MAIN.sqf";
			};
			class FA18_F_RETURN_MANUAL_MAIN
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_RETURN_MANUAL_MAIN.sqf";
			};
			class FA18_F_SETTINGS_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_SETTINGS_UI.sqf";
			};
			class FA18_F_SKINS_UI
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_SKINS_UI.sqf";
			};
			class FA18_F_GENERIC_NAVY_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_GENERIC_NAVY_PAINT.sqf";
			};
			class FA18_F_GENERIC_RAAF_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_GENERIC_RAAF_PAINT.sqf";
			};
			class FA18_F_GENERIC_USMC_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_GENERIC_USMC_PAINT.sqf";
			};
			class FA18_F_VFA41CAG_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_VFA41CAG_PAINT.sqf";
			};
			class FA18_F_VFA41LOW_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_VFA41LOW_PAINT.sqf";
			};
			class FA18_F_VFA103CAG_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_VFA103CAG_PAINT.sqf";
			};
			class FA18_F_VFA103LOW_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_VFA103LOW_PAINT.sqf";
			};
			class FA18_F_VFA154CAG_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_VFA154CAG_PAINT.sqf";
			};
			class FA18_F_VFA154LOW_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_VFA154LOW_PAINT.sqf";
			};
			class FA18_F_VMFA225CAG_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_VMFA225CAG_PAINT.sqf";
			};
			class FA18_F_VMFA225LOW_PAINT
			{
				file = "\js_jc_fa18\scripts\SERVICE_MENU\functions\FA18_F_VMFA225LOW_PAINT.sqf";
			};
		};
		class FA18_Ejection
		{
			class FA18_Ejection_E
			{
				file = "\js_jc_fa18\scripts\EJECTION\FA18_Ejection_E.sqf";
			};
			class FA18_Ejection_forced_E
			{
				file = "\js_jc_fa18\scripts\EJECTION\FA18_Ejection_forced_E.sqf";
			};
			class FA18_Ejection_F
			{
				file = "\js_jc_fa18\scripts\EJECTION\FA18_Ejection_F.sqf";
			};
			class FA18_Ejection_F_comon
			{
				file = "\js_jc_fa18\scripts\EJECTION\FA18_Ejection_F_comon.sqf";
			};
			class FA18_Ejection_F_pilot
			{
				file = "\js_jc_fa18\scripts\EJECTION\FA18_Ejection_F_pilot.sqf";
			};
			class FA18_Ejection_F_wso
			{
				file = "\js_jc_fa18\scripts\EJECTION\FA18_Ejection_F_wso.sqf";
			};
			class FA18_Ejection_forced_F
			{
				file = "\js_jc_fa18\scripts\EJECTION\FA18_Ejection_forced_F.sqf";
			};
		};
		class FA18_FX
		{
			class FA18_FX_Afterburner
			{
				file = "\js_jc_fa18\scripts\FX\FA18_FX_Afterburner.sqf";
			};
			class FA18_FX_Afterburner_anim_end
			{
				file = "\js_jc_fa18\scripts\FX\FA18_FX_Afterburner_anim_end.sqf";
			};
			class FA18_FX_Afterburner_anim_start
			{
				file = "\js_jc_fa18\scripts\FX\FA18_FX_Afterburner_anim_start.sqf";
			};
			class FA18_FX_ejection
			{
				file = "\js_jc_fa18\scripts\FX\FA18_FX_ejection.sqf";
			};
			class FA18_FX_Gforce
			{
				file = "\js_jc_fa18\scripts\FX\FA18_FX_Gforce.sqf";
			};
			class FA18_FX_Sonic_Boom
			{
				file = "\js_jc_fa18\scripts\FX\FA18_FX_Sonic_Boom.sqf";
			};
		};
		class FA18_Interaction
		{
			class FA18_GPS_TARGETING_INIT
			{
				file = "\js_jc_fa18\scripts\TARGETING_SYSTEM\functions\FA18_GPS_TARGETING_INIT.sqf";
			};
			class FA18_GPS_TARGETING_SYS
			{
				file = "\js_jc_fa18\scripts\TARGETING_SYSTEM\functions\FA18_GPS_TARGETING_SYS.sqf";
			};
			class FA18_GPS_TARGETING_CANCEL
			{
				file = "\js_jc_fa18\scripts\TARGETING_SYSTEM\functions\FA18_GPS_TARGETING_CANCEL.sqf";
			};
		};
		class FA18_INIT_MODULE
		{
			class FA18E_Init_module
			{
				file = "\js_jc_fa18\scripts\MODULES\FA18_E_Init_module.sqf";
			};
			class FA18E_Exec_module
			{
				file = "\js_jc_fa18\scripts\MODULES\FA18_E_Exec_module.sqf";
			};
			class FA18F_Init_module
			{
				file = "\js_jc_fa18\scripts\MODULES\FA18_F_Init_module.sqf";
			};
			class FA18F_Exec_module
			{
				file = "\js_jc_fa18\scripts\MODULES\FA18_F_Exec_module.sqf";
			};
		};
	};
};
class CfgCloudlets
{
	class Default;
	class FX_FA18_BodyTrail: Default
	{
		interval = 0.0003;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 360;
		ignoreWind = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.0001;
		moveVelocity[] = {"speedX","speedY","speedZ"};
		rotationVelocity = 1;
		weight = 1.274;
		volume = 1;
		rubbing = 0.18;
		size[] = {1.2};
		sizeCoef = 1;
		color[] = {{1,1,1,0.1},{1,1,1,0.2},{1,1,1,0.1},{1,1,1,0}};
		colorCoef[] = {1,1,1,"(accelY interpolate [88,250,0,1]) * ((altitude*altitude) interpolate [400,40000,2,0.5])"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 0.01;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.0001;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class FX_FA18_WingTrail: Default
	{
		interval = 0.0003;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 16;
		particleFSLoop = 0;
		angleVar = 360;
		ignoreWind = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.25;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.274;
		volume = 1;
		rubbing = 0.18;
		size[] = {0.18};
		sizeCoef = 1;
		color[] = {{1,1,1,0.1},{1,1,1,0.2},{1,1,1,0.1},{1,1,1,0}};
		colorCoef[] = {1,1,1,"(accelY interpolate [38,85,0,1]) * ((altitude*altitude) interpolate [400,40000,1.2,0.5])"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 0.01;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};
class FX_FA18_Fuselagevapour
{
	class FX_FA18_BodyTrail_LOW
	{
		simulation = "particles";
		type = "FX_FA18_BodyTrail";
		qualityLevel = 0;
		enabled = "accelY interpolate [89.9999999,90,-1,1]";
	};
	class FX_FA18_BodyTrail_MD
	{
		simulation = "particles";
		type = "FX_FA18_BodyTrail";
		qualityLevel = 1;
		enabled = "accelY interpolate [89.9999999,90,-1,1]";
	};
	class FX_FA18_BodyTrail_HD
	{
		simulation = "particles";
		type = "FX_FA18_BodyTrail";
		qualityLevel = 2;
		enabled = "accelY interpolate [89.9999999,90,-1,1]";
	};
};
class FX_FA18_WingVortices
{
	class FX_FA18_WingTrail_LOW
	{
		simulation = "particles";
		type = "FX_FA18_WingTrail";
		qualityLevel = 0;
		enabled = "accelY interpolate [39.9999999,40,-1,1]";
	};
	class FX_FA18_WingTrail_MD
	{
		simulation = "particles";
		type = "FX_FA18_WingTrail";
		qualityLevel = 1;
		enabled = "accelY interpolate [39.9999999,40,-1,1]";
	};
	class FX_FA18_WingTrail_HD
	{
		simulation = "particles";
		type = "FX_FA18_WingTrail";
		qualityLevel = 2;
		enabled = "accelY interpolate [39.9999999,40,-1,1]";
	};
};
class FX_FA18_Missile_AA
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class FX_FA18_Missile_AA_HD
	{
		simulation = "particles";
		type = "Missile3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
	};
	class FX_FA18_Missile_AA_MD
	{
		simulation = "particles";
		type = "Missile3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
	};
	class FX_FA18_Missile_AA_LOW
	{
		simulation = "particles";
		type = "Missile3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 0;
	};
};
class FX_FA18_Missile_AG
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class FX_FA18_Missile_AG_HD
	{
		simulation = "particles";
		type = "Missile4";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
	};
	class FX_FA18_Missile_AG_MD
	{
		simulation = "particles";
		type = "Missile4";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
	};
	class FX_FA18_Missile_AG_LOW
	{
		simulation = "particles";
		type = "Missile4";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 0;
	};
};
class Eventhandlers;
class CfgVehicles
{
	class Plane;
	class PlaneWreck;
	class thingX;
	class Motorcycle;
	class Tank;
	class ArtilleryTarget;
	class LaserTarget;
	class WeaponHolder;
	class B_Pilot_F;
	class JS_JC_Pilot: B_Pilot_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_Pilot_F";
		displayName = "Fighter Pilot";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		modelSides[] = {3,1};
		uniformClass = "JS_JC_FA18_PilotCoveralls";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_suit_nato_co.paa","\A3\Characters_F\Common\Data\pilot_helmet_nato_co.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		linkedItems[] = {"JS_JC_FA18_PilotHelmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"JS_JC_FA18_PilotHelmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		cost = 165000;
	};
	class JS_JC_Pilot_Uniform_container: WeaponHolder
	{
		scope = 1;
		model = "\A3\Weapons_f\dummyweapon.p3d";
		accuracy = 0.2;
		forceSupply = 1;
		showWeaponCargo = 1;
		transportMaxMagazines = 10;
		transportMaxWeapons = 1;
		displayName = "$STR_cfgVehicles_WeaponHolder0";
		destrType = "DestructNo";
		transportMaxBackpacks = 0;
		isGround = 1;
		maximumLoad = 60;
		class TransportMagazines
		{
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 1;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_hgun_P07_F
			{
				weapon = "hgun_P07_F";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 1;
			};
			class _xx_h_watchcap_camo
			{
				name = "h_watchcap_camo";
				count = 1;
			};
			class _xx_NVGoggles
			{
				name = "NVGoggles";
				count = 1;
			};
		};
	};
	class JS_JC_FA18E: Plane
	{
		scope = 2;
		vehicleClass = "Air";
		side = 1;
		faction = "BLU_F";
		displayName = "F/A-18 E Super Hornet";
		author = "John_Spartan & Saul";
		crew = "JS_JC_Pilot";
		typicalCargo[] = {"JS_JC_Pilot"};
		crewVulnerable = 1;
		driverAction = "fz_f18_pilot";
		driverCanEject = 0;
		picture = "\js_jc_fa18\UI\fa18e_picture.paa";
		icon = "\js_jc_fa18\UI\fa18_icon.paa";
		mapSize = 13.62;
		unitInfoType = "Rsc_FA18_UnitInfo";
		simulation = "airplane";
		_generalMacro = "Plane";
		destrType = "DestructWreck";
		damageEffect = "AirDestructionEffects";
		model = "\js_jc_fa18\JC_JS_FZ_FA18E.p3d";
		animated = 1;
		extCameraPosition[] = {0,3,-20};
		availableForSupportTypes[] = {"CAS_Bombing"};
		hiddenSelections[] = {"camo_hull","camo_misc","camo_center_fueltank","camo_cockpit_1","camo_cockpit_2","camo_MFD","camo_glass","camo_ladder","burner_fire_1_left","burner_fire_1_right"};
		hiddenSelectionsTextures[] = {"\js_jc_fa18\data\fa18e_hull_co.paa","\js_jc_fa18\data\fa18_misc_co.paa","","\js_jc_fa18\data\fa18_cockpit1_co.paa","\js_jc_fa18\data\fa18_cockpit2_ca.paa","\js_jc_fa18\data\fa18_mfd_co.paa","\js_jc_fa18\data\fa18_glass_ca.paa","\js_jc_fa18\data\fa18_ladder_co.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa"};
		weapons[] = {"js_w_master_arms_safe","js_w_fa18_m61","js_w_fa18_aim9xLaucher","js_w_fa18_aim120cLaucher","js_w_fa18_MaverickLauncher","js_w_fa18_GBU38BombLauncher","js_w_fa18_fueltank_holder","js_w_fa18_CMFlareLauncher"};
		magazines[] = {"js_m_fa18_m61","js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1","js_m_fa18_Maverick_x1","js_m_fa18_Maverick_x1","js_m_fa18_bombrack_x1","js_m_fa18_bombrack_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1","js_m_fa18_GBU38_JDAM_x1","js_m_fa18_GBU38_JDAM_x1","js_m_fa18_GBU38_JDAM_x1","js_m_fa18_GBU38_JDAM_x1","js_m_fa18_empty","js_m_fa18_empty","js_m_fa18_empty","js_m_fa18_empty","js_m_fa18_wing_tank_x1","240Rnd_CMFlare_Chaff_Magazine"};
		canFloat = 0;
		driveOnComponent[] = {"ngear","lgear","rgear"};
		cabinOpening = 1;
		gearRetracting = 1;
		geardowntime = 3;
		gearuptime = 4.5;
		armor = 60;
		fuelCapacity = 1140;
		LockDetectionSystem = "2 + 4 + 8";
		incomingMissileDetectionSystem = 16;
		enableGPS = 1;
		radarType = 4;
		laserScanner = 1;
		artilleryScanner = 0;
		irTarget = 1;
		nvTarget = 0;
		nvScanner = 1;
		irScanRangeMin = 500;
		irScanRangeMax = 11500;
		irScanToEyeFactor = 5;
		irScanGround = 1;
		namesound = "Plane";
		envelope[] = {0,0.4,1.9,4,6.8,8.3,8.5,8,7.2,5.8,4,1.8,0.5,0};
		brakeDistance = 65;
		aileronSensitivity = 1.5;
		elevatorSensitivity = 0.9;
		wheelSteeringSensitivity = 1.5;
		flapsFrictionCoef = 0.2;
		landingSpeed = 200;
		landingAoa = "rad 10";
		acceleration = 200;
		maxSpeed = 1100;
		airFriction0[] = {100,50,12};
		airFriction1[] = {100,50,12};
		airFriction2[] = {100,50,12};
		noseDownCoef = 0;
		gunAimDown = 0;
		altFullForce = 10000;
		altNoForce = 9000;
		driverLeftHandAnimName = "throttle";
		driverRightHandAnimName = "stick";
		memoryPointLDust = "levy prach";
		memoryPointRDust = "pravy prach";
		memoryPointGun = "nosegun";
		memoryPointLMissile = "l strela";
		memoryPointRMissile = "p strela";
		memoryPointLRocket = "l raketa";
		memoryPointRRocket = "p raketa";
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		class TransportItems{};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"A3\Sounds_F\air\Plane_Fighter_03\getin",0.562341,1};
		soundGetOut[] = {"A3\Sounds_F\air\Plane_Fighter_03\getout",0.562341,1,40};
		soundDammage[] = {"",0.562341,1};
		soundEngineOnInt[] = {"js_jc_fa18\sounds\FX_FA18_engine_start_in",1,1};
		soundEngineOnExt[] = {"js_jc_fa18\sounds\FX_FA18_engine_start_ext",1,1,500};
		soundEngineOffInt[] = {"js_jc_fa18\sounds\FX_FA18_engine_shut_in",1,1};
		soundEngineOffExt[] = {"js_jc_fa18\sounds\FX_FA18_engine_shut_ext",1,1,500};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.1,1.5};
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_01\gear_up",0.794328,1,150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_01\gear_down",0.794328,1,150};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Up",0.630957,1,100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Down",0.630957,1,100};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_engine_low_ext",1,1,800};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_engine_hi_ext",1,1,1200};
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_engine_forsage_ext",2.5,1,1500};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14,3.92,2,0.5};
			};
			class WindNoiseOut
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_wind_ext",1.5,1,3500};
				frequency = "1";
				volume = "2*camPos*(speed factor[50, 100])";
			};
			class EngineLowIn
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_engine_low_in",1,1};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_engine_hi_in",1,1};
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_engine_forsage_in",1,1};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_wind_in",1,1};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};
		class MFD
		{
			class FA18_static_HUD
			{
				enableParallax = 0;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5,0.5};
					pos10[] = {1.225,1.1};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,1};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.485,"0.4 + 0.0285"};
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.485,0.52};
						pos10[] = {"0.485 + 0.514","0.52 + 0.514"};
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
						pos0[] = {0.485,0.45};
						pos10[] = {1.24,1.1};
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
				class Draw
				{
					alpha = 0.7;
					width = 5;
					color[] = {0,1,0,1};
					condition = "on";
					class PlaneW
					{
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						width = 5;
						points[] = {{"PlaneW",{-0.08,0},1},{"PlaneW",{-0.03,0},1},{"PlaneW",{-0.015,0.0283784},1},{"PlaneW",{0,0},1},{"PlaneW",{0.015,0.0283784},1},{"PlaneW",{0.03,0},1},{"PlaneW",{0.08,0},1}};
					};
					class HeadingArrow
					{
						type = "line";
						width = 5;
						points[] = {{{"0.485 - 0.02","0.08 + 0.03"},1},{{0.485,"0.08 + 0.01"},1},{{"0.485 + 0.02","0.08 + 0.03"},1}};
					};
					class HeadingLine
					{
						type = "line";
						width = 5;
						points[] = {{{0.28,0.08},1},{{0.72,0.08},1}};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1;
						width = 5;
						top = 0.28;
						center = 0.485;
						bottom = 0.72;
						lineXleft = "0.06 + 0.01";
						lineYright = "0.05 + 0.01";
						lineXleftMajor = "0.06 + 0.01";
						lineYrightMajor = "0.04 + 0.01";
						majorLineEach = 5;
						numberEach = 5;
						step = "18 / 9";
						stepSize = "(0.70 - 0.3) / 15";
						align = "center";
						scale = 1;
						pos[] = {0.27,0};
						right[] = {"0.27 + 0.065",0};
						down[] = {0.27,0.05};
					};
					class Left_box_speed_indicator
					{
						type = "line";
						width = 5;
						points[] = {{{0.08,0.3},1},{{"0.08 + 0.15",0.3},1},{{"0.08 + 0.15","0.3 + 0.04"},1},{{0.08,"0.3 + 0.04"},1},{{0.08,0.3},1}};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "center";
						scale = 1;
						pos[] = {{0.15,"0.27 + 0.025"},1};
						right[] = {{"0.15 + 0.06","0.27 + 0.025"},1};
						down[] = {{0.15,"0.27 + 0.0725"},1};
					};
					class Right_box_altitude_indicator
					{
						type = "line";
						width = 5;
						points[] = {{{0.92,0.3},1},{{"0.92 - 0.15",0.3},1},{{"0.92 - 0.15","0.3 + 0.04"},1},{{0.92,"0.3 + 0.04"},1},{{0.92,0.3},1}};
					};
					class AltitudeNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {{0.85,"0.27 + 0.025"},1};
						right[] = {{"0.85 + 0.06","0.27 + 0.025"},1};
						down[] = {{0.85,"0.27 + 0.0725"},1};
					};
					class StallGroup
					{
						type = "group";
						condition = "stall";
						color[] = {1,0,0};
						class StallText
						{
							type = "text";
							source = "static";
							text = "STALL";
							align = "center";
							scale = 1;
							pos[] = {{0.485,"0.5 + 0.025"},1};
							right[] = {{"0.485 + 0.08","0.5 + 0.025"},1};
							down[] = {{0.485,"0.5 + 0.0925"},1};
						};
					};
					class PitchNumber
					{
						type = "text";
						source = "horizonDive";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = {{0.17,"0.5 + 0.025"},1};
						right[] = {{"0.17 + 0.06","0.5 + 0.025"},1};
						down[] = {{0.17,"0.5 + 0.0725"},1};
					};
					class PitchText
					{
						type = "text";
						source = "static";
						text = "P:";
						align = "left";
						scale = 1;
						pos[] = {{0.15,"0.5 + 0.025"},1};
						right[] = {{"0.15 + 0.06","0.5 + 0.025"},1};
						down[] = {{0.15,"0.5 + 0.0725"},1};
					};
					class RollNumber
					{
						type = "text";
						source = "horizonBank";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = {{0.17,"0.54 + 0.025"},1};
						right[] = {{"0.17 + 0.06","0.54 + 0.025"},1};
						down[] = {{0.17,"0.54 + 0.0725"},1};
					};
					class RollText
					{
						type = "text";
						source = "static";
						text = "R:";
						align = "left";
						scale = 1;
						pos[] = {{0.15,"0.54 + 0.025"},1};
						right[] = {{"0.15 + 0.06","0.54 + 0.025"},1};
						down[] = {{0.15,"0.54 + 0.0725"},1};
					};
					class ClimbNumber
					{
						type = "text";
						source = "vspeed";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.17,"0.58 + 0.025"},1};
						right[] = {{"0.17 + 0.06","0.58 + 0.025"},1};
						down[] = {{0.17,"0.58 + 0.0725"},1};
					};
					class ClimbText
					{
						type = "text";
						source = "static";
						text = "C:";
						align = "left";
						scale = 1;
						pos[] = {{0.15,"0.58 + 0.025"},1};
						right[] = {{"0.15 + 0.06","0.58 + 0.025"},1};
						down[] = {{0.15,"0.58 + 0.0725"},1};
					};
					class FlapsGroup
					{
						type = "group";
						condition = "flaps";
						class FlapsText
						{
							type = "text";
							source = "static";
							text = "FLAPS";
							align = "right";
							scale = 1;
							pos[] = {{0.15,"0.7 + 0.025"},1};
							right[] = {{"0.15 + 0.06","0.7 + 0.025"},1};
							down[] = {{0.15,"0.7 + 0.0725"},1};
						};
					};
					class GearGroup
					{
						type = "group";
						condition = "ils";
						class GearText
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "right";
							scale = 1;
							pos[] = {{0.15,"0.74 + 0.025"},1};
							right[] = {{"0.15 + 0.06","0.74 + 0.025"},1};
							down[] = {{0.15,"0.74 + 0.0725"},1};
						};
					};
					class LightsGroup
					{
						type = "group";
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LLS";
							align = "left";
							scale = 1;
							pos[] = {{0.9,"0.7 + 0.025"},1};
							right[] = {{"0.9 + 0.06","0.7 + 0.025"},1};
							down[] = {{0.9,"0.7 + 0.0725"},1};
						};
					};
					class CollisionLightsGroup
					{
						type = "group";
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "COLL";
							align = "left";
							scale = 1;
							pos[] = {{0.9,"0.74 + 0.025"},1};
							right[] = {{"0.9 + 0.06","0.74 + 0.025"},1};
							down[] = {{0.9,"0.74 + 0.0725"},1};
						};
					};
					class WeaponName
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.2,"0.85 + 0.025"},1};
						right[] = {{"0.2 + 0.06","0.85 + 0.025"},1};
						down[] = {{0.2,"0.85 + 0.0725"},1};
					};
					class AmmoCount
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.2,"0.89 + 0.025"},1};
						right[] = {{"0.2 + 0.06","0.89 + 0.025"},1};
						down[] = {{0.2,"0.89 + 0.0725"},1};
					};
					class Horizont
					{
						clipTL[] = {0.2,0.2};
						clipBR[] = {0.8,0.8};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{"Level0",{-0.2,0},1},{"Level0",{-0.05,0},1},{},{"Level0",{0.05,0},1},{"Level0",{0.2,0},1}};
							};
							class LevelM5: Level0
							{
								type = "line";
								points[] = {{"LevelM5",{-0.2,-0.03},1},{"LevelM5",{-0.2,0},1},{"LevelM5",{-0.15,0},1},{},{"LevelM5",{-0.1,0},1},{"LevelM5",{-0.05,0},1},{},{"LevelM5",{0.05,0},1},{"LevelM5",{0.1,0},1},{},{"LevelM5",{0.15,0},1},{"LevelM5",{0.2,0},1},{"LevelM5",{0.2,-0.03},1}};
							};
							class LevelP5: Level0
							{
								type = "line";
								points[] = {{"LevelP5",{-0.2,0.03},1},{"LevelP5",{-0.2,0},1},{"LevelP5",{-0.05,0},1},{},{"LevelP5",{0.05,0},1},{"LevelP5",{0.2,0},1},{"LevelP5",{0.2,0.03},1}};
							};
							class LevelM10: Level0
							{
								type = "line";
								points[] = {{"LevelM10",{-0.2,-0.03},1},{"LevelM10",{-0.2,0},1},{"LevelM10",{-0.15,0},1},{},{"LevelM10",{-0.1,0},1},{"LevelM10",{-0.05,0},1},{},{"LevelM10",{0.05,0},1},{"LevelM10",{0.1,0},1},{},{"LevelM10",{0.15,0},1},{"LevelM10",{0.2,0},1},{"LevelM10",{0.2,-0.03},1}};
							};
							class LevelP10: Level0
							{
								type = "line";
								points[] = {{"LevelP10",{-0.2,0.03},1},{"LevelP10",{-0.2,0},1},{"LevelP10",{-0.05,0},1},{},{"LevelP10",{0.05,0},1},{"LevelP10",{0.2,0},1},{"LevelP10",{0.2,0.03},1}};
							};
							class LevelM15: Level0
							{
								type = "line";
								points[] = {{"LevelM15",{-0.2,-0.03},1},{"LevelM15",{-0.2,0},1},{"LevelM15",{-0.15,0},1},{},{"LevelM15",{-0.1,0},1},{"LevelM15",{-0.05,0},1},{},{"LevelM15",{0.05,0},1},{"LevelM15",{0.1,0},1},{},{"LevelM15",{0.15,0},1},{"LevelM15",{0.2,0},1},{"LevelM15",{0.2,-0.03},1}};
							};
							class LevelP15: Level0
							{
								type = "line";
								points[] = {{"LevelP15",{-0.2,0.03},1},{"LevelP15",{-0.2,0},1},{"LevelP15",{-0.05,0},1},{},{"LevelP15",{0.05,0},1},{"LevelP15",{0.2,0},1},{"LevelP15",{0.2,0.03},1}};
							};
							class LevelM20: Level0
							{
								type = "line";
								points[] = {{"LevelM20",{-0.2,-0.03},1},{"LevelM20",{-0.2,0},1},{"LevelM20",{-0.15,0},1},{},{"LevelM20",{-0.1,0},1},{"LevelM20",{-0.05,0},1},{},{"LevelM20",{0.05,0},1},{"LevelM20",{0.1,0},1},{},{"LevelM20",{0.15,0},1},{"LevelM20",{0.2,0},1},{"LevelM20",{0.2,-0.03},1}};
							};
							class LevelP20: Level0
							{
								type = "line";
								points[] = {{"LevelP20",{-0.2,0.03},1},{"LevelP20",{-0.2,0},1},{"LevelP20",{-0.05,0},1},{},{"LevelP20",{0.05,0},1},{"LevelP20",{0.2,0},1},{"LevelP20",{0.2,0.03},1}};
							};
							class LevelM25: Level0
							{
								type = "line";
								points[] = {{"LevelM25",{-0.2,-0.03},1},{"LevelM25",{-0.2,0},1},{"LevelM25",{-0.15,0},1},{},{"LevelM25",{-0.1,0},1},{"LevelM25",{-0.05,0},1},{},{"LevelM25",{0.05,0},1},{"LevelM25",{0.1,0},1},{},{"LevelM25",{0.15,0},1},{"LevelM25",{0.2,0},1},{"LevelM25",{0.2,-0.03},1}};
							};
							class LevelP25: Level0
							{
								type = "line";
								points[] = {{"LevelP25",{-0.2,0.03},1},{"LevelP25",{-0.2,0},1},{"LevelP25",{-0.05,0},1},{},{"LevelP25",{0.05,0},1},{"LevelP25",{0.2,0},1},{"LevelP25",{0.2,0.03},1}};
							};
							class LevelM30: Level0
							{
								type = "line";
								points[] = {{"LevelM30",{-0.2,-0.03},1},{"LevelM30",{-0.2,0},1},{"LevelM30",{-0.15,0},1},{},{"LevelM30",{-0.1,0},1},{"LevelM30",{-0.05,0},1},{},{"LevelM30",{0.05,0},1},{"LevelM30",{0.1,0},1},{},{"LevelM30",{0.15,0},1},{"LevelM30",{0.2,0},1},{"LevelM30",{0.2,-0.03},1}};
							};
							class LevelP30: Level0
							{
								type = "line";
								points[] = {{"LevelP30",{-0.2,0.03},1},{"LevelP30",{-0.2,0},1},{"LevelP30",{-0.05,0},1},{},{"LevelP30",{0.05,0},1},{"LevelP30",{0.2,0},1},{"LevelP30",{0.2,0.03},1}};
							};
							class LevelM35: Level0
							{
								type = "line";
								points[] = {{"LevelM35",{-0.2,-0.03},1},{"LevelM35",{-0.2,0},1},{"LevelM35",{-0.15,0},1},{},{"LevelM35",{-0.1,0},1},{"LevelM35",{-0.05,0},1},{},{"LevelM35",{0.05,0},1},{"LevelM35",{0.1,0},1},{},{"LevelM35",{0.15,0},1},{"LevelM35",{0.2,0},1},{"LevelM35",{0.2,-0.03},1}};
							};
							class LevelP35: Level0
							{
								type = "line";
								points[] = {{"LevelP35",{-0.2,0.03},1},{"LevelP35",{-0.2,0},1},{"LevelP35",{-0.05,0},1},{},{"LevelP35",{0.05,0},1},{"LevelP35",{0.2,0},1},{"LevelP35",{0.2,0.03},1}};
							};
							class LevelM40: Level0
							{
								type = "line";
								points[] = {{"LevelM40",{-0.2,-0.03},1},{"LevelM40",{-0.2,0},1},{"LevelM40",{-0.15,0},1},{},{"LevelM40",{-0.1,0},1},{"LevelM40",{-0.05,0},1},{},{"LevelM40",{0.05,0},1},{"LevelM40",{0.1,0},1},{},{"LevelM40",{0.15,0},1},{"LevelM40",{0.2,0},1},{"LevelM40",{0.2,-0.03},1}};
							};
							class LevelP40: Level0
							{
								type = "line";
								points[] = {{"LevelP40",{-0.2,0.03},1},{"LevelP40",{-0.2,0},1},{"LevelP40",{-0.05,0},1},{},{"LevelP40",{0.05,0},1},{"LevelP40",{0.2,0},1},{"LevelP40",{0.2,0.03},1}};
							};
							class LevelM45: Level0
							{
								type = "line";
								points[] = {{"LevelM45",{-0.2,-0.03},1},{"LevelM45",{-0.2,0},1},{"LevelM45",{-0.15,0},1},{},{"LevelM45",{-0.1,0},1},{"LevelM45",{-0.05,0},1},{},{"LevelM45",{0.05,0},1},{"LevelM45",{0.1,0},1},{},{"LevelM45",{0.15,0},1},{"LevelM45",{0.2,0},1},{"LevelM45",{0.2,-0.03},1}};
							};
							class LevelP45: Level0
							{
								type = "line";
								points[] = {{"LevelP45",{-0.2,0.03},1},{"LevelP45",{-0.2,0},1},{"LevelP45",{-0.05,0},1},{},{"LevelP45",{0.05,0},1},{"LevelP45",{0.2,0},1},{"LevelP45",{0.2,0.03},1}};
							};
							class LevelM50: Level0
							{
								type = "line";
								points[] = {{"LevelM50",{-0.2,-0.03},1},{"LevelM50",{-0.2,0},1},{"LevelM50",{-0.15,0},1},{},{"LevelM50",{-0.1,0},1},{"LevelM50",{-0.05,0},1},{},{"LevelM50",{0.05,0},1},{"LevelM50",{0.1,0},1},{},{"LevelM50",{0.15,0},1},{"LevelM50",{0.2,0},1},{"LevelM50",{0.2,-0.03},1}};
							};
							class LevelP50: Level0
							{
								type = "line";
								points[] = {{"LevelP50",{-0.2,0.03},1},{"LevelP50",{-0.2,0},1},{"LevelP50",{-0.05,0},1},{},{"LevelP50",{0.05,0},1},{"LevelP50",{0.2,0},1},{"LevelP50",{0.2,0.03},1}};
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
								right[] = {"Level0",{-0.165,-0.025},1};
								down[] = {"Level0",{-0.23,0.05},1};
							};
							class VALM_2_0: VALM_1_0
							{
								align = "right";
								pos[] = {"Level0",{0.22,-0.025},1};
								right[] = {"Level0",{0.285,-0.025},1};
								down[] = {"Level0",{0.22,0.05},1};
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
								right[] = {"LevelP5",{-0.165,0.035},1};
								down[] = {"LevelP5",{-0.23,0.11},1};
							};
							class VALP_2_5: VALP_1_5
							{
								align = "right";
								pos[] = {"LevelP5",{0.22,0.035},1};
								right[] = {"LevelP5",{0.285,0.035},1};
								down[] = {"LevelP5",{0.22,0.11},1};
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
								right[] = {"LevelP10",{-0.165,0.035},1};
								down[] = {"LevelP10",{-0.23,0.11},1};
							};
							class VALP_2_10: VALP_1_10
							{
								align = "right";
								pos[] = {"LevelP10",{0.22,0.035},1};
								right[] = {"LevelP10",{0.285,0.035},1};
								down[] = {"LevelP10",{0.22,0.11},1};
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
								right[] = {"LevelP15",{-0.165,0.035},1};
								down[] = {"LevelP15",{-0.23,0.11},1};
							};
							class VALP_2_15: VALP_1_15
							{
								align = "right";
								pos[] = {"LevelP15",{0.22,0.035},1};
								right[] = {"LevelP15",{0.285,0.035},1};
								down[] = {"LevelP15",{0.22,0.11},1};
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
								right[] = {"LevelP20",{-0.165,0.035},1};
								down[] = {"LevelP20",{-0.23,0.11},1};
							};
							class VALP_2_20: VALP_1_20
							{
								align = "right";
								pos[] = {"LevelP20",{0.22,0.035},1};
								right[] = {"LevelP20",{0.285,0.035},1};
								down[] = {"LevelP20",{0.22,0.11},1};
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
								right[] = {"LevelP25",{-0.165,0.035},1};
								down[] = {"LevelP25",{-0.23,0.11},1};
							};
							class VALP_2_25: VALP_1_25
							{
								align = "right";
								pos[] = {"LevelP25",{0.22,0.035},1};
								right[] = {"LevelP25",{0.285,0.035},1};
								down[] = {"LevelP25",{0.22,0.11},1};
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
								right[] = {"LevelP30",{-0.165,0.035},1};
								down[] = {"LevelP30",{-0.23,0.11},1};
							};
							class VALP_2_30: VALP_1_30
							{
								align = "right";
								pos[] = {"LevelP30",{0.22,0.035},1};
								right[] = {"LevelP30",{0.285,0.035},1};
								down[] = {"LevelP30",{0.22,0.11},1};
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
								right[] = {"LevelP35",{-0.165,0.035},1};
								down[] = {"LevelP35",{-0.23,0.11},1};
							};
							class VALP_2_35: VALP_1_35
							{
								align = "right";
								pos[] = {"LevelP35",{0.22,0.035},1};
								right[] = {"LevelP35",{0.285,0.035},1};
								down[] = {"LevelP35",{0.22,0.11},1};
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
								right[] = {"LevelP40",{-0.165,0.035},1};
								down[] = {"LevelP40",{-0.23,0.11},1};
							};
							class VALP_2_40: VALP_1_40
							{
								align = "right";
								pos[] = {"LevelP40",{0.22,0.035},1};
								right[] = {"LevelP40",{0.285,0.035},1};
								down[] = {"LevelP40",{0.22,0.11},1};
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
								right[] = {"LevelP45",{-0.165,0.035},1};
								down[] = {"LevelP45",{-0.23,0.11},1};
							};
							class VALP_2_45: VALP_1_45
							{
								align = "right";
								pos[] = {"LevelP45",{0.22,0.035},1};
								right[] = {"LevelP45",{0.285,0.035},1};
								down[] = {"LevelP45",{0.22,0.11},1};
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
								right[] = {"LevelP50",{-0.165,0.035},1};
								down[] = {"LevelP50",{-0.23,0.11},1};
							};
							class VALP_2_50: VALP_1_50
							{
								align = "right";
								pos[] = {"LevelP50",{0.22,0.035},1};
								right[] = {"LevelP50",{0.285,0.035},1};
								down[] = {"LevelP50",{0.22,0.11},1};
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
								right[] = {"LevelM5",{-0.165,-0.085},1};
								down[] = {"LevelM5",{-0.23,-0.01},1};
							};
							class VALM_2_5: VALM_1_5
							{
								align = "right";
								pos[] = {"LevelM5",{0.22,-0.085},1};
								right[] = {"LevelM5",{0.285,-0.085},1};
								down[] = {"LevelM5",{0.22,-0.01},1};
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
								right[] = {"LevelM10",{-0.165,-0.085},1};
								down[] = {"LevelM10",{-0.23,-0.01},1};
							};
							class VALM_2_10: VALM_1_10
							{
								align = "right";
								pos[] = {"LevelM10",{0.22,-0.085},1};
								right[] = {"LevelM10",{0.285,-0.085},1};
								down[] = {"LevelM10",{0.22,-0.01},1};
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
								right[] = {"LevelM15",{-0.165,-0.085},1};
								down[] = {"LevelM15",{-0.23,-0.01},1};
							};
							class VALM_2_15: VALM_1_15
							{
								align = "right";
								pos[] = {"LevelM15",{0.22,-0.085},1};
								right[] = {"LevelM15",{0.285,-0.085},1};
								down[] = {"LevelM15",{0.22,-0.01},1};
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
								right[] = {"LevelM20",{-0.165,-0.085},1};
								down[] = {"LevelM20",{-0.23,-0.01},1};
							};
							class VALM_2_20: VALM_1_20
							{
								align = "right";
								pos[] = {"LevelM20",{0.22,-0.085},1};
								right[] = {"LevelM20",{0.285,-0.085},1};
								down[] = {"LevelM20",{0.22,-0.01},1};
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
								right[] = {"LevelM25",{-0.165,-0.085},1};
								down[] = {"LevelM25",{-0.23,-0.01},1};
							};
							class VALM_2_25: VALM_1_25
							{
								align = "right";
								pos[] = {"LevelM25",{0.22,-0.085},1};
								right[] = {"LevelM25",{0.285,-0.085},1};
								down[] = {"LevelM25",{0.22,-0.01},1};
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
								right[] = {"LevelM30",{-0.165,-0.085},1};
								down[] = {"LevelM30",{-0.23,-0.01},1};
							};
							class VALM_2_30: VALM_1_30
							{
								align = "right";
								pos[] = {"LevelM30",{0.22,-0.085},1};
								right[] = {"LevelM30",{0.285,-0.085},1};
								down[] = {"LevelM30",{0.22,-0.01},1};
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
								right[] = {"LevelM35",{-0.165,-0.085},1};
								down[] = {"LevelM35",{-0.23,-0.01},1};
							};
							class VALM_2_35: VALM_1_35
							{
								align = "right";
								pos[] = {"LevelM35",{0.22,-0.085},1};
								right[] = {"LevelM35",{0.285,-0.085},1};
								down[] = {"LevelM35",{0.22,-0.01},1};
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
								right[] = {"LevelM40",{-0.165,-0.085},1};
								down[] = {"LevelM40",{-0.23,-0.01},1};
							};
							class VALM_2_40: VALM_1_40
							{
								align = "right";
								pos[] = {"LevelM40",{0.22,-0.085},1};
								right[] = {"LevelM40",{0.285,-0.085},1};
								down[] = {"LevelM40",{0.22,-0.01},1};
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
								right[] = {"LevelM45",{-0.165,-0.085},1};
								down[] = {"LevelM45",{-0.23,-0.01},1};
							};
							class VALM_2_45: VALM_1_45
							{
								align = "right";
								pos[] = {"LevelM45",{0.22,-0.085},1};
								right[] = {"LevelM45",{0.285,-0.085},1};
								down[] = {"LevelM45",{0.22,-0.01},1};
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
								right[] = {"LevelM50",{-0.165,-0.085},1};
								down[] = {"LevelM50",{-0.23,-0.01},1};
							};
							class VALM_2_50: VALM_1_50
							{
								align = "right";
								pos[] = {"LevelM50",{0.22,-0.085},1};
								right[] = {"LevelM50",{0.285,-0.085},1};
								down[] = {"LevelM50",{0.22,-0.01},1};
							};
						};
					};
				};
			};
			class FA18_Parallax_HUD
			{
				enableParallax = 1;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.485,0.33};
					pos10[] = {1.225,1.1};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				class Bones
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
						pos0[] = {0.485,0.52};
						pos10[] = {"0.485 + 0.514","0.52 + 0.514"};
					};
				};
				class Draw
				{
					alpha = 0.8;
					width = 5;
					color[] = {0,1,0,1};
					condition = "on";
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 5;
						points[] = {{"Velocity",{0,-0.02},1},{"Velocity",{0.01,-0.01732},1},{"Velocity",{0.01732,-0.01},1},{"Velocity",{0.02,0},1},{"Velocity",{0.01732,0.01},1},{"Velocity",{0.01,0.01732},1},{"Velocity",{0,0.02},1},{"Velocity",{-0.01,0.01732},1},{"Velocity",{-0.01732,0.01},1},{"Velocity",{-0.02,0},1},{"Velocity",{-0.01732,-0.01},1},{"Velocity",{-0.01,-0.01732},1},{"Velocity",{0,-0.02},1},{},{"Velocity",{0.04,0},1},{"Velocity",{0.02,0},1},{},{"Velocity",{-0.04,0},1},{"Velocity",{-0.02,0},1},{},{"Velocity",{0,-0.04},1},{"Velocity",{0,-0.02},1}};
					};
					class RadarTargets
					{
						width = 5;
						type = "radar";
						pos0[] = {0.485,0.33};
						pos10[] = {1.225,1.1};
						points[] = {{{-0.05,-0.0472973},1},{{0.05,-0.0472973},1},{{0.05,0.0472973},1},{{-0.05,0.0472973},1},{{-0.05,-0.0472973},1}};
					};
					class MGunCrosshairGroup
					{
						type = "group";
						condition = "mgun";
						class MGunCrosshair
						{
							type = "line";
							width = 5;
							points[] = {{"WeaponAim",{0.01,0},1},{"WeaponAim",{-0.01,0},1},{},{"WeaponAim",{0,0.00945946},1},{"WeaponAim",{0,-0.00945946},1},{},{"WeaponAim",{0,-0.0662162},1},{"WeaponAim",{0.049,-0.0463514},1},{"WeaponAim",{0.07,0},1},{"WeaponAim",{0.049,0.0463514},1},{"WeaponAim",{0,0.0662162},1},{"WeaponAim",{-0.049,0.0463514},1},{"WeaponAim",{-0.07,0},1},{"WeaponAim",{-0.049,-0.0463514},1},{"WeaponAim",{0,-0.0662162},1},{},{"WeaponAim",{0,-0.132432},1},{"WeaponAim",{0.07,-0.115216},1},{"WeaponAim",{0.1218,-0.0662162},1},{"WeaponAim",{0.14,0},1},{"WeaponAim",{0.1218,0.0662162},1},{"WeaponAim",{0.07,0.115216},1},{"WeaponAim",{0,0.132432},1},{"WeaponAim",{-0.07,0.115216},1},{"WeaponAim",{-0.1218,0.0662162},1},{"WeaponAim",{-0.14,0},1},{"WeaponAim",{-0.1218,-0.0662162},1},{"WeaponAim",{-0.07,-0.115216},1},{"WeaponAim",{0,-0.132432},1},{},{"WeaponAim",{0,-0.132432},1},{"WeaponAim",{0,-0.151351},1},{},{"WeaponAim",{-0.07,-0.11469},1},{"WeaponAim",{-0.08,-0.131074},1},{},{"WeaponAim",{-0.121244,-0.0662162},1},{"WeaponAim",{-0.138564,-0.0756757},1},{},{"WeaponAim",{-0.14,5.78881e-009},1},{"WeaponAim",{-0.16,6.61578e-009},1},{},{"WeaponAim",{-0.121244,0.0662162},1},{"WeaponAim",{-0.138564,0.0756757},1},{},{"WeaponAim",{-0.07,0.11469},1},{"WeaponAim",{-0.08,0.131074},1},{},{"WeaponAim",{1.22392e-008,0.132432},1},{"WeaponAim",{1.39876e-008,0.151351},1},{},{"WeaponAim",{0.07,0.11469},1},{"WeaponAim",{0.08,0.131074},1},{},{"WeaponAim",{0.121244,0.0662162},1},{"WeaponAim",{0.138564,0.0756757},1},{},{"WeaponAim",{0.14,-1.57924e-009},1},{"WeaponAim",{0.16,-1.80485e-009},1},{},{"WeaponAim",{0.121244,-0.0662162},1},{"WeaponAim",{0.138564,-0.0756757},1},{},{"WeaponAim",{0.07,-0.11469},1},{"WeaponAim",{0.08,-0.131074},1},{}};
						};
					};
					class AAMissileCrosshairGroup
					{
						type = "group";
						condition = "AAmissile";
						class AAMissileCrosshair
						{
							type = "line";
							width = 5;
							points[] = {{"WeaponAim",{0,-0.25},1},{"WeaponAim",{0.0434,-0.2462},1},{"WeaponAim",{0.0855,-0.234925},1},{"WeaponAim",{0.125,-0.2165},1},{"WeaponAim",{0.1607,-0.1915},1},{"WeaponAim",{0.1915,-0.1607},1},{"WeaponAim",{0.2165,-0.125},1},{"WeaponAim",{0.234925,-0.0855},1},{"WeaponAim",{0.2462,-0.0434},1},{"WeaponAim",{0.25,0},1},{"WeaponAim",{0.2462,0.0434},1},{"WeaponAim",{0.234925,0.0855},1},{"WeaponAim",{0.2165,0.125},1},{"WeaponAim",{0.1915,0.1607},1},{"WeaponAim",{0.1607,0.1915},1},{"WeaponAim",{0.125,0.2165},1},{"WeaponAim",{0.0855,0.234925},1},{"WeaponAim",{0.0434,0.2462},1},{"WeaponAim",{0,0.25},1},{"WeaponAim",{-0.0434,0.2462},1},{"WeaponAim",{-0.0855,0.234925},1},{"WeaponAim",{-0.125,0.2165},1},{"WeaponAim",{-0.1607,0.1915},1},{"WeaponAim",{-0.1915,0.1607},1},{"WeaponAim",{-0.2165,0.125},1},{"WeaponAim",{-0.234925,0.0855},1},{"WeaponAim",{-0.2462,0.0434},1},{"WeaponAim",{-0.25,0},1},{"WeaponAim",{-0.2462,-0.0434},1},{"WeaponAim",{-0.234925,-0.0855},1},{"WeaponAim",{-0.2165,-0.125},1},{"WeaponAim",{-0.1915,-0.1607},1},{"WeaponAim",{-0.1607,-0.1915},1},{"WeaponAim",{-0.125,-0.2165},1},{"WeaponAim",{-0.0855,-0.234925},1},{"WeaponAim",{-0.0434,-0.2462},1},{"WeaponAim",{0,-0.25},1}};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition = "ATmissile";
						type = "group";
						class ATMissileCrosshair
						{
							type = "line";
							width = 5;
							points[] = {{"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{-0.15,"-0.15 + 0.02"},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{-0.15,"0.15 - 0.02"},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{0.15,"-0.15 + 0.02"},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{0.15,"0.15 - 0.02"},1},{},{"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{"-0.15 + 0.02",-0.15},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{"-0.15 + 0.02",0.15},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{"0.15 - 0.02",-0.15},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{"0.15 - 0.02",0.15},1}};
						};
					};
					class BombCrosshairGroup
					{
						type = "group";
						condition = "bomb";
						class BombCrosshair
						{
							type = "line";
							width = 5;
							points[] = {{"WeaponAim",{0,-0.1},1},{"WeaponAim",{0.01736,-0.09848},1},{"WeaponAim",{0.0342,-0.09397},1},{"WeaponAim",{0.05,-0.0866},1},{"WeaponAim",{0.06428,-0.0766},1},{"WeaponAim",{0.0766,-0.06428},1},{"WeaponAim",{0.0866,-0.05},1},{"WeaponAim",{0.09397,-0.0342},1},{"WeaponAim",{0.09848,-0.01736},1},{"WeaponAim",{0.1,0},1},{"WeaponAim",{0.09848,0.01736},1},{"WeaponAim",{0.09397,0.0342},1},{"WeaponAim",{0.0866,0.05},1},{"WeaponAim",{0.0766,0.06428},1},{"WeaponAim",{0.06428,0.0766},1},{"WeaponAim",{0.05,0.0866},1},{"WeaponAim",{0.0342,0.09397},1},{"WeaponAim",{0.01736,0.09848},1},{"WeaponAim",{0,0.1},1},{"WeaponAim",{-0.01736,0.09848},1},{"WeaponAim",{-0.0342,0.09397},1},{"WeaponAim",{-0.05,0.0866},1},{"WeaponAim",{-0.06428,0.0766},1},{"WeaponAim",{-0.0766,0.06428},1},{"WeaponAim",{-0.0866,0.05},1},{"WeaponAim",{-0.09397,0.0342},1},{"WeaponAim",{-0.09848,0.01736},1},{"WeaponAim",{-0.1,0},1},{"WeaponAim",{-0.09848,-0.01736},1},{"WeaponAim",{-0.09397,-0.0342},1},{"WeaponAim",{-0.0866,-0.05},1},{"WeaponAim",{-0.0766,-0.06428},1},{"WeaponAim",{-0.06428,-0.0766},1},{"WeaponAim",{-0.05,-0.0866},1},{"WeaponAim",{-0.0342,-0.09397},1},{"WeaponAim",{-0.01736,-0.09848},1},{"WeaponAim",{0,-0.1},1},{},{"Velocity",0.001,"WeaponAim",{0,0},1},{"Velocity",{0,0},1}};
						};
					};
				};
			};
		};
		class RenderTargets
		{
			class Center_Pilot_Mirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP_mirror_c";
					pointDirection = "PIP_mirror_c_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class Left_Pilot_Mirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP_mirror_l";
					pointDirection = "PIP_mirror_l_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class Right_Pilot_Mirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP_mirror_r";
					pointDirection = "PIP_mirror_r_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class HUD_nvg
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "PIP_hud_nvg";
					pointDirection = "PIP_hud_nvg_dir";
					renderQuality = 2;
					renderVisionMode = 1;
					fov = 0.155;
				};
			};
		};
		class AnimationSources
		{
			class lelev_off
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class relev_off
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rightgear
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class leftgear
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class lgearpist
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class lgearsus
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class rgearpist
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class rgearsus
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class n_sus
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class n_sus2
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class rgear_rot
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class lgear_rot
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class frontgear
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class lgdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rin_lgdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rou_lgdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rgdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rin_rgdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rou_rgdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class f_ndoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class f_nrdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class f_ndoor2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class r_ndoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rear_ndoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class fuel_probe
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class fuel_drogue
			{
				source = "user";
				animPeriod = 8;
				initPhase = 0;
			};
			class auxtank_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class eject_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class ab_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class sonic_boom_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class spd_accelerator
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class bottles
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class ewsfail
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class gearfail
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class flarecount
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class firewep
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class fired
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class service_menu_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class rearming_done_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class master_arms_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class paint_scheme_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class canopy
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class r_wingfold
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class l_wingfold
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class tailhook
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class map_X
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class map_Y
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class map_icon_x
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class map_icon_y
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class commap_X
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class commap_Y
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class fuel_int
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class fuel_extl
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class fuel_extr
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class fuel_extc
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class le_fire
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class re_fire
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class mstr_caut
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class rmfd_fl
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class lmfd_fl
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class map_fl
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class engd_fl
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class upfrnt_fl
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class eng_fail
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class ccip_length
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class ccip_rot
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class afterburner_left
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			class afterburner_right
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			class afterburner_left_strech
			{
				source = "user";
				animPeriod = 1.5;
				initPhase = 0;
			};
			class afterburner_right_strech
			{
				source = "user";
				animPeriod = 1.5;
				initPhase = 0;
			};
			class HUD_pip
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			class Ladder_GetIn
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			class Formation_markers
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			class Buddy_Pod_attach
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			class GPS_TGT_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class GPS_TGT_CLEAR_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class GPS_TGT_switch_wso
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class GPS_TGT_CLEAR_switch_wso
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class rcanopy_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class ejection_seat_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class ejection_seat_wso_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class init_done_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class tailhook_action_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Mirrors_pip_hide
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class WSO_pip_hide
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class throttle
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_1
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_2
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_3
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_4
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_5
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_6
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_7
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_8
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_9
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_10
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_1
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_2
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_3
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_4
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_5
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_6
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_7
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_8
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_9
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_10
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_1
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_2
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_3
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_4
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_5
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_6
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_7
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_8
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_9
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_10
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_1
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_2
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_3
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_4
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_5
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_6
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_7
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_8
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_9
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_10
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class pylon_3_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class pylon_4_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class pylon_5_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class pylon_6_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class pylon_7_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class pylon_8_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
		};
		class ViewPilot
		{
			initFov = 1;
			minFov = 0.6;
			maxFov = 1;
			initAngleX = 0;
			minAngleX = -35;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -130;
			maxAngleY = 130;
			minMoveX = -0.2;
			maxMoveX = 0.2;
			minMoveY = -0.025;
			maxMoveY = 0.1;
			minMoveZ = -0.2;
			maxMoveZ = 0.2;
		};
		class turrets{};
		class Exhausts
		{
			class Exhaust_left
			{
				position = "Exhausts_start_left";
				direction = "Exhausts_end_left";
				effect = "ExhaustsEffectPlane";
			};
			class Exhaust_right
			{
				position = "Exhausts_start_right";
				direction = "Exhausts_end_right";
				effect = "ExhaustsEffectPlane";
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "FX_FA18_WingVortices";
				position = "wingtip_marker_light_green";
			};
			class WingTipRight
			{
				effectName = "FX_FA18_WingVortices";
				position = "wingtip_marker_light_red";
			};
			class BodyLeft_inner_1
			{
				effectName = "FX_FA18_Fuselagevapour";
				position = "body_vapour_L_1";
			};
			class BodyLeft_inner_2
			{
				effectName = "FX_FA18_Fuselagevapour";
				position = "body_vapour_L_2";
			};
			class BodyLeft_inner_3
			{
				effectName = "FX_FA18_Fuselagevapour";
				position = "body_vapour_L_3";
			};
			class BodyRight_inner_1
			{
				effectName = "FX_FA18_Fuselagevapour";
				position = "body_vapour_R_1";
			};
			class BodyRight_inner_2
			{
				effectName = "FX_FA18_Fuselagevapour";
				position = "body_vapour_R_2";
			};
			class BodyRight_inner_3
			{
				effectName = "FX_FA18_Fuselagevapour";
				position = "body_vapour_R_3";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "light_1_1_source";
				direction = "light_1_1_target";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 4;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
			class Right
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "light_1_2_source";
				direction = "light_1_2_target";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 4;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class MarkerLights
		{
			class Cockpit_light_1
			{
				name = "cockpit_light_pos";
				ambient[] = {0.01,0.01,0.01,0.8};
				color[] = {0.03,1,0.11,1};
				brightness = 0.025;
				blinking = 0;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
			class Red_Still_R
			{
				name = "wingtip_marker_light_red";
				color[] = {1000,0,0,1};
				ambient[] = {1,0,0,1};
				brightness = 0.05;
				blinking = 0;
			};
			class Green_Still_L
			{
				name = "wingtip_marker_light_green";
				color[] = {0.03,0.3,0.03,1};
				ambient[] = {0.003,0.03,0.003,1};
				brightness = 0.05;
				blinking = 0;
			};
			class White_Still_L
			{
				name = "marker_light_white_L";
				color[] = {0.0388,0.0388,0.0388,1};
				ambient[] = {0.03,0.023,0.0056,1};
				brightness = 0.05;
				blinking = 0;
			};
			class White_Still_R
			{
				name = "marker_light_white_R";
				color[] = {0.0388,0.0388,0.0388,1};
				ambient[] = {0.03,0.023,0.0056,1};
				brightness = 0.05;
				blinking = 0;
			};
			class Red_blinking_L
			{
				name = "marker_light_red_L";
				color[] = {1000,0,0,1};
				ambient[] = {1,0,0,1};
				brightness = 0.03;
				blinking = 1;
			};
			class Red_blinking_R
			{
				name = "marker_light_red_R";
				color[] = {1000,0,0,1};
				ambient[] = {1,0,0,1};
				brightness = 0.03;
				blinking = 1;
			};
		};
		class Library
		{
			libEnable = 1;
			libTextDesc = "The F/A-18E Super Hornet is the Navy's premier carrier aircraft, gaining Initial Operating Capability in 2001. Based upon the F/A-18C, the F/A-18E is a single seat multirole aircraft incorporating low observable technologies and advanced digital flight control systems. It has 11 hardpoints, 2 more than the F/A-18C, for loading a variety of weapons. The only drawback of the design is limited range (usually rectified by the use of drop tanks). It is maneuverable, with good low speed characteristics, and an average speed.";
		};
		class UserActions
		{
			class Eject
			{
				priority = 0.05;
				shortcut = "Eject";
				displayName = "Eject";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player in this and isengineon this";
				statement = "[this] spawn JS_JC_fnc_FA18_Ejection_E";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class tailhookdown
			{
				displayName = "Lower tailhook";
				shortcut = "SeagullBack";
				condition = "this animationPhase ""tailhook_action_switch"" < 0.1 and this animationPhase ""frontgear"" < 0.1 and this animationPhase ""tailhook"" < 0.1 and player in this and speed this > 100";
				statement = "this execvm ""\js_jc_fa18\scripts\CARRIER_OPS\FA18_tailhook.sqf""; this say3D ""FA18_tailhook_down_sound""";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class tailhookup
			{
				displayName = "Raise tailhook";
				shortcut = "SeagullBack";
				condition = "this animationPhase ""tailhook_action_switch"" < 0.1 and this animationPhase ""tailhook"" > 0.1 and player in this";
				statement = "this animate [""tailhook"",0]; this say3D ""FA18_tailhook_up_sound""";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class afterburner
			{
				displayName = "Afterburner On";
				shortcut = "SeagullFastForward";
				condition = "this animationPhase ""ab_switch"" == 0 and player in this and this animationPhase ""eng_fail"" < 1";
				statement = "this animate [""ab_switch"",1]; this animate [""throttle"",1]; [this] spawn JS_JC_fnc_FA18_FX_Afterburner; [this] spawn JS_JC_fnc_FA18_FX_Afterburner_anim_start;";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class afterburneroff
			{
				displayName = "Afterburner Off";
				shortcut = "SeagullFastForward";
				condition = "this animationPhase ""ab_switch"" == 1 and player in this";
				statement = "this animate [""throttle"",0]; this animate [""ab_switch"",0];";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class GPS_targeting_system
			{
				displayName = "GPS Targeting System";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				condition = "player in this and ((""js_m_fa18_GBU38_JDAM_x1"" in magazines this) or (""js_m_fa18_GBU32_JDAM_x1"" in magazines this) or (""js_m_fa18_GBU31_JDAM_x1"" in magazines this))";
				statement = "[this] spawn JS_JC_fnc_FA18_GPS_TARGETING_INIT";
			};
			class foldwings
			{
				displayName = "Fold Wings";
				position = "pilotcontrol";
				radius = 5;
				condition = "this animationPhase ""l_wingfold"" < 0.1 and (getpos this select 2) < 1 and (speed this) < 40";
				statement = "this animate [""l_wingfold"",1] and this animate [""r_wingfold"",1] and this say ""FA18_foldwing_sound""";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class unfoldwings
			{
				displayName = "Unfold wings";
				position = "pilotcontrol";
				radius = 5;
				condition = "this animationPhase ""l_wingfold"" > 0.9";
				statement = "this animate [""l_wingfold"",0] and this animate [""r_wingfold"",0] and this say ""FA18_foldwing_sound""";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class HUD_toggle_nvg
			{
				displayName = "Toggle HUD [NVG]";
				condition = "this animationPhase ""HUD_pip"" > 0.1 and player in this and isPipEnabled";
				statement = "this animate [""HUD_pip"",0]";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class HUD_toggle_normal
			{
				displayName = "Toggle HUD [HDR]";
				condition = "this animationPhase ""HUD_pip"" < 0.1 and player in this";
				statement = "this animate [""HUD_pip"",1]";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class Formation_markers_on
			{
				displayName = "Formation markers on";
				condition = "this animationPhase ""Formation_markers"" > 0.1 and player in this";
				statement = "this animate [""Formation_markers"",0]";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class Formation_markers_off
			{
				displayName = "Formation markers off";
				condition = "this animationPhase ""Formation_markers"" < 0.1 and player in this";
				statement = "this animate [""Formation_markers"",1]";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class extendrefueling
			{
				displayName = "Extend Refueling Probe";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "player in this and this animationPhase ""fuel_probe"" < 0.5 and speed this > 100";
				statement = "this animate [""fuel_probe"",1]";
			};
			class retractrefueling
			{
				displayName = "Retract Refueling Probe";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "player in this and this animationPhase ""fuel_probe"" > 0.5";
				statement = "this animate [""fuel_probe"",0]";
			};
			class service_menu
			{
				displayName = "Service Menu";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 55) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 55) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or ((this distance (nearestObject [this, ""JDG_carrier_Spawner""]) < 500) and (damage (nearestObject [this, ""JDG_carrier_Spawner""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1)";
				statement = "this animate [""service_menu_switch"",1]; [] spawn JS_JC_fnc_FA18_E_MAIN_UI;";
			};
			class pilots_manual
			{
				displayName = "Pilots Manual";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "player in this and speed this < 1";
				statement = "[] spawn JS_JC_fnc_FA18_E_MANUAL_UI";
			};
		};
		class Eventhandlers: Eventhandlers
		{
			init = "_this execVM ""\js_jc_FA18\scripts\init_FA18E.sqf""";
		};
	};
	class JS_JC_FA18Wreck: PlaneWreck
	{
		scope = 1;
		author = "John_Spartan & Saul";
		class Armory
		{
			disabled = 1;
		};
		model = "\js_jc_fa18\js_jc_fz_FA18_wreck.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 0;
	};
	class JS_JC_FA18F: Plane
	{
		scope = 2;
		vehicleClass = "Air";
		side = 1;
		faction = "BLU_F";
		displayName = "F/A-18 F Super Hornet";
		author = "John_Spartan & Saul";
		crew = "JS_JC_Pilot";
		typicalCargo[] = {"JS_JC_Pilot"};
		crewVulnerable = 1;
		driverAction = "fz_f18_pilot";
		driverCanEject = 0;
		picture = "\js_jc_fa18\UI\fa18f_picture.paa";
		icon = "\js_jc_fa18\UI\fa18_icon.paa";
		mapSize = 13.62;
		unitInfoType = "Rsc_FA18_UnitInfo";
		simulation = "airplane";
		_generalMacro = "Plane";
		destrType = "DestructWreck";
		model = "\js_jc_fa18\JC_JS_FZ_FA18F.p3d";
		animated = 1;
		extCameraPosition[] = {0,3,-20};
		availableForSupportTypes[] = {"CAS_Bombing"};
		hiddenSelections[] = {"camo_hull","camo_misc","camo_center_fueltank","camo_cockpit_1","camo_cockpit_2","camo_MFD","camo_glass","camo_ladder","burner_fire_1_left","burner_fire_1_right","camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_jc_fa18\data\fa18f_hull_co.paa","\js_jc_fa18\data\fa18_misc_co.paa","","\js_jc_fa18\data\fa18_cockpit1_co.paa","\js_jc_fa18\data\fa18_cockpit2_ca.paa","\js_jc_fa18\data\fa18_mfd_co.paa","\js_jc_fa18\data\fa18_glass_ca.paa","\js_jc_fa18\data\fa18_ladder_co.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\js_jc_fa18\data\fa18_misc_co.paa"};
		weapons[] = {"js_w_master_arms_safe","js_w_fa18_m61","js_w_fa18_CMFlareLauncher"};
		magazines[] = {"js_m_fa18_m61","240Rnd_CMFlare_Chaff_Magazine"};
		canFloat = 0;
		driveOnComponent[] = {"ngear","lgear","rgear"};
		cabinOpening = 1;
		gearRetracting = 1;
		geardowntime = 3;
		gearuptime = 4.5;
		armor = 60;
		fuelCapacity = 1140;
		LockDetectionSystem = "2 + 4 + 8";
		incomingMissileDetectionSystem = 16;
		enableGPS = 1;
		radarType = 4;
		laserScanner = 1;
		artilleryScanner = 0;
		irTarget = 1;
		nvTarget = 0;
		nvScanner = 1;
		irScanRangeMin = 500;
		irScanRangeMax = 11500;
		irScanToEyeFactor = 5;
		irScanGround = 1;
		namesound = "Plane";
		envelope[] = {0,0.4,1.9,4,6.8,8.3,8.5,8,7.2,5.8,4,1.8,0.5,0};
		brakeDistance = 65;
		aileronSensitivity = 1.5;
		elevatorSensitivity = 0.9;
		wheelSteeringSensitivity = 1.5;
		flapsFrictionCoef = 0.2;
		landingSpeed = 200;
		landingAoa = "rad 10";
		acceleration = 200;
		maxSpeed = 1100;
		airFriction0[] = {100,50,12};
		airFriction1[] = {100,50,12};
		airFriction2[] = {100,50,12};
		noseDownCoef = 0;
		gunAimDown = 0;
		altFullForce = 10000;
		altNoForce = 9000;
		driverLeftHandAnimName = "throttle";
		driverRightHandAnimName = "stick";
		memoryPointLDust = "levy prach";
		memoryPointRDust = "pravy prach";
		memoryPointGun = "nosegun";
		memoryPointLMissile = "l strela";
		memoryPointRMissile = "p strela";
		memoryPointLRocket = "l raketa";
		memoryPointRRocket = "p raketa";
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		class TransportItems{};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"A3\Sounds_F\air\Plane_Fighter_03\getin",0.562341,1};
		soundGetOut[] = {"A3\Sounds_F\air\Plane_Fighter_03\getout",0.562341,1,40};
		soundDammage[] = {"",0.562341,1};
		soundEngineOnInt[] = {"js_jc_fa18\sounds\FX_FA18_engine_start_in",1,1};
		soundEngineOnExt[] = {"js_jc_fa18\sounds\FX_FA18_engine_start_ext",1,1,500};
		soundEngineOffInt[] = {"js_jc_fa18\sounds\FX_FA18_engine_shut_in",1,1};
		soundEngineOffExt[] = {"js_jc_fa18\sounds\FX_FA18_engine_shut_ext",1,1,500};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.1,1.5};
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_01\gear_up",0.794328,1,150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_01\gear_down",0.794328,1,150};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Up",0.630957,1,100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Down",0.630957,1,100};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_engine_low_ext",1,1,800};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_engine_hi_ext",1,1,1200};
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_engine_forsage_ext",2.5,1,1500};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14,3.92,2,0.5};
			};
			class WindNoiseOut
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_wind_ext",1.5,1,3500};
				frequency = "1";
				volume = "2*camPos*(speed factor[50, 100])";
			};
			class EngineLowIn
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_engine_low_in",1,1};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_engine_hi_in",1,1};
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_engine_forsage_in",1,1};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = {"js_jc_fa18\sounds\FX_FA18_wind_in",1,1};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};
		class MFD
		{
			class FA18_static_HUD
			{
				enableParallax = 0;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5,0.5};
					pos10[] = {1.225,1.1};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,1};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.485,"0.4 + 0.0285"};
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.485,0.52};
						pos10[] = {"0.485 + 0.514","0.52 + 0.514"};
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
						pos0[] = {0.485,0.45};
						pos10[] = {1.24,1.1};
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
				class Draw
				{
					alpha = 0.7;
					width = 5;
					color[] = {0,1,0,1};
					condition = "on";
					class PlaneW
					{
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						width = 5;
						points[] = {{"PlaneW",{-0.08,0},1},{"PlaneW",{-0.03,0},1},{"PlaneW",{-0.015,0.0283784},1},{"PlaneW",{0,0},1},{"PlaneW",{0.015,0.0283784},1},{"PlaneW",{0.03,0},1},{"PlaneW",{0.08,0},1}};
					};
					class HeadingArrow
					{
						type = "line";
						width = 5;
						points[] = {{{"0.485 - 0.02","0.08 + 0.03"},1},{{0.485,"0.08 + 0.01"},1},{{"0.485 + 0.02","0.08 + 0.03"},1}};
					};
					class HeadingLine
					{
						type = "line";
						width = 5;
						points[] = {{{0.28,0.08},1},{{0.72,0.08},1}};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1;
						width = 5;
						top = 0.28;
						center = 0.485;
						bottom = 0.72;
						lineXleft = "0.06 + 0.01";
						lineYright = "0.05 + 0.01";
						lineXleftMajor = "0.06 + 0.01";
						lineYrightMajor = "0.04 + 0.01";
						majorLineEach = 5;
						numberEach = 5;
						step = "18 / 9";
						stepSize = "(0.70 - 0.3) / 15";
						align = "center";
						scale = 1;
						pos[] = {0.27,0};
						right[] = {"0.27 + 0.065",0};
						down[] = {0.27,0.05};
					};
					class Left_box_speed_indicator
					{
						type = "line";
						width = 5;
						points[] = {{{0.08,0.3},1},{{"0.08 + 0.15",0.3},1},{{"0.08 + 0.15","0.3 + 0.04"},1},{{0.08,"0.3 + 0.04"},1},{{0.08,0.3},1}};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "center";
						scale = 1;
						pos[] = {{0.15,"0.27 + 0.025"},1};
						right[] = {{"0.15 + 0.06","0.27 + 0.025"},1};
						down[] = {{0.15,"0.27 + 0.0725"},1};
					};
					class Right_box_altitude_indicator
					{
						type = "line";
						width = 5;
						points[] = {{{0.92,0.3},1},{{"0.92 - 0.15",0.3},1},{{"0.92 - 0.15","0.3 + 0.04"},1},{{0.92,"0.3 + 0.04"},1},{{0.92,0.3},1}};
					};
					class AltitudeNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {{0.85,"0.27 + 0.025"},1};
						right[] = {{"0.85 + 0.06","0.27 + 0.025"},1};
						down[] = {{0.85,"0.27 + 0.0725"},1};
					};
					class StallGroup
					{
						type = "group";
						condition = "stall";
						color[] = {1,0,0};
						class StallText
						{
							type = "text";
							source = "static";
							text = "STALL";
							align = "center";
							scale = 1;
							pos[] = {{0.485,"0.5 + 0.025"},1};
							right[] = {{"0.485 + 0.08","0.5 + 0.025"},1};
							down[] = {{0.485,"0.5 + 0.0925"},1};
						};
					};
					class PitchNumber
					{
						type = "text";
						source = "horizonDive";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = {{0.17,"0.5 + 0.025"},1};
						right[] = {{"0.17 + 0.06","0.5 + 0.025"},1};
						down[] = {{0.17,"0.5 + 0.0725"},1};
					};
					class PitchText
					{
						type = "text";
						source = "static";
						text = "P:";
						align = "left";
						scale = 1;
						pos[] = {{0.15,"0.5 + 0.025"},1};
						right[] = {{"0.15 + 0.06","0.5 + 0.025"},1};
						down[] = {{0.15,"0.5 + 0.0725"},1};
					};
					class RollNumber
					{
						type = "text";
						source = "horizonBank";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = {{0.17,"0.54 + 0.025"},1};
						right[] = {{"0.17 + 0.06","0.54 + 0.025"},1};
						down[] = {{0.17,"0.54 + 0.0725"},1};
					};
					class RollText
					{
						type = "text";
						source = "static";
						text = "R:";
						align = "left";
						scale = 1;
						pos[] = {{0.15,"0.54 + 0.025"},1};
						right[] = {{"0.15 + 0.06","0.54 + 0.025"},1};
						down[] = {{0.15,"0.54 + 0.0725"},1};
					};
					class ClimbNumber
					{
						type = "text";
						source = "vspeed";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.17,"0.58 + 0.025"},1};
						right[] = {{"0.17 + 0.06","0.58 + 0.025"},1};
						down[] = {{0.17,"0.58 + 0.0725"},1};
					};
					class ClimbText
					{
						type = "text";
						source = "static";
						text = "C:";
						align = "left";
						scale = 1;
						pos[] = {{0.15,"0.58 + 0.025"},1};
						right[] = {{"0.15 + 0.06","0.58 + 0.025"},1};
						down[] = {{0.15,"0.58 + 0.0725"},1};
					};
					class FlapsGroup
					{
						type = "group";
						condition = "flaps";
						class FlapsText
						{
							type = "text";
							source = "static";
							text = "FLAPS";
							align = "right";
							scale = 1;
							pos[] = {{0.15,"0.7 + 0.025"},1};
							right[] = {{"0.15 + 0.06","0.7 + 0.025"},1};
							down[] = {{0.15,"0.7 + 0.0725"},1};
						};
					};
					class GearGroup
					{
						type = "group";
						condition = "ils";
						class GearText
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "right";
							scale = 1;
							pos[] = {{0.15,"0.74 + 0.025"},1};
							right[] = {{"0.15 + 0.06","0.74 + 0.025"},1};
							down[] = {{0.15,"0.74 + 0.0725"},1};
						};
					};
					class LightsGroup
					{
						type = "group";
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LLS";
							align = "left";
							scale = 1;
							pos[] = {{0.9,"0.7 + 0.025"},1};
							right[] = {{"0.9 + 0.06","0.7 + 0.025"},1};
							down[] = {{0.9,"0.7 + 0.0725"},1};
						};
					};
					class CollisionLightsGroup
					{
						type = "group";
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "COLL";
							align = "left";
							scale = 1;
							pos[] = {{0.9,"0.74 + 0.025"},1};
							right[] = {{"0.9 + 0.06","0.74 + 0.025"},1};
							down[] = {{0.9,"0.74 + 0.0725"},1};
						};
					};
					class WeaponName
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.2,"0.85 + 0.025"},1};
						right[] = {{"0.2 + 0.06","0.85 + 0.025"},1};
						down[] = {{0.2,"0.85 + 0.0725"},1};
					};
					class AmmoCount
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.2,"0.89 + 0.025"},1};
						right[] = {{"0.2 + 0.06","0.89 + 0.025"},1};
						down[] = {{0.2,"0.89 + 0.0725"},1};
					};
					class Horizont
					{
						clipTL[] = {0.2,0.2};
						clipBR[] = {0.8,0.8};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{"Level0",{-0.2,0},1},{"Level0",{-0.05,0},1},{},{"Level0",{0.05,0},1},{"Level0",{0.2,0},1}};
							};
							class LevelM5: Level0
							{
								type = "line";
								points[] = {{"LevelM5",{-0.2,-0.03},1},{"LevelM5",{-0.2,0},1},{"LevelM5",{-0.15,0},1},{},{"LevelM5",{-0.1,0},1},{"LevelM5",{-0.05,0},1},{},{"LevelM5",{0.05,0},1},{"LevelM5",{0.1,0},1},{},{"LevelM5",{0.15,0},1},{"LevelM5",{0.2,0},1},{"LevelM5",{0.2,-0.03},1}};
							};
							class LevelP5: Level0
							{
								type = "line";
								points[] = {{"LevelP5",{-0.2,0.03},1},{"LevelP5",{-0.2,0},1},{"LevelP5",{-0.05,0},1},{},{"LevelP5",{0.05,0},1},{"LevelP5",{0.2,0},1},{"LevelP5",{0.2,0.03},1}};
							};
							class LevelM10: Level0
							{
								type = "line";
								points[] = {{"LevelM10",{-0.2,-0.03},1},{"LevelM10",{-0.2,0},1},{"LevelM10",{-0.15,0},1},{},{"LevelM10",{-0.1,0},1},{"LevelM10",{-0.05,0},1},{},{"LevelM10",{0.05,0},1},{"LevelM10",{0.1,0},1},{},{"LevelM10",{0.15,0},1},{"LevelM10",{0.2,0},1},{"LevelM10",{0.2,-0.03},1}};
							};
							class LevelP10: Level0
							{
								type = "line";
								points[] = {{"LevelP10",{-0.2,0.03},1},{"LevelP10",{-0.2,0},1},{"LevelP10",{-0.05,0},1},{},{"LevelP10",{0.05,0},1},{"LevelP10",{0.2,0},1},{"LevelP10",{0.2,0.03},1}};
							};
							class LevelM15: Level0
							{
								type = "line";
								points[] = {{"LevelM15",{-0.2,-0.03},1},{"LevelM15",{-0.2,0},1},{"LevelM15",{-0.15,0},1},{},{"LevelM15",{-0.1,0},1},{"LevelM15",{-0.05,0},1},{},{"LevelM15",{0.05,0},1},{"LevelM15",{0.1,0},1},{},{"LevelM15",{0.15,0},1},{"LevelM15",{0.2,0},1},{"LevelM15",{0.2,-0.03},1}};
							};
							class LevelP15: Level0
							{
								type = "line";
								points[] = {{"LevelP15",{-0.2,0.03},1},{"LevelP15",{-0.2,0},1},{"LevelP15",{-0.05,0},1},{},{"LevelP15",{0.05,0},1},{"LevelP15",{0.2,0},1},{"LevelP15",{0.2,0.03},1}};
							};
							class LevelM20: Level0
							{
								type = "line";
								points[] = {{"LevelM20",{-0.2,-0.03},1},{"LevelM20",{-0.2,0},1},{"LevelM20",{-0.15,0},1},{},{"LevelM20",{-0.1,0},1},{"LevelM20",{-0.05,0},1},{},{"LevelM20",{0.05,0},1},{"LevelM20",{0.1,0},1},{},{"LevelM20",{0.15,0},1},{"LevelM20",{0.2,0},1},{"LevelM20",{0.2,-0.03},1}};
							};
							class LevelP20: Level0
							{
								type = "line";
								points[] = {{"LevelP20",{-0.2,0.03},1},{"LevelP20",{-0.2,0},1},{"LevelP20",{-0.05,0},1},{},{"LevelP20",{0.05,0},1},{"LevelP20",{0.2,0},1},{"LevelP20",{0.2,0.03},1}};
							};
							class LevelM25: Level0
							{
								type = "line";
								points[] = {{"LevelM25",{-0.2,-0.03},1},{"LevelM25",{-0.2,0},1},{"LevelM25",{-0.15,0},1},{},{"LevelM25",{-0.1,0},1},{"LevelM25",{-0.05,0},1},{},{"LevelM25",{0.05,0},1},{"LevelM25",{0.1,0},1},{},{"LevelM25",{0.15,0},1},{"LevelM25",{0.2,0},1},{"LevelM25",{0.2,-0.03},1}};
							};
							class LevelP25: Level0
							{
								type = "line";
								points[] = {{"LevelP25",{-0.2,0.03},1},{"LevelP25",{-0.2,0},1},{"LevelP25",{-0.05,0},1},{},{"LevelP25",{0.05,0},1},{"LevelP25",{0.2,0},1},{"LevelP25",{0.2,0.03},1}};
							};
							class LevelM30: Level0
							{
								type = "line";
								points[] = {{"LevelM30",{-0.2,-0.03},1},{"LevelM30",{-0.2,0},1},{"LevelM30",{-0.15,0},1},{},{"LevelM30",{-0.1,0},1},{"LevelM30",{-0.05,0},1},{},{"LevelM30",{0.05,0},1},{"LevelM30",{0.1,0},1},{},{"LevelM30",{0.15,0},1},{"LevelM30",{0.2,0},1},{"LevelM30",{0.2,-0.03},1}};
							};
							class LevelP30: Level0
							{
								type = "line";
								points[] = {{"LevelP30",{-0.2,0.03},1},{"LevelP30",{-0.2,0},1},{"LevelP30",{-0.05,0},1},{},{"LevelP30",{0.05,0},1},{"LevelP30",{0.2,0},1},{"LevelP30",{0.2,0.03},1}};
							};
							class LevelM35: Level0
							{
								type = "line";
								points[] = {{"LevelM35",{-0.2,-0.03},1},{"LevelM35",{-0.2,0},1},{"LevelM35",{-0.15,0},1},{},{"LevelM35",{-0.1,0},1},{"LevelM35",{-0.05,0},1},{},{"LevelM35",{0.05,0},1},{"LevelM35",{0.1,0},1},{},{"LevelM35",{0.15,0},1},{"LevelM35",{0.2,0},1},{"LevelM35",{0.2,-0.03},1}};
							};
							class LevelP35: Level0
							{
								type = "line";
								points[] = {{"LevelP35",{-0.2,0.03},1},{"LevelP35",{-0.2,0},1},{"LevelP35",{-0.05,0},1},{},{"LevelP35",{0.05,0},1},{"LevelP35",{0.2,0},1},{"LevelP35",{0.2,0.03},1}};
							};
							class LevelM40: Level0
							{
								type = "line";
								points[] = {{"LevelM40",{-0.2,-0.03},1},{"LevelM40",{-0.2,0},1},{"LevelM40",{-0.15,0},1},{},{"LevelM40",{-0.1,0},1},{"LevelM40",{-0.05,0},1},{},{"LevelM40",{0.05,0},1},{"LevelM40",{0.1,0},1},{},{"LevelM40",{0.15,0},1},{"LevelM40",{0.2,0},1},{"LevelM40",{0.2,-0.03},1}};
							};
							class LevelP40: Level0
							{
								type = "line";
								points[] = {{"LevelP40",{-0.2,0.03},1},{"LevelP40",{-0.2,0},1},{"LevelP40",{-0.05,0},1},{},{"LevelP40",{0.05,0},1},{"LevelP40",{0.2,0},1},{"LevelP40",{0.2,0.03},1}};
							};
							class LevelM45: Level0
							{
								type = "line";
								points[] = {{"LevelM45",{-0.2,-0.03},1},{"LevelM45",{-0.2,0},1},{"LevelM45",{-0.15,0},1},{},{"LevelM45",{-0.1,0},1},{"LevelM45",{-0.05,0},1},{},{"LevelM45",{0.05,0},1},{"LevelM45",{0.1,0},1},{},{"LevelM45",{0.15,0},1},{"LevelM45",{0.2,0},1},{"LevelM45",{0.2,-0.03},1}};
							};
							class LevelP45: Level0
							{
								type = "line";
								points[] = {{"LevelP45",{-0.2,0.03},1},{"LevelP45",{-0.2,0},1},{"LevelP45",{-0.05,0},1},{},{"LevelP45",{0.05,0},1},{"LevelP45",{0.2,0},1},{"LevelP45",{0.2,0.03},1}};
							};
							class LevelM50: Level0
							{
								type = "line";
								points[] = {{"LevelM50",{-0.2,-0.03},1},{"LevelM50",{-0.2,0},1},{"LevelM50",{-0.15,0},1},{},{"LevelM50",{-0.1,0},1},{"LevelM50",{-0.05,0},1},{},{"LevelM50",{0.05,0},1},{"LevelM50",{0.1,0},1},{},{"LevelM50",{0.15,0},1},{"LevelM50",{0.2,0},1},{"LevelM50",{0.2,-0.03},1}};
							};
							class LevelP50: Level0
							{
								type = "line";
								points[] = {{"LevelP50",{-0.2,0.03},1},{"LevelP50",{-0.2,0},1},{"LevelP50",{-0.05,0},1},{},{"LevelP50",{0.05,0},1},{"LevelP50",{0.2,0},1},{"LevelP50",{0.2,0.03},1}};
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
								right[] = {"Level0",{-0.165,-0.025},1};
								down[] = {"Level0",{-0.23,0.05},1};
							};
							class VALM_2_0: VALM_1_0
							{
								align = "right";
								pos[] = {"Level0",{0.22,-0.025},1};
								right[] = {"Level0",{0.285,-0.025},1};
								down[] = {"Level0",{0.22,0.05},1};
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
								right[] = {"LevelP5",{-0.165,0.035},1};
								down[] = {"LevelP5",{-0.23,0.11},1};
							};
							class VALP_2_5: VALP_1_5
							{
								align = "right";
								pos[] = {"LevelP5",{0.22,0.035},1};
								right[] = {"LevelP5",{0.285,0.035},1};
								down[] = {"LevelP5",{0.22,0.11},1};
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
								right[] = {"LevelP10",{-0.165,0.035},1};
								down[] = {"LevelP10",{-0.23,0.11},1};
							};
							class VALP_2_10: VALP_1_10
							{
								align = "right";
								pos[] = {"LevelP10",{0.22,0.035},1};
								right[] = {"LevelP10",{0.285,0.035},1};
								down[] = {"LevelP10",{0.22,0.11},1};
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
								right[] = {"LevelP15",{-0.165,0.035},1};
								down[] = {"LevelP15",{-0.23,0.11},1};
							};
							class VALP_2_15: VALP_1_15
							{
								align = "right";
								pos[] = {"LevelP15",{0.22,0.035},1};
								right[] = {"LevelP15",{0.285,0.035},1};
								down[] = {"LevelP15",{0.22,0.11},1};
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
								right[] = {"LevelP20",{-0.165,0.035},1};
								down[] = {"LevelP20",{-0.23,0.11},1};
							};
							class VALP_2_20: VALP_1_20
							{
								align = "right";
								pos[] = {"LevelP20",{0.22,0.035},1};
								right[] = {"LevelP20",{0.285,0.035},1};
								down[] = {"LevelP20",{0.22,0.11},1};
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
								right[] = {"LevelP25",{-0.165,0.035},1};
								down[] = {"LevelP25",{-0.23,0.11},1};
							};
							class VALP_2_25: VALP_1_25
							{
								align = "right";
								pos[] = {"LevelP25",{0.22,0.035},1};
								right[] = {"LevelP25",{0.285,0.035},1};
								down[] = {"LevelP25",{0.22,0.11},1};
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
								right[] = {"LevelP30",{-0.165,0.035},1};
								down[] = {"LevelP30",{-0.23,0.11},1};
							};
							class VALP_2_30: VALP_1_30
							{
								align = "right";
								pos[] = {"LevelP30",{0.22,0.035},1};
								right[] = {"LevelP30",{0.285,0.035},1};
								down[] = {"LevelP30",{0.22,0.11},1};
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
								right[] = {"LevelP35",{-0.165,0.035},1};
								down[] = {"LevelP35",{-0.23,0.11},1};
							};
							class VALP_2_35: VALP_1_35
							{
								align = "right";
								pos[] = {"LevelP35",{0.22,0.035},1};
								right[] = {"LevelP35",{0.285,0.035},1};
								down[] = {"LevelP35",{0.22,0.11},1};
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
								right[] = {"LevelP40",{-0.165,0.035},1};
								down[] = {"LevelP40",{-0.23,0.11},1};
							};
							class VALP_2_40: VALP_1_40
							{
								align = "right";
								pos[] = {"LevelP40",{0.22,0.035},1};
								right[] = {"LevelP40",{0.285,0.035},1};
								down[] = {"LevelP40",{0.22,0.11},1};
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
								right[] = {"LevelP45",{-0.165,0.035},1};
								down[] = {"LevelP45",{-0.23,0.11},1};
							};
							class VALP_2_45: VALP_1_45
							{
								align = "right";
								pos[] = {"LevelP45",{0.22,0.035},1};
								right[] = {"LevelP45",{0.285,0.035},1};
								down[] = {"LevelP45",{0.22,0.11},1};
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
								right[] = {"LevelP50",{-0.165,0.035},1};
								down[] = {"LevelP50",{-0.23,0.11},1};
							};
							class VALP_2_50: VALP_1_50
							{
								align = "right";
								pos[] = {"LevelP50",{0.22,0.035},1};
								right[] = {"LevelP50",{0.285,0.035},1};
								down[] = {"LevelP50",{0.22,0.11},1};
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
								right[] = {"LevelM5",{-0.165,-0.085},1};
								down[] = {"LevelM5",{-0.23,-0.01},1};
							};
							class VALM_2_5: VALM_1_5
							{
								align = "right";
								pos[] = {"LevelM5",{0.22,-0.085},1};
								right[] = {"LevelM5",{0.285,-0.085},1};
								down[] = {"LevelM5",{0.22,-0.01},1};
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
								right[] = {"LevelM10",{-0.165,-0.085},1};
								down[] = {"LevelM10",{-0.23,-0.01},1};
							};
							class VALM_2_10: VALM_1_10
							{
								align = "right";
								pos[] = {"LevelM10",{0.22,-0.085},1};
								right[] = {"LevelM10",{0.285,-0.085},1};
								down[] = {"LevelM10",{0.22,-0.01},1};
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
								right[] = {"LevelM15",{-0.165,-0.085},1};
								down[] = {"LevelM15",{-0.23,-0.01},1};
							};
							class VALM_2_15: VALM_1_15
							{
								align = "right";
								pos[] = {"LevelM15",{0.22,-0.085},1};
								right[] = {"LevelM15",{0.285,-0.085},1};
								down[] = {"LevelM15",{0.22,-0.01},1};
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
								right[] = {"LevelM20",{-0.165,-0.085},1};
								down[] = {"LevelM20",{-0.23,-0.01},1};
							};
							class VALM_2_20: VALM_1_20
							{
								align = "right";
								pos[] = {"LevelM20",{0.22,-0.085},1};
								right[] = {"LevelM20",{0.285,-0.085},1};
								down[] = {"LevelM20",{0.22,-0.01},1};
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
								right[] = {"LevelM25",{-0.165,-0.085},1};
								down[] = {"LevelM25",{-0.23,-0.01},1};
							};
							class VALM_2_25: VALM_1_25
							{
								align = "right";
								pos[] = {"LevelM25",{0.22,-0.085},1};
								right[] = {"LevelM25",{0.285,-0.085},1};
								down[] = {"LevelM25",{0.22,-0.01},1};
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
								right[] = {"LevelM30",{-0.165,-0.085},1};
								down[] = {"LevelM30",{-0.23,-0.01},1};
							};
							class VALM_2_30: VALM_1_30
							{
								align = "right";
								pos[] = {"LevelM30",{0.22,-0.085},1};
								right[] = {"LevelM30",{0.285,-0.085},1};
								down[] = {"LevelM30",{0.22,-0.01},1};
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
								right[] = {"LevelM35",{-0.165,-0.085},1};
								down[] = {"LevelM35",{-0.23,-0.01},1};
							};
							class VALM_2_35: VALM_1_35
							{
								align = "right";
								pos[] = {"LevelM35",{0.22,-0.085},1};
								right[] = {"LevelM35",{0.285,-0.085},1};
								down[] = {"LevelM35",{0.22,-0.01},1};
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
								right[] = {"LevelM40",{-0.165,-0.085},1};
								down[] = {"LevelM40",{-0.23,-0.01},1};
							};
							class VALM_2_40: VALM_1_40
							{
								align = "right";
								pos[] = {"LevelM40",{0.22,-0.085},1};
								right[] = {"LevelM40",{0.285,-0.085},1};
								down[] = {"LevelM40",{0.22,-0.01},1};
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
								right[] = {"LevelM45",{-0.165,-0.085},1};
								down[] = {"LevelM45",{-0.23,-0.01},1};
							};
							class VALM_2_45: VALM_1_45
							{
								align = "right";
								pos[] = {"LevelM45",{0.22,-0.085},1};
								right[] = {"LevelM45",{0.285,-0.085},1};
								down[] = {"LevelM45",{0.22,-0.01},1};
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
								right[] = {"LevelM50",{-0.165,-0.085},1};
								down[] = {"LevelM50",{-0.23,-0.01},1};
							};
							class VALM_2_50: VALM_1_50
							{
								align = "right";
								pos[] = {"LevelM50",{0.22,-0.085},1};
								right[] = {"LevelM50",{0.285,-0.085},1};
								down[] = {"LevelM50",{0.22,-0.01},1};
							};
						};
					};
				};
			};
			class FA18_Parallax_HUD
			{
				enableParallax = 1;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.485,0.33};
					pos10[] = {1.225,1.1};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				class Bones
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
						pos0[] = {0.485,0.52};
						pos10[] = {"0.485 + 0.514","0.52 + 0.514"};
					};
				};
				class Draw
				{
					alpha = 0.8;
					width = 5;
					color[] = {0,1,0,1};
					condition = "on";
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 5;
						points[] = {{"Velocity",{0,-0.02},1},{"Velocity",{0.01,-0.01732},1},{"Velocity",{0.01732,-0.01},1},{"Velocity",{0.02,0},1},{"Velocity",{0.01732,0.01},1},{"Velocity",{0.01,0.01732},1},{"Velocity",{0,0.02},1},{"Velocity",{-0.01,0.01732},1},{"Velocity",{-0.01732,0.01},1},{"Velocity",{-0.02,0},1},{"Velocity",{-0.01732,-0.01},1},{"Velocity",{-0.01,-0.01732},1},{"Velocity",{0,-0.02},1},{},{"Velocity",{0.04,0},1},{"Velocity",{0.02,0},1},{},{"Velocity",{-0.04,0},1},{"Velocity",{-0.02,0},1},{},{"Velocity",{0,-0.04},1},{"Velocity",{0,-0.02},1}};
					};
					class RadarTargets
					{
						width = 5;
						type = "radar";
						pos0[] = {0.485,0.33};
						pos10[] = {1.225,1.1};
						points[] = {{{-0.05,-0.0472973},1},{{0.05,-0.0472973},1},{{0.05,0.0472973},1},{{-0.05,0.0472973},1},{{-0.05,-0.0472973},1}};
					};
					class MGunCrosshairGroup
					{
						type = "group";
						condition = "mgun";
						class MGunCrosshair
						{
							type = "line";
							width = 5;
							points[] = {{"WeaponAim",{0.01,0},1},{"WeaponAim",{-0.01,0},1},{},{"WeaponAim",{0,0.00945946},1},{"WeaponAim",{0,-0.00945946},1},{},{"WeaponAim",{0,-0.0662162},1},{"WeaponAim",{0.049,-0.0463514},1},{"WeaponAim",{0.07,0},1},{"WeaponAim",{0.049,0.0463514},1},{"WeaponAim",{0,0.0662162},1},{"WeaponAim",{-0.049,0.0463514},1},{"WeaponAim",{-0.07,0},1},{"WeaponAim",{-0.049,-0.0463514},1},{"WeaponAim",{0,-0.0662162},1},{},{"WeaponAim",{0,-0.132432},1},{"WeaponAim",{0.07,-0.115216},1},{"WeaponAim",{0.1218,-0.0662162},1},{"WeaponAim",{0.14,0},1},{"WeaponAim",{0.1218,0.0662162},1},{"WeaponAim",{0.07,0.115216},1},{"WeaponAim",{0,0.132432},1},{"WeaponAim",{-0.07,0.115216},1},{"WeaponAim",{-0.1218,0.0662162},1},{"WeaponAim",{-0.14,0},1},{"WeaponAim",{-0.1218,-0.0662162},1},{"WeaponAim",{-0.07,-0.115216},1},{"WeaponAim",{0,-0.132432},1},{},{"WeaponAim",{0,-0.132432},1},{"WeaponAim",{0,-0.151351},1},{},{"WeaponAim",{-0.07,-0.11469},1},{"WeaponAim",{-0.08,-0.131074},1},{},{"WeaponAim",{-0.121244,-0.0662162},1},{"WeaponAim",{-0.138564,-0.0756757},1},{},{"WeaponAim",{-0.14,5.78881e-009},1},{"WeaponAim",{-0.16,6.61578e-009},1},{},{"WeaponAim",{-0.121244,0.0662162},1},{"WeaponAim",{-0.138564,0.0756757},1},{},{"WeaponAim",{-0.07,0.11469},1},{"WeaponAim",{-0.08,0.131074},1},{},{"WeaponAim",{1.22392e-008,0.132432},1},{"WeaponAim",{1.39876e-008,0.151351},1},{},{"WeaponAim",{0.07,0.11469},1},{"WeaponAim",{0.08,0.131074},1},{},{"WeaponAim",{0.121244,0.0662162},1},{"WeaponAim",{0.138564,0.0756757},1},{},{"WeaponAim",{0.14,-1.57924e-009},1},{"WeaponAim",{0.16,-1.80485e-009},1},{},{"WeaponAim",{0.121244,-0.0662162},1},{"WeaponAim",{0.138564,-0.0756757},1},{},{"WeaponAim",{0.07,-0.11469},1},{"WeaponAim",{0.08,-0.131074},1},{}};
						};
					};
					class AAMissileCrosshairGroup
					{
						type = "group";
						condition = "AAmissile";
						class AAMissileCrosshair
						{
							type = "line";
							width = 5;
							points[] = {{"WeaponAim",{0,-0.25},1},{"WeaponAim",{0.0434,-0.2462},1},{"WeaponAim",{0.0855,-0.234925},1},{"WeaponAim",{0.125,-0.2165},1},{"WeaponAim",{0.1607,-0.1915},1},{"WeaponAim",{0.1915,-0.1607},1},{"WeaponAim",{0.2165,-0.125},1},{"WeaponAim",{0.234925,-0.0855},1},{"WeaponAim",{0.2462,-0.0434},1},{"WeaponAim",{0.25,0},1},{"WeaponAim",{0.2462,0.0434},1},{"WeaponAim",{0.234925,0.0855},1},{"WeaponAim",{0.2165,0.125},1},{"WeaponAim",{0.1915,0.1607},1},{"WeaponAim",{0.1607,0.1915},1},{"WeaponAim",{0.125,0.2165},1},{"WeaponAim",{0.0855,0.234925},1},{"WeaponAim",{0.0434,0.2462},1},{"WeaponAim",{0,0.25},1},{"WeaponAim",{-0.0434,0.2462},1},{"WeaponAim",{-0.0855,0.234925},1},{"WeaponAim",{-0.125,0.2165},1},{"WeaponAim",{-0.1607,0.1915},1},{"WeaponAim",{-0.1915,0.1607},1},{"WeaponAim",{-0.2165,0.125},1},{"WeaponAim",{-0.234925,0.0855},1},{"WeaponAim",{-0.2462,0.0434},1},{"WeaponAim",{-0.25,0},1},{"WeaponAim",{-0.2462,-0.0434},1},{"WeaponAim",{-0.234925,-0.0855},1},{"WeaponAim",{-0.2165,-0.125},1},{"WeaponAim",{-0.1915,-0.1607},1},{"WeaponAim",{-0.1607,-0.1915},1},{"WeaponAim",{-0.125,-0.2165},1},{"WeaponAim",{-0.0855,-0.234925},1},{"WeaponAim",{-0.0434,-0.2462},1},{"WeaponAim",{0,-0.25},1}};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition = "ATmissile";
						type = "group";
						class ATMissileCrosshair
						{
							type = "line";
							width = 5;
							points[] = {{"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{-0.15,"-0.15 + 0.02"},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{-0.15,"0.15 - 0.02"},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{0.15,"-0.15 + 0.02"},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{0.15,"0.15 - 0.02"},1},{},{"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{"-0.15 + 0.02",-0.15},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{"-0.15 + 0.02",0.15},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{"0.15 - 0.02",-0.15},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{"0.15 - 0.02",0.15},1}};
						};
					};
					class BombCrosshairGroup
					{
						type = "group";
						condition = "bomb";
						class BombCrosshair
						{
							type = "line";
							width = 5;
							points[] = {{"WeaponAim",{0,-0.1},1},{"WeaponAim",{0.01736,-0.09848},1},{"WeaponAim",{0.0342,-0.09397},1},{"WeaponAim",{0.05,-0.0866},1},{"WeaponAim",{0.06428,-0.0766},1},{"WeaponAim",{0.0766,-0.06428},1},{"WeaponAim",{0.0866,-0.05},1},{"WeaponAim",{0.09397,-0.0342},1},{"WeaponAim",{0.09848,-0.01736},1},{"WeaponAim",{0.1,0},1},{"WeaponAim",{0.09848,0.01736},1},{"WeaponAim",{0.09397,0.0342},1},{"WeaponAim",{0.0866,0.05},1},{"WeaponAim",{0.0766,0.06428},1},{"WeaponAim",{0.06428,0.0766},1},{"WeaponAim",{0.05,0.0866},1},{"WeaponAim",{0.0342,0.09397},1},{"WeaponAim",{0.01736,0.09848},1},{"WeaponAim",{0,0.1},1},{"WeaponAim",{-0.01736,0.09848},1},{"WeaponAim",{-0.0342,0.09397},1},{"WeaponAim",{-0.05,0.0866},1},{"WeaponAim",{-0.06428,0.0766},1},{"WeaponAim",{-0.0766,0.06428},1},{"WeaponAim",{-0.0866,0.05},1},{"WeaponAim",{-0.09397,0.0342},1},{"WeaponAim",{-0.09848,0.01736},1},{"WeaponAim",{-0.1,0},1},{"WeaponAim",{-0.09848,-0.01736},1},{"WeaponAim",{-0.09397,-0.0342},1},{"WeaponAim",{-0.0866,-0.05},1},{"WeaponAim",{-0.0766,-0.06428},1},{"WeaponAim",{-0.06428,-0.0766},1},{"WeaponAim",{-0.05,-0.0866},1},{"WeaponAim",{-0.0342,-0.09397},1},{"WeaponAim",{-0.01736,-0.09848},1},{"WeaponAim",{0,-0.1},1},{},{"Velocity",0.001,"WeaponAim",{0,0},1},{"Velocity",{0,0},1}};
						};
					};
				};
			};
		};
		class RenderTargets
		{
			class Center_Pilot_Mirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP_mirror_c";
					pointDirection = "PIP_mirror_c_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class Left_Pilot_Mirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP_mirror_l";
					pointDirection = "PIP_mirror_l_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class Right_Pilot_Mirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP_mirror_r";
					pointDirection = "PIP_mirror_r_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class HUD_nvg
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "PIP_hud_nvg";
					pointDirection = "PIP_hud_nvg_dir";
					renderQuality = 2;
					renderVisionMode = 1;
					fov = 0.155;
				};
			};
			class Center_WSO_Mirror
			{
				renderTarget = "rendertarget4";
				class CameraView1
				{
					pointPosition = "PIP_mirror_cb";
					pointDirection = "PIP_mirror_cb_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class Left_WSO_Mirror
			{
				renderTarget = "rendertarget5";
				class CameraView1
				{
					pointPosition = "PIP_mirror_lb";
					pointDirection = "PIP_mirror_lb_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class Right_WSO_Mirror
			{
				renderTarget = "rendertarget6";
				class CameraView1
				{
					pointPosition = "PIP_mirror_rb";
					pointDirection = "PIP_mirror_rb_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class WSO_turret
			{
				renderTarget = "rendertarget7";
				class CameraView1
				{
					pointPosition = "laser_start";
					pointDirection = "laser_end";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.155;
				};
			};
		};
		class AnimationSources
		{
			class lelev_off
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class relev_off
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rightgear
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class leftgear
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class lgearpist
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class lgearsus
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class rgearpist
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class rgearsus
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class n_sus
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class n_sus2
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class rgear_rot
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class lgear_rot
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class frontgear
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class lgdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rin_lgdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rou_lgdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rgdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rin_rgdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rou_rgdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class f_ndoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class f_nrdoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class f_ndoor2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class r_ndoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class rear_ndoor
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class fuel_probe
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class fuel_drogue
			{
				source = "user";
				animPeriod = 8;
				initPhase = 0;
			};
			class auxtank_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class eject_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class ab_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class sonic_boom_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class spd_accelerator
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class bottles
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class ewsfail
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class gearfail
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class flarecount
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class firewep
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class fired
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class service_menu_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class rearming_done_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class master_arms_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class paint_scheme_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class canopy
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class r_wingfold
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class l_wingfold
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class tailhook
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class map_X
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class map_Y
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class map_icon_x
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class map_icon_y
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class commap_X
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class commap_Y
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class fuel_int
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class fuel_extl
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class fuel_extr
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class fuel_extc
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class le_fire
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class re_fire
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class mstr_caut
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class rmfd_fl
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class lmfd_fl
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class map_fl
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class engd_fl
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class upfrnt_fl
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class eng_fail
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class ccip_length
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class ccip_rot
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class afterburner_left
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			class afterburner_right
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			class afterburner_left_strech
			{
				source = "user";
				animPeriod = 1.5;
				initPhase = 0;
			};
			class afterburner_right_strech
			{
				source = "user";
				animPeriod = 1.5;
				initPhase = 0;
			};
			class HUD_pip
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			class Ladder_GetIn
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			class Formation_markers
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			class Buddy_Pod_attach
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			class GPS_TGT_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class GPS_TGT_CLEAR_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class GPS_TGT_switch_wso
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class GPS_TGT_CLEAR_switch_wso
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class rcanopy_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class ejection_seat_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class ejection_seat_wso_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class init_done_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class tailhook_action_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Mirrors_pip_hide
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class WSO_pip_hide
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class throttle
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_1
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_2
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_3
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_4
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_5
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_6
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_7
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_8
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_9
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_inner_10
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_1
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_2
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_3
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_4
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_5
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_6
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_7
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_8
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_9
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_left_outer_10
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_1
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_2
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_3
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_4
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_5
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_6
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_7
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_8
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_9
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_inner_10
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_1
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_2
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_3
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_4
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_5
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_6
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_7
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_8
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_9
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class engine_nozzle_right_outer_10
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
			class pylon_3_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class pylon_4_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class pylon_5_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class pylon_6_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class pylon_7_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class pylon_8_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
		};
		class Exhausts
		{
			class Exhaust_left
			{
				position = "Exhausts_start_left";
				direction = "Exhausts_end_left";
				effect = "ExhaustsEffectPlane";
			};
			class Exhaust_right
			{
				position = "Exhausts_start_right";
				direction = "Exhausts_end_right";
				effect = "ExhaustsEffectPlane";
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "FX_FA18_WingVortices";
				position = "wingtip_marker_light_green";
			};
			class WingTipRight
			{
				effectName = "FX_FA18_WingVortices";
				position = "wingtip_marker_light_red";
			};
			class BodyLeft_inner_1
			{
				effectName = "FX_FA18_Fuselagevapour";
				position = "body_vapour_L_1";
			};
			class BodyLeft_inner_2
			{
				effectName = "FX_FA18_Fuselagevapour";
				position = "body_vapour_L_2";
			};
			class BodyLeft_inner_3
			{
				effectName = "FX_FA18_Fuselagevapour";
				position = "body_vapour_L_3";
			};
			class BodyRight_inner_1
			{
				effectName = "FX_FA18_Fuselagevapour";
				position = "body_vapour_R_1";
			};
			class BodyRight_inner_2
			{
				effectName = "FX_FA18_Fuselagevapour";
				position = "body_vapour_R_2";
			};
			class BodyRight_inner_3
			{
				effectName = "FX_FA18_Fuselagevapour";
				position = "body_vapour_R_3";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "light_1_1_source";
				direction = "light_1_1_target";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 4;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
			class Right
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "light_1_2_source";
				direction = "light_1_2_target";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 4;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class MarkerLights
		{
			class Cockpit_light_1
			{
				name = "cockpit_light_pos_pilot";
				ambient[] = {0.01,0.01,0.01,0.8};
				color[] = {0.03,1,0.11,1};
				brightness = 0.025;
				blinking = 0;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
			class Cockpit_light_2
			{
				name = "cockpit_light_pos_wso";
				ambient[] = {0.01,0.01,0.01,0.8};
				color[] = {0.03,1,0.11,1};
				brightness = 0.025;
				blinking = 0;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
			class Red_Still_R
			{
				name = "wingtip_marker_light_red";
				color[] = {1000,0,0,1};
				ambient[] = {1,0,0,1};
				brightness = 0.05;
				blinking = 0;
			};
			class Green_Still_L
			{
				name = "wingtip_marker_light_green";
				color[] = {0.03,0.3,0.03,1};
				ambient[] = {0.003,0.03,0.003,1};
				brightness = 0.05;
				blinking = 0;
			};
			class White_Still_L
			{
				name = "marker_light_white_L";
				color[] = {0.0388,0.0388,0.0388,1};
				ambient[] = {0.03,0.023,0.0056,1};
				brightness = 0.05;
				blinking = 0;
			};
			class White_Still_R
			{
				name = "marker_light_white_R";
				color[] = {0.0388,0.0388,0.0388,1};
				ambient[] = {0.03,0.023,0.0056,1};
				brightness = 0.05;
				blinking = 0;
			};
			class Red_blinking_L
			{
				name = "marker_light_red_L";
				color[] = {1000,0,0,1};
				ambient[] = {1,0,0,1};
				brightness = 0.03;
				blinking = 1;
			};
			class Red_blinking_R
			{
				name = "marker_light_red_R";
				color[] = {1000,0,0,1};
				ambient[] = {1,0,0,1};
				brightness = 0.03;
				blinking = 1;
			};
		};
		class ViewPilot
		{
			initFov = 1;
			minFov = 0.6;
			maxFov = 1;
			initAngleX = 0;
			minAngleX = -35;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -130;
			maxAngleY = 130;
			minMoveX = -0.2;
			maxMoveX = 0.2;
			minMoveY = -0.025;
			maxMoveY = 0.1;
			minMoveZ = -0.2;
			maxMoveZ = 0.2;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				commanding = -1;
				isCopilot = 0;
				gunnerName = "Weapons System Oficer";
				primaryGunner = 1;
				CanEject = 0;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerAction = "fz_f18_pilot";
				gunnerInAction = "fz_f18_pilot";
				startEngine = 0;
				body = "mainturret";
				gun = "maingun";
				animationSourceBody = "mainturret";
				animationSourceGun = "maingun";
				minElev = -90;
				maxElev = 30;
				initElev = -45;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				stabilizedInAxes = 3;
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				gunBeg = "laser_end";
				gunEnd = "laser_start";
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "";
				turretInfoType = "RscOptics_UAV_gunner";
				gunnerForceOptics = 0;
				weapons[] = {"js_w_master_arms_safe","js_w_fa18_aim9xLaucher","js_w_fa18_aim120cLaucher","js_w_fa18_MaverickLauncher","js_w_fa18_GBU38BombLauncher","js_w_fa18_fueltank_holder","Laserdesignator_mounted"};
				magazines[] = {"js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1","js_m_fa18_Maverick_x1","js_m_fa18_Maverick_x1","js_m_fa18_bombrack_x1","js_m_fa18_bombrack_x1","js_m_fa18_aim120c_x1","js_m_fa18_altflir_pod_x1","js_m_fa18_GBU38_JDAM_x1","js_m_fa18_GBU38_JDAM_x1","js_m_fa18_GBU38_JDAM_x1","js_m_fa18_GBU38_JDAM_x1","js_m_fa18_empty","js_m_fa18_empty","js_m_fa18_empty","js_m_fa18_empty","js_m_fa18_wing_tank_x1","Laserbatteries"};
				class OpticsIn
				{
					class Wide_non_stabilized
					{
						opticsDisplayName = "W";
						initFov = 1;
						minFov = 0.6;
						maxFov = 0.85;
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 85;
						initAngleY = 0;
						minAngleY = -130;
						maxAngleY = 130;
						stabilizedInAxes = 0;
						directionStabilized = 0;
						horizontallyStabilized = 0;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
					};
					class Wide_stabilized
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -360;
						maxAngleX = 360;
						initAngleY = 0;
						minAngleY = -360;
						maxAngleY = 360;
						initFov = 0.7;
						minFov = 0.03;
						maxFov = 1.2;
						stabilizedInAxes = 3;
						directionStabilized = 1;
						horizontallyStabilized = 1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
					};
					class Medium: Wide_stabilized
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide_stabilized
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov = 1;
						minFov = 0.6;
						maxFov = 0.85;
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 85;
						initAngleY = 0;
						minAngleY = -65;
						maxAngleY = 65;
						stabilizedInAxes = 0;
						directionStabilized = 0;
						horizontallyStabilized = 0;
						minMoveX = -0.2;
						maxMoveX = 0.2;
						minMoveY = -0.025;
						maxMoveY = 0.1;
						minMoveZ = -0.2;
						maxMoveZ = 0.2;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
		class Library
		{
			libEnable = 1;
			libTextDesc = "The F/A-18F Super Hornet is the Navy's premier carrier aircraft, gaining Initial Operating Capability in 2001. Based upon the F/A-18C, the F/A-18F is a twin seat multirole aircraft incorporating low observable technologies and advanced digital flight control systems. It has 11 hardpoints, 2 more than the F/A-18C, for loading a variety of weapons. The only drawback of the design is limited range (usually rectified by the use of drop tanks). It is maneuverable, with good low speed characteristics, and an average speed.";
		};
		class UserActions
		{
			class Eject_pilot
			{
				priority = 0.05;
				shortcut = "Eject";
				displayName = "Eject";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player == driver this and isengineon this";
				statement = "[this] spawn JS_JC_fnc_FA18_Ejection_F";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class Eject_wso
			{
				priority = 0.05;
				shortcut = "Eject";
				displayName = "Eject";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player == gunner this and isengineon this";
				statement = "[this] spawn JS_JC_fnc_FA18_Ejection_F";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class tailhookdown
			{
				displayName = "Lower tailhook";
				shortcut = "SeagullBack";
				condition = "this animationPhase ""tailhook_action_switch"" < 0.1 and this animationPhase ""frontgear"" < 0.1 and this animationPhase ""tailhook"" < 0.1 and player == driver this and speed this > 100";
				statement = "this execvm ""\js_jc_fa18\scripts\CARRIER_OPS\FA18_tailhook.sqf""; this say3D ""FA18_tailhook_down_sound""";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class tailhookup
			{
				displayName = "Raise tailhook";
				shortcut = "SeagullBack";
				condition = "this animationPhase ""tailhook_action_switch"" < 0.1 and this animationPhase ""tailhook"" > 0.1 and player == driver this";
				statement = "this animate [""tailhook"",0]; this say3D ""FA18_tailhook_up_sound""";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class afterburner
			{
				displayName = "Afterburner On";
				shortcut = "SeagullFastForward";
				condition = "this animationPhase ""ab_switch"" == 0 and player == driver this and this animationPhase ""eng_fail"" < 1";
				statement = "this animate [""ab_switch"",1]; this animate [""throttle"",1]; [this] spawn JS_JC_fnc_FA18_FX_Afterburner; [this] spawn JS_JC_fnc_FA18_FX_Afterburner_anim_start;";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class afterburneroff
			{
				displayName = "Afterburner Off";
				shortcut = "SeagullFastForward";
				condition = "this animationPhase ""ab_switch"" == 1 and player == driver this";
				statement = "this animate [""throttle"",0]; this animate [""ab_switch"",0];";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class GPS_targeting_system
			{
				displayName = "GPS Targeting System";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				condition = "player in this and player == driver this and ((""js_m_fa18_GBU38_JDAM_x1"" in magazines this) or (""js_m_fa18_GBU32_JDAM_x1"" in magazines this) or (""js_m_fa18_GBU31_JDAM_x1"" in magazines this))";
				statement = "[this] spawn JS_JC_fnc_FA18_GPS_TARGETING_INIT";
			};
			class foldwings
			{
				displayName = "Fold Wings";
				position = "pilotcontrol";
				radius = 5;
				condition = "this animationPhase ""l_wingfold"" < 0.1 and (getpos this select 2) < 1 and (speed this) < 40";
				statement = "this animate [""l_wingfold"",1] and this animate [""r_wingfold"",1] and this say ""FA18_foldwing_sound""";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class unfoldwings
			{
				displayName = "Unfold wings";
				position = "pilotcontrol";
				radius = 5;
				condition = "this animationPhase ""l_wingfold"" > 0.9";
				statement = "this animate [""l_wingfold"",0] and this animate [""r_wingfold"",0] and this say ""FA18_foldwing_sound""";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class HUD_toggle_nvg
			{
				displayName = "Toggle HUD [NVG]";
				condition = "this animationPhase ""HUD_pip"" > 0.1 and player == driver this and isPipEnabled";
				statement = "this animate [""HUD_pip"",0]";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class HUD_toggle_normal
			{
				displayName = "Toggle HUD [HDR]";
				condition = "this animationPhase ""HUD_pip"" < 0.1 and player == driver this";
				statement = "this animate [""HUD_pip"",1]";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class Formation_markers_on
			{
				displayName = "Formation markers on";
				condition = "this animationPhase ""Formation_markers"" > 0.1 and player == driver this";
				statement = "this animate [""Formation_markers"",0]";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class Formation_markers_off
			{
				displayName = "Formation markers off";
				condition = "this animationPhase ""Formation_markers"" < 0.1 and player == driver this";
				statement = "this animate [""Formation_markers"",1]";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class extendrefueling
			{
				displayName = "Extend Refueling Probe";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "player == driver this and this animationPhase ""fuel_probe"" < 0.5 and speed this > 100";
				statement = "this animate [""fuel_probe"",1]";
			};
			class retractrefueling
			{
				displayName = "Retract Refueling Probe";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "player == driver this and this animationPhase ""fuel_probe"" > 0.5";
				statement = "this animate [""fuel_probe"",0]";
			};
			class extenddrogue
			{
				displayName = "Extend Refueling Drogue";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "player in this and player == driver this and this animationPhase ""fuel_drogue"" < 0.5 and speed this > 100 and ""js_m_fa18_buddypod_x1"" in magazines this";
				statement = "this animate [""fuel_drogue"",1]";
			};
			class retractdrogue
			{
				displayName = "Retract Refueling Drogue";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "player in this and player == driver this and this animationPhase ""fuel_drogue"" > 0.5";
				statement = "this animate [""fuel_drogue"",0]";
			};
			class call_refuelaction
			{
				displayName = "Request refuel at Buddy Pod";
				position = "actionarea";
				onlyForPlayer = 0;
				showWindow = 0;
				hideOnUse = 1;
				radius = 150;
				condition = "this animationPhase ""fuel_drogue"" < 0.5  and ""js_m_fa18_buddypod_x1"" in magazines this and speed this > 100 and (vehicle player) != this";
				statement = "this animate [""fuel_drogue"",1]";
			};
			class refuelaction
			{
				displayName = "Refuel at Buddy Pod";
				position = "actionarea";
				onlyForPlayer = 0;
				showWindow = 0;
				hideOnUse = 1;
				radius = 120;
				condition = "this animationPhase ""fuel_drogue"" > 0.5  and (vehicle player) != this";
				statement = "this execvm ""\js_jc_fa18\scripts\AERIAL_REFUELING\FA18_aerial_refuel.sqf""";
			};
			class service_menu
			{
				displayName = "Service Menu";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 55) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 55) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or ((this distance (nearestObject [this, ""JDG_carrier_Spawner""]) < 500) and (damage (nearestObject [this, ""JDG_carrier_Spawner""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1)";
				statement = "this animate [""service_menu_switch"",1]; [] spawn JS_JC_fnc_FA18_F_MAIN_UI;";
			};
			class pilots_manual
			{
				displayName = "Pilots Manual";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "player in this and speed this < 1";
				statement = "[] spawn JS_JC_fnc_FA18_F_MANUAL_UI";
			};
		};
		class Eventhandlers: Eventhandlers
		{
			init = "_this execVM ""\js_jc_FA18\scripts\init_FA18F.sqf""";
		};
	};
	class JS_JC_FZ_FA18_E_canopy: thingX
	{
		mapSize = 0.78;
		author = "John_Spartan & Saul";
		displayName = "F/A-18 E Canopy";
		model = "\js_jc_fa18\JS_JC_FZ_FA18_E_canopy.p3d";
		_generalMacro = "thingX";
		scope = 1;
		simulation = "thingx";
		animated = 0;
		reversed = 0;
		nameSound = "";
		vehicleClass = "Objects";
		accuracy = 0.2;
		class DestructionEffects{};
	};
	class JS_JC_FZ_FA18_F_canopy: thingX
	{
		mapSize = 0.78;
		author = "John_Spartan & Saul";
		displayName = "F/A-18 F Canopy";
		model = "\js_jc_fa18\JS_JC_FZ_FA18_F_canopy.p3d";
		_generalMacro = "thingX";
		scope = 1;
		simulation = "thingx";
		animated = 0;
		reversed = 0;
		nameSound = "";
		vehicleClass = "Objects";
		accuracy = 0.2;
		class DestructionEffects{};
	};
	class JS_JC_FA18ejection_seat: Motorcycle
	{
		reversed = 0;
		startEngine = 0;
		crew = "JS_JC_Pilot";
		driverCanEject = 0;
		scope = 1;
		vehicleClass = "Objects";
		side = 1;
		faction = "BLU_F";
		author = "John_Spartan & Saul";
		displayName = "SJU-17 Ejection Seat";
		canFloat = 0;
		Icon = "iconParachute";
		picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		model = "\js_jc_fa18\js_jc_fz_FA18_ejection_seat.p3d";
		driverAction = "Truck_Cargo01";
		getInAction = "";
		getOutAction = "";
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		usePreciseGetInAction = 1;
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		soundGetIn[] = {"",0.00031622776,1};
		soundGetOut[] = {"",0.00031622776,1};
		soundEngine[] = {"",1.7782794,0.9};
		soundEnviron[] = {"",0.562341,1};
		unitInfoType = "RscUnitInfoSoldier";
		hideUnitInfo = 1;
		weapons[] = {};
		magazines[] = {};
		dammageHalf[] = {};
		dammageFull[] = {};
		extCameraPosition[] = {0,3,-10};
		threat[] = {0,0,0};
		class ViewPilot
		{
			initFov = 1;
			minFov = 0.6;
			maxFov = 1;
			initAngleX = 0;
			minAngleX = -35;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -130;
			maxAngleY = 130;
			minMoveX = -0.2;
			maxMoveX = 0.2;
			minMoveY = -0.025;
			maxMoveY = 0.1;
			minMoveZ = -0.2;
			maxMoveZ = 0.2;
		};
		class AnimationSources
		{
			class Rocket_Flash_hide
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
		};
		fuelCapacity = 0;
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons{};
		class TransportMagazines{};
		class Turrets{};
		class Exhausts{};
		class Reflectors{};
		class Sounds{};
		class Damage
		{
			tex[] = {};
			mat[] = {"js_jc_fa18\data\fa18_cockpit1_co.rvmat","js_jc_fa18\data\fa18_cockpit1_co.rvmat","js_jc_fa18\data\fa18_cockpit1_co.rvmat"};
		};
		class Eventhandlers: Eventhandlers{};
	};
	class JS_JC_FA18_GPSTarget: LaserTarget
	{
		displayName = "GPS Target";
		nameSound = "";
		threat[] = {0,0,1};
		camouflage = 99;
		accuracy = 0;
		alwaysTarget = 1;
		type = 1;
		simulation = "artillerymarker";
		laserTarget = 1;
		irTarget = 1;
		nvTarget = 0;
		artilleryTarget = 0;
		allowTabLock = 1;
		side = 0;
		scope = 1;
	};
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class JS_JC_Module_FA18_E_init: Module_F
	{
		scope = 2;
		displayName = "FA18 E - INIT/SETUP";
		author = "John_Spartan & Saul";
		icon = "\js_jc_fa18\ui\FA18_icon_module_ca.paa";
		category = "ObjectModifiers";
		function = "JS_JC_fnc_FA18E_Init_module";
		functionPriority = 10;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		curatorInfoType = "RscDisplayAttributeModule_FA18_E_init";
		class Arguments: ArgumentsBaseUnits
		{
			class Units
			{
				displayName = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_0";
				description = "";
				class values
				{
					class Objects
					{
						name = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_values_Objects_0";
						value = 0;
						default = 1;
					};
				};
			};
			class Paintscheme_init
			{
				displayName = "Paint Scheme";
				description = "Select from paint scheme presets";
				typeName = "NUMBER";
				class values
				{
					class Paintscheme_0
					{
						name = "US NAVY GREY";
						value = 1;
						default = 1;
					};
					class Paintscheme_1
					{
						name = "VFA-14 CAG";
						value = 2;
					};
					class Paintscheme_2
					{
						name = "VFA-14 LOW";
						value = 3;
					};
					class Paintscheme_3
					{
						name = "VFA-27 CAG";
						value = 4;
					};
					class Paintscheme_4
					{
						name = "VFA-27 LOW";
						value = 5;
					};
					class Paintscheme_5
					{
						name = "VFA-31 CAG";
						value = 6;
					};
					class Paintscheme_6
					{
						name = "VFA-31 LOW";
						value = 7;
					};
					class Paintscheme_7
					{
						name = "VMFA-232 CAG";
						value = 8;
					};
					class Paintscheme_8
					{
						name = "VMFA-232 LOW";
						value = 9;
					};
					class Paintscheme_9
					{
						name = "VMFA-314 CAG";
						value = 10;
					};
					class Paintscheme_10
					{
						name = "VMFA-314 LOW";
						value = 11;
					};
					class Paintscheme_11
					{
						name = "USMC GREY";
						value = 12;
					};
				};
			};
			class Weapon_station_1_init
			{
				displayName = "Weapon Pylon 1";
				description = "Weapon equipped on station 1";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_2_init
			{
				displayName = "Weapon Pylon 2";
				description = "Weapon equipped on station 2";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_3_init
			{
				displayName = "Weapon Pylon 3";
				description = "Weapon equipped on station 3";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
						default = 1;
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_4_init
			{
				displayName = "Weapon Pylon 4";
				description = "Weapon equipped on station 4";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
						default = 1;
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_5_init
			{
				displayName = "Weapon Pylon 5";
				description = "Weapon equipped on station 5";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class AGM84
					{
						name = "AGM84";
						value = "js_m_fa18_Harpoon_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU32
					{
						name = "GBU32";
						value = "js_m_fa18_GBU32_JDAM_x1";
					};
					class GBU31
					{
						name = "GBU31";
						value = "js_m_fa18_GBU31_JDAM_x1";
					};
					class FUEL_TANK
					{
						name = "FUEL TANK";
						value = "js_m_fa18_wing_tank_x1";
					};
					class DUAL_RAIL
					{
						name = "DUAL RAIL";
						value = "js_m_fa18_bombrack_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_6_init
			{
				displayName = "Weapon Pylon 6";
				description = "Weapon equipped on station 6";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class AGM84
					{
						name = "AGM84";
						value = "js_m_fa18_Harpoon_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU32
					{
						name = "GBU32";
						value = "js_m_fa18_GBU32_JDAM_x1";
					};
					class GBU31
					{
						name = "GBU31";
						value = "js_m_fa18_GBU31_JDAM_x1";
					};
					class FUEL_TANK
					{
						name = "FUEL TANK";
						value = "js_m_fa18_wing_tank_x1";
					};
					class DUAL_RAIL
					{
						name = "DUAL RAIL";
						value = "js_m_fa18_bombrack_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_7_init
			{
				displayName = "Weapon Pylon 7";
				description = "Weapon equipped on station 7";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class AGM84
					{
						name = "AGM84";
						value = "js_m_fa18_Harpoon_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU32
					{
						name = "GBU32";
						value = "js_m_fa18_GBU32_JDAM_x1";
					};
					class GBU31
					{
						name = "GBU31";
						value = "js_m_fa18_GBU31_JDAM_x1";
					};
					class FUEL_TANK
					{
						name = "FUEL TANK";
						value = "js_m_fa18_wing_tank_x1";
					};
					class DUAL_RAIL
					{
						name = "DUAL RAIL";
						value = "js_m_fa18_bombrack_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_8_init
			{
				displayName = "Weapon Pylon 8";
				description = "Weapon equipped on station 8";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class AGM84
					{
						name = "AGM84";
						value = "js_m_fa18_Harpoon_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU32
					{
						name = "GBU32";
						value = "js_m_fa18_GBU32_JDAM_x1";
					};
					class GBU31
					{
						name = "GBU31";
						value = "js_m_fa18_GBU31_JDAM_x1";
					};
					class FUEL_TANK
					{
						name = "FUEL TANK";
						value = "js_m_fa18_wing_tank_x1";
					};
					class DUAL_RAIL
					{
						name = "DUAL RAIL";
						value = "js_m_fa18_bombrack_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_9_init
			{
				displayName = "Weapon Pylon 9";
				description = "Weapon equipped on station 9";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_10_init
			{
				displayName = "Weapon Pylon 10";
				description = "Weapon equipped on station 10";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_11_init
			{
				displayName = "Weapon Pylon 11";
				description = "Weapon equipped on station 11";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
						default = 1;
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_12_init
			{
				displayName = "Weapon Pylon 12";
				description = "Weapon equipped on station 12";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
						default = 1;
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_13_init
			{
				displayName = "Weapon Pylon 13";
				description = "Weapon equipped on station 13";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
						default = 1;
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_14_init
			{
				displayName = "Weapon Pylon 14";
				description = "Weapon equipped on station 14";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
						default = 1;
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_15_init
			{
				displayName = "Weapon Pylon 15";
				description = "Weapon equipped on station 15";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
						default = 1;
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_16_init
			{
				displayName = "Weapon Pylon 16";
				description = "Weapon equipped on station 16";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
						default = 1;
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_17_init
			{
				displayName = "Weapon Pylon 17";
				description = "Weapon equipped on station 17";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
						default = 1;
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_18_init
			{
				displayName = "Weapon Pylon 18";
				description = "Weapon equipped on station 18";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
						default = 1;
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_19_init
			{
				displayName = "Weapon Pylon 19";
				description = "Weapon equipped on station 19";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class FUEL_TANK
					{
						name = "FUEL TANK";
						value = "js_m_fa18_wing_tank_x1";
						default = 1;
					};
				};
			};
			class Wings_Fold_status_init
			{
				displayName = "Wings FOLDED/UNFOLDED";
				description = "Wings FOLDED/UNFOLDED";
				typeName = "NUMBER";
				class values
				{
					class UNFOLDED
					{
						name = "UNFOLDED";
						value = 0;
						default = 1;
					};
					class FOLDED
					{
						name = "FOLDED";
						value = 1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "F/A-18 E respawn/init module";
			sync[] = {"JS_JC_FA18E"};
			class LocationArea_F
			{
				description[] = {"A TEST","B TEST"};
				position = 1;
				direction = 1;
				optional = 1;
				duplicate = 1;
				synced[] = {"JS_JC_FA18E"};
			};
			class JS_JC_FA18E
			{
				description = "F/A-18 E Super Hornet";
				displayName = "F/A-18 E Super Hornet";
				icon = "\js_jc_fa18\ui\fa18_icon.paa";
				position = 1;
				direction = 1;
				optional = 1;
				duplicate = 1;
				side = 0;
			};
		};
	};
	class JS_JC_Module_FA18_F_init: Module_F
	{
		scope = 2;
		displayName = "FA18 F - INIT/SETUP";
		author = "John_Spartan & Saul";
		icon = "\js_jc_fa18\ui\FA18_icon_module_ca.paa";
		category = "ObjectModifiers";
		function = "JS_JC_fnc_FA18F_Init_module";
		functionPriority = 10;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		curatorInfoType = "RscDisplayAttributeModule_FA18_F_init";
		class Arguments: ArgumentsBaseUnits
		{
			class Units
			{
				displayName = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_0";
				description = "";
				class values
				{
					class Objects
					{
						name = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_values_Objects_0";
						value = 0;
						default = 1;
					};
				};
			};
			class Paintscheme_init
			{
				displayName = "Paint Scheme";
				description = "Select from paint scheme presets";
				typeName = "NUMBER";
				class values
				{
					class Paintscheme_0
					{
						name = "US NAVY GREY";
						value = 1;
						default = 1;
					};
					class Paintscheme_1
					{
						name = "VFA-41 CAG";
						value = 2;
					};
					class Paintscheme_2
					{
						name = "VFA-41 LOW";
						value = 3;
					};
					class Paintscheme_3
					{
						name = "VFA-103 CAG";
						value = 4;
					};
					class Paintscheme_4
					{
						name = "VFA-103 LOW";
						value = 5;
					};
					class Paintscheme_5
					{
						name = "VFA-154 CAG";
						value = 6;
					};
					class Paintscheme_6
					{
						name = "VFA-154 LOW";
						value = 7;
					};
					class Paintscheme_7
					{
						name = "VMFA-225 CAG";
						value = 8;
					};
					class Paintscheme_8
					{
						name = "VMFA-225 LOW";
						value = 9;
					};
					class Paintscheme_9
					{
						name = "RAAF GREY";
						value = 10;
					};
					class Paintscheme_10
					{
						name = "USMC GREY";
						value = 11;
					};
				};
			};
			class Weapon_station_1_init
			{
				displayName = "Weapon Pylon 1";
				description = "Weapon equipped on station 1";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_2_init
			{
				displayName = "Weapon Pylon 2";
				description = "Weapon equipped on station 2";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_3_init
			{
				displayName = "Weapon Pylon 3";
				description = "Weapon equipped on station 3";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
						default = 1;
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_4_init
			{
				displayName = "Weapon Pylon 4";
				description = "Weapon equipped on station 4";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
						default = 1;
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_5_init
			{
				displayName = "Weapon Pylon 5";
				description = "Weapon equipped on station 5";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class AGM84
					{
						name = "AGM84";
						value = "js_m_fa18_Harpoon_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU32
					{
						name = "GBU32";
						value = "js_m_fa18_GBU32_JDAM_x1";
					};
					class GBU31
					{
						name = "GBU31";
						value = "js_m_fa18_GBU31_JDAM_x1";
					};
					class FUEL_TANK
					{
						name = "FUEL TANK";
						value = "js_m_fa18_wing_tank_x1";
					};
					class DUAL_RAIL
					{
						name = "DUAL RAIL";
						value = "js_m_fa18_bombrack_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_6_init
			{
				displayName = "Weapon Pylon 6";
				description = "Weapon equipped on station 6";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class AGM84
					{
						name = "AGM84";
						value = "js_m_fa18_Harpoon_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU32
					{
						name = "GBU32";
						value = "js_m_fa18_GBU32_JDAM_x1";
					};
					class GBU31
					{
						name = "GBU31";
						value = "js_m_fa18_GBU31_JDAM_x1";
					};
					class FUEL_TANK
					{
						name = "FUEL TANK";
						value = "js_m_fa18_wing_tank_x1";
					};
					class DUAL_RAIL
					{
						name = "DUAL RAIL";
						value = "js_m_fa18_bombrack_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_7_init
			{
				displayName = "Weapon Pylon 7";
				description = "Weapon equipped on station 7";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class AGM84
					{
						name = "AGM84";
						value = "js_m_fa18_Harpoon_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU32
					{
						name = "GBU32";
						value = "js_m_fa18_GBU32_JDAM_x1";
					};
					class GBU31
					{
						name = "GBU31";
						value = "js_m_fa18_GBU31_JDAM_x1";
					};
					class FUEL_TANK
					{
						name = "FUEL TANK";
						value = "js_m_fa18_wing_tank_x1";
					};
					class DUAL_RAIL
					{
						name = "DUAL RAIL";
						value = "js_m_fa18_bombrack_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_8_init
			{
				displayName = "Weapon Pylon 8";
				description = "Weapon equipped on station 8";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class AGM84
					{
						name = "AGM84";
						value = "js_m_fa18_Harpoon_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU32
					{
						name = "GBU32";
						value = "js_m_fa18_GBU32_JDAM_x1";
					};
					class GBU31
					{
						name = "GBU31";
						value = "js_m_fa18_GBU31_JDAM_x1";
					};
					class FUEL_TANK
					{
						name = "FUEL TANK";
						value = "js_m_fa18_wing_tank_x1";
					};
					class DUAL_RAIL
					{
						name = "DUAL RAIL";
						value = "js_m_fa18_bombrack_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_9_init
			{
				displayName = "Weapon Pylon 9";
				description = "Weapon equipped on station 9";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_10_init
			{
				displayName = "Weapon Pylon 10";
				description = "Weapon equipped on station 10";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class ATFLIR
					{
						name = "ATFLIR POD";
						value = "js_m_fa18_altflir_pod_x1";
						default = 1;
					};
				};
			};
			class Weapon_station_11_init
			{
				displayName = "Weapon Pylon 11";
				description = "Weapon equipped on station 11";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
						default = 1;
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_12_init
			{
				displayName = "Weapon Pylon 12";
				description = "Weapon equipped on station 12";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
						default = 1;
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_13_init
			{
				displayName = "Weapon Pylon 13";
				description = "Weapon equipped on station 13";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
						default = 1;
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_14_init
			{
				displayName = "Weapon Pylon 14";
				description = "Weapon equipped on station 14";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
						default = 1;
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_15_init
			{
				displayName = "Weapon Pylon 15";
				description = "Weapon equipped on station 15";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
						default = 1;
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_16_init
			{
				displayName = "Weapon Pylon 16";
				description = "Weapon equipped on station 16";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
						default = 1;
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_17_init
			{
				displayName = "Weapon Pylon 17";
				description = "Weapon equipped on station 17";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
						default = 1;
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_18_init
			{
				displayName = "Weapon Pylon 18";
				description = "Weapon equipped on station 18";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class AIM9X
					{
						name = "AIM9X";
						value = "js_m_fa18_aim9x_x1";
					};
					class AIM120
					{
						name = "AIM120";
						value = "js_m_fa18_aim120c_x1";
					};
					class AGM65
					{
						name = "AGM65";
						value = "js_m_fa18_Maverick_x1";
						default = 1;
					};
					class GBU38
					{
						name = "GBU38";
						value = "js_m_fa18_GBU38_JDAM_x1";
					};
					class GBU12
					{
						name = "GBU12";
						value = "js_m_fa18_GBU12_x1";
					};
				};
			};
			class Weapon_station_19_init
			{
				displayName = "Weapon Pylon 19";
				description = "Weapon equipped on station 19";
				typeName = "STRING";
				class values
				{
					class EMPTY
					{
						name = "EMPTY";
						value = "js_m_fa18_empty";
					};
					class FUEL_TANK
					{
						name = "FUEL TANK";
						value = "js_m_fa18_wing_tank_x1";
						default = 1;
					};
					class BUDDY_POD
					{
						name = "REFUELING POD";
						value = "js_m_fa18_buddypod_x1";
					};
				};
			};
			class Wings_Fold_status_init
			{
				displayName = "Wings FOLDED/UNFOLDED";
				description = "Wings FOLDED/UNFOLDED";
				typeName = "NUMBER";
				class values
				{
					class UNFOLDED
					{
						name = "UNFOLDED";
						value = 0;
						default = 1;
					};
					class FOLDED
					{
						name = "FOLDED";
						value = 1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "F/A-18 F respawn/init module";
			sync[] = {"JS_JC_FA18F"};
			class LocationArea_F
			{
				description[] = {"A TEST","B TEST"};
				position = 1;
				direction = 1;
				optional = 1;
				duplicate = 1;
				synced[] = {"JS_JC_FA18F"};
			};
			class JS_JC_FA18F
			{
				description = "F/A-18 F Super Hornet";
				displayName = "F/A-18 F Super Hornet";
				icon = "\js_jc_fa18\ui\fa18_icon.paa";
				position = 1;
				direction = 1;
				optional = 1;
				duplicate = 1;
				side = 0;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyDriver;
	class ProxyWeapon;
	class Proxym_agm65d: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_agm65d";
		simulation = "maverickweapon";
	};
	class Proxym_agm84: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_agm84";
		simulation = "maverickweapon";
	};
	class Proxym_aim9x: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_aim9x";
		simulation = "maverickweapon";
	};
	class Proxym_aim120c: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_aim120c";
		simulation = "maverickweapon";
	};
	class Proxym_mk82: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_mk82";
		simulation = "maverickweapon";
	};
	class Proxym_gbu12: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_gbu12";
		simulation = "maverickweapon";
	};
	class Proxym_gbu31: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_gbu31";
		simulation = "maverickweapon";
	};
	class Proxym_gbu32: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_gbu32";
		simulation = "maverickweapon";
	};
	class Proxym_gbu38: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_gbu38";
		simulation = "maverickweapon";
	};
	class Proxym_gbu12fly: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_gbu12fly";
		simulation = "maverickweapon";
	};
	class Proxym_wing_tank: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_wing_tank";
		simulation = "maverickweapon";
	};
	class Proxym_altflir_pod: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_altflir_pod";
		simulation = "maverickweapon";
	};
	class Proxym_bombrack_x2: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_bombrack_x2";
		simulation = "maverickweapon";
	};
	class Proxym_empty: ProxyWeapon
	{
		model = "\js_jc_fa18\stores\m_empty";
		simulation = "maverickweapon";
	};
};
class cfgMods
{
	author = "John Spartan & Saul";
	timepacked = "1422879707";
};
//};
