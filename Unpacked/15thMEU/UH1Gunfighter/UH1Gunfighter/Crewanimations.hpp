
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		UH1Y_Pilot = "UH1Y_Pilot";
		UH1Y_Gunner = "UH1Y_Gunner";
		UH1Y_Gunner02 = "UH1Y_Gunner02";
		UH1Y_Cargo01 = "UH1Y_Cargo01";
		UH1Y_Cargo02 = "UH1Y_Cargo02";
		UH1Y_Cargo03 = "UH1Y_Cargo03";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_UH1Y_Pilot: DefaultDie
		{
			actions = DeadActions;
			file="\UH1gunfighter\UH1Y\Anims\KIA_UH1Y_Pilot.rtm";
			speed = 0.5;
			looped=0;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1Y_Pilot: Crew
		{
			file="\UH1gunfighter\UH1Y\Anims\UH1Y_Pilot.rtm";
			interpolateTo[]={"KIA_UH1Y_Pilot",1};
		};
		class KIA_UH1Y_Gunner: DefaultDie
		{
			actions = DeadActions;
			file="\UH1gunfighter\UH1Y\Anims\KIA_UH1Y_Gunner01.rtm";
			speed = 0.5;
			looped=0;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1Y_Gunner: Crew
		{
			file="\UH1gunfighter\UH1Y\Anims\UH1Y_Gunner.rtm";
			interpolateTo[]={"KIA_UH1Y_Gunner",1};
		};
		class KIA_UH1Y_Gunner02: DefaultDie
		{
			actions = DeadActions;
			file="\UH1gunfighter\UH1Y\Anims\KIA_UH1Y_Pilot.rtm";
			speed = 0.5;
			looped=0;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1Y_Gunner02: Crew
		{
			file="\UH1gunfighter\UH1Y\Anims\UH1Y_Pilot.rtm";
			interpolateTo[]={"KIA_UH1Y_Gunner02",1};
		};
		class KIA_UH1Y_Cargo01: DefaultDie
		{
			actions = DeadActions;
			file="\UH1gunfighter\UH1Y\Anims\KIA_cargo_01.rtm";
			speed = 0.5;
			looped=0;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1Y_Cargo01: Crew
		{
			file="\UH1gunfighter\UH1Y\Anims\cargo_01.rtm";
			interpolateTo[]={"KIA_UH1Y_Cargo01",0.1};
			connectTo[]={"UH1Y_Cargo01",0.3,"UH1Y_Cargo01_V1",0.1,"UH1Y_Cargo01_V2",0.1,"UH1Y_Cargo01_V3",0.1};
			equivalentTo="UH1Y_Cargo01";
			variantsAI[]={"UH1Y_Cargo01",0.4,"UH1Y_Cargo01_V1",0.2,"UH1Y_Cargo01_V2",0.2,"UH1Y_Cargo01_V3",0.2};
			variantAfter[]={5,10,20};
			speed = 0.3;
		};
		class UH1Y_Cargo01_V1: UH1Y_Cargo01
		{
			file="\UH1gunfighter\UH1Y\Anims\cargo_01nadech.rtm";
			interpolateTo[]={"KIA_UH1Y_Cargo01",1};
			connectTo[]={"UH1Y_Cargo01",0.1};
			speed = 0.395;
                        looped=false;
			variantAfter[]={5,5,5};
		};
		class UH1Y_Cargo01_V2: UH1Y_Cargo01_V1
		{
			file="\UH1gunfighter\UH1Y\Anims\cargo_01poposed.rtm";
			speed = 0.588;
		};
		class UH1Y_Cargo01_V3: UH1Y_Cargo01_V1
		{
			file="\UH1gunfighter\UH1Y\Anims\cargo_01presunruky.rtm";
			speed = 0.491;
		};
		class KIA_UH1Y_Cargo02: KIA_UH1Y_Cargo01
		{
			file="\UH1gunfighter\UH1Y\Anims\KIA_cargo_02.rtm";
		};
		class UH1Y_Cargo02: Crew
		{
			file="\UH1gunfighter\UH1Y\Anims\cargo_02.rtm";
			interpolateTo[]={"KIA_UH1Y_Cargo02",0.1};
			connectTo[]={"UH1Y_Cargo02",0.3,"UH1Y_Cargo02_V1",0.1,"UH1Y_Cargo02_V2",0.1,"UH1Y_Cargo02_V3",0.1};
			equivalentTo="UH1Y_Cargo02";
			variantsAI[]={"UH1Y_Cargo02",0.4,"UH1Y_Cargo02_V1",0.2,"UH1Y_Cargo02_V2",0.2,"UH1Y_Cargo02_V3",0.2};
			variantAfter[]={5,10,20};
			speed = 0.3;
		};
		class UH1Y_Cargo02_V1: UH1Y_Cargo02
		{
			file="\UH1gunfighter\UH1Y\Anims\cargo_02poposed.rtm";
			interpolateTo[]={"KIA_UH1Y_Cargo02",1};
			connectTo[]={"UH1Y_Cargo02",0.1};
			speed = 0.652;
                        looped=false;
			variantAfter[]={5,5,5};
		};
		class UH1Y_Cargo02_V2: UH1Y_Cargo02_V1
		{
			file="\UH1gunfighter\UH1Y\Anims\cargo_02predklon.rtm";
			speed = 0.3125;
		};
		class UH1Y_Cargo02_V3: UH1Y_Cargo02_V1
		{
			file="\UH1gunfighter\UH1Y\Anims\cargo_02presunruky.rtm";
			speed = 0.370;
		};
		class KIA_UH1Y_Cargo03: KIA_UH1Y_Cargo01
		{
			file="\UH1gunfighter\UH1Y\Anims\KIA_cargo_03.rtm";
		};
		class UH1Y_Cargo03: Crew
		{
			file="\UH1gunfighter\UH1Y\Anims\cargo_03.rtm";
			interpolateTo[]={"KIA_UH1Y_Cargo03",0.1};
			connectTo[]={"UH1Y_Cargo03",0.3,"UH1Y_Cargo03_V1",0.1,"UH1Y_Cargo03_V2",0.1,"UH1Y_Cargo03_V3",0.1};// TODO
			equivalentTo="UH1Y_Cargo03";
			variantsAI[]={"UH1Y_Cargo03",0.4,"UH1Y_Cargo03_V1",0.1,"UH1Y_Cargo03_V2",0.25,"UH1Y_Cargo03_V3",0.25};// TODO
			variantAfter[]={5,10,20};
			speed = 0.3;
		};
		class UH1Y_Cargo03_V1: UH1Y_Cargo03
		{
			file="\UH1gunfighter\UH1Y\Anims\cargo_03predklon.rtm";
			interpolateTo[]={"KIA_UH1Y_Cargo03",1};
			connectTo[]={"UH1Y_Cargo03",0.1};
			speed = 0.370;
                        looped=false;
                        //head="headNo";
			variantAfter[]={5,5,5};
		};
		class UH1Y_Cargo03_V2: UH1Y_Cargo03_V1
		{
			file="\UH1gunfighter\UH1Y\Anims\cargo_03presunruky.rtm";
			speed = 0.370;
			variantAfter[]={5,5,5};
		};
		class UH1Y_Cargo03_V3: UH1Y_Cargo03_V1
		{
			file="\UH1gunfighter\UH1Y\Anims\cargo_03protazenizad.rtm";
			speed = 0.491;
			variantAfter[]={5,5,5};
		};
	};
};