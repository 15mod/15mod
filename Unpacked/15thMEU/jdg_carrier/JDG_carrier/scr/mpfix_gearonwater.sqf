while{true} do {
	
sleep 120;
_cleanuparray = nearestObjects [nimspots, ["WeaponHolder"], 300];
{
deleteVehicle _x; sleep 0.25;
} forEach _cleanuparray;

};