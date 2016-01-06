////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon Oct 19 14:22:58 2015 : Created on Mon Oct 19 14:22:58 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class jdg_carrier : config.bin{
class BIS_AddonInfo
{
	author = "76561198033804112";
	timepacked = "1445102292";
};
class CfgPatches
{
	class JDG_carrier
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Structures_F"};
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
class CfgVehicles
{
	class HouseBase;
	class CarrierPart: HouseBase
	{
		reversed = 1;
		scope = 1;
		side = 1;
		simulation = "house";
		displayName = "";
		ladders[] = {};
		animated = 1;
		accuracy = 0.005;
		cost = 0;
		armor = 3000;
		type = 1;
		featureSize = 1000;
		hideUnitInfo = 1;
		nameSound = "ship";
		class MarkerLights{};
	};
	class Ship;
	class JDG_carrier_Spawner: Ship
	{
		scope = 2;
		vehicleClass = "Ship";
		displayName = "USS Nimitz";
		model = "\JDG_carrier\res\empty.p3d";
		faction = "BLU_F";
		side = 1;
		crew = "B_crew_F";
		icon = "\JDG_carrier\tex\icon.paa";
		mapsize = 334;
		class EventHandlers
		{
			init = "_run = compile preprocessFileLineNumbers ""\JDG_carrier\scr\init.sqf""; _this call _run;";
		};
		class Turrets{};
	};
	class JDG_carrier_4: CarrierPart
	{
		model = "\JDG_carrier\res\empty.p3d";
	};
	class JDG_carrier_island: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_island.p3d";
		hiddenSelections[] = {"Number"};
		hiddenSelectionsTextures[] = {""};
		class UserActions
		{
			class EngineOn
			{
				displayName = "<t color=""#3366FF"">Engine on</t>";
				position = "engine";
				radius = 5;
				statement = "[true] call TTT_fnc_engine";
				condition = "alive(this)";
				onlyforplayer = 1;
			};
			class EngineOff
			{
				displayName = "<t color=""#3366FF"">Engine off</t>";
				position = "engine";
				radius = 5;
				statement = "[false] call TTT_fnc_engine";
				condition = "alive(this)";
				onlyforplayer = 1;
			};
		};
	};
	class JDG_carrier_hangar_0: CarrierPart
	{
		model = "\JDG_carrier\res\hangar_0.p3d";
	};
	class JDG_carrier_hangar_1: CarrierPart
	{
		model = "\JDG_carrier\res\hangar_1.p3d";
		class AnimationSources
		{
			class ani_JBD
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class ani_Elev
			{
				source = "user";
				animPeriod = 1;
				initPhase = -15;
			};
			class ani_Gate
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Elevator5Down
			{
				displayName = "Elevator Down";
				position = "E5Top";
				radius = 5;
				condition = "this animationPhase ""ani_JBD"" == 1";
				statement = "[this, 3] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator5Up
			{
				displayName = "Elevator Up";
				position = "E5Bottom";
				radius = 5;
				condition = "this animationPhase ""ani_Gate"" == 0";
				statement = "[this, 2] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator5UpTop
			{
				displayName = "Call Weapons Elevator";
				position = "E5Top";
				radius = 5;
				condition = "this animationPhase ""ani_Gate"" == 0";
				statement = "[this, 2] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
		};
	};
	class JDG_carrier_hangar_2: CarrierPart
	{
		model = "\JDG_carrier\res\hangar_2.p3d";
	};
	class JDG_carrier_hangar_3: CarrierPart
	{
		model = "\JDG_carrier\res\hangar_3.p3d";
	};
	class JDG_carrier_hangar_4: CarrierPart
	{
		model = "\JDG_carrier\res\hangar_4.p3d";
	};
	class JDG_carrier_ele_1: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_ele_1.p3d";
		class AnimationSources
		{
			class ani_Elev
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_ElevBarT
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_ElevBarB
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Elevator1Down
			{
				displayName = "Elevator Down";
				position = "E1Top";
				radius = 7;
				condition = "this animationPhase ""ani_ElevBarT"" == 0";
				statement = "[this, 1] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator1DownBox
			{
				displayName = "Send Elevator";
				position = "elevatorBox";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarT"" == 0";
				statement = "[this, 1] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator1DownPanel
			{
				displayName = "Call Elevator";
				position = "elevatorPanel";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarT"" == 0";
				statement = "[this, 1] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator1Up
			{
				displayName = "Elevator Up";
				position = "E1Bottom";
				radius = 7;
				condition = "this animationPhase ""ani_ElevBarB"" == -1";
				statement = "[this, 0] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator1UpBox
			{
				displayName = "Call Elevator";
				position = "elevatorBox";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarB"" == -1";
				statement = "[this, 0] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator1UpPanel
			{
				displayName = "Send Elevator";
				position = "elevatorPanel";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarB"" == -1";
				statement = "[this, 0] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
		};
	};
	class JDG_carrier_ele_2: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_ele_2.p3d";
		class AnimationSources
		{
			class ani_Elev
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_ElevBarT
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_ElevBarB
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Elevator2Down
			{
				displayName = "Elevator Down";
				position = "E2Top";
				radius = 7;
				condition = "this animationPhase ""ani_ElevBarT"" == 0";
				statement = "[this, 1] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator2DownBox
			{
				displayName = "Send Elevator";
				position = "elevatorBox";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarT"" == 0";
				statement = "[this, 1] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator2DownPanel
			{
				displayName = "Call Elevator";
				position = "elevatorPanel";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarT"" == 0";
				statement = "[this, 1] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator2Up
			{
				displayName = "Elevator Up";
				position = "E2Bottom";
				radius = 7;
				condition = "this animationPhase ""ani_ElevBarB"" == -1";
				statement = "[this, 0] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator2UpBox
			{
				displayName = "Call Elevator";
				position = "elevatorBox";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarB"" == -1";
				statement = "[this, 0] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator2UpPanel
			{
				displayName = "Send Elevator";
				position = "elevatorPanel";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarB"" == -1";
				statement = "[this, 0] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
		};
	};
	class JDG_carrier_ele_4: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_ele_4.p3d";
		class AnimationSources
		{
			class ani_Elev
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_ElevBarT
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_ElevBarB
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Elevator4Down
			{
				displayName = "Elevator Down";
				position = "E4Top";
				radius = 7;
				condition = "this animationPhase ""ani_ElevBarT"" == 0";
				statement = "[this, 1] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator4DownBox
			{
				displayName = "Send Elevator";
				position = "elevatorBox";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarT"" == 0";
				statement = "[this, 1] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator4DownPanel
			{
				displayName = "Call Elevator";
				position = "elevatorPanel";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarT"" == 0";
				statement = "[this, 1] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator4Up
			{
				displayName = "Elevator Up";
				position = "E4Bottom";
				radius = 7;
				condition = "this animationPhase ""ani_ElevBarB"" == -1";
				statement = "[this, 0] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator4UpBox
			{
				displayName = "Call Elevator";
				position = "elevatorBox";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarB"" == -1";
				statement = "[this, 0] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator4UpPanel
			{
				displayName = "Send Elevator";
				position = "elevatorPanel";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarB"" == -1";
				statement = "[this, 0] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
		};
	};
	class JDG_carrier_ele_3: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_ele_3.p3d";
		class AnimationSources
		{
			class ani_Elev
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_ElevBarT
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_ElevBarB
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Elevator3Down
			{
				displayName = "Elevator Down";
				position = "E3Top";
				radius = 7;
				condition = "this animationPhase ""ani_ElevBarT"" == 0";
				statement = "[this, 1] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator3DownBox
			{
				displayName = "Send Elevator";
				position = "elevatorBox";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarT"" == 0";
				statement = "[this, 1] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator3DownPanel
			{
				displayName = "Call Elevator";
				position = "elevatorPanel";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarT"" == 0";
				statement = "[this, 1] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator3Up
			{
				displayName = "Elevator Up";
				position = "E3Bottom";
				radius = 7;
				condition = "this animationPhase ""ani_ElevBarB"" == -1";
				statement = "[this, 0] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator3UpBox
			{
				displayName = "Call Elevator";
				position = "elevatorBox";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarB"" == -1";
				statement = "[this, 0] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
			class Elevator3UpPanel
			{
				displayName = "Send Elevator";
				position = "elevatorPanel";
				radius = 4;
				condition = "this animationPhase ""ani_ElevBarB"" == -1";
				statement = "[this, 0] spawn TTT_fnc_elevator";
				onlyforplayer = 1;
			};
		};
	};
	class JDG_carrier_deck_0: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_0.p3d";
		hiddenSelections[] = {"Number"};
		hiddenSelectionsTextures[] = {""};
	};
	class JDG_carrier_deck_1: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_1.p3d";
	};
	class JDG_carrier_deck_2: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_2.p3d";
	};
	class JDG_carrier_deck_3: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_3.p3d";
	};
	class JDG_carrier_deck_4: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_4.p3d";
		class AnimationSources
		{
			class ani_JBD2A
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_JBD2B
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_JBD2C
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
		};
	};
	class JDG_carrier_deck_5: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_5.p3d";
		class AnimationSources
		{
			class ani_JBD1A
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_JBD1B
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_JBD1C
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
		};
	};
	class JDG_carrier_deck_6: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_6.p3d";
	};
	class JDG_carrier_deck_7: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_7.p3d";
		class AnimationSources
		{
			class ani_hose1_Wide
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class ani_hose1_long
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class ani_hose1_high
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class ani_hose1B_Wide
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class ani_hose1B_long
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class ani_hose2_Wide
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class ani_hose2_long
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class ani_hose2_high
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class ani_hose2B_Wide
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class ani_hose2B_long
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
		};
	};
	class JDG_carrier_deck_8: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_8.p3d";
		class AnimationSources
		{
			class ani_JBD3A
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_JBD3B
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_JBD3C
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
		};
	};
	class JDG_carrier_deck_9: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_9.p3d";
		class AnimationSources
		{
			class ani_trolley
			{
				source = "user";
				animPeriod = 0.555556;
				initPhase = 0;
			};
			class ani_trolleyRope
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
	class JDG_carrier_deck_10: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_10.p3d";
		class AnimationSources
		{
			class ani_JBD4A
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_JBD4B
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class ani_cable1_long
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class ani_cable1_wide
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class ani_cable1_high
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class ani_cable2_long
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class ani_cable2_wide
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class ani_cable2_high
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class ani_cable3_long
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class ani_cable3_wide
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class ani_cable3_high
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class ani_cable4_long
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class ani_cable4_wide
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class ani_cable4_high
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
		};
	};
	class JDG_carrier_deck_11: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_11.p3d";
	};
	class JDG_carrier_deck_12: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_12.p3d";
	};
	class JDG_carrier_deck_13: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_13.p3d";
	};
	class JDG_carrier_deck_14: CarrierPart
	{
		model = "\JDG_carrier\res\carrier_14.p3d";
	};
	class JDG_carrier_nimlights: CarrierPart
	{
		model = "\JDG_carrier\res\nimlights.p3d";
		class MarkerLights
		{
			class WhiteLight
			{
				color[] = {1,1,0.8};
				ambient[] = {0.005,0.005,0.005};
				intensity = 1000;
				name = "hangarLight";
				hitpoint = "";
				useFlare = 0;
				flareSize = 2;
				flareMaxDistance = 1500;
				activeLight = 1;
				blinking = 0;
				dayLight = 1;
				drawLight = 0;
			};
			class RedBlinking
			{
				color[] = {1,0.2,0.2,1};
				ambient[] = {0.2,0.02,0.02,1};
				intensity = 50;
				name = "redBlinking";
				hitpoint = "";
				useFlare = 0;
				flareSize = 2;
				flareMaxDistance = 1500;
				activeLight = 0;
				blinking = 1;
				dayLight = 1;
				drawLight = 1;
				class Attenuation
				{
					start = 0;
					constant = 0.1;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 1500;
					hardLimitEnd = 2000;
				};
			};
			class RedStill
			{
				color[] = {0.9,0,0};
				ambient[] = {0.3,0.03,0.03,1};
				intensity = 50;
				name = "redStill";
				hitpoint = "";
				useFlare = 0;
				flareSize = 2;
				flareMaxDistance = 1500;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				drawLight = 1;
				class Attenuation
				{
					start = 0;
					constant = 0.1;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 1500;
					hardLimitEnd = 2000;
				};
			};
			class GreenStill
			{
				color[] = {0.025,0.2,0.025,1};
				ambient[] = {0.03,0.3,0.03,1};
				intensity = 50;
				name = "greenStill";
				hitpoint = "";
				useFlare = 0;
				flareSize = 2;
				flareMaxDistance = 1500;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				drawLight = 1;
				class Attenuation
				{
					start = 0;
					constant = 0.1;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 1500;
					hardLimitEnd = 2000;
				};
			};
			class YellowStill
			{
				color[] = {0.05,0.05,0,1};
				ambient[] = {0.3,0.03,0.03,1};
				intensity = 50;
				name = "yellowStill";
				hitpoint = "";
				useFlare = 0;
				flareSize = 2;
				flareMaxDistance = 1500;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				drawLight = 1;
				class Attenuation
				{
					start = 0;
					constant = 0.1;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 1500;
					hardLimitEnd = 2000;
				};
			};
			class WhiteStill
			{
				color[] = {0.2,0.2,0.2,1};
				ambient[] = {0.03,0.03,0.03,1};
				intensity = 50;
				name = "whiteStill";
				hitpoint = "";
				useFlare = 0;
				flareSize = 2;
				flareMaxDistance = 1500;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				drawLight = 1;
				class Attenuation
				{
					start = 0;
					constant = 0.1;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 1500;
					hardLimitEnd = 2000;
				};
			};
			class WhiteBlinking
			{
				color[] = {1,1,1,1};
				ambient[] = {0.2,0.2,0.2,1};
				intensity = 50;
				name = "whiteBlinking";
				hitpoint = "";
				useFlare = 0;
				flareSize = 2;
				flareMaxDistance = 1500;
				activeLight = 0;
				blinking = 1;
				dayLight = 1;
				drawLight = 1;
				class Attenuation
				{
					start = 0;
					constant = 0.1;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 1500;
					hardLimitEnd = 2000;
				};
			};
		};
	};
	class All;
	class JDG_carrier_nimspots: All
	{
		scope = 1;
		coefInside = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		coefInsideHeur = 4.3;
		side = 7;
		simulation = "house";
		displayName = "";
		model = "\JDG_carrier\res\nimspots.p3d";
		ladders[] = {};
	};
	class Static;
	class JDG_ammoLoad: Static
	{
		animated = 0;
		scope = 1;
		model = "\JDG_carrier\props\ammoLoad.p3d";
		side = 4;
		hiddenSelections[] = {"all","loadSml","loadMed","loadLrg"};
		hiddenSelectionsTextures[] = {"","","",""};
	};
	class JDG_phoenix: Static
	{
		animated = 0;
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "Phoenix Dolley";
		model = "\JDG_carrier\props\cart_phoenix.p3d";
		side = 4;
	};
	class JDG_mk82: Static
	{
		animated = 0;
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "Mk.82 Rack";
		model = "\JDG_carrier\props\cart_mk82.p3d";
		side = 4;
	};
	class JDG_mk82covered: Static
	{
		animated = 0;
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "Mk.82 Rack (covered)";
		model = "\JDG_carrier\props\cart_mk82covered.p3d";
		side = 4;
	};
	class JDG_flightMarker: Static
	{
		animated = 0;
		scope = 0;
		model = "\JDG_carrier\props\flightMarker.p3d";
		vehicleClass = "Targets";
		side = 4;
		mapsize = 20;
		hiddenSelections[] = {"markerIn","markerOut"};
	};
	class JDG_flightMarkerGreen: JDG_flightMarker
	{
		scope = 2;
		displayName = "Flight Marker (Green)";
		hiddenSelectionsTextures[] = {"","\JDG_carrier\tex\simpleGreen.paa"};
	};
	class JDG_flightMarkerBlue: JDG_flightMarker
	{
		scope = 2;
		displayName = "Flight Marker (Blue)";
		hiddenSelectionsTextures[] = {"","\JDG_carrier\tex\simpleBlue.paa"};
	};
	class JDG_flightMarkerRed: JDG_flightMarker
	{
		scope = 2;
		displayName = "Flight Marker (Red)";
		hiddenSelectionsTextures[] = {"","\JDG_carrier\tex\simpleRed.paa"};
	};
	class JDG_flightMarkerYellow: JDG_flightMarker
	{
		scope = 2;
		displayName = "Flight Marker (Yellow)";
		hiddenSelectionsTextures[] = {"","\JDG_carrier\tex\simpleYellow.paa"};
	};
};
class CfgSounds
{
	class JBDup
	{
		name = "JBDup";
		sound[] = {"\JDG_carrier\sounds\JBDup.wss",1.5,1};
		titles[] = {0,""};
	};
	class JBDdown
	{
		name = "JBDdown";
		sound[] = {"\JDG_carrier\sounds\JBDdown.wss",1.5,1};
		titles[] = {0,""};
	};
	class catLaunch
	{
		name = "catLaunch";
		sound[] = {"\JDG_carrier\sounds\catLaunch.wss",1.5,1};
		titles[] = {0,""};
	};
	class trap
	{
		name = "trap";
		sound[] = {"\JDG_carrier\sounds\trap.wss",1.4,1};
		titles[] = {};
	};
	class trapBreak
	{
		name = "trapBreak";
		sound[] = {"\JDG_carrier\sounds\trapBreak.ogg",1.4,1};
		titles[] = {};
	};
	class elevator
	{
		name = "elevator";
		sound[] = {"\JDG_carrier\sounds\elevator.ogg",20,1};
		titles[] = {};
	};
	class engine
	{
		name = "engine";
		sound[] = {"\JDG_carrier\sounds\engine.ogg",20,1};
		titles[] = {};
	};
	class steam
	{
		name = "steam";
		sound[] = {"\JDG_carrier\sounds\steam.ogg",20,1};
		titles[] = {};
	};
	class catLaunch2
	{
		name = "catLaunch2";
		sound[] = {"\JDG_carrier\sounds\Catapult Launch.ogg",20,1};
		titles[] = {};
	};
};
class RscTitles
{
	class IFLOLS_1
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 0;
		fadeout = 0;
		name = "IFLOLS_1";
		controls[] = {"image1"};
		class image1
		{
			x = 0.25;
			y = 0.25;
			w = 0.65;
			h = 0.4;
			type = 0;
			idc = -1;
			style = 48;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "puristaLight";
			sizeEx = 0;
			lineSpacing = 0;
			text = "\JDG_carrier\rsc\IFLOLS_1.paa";
		};
	};
	class IFLOLS_2
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 0;
		fadeout = 0;
		name = "IFLOLS_2";
		controls[] = {"image2"};
		class image2
		{
			x = 0.25;
			y = 0.25;
			w = 0.65;
			h = 0.4;
			type = 0;
			idc = -1;
			style = 48;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "puristaLight";
			sizeEx = 0;
			lineSpacing = 0;
			text = "\JDG_carrier\rsc\IFLOLS_2.paa";
		};
	};
	class IFLOLS_3
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 0;
		fadeout = 0;
		name = "IFLOLS_3";
		controls[] = {"image3"};
		class image3
		{
			x = 0.25;
			y = 0.25;
			w = 0.65;
			h = 0.4;
			type = 0;
			idc = -1;
			style = 48;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "puristaLight";
			sizeEx = 0;
			lineSpacing = 0;
			text = "\JDG_carrier\rsc\IFLOLS_3.paa";
		};
	};
	class IFLOLS_4
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 0;
		fadeout = 0;
		name = "IFLOLS_4";
		controls[] = {"image4"};
		class image4
		{
			x = 0.25;
			y = 0.25;
			w = 0.65;
			h = 0.4;
			type = 0;
			idc = -1;
			style = 48;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "puristaLight";
			sizeEx = 0;
			lineSpacing = 0;
			text = "\JDG_carrier\rsc\IFLOLS_4.paa";
		};
	};
	class IFLOLS_5
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 0;
		fadeout = 0;
		name = "IFLOLS_5";
		controls[] = {"image5"};
		class image5
		{
			x = 0.25;
			y = 0.25;
			w = 0.65;
			h = 0.4;
			type = 0;
			idc = -1;
			style = 48;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "puristaLight";
			sizeEx = 0;
			lineSpacing = 0;
			text = "\JDG_carrier\rsc\IFLOLS_5.paa";
		};
	};
	class IFLOLS_6
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 0;
		fadeout = 0;
		name = "IFLOLS_6";
		controls[] = {"image6"};
		class image6
		{
			x = 0.25;
			y = 0.25;
			w = 0.65;
			h = 0.4;
			type = 0;
			idc = -1;
			style = 48;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "puristaLight";
			sizeEx = 0;
			lineSpacing = 0;
			text = "\JDG_carrier\rsc\IFLOLS_6.paa";
		};
	};
	class IFLOLS_6_wave
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 0;
		fadeout = 0;
		name = "IFLOLS_6_wave";
		controls[] = {"image6wave"};
		class image6wave
		{
			x = 0.25;
			y = 0.25;
			w = 0.65;
			h = 0.4;
			type = 0;
			idc = -1;
			style = 48;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "puristaLight";
			sizeEx = 0;
			lineSpacing = 0;
			text = "\JDG_carrier\rsc\IFLOLS_6_wave.paa";
		};
	};
	class IFLOLS_7
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 0;
		fadeout = 0;
		name = "IFLOLS_7";
		controls[] = {"image7"};
		class image7
		{
			x = 0.25;
			y = 0.25;
			w = 0.65;
			h = 0.4;
			type = 0;
			idc = -1;
			style = 48;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "puristaLight";
			sizeEx = 0;
			lineSpacing = 0;
			text = "\JDG_carrier\rsc\IFLOLS_7.paa";
		};
	};
	class IFLOLS_8
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 0;
		fadeout = 0;
		name = "IFLOLS_8";
		controls[] = {"image8"};
		class image8
		{
			x = 0.25;
			y = 0.25;
			w = 0.65;
			h = 0.4;
			type = 0;
			idc = -1;
			style = 48;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "puristaLight";
			sizeEx = 0;
			lineSpacing = 0;
			text = "\JDG_carrier\rsc\IFLOLS_8.paa";
		};
	};
	class IFLOLS_9
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 0;
		fadeout = 0;
		name = "IFLOLS_9";
		controls[] = {"image9"};
		class image9
		{
			x = 0.25;
			y = 0.25;
			w = 0.65;
			h = 0.4;
			type = 0;
			idc = -1;
			style = 48;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "puristaLight";
			sizeEx = 0;
			lineSpacing = 0;
			text = "\JDG_carrier\rsc\IFLOLS_9.paa";
		};
	};
	class IFLOLS_9_wave
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 0;
		fadeout = 0;
		name = "IFLOLS_9_wave";
		controls[] = {"image9wave"};
		class image9wave
		{
			x = 0.25;
			y = 0.25;
			w = 0.65;
			h = 0.4;
			type = 0;
			idc = -1;
			style = 48;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "puristaLight";
			sizeEx = 0;
			lineSpacing = 0;
			text = "\JDG_carrier\rsc\IFLOLS_9_wave.paa";
		};
	};
	class IFLOLS_cut
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 0;
		fadeout = 0;
		name = "IFLOLS_cut";
		controls[] = {"imagecut"};
		class imagecut
		{
			x = 0.25;
			y = 0.25;
			w = 0.65;
			h = 0.4;
			type = 0;
			idc = -1;
			style = 48;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "puristaLight";
			sizeEx = 0;
			lineSpacing = 0;
			text = "\JDG_carrier\rsc\IFLOLS_cut.paa";
		};
	};
};
class cfgMods
{
	author = "TeTeT";
	timepacked = "1445289778";
};
//};
