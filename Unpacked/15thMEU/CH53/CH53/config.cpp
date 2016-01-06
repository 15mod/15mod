////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Wed Sep 16 23:39:28 2015 : Created on Wed Sep 16 23:39:28 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CH53 : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Merlin_Cargo_BAF = "Merlin_Cargo_BAF";
		Merlin_Cargo01_BAF = "Merlin_Cargo01_BAF";
		Merlin_Pilot_BAF = "Merlin_Pilot_BAF";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class Merlin_Cargo_BAF: Crew
		{
			file = "\CH53\Data\Anim\Merlin_Cargo";
			connectTo[] = {"Merlin_KIA_Cargo_BAF",1};
			speed = 1e+010;
		};
		class Merlin_KIA_Cargo_BAF: DefaultDie
		{
			actions = "DeadActions";
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\R\death2.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Merlin_Cargo01_BAF: Crew
		{
			file = "\CH53\Data\Anim\Merlin_Cargo01";
			connectTo[] = {"Merlin_KIA_Cargo_BAF",1};
			speed = 1e+010;
		};
		class Merlin_Pilot_BAF: Crew
		{
			file = "\CH53\Data\Anim\Merlin_Pilot";
			connectTo[] = {"Merlin_KIA_Pilot_BAF",1};
			speed = 1e+010;
		};
		class Merlin_KIA_Pilot_BAF: DefaultDie
		{
			actions = "DeadActions";
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\R\death2.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Merlin_Cargo_BAF = "crew";
		Merlin_Cargo01_BAF = "crew";
		Merlin_Pilot_BAF = "crew";
	};
};
class CfgSounds
{
	class ch53_rampdown
	{
		name = "cup_ch53_rampdown";
		sound[] = {"\ch53\sounds\Heli_CH53_ramp",1,1,15};
		titles[] = {};
	};
	class ch53_rampup
	{
		name = "cup_ch53_rampup";
		sound[] = {"\ch53\sounds\Heli_CH53_ramp",1,1,15};
		titles[] = {};
	};
	class ch53_gear
	{
		name = "cup_ch53_gear";
		sound[] = {"\ch53\sounds\Heli_CH53_01_gear",1,1,15};
		titles[] = {};
	};
	class cup_dws_critical_hydraulicsfailure
	{
		name = "cup_dws_critical_hydraulicsfailure";
		sound[] = {"\ch53\sounds\betty\dws_critical_hydraulicsfailure",1,1,15};
		titles[] = {};
	};
	class cup_dws_critical_pullup
	{
		name = "cup_dws_critical_pullup";
		sound[] = {"\ch53\sounds\betty\dws_critical_pullup",1,1,15};
		titles[] = {};
	};
	class cup_dws_critical_enginefailure
	{
		name = "cup_dws_critical_enginefailure";
		sound[] = {"\ch53\sounds\betty\dws_critical_enginefailure",1,1,15};
		titles[] = {};
	};
	class cup_dws_warning_engineout
	{
		name = "cup_dws_warning_engineout";
		sound[] = {"\ch53\sounds\betty\dws_warning_engineout",1,1,15};
		titles[] = {};
	};
	class cup_dws_warning_damagecritical
	{
		name = "cup_dws_warning_damagecritical";
		sound[] = {"\ch53\sounds\betty\dws_warning_damagecritical",1,1,15};
		titles[] = {};
	};
	class cup_dws_warning_fuelpressure
	{
		name = "cup_dws_warning_fuelpressure";
		sound[] = {"\ch53\sounds\betty\dws_warning_fuelpressure",1,1,15};
		titles[] = {};
	};
	class cup_dws_warning_fuelcritical
	{
		name = "cup_dws_warning_fuelcritical";
		sound[] = {"\ch53\sounds\betty\dws_warning_fuelcritical",1,1,15};
		titles[] = {};
	};
	class cup_dws_warning_sinkrate
	{
		name = "cup_dws_warning_sinkrate";
		sound[] = {"\ch53\sounds\betty\dws_warning_sinkrate",1,1,15};
		titles[] = {};
	};
	class cup_dws_critical_incomingmissile
	{
		name = "cup_dws_critical_incomingmissile";
		sound[] = {"\ch53\sounds\betty\dws_critical_incomingmissile",1,1,15};
		titles[] = {};
	};
	class cup_dws_caution_rampopen
	{
		name = "cup_dws_caution_rampopen";
		sound[] = {"\ch53\sounds\betty\dws_caution_rampopen",1,1,15};
		titles[] = {};
	};
	class cup_dws_caution_fuelow
	{
		name = "cup_dws_caution_fuelow";
		sound[] = {"\ch53\sounds\betty\dws_caution_fuelow",1,1,15};
		titles[] = {};
	};
	class cup_dws_caution_overspeed
	{
		name = "cup_dws_caution_overspeed";
		sound[] = {"\ch53\sounds\betty\dws_caution_overspeed",1,1,15};
		titles[] = {};
	};
	class cup_dws_info_geardown
	{
		name = "cup_dws_info_geardown";
		sound[] = {"\ch53\sounds\betty\dws_info_geardown",1,1,15};
		titles[] = {};
	};
	class cup_dws_info_gearup
	{
		name = "cup_dws_info_gearup";
		sound[] = {"\ch53\sounds\betty\dws_info_gearup",1,1,15};
		titles[] = {};
	};
	class cup_dws_info_stropsdeployed
	{
		name = "cup_dws_info_stropsdeployed";
		sound[] = {"\ch53\sounds\betty\dws_info_stropsdeployed",1,1,15};
		titles[] = {};
	};
	class cup_dws_info_stropsretracted
	{
		name = "cup_dws_info_stropsretracted";
		sound[] = {"\ch53\sounds\betty\dws_info_stropsretracted",1,1,15};
		titles[] = {};
	};
	class cup_dws_info_cargoattached
	{
		name = "cup_dws_info_cargoattached";
		sound[] = {"\ch53\sounds\betty\dws_info_cargoattached",1,1,15};
		titles[] = {};
	};
	class cup_dws_info_cargodetached
	{
		name = "cup_dws_info_cargodetached";
		sound[] = {"\ch53\sounds\betty\dws_info_cargodetached",1,1,15};
		titles[] = {};
	};
	class cup_dummysound
	{
		name = "cup_dummysound";
		sound[] = {"\ch53\sounds\betty\dummysound",1,1,15};
		titles[] = {};
	};
	class cup_debugbeep
	{
		name = "cup_debugbeep";
		sound[] = {"\ch53\sounds\betty\debugsound",1,1,15};
		titles[] = {};
	};
	class cup_debugsin
	{
		name = "cup_debugsin";
		sound[] = {"\ch53\sounds\betty\debugsoundst",1,1,15};
		titles[] = {};
	};
	class Missile3OClockH
	{
		name = "Missile3OClockH";
		sound[] = {"\ch53\sounds\betty\critical_missile03.wss",2,1,15};
		titles[] = {};
	};
	class Missile6OClockH
	{
		name = "Missile6OClockH";
		sound[] = {"\ch53\sounds\betty\critical_missile06.wss",2,1,15};
		titles[] = {};
	};
	class Missile9OClockH
	{
		name = "Missile9OClockH";
		sound[] = {"\ch53\sounds\betty\critical_missile09.wss",2,1,15};
		titles[] = {};
	};
	class Missile12OClockH
	{
		name = "Missile12OClockH";
		sound[] = {"\ch53\sounds\betty\critical_missile12.wss",2,1,15};
		titles[] = {};
	};
	class Missile3OClockL
	{
		name = "Missile3OClockL";
		sound[] = {"\ch53\sounds\betty\critical_missile03.wss",2,1,15};
		titles[] = {};
	};
	class Missile6OClockL
	{
		name = "Missile6OClockL";
		sound[] = {"\ch53\sounds\betty\critical_missile06.wss",2,1,15};
		titles[] = {};
	};
	class Missile9OClockL
	{
		name = "Missile9OClockL";
		sound[] = {"\ch53\sounds\betty\critical_missile09.wss",2,1,15};
		titles[] = {};
	};
	class Missile12OClockL
	{
		name = "Missile12OClockL";
		sound[] = {"\ch53\sounds\betty\critical_missile12.wss",2,1,15};
		titles[] = {};
	};
};
class CfgPatches
{
	class ch53
	{
		units[] = {"CUP_B_CH53E_USMC"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Air_F_Beta_Heli_Transport_02","A3_Cargoposes_F"};
	};
};
class CfgAnimationSourceSounds
{
	class CH53_Rampsound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"ch53\sounds\Heli_CH53_ramp",1,1,60};
			sound[] = {"sound0",1};
		};
		class DoorMovementDone1
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.9,0.99])";
			sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",1,1,60};
			sound[] = {"sound0",1};
		};
		class DoorMovementDone2
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.05])";
			sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",1,1,60};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.02,0.01])";
			sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",1,1,60};
			sound[] = {"sound0",1};
		};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
		};
		class Eventhandlers;
		class ViewPilot;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};
	class CUP_B_CH53E_USMC: Helicopter_Base_H
	{
		scope = 2;
		model = "\ch53\usec_ch53_e.p3d";
		displayName = "CH-53E Super Stallion";
		mapSize = 35;
		Icon = "\ch53\data\ui\ch53_icon_ca.paa";
		Picture = "\ch53\data\ui\ch53_picture_ca.paa";
		tf_RadioType_api = "tf_anarc210";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.2;
		radarType = 4;
		side = 1;
		faction = "BLU_F";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F,B_Helipilot_F"};
		driverCompartments = "Compartment1";
		availableForSupportTypes[] = {"Drop","Transport"};
		camouflage = 100;
		sensitivity = 3;
		sensitivityear = 3;
		canBeShot = 1;
		audible = 20;
		transportSoldier = 30;
		transportMaxBackpacks = 40;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 32;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 2;
			};
		};
		maxSpeed = 315;
		author = "Community Upgrade Project";
		accuracy = 1;
		driveOnComponent[] = {"wheel_nose","wheel_left","wheel_right"};
		usePreciseGetInAction = 0;
		memoryPointsGetInDriverPrecise = "pos driver";
		memoryPointsGetInCargoPrecise[] = {"pos cargo"};
		preciseGetInOut = 0;
		cargoPreciseGetInOut[] = {0};
		GetInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		driverDoor = "";
		cargoDoors[] = {};
		castCargoShadow = 1;
		driverAction = "Merlin_Pilot_BAF";
		cargoAction[] = {"ChopperHeavy_LP_Static_H"};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine"};
		LockDetectionSystem = "2 + 8";
		incomingMissileDetectionSystem = 16;
		numberPhysicalWheels = 3;
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		maximumLoad = 20000;
		vehicleClass = "Air";
		laserScanner = 1;
		cargoCanEject = 1;
		driverCanEject = 1;
		hideWeaponsCargo = 1;
		cost = 10000000;
		mainBladeRadius = 10;
		tailBladeRadius = 1;
		fuelCapacity = 2000;
		fuelConsumptionRate = 0.138;
		extCameraPosition[] = {0,5,-30};
		gearRetracting = 1;
		gearUpTime = 3;
		gearDownTime = 3;
		armor = 60;
		damageResistance = 0.00555;
		threat[] = {0.3,0.2,0.3};
		maxFordingDepth = 1.65;
		liftForceCoef = 1.5;
		irScanRangeMin = 2000;
		irScanRangeMax = 8000;
		irScanToEyeFactor = 2;
		nightVision = 1;
		altFullForce = 5000;
		altNoForce = 10000;
		selectionHRotorStill = "velka vrtule staticka";
		selectionHRotorMove = "velka vrtule blur";
		selectionVRotorStill = "mala vrtule staticka";
		selectionVRotorMove = "mala vrtule blur";
		dustEffect = "HeliDustBig";
		attenuationEffectType = "HeliAttenuation";
		emptySound[] = {"",0,1};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_default_int_1",1,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_default_int_2",1,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_default_int_3",1,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.33,"soundGeneralCollision2",0.33,"soundGeneralCollision3",0.33};
		soundLandCrashes[] = {"emptySound",0};
		soundBuildingCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundArmorCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundWoodCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_bush_int_1",1,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_bush_int_2",1,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_bush_int_3",1,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_water_ext_1",1,1,100};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_water_ext_2",1,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		soundGetIn[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_02\open",1,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_02\close",1,1,50};
		soundDammage[] = {"\ch53\sounds\betty\dws_warning_beeps",10,1,20};
		soundEngineOnInt[] = {"\ch53\sounds\Heli_CH53_01_int_start",2,1};
		soundEngineOnExt[] = {"\ch53\sounds\Heli_CH53_01_ext_start",2,1,800};
		soundEngineOffInt[] = {"\ch53\sounds\Heli_CH53_01_int_stop",2,1};
		soundEngineOffExt[] = {"\ch53\Heli_CH53_01_ext_stop",2,1,800};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",1,1.5};
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_rotor_int_1",1,1};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_rotor_ext_1",2.5118864,1,300};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_tail",1,1};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_tail",1,1,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",1,1,100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",1,1,100};
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",1.7782794,1,100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",1.7782794,1,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",1,1};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1,1,80};
		slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1,1};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1,1,80};
		slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1,1};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1,1,80};
		slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1,1};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1,1,80};
		slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
		gearUpExt[] = {"\ch53\sounds\Heli_CH53_01_gear",1,1,1000};
		gearUpInt[] = {"\ch53\sounds\Heli_CH53_01_gear",1,1,100};
		gearUp[] = {"gearUpInt","gearUpExt"};
		gearDownInt[] = {"\ch53\sounds\Heli_CH53_01_gear",1,1,100};
		gearDownExt[] = {"\ch53\sounds\Heli_CH53_01_gear",1,1,1000};
		gearDown[] = {"gearDownInt","gearDownExt"};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1.4125376,1,800};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] = {"\ch53\sounds\Heli_CH53_01_ext_rotor",1,1,3500};
				frequency = "rotorSpeed / (1-rotorThrust/5)*0.8";
				volume = "camPos*((rotorSpeed-0.72)*6)";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class RotorNoiseExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1,1,400};
				frequency = 1;
				volume = "camPos * (rotorThrust factor [0.7, 0.9])";
				cone[] = {0.7,1.3,1,0};
			};
			class EngineInt
			{
				sound[] = {"\ch53\sounds\Heli_CH53_01_int_engine",1,1};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[] = {"A3\Sounds_F\dummysound",0.5011872,1};
				frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_ext_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_ext_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_int_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_int_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_alarm_bluefor",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_alarm_bluefor",0.2238721,1,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_alarm_rotor_low",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_alarm_rotor_low",0.2238721,1,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1,1,100};
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
				sound[] = {"A3\Sounds_F\dummysound",0.70794576,1,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2d",1.1220185,1,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3",1,1,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[40,80])";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1.4125376,1,800};
					frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
					volume = "camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[] = {"\ch53\sounds\Heli_CH53_01_ext_rotor",1,1,3500};
					frequency = "rotorSpeed / (1-rotorThrust/5)*0.8";
					volume = "camPos*((rotorSpeed-0.72)*6)";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class RotorNoiseExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1,1,400};
					frequency = 1;
					volume = "camPos * (rotorThrust factor [0.7, 0.9])";
					cone[] = {0.7,1.3,1,0};
				};
				class EngineInt
				{
					sound[] = {"\ch53\sounds\Heli_CH53_01_int_engine",1,1};
					frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
					volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[] = {"A3\Sounds_F\dummysound",0.5011872,1};
					frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
					volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_ext_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_ext_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_int_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_int_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_alarm_bluefor",0.31622776,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_alarm_bluefor",0.2238721,1,20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_alarm_rotor_low",0.31622776,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_alarm_rotor_low",0.2238721,1,20};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
					frequency = 1;
					volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1,1,100};
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
					sound[] = {"A3\Sounds_F\dummysound",0.70794576,1,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
				};
				class GStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2d",1.1220185,1,50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3",1,1,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[40,80])";
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 1;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = 1;
			};
			class HitFuel: HitFuel
			{
				armor = 1.4;
				material = -1;
				name = "palivo";
				visual = "palivo";
				passThrough = 1;
			};
			class HitEngine: HitEngine
			{
				armor = 0.25;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
			class HitAvionics: HitAvionics
			{
				armor = 0.15;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 1;
			};
			class HitVRotor: HitVRotor
			{
				armor = 1.3;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0;
			};
			class HitHRotor: HitHRotor
			{
				armor = 2.6;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0;
			};
			class HitMissiles
			{
				armor = 0.1;
				material = 51;
				name = "munice";
				visual = "munice";
				passThrough = 0.5;
			};
			class HitRGlass
			{
				armor = 0.1;
				material = 51;
				name = "sklo predni P";
				visual = "sklo predni P";
				passThrough = 0;
			};
			class HitLGlass
			{
				armor = 0.1;
				material = 51;
				name = "sklo predni L";
				visual = "sklo predni L";
				passThrough = 0;
			};
			class HitGlass1
			{
				armor = 2;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			class HitGlass2
			{
				armor = 2;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			class HitGlass3
			{
				armor = 2;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			class HitGlass4
			{
				armor = 2;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			class HitGlass5
			{
				armor = 2;
				material = -1;
				name = "glass5";
				visual = "glass5";
				passThrough = 0;
			};
			class HitGlass6
			{
				armor = 2;
				material = -1;
				name = "glass6";
				visual = "glass6";
				passThrough = 0;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ch53\data\ch53_1.rvmat","ch53\data\ch53_1_damage.rvmat","ch53\data\ch53_1_destruct.rvmat","ch53\data\ch53_2.rvmat","ch53\data\ch53_2_damage.rvmat","ch53\data\ch53_2_destruct.rvmat","ch53\data\glass.rvmat","ch53\data\glass_damage.rvmat","ch53\data\glass_damage.rvmat","ch53\data\glassint.rvmat","ch53\data\glassint_damage.rvmat","ch53\data\glassint_damage.rvmat"};
		};
		class MFD
		{
			class CUP_CH53_HUD_1
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				class Bones
				{
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.5};
						pos10[] = {0.65,0.65};
					};
					class Velocity_slip
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.845};
						pos10[] = {0.53,0.845};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1;
						min = -10;
						max = 10;
						minPos[] = {0.93,0.2};
						maxPos[] = {0.93,0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 1;
						min = 0;
						max = 60;
						minPos[] = {0.965,0.2};
						maxPos[] = {0.965,0.8};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5,0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.25,0.25};
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.78,0.78};
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
					class LevelP55: Level0
					{
						angle = 55;
					};
					class LevelM55: Level0
					{
						angle = -55;
					};
					class LevelP60: Level0
					{
						angle = 60;
					};
					class LevelM60: Level0
					{
						angle = -60;
					};
					class LevelP65: Level0
					{
						angle = 65;
					};
					class LevelM65: Level0
					{
						angle = -65;
					};
					class LevelP70: Level0
					{
						angle = 70;
					};
					class LevelM70: Level0
					{
						angle = -70;
					};
					class LevelP75: Level0
					{
						angle = 75;
					};
					class LevelM75: Level0
					{
						angle = -75;
					};
					class LevelP80: Level0
					{
						angle = 80;
					};
					class LevelM80: Level0
					{
						angle = -80;
					};
					class LevelP85: Level0
					{
						angle = 85;
					};
					class LevelM85: Level0
					{
						angle = -85;
					};
					class LevelP90: Level0
					{
						angle = 90;
					};
					class LevelM90: Level0
					{
						angle = -90;
					};
				};
				class Draw
				{
					color[] = {0.18,1,0.18};
					alpha = 1;
					condition = "on";
					class Horizont
					{
						clipTL[] = {0.15,0.15};
						clipBR[] = {0.85,0.85};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{"Level0",{-0.42,0},1},{"Level0",{-0.08,0},1},{},{"Level0",{0.42,0},1},{"Level0",{0.08,0},1},{}};
							};
							class LevelM10: Level0
							{
								type = "line";
								width = 3;
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
								pos[] = {"LevelM10",{-0.21,-0.05},1};
								right[] = {"LevelM10",{-0.16,-0.05},1};
								down[] = {"LevelM10",{-0.21,0},1};
							};
							class VALM_2_10: VALM_1_10
							{
								align = "right";
								pos[] = {"LevelM10",{0.21,-0.05},1};
								right[] = {"LevelM10",{0.26,-0.05},1};
								down[] = {"LevelM10",{0.21,0},1};
							};
							class LevelP10: Level0
							{
								type = "line";
								width = 3;
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
								pos[] = {"LevelP10",{-0.21,0},1};
								right[] = {"LevelP10",{-0.16,0},1};
								down[] = {"LevelP10",{-0.21,0.05},1};
							};
							class VALP_2_10: VALP_1_10
							{
								align = "right";
								pos[] = {"LevelP10",{0.21,0},1};
								right[] = {"LevelP10",{0.26,0},1};
								down[] = {"LevelP10",{0.21,0.05},1};
							};
							class LevelM20: Level0
							{
								type = "line";
								width = 3;
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
								pos[] = {"LevelM20",{-0.21,-0.05},1};
								right[] = {"LevelM20",{-0.16,-0.05},1};
								down[] = {"LevelM20",{-0.21,0},1};
							};
							class VALM_2_20: VALM_1_20
							{
								align = "right";
								pos[] = {"LevelM20",{0.21,-0.05},1};
								right[] = {"LevelM20",{0.26,-0.05},1};
								down[] = {"LevelM20",{0.21,0},1};
							};
							class LevelP20: Level0
							{
								type = "line";
								width = 3;
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
								pos[] = {"LevelP20",{-0.21,0},1};
								right[] = {"LevelP20",{-0.16,0},1};
								down[] = {"LevelP20",{-0.21,0.05},1};
							};
							class VALP_2_20: VALP_1_20
							{
								align = "right";
								pos[] = {"LevelP20",{0.21,0},1};
								right[] = {"LevelP20",{0.26,0},1};
								down[] = {"LevelP20",{0.21,0.05},1};
							};
							class LevelM30: Level0
							{
								type = "line";
								width = 3;
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
								pos[] = {"LevelM30",{-0.21,-0.05},1};
								right[] = {"LevelM30",{-0.16,-0.05},1};
								down[] = {"LevelM30",{-0.21,0},1};
							};
							class VALM_2_30: VALM_1_30
							{
								align = "right";
								pos[] = {"LevelM30",{0.21,-0.05},1};
								right[] = {"LevelM30",{0.26,-0.05},1};
								down[] = {"LevelM30",{0.21,0},1};
							};
							class LevelP30: Level0
							{
								type = "line";
								width = 3;
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
								pos[] = {"LevelP30",{-0.21,0},1};
								right[] = {"LevelP30",{-0.16,0},1};
								down[] = {"LevelP30",{-0.21,0.05},1};
							};
							class VALP_2_30: VALP_1_30
							{
								align = "right";
								pos[] = {"LevelP30",{0.21,0},1};
								right[] = {"LevelP30",{0.26,0},1};
								down[] = {"LevelP30",{0.21,0.05},1};
							};
							class LevelM40: Level0
							{
								type = "line";
								width = 3;
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
								pos[] = {"LevelM40",{-0.21,-0.05},1};
								right[] = {"LevelM40",{-0.16,-0.05},1};
								down[] = {"LevelM40",{-0.21,0},1};
							};
							class VALM_2_40: VALM_1_40
							{
								align = "right";
								pos[] = {"LevelM40",{0.21,-0.05},1};
								right[] = {"LevelM40",{0.26,-0.05},1};
								down[] = {"LevelM40",{0.21,0},1};
							};
							class LevelP40: Level0
							{
								type = "line";
								width = 3;
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
								pos[] = {"LevelP40",{-0.21,0},1};
								right[] = {"LevelP40",{-0.16,0},1};
								down[] = {"LevelP40",{-0.21,0.05},1};
							};
							class VALP_2_40: VALP_1_40
							{
								align = "right";
								pos[] = {"LevelP40",{0.21,0},1};
								right[] = {"LevelP40",{0.26,0},1};
								down[] = {"LevelP40",{0.21,0.05},1};
							};
							class LevelM50: Level0
							{
								type = "line";
								width = 3;
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
								pos[] = {"LevelM50",{-0.21,-0.05},1};
								right[] = {"LevelM50",{-0.16,-0.05},1};
								down[] = {"LevelM50",{-0.21,0},1};
							};
							class VALM_2_50: VALM_1_50
							{
								align = "right";
								pos[] = {"LevelM50",{0.21,-0.05},1};
								right[] = {"LevelM50",{0.26,-0.05},1};
								down[] = {"LevelM50",{0.21,0},1};
							};
							class LevelP50: Level0
							{
								type = "line";
								width = 3;
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
								pos[] = {"LevelP50",{-0.21,0},1};
								right[] = {"LevelP50",{-0.16,0},1};
								down[] = {"LevelP50",{-0.21,0.05},1};
							};
							class VALP_2_50: VALP_1_50
							{
								align = "right";
								pos[] = {"LevelP50",{0.21,0},1};
								right[] = {"LevelP50",{0.26,0},1};
								down[] = {"LevelP50",{0.21,0.05},1};
							};
						};
					};
					class StaticBank
					{
						type = "line";
						width = 3;
						points[] = {{{0.4782,0.251},1},{{0.4773,0.241},1},{},{{0.4566,0.2538},1},{{0.4549,0.2439},1},{},{{0.4353,0.2585},1},{{0.4301,0.2392},1},{},{{0.4145,0.2651},1},{{0.4111,0.2557},1},{},{{0.3943,0.2734},1},{{0.3901,0.2644},1},{},{{0.375,0.2835},1},{{0.365,0.2662},1},{},{{0.3232,0.3232},1},{{0.3091,0.3091},1},{},{{0.2835,0.375},1},{{0.2662,0.365},1},{},{{"0.5 + (0.5- 0.4782)",0.251},1},{{"0.5 + (0.5- 0.4773)",0.241},1},{},{{"0.5 + (0.5- 0.4566)",0.2538},1},{{"0.5 + (0.5- 0.4549)",0.2439},1},{},{{"0.5 + (0.5- 0.4353)",0.2585},1},{{"0.5 + (0.5- 0.4301)",0.2392},1},{},{{"0.5 + (0.5- 0.4145)",0.2651},1},{{"0.5 + (0.5- 0.4111)",0.2557},1},{},{{"0.5 + (0.5- 0.3943)",0.2734},1},{{"0.5 + (0.5- 0.3901)",0.2644},1},{},{{"0.5 + (0.5- 0.3750)",0.2835},1},{{"0.5 + (0.5- 0.3650)",0.2662},1},{},{{"0.5 + (0.5- 0.3232)",0.3232},1},{{"0.5 + (0.5- 0.3091)",0.3091},1},{},{{"0.5 + (0.5- 0.2835)",0.375},1},{{"0.5 + (0.5- 0.2662)",0.365},1},{},{{0.5,"0.5 - 0.25"},1},{{0.5,"0.5 - 0.28"},1}};
					};
					class HorizonBankRot
					{
						type = "line";
						width = 3;
						points[] = {{"HorizonBankRot",{0,0.25},1},{"HorizonBankRot",{-0.01,0.23},1},{"HorizonBankRot",{0.01,0.23},1},{"HorizonBankRot",{0,0.25},1}};
					};
					class Waterline
					{
						type = "line";
						width = 7;
						points[] = {{{0.45,0.5},1},{{0.48,0.5},1},{{0.49,0.525},1},{{0.5,0.5},1},{{0.51,0.525},1},{{0.52,0.5},1},{{0.55,0.5},1}};
					};
					class Slip_ball_group
					{
						class Slip_bars
						{
							type = "line";
							width = 4;
							points[] = {{{"0.5-0.018","0.9-0.04"},1},{{"0.5-0.018","0.9-0.075"},1},{},{{"0.5+0.018","0.9-0.04"},1},{{"0.5+0.018","0.9-0.075"},1},{},{{"0.5+0.2","0.9-0.04"},1},{{"0.5-0.2","0.9-0.04"},1}};
						};
						class Slip_ball
						{
							type = "line";
							width = 6;
							points[] = {{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},{"Velocity_slip",1,{"0.0099999998 * 0.75","-0.01732 * 0.75"},1},{"Velocity_slip",1,{"0.01732 * 0.75","-0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"0.02 * 0.75","0 * 0.75"},1},{"Velocity_slip",1,{"0.01732 * 0.75","0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"0.0099999998 * 0.75","0.01732 * 0.75"},1},{"Velocity_slip",1,{"0 * 0.75","0.02 * 0.75"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.75","0.01732 * 0.75"},1},{"Velocity_slip",1,{"-0.01732 * 0.75","0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"-0.02 * 0.75","0 * 0.75"},1},{"Velocity_slip",1,{"-0.01732 * 0.75","-0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.75","-0.01732 * 0.75"},1},{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},{},{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},{"Velocity_slip",1,{"0.0099999998 * 0.6","-0.01732 * 0.6"},1},{"Velocity_slip",1,{"0.01732 * 0.6","-0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"0.02 * 0.6","0 * 0.6"},1},{"Velocity_slip",1,{"0.01732 * 0.6","0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"0.0099999998 * 0.6","0.01732 * 0.6"},1},{"Velocity_slip",1,{"0 * 0.6","0.02 * 0.6"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.6","0.01732 * 0.6"},1},{"Velocity_slip",1,{"-0.01732 * 0.6","0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"-0.02 * 0.6","0 * 0.6"},1},{"Velocity_slip",1,{"-0.01732 * 0.6","-0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.6","-0.01732 * 0.6"},1},{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},{},{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},{"Velocity_slip",1,{"0.0099999998 * 0.5","-0.01732 * 0.5"},1},{"Velocity_slip",1,{"0.01732 * 0.5","-0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"0.02 * 0.5","0 * 0.5"},1},{"Velocity_slip",1,{"0.01732 * 0.5","0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"0.0099999998 * 0.5","0.01732 * 0.5"},1},{"Velocity_slip",1,{"0 * 0.5","0.02 * 0.5"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.5","0.01732 * 0.5"},1},{"Velocity_slip",1,{"-0.01732 * 0.5","0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"-0.02 * 0.5","0 * 0.5"},1},{"Velocity_slip",1,{"-0.01732 * 0.5","-0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.5","-0.01732 * 0.5"},1},{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},{},{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},{"Velocity_slip",1,{"0.0099999998 * 0.4","-0.01732 * 0.4"},1},{"Velocity_slip",1,{"0.01732 * 0.4","-0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"0.02 * 0.4","0 * 0.4"},1},{"Velocity_slip",1,{"0.01732 * 0.4","0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"0.0099999998 * 0.4","0.01732 * 0.4"},1},{"Velocity_slip",1,{"0 * 0.4","0.02 * 0.4"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.4","0.01732 * 0.4"},1},{"Velocity_slip",1,{"-0.01732 * 0.4","0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"-0.02 * 0.4","0 * 0.4"},1},{"Velocity_slip",1,{"-0.01732 * 0.4","-0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.4","-0.01732 * 0.4"},1},{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},{},{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},{"Velocity_slip",1,{"0.0099999998 * 0.30","-0.01732 * 0.30"},1},{"Velocity_slip",1,{"0.01732 * 0.30","-0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"0.02 * 0.30","0 * 0.30"},1},{"Velocity_slip",1,{"0.01732 * 0.30","0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"0.0099999998 * 0.30","0.01732 * 0.30"},1},{"Velocity_slip",1,{"0 * 0.30","0.02 * 0.30"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.30","0.01732 * 0.30"},1},{"Velocity_slip",1,{"-0.01732 * 0.30","0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"-0.02 * 0.30","0 * 0.30"},1},{"Velocity_slip",1,{"-0.01732 * 0.30","-0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.30","-0.01732 * 0.30"},1},{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},{},{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},{"Velocity_slip",1,{"0.0099999998 * 0.20","-0.01732 * 0.20"},1},{"Velocity_slip",1,{"0.01732 * 0.20","-0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"0.02 * 0.20","0 * 0.20"},1},{"Velocity_slip",1,{"0.01732 * 0.20","0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"0.0099999998 * 0.20","0.01732 * 0.20"},1},{"Velocity_slip",1,{"0 * 0.20","0.02 * 0.20"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.20","0.01732 * 0.20"},1},{"Velocity_slip",1,{"-0.01732 * 0.20","0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"-0.02 * 0.20","0 * 0.20"},1},{"Velocity_slip",1,{"-0.01732 * 0.20","-0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.20","-0.01732 * 0.20"},1},{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},{},{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1},{"Velocity_slip",1,{"0.0099999998 * 0.1","-0.01732 * 0.1"},1},{"Velocity_slip",1,{"0.01732 * 0.1","-0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"0.02 * 0.1","0 * 0.1"},1},{"Velocity_slip",1,{"0.01732 * 0.1","0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"0.0099999998 * 0.1","0.01732 * 0.1"},1},{"Velocity_slip",1,{"0 * 0.1","0.02 * 0.1"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.1","0.01732 * 0.1"},1},{"Velocity_slip",1,{"-0.01732 * 0.1","0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"-0.02 * 0.1","0 * 0.1"},1},{"Velocity_slip",1,{"-0.01732 * 0.1","-0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.1","-0.01732 * 0.1"},1},{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1}};
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
							text = "LIGHTS";
							align = "right";
							scale = 1;
							pos[] = {{0.03,"0.53 + 0.055"},1};
							right[] = {{0.07,"0.53 + 0.055"},1};
							down[] = {{0.03,"0.53 + 0.095"},1};
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
							text = "A-COL";
							align = "right";
							scale = 1;
							pos[] = {{0.03,"0.53 + 0.105"},1};
							right[] = {{0.07,"0.53 + 0.105"},1};
							down[] = {{0.03,"0.53 + 0.145"},1};
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
							pos[] = {{0.03,"0.53 + 0.155"},1};
							right[] = {{0.07,"0.53 + 0.155"},1};
							down[] = {{0.03,"0.53 + 0.195"},1};
						};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						pos[] = {{0.03,0.475},1};
						right[] = {{0.08,0.475},1};
						down[] = {{0.03,0.525},1};
					};
					class TorqueNumber
					{
						condition = "simulRTD";
						class Torque_number
						{
							type = "text";
							align = "left";
							scale = 1;
							source = "rtdRotorTorque";
							sourceScale = 488;
							pos[] = {{0.065,0.175},1};
							right[] = {{0.115,0.175},1};
							down[] = {{0.065,0.225},1};
						};
						class Torquetext
						{
							type = "text";
							source = "static";
							text = "%";
							align = "right";
							scale = 1;
							pos[] = {{0.07,0.175},1};
							right[] = {{0.12,0.175},1};
							down[] = {{0.07,0.225},1};
						};
					};
					class AltNumber: SpeedNumber
					{
						align = "right";
						source = "altitudeAGL";
						sourceScale = 1;
						pos[] = {{0.83,0.475},1};
						right[] = {{0.88,0.475},1};
						down[] = {{0.83,0.525},1};
					};
					class ASLNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.835,0.18},1};
						right[] = {{0.875,0.18},1};
						down[] = {{0.835,0.22},1};
					};
					class VspeedScalePosta
					{
						type = "line";
						width = 5;
						points[] = {{{0.98,0.2},1},{{1,0.2},1},{},{{0.93,0.2},1},{{0.95,0.2},1},{},{{0.98,0.35},1},{{1,0.35},1},{},{{0.93,0.35},1},{{0.95,0.35},1},{},{{0.94,0.38},1},{{0.95,0.38},1},{},{{0.94,0.41},1},{{0.95,0.41},1},{},{{0.94,0.44},1},{{0.95,0.44},1},{},{{0.94,0.47},1},{{0.95,0.47},1},{},{{0.98,0.5},1},{{1,0.5},1},{},{{0.93,0.5},1},{{0.95,0.5},1},{},{{0.94,0.53},1},{{0.95,0.53},1},{},{{0.94,0.56},1},{{0.95,0.56},1},{},{{0.94,0.59},1},{{0.95,0.59},1},{},{{0.94,0.62},1},{{0.95,0.62},1},{},{{0.98,0.65},1},{{1,0.65},1},{},{{0.93,0.65},1},{{0.95,0.65},1},{},{{0.99,0.68},1},{{0.98,0.68},1},{},{{0.99,0.71},1},{{0.98,0.71},1},{},{{0.99,0.74},1},{{0.98,0.74},1},{},{{0.99,0.77},1},{{0.98,0.77},1},{},{{0.98,0.8},1},{{1,0.8},1},{},{{0.93,0.8},1},{{0.95,0.8},1},{}};
					};
					class RadarAltitudeBand
					{
						clipTL[] = {0,0.2};
						clipBR[] = {1,0.8};
						class radarbanda
						{
							type = "line";
							width = 17;
							points[] = {{"RadarAltitudeBone",{0,0},1},{"RadarAltitudeBone",{0,0.6},1}};
						};
					};
					class VspeedBand
					{
						type = "line";
						width = 3;
						points[] = {{"VspeedBone",{-0.01,0},1},{"VspeedBone",{-0.025,-0.015},1},{"VspeedBone",{-0.025,0.015},1},{"VspeedBone",{-0.01,0},1},{}};
					};
					class HeadingNumber: SpeedNumber
					{
						source = "heading";
						sourceScale = 1;
						align = "center";
						pos[] = {{0.5,0.045},1};
						right[] = {{0.56,0.045},1};
						down[] = {{0.5,"0.045 + 0.06"},1};
					};
					class Center_box
					{
						type = "line";
						width = 1.5;
						points[] = {{{0.45,"0.02 + 0.085 - 0.06"},1},{{"0.45 + 0.10","0.02 + 0.085 - 0.06"},1},{{"0.45 + 0.10","0.02 + 0.085"},1},{{0.45,"0.02 + 0.085"},1},{{0.45,"0.02 + 0.085 - 0.06"},1}};
					};
					class HeadingArrow
					{
						type = "line";
						width = 7;
						points[] = {{{"0.5","0.128 + 0.03"},1},{{0.5,0.128},1}};
					};
					class HeadingScale_LEFT
					{
						clipTL[] = {0,0};
						clipBR[] = {0.45,1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class HeadingScale_RIGHT
					{
						clipTL[] = {0.55,0};
						clipBR[] = {1,1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class HeadingScale_BOTTOM
					{
						clipTL[] = {0.45,"0.02 + 0.085"};
						clipBR[] = {"0.45 + 0.10",1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class Fuel_Text
					{
						type = "text";
						source = "static";
						text = "Fuel";
						align = "right";
						scale = 1;
						pos[] = {{0.85,0.86},1};
						right[] = {{0.89,0.86},1};
						down[] = {{0.85,0.9},1};
					};
					class Fuel_Number
					{
						type = "text";
						source = "fuel";
						sourceScale = 100;
						align = "right";
						scale = 1;
						pos[] = {{0.92,0.86},1};
						right[] = {{0.96,0.86},1};
						down[] = {{0.92,0.9},1};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04,0.04,0.1};
				helmetRight[] = {0.08,0,0};
				helmetDown[] = {0,-0.08,0};
			};
			class CUP_CH53_HUD_2
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				class Bones
				{
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.5};
						pos10[] = {0.75,0.75};
					};
					class ForwardVec1
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.25,0.25};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.253,0.253};
					};
				};
				class Draw
				{
					color[] = {0.18,1,0.18};
					alpha = 1;
					condition = "on";
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 7;
						points[] = {{"ForwardVec1",1,"Velocity",1,{0,-0.02},1},{"ForwardVec1",1,"Velocity",1,{0.01,-0.01732},1},{"ForwardVec1",1,"Velocity",1,{0.01732,-0.01},1},{"ForwardVec1",1,"Velocity",1,{0.02,0},1},{"ForwardVec1",1,"Velocity",1,{0.01732,0.01},1},{"ForwardVec1",1,"Velocity",1,{0.01,0.01732},1},{"ForwardVec1",1,"Velocity",1,{0,0.02},1},{"ForwardVec1",1,"Velocity",1,{-0.01,0.01732},1},{"ForwardVec1",1,"Velocity",1,{-0.01732,0.01},1},{"ForwardVec1",1,"Velocity",1,{-0.02,0},1},{"ForwardVec1",1,"Velocity",1,{-0.01732,-0.01},1},{"ForwardVec1",1,"Velocity",1,{-0.01,-0.01732},1},{"ForwardVec1",1,"Velocity",1,{0,-0.02},1},{},{"ForwardVec1",1,"Velocity",1,{0.04,0},1},{"ForwardVec1",1,"Velocity",1,{0.02,0},1},{},{"ForwardVec1",1,"Velocity",1,{-0.04,0},1},{"ForwardVec1",1,"Velocity",1,{-0.02,0},1},{},{"ForwardVec1",1,"Velocity",1,{0,-0.04},1},{"ForwardVec1",1,"Velocity",1,{0,-0.02},1}};
					};
					class AC_Centerline
					{
						type = "group";
						condition = "on";
						class AC_Cross
						{
							type = "line";
							width = 4;
							points[] = {{"ForwardVec",1,{" -0.006 + 0.5","0 + 0.5"},1},{"ForwardVec",1,{" 0.006 + 0.5","0 + 0.5"},1},{},{"ForwardVec",1,{" -0.0 + 0.5","0.006 + 0.5"},1},{"ForwardVec",1,{" 0.0 + 0.5","-0.006 + 0.5"},1}};
						};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.035,0.035,0.1};
				helmetRight[] = {0.07,0,0};
				helmetDown[] = {0,-0.07,0};
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				intensity = 50;
				size = 1;
				innerAngle = 5;
				outerAngle = 75;
				coneFadeCoef = 10;
				position = "LandLeft";
				direction = "LandLeftDir";
				hitpoint = "LandLeft";
				selection = "LandLeft";
				useFlare = 1;
				flareSize = 8;
				flareMaxDistance = 300;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 200;
					hardLimitEnd = 250;
				};
			};
			class Right: Left
			{
				position = "LandRight";
				direction = "LandRightDir";
				hitpoint = "LandRight";
				selection = "LandRight";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_1_pos";
				direction = "exhaust_1_dir";
				effect = "ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position = "exhaust_2_pos";
				direction = "exhaust_2_dir";
				effect = "ExhaustsEffectHeliBig";
			};
			class Exhaust3
			{
				position = "exhaust_3_pos";
				direction = "exhaust_3_dir";
				effect = "ExhaustsEffectHeliBig";
			};
		};
		Simulation = "Helicopterrtd";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "CH53\RTD_Heli_Transport_03.xml";
			defaultCollective = 0.605;
			maxTorque = 4032;
			maxMainRotorStress = 350000;
			maxTailRotorStress = 200000;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			hasAPU = 1;
			APUOn = 5;
			APUOff = 5;
			starterTime = 6;
			throttleOffToIdle = 15;
			throttleIdleToOff = 18;
			throttleIdleToFull = 12;
			throttleFullToIdle = 20;
			autoHoverCorrection[] = {5,4,0};
			retreatBladeStallWarningSpeed = 92.583;
			rtd_center = "rtd_center";
		};
		class Eventhandlers: Eventhandlers
		{
			GetIn = "if ((_this select 2) == player) then {MonitorVM = [_this select 0] execvm '\ch53\scripts\ch53_monitor.sqf';};";
			init = "MonitorVM = [_this select 0] execvm '\ch53\scripts\ch53_monitor.sqf';MonitorSFXVM = [_this select 0] execvm '\ch53\scripts\ch53_monitorSFX.sqf';";
		};
		class AnimationSources: AnimationSources
		{
			class Ramp
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
				sound = "CH53_Rampsound";
			};
			class Redlight1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Greenlight1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class RampOpen
			{
				displayName = "<t color='#FFD700'>Open Ramp";
				position = "ramp action";
				showWindow = 0;
				radius = 5;
				condition = "(this animationPhase ""ramp_bottom"" < 0.5) && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""ramp_bottom"",1];this animate [""ramp_top"",1];";
				onlyforplayer = 0;
				priority = -9;
			};
			class RampLevel
			{
				displayName = "<t color='#FFD700'>Level Ramp";
				position = "ramp action";
				showWindow = 0;
				radius = 5;
				condition = "(this animationPhase ""ramp_bottom"" < 0.5) && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""ramp_bottom"",0.56];this animate [""ramp_top"",1];";
				onlyforplayer = 0;
				priority = -9;
			};
			class RampClose
			{
				displayName = "<t color='#FFD700'>Close Ramp";
				position = "ramp action";
				showWindow = 0;
				radius = 5;
				condition = "(this animationPhase ""ramp_bottom"" > 0.5) && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""ramp_bottom"",0];this animate [""ramp_top"",0];";
				onlyforplayer = 0;
				priority = -9;
			};
			class Redlighton
			{
				displayName = "<t color='#FF0000'>Redlight On";
				position = "redlight";
				showWindow = 0;
				radius = 5;
				condition = "(this animationPhase ""Redlightstart"" < 0.5 && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""Redlightstart"",1];this animate [""Greenlightstart"",0];";
				onlyforplayer = 1;
				priority = -8;
			};
			class Redlightoff
			{
				displayName = "<t color='#FF0000'>Redlight Off";
				position = "redlight";
				showWindow = 0;
				radius = 5;
				condition = "(this animationPhase ""Redlightstart"" > 0.5 && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""Redlightstart"",0];";
				onlyforplayer = 1;
				priority = -8;
			};
			class Greenlighton
			{
				displayName = "<t color='#008000'>Greenlight On";
				position = "redlight";
				radius = 5;
				condition = "(this animationPhase ""Greenlightstart"" < 0.5 && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""Greenlightstart"",1];this animate [""Redlightstart"",0];";
				onlyforplayer = 1;
				priority = -7;
			};
			class Greenlightoff
			{
				displayName = "<t color='#008000'>Greenlight Off";
				position = "redlight";
				radius = 5;
				condition = "(this animationPhase ""Greenlightstart"" > 0.5 && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""Greenlightstart"",0];";
				onlyforplayer = 1;
				priority = -7;
			};
		};
		class ViewPilot: ViewPilot
		{
			initAngleX = 0;
			minAngleX = -50;
			maxAngleX = 50;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 120;
			initFov = 1.1;
			minFov = 0.133;
			maxFov = 1.1;
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerCompartments = "Compartment1";
				gunnerAction = "Merlin_Pilot_BAF";
				gunnerInAction = "Merlin_Pilot_BAF";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				GunnerDoor = "";
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				body = "ObsTurret";
				gun = "ObsGun";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				gunBeg = "flir_end";
				gunEnd = "flir_begin";
				memoryPointGun = "flir_end";
				memoryPointGunnerOptics = "commanderview";
				stabilizedInAxes = 3;
				minElev = -90;
				maxElev = 20;
				initElev = 0;
				minTurn = -105;
				maxTurn = 110;
				initTurn = 0;
				gunnerName = "$STR_A3_COPILOT";
				isCopilot = 1;
				turretInfoType = "RscOptics_UAV_gunner";
				soundServo[] = {"",0.01,1,30};
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
				inGunnerMayFire = 1;
				precisegetinout = 0;
				gunnerOpticsEffect[] = {};
				gunnerOpticsModel = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "pedalL";
				gunnerRightLegAnimName = "pedalR";
				CanEject = 1;
				primaryGunner = 1;
				proxyIndex = 1;
				commanding = -1;
				gunnerOpticsShowCursor = 1;
				showgunneroptics = 1;
				gunnerForceOptics = 0;
				gunnerOpticsColor[] = {0.227,0.769,0.24,1};
				gunnerForceOutOptics = 0;
				gunnerUsesPilotView = 0;
				hasGunner = 1;
				hideWeaponsGunner = 1;
				lockWhenDriverOut = 0;
				enableManualFire = 1;
				maxHorizontalRotSpeed = 3.2;
				maxVerticalRotSpeed = 3.2;
				outGunnerMayFire = 1;
				showHMD = 0;
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
						maxFov = 0.65;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						horizontallyStabilized = 1;
						verticallyStabilized = 1;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				startEngine = 0;
				gunnerHasFlares = 1;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex = 30;
				maxElev = 0;
				minElev = -25;
				maxTurn = 90;
				minTurn = 60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "CargoRamp_Open";
				playerPosition = 2;
				soundAttenuationTurret = "HeliAttenuationRamp";
				disableSoundAttenuation = 0;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L";
				maxTurn = -55;
				minTurn = -87;
				minElev = -30;
				proxyIndex = 29;
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction = "mortar";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargodir1";
				memoryPointsGetInGunnerDir = "pos cargo1";
				gunnerName = "WalkWay 1";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 31;
				maxElev = 10;
				minElev = -65;
				maxTurn = -60;
				minTurn = -120;
				isPersonTurret = 0;
				ejectDeadGunner = 0;
				getinradius = 0;
				soundAttenuationTurret = "HeliAttenuation";
			};
			class CargoTurret_04: CargoTurret
			{
				gunnerAction = "mortar";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargodir2";
				memoryPointsGetInGunnerDir = "pos cargo2";
				gunnerName = "WalkWay 2";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 32;
				maxElev = 10;
				minElev = -65;
				maxTurn = -60;
				minTurn = -120;
				isPersonTurret = 0;
				ejectDeadGunner = 0;
				getinradius = 0;
				soundAttenuationTurret = "HeliAttenuation";
			};
			class CargoTurret_05: CargoTurret
			{
				gunnerAction = "mortar";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargodir3";
				memoryPointsGetInGunnerDir = "pos cargo3";
				gunnerName = "WalkWay 3";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 33;
				maxElev = 10;
				minElev = -65;
				maxTurn = -60;
				minTurn = -120;
				isPersonTurret = 0;
				ejectDeadGunner = 0;
				getinradius = 0;
				soundAttenuationTurret = "HeliAttenuation";
			};
			class CargoTurret_06: CargoTurret
			{
				gunnerAction = "mortar";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargodir4";
				memoryPointsGetInGunnerDir = "pos cargo4";
				gunnerName = "WalkWay 4";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 34;
				maxElev = 10;
				minElev = -65;
				maxTurn = -60;
				minTurn = -120;
				isPersonTurret = 0;
				ejectDeadGunner = 0;
				getinradius = 0;
				soundAttenuationTurret = "HeliAttenuation";
			};
		};
		cargoCompartments[] = {"Compartment2"};
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
					maxFov = 0.65;
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
		slingLoadMaxCargoMass = 15000;
		class MarkerLights
		{
			class PositionRed
			{
				color[] = {0.8,0,0};
				ambient[] = {0.08,0,0};
				intensity = 80;
				name = "PositionLight_red_1_pos";
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
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
			class PositionGreen: PositionRed
			{
				color[] = {0,0.8,0};
				ambient[] = {0,0.08,0};
				name = "PositionLight_green_1_pos";
			};
			class PositionWhite: PositionRed
			{
				color[] = {1,1,1};
				ambient[] = {0.1,0.1,0.1};
				name = "PositionLight_white_1_pos";
				drawLightSize = 0.2;
			};
			class CollisionRed: PositionRed
			{
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				name = "CollisionLight_red_1_pos";
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
			class CollisionWhite: PositionRed
			{
				color[] = {1,1,1};
				ambient[] = {0.1,0.1,0.1};
				name = "CollisionLight_white_1_pos";
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class InteriorBlue
			{
				name = "light_interior_blue";
				color[] = {0.07,0.99,0.89};
				ambient[] = {0.007,0.099,0.089};
				intensity = 75;
				blinking = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 2.25;
					hardLimitEnd = 3;
				};
			};
		};
	};
};
class cfgMods
{
	author = "76561197982468872";
	timepacked = "1442439568";
};
//};
