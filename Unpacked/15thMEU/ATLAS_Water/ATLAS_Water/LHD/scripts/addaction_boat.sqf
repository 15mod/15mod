_veh = _this select 0;
_attached_veh = _this select 1;
_gopoint = _this select 2;
_animpart = _this select 3;


_GO_EH = _attached_veh addEventHandler ["GetOut",{_this exec "ATLAS_Water\LHD\scripts\getout_action_boat.sqf"}];
_actionid = _attached_Veh addaction ["Lower Winch","ATLAS_Water\LHD\scripts\attach_detach_pre.sqf",_veh,0,true,true,"","driver  _target == _this"];

waituntil{(count attachedObjects _veh == 0) || !alive _attached_veh || _veh animationphase _animpart != 0};
if(!alive _attached_veh)then{detach _attached_Veh};
_attached_veh removeEventhandler ["GetOut",_GO_EH];
_attached_veh removeaction _actionid;
