// Script by JDog
// Initiates catapult system on Nimitz, allowing aircraft to lock in to the lines and continue the process
// Usage: None, automatic

if (!isServer) exitWith {};

// Set all catapult lines to "available"
nimCat1Use = 0;
nimCat2Use = 0;
nimCat3Use = 0;
nimCat4Use = 0;
publicVariable "nimCat1Use";
publicVariable "nimCat2Use";
publicVariable "nimCat3Use";
publicVariable "nimCat4Use";

while {true} do
{
	_planes = nearestObjects [nimspots, ["Plane"], 100];
		{
		// Check distances to each catapult line
			_distC1 = (_x distance (nimspots modeltoworld (nimspots selectionposition "C1")));
			_distC2 = (_x distance (nimspots modeltoworld (nimspots selectionposition "C2")));
			_distC3 = (_x distance (nimspots modeltoworld (nimspots selectionposition "C3")));
			_distC4 = (_x distance (nimspots modeltoworld (nimspots selectionposition "C4")));
		//Catapult 1
			if ((_x iskindof "plane") and (_distC1 < 10) and (nimCat1Use == 0)) then
			{	
				if (isNil "_actionID") then
				{
					deckCheck = "check";
					publicVariable "deckCheck";
				};
			};
		//Catapult 2	
			if ((_x iskindof "plane") and (_distC2 < 10) and (nimCat2Use == 0)) then
			{	
				if (isNil "_actionID") then
				{
					deckCheck = "check";
					publicVariable "deckCheck";
				};
			};
		//Catapult 3	
			if ((_x iskindof "plane") and (_distC3 < 10) and (nimCat3Use == 0)) then
			{	
				if (isNil "_actionID") then
				{
					deckCheck = "check";
					publicVariable "deckCheck";
				};
			};
		//Catapult 4	
			if ((_x iskindof "plane") and (_distC4 < 10) and (nimCat4Use == 0)) then
			{	
				if (isNil "_actionID") then
				{
					deckCheck = "check";
					publicVariable "deckCheck";
				};
			};
		} forEach _planes;
	sleep 1;
};
