class Extended_Fired_EventHandlers
{
	class CAManBase
	{
		inko_disposable = "if ((local (_this select 0)) && (getNumber (configFile >> 'CfgWeapons' >> _this select 1 >> 'inko_disposable') == 1)) then { _this spawn inko_disposable_fired };";
	};
};

class Extended_PostInit_EventHandlers
{
	class inko_disposable
	{
		init = "call compile preProcessFileLineNumbers 'inko_disposable_a3\XEH_PostInit_Once.sqf'";
	};
};