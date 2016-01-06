#define CPPFLN(FILENAME) compile preprocessFileLineNumbers FILENAME;
#define CCPPFLN(FILENAME) call compile preprocessFileLineNumbers FILENAME;
#define HT hintSilent
#define HS hintSilent str
#define HF hintSilent format
#define DL diag_log
#define DS diag_log str
#define DF diag_log format
#define GC player globalChat
#define GS player globalChat str
#define GF player globalChat format

#define NEGATIVE                                    -1
#define NULL                                        0
#define POSITIVE                                    1
#define INFINITE                                    -999999999

#define MACHINETYPE_DEDICATED						500
#define MACHINETYPE_LISTENSERVER					501
#define MACHINETYPE_CLIENT							502
#define MACHINETYPE_PURECLIENT						503
#define MACHINETYPE_HEADLESS						504

#define MOCAP_RFL_STROKE_DAMMAGE_MIN                0.30
#define MOCAP_RFL_STROKE_DAMMAGE_MAX                0.35
#define MOCAP_RFL_STROKE_DAMMAGE_ANGLE              40
#define MOCAP_RFL_STROKE_DAMMAGE_DISTANCE           1.75

#define MOCAP_PSTL_STROKE_DAMMAGE_MIN               0.20
#define MOCAP_PSTL_STROKE_DAMMAGE_MAX               0.30
#define MOCAP_PSTL_STROKE_DAMMAGE_ANGLE             40
#define MOCAP_PSTL_STROKE_DAMMAGE_DISTANCE          1.75

#define MOCAP_MG_STROKE_DAMMAGE_MIN                 0.20
#define MOCAP_MG_STROKE_DAMMAGE_MAX                 0.35
#define MOCAP_MG_STROKE_DAMMAGE_ANGLE               40
#define MOCAP_MG_STROKE_DAMMAGE_DISTANCE            1.75

#define MOCAP_RPG_STROKE_DAMMAGE_MIN                0.35
#define MOCAP_RPG_STROKE_DAMMAGE_MAX                0.45
#define MOCAP_RPG_STROKE_DAMMAGE_ANGLE              40
#define MOCAP_RPG_STROKE_DAMMAGE_DISTANCE           1.75

#define MOCAP_NONE_STROKE_DAMMAGE_MIN              0.30
#define MOCAP_NONE_STROKE_DAMMAGE_MAX              0.45
#define MOCAP_NONE_STROKE_DAMMAGE_ANGLE            40
#define MOCAP_NONE_STROKE_DAMMAGE_DISTANCE         1.75

#define MOCAP_MELEE_STROKE_DAMMAGE_MIN              0.2
#define MOCAP_MELEE_STROKE_DAMMAGE_MAX              0.3
#define MOCAP_MELEE_STROKE_DAMMAGE_ANGLE            40
#define MOCAP_MELEE_STROKE_DAMMAGE_DISTANCE         1.75

#define MOCAP_LEGS_PUNCH_DAMMAGE_MIN                0.15
#define MOCAP_LEGS_PUNCH_DAMMAGE_MAX                0.25
#define MOCAP_LEGS_PUNCH_DAMMAGE_ANGLE              25
#define MOCAP_LEGS_PUNCH_DAMMAGE_DISTANCE           1.75
#define MOCAP_LEGS_PUNCH_VELOCITY                   10

#define MOCAP_PREY_UNCON_TIME                       60

#define MOCAP_TARGET_WEAPON_LOOSE_CHANCE            0.35

#define MOCAP_PUNCHTYPE_WEAP_RIFLE                  100
#define MOCAP_PUNCHTYPE_WEAP_PISTOL                 101
#define MOCAP_PUNCHTYPE_WEAP_LAUNCHER               102
#define MOCAP_PUNCHTYPE_WEAP_NONE                   103
#define MOCAP_PUNCHTYPE_WEAP_MELEE             		104

#define MOCAP_PUNCHTYPE_LEG_WEAP_RIFLE              105
#define MOCAP_PUNCHTYPE_LEG_WEAP_PISTOL             106
#define MOCAP_PUNCHTYPE_LEG_WEAP_LAUNCHER           107
#define MOCAP_PUNCHTYPE_LEG_WEAP_NONE               108
#define MOCAP_PUNCHTYPE_LEG_WEAP_MELEE              109

#define MOCAP_BACK_GRAB_DISTANCE                    1.75
#define MOCAP_BACK_GRAB_ANGLE                       35

#define MOCAP_BACK_GRAB_AERC_PERC                   110
#define MOCAP_BACK_GRAB_AKNL_PERC                   111
#define MOCAP_BACK_GRAB_AKNL_PKNL                   112
#define MOCAP_BACK_GRAB_AKNL_PPNE                   113
#define MOCAP_BACK_GRAB_AERC_PPNE                   114
#define MOCAP_BACK_GRAB_AERC_PKNL                   115

#define MOCAP_BACK_GRAB_AERC_PERC_DISTANCE          1.20
#define MOCAP_BACK_GRAB_AKNL_PERC_DISTANCE          1.40
#define MOCAP_BACK_GRAB_AKNL_PKNL_DISTANCE          1.45
#define MOCAP_BACK_GRAB_AKNL_PPNE_DISTANCE          1.2
#define MOCAP_BACK_GRAB_AERC_PPNE_DISTANCE          1.0
#define MOCAP_BACK_GRAB_AERC_PKNL_DISTANCE          0.97

#define MOCAP_PLAYTYPE_PLAYACTION                   200
#define MOCAP_PLAYTYPE_PLAYACTION_NOW               201
#define MOCAP_PLAYTYPE_SWITCHACTION                 202