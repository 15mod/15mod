// macros

#define SMGR_NAMESPACE 	missionNamespace
#define SMGR_CONFIG 	configFile >> "CfgSmgr"
#define SMGR_DLG 		( uiNamespace getvariable "smgrDialog" )

#define GETVAR(str) 	( SMGR_NAMESPACE getvariable str )
#define SETVAR(str,val) ( SMGR_NAMESPACE setvariable [str,val] )
#define DEFAULT_VAR(str,val) \
	_var = SMGR_NAMESPACE getvariable [str,val]; \
	SMGR_NAMESPACE setvariable [str, _var];
#define GPS_POS(x)	((GETVAR("smgrGpsMemory") select x) select 0)
#define GPS_FOM(x)	((GETVAR("smgrGpsMemory") select x) select 1)
#define GPS_TIME(x)	((GETVAR("smgrGpsMemory") select x) select 2)

#define GRID_X_ORIGIN (missionNamespace getVariable "smgrMapXOffset")
#define GRID_Y_ORIGIN (missionNamespace getVariable "smgrMapYOffset")
#define GRID_Y_INVERTED (missionNamespace getVariable "smgrMapYInverted")

// constants

#define SMGR_BOOT_TIME 	25
#define	SMGR_POWER_CHARGE 7200