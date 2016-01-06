Private ["_FA18"];
_FA18 = vehicle player;
If (!Local _FA18) ExitWith {};

CreateDialog "FA18_TARGETING_UI";


disableSerialization;
_ui = uiNamespace getVariable "GPS_TGT_Display"; 
_GPS_TGT_STATUS = _FA18 animationPhase "GPS_TGT_switch"; 
If (_FA18 animationphase "GPS_TGT_switch" > 0.0001) Then {(_ui displayCtrl 5004) ctrlSetText "GPS TGT SET/ACTIVE";} else {(_ui displayCtrl 5004) ctrlSetText "GPS TGT NOT SET/ACTIVE";};
		

		
WaitUntil {!Dialog};
onMapSingleClick "";
Exit;

