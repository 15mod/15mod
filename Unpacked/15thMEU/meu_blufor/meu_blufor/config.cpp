////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Oct 11 20:40:08 2015 : Created on Sun Oct 11 20:40:08 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class meu_blufor : config.bin{
class CfgPatches
{
	class meu_blufor
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		versionDesc = "meu_blufor";
		version = "10.13.2015";
		author[] = {"15th Mod Team"};
	};
};
class CfgFunctions
{
	class meu
	{
		class checks
		{
			file = "meu_blufor\functions";
			class checkMods{};
			class amphibious{};
			class moduleCheckMods{};
		};
	};
};
class cfgFactionClasses
{
	class NO_CATEGORY;
	class meu_modules: NO_CATEGORY
	{
		displayName = "[15th] Modules";
	};
};
class DefaultEventHandlers;
class CfgVehicles
{
	class Tank_F;
	class AAVB: Tank_F
	{
		crew = "B_crew_F";
		class EventHandlers: DefaultEventHandlers
		{
			init = "(_this select 0) lockTurret [[2],true];";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {};
		};
		class UserActions
		{
			class amphibious
			{
				displayName = "<t color='#ff0000'>Engage Amphibious Drive";
				displayNameDefault = "<t color='#ff0000'>Engage Amphibious Drive";
				condition = "(player in [driver this]) && (alive this) && !(this getVariable ['meu_fnc_amphibious_engaged',false])";
				onlyforplayer = 1;
				priority = 10;
				position = "camo1";
				radius = 5;
				showWindow = 0;
				statement = "this call meu_fnc_amphibious;";
			};
			class leftHatchOpen
			{
				displayName = "<t color='#6A98FA'>Open Left Hatch";
				displayNameDefault = "<t color='#6A98FA'>Open Left Hatch";
				condition = "player in [driver this,commander this,gunner this] && this animationPhase ""leftHatch"" == 0";
				priority = 0.1;
			};
			class leftHatchClose
			{
				displayName = "<t color='#6A98FA'>Close Left Hatch";
				displayNameDefault = "<t color='#6A98FA'>Close Left Hatch";
				condition = "player in [driver this,commander this,gunner this] && this animationPhase ""leftHatch"" == 1";
				priority = 0.1;
			};
			class RightHatchOpen
			{
				displayName = "<t color='#6A98FA'>Open Right Hatch";
				displayNameDefault = "<t color='#6A98FA'>Open Right Hatch";
				condition = "player in [driver this,commander this,gunner this] && this animationPhase ""rightHatch"" == 0";
				priority = 0;
			};
			class RightHatchClose
			{
				displayName = "<t color='#6A98FA'>Close Right Hatch";
				displayNameDefault = "<t color='#6A98FA'>Close Right Hatch";
				condition = "player in [driver this,commander this,gunner this] && this animationPhase ""RightHatch"" == 1";
				priority = 0;
			};
			class rampOpen
			{
				displayName = "<t color='#45FE2F'>Open Ramp";
				displayNameDefault = "<t color='#45FE2F'>Open Ramp";
				condition = "player in [driver this,commander this,gunner this] && this animationPhase ""rearRamp"" == 0";
				priority = 4;
			};
			class rampClose
			{
				displayName = "<t color='#45FE2F'>Close Ramp";
				displayNameDefault = "<t color='#45FE2F'>Close Ramp";
				condition = "player in [driver this,commander this,gunner this] && this animationPhase ""rearRamp"" == 1";
				priority = 4;
			};
			class Backward
			{
				condition = "false";
			};
			class Left
			{
				condition = "false";
			};
			class Right
			{
				condition = "false";
			};
			class Stop
			{
				condition = "false";
			};
			class Forward
			{
				condition = "false";
			};
		};
	};
	class Burnes_aav_des: AAVB
	{
		displayName = "AAV Desert";
		model = "\AAVB\AAVdes";
	};
	class Module_F;
	class meu_module_CheckMods: Module_F
	{
		displayName = "[15th] CheckMods";
		scope = 2;
		icon = "\a3\Missions_F_Beta\data\img\iconMPTypeDefense_ca.paa";
		category = "meu_modules";
		function = "meu_fnc_moduleCheckMods";
		functionPriority = 0;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		curatorInfoType = "";
		class Arguments
		{
			class meu_fnc_moduleCheckMods_main
			{
				displayName = "Mode/Punishment";
				description = "How to handle mismatched players";
				typeName = "STRING";
				class values
				{
					class kick
					{
						name = "Kick From Game";
						value = "kick";
					};
					class warn
					{
						name = "Warning Only";
						value = "warn";
						default = 1;
					};
					class rpt
					{
						name = "RPT Log Only";
						value = "rpt";
					};
				};
			};
			class meu_fnc_moduleCheckMods_check
			{
				displayName = "Modify mods to check";
				description = "Array of CfgPatches classes";
				defaultValue = "[""CfgPatches"",""Classes""]";
			};
			class meu_fnc_moduleCheckMods_ckMode
			{
				DisplayName = "Handle Above List";
				description = "How to use the above list - Checking";
				typeName = "STRING";
				class values
				{
					class none
					{
						name = "Ignore";
						value = "none";
						default = 1;
					};
					class add
					{
						name = "Add to default list";
						value = "add";
					};
					class replace
					{
						name = "Replace default list";
						value = "replace";
					};
					class remove
					{
						name = "Remove from default list";
						value = "remove";
					};
				};
			};
			class meu_fnc_moduleCheckMods_black: meu_fnc_moduleCheckMods_check
			{
				displayName = "Modify mods to blacklist";
			};
			class meu_fnc_moduleCheckMods_blMode: meu_fnc_moduleCheckMods_ckMode
			{
				DisplayName = "Handle Above List";
				description = "How to use the above list - Blacklisting";
			};
		};
		class ModuleDescription
		{
			description = "Checks clients mod versions against the servers.<br /><br />Default mods to check: [""cba_main"", ""task_force_radio"", ""meu_blufor"", ""meu_opfor"", ""meu_ammoBoxes"", ""ace_main""].<br /><br />Default mods to blacklist: [""mcc_sandbox"", ""Blastcore_VEP"", ""TracersWAR"", ""MRF_Rangefinder"", ""JSRS2LITE_4Five45"", ""JSRS2_4Five45"", ""DragonFyre_4Five45"", ""DragonFyre_LITE_4Five45"", ""speedofsound_pure_4five""].";
		};
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class CHVD
				{
					displayName = "View Distance Settings";
					condition = "!isNil {CHVDAddon_fnc_openDialog}";
					exceptions[] = {"isNotInside","isNotSitting"};
					statement = "[] call CHVDAddon_fnc_openDialog";
					showDisabled = 0;
					priority = 2.5;
					icon = "";
					hotKey = "";
				};
			};
		};
	};
};
class cfgMods
{
	author = "76561198094995794";
	timepacked = "1444599608";
};
//};
