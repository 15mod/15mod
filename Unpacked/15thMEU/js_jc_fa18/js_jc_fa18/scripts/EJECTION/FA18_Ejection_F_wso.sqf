_WSO = _this select 0;	
_FA18 = vehicle _WSO;	

_FA18 animate ["ejection_seat_wso_hide",1];
_Ejection_Seat_wso = "JS_JC_FA18ejection_seat" createvehicle [5,5,1000];
_Ejection_Seat_wso attachTo [_FA18,[0.0,-1.98,0.06],"actionarea"];
_FA18 lock 0;

_FA18 setVelocity [(velocity _FA18 select 0)+1,(velocity _FA18 select 1)*1.0,(velocity _FA18 select 2)*1.0];
moveOut _WSO;
WaitUntil {vehicle _WSO != _FA18};
sleep 0.01;
_WSO moveindriver _Ejection_Seat_wso;
WaitUntil {vehicle _WSO == _Ejection_Seat_wso};
_Ejection_Seat_wso lock 2;

_eject_pitch_bank = _FA18 call BIS_fnc_getPitchBank;
_eject_pitch = _eject_pitch_bank select 0;
_eject_bank = _eject_pitch_bank select 1;
_vector_FA18 = vectordir _FA18;
_velocity_FA18 = velocity _FA18;
_eject_boost = 36;
_eject_pos=_FA18 modeltoworld (_FA18 selectionposition "eject_wso_pos");
_eject_dirpos=_FA18 modeltoworld (_FA18 selectionposition "eject_wso_dir");
_eject_dirpos=[(_eject_dirpos select 0) - (_eject_pos select 0),(_eject_dirpos select 1) - (_eject_pos select 1),(_eject_dirpos select 2) - (_eject_pos select 2)];
_div=abs(_eject_dirpos select 0)+abs(_eject_dirpos select 1)+abs(_eject_dirpos select 2);
_eject_velocity=[(_eject_dirpos select 0)/_div*_eject_boost,(_eject_dirpos select 1)/_div*_eject_boost,(_eject_dirpos select 2)/_div*_eject_boost];
_velocity_FA18_new=velocity _FA18;
_eject_dirpos=_FA18 modeltoworld (_FA18 selectionposition "eject_wso_dir");
[_FA18, _Ejection_Seat_wso] spawn JS_JC_fnc_FA18_FX_ejection;
detach _Ejection_Seat_wso;
_Ejection_Seat_wso setpos _eject_dirpos;
[_Ejection_Seat_wso, _eject_pitch, _eject_bank] call BIS_fnc_setPitchBank;
_Ejection_Seat_wso setvelocity [(_eject_velocity select 0) + (_velocity_FA18_new select 0),(_eject_velocity select 1) + (_velocity_FA18_new select 1),(_eject_velocity select 2) + (_velocity_FA18_new select 2)];


sleep 1.0;

while {true} do 
{

	_PosEjection_Seat_wso = getpos _Ejection_Seat_wso;
	If ((_PosEjection_Seat_wso select 2) <= 300) exitWith {};
	sleep 0.5;
			
};

_Ejection_Seat_wso lock 0;
_eject_pitch_bank = _Ejection_Seat_wso call BIS_fnc_getPitchBank;
_eject_pitch = _eject_pitch_bank select 0;
_eject_bank = _eject_pitch_bank select 1;
_Ejection_Seat_wso setvelocity [1,1,1];
moveOut _WSO;
WaitUntil {vehicle _WSO != _Ejection_Seat_wso};
_Parachute_wso = "Steerable_Parachute_F" createvehicle getpos _WSO;
_Parachute_wso setdir (getdir _WSO);
_Parachute_wso setpos  (getpos _WSO);
[_Parachute_wso, _eject_pitch, _eject_bank] call BIS_fnc_setPitchBank;
_WSO moveindriver _Parachute_wso;
_Ejection_Seat_wso lock 2;
_FA18 lock 2;

sleep 10;
WaitUntil {((getpos _Ejection_Seat_wso) select 2) <=5};
sleep 5;
deletevehicle _Ejection_Seat_wso;



Exit;
	