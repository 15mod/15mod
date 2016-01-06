// TS do not run on dedi
if (isDedicated) exitWith {};
// soundOff == "";
// TS doesn't make sense to check for "" here 
soundOff = "";

while{true}do{
	waitUntil{soundOff != ""};
	switch(soundOff)do
	{
		case "JBD12up": {nimCar2 say "JBDup";};
		case "JBD34up": {nimCar3 say "JBDup";};
		case "JBD12down": {nimCar2 say "JBDdown";};
		case "JBD34down": {nimCar3 say "JBDdown";};
		case "catLaunch": {nimCatJet say "catLaunch";};
		case "trap": {nimCar4 say "trap";};
		case "trapBreak": {nimCar4 say "trapBreak";};
	};
soundOff = "";
sleep 0.2;
};
