////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Thu Jan 01 20:17:37 2015 : Created on Thu Jan 01 20:17:37 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class aavb : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AAV_Driver = "AAV_Driver";
		AAV_Gunner = "AAV_Gunner";
		AAV_Commander = "AAV_Commander";
		AAV_Driver_OUT = "AAV_Driver_OUT";
		AAV_Gunner_OUT = "AAV_Gunner_OUT";
		AAV_Commander_OUT = "AAV_Commander_OUT";
		AAV_Cargo01 = "AAV_Cargo01";
		AAV_Cargo02 = "AAV_Cargo02";
		AAV_Cargo03 = "AAV_Cargo03";
		AAV_Cargo04 = "AAV_Cargo04";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_AAV_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\AAVB\DATA\anim\KIA_AAV_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class AAV_Driver: Crew
		{
			file = "\AAVB\DATA\anim\AAV_Driver.rtm";
			interpolateTo[] = {"KIA_AAV_Driver",1};
		};
		class KIA_AAV_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\AAVB\DATA\anim\KIA_AAV_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class AAV_Gunner: Crew
		{
			file = "\AAVB\DATA\anim\AAV_Gunner.rtm";
			interpolateTo[] = {"KIA_AAV_Gunner",1};
		};
		class KIA_AAV_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\AAVB\DATA\anim\KIA_AAV_Commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class AAV_Commander: Crew
		{
			file = "\AAVB\DATA\anim\AAV_Commander.rtm";
			interpolateTo[] = {"KIA_AAV_Commander",1};
		};
		class KIA_AAV_Driver_OUT: DefaultDie
		{
			actions = "DeadActions";
			file = "\AAVB\DATA\anim\KIA_AAV_Driver_OUT.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class AAV_Driver_OUT: Crew
		{
			file = "\AAVB\DATA\anim\AAV_Gunner.rtm";
		};
		class KIA_AAV_Gunner_OUT: DefaultDie
		{
			actions = "DeadActions";
			file = "\AAVB\DATA\anim\KIA_AAV_Gunner_OUT.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class AAV_Gunner_OUT: Crew
		{
			file = "\AAVB\DATA\anim\AAV_Gunner_OUT.rtm";
			interpolateTo[] = {"KIA_AAV_Gunner_OUT",1};
		};
		class KIA_AAV_Commander_OUT: DefaultDie
		{
			actions = "DeadActions";
			file = "\AAVB\DATA\anim\KIA_AAV_Commander_OUT.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class AAV_Commander_OUT: Crew
		{
			file = "\AAVB\DATA\anim\AAV_Commander_OUT.rtm";
			interpolateTo[] = {"KIA_AAV_Commander_OUT",1};
		};
		class AAV_Cargo01: Crew
		{
			file = "\AAVB\DATA\anim\OutCargoLB.rtm";
		};
		class AAV_Cargo02: Crew
		{
			file = "\AAVB\DATA\anim\OutCargoLF.rtm";
		};
		class AAV_Cargo03: Crew
		{
			file = "\AAVB\DATA\anim\OutCargoRB.rtm";
		};
		class AAV_Cargo04: Crew
		{
			file = "\AAVB\DATA\anim\OutCargoRF.rtm";
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		AAV_Driver = "";
		AAV_Gunner = "";
		AAV_Commander = "";
		AAV_Driver_OUT = "";
		AAV_Gunner_OUT = "";
		AAV_Commander_OUT = "";
		AAV_Cargo01 = "crew";
		AAV_Cargo02 = "crew";
		AAV_Cargo03 = "crew";
		AAV_Cargo04 = "crew";
	};
};
class DefaultEventhandlers;
class CfgPatches
{
	class CATracked2_AAV
	{
		units[] = {"AAVB","Burnes_aav_des"};
		weapons[] = {};
		requiredVersion = 0.1;
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class FDustEffects_none{};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class AAVB: Tank_F
	{
		scope = 2;
		side = 1;
		faction = "BLU_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "AAVP7A1";
		vehicleClass = "Armored";
		model = "\AAVB\AAV";
		icon = "\AAVB\data\icomap_AAV_CA.paa";
		picture = "\AAVB\data\AAV_CA.paa";
		mapSize = 9;
		accuracy = 0.7;
		threat[] = {1,1,0.3};
		armor = 400;
		damageResistance = 0.01168;
		cost = 4000000;
		maxSpeed = 72;
		canFloat = 1;
		supplyRadius = 5;
		wheelCircumference = 2.2;
		textureTrackWheel = "";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\aavb\data\aav_ext_co.paa","\aavb\data\aav_ext2_co.paa"};
		cargoAction[] = {"passenger_generic01_leanleft","passenger_apc_narrow_generic01","passenger_apc_narrow_generic01","passenger_apc_narrow_generic03","passenger_apc_generic03","passenger_apc_narrow_generic02","passenger_generic01_foldhands","passenger_generic01_leanright"};
		transportSoldier = 19;
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		driverAction = "AAV_Gunner_OUT";
		driverInAction = "AAV_Driver";
		driverForceOptics = 0;
		commanderUsesPilotView = 0;
		driverOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
		LODTurnedOut = 1000;
		simulation = "tankX";
		switchTime = 0.41;
		latency = 1;
		slowSpeedForwardCoef = 0.09;
		normalSpeedForwardCoef = 0.5;
		enginePower = 400;
		maxOmega = 293.22;
		peakTorque = 1118;
		torqueCurve[] = {{"0/2800","0/1118"},{"641/2800","726/1118"},{"1120/2800","997/1118"},{"1680/2800","1118/1118"},{"1840/2800","1088/1118"},{"1999/2800","1017/1118"},{"2400/2800","1001/1118"},{"2940/2800","0/1118"}};
		antiRollbarForceCoef = 177098;
		clutchStrength = 40;
		fuelCapacity = 1885;
		brakeIdleSpeed = 2;
		tankTurnForce = 700000;
		waterAngularDampingCoef = 0.2;
		waterResistanceCoef = 0.005;
		rudderForceCoefAtMaxSpeed = 18;
		waterEffectSpeed = 5;
		engineEffectSpeed = 5;
		waterFastEffectSpeed = 8;
		memoryPointsLeftWaterEffect = "waterEffectR";
		memoryPointsRightWaterEffect = "waterEffectL";
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		waterspeedcoef = 0.2;
		waterSpeedFactor = 0.5;
		memoryPointTrackFLL = "wheel_1_2_bound";
		memoryPointTrackFLR = "wheel_1_3_bound";
		memoryPointTrackFRR = "wheel_1_4_bound";
		memoryPointTrackFRL = "wheel_1_5_bound";
		memoryPointTrackBLL = "wheel_2_2_bound";
		memoryPointTrackBLR = "wheel_2_3_bound";
		memoryPointTrackBRR = "wheel_2_4_bound";
		memoryPointTrackBRL = "wheel_2_5_bound";
		MemoryPointTrack1L = "";
		MemoryPointTrack2L = "";
		idleRpm = 800;
		redRpm = 2800;
		engineLosses = 5;
		transmissionLosses = 90;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-0.5,"N",0,"D1",1.46,"D2",0.967,"D3",0.678,"D4",0.461,"D5",0.3,"D6",0.2,"D7",0.153,"D8",0.093};
			TransmissionRatios[] = {"High",8};
			gearBoxMode = "full-auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0;
		};
		class Wheels
		{
			class L2
			{
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 15;
				steering = 0;
				side = "left";
				weight = 150;
				mass = 150;
				MOI = 14;
				latStiffX = 24;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 10000;
				sprungMass = 1885;
				springStrength = 56000;
				springDamperRate = 224339;
				dampingRate = 0.5;
				dampingRateInAir = 6030;
				dampingRateDamaged = 10;
				dampingRateDestroyed = 10000;
				maxDroop = 0.15;
				maxCompression = 0.15;
				frictionVsSlipGraph[] = {{0,5},{0.5,5},{1,5}};
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectBig";
			};
		};
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.562341,1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.562341,1,20};
		soundDammage[] = {"",0.562341,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_start",0.630957,1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_start",0.794328,1,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_stop",0.630957,1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_stop",0.794328,1,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",1,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm1",0.794328,1,200};
				frequency = "0.95	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm2",0.891251,1,240};
				frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm3",1.12202,1,280};
				frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm4",1.25893,1,320};
				frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm5",1.41254,1,360};
				frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm6",1.58489,1,400};
				frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm7",1.77828,1,440};
				frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*camPos*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm1",1.12202,1,200};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2",1.41254,1,200};
				frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm3",1.77828,1,230};
				frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4",1.99526,1,290};
				frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5",1.77828,1,350};
				frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6",2.23872,1,400};
				frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7",2.51189,1,450};
				frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm1",0.501187,1};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2",0.354813,1};
				frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3",0.398107,1};
				frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4",0.446684,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5",0.501187,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6",0.562341,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7",0.630957,1};
				frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1",0.630957,1};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2",0.398107,1};
				frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3",0.446684,1};
				frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4",0.446684,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5",0.501187,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6",0.562341,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7",0.630957,1};
				frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.501187,1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",0.891251,1,50};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_01",0.398107,1,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_02",0.446684,1,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_03",0.501187,1,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_04",0.562341,1,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_05",0.562341,1,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_01",0.316228,1,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_02",0.354813,1,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_03",0.398107,1,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_04",0.446684,1,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_05",0.501187,1,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_01",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_02",0.281838,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_03",0.316228,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_04",0.354813,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_05",0.398107,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_01",0.316228,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_02",0.316228,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_03",0.354813,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_04",0.354813,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_05",0.398107,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
		};
		viewDriverShadow = 1;
		viewGunnerShadow = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 0.05;
		viewDriverShadowDiff = 0.05;
		viewGunnerShadowDiff = 0.05;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				weapons[] = {"GMG_40mm","HMG_127_APC"};
				magazines[] = {"96Rnd_40mm_G_belt","500Rnd_127x99_mag_Tracer_Red","96Rnd_40mm_G_belt","500Rnd_127x99_mag_Tracer_Red","96Rnd_40mm_G_belt","500Rnd_127x99_mag_Tracer_Red","96Rnd_40mm_G_belt","500Rnd_127x99_mag_Tracer_Red"};
				gunnerForceOptics = 1;
				gunnerAction = "AAV_Gunner_OUT";
				gunnerInAction = "AAV_Gunner";
				selectionFireAnim = "zasleh_1";
				memoryPointGun = "machinegun";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOpticsEffect[] = {""};
				gunnerOutOpticsEffect[] = {};
				gunnerOutOpticsModel = "";
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1,10};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 0;
				turretInfoType = "RscOptics_MBT_02_commander";
				class Turrets{};
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -90;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.31;
					minFov = 0.034;
					maxFov = 0.31;
					visionMode[] = {"Normal","NVG","TI"};
					thermalMode[] = {0,1};
				};
				outGunnerMayFire = 1;
				startEngine = 0;
				stabilizedInAxes = 1;
			};
			class CommanderOptics: NewTurret
			{
				proxyType = "CPCommander";
				proxyIndex = 1;
				gunnerName = "$STR_POSITION_COMMANDER";
				primaryGunner = 0;
				primaryObserver = 1;
				gunnerForceOptics = 0;
				body = "ObsTurret";
				gun = "ObsGun";
				animationSourceBody = "obsTurret";
				animationSourceGun = "obsGun";
				gunnerAction = "AAV_Commander_OUT";
				gunnerInAction = "AAV_Commander";
				gunBeg = "";
				gunEnd = "";
				commanding = 2;
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1,30};
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerOpticsColor[] = {1,1,1,1};
				gunnerOutOpticsModel = "";
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOutOptics = "commander_weapon_view";
				memoryPointGunnerOptics = "commanderview";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				turretInfoType = "RscOptics_MBT_02_commander";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				animationSourceHatch = "hatchCommander";
				minElev = -10;
				maxElev = 35;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				weapons[] = {"SmokeLauncher"};
				magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
				outGunnerMayFire = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.31;
					minFov = 0.034;
					maxFov = 0.31;
					visionMode[] = {"Normal","TI","NVG"};
					thermalMode[] = {0,1};
				};
				startEngine = 0;
				stabilizedInAxes = 0;
			};
			class FFVTurret: NewTurret
			{
				LODTurnedOut = 0;
				canHideGunner = 0;
				isPersonTurret = 1;
				gunnerOutOpticsModel = "";
				gunnerAction = "";
				gunnerInAction = "";
				startEngine = 0;
				gunnerCanSee = 16;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -1;
				gunnerName = "Top Cover";
				memoryPointsGetInGunner = "";
				proxyType = "CPgunner";
				proxyIndex = 3;
				memoryPointsGetInGunnerDir = "";
				hasGunner = 0;
				usepip = 0;
			};
		};
		class AnimationSources: AnimationSources
		{
			class plate_front
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class leftHatch
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class rightHatch
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class rearRamp
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class turbine_cover_left: plate_front{};
			class turbine_cover_right: plate_front{};
		};
		class EventHandlers: DefaultEventhandlers
		{
			init = "_this execVM ""\AAVB\scripts\init.sqf""";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"aavb\data\aav_ext.rvmat","aavb\data\aav_ext_damage.rvmat","aavb\data\aav_ext_destruct.rvmat","aavb\data\aav_ext2.rvmat","aavb\data\aav_ext2_damage.rvmat","aavb\data\aav_ext2_destruct.rvmat","aavb\data\aav_tracks.rvmat","aavb\data\aav_tracks_damage.rvmat","aavb\data\aav_tracks_destruct.rvmat"};
		};
		class Library
		{
			libTextDesc = "AAVP7A1";
		};
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 90;
		class UserActions
		{
			class leftHatchOpen
			{
				userActionID = 101;
				displayName = "open left hatch";
				displayNameDefault = "open left hatch";
				position = "doplnovani";
				priority = 1.5;
				radius = 7;
				animPeriod = 1;
				onlyForPlayer = 0;
				condition = "this animationPhase ""leftHatch"" == 0";
				statement = "this animate [""leftHatch"",1];";
			};
			class RightHatchOpen
			{
				userActionID = 102;
				displayName = "open right hatch";
				displayNameDefault = "open right hatch";
				position = "doplnovani";
				priority = 1.5;
				radius = 7;
				animPeriod = 1;
				onlyForPlayer = 0;
				condition = "this animationPhase ""rightHatch"" == 0";
				statement = "this animate [""rightHatch"",1];";
			};
			class leftHatchClose
			{
				userActionID = 103;
				displayName = "close left hatch";
				displayNameDefault = "close left hatch";
				position = "doplnovani";
				priority = 1.5;
				radius = 7;
				animPeriod = 1;
				onlyForPlayer = 0;
				condition = "this animationPhase ""leftHatch"" > 0";
				statement = "this animate [""leftHatch"",0];";
			};
			class RightHatchClose
			{
				userActionID = 104;
				displayName = "close right hatch";
				displayNameDefault = "close right hatch";
				position = "doplnovani";
				priority = 1.5;
				radius = 7;
				animPeriod = 1;
				onlyForPlayer = 0;
				condition = "this animationPhase ""RightHatch"" > 0";
				statement = "this animate [""RightHatch"",0];";
			};
			class rampOpen
			{
				userActionID = 105;
				displayName = "open ramp";
				displayNameDefault = "open ramp";
				position = "doplnovani";
				priority = 1.2;
				radius = 7;
				animPeriod = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""rearRamp"" == 0";
				statement = "this animate [""rearRamp"",1];";
			};
			class rampClose
			{
				userActionID = 106;
				displayName = "close ramp";
				displayNameDefault = "close ramp";
				position = "doplnovani";
				priority = 1.5;
				radius = 7;
				animPeriod = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""rearRamp"" == 1";
				statement = "this animate [""rearRamp"",0];";
			};
			class Stop
			{
				displayName = "Stop";
				displayNameDefault = "Stop";
				priority = 0;
				radius = 5;
				position = "camo1";
				showWindow = 0;
				onlyforplayer = 1;
				shortcut = "GetOver";
				condition = "(player in [driver this]) && (alive this)";
				statement = "[this] execVM ""\AAVB\scripts\Stop.sqf""";
			};
			class Forward
			{
				displayName = "Forward";
				displayNameDefault = "Forward";
				priority = -1;
				radius = 5;
				position = "camo1";
				showWindow = 0;
				onlyforplayer = 1;
				shortcut = "SeagullForward";
				condition = "(player in [driver this]) && (alive this)";
				statement = "[this] execVM ""\AAVB\scripts\Forward.sqf""";
			};
			class Backward
			{
				displayName = "Backward";
				displayNameDefault = "Backward";
				priority = -2;
				radius = 5;
				position = "camo1";
				showWindow = 0;
				onlyforplayer = 1;
				shortcut = "SeagullBack";
				condition = "(player in [driver this]) && (alive this)";
				statement = "[this] execVM ""\AAVB\scripts\Backward.sqf""";
			};
			class Left
			{
				displayName = "Left";
				displayNameDefault = "Left";
				priority = -3;
				radius = 5;
				position = "camo1";
				showWindow = 0;
				onlyforplayer = 1;
				shortcut = "SeagullDown";
				condition = "(player in [driver this]) && (alive this)";
				statement = "[this] execVM ""\AAVB\scripts\Left.sqf""";
			};
			class Right
			{
				displayName = "Right";
				displayNameDefault = "Right";
				priority = -4;
				radius = 5;
				position = "camo1";
				showWindow = 0;
				onlyforplayer = 1;
				shortcut = "SeagullUp";
				condition = "(player in [driver this]) && (alive this)";
				statement = "[this] execVM ""\AAVB\scripts\Right.sqf""";
			};
		};
	};
	class Burnes_aav_des: AAVB
	{
		scope = 2;
		accuracy = 1000;
		displayName = "AAV Desert";
		model = "\AAVB\AAVdes";
	};
	class AAV_cutscene: AAVB
	{
		scope = 1;
		transportSoldier = 4;
		model = "\AAVB\AAV02";
		cargoAction[] = {"AAV_Cargo01","AAV_Cargo03","AAV_Cargo02","AAV_Cargo04"};
		crewVulnerable = 1;
		ejectDeadCargo = 1;
		class AnimationSources: AnimationSources
		{
			class hide_bikes
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 1;
			};
		};
	};
};
class cfgMods
{
	author = "76561197982468872";
	timepacked = "1420132657";
};
//};
