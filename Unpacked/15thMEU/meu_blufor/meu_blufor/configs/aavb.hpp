// had to do it this way because once I repacked AAV with changes below, it no longer would float.

#define UAFALSE(TEXT)  	class ##TEXT##  {  condition = "false";  };
#define UANAME(STRING)	displayName = STRING; displayNameDefault = STRING;
#define UACONDFNC(STR)	__EVAL("player in [driver this,commander this,gunner this] && " + STR)
#define UACOND(STRING)	condition = UACONDFNC(STRING);

	class Tank_F;
	class AAVB: Tank_F
	{	//-- Fix spawning with crew --//
		crew = "B_crew_F";
		class EventHandlers: DefaultEventHandlers
		{	//-- lock fucked up FFV turret --//
			init = "(_this select 0) lockTurret [[2],true];";
		};
		class Damage
		{	//-- remove broken RVMATs --//
			tex[] = {};
			mat[] = {};
		};
		class UserActions
		{	//-- Adjust userActions for new scripting --//
			class amphibious 
			{
				UANAME("<t color='#ff0000'>Engage Amphibious Drive")
				condition = "(player in [driver this]) && (alive this) && !(this getVariable ['meu_fnc_amphibious_engaged',false])";
				onlyforplayer = 1;
				priority = 10;
				position = "camo1";
				radius = 5;
				showWindow = 0;
				statement = "this call meu_fnc_amphibious;";
			};
			class leftHatchOpen
			{
				UANAME("<t color='#6A98FA'>Open Left Hatch")
				UACOND("this animationPhase ""leftHatch"" == 0")
				priority = 0.1;
			};				
			class leftHatchClose
			{
				UANAME("<t color='#6A98FA'>Close Left Hatch")
				UACOND("this animationPhase ""leftHatch"" == 1")
				priority = 0.1;
			};			
			class RightHatchOpen
			{
				UANAME("<t color='#6A98FA'>Open Right Hatch")
				UACOND("this animationPhase ""rightHatch"" == 0") 
				priority = 0;
			};					
			class RightHatchClose
			{
				UANAME("<t color='#6A98FA'>Close Right Hatch")
				UACOND("this animationPhase ""RightHatch"" == 1") 
				priority = 0;
			};				
			class rampOpen
			{
				UANAME("<t color='#45FE2F'>Open Ramp")
				UACOND("this animationPhase ""rearRamp"" == 0")
				priority = 4;
			};	
			class rampClose
			{
				UANAME("<t color='#45FE2F'>Close Ramp")
				UACOND("this animationPhase ""rearRamp"" == 1")
				priority = 4;
			};
			//-- completely disable these actions --//
			UAFALSE(Backward)
			UAFALSE(Left)
			UAFALSE(Right)
			UAFALSE(Stop)
			UAFALSE(Forward)
		};
	};
	
	class Burnes_aav_des: AAVB 
	{	//-- Give Desert version same attributes --//
		displayName = "AAV Desert";
		model = "\AAVB\AAVdes";
	};
	
	