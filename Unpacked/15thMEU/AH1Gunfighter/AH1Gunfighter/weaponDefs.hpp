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
		trackOversteer = 1.0;
		trackLead = 1;
		initTime = 0.0;
		thrustTime = 5.0;
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
		dangerRadiusHit= -1;
		suppressionRadiusHit= 25;
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
		dangerRadiusHit= -1;
		suppressionRadiusHit= 35;
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
		sound[] = {"A3\Sounds_F\weapons\Rockets\missile_1", 1.12202, 1.3, 1100};
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
	class M134_minigun_2: M134_minigun {};
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
		sounds[] = {StandardSound};
			class StandardSound
			{
			weaponSoundEffect  = "DefaultRifle";
			begin1[]={"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,2000};
			soundBegin[] = {Begin1,0.33};
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
			sounds[] = {StandardSound};
			class StandardSound
			{
			weaponSoundEffect  = "DefaultRifle";
			begin1[]={"AH1gunfighter\sounds\a10vulcanVII",db5,1,2500};
			soundBegin[] = {Begin1,0.33};
			};
		};
	};
	class FFARLauncher: RocketPods
	{
		magazines[] = {"38Rnd_FFAR","28Rnd_FFAR"};
		displayName = "HYDRA";
		modes[] = {"Far_AI",
			"Burst1",
			"Burst2",
			"Burst4"};
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
			autofire = false;
			showToPlayer = 0;
			sounds[] = {StandardSound};
			class StandardSound{
			weaponSoundEffect  = "DefaultRifle";
			begin1[] = {"\AH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
			soundBegin[] = {Begin1,0.33};
			};
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				1.1220185,
				1.2,
				700
			};
		};
		class Burst1: Mode_SemiAuto
		{
			minRange=1;
			minRangeProbab=0.001;
			midRange=2;
			midRangeProbab=0.001;
			maxRange=3;
			maxRangeProbab=0.01;
			displayName="HYDRA 70/Single";
			burst=1;
			canLock=1;
			reloadTime=0.15;
			autoFire=false;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
			begin1[] = {"\AH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
			soundBegin[] = {Begin1,0.33};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				2.5,
				1.2,
				700
			};
			soundContinuous=0;
			soundBurst=0;
		};
		class Burst2: Mode_Burst
		{
			minRange=1;
			minRangeProbab=0.001;
			midRange=2;
			canLock=1;
			midRangeProbab=0.001;
			maxRange=3;
			maxRangeProbab=0.001;
			displayName="HYDRA 70/Ripple 2";
			reloadTime=0.25;
			autoFire=false;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
			begin1[] = {"\AH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
			soundBegin[] = {Begin1,0.33};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				1.1220185,
				1.2,
				700
			};
			burst=2;
			soundContinuous=0;
			soundBurst=0;
		};
		class Burst4: Mode_FullAuto
		{
			minRange=1;
			minRangeProbab=0.001;
			midRange=2;
			midRangeProbab=0.001;
			canLock=1;
			maxRange=3;
			maxRangeProbab=0.01;
			reloadTime=0.25;
			autoFire=false;
			displayName="HYDRA 70/Ripple 4";
			burst=4;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
			begin1[] = {"\AH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
			soundBegin[] = {Begin1,0.33};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				1.1220185,
				1.2,
				700
			};
			soundContinuous=0;
			soundBurst=0;
		};
	};
class FFARLauncher_14:FFARLauncher
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

	sounds[] = {StandardSound};
			class StandardSound
			{
			weaponSoundEffect  = "DefaultRifle";
			Begin1[] = {"AH1gunfighter\sounds\RocketLauncher_Shot05", 1.12202, 1.3, 2000};
			soundfly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 1, 1.1, 700};
			soundBegin[] = {Begin1,0.33};
			};


	};
};