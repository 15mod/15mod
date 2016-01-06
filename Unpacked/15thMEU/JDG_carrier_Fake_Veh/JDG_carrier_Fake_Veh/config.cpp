////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon Oct 19 08:58:09 2015 : Created on Mon Oct 19 08:58:09 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class JDG_carrier_Fake_Veh : config.bin{
class CfgPatches
{
	class JDG_carrier_Fake_Veh
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Structures_F"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class JDG_Carrier_soundVeh_base: Car_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_vehicle_armedcar_s"};
				speechPlural[] = {"veh_vehicle_armedcar_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_vehicle_armedcar_s";
		textPlural = "$STR_A3_nameSound_veh_vehicle_armedcar_p";
		nameSound = "veh_vehicle_armedcar_s";
		author = "MrEwok";
		_generalMacro = "JDG_Carrier_soundVeh_base";
		model = "JDG_carrier_Fake_Veh\JDG_carrier_Fake_Veh.p3d";
		Picture = "";
		Icon = "";
		mapSize = 6;
		displayName = "JDG_Carrier_soundVeh_base";
		scope = 1;
		faction = "BLU_F";
		side = 1;
		vehicleClass = "Car";
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_F"};
		WaterLeakiness = 10;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		wheelCircumference = 2.834;
		antiRollbarForceCoef = 12;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 50;
		crewVulnerable = 1;
		crewCrashProtection = 0.15;
		weapons[] = {};
		magazines[] = {};
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		armor = 80;
		damageResistance = 0.00562;
		turnCoef = 2.5;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;
		brakeDistance = 1;
		terrainCoef = 1.5;
		wheelDamageThreshold = 0.7;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.95;
		wheelDestroyRadiusCoef = 0.45;
		cost = 200000;
		precision = 15;
		armorGlass = 0.5;
		armorWheels = 0.1;
		soundServo[] = {"A3\sounds_f\dummysound",0.01,1,10};
		soundEnviron[] = {"",0.56234133,1};
		transportMaxBackpacks = 5;
		transportSoldier = 3;
		class Library
		{
			libTextDesc = "JDG_Carrier_soundVeh_base";
		};
		castDriverShadow = "false";
		driverAction = "passenger_injured_medevac_truck01";
		cargoAction[] = {"passenger_injured_medevac_truck01"};
		threat[] = {0.8,0.6,0.3};
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "pedal_thrust";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		idleRpm = 800;
		redRpm = 4500;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 250;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-5.75,"N",0,"D1",4.3,"D2",2.3,"D3",1.5,"D4",1,"D5",0.73};
			TransmissionRatios[] = {"High",6.759};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 6;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 20;
		enginePower = 276;
		maxOmega = 471;
		peakTorque = 1253;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0,0},{0.278,0.5},{0.35,0.75},{0.461,1},{0.6,0.95},{0.7,0.85},{0.8,0.75},{1,0.5}};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.126";
				mass = 30;
				MOI = 12.8;
				dampingRate = 0.1;
				maxBrakeTorque = 10000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.05;
				mMaxDroop = 0.1;
				sprungMass = 825;
				springStrength = 51625;
				springDamperRate = 8920;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3500;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3500;
			};
		};
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getin",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getout",0.56234133,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_start",0.35481337,1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_start",0.70794576,1,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_stop",0.35481337,1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_stop",0.70794576,1,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"JDG_carrier_Fake_Veh\Sounds\engine.ogg",50,1,400};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",0.4466836,1,250};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",0.56234133,1,300};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",0.70794576,1,350};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",1,1,400};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*camPos*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",0.56234133,1,200};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",0.70794576,1,350};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",0.8912509,1,400};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",1.1220185,1,425};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",1.2589254,1,450};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class Idle_int
			{
				sound[] = {"JDG_carrier_Fake_Veh\Sounds\engine.ogg",50,1};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",0.31622776,1};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",0.39810717,1};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",0.5011872,1};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",0.63095737,1};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",0.35481337,1};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",0.4466836,1};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",0.56234133,1};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",0.70794576,1};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",0.7943282,1};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class TiresRockOut{};
			class TiresSandOut{};
			class TiresGrassOut{};
			class TiresMudOut{};
			class TiresGravelOut{};
			class TiresAsphaltOut{};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.1220185,1,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn{};
			class TiresSandIn{};
			class TiresGrassIn{};
			class TiresMudIn{};
			class TiresGravelIn{};
			class TiresAsphaltIn{};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.56234133,1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road{};
			class acceleration_ext_road{};
			class turn_left_ext_road{};
			class turn_right_ext_road{};
			class breaking_ext_dirt{};
			class acceleration_ext_dirt{};
			class turn_left_ext_dirt{};
			class turn_right_ext_dirt{};
			class breaking_int_road{};
			class acceleration_int_road{};
			class turn_left_int_road{};
			class turn_right_int_road{};
			class breaking_int_dirt{};
			class acceleration_int_dirt{};
			class turn_left_int_dirt{};
			class turn_right_int_dirt{};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.1;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.1;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.1;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.38;
			};
			class HitLBWheel: HitLF2Wheel
			{
				armor = 0.38;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.38;
			};
			class HitRBWheel: HitRF2Wheel
			{
				armor = 0.38;
			};
			class HitFuel
			{
				armor = 1.4;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {};
		};
		class Reflectors{};
		aggregateReflectors[] = {};
		class RenderTargets{};
	};
	class JDG_Carrier_soundVeh: JDG_Carrier_soundVeh_base
	{
		scope = 1;
		faction = "BLU_F";
		side = 1;
		vehicleClass = "Car";
		model = "JDG_carrier_Fake_Veh\JDG_carrier_Fake_Veh.p3d";
		displayname = "JDG_Carrier_soundVeh";
		hasGunner = 0;
		transportSoldier = 1;
		cargoAction[] = {"passenger_injured_medevac_truck01"};
		threat[] = {0,0,0};
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "pedal_thrust";
		armor = 120;
		damageResistance = 0.03099;
		Picture = "";
		icon = "";
		attendant = 0;
		class Library
		{
			libTextDesc = "JDG_Carrier_soundVeh";
		};
		class Turrets: Turrets{};
		class AnimationSources: AnimationSources{};
		class UserActions{};
		class TransportWeapons{};
		class TransportItems{};
		class Damage
		{
			tex[] = {};
			mat[] = {};
		};
		HiddenSelections[] = {};
		HiddenSelectionsTextures[] = {};
	};
};
class cfgMods
{
	author = "TeTeT";
	timepacked = "1445270289";
};
//};
