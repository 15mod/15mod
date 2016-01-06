_position = _this select 0;
// TS
_boat = nimBoat; // nearestObject [nimCRRCspawn, "Zodiac"];

switch(_position)do{
	case 0 : {player moveInDriver _boat};
	case 1 : {player moveInCargo _boat};
	};
sleep 3;
