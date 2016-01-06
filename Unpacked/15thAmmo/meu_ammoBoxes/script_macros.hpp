// script macros for ammobox mod

#define MEU_ADDON_ROOT			"\meu_ammoBoxes\"
#define MEU_LOADOUT_ROOT		"\meu_ammoBoxes\defaultLoadouts\"

#define QUOTE(A) 				#A

// transport cargo classes
#define MEU_CLASS_WEAP(WEAPON,COUNT) 	class _xx_##WEAPON {weapon = #WEAPON; count = COUNT;}
#define MEU_CLASS_ITEM(ITEM,COUNT) 		class _xx_##ITEM {name = #ITEM; count = COUNT;}
#define MEU_CLASS_MAG(MAGAZINE,COUNT) 	class _xx_##MAGAZINE {magazine = #MAGAZINE; count = COUNT;}
#define MEU_CLASS_BAG(BAG,COUNT) 		class _xx_##BAG {backpack = #BAG; count = COUNT;}

// basic box info

#ifdef 	NO_ZEUS_WINDOW	
	#define ZEUS	curatorInfoTypeEmpty = ""; 
#else
	#define ZEUS	curatorInfoTypeEmpty = "RscDisplayAttributesInventory";
#endif

#define MEU_CRATE_INFO(NAME) displayname = #NAME; \
		transportmaxmagazines = 9999; \
		transportmaxweapons = 9999; \
		transportMaxBackpacks = 9999; \
		transportMaxitems = 9999; \
		scope = 2;  \
		supplyRadius = 5; \
		vehicleClass = "meu_ammoBoxes"; \
		MEU_INIT_EVENT("_this spawn meu_fnc_crate;") \
		ZEUS
		
// A2 Crates
#define MEU_CRATE_SELECTIONS(PATH) hiddenSelectionsTextures[] = {MEU_TEXTURE_PATH(PATH),MEU_TEXTURE_PATH(usmc_side_final_co)};
#define MEU_TEXTURE_PATH(PIC) __EVAL("meu_ammoBoxes\crateModel\textures\" + #PIC + ".paa")
#define MEU_CRATE_TEXTURE(PIC) \
			model = "meu_ammoBoxes\crateModel\Proxy_UsBasicAmmoBox"; \
			mapSize = 2; \
			slingLoadCargoMemoryPoints[] = {"sling1","sling2","sling3","sling4"}; \
			hiddenSelections[] = {"main","sides"}; \
			MEU_CRATE_SELECTIONS(PIC)
		
// eventhander		
#define MEU_INIT_EVENT(STRING) 		class EventHandlers { init = STRING; };

// vehicle crate
#define MEU_VIC_INFO(NAME)		displayname = #NAME; \
		transportAmmo = 0; \
		scope = 2; \
		supplyRadius = 0; \
		vehicleClass = "meu_ammoBoxes"; \
		MEU_INIT_EVENT("_this spawn meu_fnc_crate;") \
		ZEUS
		
#define MEU_VIC_FUNCTION(FILE) 	#[player,call compile preprocessFileLineNumbers (MEU_LOADOUT_ROOT + FILE),false,true] call meu_fnc_vehicleLoadout
#define MEU_RED_NAME(TEXT) 		__EVAL("<t color='#FF0000'>" + TEXT + "</t>")
#define MEU_GREEN_NAME(TEXT) 	__EVAL("<t color='#99FF00'>" + TEXT + "</t>")

#define MEU_VIC_LOADOUT(CLASS,TEXT,FILE)	class CLASS##: clearCargo { \
				displayName = MEU_RED_NAME(TEXT); \
				statement = MEU_VIC_FUNCTION(FILE); \
				};
				
#define MEU_VIC_LOADOUT_CLEAR	class clearCargo { \
				userActionID = 50; \
				displayName = MEU_GREEN_NAME("Clear Cargo"); \
				displayNameDefault = ""; \
				position = "mph_axis"; \
				radius = 10; \
				animPeriod = 2; \
				onlyForplayer = 1; \
				condition = "(alive this) && (driver (vehicle player) == player) && (vehicle player in vehicles)"; \
				statement = "[player,[],true,true] call meu_fnc_vehicleLoadout;"; \
			};