////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon Apr 13 03:18:48 2015 : Created on Mon Apr 13 03:18:48 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class 15thIntel : config.bin{
class CfgPatches
{
	class 15thIntel
	{
		requiredAddons[] = {"A3_Weapons_F","A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {"15thDocItem","15thDocItem1","15thDocItem2"};
		weapons[] = {"15thDoc","15thTopSecret","15thDocphoto"};
	};
};
class cfgVehicles
{
	class Item_Base_F;
	class 15thDocItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Level Documents";
		vehicleClass = "Items";
		class TransportItems
		{
			class 15thDoc
			{
				name = "15thDoc";
				count = 1;
			};
		};
	};
	class 15thDocItem1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Platoon Level Documents";
		vehicleClass = "Items";
		class TransportItems
		{
			class 15thTopSecret
			{
				name = "15thTopSecret";
				count = 1;
			};
		};
	};
	class 15thDocItem2: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Company Level Documents";
		vehicleClass = "Items";
		class TransportItems
		{
			class 15thDocphoto
			{
				name = "15thDocphoto";
				count = 1;
			};
		};
	};
};
class cfgweapons
{
	class Itemcore;
	class InventoryItem_Base_F;
	class 15thDoc: Itemcore
	{
		scope = 2;
		picture = "\15thIntel\folder.paa";
		displayName = "Squad Level Documents";
		descriptionshort = "Squad Level Documents";
		descriptionUse = "Documents";
		simulation = "ItemMap";
		model = "\A3\Structures_F\Items\Documents\File1_F.p3d";
		class ItemInfo
		{
			mass = 1;
		};
	};
	class 15thTopSecret: 15thDoc
	{
		scope = 2;
		displayName = "Platoon Level 2";
		descriptionshort = "Platoon Level Documents";
		model = "\A3\Structures_F\Items\Documents\File2_F.p3d";
	};
	class 15thDocphoto: 15thDoc
	{
		scope = 2;
		displayName = "Company Level 3";
		descriptionshort = "Company Level Documents";
		model = "\A3\Structures_F\Items\Documents\FilePhotos_F.p3d";
	};
};
//};
