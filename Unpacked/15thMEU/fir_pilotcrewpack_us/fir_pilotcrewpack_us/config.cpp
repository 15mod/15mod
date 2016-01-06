#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class FIR_PilotCrewPack_US
	{
		units[] = {"FIR_USMC_Pilot"};
		weapons[] = {"FIR_Fighter_Pilot_USMC_Nomex","FIR_Fighter_Pilot_USMC_Nomex2","FIR_USHelmetType1_USMC_Black_Close","FIR_USHelmetType1_USMC_Black_Open","FIR_pilot_vest"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class cfgWeapons
{
	class itemcore;
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	class FIR_Fighter_Pilot_USMC_Nomex: Uniform_Base
	{
		scope = 2;
		displayName = "USMC Pilot Suit 1";
		author = "Firewill";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\FIR_PilotCrewPack_US\pic\nomex1_pic_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "FIR_Fighter_Pilot_USMC_Nomex_men";
			containerClass = "Supply30";
			mass = 40;
		};
	};
	class FIR_Fighter_Pilot_USMC_Nomex2: Uniform_Base
	{
		scope = 2;
		displayName = "USMC Pilot Suit 2";
		author = "Firewill";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\FIR_PilotCrewPack_US\pic\nomex2_pic_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "FIR_Fighter_Pilot_USMC_Nomex2_men";
			containerClass = "Supply30";
			mass = 40;
		};
	};
	class H_HelmetB: itemcore
	{
		class ItemInfo;
	};
	class FIR_USHelmetType1_USMC_Black_Close: H_HelmetB
	{
		displayName = "HGU-55/P / MBU-20/P(Black,Close,USMC)";
		picture = "\FIR_PilotCrewPack_US\pic\helmet1_pic_ca.paa";
		model = "\FIR_PilotCrewPack_US\FIR_USHelmetType1_Close.p3d";
		hiddenselections[] = {"Camo","camo1"};
		hiddenselectionstextures[] = {"\FIR_PilotCrewPack_US\data\helmet\flighthelmet_co.paa","\FIR_PilotCrewPack_US\data\helmet\black.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 40;
			allowedSlots[] = {901,605};
			uniformModel = "\FIR_PilotCrewPack_US\FIR_USHelmetType1_Close.p3d";
			modelSides[] = {2,3};
			armor = 5;
			passThrough = 0.6;
			hiddenselections[] = {"Camo","camo1"};
			hiddenselectionstextures[] = {"\FIR_PilotCrewPack_US\data\helmet\flighthelmet_co.paa","\FIR_PilotCrewPack_US\data\helmet\black.paa"};
		};
	};
	class FIR_USHelmetType1_USMC_Black_Open: H_HelmetB
	{
		displayName = "HGU-55/P / MBU-20/P(Black,Open,USMC)";
		picture = "\FIR_PilotCrewPack_US\pic\helmet1_pic_ca.paa";
		model = "\FIR_PilotCrewPack_US\FIR_USHelmetType1_Open.p3d";
		hiddenselections[] = {"Camo","camo1"};
		hiddenselectionstextures[] = {"\FIR_PilotCrewPack_US\data\helmet\flighthelmet_co.paa","\FIR_PilotCrewPack_US\data\helmet\black.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 40;
			allowedSlots[] = {901,605};
			uniformModel = "\FIR_PilotCrewPack_US\FIR_USHelmetType1_Open.p3d";
			modelSides[] = {2,3};
			armor = 5;
			passThrough = 0.6;
			hiddenselections[] = {"Camo","camo1"};
			hiddenselectionstextures[] = {"\FIR_PilotCrewPack_US\data\helmet\flighthelmet_co.paa","\FIR_PilotCrewPack_US\data\helmet\black.paa"};
		};
	};
	class VestItem;
	class Vest_Camo_Base: itemcore
	{
		class ItemInfo;
	};
	class FIR_pilot_vest: Vest_Camo_Base
	{
		scope = 2;
		author = "Firewill";
		displayName = "Pilot Survival Vest";
		picture = "\FIR_PilotCrewPack_US\pic\pilotvest_pic_ca.paa";
		model = "\FIR_PilotCrewPack_US\FIR_pilot_vest.p3d";
		class ItemInfo: VestItem
		{
			uniformModel = "\FIR_PilotCrewPack_US\FIR_pilot_vest.p3d";
			containerClass = "Supply120";
			mass = 40;
			armor = 40;
			passThrough = 0.4;
		};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class B_soldier_F;
	class FIR_Fighter_Pilot_USMC_Nomex_men: B_soldier_F
	{
		scope = 1;
		displayName = "USMC Pilot Suit 1";
		author = "Firewill";
		faction = "BLU_F";
		nakedUniform = "U_BasicBody";
		uniformClass = "FIR_Fighter_Pilot_USMC_Nomex";
		model = "\FIR_PilotCrewPack_US\FIR_USNomex_1.p3d";
		hiddenselections[] = {"Camo","leftarm_tex","insignia"};
		hiddenselectionstextures[] = {"\FIR_PilotCrewPack_US\data\coverall_co.paa","\FIR_PilotCrewPack_US\data\coverall_77cfw_leftarm_co.paa",""};
	};
	class FIR_Fighter_Pilot_USMC_Nomex2_men: B_soldier_F
	{
		scope = 1;
		displayName = "USMC Pilot Suit 2";
		author = "Firewill";
		faction = "BLU_F";
		nakedUniform = "U_BasicBody";
		uniformClass = "FIR_Fighter_Pilot_USMC_Nomex2";
		model = "\FIR_PilotCrewPack_US\FIR_USNomex_2.p3d";
		hiddenselections[] = {"Camo","leftarm_tex","insignia"};
		hiddenselectionstextures[] = {"\FIR_PilotCrewPack_US\data\coverall_co.paa","\FIR_PilotCrewPack_US\data\coverall_77cfw_leftarm_co.paa",""};
	};
	class B_pilot_F: B_Soldier_base_F
	{
		scope = 2;
	};
	class FIR_USMC_Pilot: B_pilot_F
	{
		scope = 2;
		author = "Firewill";
		camouflage = 2;
		cost = 160000;
		faction = "BLU_F";
		displayname = "USMC Fighter Pilot";
		backpack = "B_Parachute";
		linkeditems[] = {"FIR_USHelmetType1_USMC_Black_Close","fir_pilot_vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
		respawnlinkeditems[] = {"FIR_USHelmetType1_USMC_Black_Close","fir_pilot_vest","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnmagazines[] = {"SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
		respawnweapons[] = {"Throw","Put"};
		uniformclass = "FIR_Fighter_Pilot_USMC_Nomex";
		weapons[] = {"Throw","Put"};
	};
};

