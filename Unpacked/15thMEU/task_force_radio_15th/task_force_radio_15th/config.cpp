class CfgPatches
{
	class task_force_radio_15th
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = { "CBA_Main", "task_force_radio","task_force_radio_items"};
		author[] = {"[TF]Nkey"};
		authorUrl = "https://github.com/michail-nikolaev/task-force-arma-3-radio";
		version = 0.9.7.1;
		versionStr = "0.9.7.3";
		versionAr[] = {0,9,7,3};
	};
};

#include "\task_force_radio_15th\CfgFunctions.h"
class task_force_radio_settings {
	#include "\userconfig\task_force_radio\radio_settings.hpp"
};
#include "\task_force_radio_15th\description.h"
#include "\task_force_radio_15th\RscTitles.hpp"