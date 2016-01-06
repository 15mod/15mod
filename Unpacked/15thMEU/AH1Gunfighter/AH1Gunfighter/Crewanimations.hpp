
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AH1Z_Pilot = "AH1Z_Pilot";
		AH1Z_Gunner = "AH1Z_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AH1Z_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "\AH1gunfighter\ah1z\Anims\AH1Z_Dead.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class KIA_AH1Z_Pilot: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\AH1gunfighter\ah1z\Anims\KIA_AH1Z_Pilot.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class AH1Z_Pilot: Crew
		{
			file = "\AH1gunfighter\ah1z\Anims\AH1Z_Pilot.rtm";
			interpolateTo[] = {"KIA_AH1Z_Pilot",1};
		};
		class KIA_AH1Z_Gunner: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\AH1gunfighter\ah1z\Anims\KIA_AH1Z_Gunner.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class AH1Z_Gunner: Crew
		{
			file = "\AH1gunfighter\ah1z\Anims\AH1Z_Gunner.rtm";
			interpolateTo[] = {"KIA_AH1Z_Gunner",1};
		};
		
	};
};