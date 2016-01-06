////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Fri Apr 10 14:02:00 2015 : Created on Fri Apr 10 14:02:00 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class MOCAP_Code : config.bin{
class CfgPatches
{
	class MOCAP_Code
	{
		units[] = {"MOCAP_disable_grabs","MOCAP_disable_fighting"};
		weapons[] = {};
		requiredVersion = 1.0;
		author = "Crazy Brains Studio";
		version = "[1.0.0] 23.09.2014";
		fileName = "MOCAP_Code.pbo";
		requiredAddons[] = {"cba_main"};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class MOCAP_Code
		{
			list[] = {"cba_main"};
		};
	};
};
class CfgMOCAP{};
class Extended_preInit_EventHandlers
{
	class MOCAP_Code
	{
		init = "call compile preprocessFileLineNumbers 'MOCAP_Code\Common\XEH_pre_CommonInit.sqf';";
		serverInit = "if (isServer) then {call compile preprocessFileLineNumbers 'MOCAP_Code\Server\XEH_pre_ServerInit.sqf';};";
		clientInit = "if (isClient) then {call compile preprocessFileLineNumbers 'MOCAP_Code\Client\XEH_pre_ClientInit.sqf';};";
	};
};
class Extended_PostInit_EventHandlers
{
	class MOCAP_Code
	{
		init = "nul = [] execVM 'MOCAP_Code\Core\initCore.sqf'; call compile preprocessFileLineNumbers 'MOCAP_Code\Common\XEH_post_CommonInit.sqf';";
		serverInit = "if (isServer) then {call compile preprocessFileLineNumbers 'MOCAP_Code\Server\XEH_post_ServerInit.sqf';};";
		clientInit = "if (isClient) then {call compile preprocessFileLineNumbers 'MOCAP_Code\Client\XEH_post_ClientInit.sqf';};";
	};
};
class Extended_Init_EventHandlers
{
	class CAManBase{};
	class LandVehicle{};
	class Air{};
	class Ship{};
};
class Extended_Killed_EventHandlers
{
	class CAManBase{};
	class LandVehicle{};
	class Air{};
	class Ship{};
};
class CfgFactionClasses
{
	class MOCAP
	{
		displayName = "MOCAP";
		priority = 0;
		side = 7;
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F;
	class MOCAP_disable_grabs: Module_F
	{
		scope = 2;
		author = "";
		displayName = "Disable MOCAP takedowns/grabs";
		category = "MOCAP";
		function = "";
		functionPriority = 1;
		class init
		{
			preInit = 1;
		};
		isGlobal = 2;
		isTriggerActivated = 0;
		class Eventhandlers
		{
			init = "MOCAP_disabled_grabs = true";
		};
	};
	class MOCAP_disable_fighting: Module_F
	{
		scope = 2;
		author = "";
		displayName = "Disable MOCAP close combat fighting";
		category = "MOCAP";
		function = "";
		functionPriority = 1;
		class init
		{
			postInit = 1;
		};
		isGlobal = 2;
		isTriggerActivated = 0;
		class Eventhandlers
		{
			init = "MOCAP_disabled_fighting = true";
		};
	};
};
//};
