#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Trixie_Backpacks
	{
		units[]=
		{
			"Trixie_Coyote_OCP"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F"
		};
		magazines[]={};
		ammo[]={};
	};
};
class cfgVehicles
{
	class B_Kitbag_Base;
	class Trixie_Coyote_OCP: B_Kitbag_Base
	{
		scope=2;
		displayName="Corpsman Assault pack";
		model="trixie_backpacks\us_coyote_ocp.p3d";
		picture="\trixie_backpacks\ui\coyote.paa";
		allowedSlots[]={901};
		maximumLoad=320;
		mass=60;
	};
};
