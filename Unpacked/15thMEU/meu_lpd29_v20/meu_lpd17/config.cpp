////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Jul 31 13:56:26 2011 : Created on Sun Jul 31 13:56:26 2011
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class meu_lpd29_v20 : config.bin{
class CfgPatches
{
	class MEU_LPD
	{
		units[] = {"LPD Aft Section","LPD Mid Section","LPD Bow Section"};
		weapons[] = {};
		requiredVersion = 1.07;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class MEU_LPD
	{
		displayName = "MEU LPD-29";
	};
};
class CfgVehicles
{
	class StaticShip;
	class LPD_SEC_MID: StaticShip
	{
		scope = 1;
		accuracy = 1;
		vehicleClass = "MEU_LPD";
		displayName = "LPD-29 Mid Section";
		destrType = "DestructNo";
		model = "\MEU_LPD17\LPD_SEC_MID.p3d";
		armor = 500;
		mapsize = 200;
		icon = "\MEU_LPD17\LPD_icon_mid.paa";
		class MarkerLights
		{
			class BlinkRedMid
			{
				name = "BReM1";
				color[] = {1,0,0,1};
				ambient[] = {1,0,0,0};
				brightness = 0.1;
				blinking = 1;
			};
		};
	};
	class LPD_SEC_BOW: LPD_SEC_MID
	{
		scope = 1;
		displayName = "LPD-29 Bow Section";
		model = "\MEU_LPD17\LPD_SEC_BOW.p3d";
		icon = "\MEU_LPD17\LPD_icon_bow.paa";
		class MarkerLights
		{
			class BlinkRedBow
			{
				name = "BReB1";
				color[] = {1,0,0,1};
				ambient[] = {1,0,0,0};
				brightness = 0.1;
				blinking = 1;
			};
		};
	};
	class LPD_SEC_AFT: LPD_SEC_MID
	{
		scope = 2;
		displayName = "LPD-29";
		model = "\MEU_LPD17\LPD_SEC_AFT.p3d";
		icon = "\MEU_LPD17\LPD_icon3.paa";
		class MarkerLights
		{
			class SolidGreenAft1
			{
				name = "SGrA1";
				color[] = {0,1,0.3,1};
				ambient[] = {0,1,0.3,0};
				brightness = 0.01;
				blinking = 0;
			};
			class SolidGreenAft2: SolidGreenAft1
			{
				name = "SGrA2";
			};
			class SolidGreenAft3: SolidGreenAft1
			{
				name = "SGrA3";
			};
			class SolidGreenAft4: SolidGreenAft1
			{
				name = "SGrA4";
			};
			class SolidGreenAft5: SolidGreenAft1
			{
				name = "SGrA5";
			};
			class SolidGreenAft6: SolidGreenAft1
			{
				name = "SGrA6";
			};
			class SolidGreenAft7: SolidGreenAft1
			{
				name = "SGrA7";
			};
			class SolidGreenAft8: SolidGreenAft1
			{
				name = "SGrA8";
			};
			class SolidGreenAft9: SolidGreenAft1
			{
				name = "SGrA9";
			};
			class SolidGreenAft10: SolidGreenAft1
			{
				name = "SGrA10";
			};
			class SolidGreenAft11: SolidGreenAft1
			{
				name = "SGrA11";
			};
			class SolidGreenAft12: SolidGreenAft1
			{
				name = "SGrA12";
			};
		};
		class EventHandlers
		{
			init = "_scr = _this execVM ""\meu_lpd17\scr\init.sqf"";";
		};
	};
};
//};
