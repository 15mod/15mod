////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Nov 08 15:49:52 2015 : Created on Sun Nov 08 15:49:52 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class ATLAS_Water : config.bin{
class CfgPatches
{
	class ATLAS_Water
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ATLAS_Weapons","ATLAS_LanguageCfg"};
	};
};
class CfgVehicleClasses
{
	class Static_ships
	{
		displayname = "$STR_ATLAS_cfg_Static_Ships";
		scope = 2;
		scopecurator = 0;
	};
};
class CfgVehicles
{
	class StaticShip;
	class ATLAS_LHD_1: StaticShip
	{
		vehicleclass = "Static_ships";
		scope = 1;
		displayname = "";
		scopecurator = 0;
		author = "ATLAS";
		model = "\ATLAS_Water\LHD\LHD_1.p3d";
		destrType = 0;
		featureSize = 100;
		keephorizontalplacement = 1;
		numberofdoors = 0;
		class MarkerLights
		{
			class RedStill
			{
				activelight = 0;
				name = "cerveny pozicni";
				color[] = {0.9,0,0};
				ambient[] = {0,0,0,1};
				blinking = 0;
				daylight = 0;
				drawlight = 1;
				drawlightsize = 1;
				intensity = 30;
				useflare = 0;
			};
			class WhiteStill: RedStill
			{
				name = "bily pozicni";
				color[] = {1,0.95,0.95};
			};
			class BlueStill: RedStill
			{
				name = "modry pozicni";
				color[] = {0.01,0.01,0.65};
			};
			class YellowStill: RedStill
			{
				name = "zluty pozicni";
				color[] = {0.85,0.85,0.05};
			};
		};
	};
	class ATLAS_LHD_Int_1: ATLAS_LHD_1
	{
		author = "ATLAS";
		model = "\ATLAS_Water\LHD\LHD_int_1.p3d";
	};
	class ATLAS_LHD_Int_2: ATLAS_LHD_1
	{
		author = "ATLAS";
		model = "\ATLAS_Water\LHD\LHD_int_2.p3d";
	};
	class ATLAS_LHD_Int_3: ATLAS_LHD_1
	{
		author = "ATLAS";
		model = "\ATLAS_Water\LHD\LHD_int_3.p3d";
	};
	class ATLAS_LHD_Light: ATLAS_LHD_1
	{
		author = "ATLAS";
		destrtype = "DestructDefault";
		model = "\ATLAS_Water\LHD\LHD_Light.p3d";
		armor = 50;
		armorlights = 0.01;
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"ATLAS_Water\LHD\data\hause2_004_int_co.paa"};
		class eventhandlers
		{
			init = "[_this select 0]execVM 'ATLAS_Water\LHD\scripts\randomlight.sqf'";
		};
		class AnimationSources
		{
			class light_hide
			{
				animPeriod = 1;
				initPhase = 0;
				source = "user";
			};
		};
		class Reflectors
		{
			class Light1
			{
				ambient[] = {10,10,12};
				color[] = {1000,1000,1200};
				conefadecoef = 6;
				direction = "Light1 dir";
				flaremaxdistance = 250;
				flaresize = 1;
				hitpoint = "Light1";
				innerangle = 165;
				intensity = 0.7;
				outerangle = 170;
				position = "Light1";
				selection = "Light1";
				size = 1;
				useflare = 1;
				class Attenuation
				{
					constant = 0;
					hardlimitend = 70;
					hardlimitstart = 50;
					linear = 2;
					quadratic = 0.5;
					start = 0;
				};
			};
		};
	};
	class ATLAS_LHD_Light_Red: ATLAS_LHD_Light
	{
		hiddenselectionstextures[] = {"ATLAS_Water\LHD\data\hause2_004_red_int_co.paa"};
		class Reflectors: Reflectors
		{
			class Light1: Light1
			{
				ambient[] = {9,0,0};
				color[] = {900,0,0};
				class Attenuation: Attenuation{};
			};
		};
	};
	class ATLAS_LHD_Light_Green: ATLAS_LHD_Light
	{
		hiddenselectionstextures[] = {"ATLAS_Water\LHD\data\hause2_004_green_int_co.paa"};
		class Reflectors: Reflectors
		{
			class Light1: Light1
			{
				ambient[] = {0,9,0};
				color[] = {0,900,0};
				class Attenuation: Attenuation{};
			};
		};
	};
	class ATLAS_LHD_Light2: ATLAS_LHD_Light
	{
		author = "ATLAS";
		model = "\ATLAS_Water\LHD\LHD_Light2.p3d";
		class AnimationSources{};
		class Eventhandlers{};
		class Reflectors: Reflectors
		{
			class Light1: Light1{};
			class Light2: Light1
			{
				position = "light2";
				direction = "light2 dir";
				selection = "light2";
				hitpoint = "Light2";
			};
			class Light3: Light1
			{
				position = "light3";
				direction = "light3 dir";
				selection = "light3";
				hitpoint = "Light3";
			};
			class Light4: Light1
			{
				position = "light4";
				direction = "light4 dir";
				selection = "light4";
				hitpoint = "Light4";
			};
			class Light5: Light1
			{
				position = "light5";
				direction = "light5 dir";
				selection = "light5";
				hitpoint = "Light5";
			};
		};
	};
	class ATLAS_LHD_2: ATLAS_LHD_1
	{
		model = "\ATLAS_Water\LHD\LHD_2.p3d";
	};
	class ATLAS_LHD_3: ATLAS_LHD_1
	{
		model = "\ATLAS_Water\LHD\LHD_3.p3d";
	};
	class ATLAS_LHD_4: ATLAS_LHD_1
	{
		model = "\ATLAS_Water\LHD\LHD_4.p3d";
		ladders[] = {{"start1","end1"}};
		numberofdoors = 2;
		scope = 1;
		vehicleclass = "Static_ships";
		class AnimationSources
		{
			class door_3
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
				sound = "MetalDoorsSound";
			};
			class door_4
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
				sound = "MetalDoorsSound";
			};
			class elev_int
			{
				animPeriod = 3;
				initPhase = 0;
				source = "user";
			};
			class elev_int_rail
			{
				animPeriod = 1;
				initPhase = -0.7;
				source = "user";
			};
			class elev_int_rail_top
			{
				animPeriod = 1;
				initPhase = -0.7;
				source = "user";
			};
			class elev_int_rail_bottom
			{
				animPeriod = 1;
				initPhase = 0;
				source = "user";
			};
			class hook_1
			{
				animPeriod = 2;
				initPhase = 0;
				source = "user";
			};
		};
		class UserActions
		{
			class Lower_hook_1_bottom
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\obsolete\ui_action_exit_ca.paa' size='2.5' />";
				displayName = "$STR_ATLAS_CFG_LOWERWINCH";
				position = "hook_1_action_bottom";
				radius = 5;
				onlyForPlayer = "true";
				condition = "(this animationPhase ""hook_1"" == 0) && (count attachedObjects this == 0) && (player == driver (vehicle player)) && ((Vehicle player) iskindof 'ship_F')";
				statement = "null = [this,'hook_1','up',-7,(vehicle player)]execVM 'ATLAS_Water\LHD\scripts\attach_detach.sqf'";
			};
			class Create_boat_hook_1
			{
				displayNameDefault = "<img image='\A3\boat_f\boat_armed_01\data\ui\boat_armed_01_base.paa' size='2.5' />";
				displayName = "$STR_ATLAS_CFG_REQUISITIONBOAT";
				position = "hook_1_pos";
				radius = 3.5;
				onlyForPlayer = "true";
				condition = "(this animationPhase ""hook_1"" == 0) && (count attachedObjects this == 0) && ((vehicle player) == player)";
				statement = "null = [this,'hook_1']execVM 'ATLAS_water\scripts\createboat.sqf'";
			};
			class OpenDoor3
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "axis_door_3";
				radius = 2;
				onlyForPlayer = "false";
				condition = "this animationPhase ""door_3"" < 0.5";
				statement = "this animate [""door_3"", 1]";
			};
			class CloseDoor3
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "axis_door_3";
				radius = 2;
				onlyForPlayer = "false";
				condition = "this animationPhase ""door_3"" >= 0.5 && ((vehicle player) == player)";
				statement = "this animate [""door_3"", 0]";
			};
			class OpenDoor4
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "axis_door_4";
				radius = 2;
				onlyForPlayer = "false";
				condition = "this animationPhase ""door_4"" < 0.5 && ((vehicle player) == player)";
				statement = "this animate [""door_4"", 1]";
			};
			class CloseDoor4
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "axis_door_4";
				radius = 2;
				onlyForPlayer = "false";
				condition = "this animationPhase ""door_4"" >= 0.5 && ((vehicle player) == player)";
				statement = "this animate [""door_4"", 0]";
			};
			class call_elev_int_top
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_turnout_ca.paa' size='2.5' />";
				displayName = "$STR_ATLAS_CFG_CALLELEV";
				position = "elev_int_action_top";
				radius = 4;
				onlyForPlayer = "false";
				condition = "this animationPhase ""elev_int_rail_bottom"" <= -0.5 && ((vehicle player) == player)";
				statement = "null = [this,'raise']execVM '\ATLAS_Water\LHD\scripts\elev_int.sqf';";
			};
			class raise_elev_int: call_elev_int_top
			{
				displayName = "$STR_ATLAS_CFG_RAISEELEV";
				position = "elev_int_action_2";
			};
			class call_elev_int_bottom
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_turnin_ca.paa' size='2.5' />";
				displayName = "$STR_ATLAS_CFG_CALLELEV";
				position = "elev_int_action_bottom";
				radius = 4;
				onlyForPlayer = "false";
				condition = "this animationPhase ""elev_int"" == 0 && ((vehicle player) == player)";
				statement = "null = [this,'lower']execVM '\ATLAS_Water\LHD\scripts\elev_int.sqf';";
			};
			class lower_elev_int: call_elev_int_bottom
			{
				displayName = "$STR_ATLAS_CFG_LOWERELEV";
				position = "elev_int_action_1";
			};
		};
	};
	class ATLAS_LHD_5: ATLAS_LHD_1
	{
		model = "\ATLAS_Water\LHD\LHD_5.p3d";
		numberofdoors = 1;
		class AnimationSources
		{
			class door_5
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
				sound = "MetalDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor5
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "axis_door_5";
				radius = 2;
				onlyForPlayer = "false";
				condition = "this animationPhase ""door_5"" < 0.5 && ((vehicle player) == player)";
				statement = "this animate [""door_5"", 1]";
			};
			class CloseDoor5
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "axis_door_5";
				radius = 2;
				onlyForPlayer = "false";
				condition = "this animationPhase ""door_5"" >= 0.5 && ((vehicle player) == player)";
				statement = "this animate [""door_5"", 0]";
			};
		};
	};
	class ATLAS_LHD_5a: ATLAS_LHD_5
	{
		model = "\ATLAS_Water\LHD\LHD_5a.p3d";
	};
	class ATLAS_LHD_6: ATLAS_LHD_1
	{
		model = "\ATLAS_Water\LHD\LHD_6.p3d";
	};
	class ATLAS_LHD_7: ATLAS_LHD_1
	{
		model = "\ATLAS_Water\LHD\LHD_7.p3d";
		ladders[] = {{"start1","end1"},{"start2","end2"}};
		class AnimationSources
		{
			class door_welldeck
			{
				animPeriod = 15;
				initPhase = 0;
				source = "user";
			};
			class door_welldeck_2
			{
				animPeriod = 15;
				initPhase = 0;
				source = "user";
			};
			class door_welldeck_3
			{
				animPeriod = 15;
				initPhase = 0;
				source = "user";
			};
		};
		class UserActions
		{
			class OpenDoor_welldeck
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_open_ca.paa' size='2.5' />";
				displayName = "$STR_ATLAS_CFG_OPENWELLDECK";
				position = "door_welldeck_action";
				radius = 5;
				onlyForPlayer = "false";
				condition = "this animationPhase ""door_welldeck"" < 0.5 && ((vehicle player) == player)";
				statement = "this animate [""door_welldeck"", 1];this animate [""door_welldeck_2"", 1];this animate [""door_welldeck_3"", 1];";
			};
			class CloseDoor_welldeck
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\close_ca.paa' size='2.5' />";
				displayName = "$STR_ATLAS_CFG_CLOSEWELLDECK";
				position = "door_welldeck_action";
				radius = 5;
				onlyForPlayer = "false";
				condition = "this animationPhase ""door_welldeck"" >= 0.5 && ((vehicle player) == player)";
				statement = "this animate [""door_welldeck"",0];this animate [""door_welldeck_2"",0];this animate [""door_welldeck_3"",0];";
			};
		};
	};
	class ATLAS_LHD_house_1: ATLAS_LHD_1
	{
		author = "ATLAS";
		model = "\ATLAS_Water\LHD\LHD_House_1.p3d";
		ladders[] = {{"start1","end1"},{"start2","end2"},{"start3","end3"}};
	};
	class ATLAS_LHD_house_2: ATLAS_LHD_1
	{
		author = "ATLAS";
		model = "\ATLAS_Water\LHD\LHD_House_2.p3d";
		ladders[] = {{"start1","end1"}};
		numberofdoors = 2;
		class AnimationSources
		{
			class door_1
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
				sound = "MetalDoorsSound";
			};
			class door_2_1
			{
				animPeriod = 1;
				initPhase = 0;
				source = "user";
				sound = "MetalDoorsSound";
			};
			class door_2_2
			{
				animPeriod = 1;
				initPhase = 0;
				source = "user";
				sound = "MetalDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "axis_door_1";
				radius = 2;
				onlyForPlayer = "false";
				condition = "this animationPhase ""door_1"" < 0.5 && ((vehicle player) == player)";
				statement = "this animate [""door_1"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "axis_door_1";
				radius = 2;
				onlyForPlayer = "false";
				condition = "this animationPhase ""door_1"" >= 0.5 && ((vehicle player) == player)";
				statement = "this animate [""door_1"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "axis_door_2_1";
				radius = 4;
				onlyForPlayer = "false";
				condition = "this animationPhase ""door_2_1"" < 0.5 && ((vehicle player) == player)";
				statement = "this animate [""door_2_1"", 1];this animate [""door_2_2"", 1];";
			};
			class CloseDoors2
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "axis_door_2_1";
				radius = 4;
				onlyForPlayer = "false";
				condition = "this animationPhase ""door_2_1"" >= 0.5 && ((vehicle player) == player)";
				statement = "this animate [""door_2_1"", 0];this animate [""door_2_2"", 0];";
			};
		};
	};
	class ATLAS_LHD_elev_1: ATLAS_LHD_1
	{
		model = "\ATLAS_Water\LHD\LHD_elev_1.p3d";
		class AnimationSources
		{
			class elev_ext_1
			{
				animPeriod = 3;
				initPhase = 0;
				source = "user";
			};
			class elev_ext_1_rail
			{
				animPeriod = 1;
				initPhase = 0;
				source = "user";
			};
		};
		class UserActions
		{
			class call_elev_ext_1_top
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_turnout_ca.paa' size='2.5' />";
				displayName = "$STR_ATLAS_CFG_CALLELEV";
				position = "elev_ext_1_action_top";
				radius = 4;
				onlyForPlayer = "false";
				condition = "this animationPhase ""elev_ext_1_rail"" <= -1 && ((vehicle player) == player)";
				statement = "null = [this,'raise']execVM '\ATLAS_Water\LHD\scripts\elev_ext_1.sqf';";
			};
			class raise_elev_ext_1: call_elev_ext_1_top
			{
				displayName = "$STR_ATLAS_CFG_RAISEELEV";
				position = "elev_ext_1_action_2";
			};
			class call_elev_ext_1_bottom
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_turnin_ca.paa' size='2.5' />";
				displayName = "$STR_ATLAS_CFG_CALLELEV";
				position = "elev_ext_1_action_bottom";
				radius = 4;
				onlyForPlayer = "false";
				condition = "this animationPhase ""elev_ext_1"" == 0 && ((vehicle player) == player)";
				statement = "null = [this,'lower']execVM '\ATLAS_Water\LHD\scripts\elev_ext_1.sqf';";
			};
			class lower_elev_ext_1: call_elev_ext_1_bottom
			{
				displayName = "$STR_ATLAS_CFG_LOWERELEV";
				position = "elev_ext_1_action_1";
			};
		};
	};
	class ATLAS_LHD_elev_2: ATLAS_LHD_1
	{
		model = "\ATLAS_Water\LHD\LHD_elev_2.p3d";
		class AnimationSources
		{
			class elev_ext_2
			{
				animPeriod = 3;
				initPhase = 0;
				source = "user";
			};
			class elev_ext_2_rail
			{
				animPeriod = 1;
				initPhase = 0;
				source = "user";
			};
		};
		class UserActions
		{
			class call_elev_ext_2_top
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_turnout_ca.paa' size='2.5' />";
				displayName = "$STR_ATLAS_CFG_CALLELEV";
				position = "elev_ext_2_action_top";
				radius = 4;
				onlyForPlayer = "false";
				condition = "this animationPhase ""elev_ext_2_rail"" <= -1 && ((vehicle player) == player)";
				statement = "null = [this,'raise']execVM '\ATLAS_Water\LHD\scripts\elev_ext_2.sqf';";
			};
			class raise_elev_ext_2: call_elev_ext_2_top
			{
				displayName = "$STR_ATLAS_CFG_RAISEELEV";
				position = "elev_ext_2_action_2";
			};
			class call_elev_ext_2_bottom
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_turnin_ca.paa' size='2.5' />";
				displayName = "$STR_ATLAS_CFG_CALLELEV";
				position = "elev_ext_2_action_bottom";
				radius = 4;
				onlyForPlayer = "false";
				condition = "this animationPhase ""elev_ext_2"" == 0 && ((vehicle player) == player)";
				statement = "null = [this,'lower']execVM '\ATLAS_Water\LHD\scripts\elev_ext_2.sqf';";
			};
			class lower_elev_ext_2: call_elev_ext_2_bottom
			{
				displayName = "$STR_ATLAS_CFG_LOWERELEV";
				position = "elev_ext_2_action_1";
			};
		};
	};
	class ATLAS_B_LHD_helper: ATLAS_LHD_1
	{
		vehicleclass = "Static_ships";
		Side = 1;
		faction = "BLU_F";
		scope = 2;
		scopecurator = 2;
		author = "ATLAS";
		model = "\ATLAS_Water\LHD\LHD_select_B.p3d";
		displayName = "$STR_ATLAS_CFG_LHD";
		hiddenselections[] = {"camo"};
		class eventhandlers
		{
			init = "[(_this select 0),['ATLAS_LHD_1','ATLAS_LHD_2','ATLAS_LHD_3','ATLAS_LHD_4','ATLAS_LHD_5','ATLAS_LHD_5a','ATLAS_LHD_6','ATLAS_LHD_7','ATLAS_LHD_house_1','ATLAS_LHD_house_2','ATLAS_LHD_elev_1','ATLAS_LHD_elev_2','ATLAS_LHD_Light2','ATLAS_LHD_Int_1','ATLAS_LHD_Int_2','ATLAS_LHD_Int_3']] execVM 'ATLAS_Water\scripts\large_object_attach.sqf';null = [(_this select 0)]execVM 'ATLAS_Water\LHD\scripts\spawnweapons.sqf';null =[(_this select 0)]execVM 'ATLAS_WAter\LHD\scripts\initlights.sqf'";
		};
	};
	class ATLAS_O_LHD_helper: ATLAS_B_LHD_helper
	{
		Side = 0;
		faction = "OPF_F";
		author = "ATLAS";
		model = "\ATLAS_Water\LHD\LHD_select_R.p3d";
	};
	class ATLAS_I_LHD_helper: ATLAS_B_LHD_helper
	{
		Side = 2;
		faction = "IND_F";
		author = "ATLAS";
		model = "\ATLAS_Water\LHD\LHD_select_G.p3d";
	};
};
class cfgMods
{
	author = "J0nes";
	timepacked = "1446994192";
};
//};
