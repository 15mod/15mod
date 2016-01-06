#define ANIM_VERSION(cargo, version, varSpeed, varAfter1, varAfter2, varAfter3) \
	class cargo##_V##version##_EP1: cargo##_EP1 \
	{ \
		file = 	\ca\Air_E\Data\Anim\##cargo##_V##version##.rtm; \
		connectTo[] = {cargo##_EP1, 0.1}; \
		speed = varSpeed; \
		variantAfter[] = {varAfter1, varAfter2, varAfter3}; \
	};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Merlin_Cargo_BAF="Merlin_Cargo_BAF";
		Merlin_Cargo01_BAF="Merlin_Cargo01_BAF";
		Merlin_Pilot_BAF="Merlin_Pilot_BAF";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class Merlin_Cargo_BAF: Crew
		{
			file="\CH53\Data\Anim\Merlin_Cargo";
			connectTo[]=
			{
				"Merlin_KIA_Cargo_BAF",
				1
			};
			speed=1e+010;
		};
		class Merlin_KIA_Cargo_BAF: DefaultDie
		{
			actions="DeadActions";
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\R\death2.rtm";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		
		class Merlin_Cargo01_BAF: Crew
		{
			file="\CH53\Data\Anim\Merlin_Cargo01";
			connectTo[]=
			{
				"Merlin_KIA_Cargo_BAF",
				1
			};
			speed=1e+010;
		};
		
		class Merlin_Pilot_BAF: Crew
		{
			file="\CH53\Data\Anim\Merlin_Pilot";
			connectTo[]=
			{
				"Merlin_KIA_Pilot_BAF",
				1
			};
			speed=1e+010;
		};
		class Merlin_KIA_Pilot_BAF: DefaultDie
		{
			actions="DeadActions";
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\R\death2.rtm";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};		
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{	
		Merlin_Cargo_BAF="crew";
		Merlin_Cargo01_BAF="crew";
		Merlin_Pilot_BAF="crew";	
	};
};