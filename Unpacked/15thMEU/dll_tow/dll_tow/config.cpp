class CfgPatches
{
	class DLL_tow
	{
		units[] = { "DLL_ModuleTow" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F" };
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class TTT_Nimitz: NO_CATEGORY
	{
		displayName = "Nimitz";
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class DLL_ModuleTow: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Nimitz Towing"; // Name displayed in the menu
		icon = "\DLL_tow\img\tow.paa"; // Map icon. Delete this entry to use the default icon
		category = "TTT_Nimitz";

		// Name of function triggered once conditions are met
		function = "DLL_fnc_moduleTowing";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 1;
		// 1 for remote execution on all clients, 0 for server only execution
		isGlobal = 1;
		// 1 for persistent execution (i.e. will be called on every JIPped client). Use with caution, can lead to desync
		isPersistent = 1;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 1;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;

		// Module arguments
		class Arguments: ArgumentsBaseUnits
		{
			// Arguments shared by specific module type (have to be mentioned in order to be placed on top)
			class Units: Units {};
			class Debug
			{
				displayName = "Debug";
				description = "Show debug information";
				defaultValue = false;
				typeName = "BOOL";
			};
		};

		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Towing"; // Short description, will be formatted as structured text
			//sync[] = {"JDG_carrier_spawner"}; // Array of synced entities (can contain base classes)
			sync[] = {};

		};
	};
};
class CfgFunctions 
{
	class DLL
	{
		class Towing
		{
			file = "\DLL_tow\functions";
			class moduleTowing{};
			class syncTowing{};
			class config{};
			class initT{};
			class action_attach{};
			class action_detach{};
			class searchP{};
			class tow{};
		};
	};
};

