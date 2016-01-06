#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class mas_weapons
	{
		author="massi & authors in credits";
		requiredaddons[]=
		{
			"A3_Weapons_F"
		};
		requiredversion=1.48;
		units[]={};
		weapons[]={};
	};
};
class CfgGlasses
{
	class G_Shades_Black;
	class G_mas_wpn_gog: G_Shades_Black
	{
		author="massi & authors in credits";
		displayname="Tactical Glasses Black/Clear";
		model="\mas_us_rifle\gog\mas_gog.p3d";
		picture="\mas_us_rifle\gog\ui\icon_g_shades_black_ca.paa";
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\mas_us_rifle\hats\data\tactical_ca.paa"
		};
	};
	class G_mas_wpn_gog_d: G_mas_wpn_gog
	{
		author="massi & authors in credits";
		displayname="Tactical Glasses Black/Dark";
		picture="\mas_us_rifle\gog\ui\icon_g_shades_black_ca.paa";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\mas_us_rifle\hats\data\tactical_co.paa"
		};
	};
	class G_mas_wpn_gog_m: G_mas_wpn_gog
	{
		author="massi & authors in credits";
		displayname="Tactical Glasses Multi/Clear";
		picture="\mas_us_rifle\gog\ui\icon_g_shades_multi_ca.paa";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\mas_us_rifle\hats\data\tactical_cm.paa"
		};
	};
	class G_mas_wpn_gog_md: G_mas_wpn_gog
	{
		author="massi & authors in credits";
		displayname="Tactical Glasses Multi/Dark";
		picture="\mas_us_rifle\gog\ui\icon_g_shades_multi_ca.paa";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\mas_us_rifle\hats\data\tactical_cp.paa"
		};
	};
	class G_mas_wpn_gog_g: G_mas_wpn_gog
	{
		author="massi & authors in credits";
		displayname="Tactical Glasses Green/Clear";
		picture="\mas_us_rifle\gog\ui\icon_g_shades_black_ca.paa";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\mas_us_rifle\hats\data\tactical_cq.paa"
		};
	};
	class G_mas_wpn_gog_gd: G_mas_wpn_gog
	{
		author="massi & authors in credits";
		displayname="Tactical Glasses Green/Dark";
		picture="\mas_us_rifle\gog\ui\icon_g_shades_black_ca.paa";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\mas_us_rifle\hats\data\tactical_cr.paa"
		};
	};
};