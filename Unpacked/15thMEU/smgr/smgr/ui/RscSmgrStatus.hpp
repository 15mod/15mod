class RscSmgrStatus : RscSmgrPage
{
	idc = SMGR_IDC_STATUS;

	class Controls
	{
		class frame : RscSmgrPageFrame {
			text = "DEVICE STATUS";
		};

		class selfTest : RscSmgrNavText {
			x = 0.02*SMGR_PAGE_W;
			y = 1*SMGR_LINE_H;
			w = 0.96*SMGR_PAGE_W;
			h = SMGR_LINE_H;
			text = "SELF TEST : PASS";
		};

		class sat : RscSmgrNavText {
			x = 0.02*SMGR_PAGE_W;
			y = 2*SMGR_LINE_H;
			w = 0.96*SMGR_PAGE_W;
			h = SMGR_LINE_H;
			text = "SAT ACQUIRED : 5/5";
		};

		class power : RscSmgrNavText {
			idc = SMGR_IDC_STATUS_POWER;
			x = 0.02*SMGR_PAGE_W;
			y = 3*SMGR_LINE_H;
			w = 0.96*SMGR_PAGE_W;
			h = SMGR_LINE_H;
			text = "POWER LEFT : XX";
		};
	};
};