////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Thu Dec 10 12:40:31 2015 : Created on Thu Dec 10 12:40:31 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class MV22 : config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class MV22
	{
		units[] = {"MV22"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_AIR_F"};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Merlin_Cargo_BAF = "Merlin_Cargo_BAF";
		MV22_Pilot = "MV22_Pilot";
		MV22_CoPilot = "MV22_CoPilot";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class Merlin_Cargo_BAF: Crew
		{
			file = "\MV22\Data\Anim\Merlin_Cargo";
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
		class KIA_MV22_Pilot: DefaultDie
		{
			actions = "DeadActions";
			file = "\mv22\data\anim\KIA_MV22_Pilot";
			speed = 0.5;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class MV22_Pilot: Crew
		{
			file = "\mv22\data\anim\MV22_Pilot";
			interpolateTo[] = {"KIA_MV22_Pilot",1};
		};
		class MV22_CoPilot: Crew
		{
			file = "\mv22\data\anim\MV22_CoPilot";
			interpolateTo[] = {"KIA_MV22_Pilot",1};
		};
	};
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class Turrets;
	};
	class Plane_Base_F: Plane
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class ViewPilot;
		class AnimationSources;
		class NewTurret;
	};
	class MV22: Plane_Base_F
	{
		destrType = "DestructWreck";
		scope = 2;
		simulation = "airplaneX";
		side = 1;
		faction = "blu_f";
		displayName = "MEU MV-22 Osprey";
		class Eventhandlers: DefaultEventhandlers
		{
			init = "if (!isNil {meu_fnc_bitchinBetty}) then {_this spawn meu_fnc_bitchinBetty;};";
		};
		vehicleClass = "Air";
		model = "mv22\mv22.p3d";
		picture = "mv22\picture_MV22_CA.paa";
		icon = "mv22\icon_MV22_CA.paa";
		mapSize = 28;
		crew = "B_Helipilot_F";
		crewVulnerable = "true";
		getInRadius = 9;
		enableManualFire = 0;
		accuracy = 0.5;
		camouflage = 100;
		audible = 20;
		precision = 200;
		canBeShot = "true";
		threat[] = {0,0,0};
		dustEffect = "HeliDust";
		waterEffect = "HeliWater";
		driverRightHandAnimName = "pilot_stick";
		canFloat = 0;
		waterAngularDampingCoef = 10;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.5;
		maxFordingDepth = 0.55;
		driveOnComponent[] = {"wheel_1_1","wheel_2_2","wheel_2_1"};
		mainRotorSpeed = 1;
		backRotorSpeed = 1;
		mainBladeRadius = 7.5;
		bodyFrictionCoef = 0.9;
		fuelCapacity = 2000;
		fuelConsumptionRate = 0.138;
		extCameraPosition[] = {0,3,-23};
		gearRetracting = 1;
		gearUpTime = 4;
		gearDownTime = 4;
		LockDetectionSystem = 9;
		incomingMissileDetectionSystem = 18;
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		rudderInfluence = 0.4;
		irScanRangeMin = 500;
		irScanRangeMax = 5000;
		irScanToEyeFactor = 2;
		aileronSensitivity = 0.3;
		elevatorSensitivity = 0.3;
		landingSpeed = 130;
		acceleration = 328;
		flaps = "true";
		flapsFrictionCoef = 0.32;
		rudderSensitivity = 12.5;
		envelope[] = {0,0.15,1.1,3,5,5.83,6,5.85,5.5,4.8,3.6,1.8,0};
		cargoIsCoDriver[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
		hideWeaponsCargo = 1;
		driverCompartments = "Compartment1";
		cargoGetInAction[] = {"GetInHelicopterCargo"};
		cargoGetOutAction[] = {"GetOutHelicopterCargo"};
		cargoCompartments[] = {"Compartment2"};
		ejectSpeed[] = {0,-2,0};
		cabinOpening = "false";
		radarType = 4;
		driverCanSee = 31;
		gunnercansee = 31;
		cargocansee = "1 + 2 + 4 + 8 + 16";
		driverAction = "MV22_Pilot";
		driverInAction = "MV22_Pilot";
		memoryPointsGetInDriver = "pos codriver";
		memoryPointsGetInDriverDir = "pos codriver dir";
		GetInAction = "GetInHigh";
		GetOutAction = "GetOutHigh";
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		driverCanEject = 1;
		cargoCanEject = 1;
		gunnerUsesPilotView = "false";
		cargoAction[] = {"Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF","Merlin_Cargo_BAF"};
		maxSpeed = 556;
		transportSoldier = 24;
		transportAmmo = 0;
		transportMaxMagazines = 150;
		transportMaxWeapons = 30;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 26;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 3;
			};
		};
		vtol = 4;
		supplyRadius = 8;
		armor = 50;
		damageResistance = 0.00172;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine"};
		insideSoundCoef = 0.05;
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"MV22\sound\close",0.31622776,1,10};
		soundGetOut[] = {"MV22\sound\open",0.31622776,1,20};
		soundDammage[] = {"MV22\sound\alarm_loop1",1,1};
		soundEngineOnInt[] = {"MV22\sound\int_start",1,1};
		soundEngineOnExt[] = {"MV22\sound\ext_start",1,1,500};
		soundEngineOffInt[] = {"MV22\sound\int_stop",1,1};
		soundEngineOffExt[] = {"MV22\sound\ext_stop",1,1,500};
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_01\gear_up",0.7943282,1,150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_01\gear_down",0.7943282,1,150};
		soundFlapsUp[] = {"MV22\sound\ext-jetair-flaps",0.63095737,1,100};
		soundFlapsDown[] = {"MV22\sound\ext-jetair-flaps",0.63095737,1,100};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.8,1,2};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.8,1.5,2};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"MV22\sound\ext_engine_low",2.51189,1,1200};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] = {"MV22\sound\ext_engine_hi",2.51189,1.2,1400};
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[] = {"MV22\sound\ext_forsage",1.7782794,0.99,1700};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14,3.92,2,0.5};
			};
			class WindNoiseOut
			{
				sound[] = {"MV22\sound\ext-wind1",0.562341,1,100};
				frequency = "(0.1+(1.2*(speed factor[1, 100])))";
				volume = "camPos*(speed factor[1, 100])";
			};
			class EngineLowIn
			{
				sound[] = {"MV22\sound\int_engine_low",1,1};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[] = {"MV22\sound\int_engine_hi",1,1.2};
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[] = {"MV22\sound\int_forsage",1,1};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = {"MV22\sound\int-wind1",0.5011872,1};
				frequency = "(0.1+(1.2*(speed factor[1, 100])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};
		class ViewPilot: ViewPilot
		{
			initFov = 1;
			minFov = 0.3;
			maxFov = 1.2;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
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
					maxFov = 1.1;
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
		class cargoturret;
		class Turrets: Turrets
		{
			class CoPilotObs: NewTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				gunnerCanEject = 1;
				CanEject = 1;
				startEngine = 0;
				gunnerHasFlares = 1;
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGunnerOptics = "commanderview";
				memoryPointGun = "gun_end";
				selectionFireAnim = "";
				turretCanSee = "31";
				proxyIndex = 1;
				proxyType = "CPGunner";
				stabilizedInAxes = 3;
				laser = 1;
				gunnerName = "Co-Pilot";
				minElev = -80;
				maxElev = 25;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				precisegetinout = 1;
				turretInfoType = "RscOptics_UAV_gunner";
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
				gunnerAction = "MV22_CoPilot";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				gunnerRightHandAnimName = "stick_pilot";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				gunnerCompartments = "Compartment1";
				primaryGunner = 1;
				outGunnerMayFire = "true";
				inGunnerMayFire = "true";
				gunnerForceOptics = "false";
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
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						horizontallyStabilized = 1;
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 10;
						minAngleX = -75;
						maxAngleX = 85;
						initAngleY = 0;
						minAngleY = -170;
						maxAngleY = 170;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
			class CargoTurret_01: cargoturret
			{
				gunnerAction = "mortar";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo1";
				memoryPointsGetInGunnerDir = "pos cargodir1";
				gunnerName = "WalkWay 1";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 25;
				maxElev = 10;
				minElev = -65;
				maxTurn = -60;
				minTurn = -120;
				isPersonTurret = 0;
				ejectDeadGunner = 0;
				getinradius = 0;
			};
			class CargoTurret_02: cargoturret
			{
				gunnerAction = "mortar";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo2";
				memoryPointsGetInGunnerDir = "pos cargodir2";
				gunnerName = "WalkWay 2";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 26;
				maxElev = 10;
				minElev = -65;
				maxTurn = -60;
				minTurn = -120;
				isPersonTurret = 0;
				ejectDeadGunner = 0;
				getinradius = 0;
			};
			class CargoTurret_03: cargoturret
			{
				gunnerAction = "mortar";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo3";
				memoryPointsGetInGunnerDir = "pos cargodir3";
				gunnerName = "WalkWay 3";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 27;
				maxElev = 10;
				minElev = -65;
				maxTurn = -60;
				minTurn = -120;
				isPersonTurret = 0;
				ejectDeadGunner = 0;
				getinradius = 0;
			};
			class CargoTurret_04: cargoturret
			{
				gunnerAction = "mortar";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo4";
				memoryPointsGetInGunnerDir = "pos cargodir4";
				gunnerName = "WalkWay 4";
				memoryPointGunnerOptics = "Eye";
				gunnerCanEject = 1;
				proxyIndex = 28;
				maxElev = 10;
				minElev = -65;
				maxTurn = -60;
				minTurn = -120;
				isPersonTurret = 0;
				ejectDeadGunner = 0;
				getinradius = 0;
			};
		};
		selectionRotorStill = "engine_static";
		selectionRotorMove = "engine_blur";
		class Damage
		{
			tex[] = {};
			mat[] = {};
		};
		dammageHalf[] = {};
		dammageFull[] = {};
		class AnimationSources: AnimationSources
		{
			class Door_1_1
			{
				source = "user";
				animPeriod = 0;
			};
			class Ramp
			{
				source = "user";
				animPeriod = 6;
			};
			class pack_engine_1
			{
				source = "user";
				animPeriod = 0;
			};
			class engine_prop_1_1_turn: pack_engine_1{};
			class engine_prop_1_2_turn: pack_engine_1{};
			class engine_prop_1_3_turn: pack_engine_1{};
			class engine_prop_2_1_turn: pack_engine_1{};
			class engine_prop_2_2_turn: pack_engine_1{};
			class engine_prop_2_3_turn: pack_engine_1{};
			class engine_prop_1_1_close: pack_engine_1{};
			class engine_prop_1_3_close: pack_engine_1{};
			class engine_prop_2_1_close: pack_engine_1{};
			class engine_prop_2_2_close: pack_engine_1{};
			class pack_engine_2: pack_engine_1{};
			class turn_wing: pack_engine_1{};
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
			class Greentip1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class rampup
			{
				displayName = "<t color='#FFD700'>Open Ramp";
				position = "zamerny";
				radius = 5;
				condition = "(this animationPhase ""ramp_top"" == 0) && (player in [driver this,gunner this]) && (alive this)";
				statement = "[this,1] execvm ""\mv22\scripts\ramp.sqf""";
				onlyforplayer = 1;
				priority = -9;
			};
			class rampdown
			{
				displayName = "<t color='#FFD700'>Close Ramp";
				position = "zamerny";
				radius = 5;
				condition = "(this animationPhase ""ramp_bottom"" == 1) && (player in [driver this,gunner this]) && (alive this)";
				statement = "[this,0] execvm ""\mv22\scripts\ramp.sqf""";
				animPeriod = 0;
				onlyforplayer = 1;
				priority = -9;
			};
			class Redlighton
			{
				displayName = "<t color='#FF0000'>Redlight On";
				position = "redlight";
				radius = 5;
				condition = "this animationPhase ""Redlightstart"" < 0.5 && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""Redlightstart"",1];this animate [""Greenlightstart"",0];";
				onlyforplayer = 1;
				animPeriod = 0;
				priority = -8;
			};
			class Redlightoff
			{
				displayName = "<t color='#FF0000'>Redlight Off";
				position = "redlight";
				radius = 5;
				condition = "this animationPhase ""Redlightstart"" > 0.5 && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""Redlightstart"",0];";
				onlyforplayer = 1;
				priority = -8;
			};
			class Greenlighton
			{
				displayName = "<t color='#008000'>Greenlight On";
				position = "redlight";
				radius = 5;
				condition = "this animationPhase ""Greenlightstart"" < 0.5 && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""Greenlightstart"",1];this animate [""Redlightstart"",0];";
				animPeriod = 0;
				onlyforplayer = 1;
				priority = -7;
			};
			class Greenlightoff
			{
				displayName = "<t color='#008000'>Greenlight Off";
				position = "redlight";
				radius = 5;
				condition = "this animationPhase ""Greenlightstart"" > 0.5 && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""Greenlightstart"",0];";
				animPeriod = 0;
				onlyforplayer = 1;
				priority = -7;
			};
			class Formationon
			{
				displayName = "<t color='#00FF7F'>Formation Lights On";
				position = "redlight";
				radius = 5;
				condition = "this animationPhase ""Greentipstart"" < 0.5 && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""Greentipstart"",1];";
				animPeriod = 0;
				onlyforplayer = 1;
				priority = -7;
			};
			class Formationoff
			{
				displayName = "<t color='#00FF7F'>Formation Lights Off";
				position = "redlight";
				radius = 5;
				condition = "this animationPhase ""Greentipstart"" > 0.5 && (player in [driver this,gunner this]) && (alive this)";
				statement = "this animate [""Greentipstart"",0];";
				animPeriod = 0;
				onlyforplayer = 1;
				priority = -7;
			};
		};
		class Exhausts
		{
			class Exhaust02
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustEffectHeli";
			};
			class Exhaust01
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustEffectHeli";
			};
		};
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
				color[] = {0.07,0.99,0.89};
				ambient[] = {0.0085,0.0095,0.01};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 45;
				outerAngle = 90;
				coneFadeCoef = 5;
				intensity = 100000;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 4;
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
			class Middle
			{
				color[] = {0.07,0.99,0.89};
				ambient[] = {0.0085,0.0095,0.01};
				position = "gun_begin";
				direction = "gun_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 45;
				outerAngle = 90;
				coneFadeCoef = 5;
				intensity = 100000;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 4;
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
			class Right
			{
				color[] = {0.07,0.99,0.89};
				ambient[] = {0.0085,0.0095,0.01};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				innerAngle = 45;
				outerAngle = 90;
				coneFadeCoef = 5;
				intensity = 100000;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 4;
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
		class Library
		{
			libTextDesc = "$STR_LIB_MV22";
		};
		class MFD
		{
			borderLeft = 0.09;
			borderRight = 0.02;
			borderTop = 0.02;
			borderBottom = 0.1;
			class MFD1
			{
				topLeft = "HUD LH1";
				topRight = "HUD PH1";
				bottomLeft = "HUD LD1";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5,0.27};
					pos10[] = {"0.5+0.9","0.27+0.7"};
				};
				class Bones{};
				class Draw
				{
					alpha = 0.9;
					color[] = {0,1,0};
					clipTL[] = {0,0};
					clipBR[] = {1,1};
					condition = "on";
					class Altitude
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "altitudeASL";
						sourceScale = 1;
						pos[] = {{0.28,0.042},1};
						right[] = {{0.32,0.042},1};
						down[] = {{0.28,0.082},1};
					};
					class Altitude2
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "altitudeAGL";
						sourceScale = 1;
						pos[] = {{0.45,0.042},1};
						right[] = {{0.49,0.042},1};
						down[] = {{0.45,0.082},1};
					};
					class RPM
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "rpm";
						sourceScale = 100;
						pos[] = {{0.63,0.18},1};
						right[] = {{0.67,0.18},1};
						down[] = {{0.63,0.22},1};
					};
					class RPM2
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "rpm";
						sourceScale = 100;
						pos[] = {{0.802,0.18},1};
						right[] = {{0.842,0.18},1};
						down[] = {{0.802,0.22},1};
					};
					class Fuel
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "fuel";
						sourceScale = 100;
						pos[] = {{0.63,0.425},1};
						right[] = {{0.67,0.425},1};
						down[] = {{0.63,0.465},1};
					};
					class Fuel2
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "fuel";
						sourceScale = 100;
						pos[] = {{0.802,0.425},1};
						right[] = {{0.842,0.425},1};
						down[] = {{0.802,0.465},1};
					};
					class Speed
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "speed";
						sourceScale = 2.23694;
						pos[] = {{0.28,0.225},1};
						right[] = {{0.32,0.225},1};
						down[] = {{0.28,0.265},1};
					};
				};
			};
		};
	};
};
class cfgMods
{
	author = "76561198047618139";
	timepacked = "1449751230";
};
//};
