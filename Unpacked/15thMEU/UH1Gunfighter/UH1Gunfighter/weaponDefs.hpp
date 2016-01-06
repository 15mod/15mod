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
		dangerRadiusHit= -1;
		suppressionRadiusHit= 35;
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
	class uhgun1safe: uh1safe
	{};
	class uhgun2safe: uh1safe
	{};
	class FFARLauncher_14: RocketPods
	{
		magazines[] = {"14Rnd_FFAR"};
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
			begin1[] = {"\UH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
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
			begin1[] = {"\UH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
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
			begin1[] = {"\UH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
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
			begin1[] = {"\UH1gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
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
};