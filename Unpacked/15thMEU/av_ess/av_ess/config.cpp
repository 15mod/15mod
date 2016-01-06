////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Wed Sep 18 18:45:00 2013 : Created on Wed Sep 18 18:45:00 2013
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class av_ess : config.bin{
class CfgPatches
{
	class AV_ESS
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgGlasses
{
	class None;
	class AV_ESS_blk: None
	{
		scope = 2;
		displayname = "ESS Goggles Black";
		model = "\AV_ESS\ess_blk.p3d";
		picture = "\AV_ESS\tempUI\tempgoggles.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",1,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",1,"G_NATO_SF",1,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class AV_ESS_blk_clr: AV_ESS_blk
	{
		displayname = "ESS Goggles Black Clear";
		model = "\AV_ESS\ess_blk_clr.p3d";
	};
	class AV_ESS_tan: AV_ESS_blk
	{
		displayname = "ESS Goggles Tan";
		model = "\AV_ESS\ess_tan.p3d";
	};
	class AV_ESS_tan_clr: AV_ESS_blk
	{
		displayname = "ESS Goggles Tan Clear";
		model = "\AV_ESS\ess_tan_clr.p3d";
	};
	class AV_ESS_grn: AV_ESS_blk
	{
		displayname = "ESS Goggles Green";
		model = "\AV_ESS\ess_grn.p3d";
	};
	class AV_ESS_grn_clr: AV_ESS_blk
	{
		displayname = "ESS Goggles Green Clear";
		model = "\AV_ESS\ess_grn_clr.p3d";
	};
};
//};
