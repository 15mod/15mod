// Steam Catapult script by Raddik
// Modified by JDog
// Usage:
// xx=[myJet]execVM "\JDG_carrier\scr\nim_catlaunch.sqf";

_veh = _this select 0;

_v=1;  
while{_v<50}do{    
	(vehicle _veh) setvelocity [_v* sin (getdir (_veh)),_v * cos (getdir (_veh)),.1];
	_v=_v+6;
	sleep 0.12;
};