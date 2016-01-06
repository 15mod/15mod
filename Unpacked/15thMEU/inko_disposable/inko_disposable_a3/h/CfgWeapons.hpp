class CfgWeapons
{
	class Default
	{
		inko_disposable = 0;
	};
	
	class Launcher;
	class HAFM_LAW : Launcher
	{
		inko_disposable = 1;
		inko_disposable_used = "INKO_HAFM_LAW_USED";
		inko_disposable_tube = "INKO_HAFM_LAW_USED_TUBE";
		//mass = 12.5;
	};
};