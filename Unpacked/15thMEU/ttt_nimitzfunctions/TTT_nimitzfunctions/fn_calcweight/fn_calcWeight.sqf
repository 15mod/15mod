#define VLAUNCH 60

// Based on a script provided by Yanko, modified by TeTeT

// Yanko: Añadido calculo de peso y corrección de velocidad de lanzamiento en función del peso real
// check ENG: Added weight computation and catapult launch speed correction based on actual weight
_plane = [_this, 0, ObjNull] call BIS_fnc_param;

// kind of a hack here, only F/A-18 are supported as of now
if ((_plane isKindOf "JS_JC_FA18E") or (_plane isKindOf "JS_JC_FA18F") or (_plane isKindOf "JS_S_FA18X")) then {
	// support for F/A-18 by Yanko
	// this would better be refactored to calculate the weight right away instead of counting the
	// munition first. Also a switch/case statement looks more appropriate here

	// check ENG:Weapons associated with the plane
	_loadout = magazines _plane; //Armas asociadas al avión
	_emptyWeight = 14552;// Empty Weight
	_MTOW = 29937;// Maximum Take-off Weight
	// check ENG: Internal Tank Fuel Weight where a full tank holds 6354Kgs of fuel
	_internalFuel = (fuel _plane) * 6354; // Tanque lleno = 6354kgs
	// check ENG: Up to 5 External Tanks each holding 1476.2kgs of fuel
	_externalFuel = 1476.2; //Max 5 tanques, cada tanque : 1476.2kgs x 5 = 7381
	// Check Weight for each weapon type
	_SideWinder = 85.3;
	_aMRAAM = 152;
	_maverick = 304;
	_gBU12 = 225;
	_gBU31 = 900;
	_gBU32 = 450;
	_gBU38 = 225;
	_aNASQ = 191;//Weight for the AN-ASQ sensor pod
	_hARPON = 519;

	// check Counters for weapons and fuel tanks
	_quantity_FuelExt = 0;
	_quantity_Side = 0;
	_quantity_AMRAAM = 0;
	_quantity_Maverick = 0;
	_quantity_GBU12 = 0;
	_quantity_GBU31 = 0;
	_quantity_GBU32 = 0;
	_quantity_GBU38 = 0;
	_quantity_ANASQ = 0;
	_quantity_HARPON = 0;
	_quantity_TanksExt = 0;// Counter for Ext Tanks
	_quantity_ANQ = 0;//ANQ sensor: 0=Not equipped 1=Equipped
	{ // En este loop comprobamos de que tipo es cada arma y si sumamos uno al contador de cada tipo
	// Check ENG: This loop adds +1 to each counter that matches
		if ( _x == "js_m_fa18x_aim9x_x1" ) then {_quantity_Side = _quantity_Side + 1 };
		if ( _x == "js_m_fa18x_aim120c_x1" ) then {_quantity_AMRAAM = _quantity_AMRAAM + 1 };
		if ( _x == "js_m_fa18x_Maverick_x1" ) then {_quantity_Maverick = _quantity_Maverick + 1};
		if ( _x == "js_m_fa18x_Harpoon_x1" )	then {_quantity_HARPON = _quantity_HARPON + 1 };
		if ( _x == "js_m_fa18x_GBU12_x1" ) then { _quantity_GBU12 = _quantity_GBU12 + 1 };
		if ( _x == "js_m_fa18x_GBU31_JDAM_x1" ) then { _quantity_GBU31 = _quantity_GBU31 + 1 };
		if ( _x == "js_m_fa18x_GBU32_JDAM_x1" ) then { _quantity_GBU32 = _quantity_GBU32 + 1 };
		if ( _x == "js_m_fa18x_GBU38_JDAM_x1" ) then { _quantity_GBU38 = _quantity_GBU38 + 1 };
		if ( _x == "js_m_fa18x_wing_tank_x1" ) then { _quantity_TanksExt = _quantity_TanksExt + 1 };
		if ( _x == "js_m_fa18x_altflir_pod_x1" ) then { _quantity_ANQ = 1 };
		if ( _x == "js_m_fa18_aim9x_x1" ) then {_quantity_Side = _quantity_Side + 1 };
		if ( _x == "js_m_fa18_aim120c_x1" ) then {_quantity_AMRAAM = _quantity_AMRAAM + 1 };
		if ( _x == "js_m_fa18_Maverick_x1" ) then {_quantity_Maverick = _quantity_Maverick + 1};
		if ( _x == "js_m_fa18_Harpoon_x1" )	then {_quantity_HARPON = _quantity_HARPON + 1 };
		if ( _x == "js_m_fa18_GBU12_x1" ) then { _quantity_GBU12 = _quantity_GBU12 + 1 };
		if ( _x == "js_m_fa18_GBU31_JDAM_x1" ) then { _quantity_GBU31 = _quantity_GBU31 + 1 };
		if ( _x == "js_m_fa18_GBU32_JDAM_x1" ) then { _quantity_GBU32 = _quantity_GBU32 + 1 };
		if ( _x == "js_m_fa18_GBU38_JDAM_x1" ) then { _quantity_GBU38 = _quantity_GBU38 + 1 };
		if ( _x == "js_m_fa18_wing_tank_x1" ) then { _quantity_TanksExt = _quantity_TanksExt + 1 };
		if ( _x == "js_m_fa18_altflir_pod_x1" ) then { _quantity_ANQ = 1 };
	} forEach _loadout;

	_actualWeight = _emptyWeight + (_sideWinder*_quantity_Side) + (_aMRAAM*_quantity_AMRAAM) + (_maverick*_quantity_Maverick) + (_hARPON*_quantity_HARPON) + (_gBU12*_quantity_GBU12) + (_gBU31*_quantity_GBU31) + (_gBU32*_quantity_GBU32) + (_gBU38*_quantity_GBU38) + (_quantity_TanksExt*_externalFuel) + _internalFuel;

	_vLaunch = ((( 1 - (_actualWeight - _emptyWeight) / (_MTOW - _emptyWeight)) * 110 ) + 140 ) / 3.6;// Where 140 is the minimum speed and 110 is the interval, 140+110=250 Max speed (empty plane)

	_plane setVariable ["TTT_vLaunch", _vLaunch];
	_plane setVariable ["TTT_tow", _actualWeight];

	[_plane] call Yanko_fnc_showWeightBoard; // Yanko mod : Convert weight to numbers in the SM weight board.

	format["VLaunch: %1",(_vLaunch*3.6)] call BIS_fnc_log;
} else {
	// default value
	_plane setVariable ["TTT_vLaunch", VLAUNCH];
}
