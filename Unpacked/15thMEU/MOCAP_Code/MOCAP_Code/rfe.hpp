/*******************************************************************************
* Project:          Remote Function Execution System
* Module:           rfe.hpp
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         --//--
* Comments:         --//--
*******************************************************************************/

// Registered functions
// ----------------------------------------------------------------------
#define     MOCAP_FID_REQUEST_HELLOWORLD                  62000
#define     MOCAP_FID_ON_HELLOWORLD                       62001
#define     MOCAP_FID_PLAY_ANIMATION                      62002

#define     MOCAP_REGISTERED_FIDs \
[ \
    [MOCAP_FID_REQUEST_HELLOWORLD, MOCAP_FID_ON_HELLOWORLD, MOCAP_FID_PLAY_ANIMATION], \
    ["MOCAP_fnc_RequestHelloWorld", "MOCAP_fnc_OnHelloWorld", "MOCAP_fnc_PlayAnimation"] \
]
// ----------------------------------------------------------------------

// DO NOT MODIFY
// ----------------------------------------------------------------------
#define     MOCAP_CALL                                    61900
#define     MOCAP_SPAWN                                   61901
#define     MOCAP_ALL                                     61902
#define     MOCAP_PLAYABLEUNITS                           61903
#define     MOCAP_ALLUNITS                                61904
#define     MOCAP_ALLCLIENTS                              61905
#define     MOCAP_SERVER                                  0
#define     MOCAP_EXEC(MOCAP_ARGUMENTS, MOCAP_FUNCTION, MOCAP_CALLTYPE) if (isNil {missionNamespace getVariable MOCAP_FUNCTION}) then {diag_log format ["[WRN] [MOCAP_EXEC] Function %1 is not defined", MOCAP_FUNCTION];} else {switch (MOCAP_CALLTYPE) do {case MOCAP_CALL: {MOCAP_ARGUMENTS call (missionNamespace getVariable MOCAP_FUNCTION);}; case MOCAP_SPAWN: {MOCAP_ARGUMENTS spawn (missionNamespace getVariable MOCAP_FUNCTION);}; default {diag_log format ["[WRN] [MOCAP_EXEC] Unknown call type: %1", MOCAP_CALLTYPE];};};}
// ----------------------------------------------------------------------