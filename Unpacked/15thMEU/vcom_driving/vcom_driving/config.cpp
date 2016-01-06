////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun May 24 23:36:56 2015 : Created on Sun May 24 23:36:56 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class vcom_driving : config.bin{
class CfgPatches
{
	class VCOM_DRIVING
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		author[] = {"Dominic Smith"};
	};
};
class CfgFunctions
{
	class VCOM
	{
		class VCOM_Initialization
		{
			class Init
			{
				file = "\VCOM_Driving\VCOM_Driving\init.sqf";
				preInit = 1;
			};
		};
	};
};
//};
