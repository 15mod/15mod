////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Jul 12 11:11:01 2015 : Created on Sun Jul 12 11:11:01 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class 15thCRRC : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHIB_Cargo = "RHIB_Cargo";
		Zodiac_Driver = "Zodiac_Driver";
		Zodiac_Cargo01 = "Zodiac_Cargo01";
		Zodiac_Cargo02 = "Zodiac_Cargo02";
		Zodiac_Cargo03 = "Zodiac_Cargo03";
		Zodiac_Cargo04 = "Zodiac_Cargo04";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_RHIB_Cargo: DefaultDie
		{
			file = "\A3\boat_f\Data\Anim\KIA_RHIB_Cargo.rtm";
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
		};
		class Zodiac_Dead: KIA_RHIB_Cargo{};
		class RHIB_Cargo: Crew
		{
			file = "\A3\boat_f\Data\Anim\RHIB_Cargo.rtm";
			interpolateTo[] = {"KIA_RHIB_Cargo",1};
		};
		class Zodiac_Driver: Crew
		{
			file = "\A3\boat_f\Data\Anim\Zodiac_Driver.rtm";
			interpolateTo[] = {"KIA_Zodiac_Driver",1};
		};
		class KIA_Zodiac_Driver: DefaultDie
		{
			file = "\A3\boat_f\Data\Anim\Zodiac_Driver_KIA.rtm";
			actions = "DeadActions";
			speed = -1;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
		};
		class Zodiac_Cargo01: Crew
		{
			file = "\A3\boat_f\Data\Anim\Zodiac_Cargo_1.rtm";
			rightHandIKCurve[] = {1};
			weaponIK = 1;
			interpolateTo[] = {"KIA_Zodiac_Cargo_1",1};
		};
		class KIA_Zodiac_Cargo_1: DefaultDie
		{
			file = "\A3\boat_f\Data\Anim\Zodiac_Cargo_1_KIA.rtm";
			rightHandIKCurve[] = {1};
			weaponIK = 1;
			actions = "DeadActions";
			speed = -0.8;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
		};
		class Zodiac_Cargo02: Crew
		{
			file = "\A3\boat_f\Data\Anim\Zodiac_Cargo_2.rtm";
			rightHandIKCurve[] = {1};
			weaponIK = 1;
			interpolateTo[] = {"KIA_Zodiac_Cargo_2",1};
		};
		class KIA_Zodiac_Cargo_2: DefaultDie
		{
			file = "\A3\boat_f\Data\Anim\Zodiac_Cargo_2_KIA.rtm";
			rightHandIKCurve[] = {1};
			weaponIK = 1;
			actions = "DeadActions";
			speed = -0.8;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
		};
		class Zodiac_Cargo03: Crew
		{
			file = "\A3\boat_f\Data\Anim\Zodiac_Cargo_3.rtm";
			rightHandIKCurve[] = {1};
			weaponIK = 1;
			interpolateTo[] = {"KIA_Zodiac_Cargo_3",1};
		};
		class KIA_Zodiac_Cargo_3: DefaultDie
		{
			file = "\A3\boat_f\Data\Anim\Zodiac_Cargo_3_KIA.rtm";
			rightHandIKCurve[] = {1};
			weaponIK = 1;
			actions = "DeadActions";
			speed = -0.8;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
		};
		class Zodiac_Cargo04: Crew
		{
			file = "\A3\boat_f\Data\Anim\Zodiac_Cargo_4.rtm";
			rightHandIKCurve[] = {1};
			weaponIK = 1;
			interpolateTo[] = {"KIA_Zodiac_Cargo_4",1};
		};
		class KIA_Zodiac_Cargo_4: DefaultDie
		{
			file = "\A3\boat_f\Data\Anim\Zodiac_Cargo_4_KIA.rtm";
			rightHandIKCurve[] = {1};
			weaponIK = 1;
			actions = "DeadActions";
			speed = -0.8;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
		};
	};
};
class DefaultEventhandlers;
class cfgpatches
{
	class 15thCRRC
	{
		units[] = {"15thCRRCboat"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Boat_F"};
	};
};
class CfgVehicles
{
	class Weapon_Bag_Base;
	class B_UAV_01_backpack_F: Weapon_Bag_Base
	{
		class EventHandlers;
		class assembleinfo;
	};
	class B_CRRC_backpack: B_UAV_01_backpack_F
	{
		_generalmacro = "B_CRRC_backpack";
		displayname = "Zodiac CRRC Bag";
		faction = "BLU_F";
		hiddenselectionstextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\data\UAV_backpack_rgr_co.paa"};
		mapsize = 0.6;
		mass = 300;
		maximumload = 0;
		model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		picture = "\A3\Drones_F\Weapons_F_Gamma\ammoboxes\bags\data\ui\icon_B_C_UAV_rgr_ca";
		scope = 2;
		side = 1;
		class assembleInfo: assembleinfo
		{
			assembleto = "15thCRRCboat";
			base = "";
			displayname = "Zodiac CRRC";
		};
	};
	class Ship;
	class Ship_F: Ship
	{
		class ViewPilot;
		class AnimationSources;
		class Eventhandlers;
	};
	class boat_f: Ship_F{};
	class Rubber_duck_base_F: boat_f{};
	class 15thCRRCboat: Rubber_duck_base_F
	{
		mapSize = 6;
		extCameraPosition[] = {0,1.5,-4};
		vehicleClass = "Ship";
		_generalMacro = "15thCRRCboat";
		scope = 2;
		displayName = "Zodiac CRRC";
		crew = "B_Soldier_F";
		faction = "BLU_F";
		side = 1;
		commandercansee = 31;
		drivercansee = 31;
		accuracy = 0.5;
		unitInfoType = "RscUnitInfoShip";
		radarType = 8;
		model = "15thCRRC\zodiac.p3d";
		picture = "\A3\boat_F\Boat_Transport_01\data\UI\Boat_Transport_01_CA.paa";
		Icon = "\A3\boat_F\Boat_Transport_01\data\UI\map_Boat_Transport_01_CA.paa";
		cost = 10000;
		threat[] = {0.6,0.2,0.3};
		armor = 40;
		fuelExplosionPower = 0;
		secondaryExplosion = -1;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		leftEngineEffect = "LEngEffectsSmall";
		rightEngineEffect = "REngEffectsSmall";
		leftFastWaterEffect = "LFastWaterEffects";
		rightFastWaterEffect = "RFastWaterEffects";
		waterEffectSpeed = 5;
		engineEffectSpeed = 5;
		waterFastEffectSpeed = 28;
		memoryPointsLeftWaterEffect = "waterEffectR";
		memoryPointsRightWaterEffect = "waterEffectL";
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
		class HitPoints
		{
			class HitBody
			{
				armor = 0.7;
				material = 50;
				name = "telo";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitEngine
			{
				armor = 0.12;
				material = -1;
				name = "Motor";
				visual = "";
				passThrough = 1;
				radius = 0.1;
			};
		};
		attenuationEffectType = "OpenCarAttenuation";
		insideSoundCoef = 0.3;
		soundEngineOnInt[] = {"15thCRRC\sound\ext-boat-engine-start-01",1,1};
		soundEngineOnExt[] = {"15thCRRC\sound\ext-boat-engine-start-01",1,1,150};
		soundEngineOffInt[] = {"15thCRRC\sound\ext-boat-engine-stop-01",1,1};
		soundEngineOffExt[] = {"15thCRRC\sound\ext-boat-engine-stop-01",1,1,150};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1.7782794,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1.7782794,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1.7782794,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1.7782794,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1.7782794,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1.7782794,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1.7782794,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1.7782794,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1.7782794,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1.7782794,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1.7782794,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1.7782794,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1.7782794,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1.7782794,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class IdleOut
			{
				sound[] = {"15thCRRC\sound\ext-boat-engine-idle-01",0.70794576,1,150};
				frequency = "0.95	+	((rpm/	1200) factor[(100/	1200),(200/	1200)])*0.15";
				volume = "engineOn*(((rpm/	1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]))";
			};
			class Engine
			{
				sound[] = {"15thCRRC\sound\ext-boat-engine-low-01",1,0.9,300};
				frequency = "0.95	+	((rpm/	1200) factor[(300/	1200),(600/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(200/	1200),(300/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]))";
			};
			class EngineMidOut
			{
				sound[] = {"15thCRRC\sound\ext-boat-engine-low-01",1,0.85,400};
				frequency = "0.95	+	((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1200/	1200),(900/	1200)]))";
			};
			class EnginemaxOut
			{
				sound[] = {"15thCRRC\sound\ext-boat-engine-high-01",1,0.8,500};
				frequency = "0.95	+	((rpm/	1200) factor[(700/	1200),(1000/	1200)])*0.3";
				volume = "engineOn*((rpm/	1200) factor[(600/	1200),(1200/	1200)])";
			};
			class WaternoiseOutW0
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",1,1,100};
				frequency = "1";
				volume = "(speed factor[4, 1])";
			};
			class WaternoiseOutW1
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",1,1,150};
				frequency = "1";
				volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",1,1,300};
				frequency = "1";
				volume = "(speed factor[3, 9])";
			};
		};
		driverLeftHandAnimName = "DrivingWheel";
		driverAction = "Zodiac_Driver";
		cargoAction[] = {"Zodiac_Cargo01","Zodiac_Cargo02","Zodiac_Cargo03","Zodiac_Cargo04"};
		getInAction = "GetInLow";
		getOutAction = "GetOutlow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutlow"};
		castDriverShadow = 1;
		castCargoShadow = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		transportMaxBackpacks = 6;
		supplyRadius = 3;
		maxSpeed = 55;
		acceleration = 1;
		idleRpm = 40;
		redRpm = 1200;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-0.333,"N",0,"D1",2,"D2",1.85,"D3",1.75};
			TransmissionRatios[] = {"High",1};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		ejectDamageLimit = 0.99;
		simulation = "shipx";
		enginePower = 110;
		engineShiftY = 0.01;
		brakeIdleSpeed = 1.78;
		brakeDistance = 3;
		slowSpeedForwardCoef = 0.18;
		normalSpeedForwardCoef = 0.6;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.01;
		thrustDelay = 1;
		waterLinearDampingCoefY = 5;
		waterLinearDampingCoefX = 2;
		waterAngularDampingCoef = 1.2;
		turnCoef = 0.6;
		rudderForceCoef = 0.13;
		rudderForceCoefAtMaxSpeed = 0.009;
		enableGPS = 1;
		transportSoldier = 0;
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_boat_1";
				gunnerCompartments = "Compartment1";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
				gunnerGetOutAction = "GetOutlow";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				proxyIndex = 1;
				maxElev = 60;
				minElev = -15;
				maxTurn = 90;
				minTurn = -90;
				isPersonTurret = 1;
				class dynamicViewLimits
				{
					CargoTurret_03[] = {-90,90};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction = "passenger_boat_2";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				proxyIndex = 2;
				maxTurn = 90;
				minTurn = -90;
				minElev = -15;
				class dynamicViewLimits
				{
					CargoTurret_03[] = {-90,90};
					CargoTurret_04[] = {-90,90};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction = "passenger_boat_3";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_F";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				proxyIndex = 3;
				minElev = -15;
				maxTurn = 90;
				minTurn = -90;
				class dynamicViewLimits{};
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerAction = "passenger_boat_4";
				gunnerName = "Middle Left";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				proxyIndex = 4;
				maxTurn = 90;
				minTurn = -90;
				class dynamicViewLimits
				{
					CargoTurret_03[] = {-90,90};
				};
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerAction = "passenger_boat_4";
				gunnerName = "Middle Right";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				proxyIndex = 5;
				maxTurn = 90;
				minTurn = -90;
				class dynamicViewLimits
				{
					CargoTurret_03[] = {-90,90};
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffect";
			};
		};
		class Library
		{
			libTextDesc = "";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"15thCRRC\data\zodiac_engine.rvmat","15thCRRC\data\zodiac_engine.rvmat","15thCRRC\data\zodiac_engine_destruct.rvmat","15thCRRC\data\zodiac_guma.rvmat","15thCRRC\data\zodiac_guma.rvmat","15thCRRC\data\zodiac_guma_destruct.rvmat","15thCRRC\data\zodiac_gumb.rvmat","15thCRRC\data\zodiac_gumb.rvmat","15thCRRC\data\zodiac_gumb_destruct.rvmat","15thCRRC\data\zodiac_trup.rvmat","15thCRRC\data\zodiac_trup.rvmat","15thCRRC\data\zodiac_trup_destruct.rvmat"};
		};
		class EventHandlers: DefaultEventhandlers
		{
			init = "(_this select 0) execVM ""\15thcrrc\scripts\rotate.sqf""";
		};
		class assembleInfo
		{
			assembleto = "";
			base = "";
			displayname = "";
			dissasembleto[] = {"B_CRRC_backpack"};
			primary = 1;
		};
	};
};
class cfgMods
{
	author = "76561197982468872";
	timepacked = "1436692261";
};
//};
