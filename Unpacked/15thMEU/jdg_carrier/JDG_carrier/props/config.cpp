////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon Oct 19 14:22:58 2015 : Created on Mon Oct 19 14:22:58 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class jdg_carrier : props\config.bin{
class CfgPatches
{
	class JDG_carrierBarricade
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.05;
		requiredAddons[] = {"A3_Structures_F"};
	};
};
class CfgVehicles
{
	class Static;
	class JDG_barricade: Static
	{
		animated = 1;
		scope = 1;
		model = "\JDG_carrier\props\barricade.p3d";
		side = 4;
		class AnimationSources
		{
			class ani_barricadeUp
			{
				source = "user";
				animPeriod = 6;
				initPhase = 0;
			};
			class ani_strapL1_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL1_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL1_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL2_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL2_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL2_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL3_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL3_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL3_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL4_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL4_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL4_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL5_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL5_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL5_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL6_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL6_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL6_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR1_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR1_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR1_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR2_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR2_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR2_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR3_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR3_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR3_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR4_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR4_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR4_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR5_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR5_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR5_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR6_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR6_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR6_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL1B_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL1B_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL1B_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL2B_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL2B_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL2B_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL3B_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL3B_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL3B_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL4B_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL4B_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL4B_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL5B_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL5B_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL5B_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL6B_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL6B_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapL6B_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR1B_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR1B_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR1B_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR2B_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR2B_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR2B_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR3B_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR3B_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR3B_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR4B_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR4B_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR4B_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR5B_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR5B_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR5B_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR6B_Wide
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR6B_long
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
			class ani_strapR6B_high
			{
				source = "user";
				animPeriod = 1e-008;
				initPhase = 0;
			};
		};
	};
};
class cfgMods
{
	author = "TeTeT";
	timepacked = "1445289778";
};
//};
