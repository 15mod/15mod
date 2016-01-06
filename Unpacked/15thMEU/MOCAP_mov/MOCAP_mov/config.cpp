////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Wed Oct 22 06:28:17 2014 : Created on Wed Oct 22 06:28:17 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class MOCAP_mov : config.bin{
class CfgPatches
{
	class CBS_Movements_Of_Combat_Actions_Pro
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		version = 0.01;
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgMovesBasic
{
	access = 1;
	skeletonName = "";
	class StandBase;
	class ManActions
	{
		MOCAP_Man_Act_Rfl_Stroke_RightCurve = "";
		MOCAP_Man_Act_Rfl_Stroke_DirectCurve = "";
		MOCAP_Man_Act_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg = "";
		MOCAP_Man_Act_Pstl_Stroke_RightCurve = "";
		MOCAP_Man_Act_Pstl_Stroke_LeftCurve = "";
		MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "";
		MOCAP_Man_Act_Lnr_Stroke_DirectCurve = "";
		MOCAP_Man_Act_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg = "";
		MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
		MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
		MOCAP_Man_Act_Non_CivPace_Non_Idle_Combat_Pose = "";
		MOCAP_Man_Act_Non_CivPace_Non_HandsUp_Combat_Pose = "";
		MOCAP_Man_Act_Non_CivPace_Non_HandsDown_Combat_Pose = "";
		MOCAP_Man_Act_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg = "";
		MOCAP_Weap_m9b_Reload = "MOCAP_Weap_m9b_Reload";
		MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr = "";
		MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr = "";
		MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr = "";
		MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr = "";
		MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr = "";
		MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr = "";
		MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr = "";
		MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr = "";
		MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr = "";
		MOCAP_Man_Act_Idle_Prone_CivPace_Un_Prey_Lying_Neck_Twist_No_Contr = "";
	};
	class Actions
	{
		class RifleStandActions
		{
			MOCAP_Man_Act_Rfl_Stroke_RightCurve[] = {"MOCAP_Gesture_CombatPace_Rfl_Stroke_RightCurve","Gesture"};
			MOCAP_Man_Act_Rfl_Stroke_DirectCurve[] = {"MOCAP_Gesture_CombatPace_Rfl_Stroke_DirectCurve","Gesture"};
			MOCAP_Man_Act_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr";
		};
		class RifleCrouchActions
		{
			MOCAP_Man_Act_Rfl_Stroke_RightCurve[] = {"MOCAP_Gesture_CombatPace_Rfl_Stroke_RightCurve","Gesture"};
			MOCAP_Man_Act_Rfl_Stroke_DirectCurve[] = {"MOCAP_Gesture_CombatPace_Rfl_Stroke_DirectCurve","Gesture"};
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr";
		};
		class RifleKneelActions
		{
			MOCAP_Man_Act_Rfl_Stroke_RightCurve[] = {"MOCAP_Gesture_CombatPace_Rfl_Stroke_RightCurve","Gesture"};
			MOCAP_Man_Act_Rfl_Stroke_DirectCurve[] = {"MOCAP_Gesture_CombatPace_Rfl_Stroke_DirectCurve","Gesture"};
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr";
		};
		class RifleLowStandActions
		{
			MOCAP_Man_Act_Rfl_Stroke_RightCurve[] = {"MOCAP_Gesture_CombatPace_Rfl_Stroke_RightCurve","Gesture"};
			MOCAP_Man_Act_Rfl_Stroke_DirectCurve[] = {"MOCAP_Gesture_CombatPace_Rfl_Stroke_DirectCurve","Gesture"};
			MOCAP_Man_Act_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr";
		};
		class RifleAdjustStandBaseActions
		{
			MOCAP_Man_Act_Rfl_Stroke_RightCurve[] = {"MOCAP_Gesture_CombatPace_Rfl_Stroke_RightCurve","Gesture"};
			MOCAP_Man_Act_Rfl_Stroke_DirectCurve[] = {"MOCAP_Gesture_CombatPace_Rfl_Stroke_DirectCurve","Gesture"};
			MOCAP_Man_Act_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr";
		};
		class RifleProneActions
		{
			MOCAP_Man_Act_Idle_Prone_CivPace_Un_Prey_Lying_Neck_Twist_No_Contr = "MOCAP_Idle_Prone_CivPace_Un_Prey_Lying_Neck_Twist_No_Contr";
		};
		class RifleStandSaluteActions
		{
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr";
		};
		class RifleSiTactions
		{
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr";
		};
		class PistolStandActions
		{
			MOCAP_Man_Act_Pstl_Stroke_RightCurve[] = {"MOCAP_Gesture_CombatPace_Pstl_Stroke_RightCurve","Gesture"};
			MOCAP_Man_Act_Pstl_Stroke_LeftCurve[] = {"MOCAP_Gesture_CombatPace_Pstl_Stroke_LeftCurve","Gesture"};
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr";
		};
		class PistolLowStandActions
		{
			MOCAP_Man_Act_Pstl_Stroke_RightCurve[] = {"MOCAP_Gesture_CombatPace_Pstl_Stroke_RightCurve","Gesture"};
			MOCAP_Man_Act_Pstl_Stroke_LeftCurve[] = {"MOCAP_Gesture_CombatPace_Pstl_Stroke_LeftCurve","Gesture"};
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr";
		};
		class PistolStandActionsNoAdjust
		{
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr";
		};
		class PistolLowStandActionsNoAdjust
		{
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr";
		};
		class PistolKneelActions
		{
			MOCAP_Man_Act_Pstl_Stroke_RightCurve[] = {"MOCAP_Gesture_CombatPace_Pstl_Stroke_RightCurve","Gesture"};
			MOCAP_Man_Act_Pstl_Stroke_LeftCurve[] = {"MOCAP_Gesture_CombatPace_Pstl_Stroke_LeftCurve","Gesture"};
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr";
		};
		class PistolLowKneelActions
		{
			MOCAP_Man_Act_Pstl_Stroke_RightCurve[] = {"MOCAP_Gesture_CombatPace_Pstl_Stroke_RightCurve","Gesture"};
			MOCAP_Man_Act_Pstl_Stroke_LeftCurve[] = {"MOCAP_Gesture_CombatPace_Pstl_Stroke_LeftCurve","Gesture"};
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr";
		};
		class PistolProneActions
		{
			MOCAP_Man_Act_Pstl_Stroke_RightCurve = "";
			MOCAP_Man_Act_Pstl_Stroke_LeftCurve = "";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "";
			MOCAP_Man_Act_Idle_Prone_CivPace_Un_Prey_Lying_Neck_Twist_No_Contr = "MOCAP_Idle_Prone_CivPace_Un_Prey_Lying_Neck_Twist_No_Contr";
		};
		class PistolStandSaluteActions
		{
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr";
		};
		class PistolSiTactions
		{
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr";
		};
		class LauncherStandActions
		{
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg";
			MOCAP_Man_Act_Lnr_Stroke_DirectCurve[] = {"MOCAP_Gesture_CombatPace_Lnr_Stroke_DirectCurve","Gesture"};
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr";
		};
		class LauncherKneelActions
		{
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Lnr_Stroke_DirectCurve[] = {"MOCAP_Gesture_CombatPace_Lnr_Stroke_DirectCurve","Gesture"};
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr";
		};
		class LauncherProneActions
		{
			MOCAP_Man_Act_Lnr_Stroke_DirectCurve = "";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg = "";
			MOCAP_Man_Act_Idle_Prone_CivPace_Un_Prey_Lying_Neck_Twist_No_Contr = "MOCAP_Idle_Prone_CivPace_Un_Prey_Lying_Neck_Twist_No_Contr";
		};
		class CivilStandActions
		{
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_HandsUp_Combat_Pose[] = {"MOCAP_Gesture_CivPace_Non_HandsUp_Combat_Pose","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Idle_Combat_Pose[] = {"MOCAP_Gesture_CivPace_Non_Idle_Combat_Pose","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_HandsDown_Combat_Pose[] = {"MOCAP_Gesture_CivPace_Non_HandsDown_Combat_Pose","Gesture"};
			MOCAP_Man_Act_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr";
		};
		class CivilKneelActions
		{
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_HandsUp_Combat_Pose[] = {"MOCAP_Gesture_CivPace_Non_HandsUp_Combat_Pose","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Idle_Combat_Pose[] = {"MOCAP_Gesture_CivPace_Non_Idle_Combat_Pose","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_HandsDown_Combat_Pose[] = {"MOCAP_Gesture_CivPace_Non_HandsDown_Combat_Pose","Gesture"};
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr";
		};
		class CivilProneActions
		{
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_HandsUp_Combat_Pose = "";
			MOCAP_Man_Act_Non_CivPace_Non_Idle_Combat_Pose = "";
			MOCAP_Man_Act_Non_CivPace_Non_HandsDown_Combat_Pose = "";
			MOCAP_Man_Act_Idle_Prone_CivPace_Un_Prey_Lying_Neck_Twist_No_Contr = "MOCAP_Idle_Prone_CivPace_Un_Prey_Lying_Neck_Twist_No_Contr";
		};
		class CivilStandSurrenderActions
		{
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_HandsUp_Combat_Pose = "";
			MOCAP_Man_Act_Non_CivPace_Non_Idle_Combat_Pose = "";
			MOCAP_Man_Act_Non_CivPace_Non_HandsDown_Combat_Pose = "";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr = "";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr";
		};
		class CivilSiTactions
		{
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_HandsUp_Combat_Pose = "";
			MOCAP_Man_Act_Non_CivPace_Non_Idle_Combat_Pose = "";
			MOCAP_Man_Act_Non_CivPace_Non_HandsDown_Combat_Pose = "";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr = "";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr = "MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr";
		};
		class CivilStandSaluteActions
		{
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_HandsUp_Combat_Pose = "";
			MOCAP_Man_Act_Non_CivPace_Non_Idle_Combat_Pose = "";
			MOCAP_Man_Act_Non_CivPace_Non_HandsDown_Combat_Pose = "";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr = "";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr";
			MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr = "MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr";
		};
		class CivilEvasiveActions
		{
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_HandsUp_Combat_Pose[] = {"MOCAP_Gesture_CivPace_Non_HandsUp_Combat_Pose","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Idle_Combat_Pose[] = {"MOCAP_Gesture_CivPace_Non_Idle_Combat_Pose","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_HandsDown_Combat_Pose[] = {"MOCAP_Gesture_CivPace_Non_HandsDown_Combat_Pose","Gesture"};
		};
		class CivilRunActions
		{
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_HandsUp_Combat_Pose[] = {"MOCAP_Gesture_CivPace_Non_HandsUp_Combat_Pose","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Idle_Combat_Pose[] = {"MOCAP_Gesture_CivPace_Non_Idle_Combat_Pose","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_HandsDown_Combat_Pose[] = {"MOCAP_Gesture_CivPace_Non_HandsDown_Combat_Pose","Gesture"};
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	access = 1;
	class States
	{
		class AmovPercMstpSlowWrflDnon;
		class AmovPercMstpSrasWrflDnon;
		class AmovPknlMstpSlowWrflDnon;
		class AmovPknlMstpSrasWrflDnon;
		class AmovPsitMstpSrasWrflDnon;
		class AmovPercMstpSrasWrflDnon_Salute;
		class AmovPercMstpSlowWrflDnon_Salute;
		class AmovPercMstpSlowWpstDnon;
		class AmovPercMstpSrasWpstDnon;
		class AmovPknlMstpSlowWpstDnon;
		class AmovPknlMstpSrasWpstDnon;
		class amovpsitmstpsnonwpstdnon_ground;
		class AmovPercMstpSrasWpstDnon_Salute;
		class AmovPercMstpSnonWnonDnon;
		class AmovPknlMstpSnonWnonDnon;
		class AmovPpneMstpSnonWnonDnon;
		class AmovPsitMstpSnonWnonDnon_ground;
		class amovpercmstpsnonwnondnon_salute;
		class AmovPercMstpSsurWnonDnon;
		class AmovPercMstpSrasWlnrDnon;
		class AmovPercMstpSlowWlnrDnon;
		class AmovPknlMstpSrasWlnrDnon;
		class AmovPercMstpSlowWrflDnon_gear;
		class AovrPercMstpSnonWnonDf;
		class DeadState;
		class Maya_test: AovrPercMstpSnonWnonDf
		{
			file = "\MOCAP_mov\Moves\Maya_test.rtm";
			looped = 0;
			speed = 0.7;
			mask = "BodyFull";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 0;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWrflDnon",9.02,"AmovPercMstpSlowWrflDnon",9.02,"AmovPercMstpSoptWbinDnon",9.02,"AmovPercMstpSnonWnonDnon",9.02,"AmovPercMstpSrasWpstDnon",9.02,"AmovPercMstpSlowWpstDnon",9.02,"AmovPercMstpSrasWlnrDnon",9.02,"AmovPercMstpSlowWlnrDnon",9.02};
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon",9.02,"AmovPercMstpSlowWrflDnon",9.02,"AmovPercMstpSoptWbinDnon",9.02,"AmovPercMstpSnonWnonDnon",9.02,"AmovPercMstpSrasWpstDnon",9.02,"AmovPercMstpSlowWpstDnon",9.02,"AmovPercMstpSrasWlnrDnon",9.02,"AmovPercMstpSlowWlnrDnon",9.02};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 1;
			showItemInRightHand = 1;
		};
		class mocap_test_anim_hands: AmovPercMstpSnonWnonDnon
		{
			file = "\MOCAP_mov\test_hands.rtm";
			looped = 0;
			speed = 0.2;
			mask = "BodyFull";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			leaning = "leaningDefault";
			aimingBody = "aimingUpDefault";
			aiming = "aimingDefault";
			canBlendStep = 0;
			forceAim = 0;
			limitGunMovement = 9.1;
			headBobMode = 0;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSnonWnonDnon",9.02};
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 0;
		};
		class MOCAP_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg: AmovPercMstpSrasWrflDnon
		{
			file = "\MOCAP_mov\Strikes\MOCAP_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg.rtm";
			looped = 0;
			speed = 0.7;
			duty = 0.7;
			mask = "BodyFull";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 1;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 0;
			headBobStrength = 0;
			canPullTrigger = 1;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWrflDnon",9.02,"AmovPercMstpSlowWrflDnon",9.02,"aadjpercmstpsraswrflddown_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldup_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldright_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldleft_amovpercmstpsraswrfldnon",9.02};
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon",0.02};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 0;
		};
		class MOCAP_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg: AmovPercMstpSrasWpstDnon
		{
			file = "\MOCAP_mov\Strikes\MOCAP_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg.rtm";
			looped = 0;
			speed = 0.8;
			duty = 0.7;
			mask = "BodyFull";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 0;
			headBobStrength = 0;
			canPullTrigger = 1;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWpstDnon",9.02,"AmovPercMstpSlowWpstDnon",9.02,"aadjpercmstpsraswpstddown_amovpercmstpsraswpstdnon",9.02,"aadjpercmstpsraswpstdup_amovpercmstpsraswpstdnon",9.02,"aadjpercmstpsraswpstdright_amovpercmstpsraswpstdnon",9.02,"aadjpercmstpsraswpstdleft_amovpercmstpsraswpstdnon",9.02};
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon",0.02};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
		};
		class MOCAP_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg: AmovPercMstpSrasWlnrDnon
		{
			file = "\MOCAP_mov\Strikes\MOCAP_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg.rtm";
			looped = 0;
			speed = 0.8;
			duty = 0.7;
			mask = "BodyFull";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 4;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 0;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWlnrDnon",9.02,"AmovPercMstpSlowWlnrDnon",9.02};
			ConnectTo[] = {"AmovPercMstpSrasWlnrDnon",0.02,"AmovPercMstpSlowWlnrDnon",0.02};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
		};
		class MOCAP_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg: AmovPercMstpSnonWnonDnon
		{
			file = "\MOCAP_mov\Strikes\MOCAP_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg.rtm";
			looped = 0;
			speed = 0.7;
			duty = 0.7;
			mask = "BodyFull";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 0;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 0;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSnonWnonDnon",9.02};
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
		};
		class MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr: AmovPknlMstpSnonWnonDnon
		{
			file = "\MOCAP_mov\Grabs\MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr.rtm";
			looped = 0;
			speed = 0.1;
			duty = 2;
			mask = "BodyFull";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			head = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 1;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWlnrDnon",9.02,"AmovPercMstpSlowWrflDnon_gear",9.02,"AmovPercMstpSoptWbinDnon",9.02,"AidlPercMstpSnonWnonDnon_AI",9.02,"aidlpercmstpslowwrfldnon_ai",9.02,"aidlpercmstpsraswrfldnon_ai",9.02,"AidlPercMstpSrasWpstDnon_AI",9.02,"AidlPercMstpSlowWpstDnon_AI",9.02,"AidlPercMstpSrasWlnrDnon_AI",9.02,"AmovPercMstpSnonWnonDnon",9.02,"AmovPercMstpSrasWrflDnon",9.02,"AmovPercMstpSlowWrflDnon",9.02,"AmovPercMstpSlowWpstDnon",9.02,"AmovPercMstpSrasWpstDnon",9.02,"aadjpercmstpsraswrflddown_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldup_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldright_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldleft_amovpercmstpsraswrfldnon",9.02};
			ConnectTo[] = {"AmovPknlMstpSoptWbinDnon",0.02,"AmovPknlMstpSnonWnonDnon",0.02,"AmovPknlMstpSrasWrflDnon",0.02,"AmovPknlMstpSlowWrflDnon",0.02,"AmovPknlMstpSlowWpstDnon",0.02,"AmovPknlMstpSrasWpstDnon",0.02,"AmovPknlMstpSrasWlnrDnon",0.02};
			showHandGun = 0;
			showItemInRightHand = 0;
		};
		class MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr: AmovPercMstpSnonWnonDnon
		{
			file = "\MOCAP_mov\Grabs\MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr.rtm";
			looped = 0;
			speed = 0.1;
			duty = 2;
			mask = "BodyFull";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 1;
			weaponIK = 1;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			head = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 0;
			headBobStrength = 0;
			canPullTrigger = 1;
			enableDirectControl = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWlnrDnon",9.02,"AmovPercMstpSlowWrflDnon_gear",9.02,"AmovPercMstpSoptWbinDnon",9.02,"AidlPercMstpSnonWnonDnon_AI",9.02,"aidlpercmstpslowwrfldnon_ai",9.02,"aidlpercmstpsraswrfldnon_ai",9.02,"AidlPercMstpSrasWpstDnon_AI",9.02,"AidlPercMstpSlowWpstDnon_AI",9.02,"AidlPercMstpSrasWlnrDnon_AI",9.02,"AmovPercMstpSnonWnonDnon",9.02,"AmovPercMstpSrasWrflDnon",9.02,"AmovPercMstpSlowWrflDnon",9.02,"AmovPercMstpSlowWpstDnon",9.02,"AmovPercMstpSrasWpstDnon",9.02,"aadjpercmstpsraswrflddown_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldup_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldright_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldleft_amovpercmstpsraswrfldnon",9.02,"AmovPercMstpSrasWrflDnon_Salute",9.02,"AmovPercMstpSlowWrflDnon_Salute",9.02,"AmovPercMstpSrasWpstDnon_Salute",9.02,"amovpercmstpsnonwnondnon_salute",9.02,"AmovPercMstpSsurWnonDnon",9.02};
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMstpSlowWpstDnon",0.02,"AmovPercMstpSrasWpstDnon",0.02,"AmovPercMstpSrasWlnrDnon",0.02};
			showHandGun = 0;
			showItemInRightHand = 0;
		};
		class MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr: AmovPknlMstpSnonWnonDnon
		{
			file = "\MOCAP_mov\Grabs\MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr.rtm";
			looped = 0;
			speed = 0.17;
			duty = 2;
			mask = "BodyFull";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			head = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 1;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPknlMstpSlowWrflDnon_gear",9.02,"AmovPknlMstpSoptWbinDnon",9.02,"AidlPknlMstpSnonWnonDnon_AI",9.02,"aidlpknlmstpslowwrfldnon_ai",9.02,"aidlpknlmstpsraswrfldnon_ai",9.02,"AidlPknlMstpSlowWpstDnon_AI",9.02,"AidlPknlMstpSrasWpstDnon_AI",9.02,"AidlPknlMstpSrasWlnrDnon_AI",9.02,"AmovPknlMstpSnonWnonDnon",9.02,"AmovPknlMstpSrasWrflDnon",9.02,"AmovPknlMstpSlowWrflDnon",9.02,"AmovPknlMstpSlowWpstDnon",9.02,"AmovPknlMstpSrasWpstDnon",9.02,"AmovPknlMstpSrasWlnrDnon",9.02,"aadjpknlmstpsraswrflddown_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldup_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldright_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldleft_amovpknlmstpsraswrfldnon",0.02};
			ConnectTo[] = {"AmovPknlMstpSoptWbinDnon",0.02,"AmovPknlMstpSnonWnonDnon",0.02,"AmovPknlMstpSrasWrflDnon",0.02,"AmovPknlMstpSlowWrflDnon",0.02,"AmovPknlMstpSlowWpstDnon",0.02,"AmovPknlMstpSrasWpstDnon",0.02,"AmovPknlMstpSrasWlnrDnon",0.02};
			showHandGun = 0;
			showItemInRightHand = 0;
			soundEnabled = 1;
			soundEdge[] = {0.1};
			soundOverride = "MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr";
		};
		class MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr: AmovPercMstpSnonWnonDnon
		{
			file = "\MOCAP_mov\Grabs\MOCAP_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr.rtm";
			looped = 0;
			speed = 0.17;
			duty = 2;
			mask = "BodyFull";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			head = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 1;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWlnrDnon",9.02,"AmovPercMstpSlowWrflDnon_gear",9.02,"AmovPercMstpSoptWbinDnon",9.02,"AidlPercMstpSnonWnonDnon_AI",9.02,"aidlpercmstpslowwrfldnon_ai",9.02,"aidlpercmstpsraswrfldnon_ai",9.02,"AidlPercMstpSrasWpstDnon_AI",9.02,"AidlPercMstpSlowWpstDnon_AI",9.02,"AidlPercMstpSrasWlnrDnon_AI",9.02,"AmovPercMstpSnonWnonDnon",9.02,"AmovPercMstpSrasWrflDnon",9.02,"AmovPercMstpSlowWrflDnon",9.02,"AmovPercMstpSlowWpstDnon",9.02,"AmovPercMstpSrasWpstDnon",9.02,"aadjpercmstpsraswrflddown_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldup_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldright_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldleft_amovpercmstpsraswrfldnon",9.02,"AmovPercMstpSrasWrflDnon_Salute",9.02,"AmovPercMstpSlowWrflDnon_Salute",9.02,"AmovPercMstpSrasWpstDnon_Salute",9.02,"amovpercmstpsnonwnondnon_salute",9.02,"AmovPercMstpSsurWnonDnon",9.02};
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMstpSlowWpstDnon",0.02,"AmovPercMstpSrasWpstDnon",0.02,"AmovPercMstpSrasWlnrDnon",0.02};
			showHandGun = 0;
			showItemInRightHand = 0;
			soundEnabled = 1;
			soundEdge[] = {0.1};
		};
		class MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr: AmovPknlMstpSnonWnonDnon
		{
			file = "\MOCAP_mov\Grabs\MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr.rtm";
			looped = 0;
			speed = 0.075;
			duty = 2;
			mask = "BodyFull";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			head = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 1;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPknlMstpSlowWrflDnon_gear",9.02,"AmovPknlMstpSoptWbinDnon",9.02,"AidlPknlMstpSnonWnonDnon_AI",9.02,"aidlpknlmstpslowwrfldnon_ai",9.02,"aidlpknlmstpsraswrfldnon_ai",9.02,"AidlPknlMstpSlowWpstDnon_AI",9.02,"AidlPknlMstpSrasWpstDnon_AI",9.02,"AidlPknlMstpSrasWlnrDnon_AI",9.02,"AmovPknlMstpSnonWnonDnon",9.02,"AmovPknlMstpSrasWrflDnon",9.02,"AmovPknlMstpSlowWrflDnon",9.02,"AmovPknlMstpSlowWpstDnon",9.02,"AmovPknlMstpSrasWpstDnon",9.02,"AmovPknlMstpSrasWlnrDnon",9.02,"aadjpknlmstpsraswrflddown_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldup_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldright_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldleft_amovpknlmstpsraswrfldnon",0.02};
			ConnectTo[] = {"AmovPknlMstpSoptWbinDnon",0.02,"AmovPknlMstpSnonWnonDnon",0.02,"AmovPknlMstpSrasWrflDnon",0.02,"AmovPknlMstpSlowWrflDnon",0.02,"AmovPknlMstpSlowWpstDnon",0.02,"AmovPknlMstpSrasWpstDnon",0.02,"AmovPknlMstpSrasWlnrDnon",0.02};
			showHandGun = 0;
			showItemInRightHand = 0;
		};
		class MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr: AmovPknlMstpSnonWnonDnon
		{
			file = "\MOCAP_mov\Grabs\MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr.rtm";
			looped = 0;
			speed = 0.075;
			duty = 2;
			mask = "BodyFull";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			head = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 1;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPknlMstpSlowWrflDnon_gear",9.02,"AmovPknlMstpSoptWbinDnon",9.02,"AidlPknlMstpSnonWnonDnon_AI",9.02,"aidlpknlmstpslowwrfldnon_ai",9.02,"aidlpknlmstpsraswrfldnon_ai",9.02,"AidlPknlMstpSlowWpstDnon_AI",9.02,"AidlPknlMstpSrasWpstDnon_AI",9.02,"AidlPknlMstpSrasWlnrDnon_AI",9.02,"AmovPknlMstpSnonWnonDnon",9.02,"AmovPknlMstpSrasWrflDnon",9.02,"AmovPknlMstpSlowWrflDnon",9.02,"AmovPknlMstpSlowWpstDnon",9.02,"AmovPknlMstpSrasWpstDnon",9.02,"AmovPknlMstpSrasWlnrDnon",9.02,"aadjpknlmstpsraswrflddown_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldup_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldright_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldleft_amovpknlmstpsraswrfldnon",0.02,"AmovPsitMstpSrasWrflDnon",9.02,"amovpsitmstpsnonwpstdnon_ground",9.02,"AmovPsitMstpSnonWnonDnon_ground",9.02};
			ConnectTo[] = {"AmovPknlMstpSoptWbinDnon",0.02,"AmovPknlMstpSnonWnonDnon",0.02,"AmovPknlMstpSrasWrflDnon",0.02,"AmovPknlMstpSlowWrflDnon",0.02,"AmovPknlMstpSlowWpstDnon",0.02,"AmovPknlMstpSrasWpstDnon",0.02,"AmovPknlMstpSrasWlnrDnon",0.02};
			showHandGun = 0;
			showItemInRightHand = 0;
		};
		class MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr: AmovPknlMstpSnonWnonDnon
		{
			file = "\MOCAP_mov\Grabs\MOCAP_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr.rtm";
			looped = 0;
			speed = 0.195;
			duty = 2;
			mask = "BodyFull";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			head = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 1;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWlnrDnon",9.02,"AmovPercMstpSlowWrflDnon_gear",9.02,"AmovPercMstpSoptWbinDnon",9.02,"AidlPercMstpSnonWnonDnon_AI",9.02,"aidlpercmstpslowwrfldnon_ai",9.02,"aidlpercmstpsraswrfldnon_ai",9.02,"AidlPercMstpSrasWpstDnon_AI",9.02,"AidlPercMstpSlowWpstDnon_AI",9.02,"AidlPercMstpSrasWlnrDnon_AI",9.02,"AmovPercMstpSnonWnonDnon",9.02,"AmovPercMstpSrasWrflDnon",9.02,"AmovPercMstpSlowWrflDnon",9.02,"AmovPercMstpSlowWpstDnon",9.02,"AmovPercMstpSrasWpstDnon",9.02,"aadjpercmstpsraswrflddown_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldup_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldright_amovpercmstpsraswrfldnon",9.02,"aadjpercmstpsraswrfldleft_amovpercmstpsraswrfldnon",9.02};
			ConnectTo[] = {"AmovPknlMstpSoptWbinDnon",0.02,"AmovPknlMstpSnonWnonDnon",0.02,"AmovPknlMstpSrasWrflDnon",0.02,"AmovPknlMstpSlowWrflDnon",0.02,"AmovPknlMstpSlowWpstDnon",0.02,"AmovPknlMstpSrasWpstDnon",0.02,"AmovPknlMstpSrasWlnrDnon",0.02};
			showHandGun = 0;
			showItemInRightHand = 0;
			soundEnabled = 1;
			soundEdge[] = {0.1};
		};
		class MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr: AmovPknlMstpSnonWnonDnon
		{
			file = "\MOCAP_mov\Grabs\MOCAP_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr.rtm";
			looped = 0;
			speed = 0.195;
			duty = 2;
			mask = "BodyFull";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			head = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 1;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPknlMstpSlowWrflDnon_gear",9.02,"AmovPknlMstpSoptWbinDnon",9.02,"AidlPknlMstpSnonWnonDnon_AI",9.02,"aidlpknlmstpslowwrfldnon_ai",9.02,"aidlpknlmstpsraswrfldnon_ai",9.02,"AidlPknlMstpSlowWpstDnon_AI",9.02,"AidlPknlMstpSrasWpstDnon_AI",9.02,"AidlPknlMstpSrasWlnrDnon_AI",9.02,"AmovPknlMstpSnonWnonDnon",9.02,"AmovPknlMstpSrasWrflDnon",9.02,"AmovPknlMstpSlowWrflDnon",9.02,"AmovPknlMstpSlowWpstDnon",9.02,"AmovPknlMstpSrasWpstDnon",9.02,"AmovPknlMstpSrasWlnrDnon",9.02,"aadjpknlmstpsraswrflddown_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldup_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldright_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldleft_amovpknlmstpsraswrfldnon",0.02,"AmovPsitMstpSrasWrflDnon",9.02,"amovpsitmstpsnonwpstdnon_ground",9.02,"AmovPsitMstpSnonWnonDnon_ground",9.02};
			ConnectTo[] = {"AmovPknlMstpSoptWbinDnon",0.02,"AmovPknlMstpSnonWnonDnon",0.02,"AmovPknlMstpSrasWrflDnon",0.02,"AmovPknlMstpSlowWrflDnon",0.02,"AmovPknlMstpSlowWpstDnon",0.02,"AmovPknlMstpSrasWpstDnon",0.02,"AmovPknlMstpSrasWlnrDnon",0.02};
			showHandGun = 0;
			showItemInRightHand = 0;
		};
		class MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr: AmovPknlMstpSnonWnonDnon
		{
			file = "\MOCAP_mov\Grabs\MOCAP_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr.rtm";
			looped = 0;
			speed = 0.25;
			duty = 2;
			mask = "BodyFull";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			head = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 1;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPknlMstpSlowWrflDnon_gear",9.02,"AmovPknlMstpSoptWbinDnon",9.02,"AidlPknlMstpSnonWnonDnon_AI",9.02,"aidlpknlmstpslowwrfldnon_ai",9.02,"aidlpknlmstpsraswrfldnon_ai",9.02,"AidlPknlMstpSlowWpstDnon_AI",9.02,"AidlPknlMstpSrasWpstDnon_AI",9.02,"AidlPknlMstpSrasWlnrDnon_AI",9.02,"AmovPknlMstpSnonWnonDnon",9.02,"AmovPknlMstpSrasWrflDnon",9.02,"AmovPknlMstpSlowWrflDnon",9.02,"AmovPknlMstpSlowWpstDnon",9.02,"AmovPknlMstpSrasWpstDnon",9.02,"AmovPknlMstpSrasWlnrDnon",9.02,"aadjpknlmstpsraswrflddown_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldup_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldright_amovpknlmstpsraswrfldnon",0.02,"aadjpknlmstpsraswrfldleft_amovpknlmstpsraswrfldnon",0.02};
			ConnectTo[] = {"AmovPknlMstpSoptWbinDnon",0.02,"AmovPknlMstpSnonWnonDnon",0.02,"AmovPknlMstpSrasWrflDnon",0.02,"AmovPknlMstpSlowWrflDnon",0.02,"AmovPknlMstpSlowWpstDnon",0.02,"AmovPknlMstpSrasWpstDnon",0.02,"AmovPknlMstpSrasWlnrDnon",0.02};
			showHandGun = 0;
			showItemInRightHand = 0;
		};
		class MOCAP_Idle_Prone_CivPace_Un_Prey_Lying_Neck_Twist_No_Contr: AmovPpneMstpSnonWnonDnon
		{
			file = "\MOCAP_mov\Grabs\MOCAP_Idle_Prone_CivPace_Un_Prey_Lying_Neck_Twist_No_Contr.rtm";
			looped = 0;
			speed = 0.25;
			duty = 2;
			mask = "BodyFull";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			head = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 1;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"ainvppnemstpsraswrfldnon",9.02,"AmovPpneMstpSoptWbinDnon",9.02,"AidlPpneMstpSnonWnonDnon_AI",9.02,"aidlppnemstpsraswrfldnon_ai",9.02,"AidlPpneMstpSrasWpstDnon_AI",9.02,"AmovPpneMstpSnonWnonDnon",9.02,"AmovPpneMstpSrasWrflDnon",9.02,"AmovPpneMstpSrasWpstDnon",9.02,"aadjppnemstpsraswpstddown",9.02,"aadjppnemstpsraswpstdleft",9.02,"aadjppnemstpsraswpstdright",9.02,"aadjppnemstpsraswrflddown",9.02,"aadjppnemstpsraswrfldleft",9.02,"aadjppnemstpsraswrfldright",9.02};
			ConnectTo[] = {"AmovPknlMstpSoptWbinDnon",0.02,"AmovPknlMstpSnonWnonDnon",0.02,"AmovPknlMstpSrasWrflDnon",0.02,"AmovPknlMstpSlowWrflDnon",0.02,"AmovPknlMstpSlowWpstDnon",0.02,"AmovPknlMstpSrasWpstDnon",0.02,"AmovPknlMstpSrasWlnrDnon",0.02};
			showHandGun = 0;
			showItemInRightHand = 0;
		};
	};
};
class CfgGesturesMale
{
	class ManActions;
	class Actions;
	class Default;
	class States
	{
		class MOCAP_Gesture_CombatPace_Rfl_Stroke_RightCurve: Default
		{
			file = "\MOCAP_mov\Gestures\Rfl\MOCAP_Gesture_CombatPace_Rfl_Stroke_RightCurve.rtm";
			looped = 0;
			speed = 0.8;
			duty = 1.0;
			aimingBody = "aimingUpDefault";
			mask = "handsRflStroke";
			soundOverride = "rifle_to_handgun";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 1;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canPullTrigger = 0;
		};
		class MOCAP_Gesture_CombatPace_Rfl_Stroke_DirectCurve: Default
		{
			file = "\MOCAP_mov\Gestures\Rfl\MOCAP_Gesture_CombatPace_Rfl_Stroke_DirectCurve.rtm";
			looped = 0;
			speed = 0.85;
			duty = 1.0;
			mask = "handsRflStroke";
			aimingBody = "aimingUpDefault";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 1;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canPullTrigger = 0;
			soundOverride = "rifle_to_handgun";
		};
		class MOCAP_Gesture_CombatPace_Pstl_Stroke_RightCurve: Default
		{
			file = "\MOCAP_mov\Gestures\Pstl\MOCAP_Gesture_CombatPace_Pstl_Stroke_RightCurve.rtm";
			looped = 0;
			speed = 0.9;
			duty = 1.0;
			aimingBody = "aimingUpDefault";
			mask = "handsPstlStroke";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canPullTrigger = 0;
			soundOverride = "rifle_to_handgun";
		};
		class MOCAP_Gesture_CombatPace_Pstl_Stroke_LeftCurve: Default
		{
			file = "\MOCAP_mov\Gestures\Pstl\MOCAP_Gesture_CombatPace_Pstl_Stroke_LeftCurve.rtm";
			looped = 0;
			speed = 1.0;
			duty = 1.0;
			aimingBody = "aimingUpDefault";
			mask = "handsPstlStroke";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 1;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canPullTrigger = 0;
			soundOverride = "rifle_to_handgun";
		};
		class MOCAP_Gesture_CombatPace_Lnr_Stroke_DirectCurve: Default
		{
			file = "\MOCAP_mov\Gestures\Lnr\MOCAP_Gesture_CombatPace_Lnr_Stroke_DirectCurve.rtm";
			looped = 0;
			speed = 0.6;
			duty = 1.0;
			aimingBody = "aimingUpLauncher";
			mask = "handsLnrStroke";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 4;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canPullTrigger = 0;
			soundOverride = "rifle_to_handgun";
		};
		class MOCAP_Gesture_CivPace_Non_Idle_Combat_Pose: Default
		{
			file = "\MOCAP_mov\Gestures\Non\Moves\MOCAP_Gesture_CivPace_Non_Idle_Combat_Pose.rtm";
			looped = 1;
			speed = 0.02;
			duty = 1.0;
			aimingBody = "aimingUpDefault";
			mask = "handsWeapon";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 0;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canPullTrigger = 0;
			interpolationSpeed = 2.0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			InterpolateTo[] = {};
			interpolateFrom[] = {};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 0;
		};
		class MOCAP_Gesture_CivPace_Non_HandsUp_Combat_Pose: Default
		{
			file = "\MOCAP_mov\Gestures\Non\Moves\MOCAP_Gesture_CivPace_Non_HandsUp_Combat_Pose.rtm";
			looped = 0;
			speed = 0.8;
			duty = 1.0;
			aimingBody = "aimingUpDefault";
			mask = "handsWeapon";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 0;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canPullTrigger = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 0;
		};
		class MOCAP_Gesture_CivPace_Non_HandsDown_Combat_Pose: Default
		{
			file = "\MOCAP_mov\Gestures\Non\Moves\MOCAP_Gesture_CivPace_Non_HandsDown_Combat_Pose.rtm";
			looped = 0;
			speed = 0.8;
			duty = 1.0;
			aimingBody = "aimingUpDefault";
			mask = "handsWeapon";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 0;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canPullTrigger = 0;
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 0;
		};
		class MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct: Default
		{
			file = "\MOCAP_mov\Gestures\Non\MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct.rtm";
			looped = 0;
			speed = 0.75;
			duty = 1.0;
			aimingBody = "aimingUpDefault";
			mask = "handsWeapon";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 0;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canPullTrigger = 0;
			InterpolateTo[] = {};
			interpolateFrom[] = {};
			soundOverride = "rifle_to_handgun";
		};
		class MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct: Default
		{
			file = "\MOCAP_mov\Gestures\Non\MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct.rtm";
			looped = 0;
			speed = 0.7;
			duty = 1.0;
			aimingBody = "aimingUpDefault";
			mask = "handsWeapon";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 0;
			weaponIK = 0;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canPullTrigger = 0;
			soundOverride = "rifle_to_handgun";
		};
		class MOCAP_Weap_m9b_Reload: Default
		{
			file = "\MOCAP_mov\Gestures\Knf\MOCAP_Gesture_NonPace_Knf_Reload_Holder.rtm";
			looped = 0;
			speed = 0.4;
			mask = "handsWeapon_pst";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
	};
	class BlendAnims
	{
		handsRflStroke[] = {"head",0,"neck1",0,"neck",0,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"pelvis","MaskStart"};
		handsPstlStroke[] = {"head",0,"neck1",0,"neck",0,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"pelvis","MaskStart"};
		handsLnrStroke[] = {"head",0,"neck1",0,"neck",0,"weapon",1,"launcher",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"pelvis","MaskStart"};
		handsNonPounch[] = {"head",0,"neck1",0,"neck",0,"weapon",1,"launcher",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.4,"Spine1",0.8,"Spine2",1,"Spine3",1,"pelvis",1};
		meleeUpperBodySmooth[] = {"head",0,"neck1",0,"neck",0,"weapon",1,"launcher",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.2,"Spine1",0.4,"Spine2",0.6,"Spine3",0.8};
	};
};
//};
