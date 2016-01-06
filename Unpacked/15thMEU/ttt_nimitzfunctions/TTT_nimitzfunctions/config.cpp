////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sat Oct 17 08:03:05 2015 : Created on Sat Oct 17 08:03:05 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class ttt_nimitzfunctions : config.bin{
class RscPicture
{
	type = 0;
	idc = -1;
	style = 48;
	x = 0.1;
	y = 0.1;
	w = 0.4;
	h = 0.2;
	sizeEx = "(((100/36 )/100)*0.9)";
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	text = "";
};
class Yanko_TOW
{
	idd = -1;
	movingenable = "false";
	class controls
	{
		class Yanko_TOW_BSM: RscPicture
		{
			idc = 1200;
			text = "TTT_NimitzFunctions\fn_calcWeight\numbers\Boatswains_Mate.jpg";
			x = "0.371094 * safezoneW + safezoneX";
			y = "0.169974 * safezoneH + safezoneY";
			w = "0.237187 * safezoneW";
			h = "0.649051 * safezoneH";
		};
		class Yanko_TOW_Digit1: RscPicture
		{
			idc = 1201;
			text = "";
			x = "0.393176 * safezoneW + safezoneX";
			y = "0.276678 * safezoneH + safezoneY";
			w = "0.0116016 * safezoneW";
			h = "0.0330026 * safezoneH";
		};
		class Yanko_TOW_Digit2: RscPicture
		{
			idc = 1202;
			text = "";
			x = "0.409343 * safezoneW + safezoneX";
			y = "0.271637 * safezoneH + safezoneY";
			w = "0.0116016 * safezoneW";
			h = "0.0330026 * safezoneH";
		};
		class Yanko_TOW_Digit3: RscPicture
		{
			idc = 1203;
			text = "";
			x = "0.423933 * safezoneW + safezoneX";
			y = "0.265756 * safezoneH + safezoneY";
			w = "0.0116016 * safezoneW";
			h = "0.0330026 * safezoneH";
		};
	};
};
class CfgPatches
{
	class TTT_NimitzElevator
	{
		units[] = {"TTT_ModuleNimitzElevator"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzGlobal
	{
		units[] = {"TTT_ModuleNimitzGlobal"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzBriefing
	{
		units[] = {"TTT_ModuleNimitzBriefing"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzHangar
	{
		units[] = {"TTT_ModuleNimitzHangar"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzFlightDeck
	{
		units[] = {"TTT_ModuleNimitzFlightDeck"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzFuel
	{
		units[] = {"TTT_ModuleNimitzFuel"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzIflols
	{
		units[] = {"TTT_ModuleNimitzIflols"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzRepair
	{
		units[] = {"TTT_ModuleNimitzRepair"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzBoat
	{
		units[] = {"TTT_ModuleNimitzBoat"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzRescue
	{
		units[] = {"TTT_ModuleNimitzRescue"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzOnShip
	{
		units[] = {"TTT_ModuleOnShip"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzCatapult
	{
		units[] = {"TTT_ModuleNimitzCatapult"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzCat4All
	{
		units[] = {"TTT_ModuleNimitzCat4All"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzAmbiance
	{
		units[] = {"TTT_ModuleNimitzAmbiance"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzArrest
	{
		units[] = {"TTT_ModuleNimitzArrest"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
	class TTT_NimitzDebug
	{
		units[] = {"TTT_ModuleNimitzDebug"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","JDG_carrier"};
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class TTT_Nimitz: NO_CATEGORY
	{
		displayName = "Nimitz";
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class TTT_ModuleNimitzElevator: Module_F
	{
		scope = 1;
		displayName = "Nimitz Elevator";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleElevator";
		functionPriority = 3;
		isGlobal = 0;
		isPersistent = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Elevator";
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzGlobal: Module_F
	{
		scope = 1;
		displayName = "Nimitz Global";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleGlobal";
		functionPriority = 3;
		isGlobal = 0;
		isPersistent = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Global";
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzBriefing: Module_F
	{
		scope = 2;
		displayName = "Nimitz Briefing";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleBriefing";
		functionPriority = 3;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Briefing";
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzHangar: Module_F
	{
		scope = 2;
		displayName = "Nimitz Hangar";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleHangar";
		functionPriority = 2;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Hangar";
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzFlightDeck: Module_F
	{
		scope = 2;
		displayName = "Nimitz Flightdeck";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleFlightdeck";
		functionPriority = 1;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Flightdeck";
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzFuel: Module_F
	{
		scope = 2;
		displayName = "Nimitz Fuel";
		icon = "\TTT_NimitzFunctions\img_fuel\fuel.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleFuel";
		functionPriority = 11;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Fuel";
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzIflols: Module_F
	{
		scope = 2;
		displayName = "Nimitz IFLOLS";
		icon = "\JDG_carrier\rsc\IFLOLS_1.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleIflols";
		functionPriority = 10;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz IFLOLS";
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzRepair: Module_F
	{
		scope = 2;
		displayName = "Nimitz Repair";
		icon = "\TTT_NimitzFunctions\img_repair\wrench.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleRepair";
		functionPriority = 5;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Repair";
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzBoat: Module_F
	{
		scope = 2;
		displayName = "Nimitz Boat";
		icon = "\TTT_NimitzFunctions\img_boat\boat.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleBoat";
		functionPriority = 6;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
			class Type
			{
				displayName = "Boat Type";
				description = "Class name of the boat to spawn";
				typeName = "STRING";
				defaultValue = "B_Boat_Transport_01_F";
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Boat";
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzRescue: Module_F
	{
		scope = 2;
		displayName = "Nimitz Rescue Team";
		icon = "\TTT_NimitzFunctions\img_rescue\rescue.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleRescue";
		functionPriority = 7;
		isGlobal = 0;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
			class Range
			{
				displayName = "Range";
				description = "Range to the ship that players get rescued";
				typeName = "NUMBER";
				defaultValue = 200;
			};
			class Brief
			{
				displayName = "Brief";
				description = "Brief or verbose rescue operation";
				defaultValue = "true";
				typeName = "BOOL";
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Rescue team";
			sync[] = {};
		};
	};
	class TTT_ModuleNimitzOnShip: Module_F
	{
		scope = 2;
		displayName = "Nimitz On Ship";
		icon = "\TTT_NimitzFunctions\img_onship\boat.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleOnShip";
		functionPriority = 1;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
			class Height
			{
				displayName = "Height";
				description = "Height above sea level to move the object to";
				defaultValue = 17.5;
				typeName = "NUMBER";
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "On Ship, places an object at the given height above sea level. See the Nimitz icon for different values.";
			sync[] = {};
		};
	};
	class TTT_ModuleNimitzCatapult: Module_F
	{
		scope = 2;
		displayName = "Nimitz Catapult";
		icon = "\TTT_NimitzFunctions\img_catapult\cat.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleCatapult";
		functionPriority = 4;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Crew
			{
				displayName = "Crew assistance";
				description = "Use AI shooter animation";
				typeName = "BOOL";
				defaultValue = "true";
			};
			class Weight
			{
				displayName = "Weight calculation";
				description = "Change takeoff speed based on plane weight. Only supported for F/A-18 right now.";
				typeName = "BOOL";
				defaultValue = "false";
			};
			class Units: Units{};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz catapult module";
			sync[] = {};
		};
	};
	class TTT_ModuleNimitzCat4all: Module_F
	{
		scope = 2;
		displayName = "Nimitz Cat 4 All";
		icon = "\TTT_NimitzFunctions\img_catapult\cat.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleCat4all";
		functionPriority = 4;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Crew
			{
				displayName = "Crew assistance";
				description = "Use AI shooter animation";
				typeName = "BOOL";
				defaultValue = "true";
			};
			class Weight
			{
				displayName = "Weight calculation";
				description = "Change takeoff speed based on plane weight. Only supported for F/A-18 right now.";
				typeName = "BOOL";
				defaultValue = "false";
			};
			class Units: Units{};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz catapult for all";
			sync[] = {};
		};
	};
	class TTT_ModuleNimitzDebug: Module_F
	{
		scope = 2;
		displayName = "Nimitz Debug";
		icon = "\TTT_NimitzFunctions\img_debug\binary.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleDebug";
		functionPriority = 9;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Debug module";
			sync[] = {"JDG_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzArrest: Module_F
	{
		scope = 2;
		displayName = "Nimitz Plane Arresting System";
		icon = "\TTT_NimitzFunctions\img_arrest\hook.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleArrest";
		functionPriority = 8;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz plane arrest module";
			sync[] = {};
		};
	};
	class TTT_ModuleNimitzAmbiance: Module_F
	{
		scope = 2;
		displayName = "Nimitz Ambiance";
		icon = "\TTT_NimitzFunctions\img_ambiance\soldier.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleAmbiance";
		functionPriority = 2;
		isGlobal = 0;
		isPersistent = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
			class FlightDeck
			{
				displayName = "Flightdeck";
				description = "Populate the flight deck";
				typeName = "BOOL";
				defaultValue = "true";
			};
			class Hangar
			{
				displayName = "Hangar";
				description = "Populate the hangar";
				defaultValue = "true";
				typeName = "BOOL";
			};
			class UGVTractor
			{
				displayName = "UGV Tractor";
				description = "Place UGV for tractor usage";
				defaultValue = "true";
				typeName = "BOOL";
			};
			class Crew
			{
				displayName = "Crew";
				description = "Place Crew";
				defaultValue = "true";
				typeName = "BOOL";
			};
			class Briefing
			{
				displayName = "Briefing";
				description = "Briefing room";
				defaultValue = "true";
				typeName = "BOOL";
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Ambiance module";
			sync[] = {"JDG_carrier_spawner"};
		};
	};
};
class CfgFunctions
{
	class TTT
	{
		class Elevator
		{
			file = "\TTT_NimitzFunctions\fn_elevator";
			class moduleElevator{};
			class syncElevator{};
			class elevator{};
		};
		class Simple
		{
			file = "\TTT_NimitzFunctions\fn_simple";
			class moduleFlightdeck{};
			class moduleHangar{};
			class moduleBriefing{};
			class syncSimple{};
		};
		class Repair
		{
			file = "\TTT_NimitzFunctions\fn_repair";
			class moduleRepair{};
			class syncRepair{};
			class repair{};
			class inspect{};
		};
		class Boat
		{
			file = "\TTT_NimitzFunctions\fn_boat";
			class moduleBoat{};
			class syncBoatAction{};
			class launchBoat{};
			class spawnBoat{};
			class recoverBoat{};
		};
		class Rescue
		{
			file = "\TTT_NimitzFunctions\fn_rescue";
			class moduleRescue{};
			class syncRescue{};
			class rescueVerbose{};
		};
		class OnShip
		{
			file = "\TTT_NimitzFunctions\fn_onship";
			class moduleOnShip{};
			class syncOnShip{};
		};
		class Catapult
		{
			file = "\TTT_NimitzFunctions\fn_catapult";
			class moduleCatapult{};
			class syncCatapult{};
			class addCatapultAction{};
			class catapultLaunch{};
			class launch{};
			class catapultJbd{};
			class steamStart{};
			class steamShot{};
			class steamCharge{};
		};
		class Cat4All
		{
			file = "\TTT_NimitzFunctions\fn_cat4all";
			class moduleCat4all{};
		};
		class Debug
		{
			file = "\TTT_NimitzFunctions\fn_debug";
			class moduleDebug{};
			class showInfo{};
		};
		class Ambiance
		{
			file = "\TTT_NimitzFunctions\fn_ambiance";
			class moduleAmbiance{};
			class syncAmbiance{};
			class flightdeck{};
			class hangar{};
			class tractor{};
			class placeVehicle{};
			class loadout{};
			class planeTypes{};
			class heloTypes{};
			class soldierTypes{};
			class enableCVuse{};
			class crew{};
			class briefing{};
			class engine{};
			class f4foldwing{};
		};
		class Arrest
		{
			file = "\TTT_NimitzFunctions\fn_arrest";
			class moduleArrest{};
			class syncTailhook{};
			class arrest{};
			class tailhookUp{};
			class wires{};
			class useTailhook{};
		};
		class Iflols
		{
			file = "\TTT_NimitzFunctions\fn_iflols";
			class moduleIflols{};
			class syncIflols{};
			class iflolsCalc{};
		};
		class Fuel
		{
			file = "\TTT_NimitzFunctions\fn_fuel";
			class moduleFuel{};
			class syncFuelAction{};
			class fuel{};
			class fuelBegin{};
			class fuelEnd{};
		};
		class Global
		{
			file = "\TTT_NimitzFunctions\fn_global";
			class moduleGlobal{};
			class global{};
		};
		class Common
		{
			file = "\TTT_NimitzFunctions\fn_common";
			class alive{};
			class setObjPos{};
			class setObjDir{};
			class colAct{};
		};
	};
	class FA18
	{
		class plane
		{
			file = "\TTT_NimitzFunctions\fn_fa18";
			class foldwing{};
			class loadout{};
		};
	};
	class Fock
	{
		class mp
		{
			file = "\TTT_NimitzFunctions\fn_common";
			class addActionMP{};
		};
	};
	class Yanko
	{
		class weightCalc
		{
			file = "\TTT_NimitzFunctions\fn_calcweight";
			class calcWeight{};
			class showWeightBoard{};
		};
	};
};
class cfgMods
{
	author = "TeTeT";
	timepacked = "1445094185";
};
//};
