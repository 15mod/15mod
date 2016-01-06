_veh = _this select 0;
_animpart = _this select 1;
_direction = _this select 2;
_animstate = _this select 3;
_attached_veh = _this select 4;


if(_direction == "down")then
{
	_veh animate [_animpart,_animstate];
	waituntil {_veh animationPhase _animpart == _animstate};
	detach _attached_veh;
	sleep 1;
	_veh animate [_animpart,0];
};
if(_direction == "up")then
{
	_veh animate [_animpart,_animstate];
	waituntil {_veh animationPhase _animpart == _animstate};
	
	//vehicle moved too far away from the hook to attach
	if((_attached_veh distance (_veh modeltoworld [(_veh selectionposition 'hook_1')select 0,(_veh selectionposition 'hook_1')select 1,(_veh selectionposition 'hook_1')select 2])) > 5)exitwith{_veh animate [_animpart,0];};
	
	//vehicle is close enough to attach
	_attached_veh attachto [_veh,[0,0,0],_animpart];
	sleep 1;
	_veh animate [_animpart,0];
	waituntil {_veh animationPhase _animpart == 0};
	null = [_veh,_attached_veh,'hook_1_deck',_animpart]execVM "ATLAS_Water\LHD\scripts\addaction_boat.sqf";
};

