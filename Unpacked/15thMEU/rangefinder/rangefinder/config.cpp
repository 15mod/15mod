class CfgPatches
{
	class PREFIX  // meu
		{
			units[] = {};
			weapons[] = { "Rangefinder" };
			requiredVersion = 0.1;
			requiredAddons[] = { "A3_Weapons_f" };
			versionDesc = "15thMEU(SOC) Mod Pack";
			versionAct = "";
			author[] = { "15thMEU(SOC) Mod Team" };
			authorUrl = "http://www.15thmeu.net/";
		};
};

class CfgWeapons
{
	class Binocular;

	class Rangefinder: Binocular
	{
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_Rangefinder0";
		class Library
		{
			libTextDesc = "$STR_A3_cfgWeapons_Rangefinder_Library0";
		};
		descriptionShort = "$STR_A3_cfgWeapons_Rangefinder1";
		model = "\a3\Weapons_f\Binocular\rangefinder_proxy.p3d";
		modelOptics = "\A3\Weapons_F\Binocular\LRTV_optics.p3d";
		picture = "\A3\Weapons_F\Data\UI\gear_rangefinder_CA.paa";
		opticsZoomMin = 0.1;
		opticsZoomMax = 0.25;
		opticsZoomInit = 0.25;
		distanceZoomMin = 100;
		distanceZoomMax = 2300;
		weaponInfoType = "RscOptics_Rangefinder";
		visionMode[] = {"Normal","NVG"};
	};
};