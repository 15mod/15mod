_veh = _this select 3;
_attached_veh = _this select 0;
_id = _this select 2;

_veh removeaction _id;

null = [_veh,"hook_1","down",-7,_attached_veh]execVM "ATLAS_Water\LHD\scripts\attach_detach.sqf";