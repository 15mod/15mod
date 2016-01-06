Private ["_FA18"];
_FA18 = vehicle player;
_FA18_PILOT = driver _FA18;
_FA18_WSO = gunner _FA18;
If (!Local _FA18) ExitWith {};

If (_FA18 animationphase "GPS_TGT_switch" > 0.01) exitWith {if ((player == _FA18_PILOT) or (player == _FA18_WSO)) then {titleText ["\n \n GPS/INS target is SET/ACTIVE, \n clear the previuos taget first...", "PLAIN DOWN",1];};};
sleep 0.01;
_FA18 animate ["GPS_TGT_switch",1];

target_marker = createMarkerLocal ["GPS_marker",[0,0]]; 
target_marker setMarkerColorLocal "colorBlack";
target_marker setMarkerShapeLocal "icon";
target_marker setMarkerSizeLocal [1,1];
target_marker setMarkerTypeLocal "mil_destroy";
target_marker setMarkerTextLocal "GPS/INS TGT POS";
target_marker setMarkerAlphaLocal 0;

mapclick = false;
onMapSingleClick "target_marker setMarkerPosLocal _pos; clickpos = _pos; mapclick = true; target_marker setMarkerAlphaLocal 1;";

waituntil {mapclick};
_target_pos = clickpos;
_target = "JS_JC_FA18_GPSTarget" createVehicleLocal _target_pos;

sleep 0.5;
_target setPos _target_pos;
onMapSingleClick "";

disableSerialization;
_ui = uiNamespace getVariable "GPS_TGT_Display"; 
(_ui displayCtrl 5004) ctrlSetText "GPS TGT SET/ACTIVE";

while {(_FA18 animationphase "GPS_TGT_CLEAR_switch" < 0.01) and (alive _FA18)} do 
{

	if ((currentweapon _FA18 == "js_w_fa18_GBU38BombLauncher") or (currentweapon _FA18 == "js_w_fa18_GBU32BombLauncher") or (currentweapon _FA18 == "js_w_fa18_GBU31BombLauncher")) then {_target hideObject false} else {_target hideObject true};
	
	sleep 0.1;
};

deleteVehicle _target;
deleteMarkerLocal target_marker;
_FA18 animate ["GPS_TGT_switch",0];
(_ui displayCtrl 5004) ctrlSetText "GPS TGT NOT SET/ACTIVE";
Exit;














