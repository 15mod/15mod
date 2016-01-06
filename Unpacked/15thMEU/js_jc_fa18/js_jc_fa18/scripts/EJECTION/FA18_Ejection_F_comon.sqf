_FA18 = _this select 0;			

if ((!isengineon _FA18)) ExitWith {};
if (_FA18 animationphase "rcanopy_hide" > 0.1) ExitWith {};

_FA18 animate ["rcanopy_hide",1];
_Canopy = "JS_JC_FZ_FA18_F_canopy" createvehicle [10,10,1000];
_Canopy attachTo [_FA18,[0.0,0.-1.4,0.9],"actionarea"];

sleep 0.1;

_eject_pitch_bank = _FA18 call BIS_fnc_getPitchBank;
_eject_pitch = _eject_pitch_bank select 0;
_eject_bank = _eject_pitch_bank select 1;
_vector_FA18 = vectordir _FA18;
_velocity_FA18 = velocity _FA18;
_eject_boost = 15;
_eject_pos=_FA18 modeltoworld (_FA18 selectionposition "eject_wso_pos");
_eject_dirpos=_FA18 modeltoworld (_FA18 selectionposition "eject_canopy_dir");
_eject_dirpos=[(_eject_dirpos select 0) - (_eject_pos select 0),(_eject_dirpos select 1) - (_eject_pos select 1),(_eject_dirpos select 2) - (_eject_pos select 2)];
_div=abs(_eject_dirpos select 0)+abs(_eject_dirpos select 1)+abs(_eject_dirpos select 2);
_eject_velocity=[(_eject_dirpos select 0)/_div*_eject_boost,(_eject_dirpos select 1)/_div*_eject_boost,(_eject_dirpos select 2)/_div*_eject_boost];
_velocity_FA18_new=velocity _FA18;
_eject_dirpos=_FA18 modeltoworld (_FA18 selectionposition "eject_wso_dir");
detach _Canopy;
_Canopy setpos _eject_dirpos;
[_Canopy, _eject_pitch, _eject_bank] call BIS_fnc_setPitchBank;
_Canopy setvelocity [(_eject_velocity select 0) + (_velocity_FA18_new select 0),(_eject_velocity select 1) + (_velocity_FA18_new select 1),(_eject_velocity select 2) + (_velocity_FA18_new select 2)];

_FA18 animate ["auxtank_switch",0];
_FA18 setfuel 0;

sleep 10;

WaitUntil {((getpos _Canopy) select 2) <=5};
sleep 5;
deletevehicle _Canopy;

Exit;
	