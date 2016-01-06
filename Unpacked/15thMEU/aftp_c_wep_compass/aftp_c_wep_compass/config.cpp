/*
		MADE FOR ARMA FANS TEAM POLAND
		greetings bitches!! ;-)
		-------------------------------------
		skoro to otworzyłeś to zdychaj kurwo !
		-------------------------------------
*/
class CfgPatches {
	class aftp_c_wep_compass {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {A3_UI_F, "A3_Functions_F", "A3_UIFonts_F", "A3_Data_F"};
	};
};

class RscObject;	// External class reference
class RscMapControl;	// External class reference
class RscPicture;	// External class reference
class RscText;	// External class reference

class RscCompass : RscObject {
	model = "\aftp_m_wep_compass\compass.p3d";
	direction[] = {0, 0.5, 0.5};
	up[] = {0, 1, 0};
	scale = (0.35 * 2.85);
	positionBack[] = {0, -0.02, 0.075};
};