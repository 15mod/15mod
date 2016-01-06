// checkMods module


	class Module_F;
	class meu_module_CheckMods: Module_F
	{
		displayName = "[15th] CheckMods";
		scope = 2;
		icon = "\a3\Missions_F_Beta\data\img\iconMPTypeDefense_ca.paa";
		category = "meu_modules";
		function = "meu_fnc_moduleCheckMods";
		functionPriority = 0;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		curatorInfoType = "";
		
		class Arguments
		{
			class meu_fnc_moduleCheckMods_main
			{
				displayName = "Mode/Punishment";
				description = "How to handle mismatched players";
				typeName = "STRING";
				class values
				{
					class kick {name = "Kick From Game"; value = "kick";};
					class warn {name = "Warning Only"; value = "warn"; default = 1;};
					class rpt {name = "RPT Log Only"; value = "rpt";};
				};
			};
			class meu_fnc_moduleCheckMods_check
			{
				displayName = "Modify mods to check";
				description = "Array of CfgPatches classes";
				defaultValue = ["CfgPatches","Classes"];
			};
			class meu_fnc_moduleCheckMods_ckMode
			{
				DisplayName = "Handle Above List";
				description = "How to use the above list - Checking";
				typeName = "STRING";
				class values
				{
					class none {name = "Ignore"; value = "none"; default = 1;};
					class add {name = "Add to default list"; value = "add";};
					class replace {name = "Replace default list"; value = "replace";};
					class remove {name = "Remove from default list"; value = "remove";};
				};
			};
			class meu_fnc_moduleCheckMods_black: meu_fnc_moduleCheckMods_check
			{
				displayName = "Modify mods to blacklist";
			};
			class meu_fnc_moduleCheckMods_blMode: meu_fnc_moduleCheckMods_ckMode 
			{
				DisplayName = "Handle Above List";
				description = "How to use the above list - Blacklisting";
			};
		};
		class ModuleDescription
		{ // doesnt need to be a string?
			description = Checks clients mod versions against the servers.<br /><br />Default mods to check: ["cba_main", "task_force_radio", "meu_blufor", "meu_opfor", "meu_ammoBoxes", "ace_main"].<br /><br />Default mods to blacklist: ["mcc_sandbox", "Blastcore_VEP", "TracersWAR", "MRF_Rangefinder", "JSRS2LITE_4Five45", "JSRS2_4Five45", "DragonFyre_4Five45", "DragonFyre_LITE_4Five45", "speedofsound_pure_4five"].;
		}; 
	};
	
	
	