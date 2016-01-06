_FA18 = _this select 0;	
_Pilot = driver _FA18;

if (_FA18 animationphase "eject_switch" > 0.01) ExitWith {};
_FA18 animate ["eject_switch",1];

_FA18 animate ["rcanopy_hide",1];
_FA18 animate ["ejection_seat_hide",1];
_Canopy = "JS_JC_FZ_FA18_E_canopy" createvehicle [0,0,1000];
_Canopy attachTo [_FA18,[0.0,0.-0.7,0.8],"actionarea"];
_Ejection_Seat = "JS_JC_FA18ejection_seat" createvehicle [0,0,1000];
_Ejection_Seat attachTo [_FA18,[0.0,-0.3,-0.06],"actionarea"];

sleep 0.1;

_eject_pitch_bank = _FA18 call BIS_fnc_getPitchBank;
_eject_pitch = _eject_pitch_bank select 0;
_eject_bank = _eject_pitch_bank select 1;
_vector_FA18 = vectordir _FA18;
_velocity_FA18 = velocity _FA18;
_eject_boost = 15;
_eject_pos=_FA18 modeltoworld (_FA18 selectionposition "eject_pos");
_eject_dirpos=_FA18 modeltoworld (_FA18 selectionposition "eject_canopy_dir");
_eject_dirpos=[(_eject_dirpos select 0) - (_eject_pos select 0),(_eject_dirpos select 1) - (_eject_pos select 1),(_eject_dirpos select 2) - (_eject_pos select 2)];
_div=abs(_eject_dirpos select 0)+abs(_eject_dirpos select 1)+abs(_eject_dirpos select 2);
_eject_velocity=[(_eject_dirpos select 0)/_div*_eject_boost,(_eject_dirpos select 1)/_div*_eject_boost,(_eject_dirpos select 2)/_div*_eject_boost];
_velocity_FA18_new=velocity _FA18;
_eject_dirpos=_FA18 modeltoworld (_FA18 selectionposition "eject_dir");
detach _Canopy;
_Canopy setpos _eject_dirpos;
[_Canopy, _eject_pitch, _eject_bank] call BIS_fnc_setPitchBank;
_Canopy setvelocity [(_eject_velocity select 0) + (_velocity_FA18_new select 0),(_eject_velocity select 1) + (_velocity_FA18_new select 1),(_eject_velocity select 2) + (_velocity_FA18_new select 2)];

sleep 0.5;

_FA18 setVelocity [(velocity _FA18 select 0)+1,(velocity _FA18 select 1)*1.0,(velocity _FA18 select 2)*1.0];
unassignVehicle _Pilot;
moveOut _Pilot;
WaitUntil {vehicle _Pilot != _FA18};
_Pilot moveindriver _Ejection_Seat;
WaitUntil {vehicle _Pilot == _Ejection_Seat};
_Ejection_Seat lock 2;

_eject_pitch_bank = _FA18 call BIS_fnc_getPitchBank;
_eject_pitch = _eject_pitch_bank select 0;
_eject_bank = _eject_pitch_bank select 1;
_vector_FA18 = vectordir _FA18;
_velocity_FA18 = velocity _FA18;
_eject_boost = 35;
_eject_pos=_FA18 modeltoworld (_FA18 selectionposition "eject_pos");
_eject_dirpos=_FA18 modeltoworld (_FA18 selectionposition "eject_dir");
_eject_dirpos=[(_eject_dirpos select 0) - (_eject_pos select 0),(_eject_dirpos select 1) - (_eject_pos select 1),(_eject_dirpos select 2) - (_eject_pos select 2)];
_div=abs(_eject_dirpos select 0)+abs(_eject_dirpos select 1)+abs(_eject_dirpos select 2);
_eject_velocity=[(_eject_dirpos select 0)/_div*_eject_boost,(_eject_dirpos select 1)/_div*_eject_boost,(_eject_dirpos select 2)/_div*_eject_boost];
_velocity_FA18_new=velocity _FA18;
_eject_dirpos=_FA18 modeltoworld (_FA18 selectionposition "eject_dir");
[_FA18, _Ejection_Seat] spawn JS_JC_fnc_FA18_FX_ejection;
detach _Ejection_Seat;
_Ejection_Seat setpos _eject_dirpos;
[_Ejection_Seat, _eject_pitch, _eject_bank] call BIS_fnc_setPitchBank;
_Ejection_Seat setvelocity [(_eject_velocity select 0) + (_velocity_FA18_new select 0),(_eject_velocity select 1) + (_velocity_FA18_new select 1),(_eject_velocity select 2) + (_velocity_FA18_new select 2)];

sleep 1.0;

while {(alive _Pilot)} do 
{
	_PosEjection_Seat = getpos _Ejection_Seat;
	If ((_PosEjection_Seat select 2) <= 300) exitWith {};
	sleep 0.5;
			
};

_Ejection_Seat lock 0;
_eject_pitch_bank = _Ejection_Seat call BIS_fnc_getPitchBank;
_eject_pitch = _eject_pitch_bank select 0;
_eject_bank = _eject_pitch_bank select 1;
_Ejection_Seat setvelocity [1,1,1];
moveOut _Pilot;
WaitUntil {vehicle _Pilot != _Ejection_Seat};

_Parachute = "Steerable_Parachute_F" createvehicle getpos _Pilot;
_Parachute setdir (getdir _Pilot);
_Parachute setpos  (getpos _Pilot);
[_Parachute, _eject_pitch, _eject_bank] call BIS_fnc_setPitchBank;
_Pilot moveindriver _Parachute;
_FA18 animate ["auxtank_switch",0];
_FA18 setfuel 0;
_Ejection_Seat lock 2;
_FA18 lock 2;


sleep 10;

WaitUntil {((getpos _Ejection_Seat) select 2) <=5};
sleep 5;
deletevehicle _Canopy;
deletevehicle _Ejection_Seat;



Exit;
	