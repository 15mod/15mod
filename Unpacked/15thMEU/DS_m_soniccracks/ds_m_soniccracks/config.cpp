////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon Sep 07 15:27:25 2015 : Created on Mon Sep 07 15:27:25 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class DS_m_soniccracks : config.bin{
class CfgPatches
{
	class DS_sonicCracks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		author[] = {"LAxemann"};
	};
};
class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase: BulletCore
	{
		class SuperSonicCrack
		{
			superSonicCrack[] = {"\DS_m_sonicCracks\sounds\near",3.4622777,1,500};
			class A
			{
				range[] = {0,10};
				sound[] = {"\DS_m_sonicCracks\sounds\near",3.4622777,1,500};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
			};
			class B
			{
				range[] = {10,30};
				sound[] = {"\DS_m_sonicCracks\sounds\middle",3.4622777,1,500};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
			};
			class C
			{
				range[] = {30,500};
				sound[] = {"\DS_m_sonicCracks\sounds\far",3.4622777,1,500};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
			};
		};
	};
};
//};
