////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon Nov 02 14:32:26 2015 : Created on Mon Nov 02 14:32:26 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class JDG_mk29SeaSparrow : config.bin{
class CfgPatches
{
	class JDG_mk29SeaSparrow
	{
		units[] = {"jdg_mk29"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Structures_F"};
		ammo[] = {"jdg_rim7"};
	};
};
class CfgFactionClasses
{
	access = 1;
	class USNavy
	{
		displayName = "NATO";
		priority = 2;
		side = 1;
	};
};
class CfgSkeletons
{
	class mk29
	{
		isDiscrete = 0;
		skeletonInherit = "";
		skeletonBones[] = {"swivel","","launcher","swivel","caps","launcher"};
		pivotsModel = "";
	};
};
class CfgModels
{
	class Default
	{
		sectionsInherit = "";
		sections[] = {};
		skeletonName = "";
	};
	class mk29: Default
	{
		sections[] = {"swivel","launcher","caps"};
		skeletonName = "mk29";
	};
};
class CfgVehicles
{
	class NonStrategic;
	class jdg_mk29: NonStrategic
	{
		reversed = 0;
		scope = 2;
		side = 1;
		faction = "USNavy";
		vehicleClass = "Static";
		Model = "\jdg_mk29SeaSparrow\mk29.p3d";
		DisplayName = "Mk.29 Sea Sparrow";
		nameSound = "veh_staticAAWeapon";
		accuracy = 0.12;
		cost = 70000;
		simulation = "House";
		Animated = 1;
		typicalCargo[] = {"B_crew_F"};
		crew = "B_crew_F";
		class EventHandlers
		{
			Init = "_this call TTT_fnc_init";
		};
		class AnimationSources
		{
			class Turret
			{
				Source = "user";
				SourceAddress = "clamp";
				AnimPeriod = 0.85;
			};
			class Gun
			{
				Source = "user";
				SourceAddress = "clamp";
				AnimPeriod = 0.85;
			};
		};
		class UserActions
		{
			class FunctionTest
			{
				displayName = "Test Function";
				position = "axis_swivel";
				radius = 10.0;
				condition = "1 > 0";
				statement = "this animate [""Gun"", 0.7]; this animate [""Turret"", 7.2];";
				onlyforplayer = 1;
			};
			class FunctionRest
			{
				displayName = "Reset Function";
				position = "axis_swivel";
				radius = 10.0;
				condition = "1 > 0";
				statement = "this animate [""Turret"", 0]; this animate [""Gun"", 0];";
				onlyforplayer = 1;
			};
		};
	};
};
class CfgAmmo
{
	class MissileBase;
	class jdg_rim7: MissileBase
	{
		model = "\jdg_mk29SeaSparrow\rim7.p3d";
		hit = 400;
		indirectHit = 200;
		indirectHitRange = 10;
		airFriction = 0.078;
		sideAirFriction = 0.2;
		maneuvrability = 30;
		simulationStep = 0.002;
		trackOversteer = 1;
		trackLead = 1;
		airLock = 1;
		irLock = 0;
		laserLock = 0;
		cost = 1000;
		timeToLive = 20;
		maxSpeed = 850;
		initTime = 0.25;
		thrustTime = 30.5;
		thrust = 385;
		fuseDistance = 50;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		weaponLockSystem = "2 + 16";
	};
};
class CfgWeapons
{
	class MissileLauncher;
	class jdg_rim7Launcher: MissileLauncher
	{
		displayName = "RIM-7 Sea Sparrow";
		displayNameMagazine = "RIM-7 Sea Sparrow";
		shortNameMagazine = "SeaSparrow";
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		cursorSize = 1;
		minRange = 500;
		minRangeProbab = 0.1;
		midRange = 4000;
		midRangeProbab = 0.9;
		maxRange = 8000;
		maxRangeProbab = 0.5;
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_1","db8",1,1100};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1","db0",1.1,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		weaponSoundEffect = "DefaultRifle";
		magazines[] = {""};
		aiRateOfFire = 2.0;
		aiRateOfFireDistance = 6000;
		weaponLockDelay = 3.0;
		textureType = "semi";
	};
};
class CfgMovesSparrow
{
	access = 1;
	skeletonName = "mk29";
	collisionVertexPattern[] = {};
	collisionGeomCompPattern[] = {};
	class States
	{
		class Default;
		class sparrow_Anim: Default
		{
			file = "JDG_mk29SeaSparrow\sparrowTest.rtm";
			speed = 0.33;
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = 0;
		};
	};
};
class CfgFunctions
{
	class TTT
	{
		class Sparrow
		{
			file = "JDG_mk29SeaSparrow\fn_sparrow";
			class init{};
			class raise{};
			class turn{};
		};
	};
};
//};
