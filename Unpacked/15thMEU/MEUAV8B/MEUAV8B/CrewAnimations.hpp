#define SPEED_STATIC 1e10
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AV8B_Pilot = "AV8B_Pilot";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	#define AnimPath \MEUAV8B\Data\Anim
	class States
	{
		class KIA_AV8B_Pilot: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_AV8B_Pilot.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {"unconscious",0.1};
		};
		class Crew;
		class AV8B_Pilot: Crew
		{
			file=AnimPath\AV8B_Pilot.rtm;
			interpolateTo[]={KIA_AV8B_Pilot,1};
		};
	};
	#undef AnimPath
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		AV8B_Pilot = "";
	};
};