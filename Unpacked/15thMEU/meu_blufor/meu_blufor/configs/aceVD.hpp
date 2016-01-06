// add veiw distance to ace interaction

class Man;
class CAManBase: Man
{
	class ACE_SelfActions
	{
		class ACE_Equipment
		{
			class CHVD
			{
				displayName = "View Distance Settings";
				condition = "!isNil {CHVDAddon_fnc_openDialog}";
				exceptions[] = {"isNotInside", "isNotSitting"};
				statement = "[] call CHVDAddon_fnc_openDialog";
				showDisabled = 0;
				priority = 2.5;
				icon = "";
				hotKey = "";
			};
		};
	};
};
