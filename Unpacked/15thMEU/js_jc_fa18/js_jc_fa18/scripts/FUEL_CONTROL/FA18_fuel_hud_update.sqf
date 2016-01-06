//script to simulate fuel usage with external fuel tanks fitted
//by default this feature is turned off
//to enable this feature in missions init put: FA18_FUEL_CONTROL = True;
//created by John_Spartan
//
//External fuel is calculated based on animation state "auxtank_switch"
//0 = no external fuel
//1 = all 5 auxilary tanks equipped and full
//This loop is responsible for additional HUD icons to visualy display external tank status on HUD

private ["_FA18","_ui","_Internal_fuel", "_External_fuel","_ui_External_fuel_progress"];
sleep 0.5;
_FA18 = _this select 0;


while {(alive _FA18)} do 
{
	if ((player == driver _FA18) or (player == gunner _FA18))

	then 
	{
		disableSerialization;
		_ui = uiNamespace getVariable "HUD"; 
		_External_fuel = _FA18 animationPhase "auxtank_switch"; 
		_ui_External_fuel_progress = _ui displayctrl 9910;

		_ui_External_fuel_progress progressSetPosition _External_fuel;
	
		If (_FA18 animationphase "ab_switch" > 0.0001) Then {(_ui displayCtrl 9908) ctrlSetText "js_jc_fa18\ui\FA18_Toggles_AfterBurner_ON_ca.paa";} else {(_ui displayCtrl 9908) ctrlSetText "js_jc_fa18\ui\FA18_Toggles_clear_ca.paa";};
		If (_FA18 animationphase "tailhook" > 0.0001) Then {(_ui displayCtrl 9907) ctrlSetText "js_jc_fa18\ui\FA18_Toggles_TailHook_ON_ca.paa";} else {(_ui displayCtrl 9907) ctrlSetText "js_jc_fa18\ui\FA18_Toggles_clear_ca.paa";};
	};
	
	sleep 0.5;	
};

Exit;