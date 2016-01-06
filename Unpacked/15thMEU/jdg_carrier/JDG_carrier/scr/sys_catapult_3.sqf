// Script by JDog, launch section is modified from Raddik's Steam Catapult script
// Catapults aircraft off deck (automated version), gives pilot a slight blur
// Usage: None, mission-makers see "nim_catlaunch.sqf"

_veh = _this select 0;
_line = _this select 3;
_line = _line select 0;
_action = _this select 2;

if(vehicle player != _veh) exitWith{}; // Exit for all but players in jet
_veh removeAction _action; // Remove "Signal Launch Ready"

_time = random 3;
sleep _time;

// Blur pilot
_catBlur = ppEffectCreate ["radialBlur", 450];
_catBlur ppEffectEnable true;
_catBlur ppEffectAdjust [0.01,0.01,0.15,0.15];
_catBlur ppEffectCommit 1;

// Launch
detach _veh;
nimCatJet = _veh;
soundOff = "catLaunch";
publicVariable "nimCatJet";
publicVariable "soundOff";

JDG_steamFXshot = _veh;
publicVariable "JDG_steamFXshot";
_steamFX = [_veh]execVM "JDG_carrier\scr\fx_steamShot.sqf";

_v=1;
while{_v<50}do{    
	(vehicle _veh) setvelocity [_v* sin (getdir (vehicle player)),_v * cos (getdir (vehicle player)),.01];
	_v=_v+6;
	sleep 0.12;
};

switch (_line) do
{
	case 1: {nimCat1FX = 0; publicVariable "nimCat1FX"};
	case 2: {nimCat2FX = 0; publicVariable "nimCat2FX"};
	case 3: {nimCat3FX = 0; publicVariable "nimCat3FX"};
	case 4: {nimCat4FX = 0; publicVariable "nimCat4FX"};
	};
// Fade out Blur
_catBlur ppEffectAdjust [0,0,0,0];
_catBlur ppEffectCommit 5;

sleep 3;
switch (_line) do  // Lower JBD
{
	case 1: {[1,0]execVM "\JDG_carrier\scr\sys_catapult_jbd.sqf"; soundOff = "JBD12down"; publicVariable "soundOff";};
	case 2: {[2,0]execVM "\JDG_carrier\scr\sys_catapult_jbd.sqf"; soundOff = "JBD12down"; publicVariable "soundOff";};
	case 3: {[3,0]execVM "\JDG_carrier\scr\sys_catapult_jbd.sqf"; soundOff = "JBD34down"; publicVariable "soundOff";};
	case 4: {[4,0]execVM "\JDG_carrier\scr\sys_catapult_jbd.sqf"; soundOff = "JBD34down"; publicVariable "soundOff";};
};

switch (_line) do  // Make catapult available to aircraft again
{
	case 1: {nimCat1Use = 0; publicVariable "nimCat1Use"};
	case 2: {nimCat2Use = 0; publicVariable "nimCat2Use"};
	case 3: {nimCat3Use = 0; publicVariable "nimCat3Use"};
	case 4: {nimCat4Use = 0; publicVariable "nimCat4Use"};
};

sleep 10;
ppEffectDestroy _catBlur;  // Remove blur effect so it can be used again

