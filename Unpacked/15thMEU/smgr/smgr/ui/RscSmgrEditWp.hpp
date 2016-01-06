class RscSmgrEditWp : RscSmgrPage
{
	idc = SMGR_IDC_EDITWP;

	class Controls
	{
		class frame : RscSmgrPageFrame {
			idc = SMGR_IDC_EDITWP_TITLE;
			text = "EDIT WP";
		};

		class name : RscSmgrEditWpLine {
			y = 1*SMGR_LINE_H;
			class Controls {
				class label : RscSmgrEditWpLabel {
					text = "NAME";
				};
				class field : RscSmgrEditWpField {
					idc = SMGR_IDC_EDITWP_NAME;
				};
				class fieldBg : RscSmgrEditWpFieldBg {};
			};
		};
		class pos : RscSmgrEditWpLine {
			y = 2*SMGR_LINE_H;
			class Controls {
				class label : RscSmgrEditWpLabel {
					text = "POS";
				};
				class field : RscSmgrEditWpField {
					idc = SMGR_IDC_EDITWP_POS;
				};
				class fieldBg : RscSmgrEditWpFieldBg {};
			};
		};
		class dist : RscSmgrEditWpLine {
			y = 3*SMGR_LINE_H;
			class Controls {
				class label : RscSmgrEditWpLabel {
					text = "DIST";
				};
				class field : RscSmgrEditWpField {
					idc = SMGR_IDC_EDITWP_DIST;
				};
				class fieldBg : RscSmgrEditWpFieldBg {};
			};
		};
		class az : RscSmgrEditWpLine {
			y = 4*SMGR_LINE_H;
			class Controls {
				class label : RscSmgrEditWpLabel {
					text = "AZM";
				};
				class field : RscSmgrEditWpField {
					idc = SMGR_IDC_EDITWP_AZ;
				};
				class fieldBg : RscSmgrEditWpFieldBg {};
			};
		};

	};
};