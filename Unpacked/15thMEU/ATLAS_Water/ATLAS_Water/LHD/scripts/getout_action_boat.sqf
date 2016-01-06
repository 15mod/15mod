_attached_veh = _this select 0;
_caller = _this select 2;



_gopoint = "hook_1_deck";
_veh = nearestObject [_attached_veh, "ATLAS_LHD_4"];


_caller action ["getout",_attached_veh];
waituntil{_caller == (vehicle _caller)};
_caller attachto [_veh,[0,0,0],_gopoint];
detach _caller;