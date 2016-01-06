class CfgPatches {
	class HAFM_Weapons {
		units[] = {};
		weapons[] = {HAFM_LAW};
		requiredVersion = 0.4;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class CfgAmmo {
	class RocketCore;	// External class reference
	class RocketBase;	// External class reference
	class MissileCore;	// External class reference
	class MissileBase;	// External class reference
	class R_PG32V_F;	// External class reference
	
	class HAFM_M72_AD : MissileBase {
		hit = 700;
		indirectHit = 80;
		indirectHitRange = 10;
		model = "\HAFM_Weapons\Law\HAFM_M72_Rocket.p3d";
		cost = 2000;
		maxSpeed = 147;	// max speed on level road, km/h
		thrustTime = 1;
		thrust = 550;
		visibleFire = 24;	// how much is visible when this weapon is fired
		audibleFire = 16;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		
		class CamShakeFire {
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		
		class CamShakePlayerFire {
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
	};
};

class CfgMagazines {
	class Default;	// External class reference
	class CA_LauncherMagazine;	// External class reference
	
	class HAFM_M72_Rocket : CA_LauncherMagazine {
		scope = 2;
		displayName = "M72 Rocket";
		model = "\HAFM_Weapons\law\HAFM_M72_Rocket.p3d";
		modelSpecial = "\HAFM_Weapons\law\HAFM_Law_Loaded.p3d";
		picture = "\HAFM_Weapons\law\data\ico\gear_M72_rocket_ca.paa";
		initSpeed = 40;
		descriptionShort = "LAW M72 Rocket";
		ammo = HAFM_M72_AD;
		type = 2*		256;
		mass = 50;
		allowedslots[] = {701, 801, 901};
	};
};

class CfgWeapons {
	class Launcher;	// External class reference
	
	class HAFM_LAW : Launcher {

		scope = 2;
		displayName = "LAW M72";
		model = "\HAFM_Weapons\law\HAFM_Law.p3d";
		modelSpecial = "\HAFM_Weapons\law\HAFM_Law_Loaded.p3d";
		picture = "\HAFM_Weapons\law\data\ico\gear_M72_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\HAFM_Weapons\law\Data\anims\m136.rtm"};
		reloadAction = "ReloadRPG";
		modelOptics = "-";
		weaponInfoType = "RscWeaponEmpty";
		magazines[] = {"HAFM_M72_Rocket"};
		sound[] = {"A3\Sounds_F\weapons\Launcher\rpg32", db6, 1, 800};
		aiRateOfFire = 5.0;	// delay between shots at given distance
		aiRateOfFireDistance = 150;
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 150;
		midRangeProbab = 0.8;
		maxRange = 250;
		maxRangeProbab = 0.1;
		canLock = LockNo;
		weaponLockDelay = 2.0;
		canDrop = true;
		showEmpty = 1;
		autoReload = false;
		enableReload = 0;
		reloadtime = 1;
		memorypointcamera = "eye";
		sounds[] = {"StandardSound"};
		cse_backblastAngle = 75;
   		cse_backblastDamage = 1;
   		cse_backblast_maxDistance = 5;
   		cse_backblast_noObjectDistance = 5;
		
		class BaseSoundModeType {
			weaponSoundEffect = "DefaultRifle";
		};
		
		class StandardSound : BaseSoundModeType {
			begin1[] = {"A3\Sounds_F\weapons\Launcher\rpg32", 1.99526, 1, 900};
			soundBegin[] = {"begin1", 1};
		};
		drySound[] = {"A3\sounds_f\weapons\other\dry6", 0.446684, 1, 20};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final", 1.0, 1, 10};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", db-10, 1.5, 700};
		recoil = "recoil_single_law";
		lockAcquire = 0;
		inertia = 0.2;
		
		class WeaponSlotsInfo {
			mass = 20;
			allowedSlots[] = {901};
		};
		descriptionShort = "M72 LAW hand crafted by chains swagger.";
		
		class Library {
			libTextDesc = "M72 LAW";
		};
	};
};
