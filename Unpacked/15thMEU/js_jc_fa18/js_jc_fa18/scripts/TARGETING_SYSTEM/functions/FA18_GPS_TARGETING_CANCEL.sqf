Private ["_FA18"];
_FA18 = vehicle player;
_FA18_PILOT = driver _FA18;
_FA18_WSO = gunner _FA18;
If (!Local _FA18) ExitWith {};

_FA18 animate ["GPS_TGT_CLEAR_switch",1];
onMapSingleClick "";

sleep 1;

_FA18 animate ["GPS_TGT_CLEAR_switch",0];
sleep 0.01;
if ((player == _FA18_PILOT) or (player == _FA18_WSO)) then {titleText ["\n \n GPS/INS target is CLEARED, \n set the new GPS/INS target cordinates...", "PLAIN DOWN",1];};

Exit;