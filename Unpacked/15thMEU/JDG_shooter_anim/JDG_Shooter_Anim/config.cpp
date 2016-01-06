////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sat Feb 07 15:10:20 2015 : Created on Sat Feb 07 15:10:20 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class JDG_shooter_anim : config.bin{
class CfgPatches
{
	class JDG_Shooter_Anim
	{
		requiredAddons[] = {"A3_Characters_F"};
		units[] = {};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class Actions;
	class ManActions
	{
		nimitz_cat1 = "nimitz_cat1";
		nimitz_cat2 = "nimitz_cat2";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	class States
	{
		class AmovPercMstpSnonWnonDnon;
		class Crew;
		class nimitz_cat1: Crew
		{
			file = "JDG_Shooter_Anim\anims\cat1.rtm";
			speed = 3;
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = 0;
			connectFrom[] = {"AmovPercMstpSnonWnonDnon"};
			InterpolateTo[] = {};
		};
		class nimitz_cat2: Crew
		{
			file = "JDG_Shooter_Anim\anims\cat2.rtm";
			speed = 0.23;
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = 0;
			connectFrom[] = {"AmovPercMstpSnonWnonDnon"};
			InterpolateTo[] = {};
		};
	};
};
class cfgMods
{
	author = "TeTeT";
	timepacked = "1423343420";
};
//};
