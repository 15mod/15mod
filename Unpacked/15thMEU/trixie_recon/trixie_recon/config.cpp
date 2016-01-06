////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Fri Aug 07 00:57:29 2015 : Created on Fri Aug 07 00:57:29 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class trixie_recon : config.bin{
class CfgPatches
{
	class Trixie_recon
	{
		requiredaddons[] = {"a3_weapons_f","asdg_jointrails"};
		requiredversion = 1.24;
		units[] = {};
		weapons[] = {"Trixie_Cyclone","MEU_m40a5"};
		magazines[] = {"MEU_5x762_Mag"};
	};
};
class asdg_UnderSlot;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail{};
class SlotInfo;
class asdg_SlotInfo;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems
	{
		Trixie_Cyclone = 1;
	};
};
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	class compatibleItems
	{
		Trixie_Cyclone = 1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class ItemCore;
class ItemInfo;
class InventoryOpticsItem_Base_F;
class CfgWeapons
{
	class EBR_base_F;
	class srifle_EBR_F: EBR_base_F
	{
		class WeaponSlotsInfo;
	};
	class MEU_M40A5: srifle_EBR_F
	{
		scope = 2;
		initSpeed = -1;
		author = "Trixie";
		displayname = "M40A5";
		descriptionshort = "USMC M40A5 <br/>Caliber: 7.62x51mm";
		class Library
		{
			libtextdesc = "The M40 rifle is a bolt-action sniper rifle used by the United States Marine Corps. Each M40 is built from a Remington 700 bolt-action rifle, and is modified by USMC armorers at Marine Corps Base Quantico, using components from a number of suppliers.";
		};
		magazines[] = {"MEU_5x762_Mag"};
		picture = "Trixie_Recon\UI\m40a3ng.paa";
		model = "Trixie_Recon\trixie_m40a3_ng.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\trixie_recon\anim\M24.rtm"};
		inertia = 0.5;
		dexterity = 1.5;
		jsrs_soundeffect = "JSRS2_Distance_Effects_BigSniper";
		maxRecoilSway = 0.03;
		swayDecaySpeed = 1.25;
		deployedPivot = "bipod";
		hasBipod = "false";
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",0.70794576,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",0.70794576,1,20};
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 558.8;
		ACE_Overheating_Dispersion[] = {0,0.001,0.002,0.004};
		ACE_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		ACE_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		modes[] = {"Single"};
		discretedistance[] = {100};
		discretedistanceinitindex = 0;
		reloadaction = "GestureReloadEBR";
		recoil = "recoil_dmr_01";
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_dry",0.251189,1,20};
		changeFiremodeSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Safety",0.251189,1,5};
		reloadmagazinesound[] = {"trixie_recon\sound\M24Reload",0.501187,1,10};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedslots[] = {901};
			mass = 170;
			class MuzzleSlot: asdg_MuzzleSlot_762{};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPicture = "";
			};
			class cowslot: asdg_OpticRail1913{};
			class PointerSlot: asdg_FrontSideRail{};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_01",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_02",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_03",2.81838,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_01",1,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_02",1,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_03",1,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 1.5;
			dispersion = 0.0005;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			recoil = "recoil_single_ebr";
			recoilprone = "recoil_single_prone_ebr";
		};
	};
	class muzzle_snds_B;
	class Trixie_Cyclone: muzzle_snds_B
	{
		scope = 2;
		mass = 6;
		author = "Trixie";
		displayName = "AAC Cyclone";
		picture = "\trixie_recon\UI\cyclone.paa";
		model = "\trixie_recon\silencer_01.p3d";
		class Library
		{
			libtextdesc = "Extraordinary sound and recoil reduction are two of the instant benefits of the CYCLONE silencer. Durability is maximized by fully CNC automated fusion welding of every high-temperature aerospace alloy component used in its construction- making 100% suppressed fire possible. The back-pressure lowering design of the silencer aids in shooter comfort, reduces weapon fouling, and minimizes cyclic rate increase.";
		};
	};
};
class CfgAmmo
{
	class B_762x51_Ball;
	class M118LR_Ball_m40: B_762x51_Ball
	{
		typicalSpeed = 790;
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 11.34;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.243};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {750,780,790,794};
		ACE_barrelLengths[] = {406.4,508,609.6,660.4};
		deflecting = 20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire = 15;
		visibleFireTime = 15;
		audibleFire = 16;
		audibleFireTime = 10;
		dangerRadiusHit = -1;
		dangerRadiusBulletClose = 20;
		suppressionRadiusHit = 15;
		suppressionRadiusBulletClose = 15;
	};
};
class CfgMagazines
{
	class 7Rnd_408_Mag;
	class MEU_5x762_Mag: 7Rnd_408_Mag
	{
		scope = 2;
		count = 5;
		initSpeed = 833;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 5<br />Used in: M40A3";
		displayname = "M118LR";
		ammo = "M118LR_Ball_m40";
		picture = "\Trixie_recon\UI\5x762_mag.paa";
		selectionFireAnim = "zasleh";
		lastroundstracer = 0;
		tracersevery = 0;
		mass = 3;
	};
};
class cfgMods
{
	author = "76561197982468872";
	timepacked = "1438901849";
};
//};
