#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = -1;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<1652> Local_109 = { 0, 4, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	struct<8> Local_1769[32];
	struct<1583> Local_2026 = { 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, -1, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	struct<26> Local_3613 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_3639 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_3660 = 0;
	int iLocal_3661 = 0;
	var uLocal_3662[4] = { 0, 0, 0, 0 };
	int iLocal_3667 = 0;
	bool bLocal_3668 = 0;
	int iLocal_3669 = 0;
	int iLocal_3670 = 0;
	int iLocal_3671 = 0;
	int iLocal_3672 = 0;
	int iLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	bool bLocal_3676 = 0;
	bool bLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	int iLocal_3680 = 0;
	int iLocal_3681 = 0;
	int iLocal_3682 = 0;
	int iLocal_3683 = 0;
	int iLocal_3684 = 0;
	int iLocal_3685 = 0;
	bool bLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	int iLocal_3689 = 0;
	int iLocal_3690 = 0;
	int iLocal_3691 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_3667 = 1;
	func_441();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_433())
		{
			func_429();
		}
		if (Global_1966099)
		{
			Global_1966099 = 0;
			func_429();
		}
		if (Global_2667225.f_2681 && Global_2671449 != 0)
		{
			if (Global_2671449 != 6)
			{
				func_429();
			}
		}
		if (func_428() && unk_0xA829C9A2767AC8EF())
		{
			func_429();
		}
		if ((!func_427(unk_0x9E2D6C50374FCFA9()) && !func_426(unk_0x9E2D6C50374FCFA9())) && !func_425(unk_0x9E2D6C50374FCFA9()))
		{
			func_429();
		}
		if (unk_0x44859561F653DD4E() && !BitTest(Global_4718592.f_34, 7))
		{
			func_429();
		}
		if (func_426(unk_0x9E2D6C50374FCFA9()) && func_421() != func_420())
		{
			if (BitTest(Global_2689235[func_421() /*453*/].f_318.f_4, 1) && unk_0xA829C9A2767AC8EF())
			{
				func_429();
			}
		}
		if (func_426(unk_0x9E2D6C50374FCFA9()) && func_421() != func_420())
		{
			if (Global_2689235[func_421() /*453*/].f_447 != Global_1966109 && unk_0xA829C9A2767AC8EF())
			{
				func_429();
			}
		}
		if (func_426(unk_0x9E2D6C50374FCFA9()) && func_418() != 0)
		{
			func_429();
		}
		if (func_426(unk_0x9E2D6C50374FCFA9()) && func_416(unk_0x9E2D6C50374FCFA9()))
		{
			func_429();
		}
		iVar0 = 0;
		while (iVar0 < Local_2026.f_257)
		{
			if (!func_415())
			{
				if (unk_0xCCDCD6672DAE6835(Local_109.f_1595[iVar0]) && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iVar0]))
				{
					unk_0xBEA5F528349F8F75(Local_109.f_1595[iVar0], 1);
				}
			}
			iVar0++;
		}
		func_86();
		if (func_415())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	func_85();
	func_82();
	func_75();
	iVar0 = 0;
	while (iVar0 < Local_2026.f_257)
	{
		switch (Local_109.f_1520[iVar0])
		{
			case 0:
				if (Global_2788828 != iVar0 && (Global_2788828 != -1 || func_426(unk_0x9E2D6C50374FCFA9())))
				{
					Local_109.f_1560[iVar0] = 1;
					func_74(&(Local_109.f_1[iVar0 /*211*/]));
					func_73(1, iVar0);
				}
				break;
			
			case 1:
				if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar0])))
				{
					if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iVar0]))
					{
						Local_109.f_1590[iVar0] = unk_0x57736A7B8965A88A(Local_109.f_1580[iVar0]);
						if (Local_109.f_1590[iVar0] != -1)
						{
							if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar0]), func_72(), func_71(iVar0), 3))
							{
								if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iVar0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar0]), 2116425869))
								{
									Local_109.f_1580[iVar0] = unk_0x497E09037A63D346(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iVar0]), Local_109.f_1580[iVar0], func_72(), func_68(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x60E9DD146055C13E(Local_109.f_1580[iVar0]);
								}
							}
							else if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iVar0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar0]), 2116425869))
							{
								Local_109.f_1580[iVar0] = unk_0x497E09037A63D346(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iVar0]), Local_109.f_1580[iVar0], func_72(), func_71(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iVar0]);
							}
						}
					}
					else
					{
						unk_0xC31EECA11005273C(Local_109.f_1595[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_109.f_1600[(iVar0 * 4 + iVar1)] != func_420() && Global_2788828 != iVar0) && (Global_2788828 != -1 || func_426(unk_0x9E2D6C50374FCFA9())))
					{
						func_73(2, iVar0);
						Local_109.f_1585[iVar0] = iVar1;
						func_67(&(Local_109.f_1651[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			
			case 2:
				if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar0])))
				{
					if (func_66(&(Local_109.f_1651[iVar0 /*2*/])) && func_65(&(Local_109.f_1651[iVar0 /*2*/]), 2000, 0))
					{
						Local_109.f_1580[iVar0] = unk_0x497E09037A63D346(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, 1, 0, 1065353216, 0, 1065353216);
						unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iVar0]), Local_109.f_1580[iVar0], func_72(), func_64(iVar0, Local_109.f_1585[iVar0]), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0x60E9DD146055C13E(Local_109.f_1580[iVar0]);
						func_63(&(Local_109.f_1651[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	struct<9> Var23;
	
	bVar5 = false;
	if (Local_109.f_1515[iParam0] > 4 && Local_109.f_1515[iParam0] < 9)
	{
		bVar5 = true;
	}
	if ((!func_62(iParam0, bVar5) || Global_2788828 == iParam0) || Local_109.f_1530[iParam0])
	{
		Local_109.f_1530[iParam0] = 1;
		func_61(iParam0);
		return;
	}
	if (unk_0xCCDCD6672DAE6835(Local_109.f_1595[iParam0]))
	{
		if (!unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
		{
			Local_109.f_1540[iParam0] = 0;
			unk_0xC31EECA11005273C(Local_109.f_1595[iParam0]);
		}
		else if (!Local_109.f_1540[iParam0])
		{
			unk_0xBEA5F528349F8F75(Local_109.f_1595[iParam0], 0);
			Local_109.f_1540[iParam0] = 1;
		}
	}
	Local_109.f_1590[iParam0] = unk_0x57736A7B8965A88A(Local_109.f_1580[iParam0]);
	switch (Local_109.f_1515[iParam0])
	{
		case 0:
			func_60(1, iParam0);
			break;
		
		case 1:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_109.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (Local_1769[iVar2 /*8*/] != 0 || Local_1769[iVar2 /*8*/].f_5 != 0)
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				func_59(&(Local_109.f_1[iParam0 /*211*/]));
				func_60(2, iParam0);
			}
			break;
		
		case 2:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_109.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (!BitTest(Local_1769[iVar2 /*8*/].f_5, 0))
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				if ((unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]))) && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
				{
					Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_57(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
					func_47(4, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1);
				}
				func_60(3, iParam0);
			}
			break;
		
		case 3:
			bVar1 = true;
			if ((unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]))) && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
			{
				if ((Local_109.f_1590[iParam0] != -1 && unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_57(iParam0), 3)) && ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869)))
				{
					Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
					unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
				}
			}
			if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
			{
				if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
				{
					if (Local_109.f_1590[iParam0] != -1)
					{
						if (Local_109.f_1570[iParam0] == 1)
						{
							if (((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869)) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_72(), func_46(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
							}
						}
						else if (((unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_72(), func_46(iParam0, 0), 3) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_72(), func_46(iParam0, 1), 3)) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_72(), func_46(iParam0, 2), 3)) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_72(), func_46(iParam0, 3), 3))
						{
							Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_72(), func_45(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
						}
						else if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
						{
							if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_72(), func_68(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
							}
						}
						else if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
						{
							Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
							unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
						}
					}
				}
				else
				{
					unk_0xC31EECA11005273C(Local_109.f_1595[iParam0]);
				}
			}
			if (!func_66(&(Local_109.f_1642[iParam0 /*2*/])))
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_109.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (BitTest(Local_1769[iVar2 /*8*/], 15))
						{
							func_67(&(Local_109.f_1642[iParam0 /*2*/]), 0, 0);
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_109.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (!BitTest(Local_1769[iVar2 /*8*/], 15) && !BitTest(Local_1769[iVar2 /*8*/], 16))
						{
							bVar1 = false;
						}
						else
						{
							iVar6++;
						}
					}
					iVar3++;
				}
				if (iVar6 > 0)
				{
					if (bVar1)
					{
						func_63(&(Local_109.f_1642[iParam0 /*2*/]));
						func_47(16, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1);
						func_60(4, iParam0);
					}
					else if (func_65(&(Local_109.f_1642[iParam0 /*2*/]), 15000, 0))
					{
						if (!func_44(iParam0, 22))
						{
							if (func_47(14, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1))
							{
								func_43(iParam0, 22);
							}
						}
					}
				}
				else
				{
					func_63(&(Local_109.f_1642[iParam0 /*2*/]));
				}
			}
			break;
		
		case 4:
			func_36(iParam0);
			break;
		
		case 5:
			if (func_35(Local_109.f_846[iParam0 /*13*/][1]) == 10 || func_35(Local_109.f_846[iParam0 /*13*/][1]) == 11)
			{
				if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
				{
					if (func_34(&(Local_109.f_846[iParam0 /*13*/]), 0) == 21)
					{
						if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_33(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
							}
							else if (((Local_109.f_1590[iParam0] == -1 || unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
							{
								unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
								func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 0), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
								func_29(iParam0);
								func_60(9, iParam0);
							}
							else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
							{
								Local_109.f_1525[iParam0] = 1;
							}
						}
					}
					else if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
					{
						if (!BitTest(Local_109.f_1555[iParam0], 12))
						{
							Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_28(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
							unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
							unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
						}
						else if (((Local_109.f_1590[iParam0] == -1 || unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
						{
							unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
							func_63(&(Local_109.f_1633[iParam0 /*2*/]));
							Local_109.f_1535[iParam0] = 0;
							func_60(6, iParam0);
						}
					}
				}
				else
				{
					func_63(&(Local_109.f_1633[iParam0 /*2*/]));
					Local_109.f_1535[iParam0] = 0;
					func_60(6, iParam0);
				}
			}
			else
			{
				func_63(&(Local_109.f_1633[iParam0 /*2*/]));
				Local_109.f_1535[iParam0] = 0;
				func_60(6, iParam0);
			}
			break;
		
		case 6:
			iVar3 = (iParam0 * 4 + Local_109.f_1575[iParam0]);
			bVar4 = Local_109.f_1600[iVar3];
			if (Local_109.f_1575[iParam0] < 4)
			{
				if ((bVar4 != func_420() && BitTest(Local_1769[bVar4 /*8*/], 15)) && !((!BitTest(Local_1769[bVar4 /*8*/], 14) && func_27(&(Local_109.f_899[bVar4 /*9*/])) == 21) && Local_109.f_899[bVar4 /*9*/].f_8 == 2))
				{
					if ((unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]))) && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
					{
						if (!BitTest(Local_109.f_1555[iParam0], (0 + Local_109.f_1575[iParam0] * 3)))
						{
							if (((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869)) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_26(iParam0, Local_109.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), (0 + Local_109.f_1575[iParam0] * 3));
							}
						}
						else if (!BitTest(Local_109.f_1555[iParam0], (1 + Local_109.f_1575[iParam0] * 3)))
						{
							if ((Local_109.f_1590[iParam0] != -1 && ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))) && unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_26(iParam0, Local_109.f_1575[iParam0], bVar4), 3))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), (1 + Local_109.f_1575[iParam0] * 3));
							}
						}
						if (BitTest(Local_1769[bVar4 /*8*/], 14) && (BitTest(Local_1769[bVar4 /*8*/], 13) || BitTest(Local_1769[bVar4 /*8*/], 11)))
						{
							if (((((((unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 0, 1), 3) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 1, 1), 3)) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 2, 1), 3)) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 3, 1), 3)) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 0, 0), 3)) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 1, 0), 3)) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 2, 0), 3)) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 3, 0), 3))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								func_23(iParam0);
								unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), (1 + Local_109.f_1575[iParam0] * 3));
							}
						}
						if (((unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_25(iParam0, 0, bVar4, 0), 3) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_25(iParam0, 1, bVar4, 0), 3)) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_25(iParam0, 2, bVar4, 0), 3)) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_25(iParam0, 3, bVar4, 0), 3))
						{
							if (!func_66(&(Local_109.f_1633[iParam0 /*2*/])))
							{
								func_67(&(Local_109.f_1633[iParam0 /*2*/]), 0, 0);
							}
							else if (func_65(&(Local_109.f_1633[iParam0 /*2*/]), 20000, 0))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
							}
						}
						else
						{
							func_63(&(Local_109.f_1633[iParam0 /*2*/]));
						}
					}
					if (BitTest(Local_109.f_1555[iParam0], (1 + Local_109.f_1575[iParam0] * 3)))
					{
						if ((BitTest(Local_1769[bVar4 /*8*/], 14) && !BitTest(Local_1769[bVar4 /*8*/], 13)) && !(BitTest(Local_1769[bVar4 /*8*/], 11) && Local_109.f_1188[bVar4 /*9*/].f_8 > 2))
						{
							if (!BitTest(Local_109.f_1565[iParam0], bVar4))
							{
								if (!BitTest(Local_109.f_1555[iParam0], 12))
								{
									if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
									{
										if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
										{
											Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_22(iParam0, Local_109.f_1575[iParam0]), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
											Local_109.f_1535[iParam0] = 0;
											func_15(func_21(iParam0, 0, Local_109.f_1575[iParam0], 1), Local_109.f_899[bVar4 /*9*/][1], 0, 0);
											unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_109.f_1590[iParam0] != -1 && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
								{
									fVar7 = unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]);
									if ((fVar7 >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
									{
										if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
										{
											if (Local_109.f_899[bVar4 /*9*/].f_8 == 1)
											{
												Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
												unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1148846080, 0);
												unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
												Local_109.f_1535[iParam0] = 1;
												func_15(func_21(iParam0, Local_109.f_899[bVar4 /*9*/].f_8, Local_109.f_1575[iParam0], 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else if (Local_109.f_1188[bVar4 /*9*/].f_8 == 1)
											{
												Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
												unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 1), 4f, -4f, 13, 16, 1148846080, 0);
												unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
												func_15(func_21(iParam0, Local_109.f_1188[bVar4 /*9*/].f_8, Local_109.f_1575[iParam0], 1), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else
											{
												Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
												unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
												unk_0xCED9E32812D6C7C7(&(Local_109.f_1565[iParam0]), bVar4);
												unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
												unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 19);
												if (Local_109.f_899[bVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
													Local_109.f_899[bVar4 /*9*/][1] = uVar0;
													Local_109.f_899[bVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[bVar4 /*9*/])), Local_109.f_899[bVar4 /*9*/].f_8, 0, -1);
												}
												if (Local_109.f_1188[bVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
													Local_109.f_1188[bVar4 /*9*/][1] = uVar0;
													Local_109.f_1188[bVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_1188[bVar4 /*9*/])), Local_109.f_1188[bVar4 /*9*/].f_8, 0, -1);
												}
											}
										}
									}
									else if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 1), 3))
									{
										if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
										{
											Local_109.f_1535[iParam0] = 1;
											if (Local_109.f_1188[bVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
												Local_109.f_1188[bVar4 /*9*/][1] = uVar0;
												Local_109.f_1188[bVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_1188[bVar4 /*9*/])), Local_109.f_1188[bVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 0), 3))
									{
										if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
										{
											if (Local_109.f_899[bVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
												Local_109.f_899[bVar4 /*9*/][1] = uVar0;
												Local_109.f_899[bVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[bVar4 /*9*/])), Local_109.f_899[bVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_22(iParam0, Local_109.f_1575[iParam0]), 3))
									{
										if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), -1345695206))
										{
											if (Local_109.f_899[bVar4 /*9*/].f_8 == 2)
											{
												Local_109.f_0 = Local_109.f_899[bVar4 /*9*/][1];
												Local_109.f_899[bVar4 /*9*/][1] = 0;
												Local_109.f_899[bVar4 /*9*/].f_8 = 1;
											}
										}
										else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
										{
											if (Local_109.f_1188[bVar4 /*9*/].f_8 == 0)
											{
												Local_109.f_1188[bVar4 /*9*/][0] = Local_109.f_0;
												Local_109.f_1188[bVar4 /*9*/].f_8 = 1;
												Local_109.f_899[bVar4 /*9*/][1] = 0;
												Local_109.f_899[bVar4 /*9*/].f_8 = 1;
												unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 19);
											}
											Local_109.f_1535[iParam0] = 1;
										}
									}
								}
							}
							else if (!BitTest(Local_1769[bVar4 /*8*/], 11))
							{
								if ((((func_27(&(Local_109.f_1188[bVar4 /*9*/])) < 21 && !BitTest(Local_1769[bVar4 /*8*/], 13)) && Local_109.f_1188[bVar4 /*9*/].f_8 <= 6) && Local_109.f_1188[bVar4 /*9*/].f_8 > 0) || BitTest(Local_109.f_1555[iParam0], 12))
								{
									if ((((((BitTest(Local_1769[bVar4 /*8*/], 5) && Local_109.f_1188[bVar4 /*9*/].f_8 == 2) || (BitTest(Local_1769[bVar4 /*8*/], 6) && Local_109.f_1188[bVar4 /*9*/].f_8 == 3)) || (BitTest(Local_1769[bVar4 /*8*/], 7) && Local_109.f_1188[bVar4 /*9*/].f_8 == 4)) || (BitTest(Local_1769[bVar4 /*8*/], 8) && Local_109.f_1188[bVar4 /*9*/].f_8 == 5)) || (BitTest(Local_1769[bVar4 /*8*/], 9) && Local_109.f_1188[bVar4 /*9*/].f_8 == 6)) || BitTest(Local_109.f_1555[iParam0], 12))
									{
										if (!BitTest(Local_109.f_1555[iParam0], 12))
										{
											if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
											{
												if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
												{
													Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
													unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1148846080, 0);
													unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
													func_15(func_21(iParam0, Local_109.f_1188[bVar4 /*9*/].f_8, Local_109.f_1575[iParam0], 1), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
													unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
												}
											}
										}
										else if (Local_109.f_1590[iParam0] != -1 && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
										{
											fVar7 = unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]);
											if ((fVar7 >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
											{
												if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
												{
													Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
													unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
													unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
													unk_0xCED9E32812D6C7C7(&(Local_109.f_1565[iParam0]), bVar4);
													if (!BitTest(Local_109.f_1555[iParam0], 19))
													{
														func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
														Local_109.f_1188[bVar4 /*9*/][Local_109.f_1188[bVar4 /*9*/].f_8] = uVar0;
														Local_109.f_1188[bVar4 /*9*/].f_8++;
														func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_1188[bVar4 /*9*/])), Local_109.f_1188[bVar4 /*9*/].f_8, 0, -1);
														unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 19);
													}
													unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
													unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 19);
												}
											}
											else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
											{
												if (!BitTest(Local_109.f_1555[iParam0], 19))
												{
													func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
													Local_109.f_1188[bVar4 /*9*/][Local_109.f_1188[bVar4 /*9*/].f_8] = uVar0;
													Local_109.f_1188[bVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_1188[bVar4 /*9*/])), Local_109.f_1188[bVar4 /*9*/].f_8, 0, -1);
													unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 19);
												}
											}
										}
									}
									else if (!func_44(iParam0, 20))
									{
										if (func_47(2, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_43(iParam0, 20);
										}
									}
									else if (func_65(&(Local_109.f_1642[Local_1769[bVar4 /*8*/].f_4 /*2*/]), 15000, 0))
									{
										if (!func_44(iParam0, 21))
										{
											if (func_47(15, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1))
											{
												func_43(iParam0, 21);
											}
										}
									}
								}
							}
							else if (Local_109.f_1188[bVar4 /*9*/].f_8 == 2 || BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (!BitTest(Local_109.f_1555[iParam0], 12))
								{
									if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
									{
										if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
										{
											Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
											func_15(func_21(iParam0, Local_109.f_1188[bVar4 /*9*/].f_8, Local_109.f_1575[iParam0], 1), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 1);
											unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_109.f_1590[iParam0] != -1 && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
								{
									fVar7 = unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]);
									if ((fVar7 >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
									{
										if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
										{
											Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
											unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
											unk_0xCED9E32812D6C7C7(&(Local_109.f_1565[iParam0]), bVar4);
											if (!BitTest(Local_109.f_1555[iParam0], 19))
											{
												func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
												Local_109.f_1188[bVar4 /*9*/][Local_109.f_1188[bVar4 /*9*/].f_8] = uVar0;
												Local_109.f_1188[bVar4 /*9*/].f_8++;
												unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 19);
												func_23(iParam0);
												func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_1188[bVar4 /*9*/])), Local_109.f_1188[bVar4 /*9*/].f_8, 0, -1);
											}
											unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
											unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 19);
										}
									}
									else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
									{
										if (!BitTest(Local_109.f_1555[iParam0], 19))
										{
											func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
											Local_109.f_1188[bVar4 /*9*/][Local_109.f_1188[bVar4 /*9*/].f_8] = uVar0;
											Local_109.f_1188[bVar4 /*9*/].f_8++;
											unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 19);
											func_23(iParam0);
											func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_1188[bVar4 /*9*/])), Local_109.f_1188[bVar4 /*9*/].f_8, 0, -1);
										}
									}
								}
							}
						}
						else if (!BitTest(Local_1769[bVar4 /*8*/], 10))
						{
							if ((((func_27(&(Local_109.f_899[bVar4 /*9*/])) < 21 && !BitTest(Local_1769[bVar4 /*8*/], 12)) && Local_109.f_899[bVar4 /*9*/].f_8 <= 6) && Local_109.f_899[bVar4 /*9*/].f_8 > 0) || BitTest(Local_109.f_1555[iParam0], 12))
							{
								if ((((((BitTest(Local_1769[bVar4 /*8*/], 0) && Local_109.f_899[bVar4 /*9*/].f_8 == 2) || (BitTest(Local_1769[bVar4 /*8*/], 1) && Local_109.f_899[bVar4 /*9*/].f_8 == 3)) || (BitTest(Local_1769[bVar4 /*8*/], 2) && Local_109.f_899[bVar4 /*9*/].f_8 == 4)) || (BitTest(Local_1769[bVar4 /*8*/], 3) && Local_109.f_899[bVar4 /*9*/].f_8 == 5)) || (BitTest(Local_1769[bVar4 /*8*/], 4) && Local_109.f_899[bVar4 /*9*/].f_8 == 6)) || BitTest(Local_109.f_1555[iParam0], 12))
								{
									if (!BitTest(Local_109.f_1555[iParam0], 12))
									{
										if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
										{
											if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
											{
												Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
												unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1148846080, 0);
												unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
												func_15(func_21(iParam0, Local_109.f_899[bVar4 /*9*/].f_8, Local_109.f_1575[iParam0], 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
												unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
											}
										}
									}
									else if (Local_109.f_1590[iParam0] != -1 && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
									{
										fVar7 = unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]);
										if ((fVar7 >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
										{
											if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
											{
												if (((!BitTest(Local_1769[bVar4 /*8*/], 10) && func_27(&(Local_109.f_899[bVar4 /*9*/])) < 21) && !BitTest(Local_1769[bVar4 /*8*/], 12)) && Local_109.f_899[bVar4 /*9*/].f_8 <= 6)
												{
													Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
													unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
													unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
												}
												unk_0xCED9E32812D6C7C7(&(Local_109.f_1565[iParam0]), bVar4);
												if (!BitTest(Local_109.f_1555[iParam0], 19))
												{
													func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
													Local_109.f_899[bVar4 /*9*/][Local_109.f_899[bVar4 /*9*/].f_8] = uVar0;
													Local_109.f_899[bVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[bVar4 /*9*/])), Local_109.f_899[bVar4 /*9*/].f_8, 0, -1);
													unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 19);
												}
												unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
												unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 19);
											}
										}
										else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
										{
											if (!BitTest(Local_109.f_1555[iParam0], 19))
											{
												func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
												Local_109.f_899[bVar4 /*9*/][Local_109.f_899[bVar4 /*9*/].f_8] = uVar0;
												Local_109.f_899[bVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[bVar4 /*9*/])), Local_109.f_899[bVar4 /*9*/].f_8, 0, -1);
												unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 19);
											}
										}
									}
								}
								else if (!func_44(iParam0, 20))
								{
									if (func_47(2, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1))
									{
										func_43(iParam0, 20);
									}
								}
								else if (func_65(&(Local_109.f_1642[Local_1769[bVar4 /*8*/].f_4 /*2*/]), 15000, 0))
								{
									if (!func_44(iParam0, 21))
									{
										if (func_47(15, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_43(iParam0, 21);
										}
									}
								}
							}
							else if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
								{
									Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_12(iParam0, Local_109.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
									func_23(iParam0);
									Local_109.f_1575[iParam0]++;
									Local_109.f_1535[iParam0] = 0;
									func_63(&(Local_109.f_1633[iParam0 /*2*/]));
									unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
									unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 19);
								}
							}
							else if (Local_109.f_1590[iParam0] != -1 && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
							{
								fVar7 = unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]);
								if ((fVar7 >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_12(iParam0, Local_109.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
									func_23(iParam0);
									Local_109.f_1575[iParam0]++;
									Local_109.f_1535[iParam0] = 0;
									func_63(&(Local_109.f_1633[iParam0 /*2*/]));
									unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
									unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 19);
								}
							}
						}
						else if (Local_109.f_899[bVar4 /*9*/].f_8 == 2 || BitTest(Local_109.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
								{
									if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
									{
										Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1148846080, 0);
										unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
										func_15(func_21(iParam0, Local_109.f_899[bVar4 /*9*/].f_8, Local_109.f_1575[iParam0], 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 1);
										unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
									}
								}
							}
							else if (Local_109.f_1590[iParam0] != -1 && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
							{
								fVar7 = unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]);
								if ((fVar7 >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
									{
										Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_12(iParam0, Local_109.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
										if (!BitTest(Local_109.f_1555[iParam0], 19))
										{
											func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
											Local_109.f_899[bVar4 /*9*/][Local_109.f_899[bVar4 /*9*/].f_8] = uVar0;
											Local_109.f_899[bVar4 /*9*/].f_8++;
											func_23(iParam0);
											func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[bVar4 /*9*/])), Local_109.f_899[bVar4 /*9*/].f_8, 0, -1);
											unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 19);
										}
										unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
										unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 19);
										func_23(iParam0);
										Local_109.f_1575[iParam0]++;
										Local_109.f_1535[iParam0] = 0;
										func_63(&(Local_109.f_1633[iParam0 /*2*/]));
									}
								}
								else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
								{
									if (!BitTest(Local_109.f_1555[iParam0], 19))
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[bVar4 /*9*/][Local_109.f_899[bVar4 /*9*/].f_8] = uVar0;
										Local_109.f_899[bVar4 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[bVar4 /*9*/])), Local_109.f_899[bVar4 /*9*/].f_8, 0, -1);
										unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 19);
									}
								}
							}
						}
					}
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), (0 + Local_109.f_1575[iParam0] * 3));
					unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), (1 + Local_109.f_1575[iParam0] * 3));
					unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), (2 + Local_109.f_1575[iParam0] * 3));
					func_23(iParam0);
					Local_109.f_1575[iParam0]++;
					Local_109.f_1535[iParam0] = 0;
					func_63(&(Local_109.f_1633[iParam0 /*2*/]));
					unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
					unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 19);
				}
			}
			if (Local_109.f_1575[iParam0] >= 4)
			{
				if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
				{
					if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
					{
						if (Local_109.f_1590[iParam0] != -1 && ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869)))
						{
							if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
							{
								unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
								func_60(7, iParam0);
							}
						}
					}
					else
					{
						unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
						func_60(7, iParam0);
					}
				}
				else
				{
					unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
					func_60(7, iParam0);
				}
			}
			break;
		
		case 7:
			if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
			{
				if (!BitTest(Local_109.f_1555[iParam0], 12))
				{
					if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
					{
						Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
						unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_11(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
						unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
						unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
					}
				}
				else if (Local_109.f_1590[iParam0] != -1 && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
				{
					if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
					{
						unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
						unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 19);
						func_23(iParam0);
						func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 0), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
						func_60(8, iParam0);
					}
					else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
					{
						Local_109.f_1525[iParam0] = 1;
					}
				}
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
				unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 19);
				func_23(iParam0);
				func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 0), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
				func_60(8, iParam0);
			}
			break;
		
		case 8:
			Local_109.f_1525[iParam0] = 1;
			iVar9 = 0;
			while (iVar9 < 4)
			{
				iVar3 = (iParam0 * 4 + iVar9);
				bVar4 = Local_109.f_1600[iVar3];
				if (bVar4 != func_420())
				{
					if (((((func_27(&(Local_109.f_899[bVar4 /*9*/])) == 21 && Local_109.f_899[bVar4 /*9*/].f_8 > 2) && Local_109.f_899[bVar4 /*9*/].f_8 < 7) || ((func_27(&(Local_109.f_1188[bVar4 /*9*/])) == 21 && Local_109.f_1188[bVar4 /*9*/].f_8 > 2) && Local_109.f_1188[bVar4 /*9*/].f_8 < 7)) || ((func_27(&(Local_109.f_899[bVar4 /*9*/])) < 21 && Local_109.f_899[bVar4 /*9*/].f_8 >= 2) && Local_109.f_899[bVar4 /*9*/].f_8 < 7)) || ((func_27(&(Local_109.f_1188[bVar4 /*9*/])) < 21 && Local_109.f_1188[bVar4 /*9*/].f_8 >= 2) && Local_109.f_1188[bVar4 /*9*/].f_8 < 7))
					{
						iVar8 = 1;
					}
				}
				iVar9++;
			}
			if (func_34(&(Local_109.f_846[iParam0 /*13*/]), 0) >= 17)
			{
				iVar8 = 0;
			}
			if (iVar8 || BitTest(Local_109.f_1555[iParam0], 12))
			{
				if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
				{
					if (!BitTest(Local_109.f_1555[iParam0], 12))
					{
						if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
						{
							Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_10(iParam0, Local_109.f_846[iParam0 /*13*/].f_12), 4f, -2f, 13, 16, 1148846080, 0);
							unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
							func_15(func_9(iParam0, Local_109.f_846[iParam0 /*13*/].f_12), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 1, 0);
							unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
						}
					}
					else if (Local_109.f_1590[iParam0] != -1 && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
					{
						fVar7 = unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]);
						if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 19))
							{
								func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
								Local_109.f_846[iParam0 /*13*/][Local_109.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_109.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 0), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
								unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 19);
							}
							unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
							unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 19);
						}
						else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 19))
							{
								func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
								Local_109.f_846[iParam0 /*13*/][Local_109.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_109.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 0), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
								unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 19);
							}
						}
					}
				}
			}
			else
			{
				func_29(iParam0);
				func_60(9, iParam0);
			}
			break;
		
		case 9:
			Var10 = 11;
			Var23 = 7;
			func_29(iParam0);
			if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
			{
				if (!BitTest(Local_109.f_1555[iParam0], 13))
				{
					if (!BitTest(Local_109.f_1555[iParam0], 12))
					{
						if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
						{
							Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_72(), func_8(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
							unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
						}
					}
					else if ((Local_109.f_1590[iParam0] != -1 && ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))) && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
					{
						unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
						unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 13);
					}
				}
				else if (!BitTest(Local_109.f_1555[iParam0], 14))
				{
					iVar3 = iParam0 * 4;
					bVar4 = Local_109.f_1600[iVar3];
					if (bVar4 != func_420() && bVar4 > -1)
					{
						if (Local_109.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_109.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
								{
									Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_7(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
									unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
								}
							}
							else if (Local_109.f_1590[iParam0] != -1 && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
							{
								if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
									unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 14);
									Local_109.f_899[bVar4 /*9*/] = { Var23 };
									Local_109.f_1188[bVar4 /*9*/] = { Var23 };
								}
								else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), -1345695206))
								{
									Local_109.f_899[bVar4 /*9*/] = { Var23 };
									Local_109.f_1188[bVar4 /*9*/] = { Var23 };
								}
							}
						}
						else
						{
							unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 14);
						}
					}
					else
					{
						unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 14);
					}
				}
				else if (!BitTest(Local_109.f_1555[iParam0], 15))
				{
					iVar3 = iParam0 * 4 + 1;
					bVar4 = Local_109.f_1600[iVar3];
					if (bVar4 != func_420() && bVar4 > -1)
					{
						if (Local_109.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_109.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
								{
									Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_6(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
									unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
								}
							}
							else if (Local_109.f_1590[iParam0] != -1 && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
							{
								if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
									unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 15);
									Local_109.f_899[bVar4 /*9*/] = { Var23 };
									Local_109.f_1188[bVar4 /*9*/] = { Var23 };
								}
								else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), -1345695206))
								{
									Local_109.f_899[bVar4 /*9*/] = { Var23 };
									Local_109.f_1188[bVar4 /*9*/] = { Var23 };
								}
							}
						}
						else
						{
							unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 15);
						}
					}
					else
					{
						unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 15);
					}
				}
				else if (!BitTest(Local_109.f_1555[iParam0], 16))
				{
					iVar3 = iParam0 * 4 + 2;
					bVar4 = Local_109.f_1600[iVar3];
					if (bVar4 != func_420() && bVar4 > -1)
					{
						if (Local_109.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_109.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
								{
									Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_5(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
									unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
								}
							}
							else if (Local_109.f_1590[iParam0] != -1 && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
							{
								if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
									unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 16);
									Local_109.f_899[bVar4 /*9*/] = { Var23 };
									Local_109.f_1188[bVar4 /*9*/] = { Var23 };
								}
								else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), -1345695206))
								{
									Local_109.f_899[bVar4 /*9*/] = { Var23 };
									Local_109.f_1188[bVar4 /*9*/] = { Var23 };
								}
							}
						}
						else
						{
							unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 16);
						}
					}
					else
					{
						unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 16);
					}
				}
				else if (!BitTest(Local_109.f_1555[iParam0], 17))
				{
					iVar3 = iParam0 * 4 + 3;
					bVar4 = Local_109.f_1600[iVar3];
					if (bVar4 != func_420() && bVar4 > -1)
					{
						if (Local_109.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_109.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
								{
									Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_4(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
									unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
								}
							}
							else if (Local_109.f_1590[iParam0] != -1 && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
							{
								if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
									unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 17);
									Local_109.f_899[bVar4 /*9*/] = { Var23 };
									Local_109.f_1188[bVar4 /*9*/] = { Var23 };
								}
								else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), -1345695206))
								{
									Local_109.f_899[bVar4 /*9*/] = { Var23 };
									Local_109.f_1188[bVar4 /*9*/] = { Var23 };
								}
							}
						}
						else
						{
							unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 17);
						}
					}
					else
					{
						unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 17);
					}
				}
				else if (!BitTest(Local_109.f_1555[iParam0], 18))
				{
					if (Local_109.f_846[iParam0 /*13*/].f_12 > 0 || BitTest(Local_109.f_1555[iParam0], 12))
					{
						if (!BitTest(Local_109.f_1555[iParam0], 12))
						{
							if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_3(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 12);
							}
						}
						else if (Local_109.f_1590[iParam0] != -1 && unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
						{
							if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
							{
								if (Local_109.f_1570[iParam0] == 1)
								{
									Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
									unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_72(), func_46(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								}
								else
								{
									Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
									unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								}
								unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 12);
								unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 18);
								Local_109.f_846[iParam0 /*13*/] = { Var10 };
							}
							else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), -1345695206))
							{
								Local_109.f_846[iParam0 /*13*/] = { Var10 };
							}
						}
					}
					else
					{
						unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), 18);
					}
				}
				else if (!func_66(&(Local_109.f_1642[iParam0 /*2*/])))
				{
					func_67(&(Local_109.f_1642[iParam0 /*2*/]), 0, 0);
				}
				else if (func_65(&(Local_109.f_1642[iParam0 /*2*/]), 1000, 0))
				{
					Local_109.f_1525[iParam0] = 0;
					Local_109.f_1575[iParam0] = 0;
					Local_109.f_1555[iParam0] = 0;
					Local_109.f_1565[iParam0] = 0;
					func_63(&(Local_109.f_1633[iParam0 /*2*/]));
					func_63(&(Local_109.f_1642[iParam0 /*2*/]));
					Local_109.f_1560[iParam0]++;
					func_60(1, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_own_cards_and_remove";
	}
	return "retrieve_own_cards_and_remove";
}

char* func_4(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_04";
	}
	return "retrieve_cards_player_04";
}

char* func_5(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_03";
	}
	return "retrieve_cards_player_03";
}

char* func_6(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_02";
	}
	return "retrieve_cards_player_02";
}

char* func_7(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_01";
	}
	return "retrieve_cards_player_01";
}

char* func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = func_27(&(Local_109.f_846[iParam0 /*13*/]));
	if (Local_109.f_1550[iParam0] >= 7)
	{
		if (iVar0 > 21)
		{
			switch (unk_0x5853B15F78E1A265(0, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				
				case 1:
					return "female_dealer_reaction_good_var02";
				
				case 2:
					return "female_dealer_reaction_good_var03";
				
				default:
			}
		}
		else if (iVar0 == 21)
		{
			switch (unk_0x5853B15F78E1A265(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				
				case 1:
					return "female_dealer_reaction_bad_var02";
				
				case 2:
					return "female_dealer_reaction_bad_var03";
				
				default:
			}
		}
		else
		{
			switch (unk_0x5853B15F78E1A265(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				
				case 1:
					return "female_dealer_reaction_impartial_var02";
				
				case 2:
					return "female_dealer_reaction_impartial_var03";
				}
			
			default:
		}
	}
	else if (iVar0 > 21)
	{
		switch (unk_0x5853B15F78E1A265(0, 3))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			default:
		}
	}
	else if (iVar0 == 21)
	{
		switch (unk_0x5853B15F78E1A265(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			
			default:
		}
	}
	else
	{
		switch (unk_0x5853B15F78E1A265(0, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			}
		
		default:
	}
	return "";
}

int func_9(int iParam0, int iParam1)
{
	return (iParam0 * 11 + iParam1);
}

char* func_10(int iParam0, int iParam1)
{
	if (iParam1 > 8)
	{
		if (Local_109.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_10";
		}
		return "deal_card_self_card_10";
	}
	else if (iParam1 > 4)
	{
		if (Local_109.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_06";
		}
		return "deal_card_self_card_06";
	}
	else
	{
		if (Local_109.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_second_card";
		}
		return "deal_card_self_second_card";
	}
	return "deal_card_self_second_card";
}

char* func_11(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_turn_card";
	}
	return "turn_card";
}

char* func_12(int iParam0, int iParam1, bool bParam2)
{
	if (((bParam2 != func_420() && BitTest(Local_1769[bParam2 /*8*/], 14)) && !BitTest(Local_1769[bParam2 /*8*/], 13)) && !(BitTest(Local_1769[bParam2 /*8*/], 11) && Local_109.f_1188[bParam2 /*9*/].f_8 > 2))
	{
		if (Local_109.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_outro_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_outro_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_outro_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_outro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_outro_split";
				
				case 1:
					return "dealer_focus_player_02_idle_outro_split";
				
				case 2:
					return "dealer_focus_player_03_idle_outro_split";
				
				case 3:
					return "dealer_focus_player_04_idle_outro_split";
				}
			
			default:
		}
	}
	else if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_outro";
			
			case 1:
				return "female_dealer_focus_player_02_idle_outro";
			
			case 2:
				return "female_dealer_focus_player_03_idle_outro";
			
			case 3:
				return "female_dealer_focus_player_04_idle_outro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_outro";
			
			case 1:
				return "dealer_focus_player_02_idle_outro";
			
			case 2:
				return "dealer_focus_player_03_idle_outro";
			
			case 3:
				return "dealer_focus_player_04_idle_outro";
			}
		
		default:
	}
	return "";
}

int func_13(var uParam0, var uParam1)
{
	if (uParam0->f_209 >= uParam0->f_210)
	{
		return 0;
	}
	*uParam1 = (*uParam0)[uParam0->f_209];
	uParam0->f_209++;
	return 1;
}

char* func_14(int iParam0, int iParam1, bool bParam2)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_second_card_player_01";
				
				case 1:
					return "female_hit_second_card_player_02";
				
				case 2:
					return "female_hit_second_card_player_03";
				
				case 3:
					return "female_hit_second_card_player_04";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_card_player_01";
				
				case 1:
					return "female_hit_card_player_02";
				
				case 2:
					return "female_hit_card_player_03";
				
				case 3:
					return "female_hit_card_player_04";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "hit_second_card_player_01";
			
			case 1:
				return "hit_second_card_player_02";
			
			case 2:
				return "hit_second_card_player_03";
			
			case 3:
				return "hit_second_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "hit_card_player_01";
			
			case 1:
				return "hit_card_player_02";
			
			case 2:
				return "hit_card_player_03";
			
			case 3:
				return "hit_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	
	Var0.f_0 = -1261953521;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	unk_0x2700C00F82C16BF0(1, &Var0, 6, func_16(1, 1));
}

var func_16(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(bVar1);
		if (func_20(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, bVar1);
				}
				else if (!func_17(iVar2, 0))
				{
					unk_0xCED9E32812D6C7C7(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1574918;
}

int func_20(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		return (((Local_2026.f_257 * 7 * 4 + iParam0 * 7 * 4) + iParam2 * 7) + iParam1);
	}
	return ((iParam0 * 7 * 4 + iParam2 * 7) + iParam1);
}

char* func_22(int iParam0, int iParam1)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_split_card_player_01";
			
			case 1:
				return "female_split_card_player_02";
			
			case 2:
				return "female_split_card_player_03";
			
			case 3:
				return "female_split_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "split_card_player_01";
			
			case 1:
				return "split_card_player_02";
			
			case 2:
				return "split_card_player_03";
			
			case 3:
				return "split_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_23(int iParam0)
{
	unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 20);
	unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 21);
	unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 22);
	unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 23);
	unk_0xB0550BC91B0159D6(&(Local_109.f_1555[iParam0]), 24);
}

char* func_24(int iParam0, int iParam1, bool bParam2)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_impatient_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_impatient_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient_split";
			
			case 1:
				return "dealer_focus_player_02_idle_impatient_split";
			
			case 2:
				return "dealer_focus_player_03_idle_impatient_split";
			
			case 3:
				return "dealer_focus_player_04_idle_impatient_split";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_split";
			
			case 1:
				return "dealer_focus_player_02_idle_split";
			
			case 2:
				return "dealer_focus_player_03_idle_split";
			
			case 3:
				return "dealer_focus_player_04_idle_split";
			}
		
		default:
	}
	return "";
}

char* func_25(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (((bParam2 != func_420() && BitTest(Local_1769[bParam2 /*8*/], 14)) && !BitTest(Local_1769[bParam2 /*8*/], 13)) && !(BitTest(Local_1769[bParam2 /*8*/], 11) && Local_109.f_1188[bParam2 /*9*/].f_8 > 2))
	{
		if (Local_109.f_1550[iParam0] >= 7)
		{
			if (bParam3)
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_impatient_split";
					
					case 1:
						return "female_dealer_focus_player_02_idle_impatient_split";
					
					case 2:
						return "female_dealer_focus_player_03_idle_impatient_split";
					
					case 3:
						return "female_dealer_focus_player_04_idle_impatient_split";
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_split";
					
					case 1:
						return "female_dealer_focus_player_02_idle_split";
					
					case 2:
						return "female_dealer_focus_player_03_idle_split";
					
					case 3:
						return "female_dealer_focus_player_04_idle_split";
					}
				
				default:
			}
		}
		else if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_impatient_split";
				
				case 1:
					return "dealer_focus_player_02_idle_impatient_split";
				
				case 2:
					return "dealer_focus_player_03_idle_impatient_split";
				
				case 3:
					return "dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_split";
				
				case 1:
					return "dealer_focus_player_02_idle_split";
				
				case 2:
					return "dealer_focus_player_03_idle_split";
				
				case 3:
					return "dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (Local_109.f_1550[iParam0] >= 7)
	{
		if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient";
				
				case 1:
					return "female_dealer_focus_player_02_idle_impatient";
				
				case 2:
					return "female_dealer_focus_player_03_idle_impatient";
				
				case 3:
					return "female_dealer_focus_player_04_idle_impatient";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle";
				
				case 1:
					return "female_dealer_focus_player_02_idle";
				
				case 2:
					return "female_dealer_focus_player_03_idle";
				
				case 3:
					return "female_dealer_focus_player_04_idle";
				}
			
			default:
		}
	}
	else if (bParam3)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient";
			
			case 1:
				return "dealer_focus_player_02_idle_impatient";
			
			case 2:
				return "dealer_focus_player_03_idle_impatient";
			
			case 3:
				return "dealer_focus_player_04_idle_impatient";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle";
			
			case 1:
				return "dealer_focus_player_02_idle";
			
			case 2:
				return "dealer_focus_player_03_idle";
			
			case 3:
				return "dealer_focus_player_04_idle";
			}
		
		default:
	}
	return "";
}

char* func_26(int iParam0, int iParam1, int iParam2)
{
	if (((iParam2 != func_420() && BitTest(Local_1769[iParam2 /*8*/], 14)) && !BitTest(Local_1769[iParam2 /*8*/], 13)) && !(BitTest(Local_1769[iParam2 /*8*/], 11) && Local_109.f_1188[iParam2 /*9*/].f_8 > 2))
	{
		if (Local_109.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_intro_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_intro_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_intro_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_intro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_intro_split";
				
				case 1:
					return "dealer_focus_player_02_idle_intro_split";
				
				case 2:
					return "dealer_focus_player_03_idle_intro_split";
				
				case 3:
					return "dealer_focus_player_04_idle_intro_split";
				}
			
			default:
		}
	}
	else if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_intro";
			
			case 1:
				return "female_dealer_focus_player_02_idle_intro";
			
			case 2:
				return "female_dealer_focus_player_03_idle_intro";
			
			case 3:
				return "female_dealer_focus_player_04_idle_intro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_intro";
			
			case 1:
				return "dealer_focus_player_02_idle_intro";
			
			case 2:
				return "dealer_focus_player_03_idle_intro";
			
			case 3:
				return "dealer_focus_player_04_idle_intro";
			}
		
		default:
	}
	return "";
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iVar3 = func_35((*uParam0)[iVar2]);
		iVar0 = (iVar0 + iVar3);
		if (iVar3 == 11)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

char* func_28(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_check_card";
	}
	return "check_card";
}

void func_29(int iParam0)
{
	if (func_44(iParam0, 23))
	{
		return;
	}
	if (func_44(iParam0, 24))
	{
		if (func_47(13, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1))
		{
			func_43(iParam0, 23);
		}
		return;
	}
	if (func_30(iParam0))
	{
		func_43(iParam0, 24);
	}
	else
	{
		func_43(iParam0, 23);
	}
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (iParam0 * 4 + iVar0);
		iVar2 = Local_109.f_1600[iVar1];
		if (iVar2 == func_420())
		{
		}
		else if (!func_31(&iVar2, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = *iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 1;
	}
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return 1;
	}
	iVar1 = func_34(&(Local_109.f_846[iParam1 /*13*/]), 0);
	iVar2 = Local_109.f_846[iParam1 /*13*/].f_12;
	iVar3 = func_27(&(Local_109.f_899[iVar0 /*9*/]));
	iVar4 = Local_109.f_899[iVar0 /*9*/].f_8;
	iVar5 = func_27(&(Local_109.f_1188[iVar0 /*9*/]));
	iVar6 = Local_109.f_1188[iVar0 /*9*/].f_8;
	if (func_32(iVar1, iVar2, iVar3, iVar4) && func_32(iVar1, iVar2, iVar5, iVar6))
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam3 <= 0)
	{
		return 1;
	}
	bVar0 = (iParam1 == 2 && iParam0 == 21);
	bVar1 = (iParam3 == 2 && iParam2 == 21);
	if (bVar1)
	{
		return 0;
	}
	if (bVar0)
	{
		return 1;
	}
	if (iParam0 > 21)
	{
		return 0;
	}
	if (iParam2 > 21)
	{
		return 1;
	}
	if (iParam3 >= 7)
	{
		return 0;
	}
	if (iParam0 > iParam2)
	{
		return 1;
	}
	return 0;
}

char* func_33(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_check_and_turn_card";
	}
	return "check_and_turn_card";
}

int func_34(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 11)
	{
		if (iParam1 && iVar2 == 0)
		{
		}
		else
		{
			iVar3 = func_35((*uParam0)[iVar2]);
			iVar0 = (iVar0 + iVar3);
			if (iVar3 == 11)
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		
		case 10:
		case 23:
		case 36:
		case 49:
		case 11:
		case 24:
		case 37:
		case 50:
		case 12:
		case 25:
		case 38:
		case 51:
		case 13:
		case 26:
		case 39:
		case 52:
			return 10;
		
		case 1:
		case 14:
		case 27:
		case 40:
			return 11;
		
		default:
	}
	return 0;
}

void func_36(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	switch (Local_109.f_1510[iParam0])
	{
		case 0:
			iVar2 = Local_109.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_1769[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1769[iVar2 /*8*/], 15))
				{
					if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
					{
						if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
						{
							if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_42(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_42(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 0, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][0] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(1, iParam0);
			}
			break;
		
		case 1:
			iVar2 = Local_109.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_1769[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1769[iVar2 /*8*/], 15))
				{
					if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
					{
						if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
						{
							if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_40(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_40(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 1, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][0] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(2, iParam0);
			}
			break;
		
		case 2:
			iVar2 = Local_109.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_1769[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1769[iVar2 /*8*/], 15))
				{
					if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
					{
						if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
						{
							if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_39(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_39(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 2, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][0] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(3, iParam0);
			}
			break;
		
		case 3:
			iVar2 = Local_109.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_1769[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1769[iVar2 /*8*/], 15))
				{
					if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
					{
						if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
						{
							if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_38(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_38(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 3, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][0] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(4, iParam0);
			}
			break;
		
		case 4:
			if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
			{
				if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
				{
					if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_37(iParam0), 3))
					{
						Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
						unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_37(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
						unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
						func_15(func_9(iParam0, 0), 0, 1, 0);
					}
					else if (Local_109.f_1590[iParam0] != -1)
					{
						if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
						{
							bVar1 = true;
							if (Local_109.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
								Local_109.f_846[iParam0 /*13*/][0] = uVar0;
								Local_109.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
							}
						}
						else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
						{
							if (Local_109.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
								Local_109.f_846[iParam0 /*13*/][0] = uVar0;
								Local_109.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
							}
						}
					}
					else
					{
						bVar1 = true;
						if (Local_109.f_846[iParam0 /*13*/].f_12 == 0)
						{
							func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
							Local_109.f_846[iParam0 /*13*/][0] = uVar0;
							Local_109.f_846[iParam0 /*13*/].f_12++;
							func_23(iParam0);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(5, iParam0);
			}
			break;
		
		case 5:
			iVar2 = Local_109.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_1769[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1769[iVar2 /*8*/], 15))
				{
					if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
					{
						if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
						{
							if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_42(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_42(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 0, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][1] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(6, iParam0);
			}
			break;
		
		case 6:
			iVar2 = Local_109.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_1769[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1769[iVar2 /*8*/], 15))
				{
					if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
					{
						if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
						{
							if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_40(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_40(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 1, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][1] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(7, iParam0);
			}
			break;
		
		case 7:
			iVar2 = Local_109.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_1769[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1769[iVar2 /*8*/], 15))
				{
					if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
					{
						if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
						{
							if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_39(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_39(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 2, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][1] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(8, iParam0);
			}
			break;
		
		case 8:
			iVar2 = Local_109.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_1769[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_1769[iVar2 /*8*/], 15))
				{
					if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
					{
						if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
						{
							if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_38(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_38(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 3, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][1] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(9, iParam0);
			}
			break;
		
		case 9:
			if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
			{
				if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
				{
					if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_58(), func_10(iParam0, 0), 3))
					{
						Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
						unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_10(iParam0, 0), 4f, -2f, 13, 16, 1148846080, 0);
						unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
						func_15(func_9(iParam0, 1), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 1, 0);
					}
					else if (Local_109.f_1590[iParam0] != -1)
					{
						if ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869))
						{
							Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
							unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
							if (Local_109.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
								Local_109.f_846[iParam0 /*13*/][1] = uVar0;
								Local_109.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 1), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
							bVar1 = true;
						}
						else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 585557868))
						{
							if (Local_109.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
								Local_109.f_846[iParam0 /*13*/][1] = uVar0;
								Local_109.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 1), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
						}
					}
					else
					{
						Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
						unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
						bVar1 = true;
						if (Local_109.f_846[iParam0 /*13*/].f_12 == 1)
						{
							func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
							Local_109.f_846[iParam0 /*13*/][1] = uVar0;
							Local_109.f_846[iParam0 /*13*/].f_12++;
							func_23(iParam0);
							func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 1), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_41(0, iParam0);
				func_60(5, iParam0);
			}
			break;
	}
}

char* func_37(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_self";
	}
	return "deal_card_self";
}

char* func_38(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_04";
	}
	return "deal_card_player_04";
}

char* func_39(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_03";
	}
	return "deal_card_player_03";
}

char* func_40(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_02";
	}
	return "deal_card_player_02";
}

void func_41(int iParam0, int iParam1)
{
	Local_109.f_1510[iParam1] = iParam0;
}

char* func_42(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_01";
	}
	return "deal_card_player_01";
}

void func_43(int iParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	unk_0xCED9E32812D6C7C7(&(Local_109.f_1555[iParam0]), bParam1);
}

int func_44(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return BitTest(Local_109.f_1555[iParam0], iParam1);
}

char* func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_72(), func_46(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_72(), func_46(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_72(), func_46(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_72(), func_46(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_109.f_1600[(iParam0 * 4 + iVar2)] != func_420())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

char* func_46(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_109.f_1600[(iParam0 * 4 + iVar1)] != func_420())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			
			case 1:
				return "female_idle_single_p02";
			
			case 2:
				return "female_idle_single_p03";
			
			case 3:
				return "female_idle_single_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			
			case 1:
				return "idle_single_p02";
			
			case 2:
				return "idle_single_p03";
			
			case 3:
				return "idle_single_p04";
			}
		
		default:
	}
	return "";
}

int func_47(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	char cVar0[64];
	var uVar16;
	var uVar17;
	
	if (iParam0 == 3)
	{
		if (iParam2 > 21)
		{
			if (bParam4)
			{
				iParam0 = 12;
			}
			else
			{
				iParam0 = 0;
			}
		}
		else if (iParam2 == 21)
		{
			if (iParam3 == 2)
			{
				iParam0 = 1;
			}
		}
	}
	StringCopy(&cVar0, func_49(iParam0, iParam2, iParam5), 64);
	if (unk_0xACC32B78196FBC2A(&cVar0))
	{
		return 0;
	}
	uVar16 = unk_0x8AF984152F749D80(*uParam1);
	if (unk_0x55B23FE400FCEA6B(uVar16, 0))
	{
		return 0;
	}
	if (!unk_0x90F6E2F6488B98BA(*uParam1))
	{
		return 0;
	}
	if (!unk_0x3A8B0F5B0E3DE13A(uVar16))
	{
		return 0;
	}
	if (unk_0xB6F46ABD140050F1(uVar16))
	{
		return 0;
	}
	uVar17 = func_48(7);
	unk_0xB0C559BD7D5D270D(uVar16, &cVar0, uVar17, 1);
	return 1;
}

int func_48(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

char* func_49(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_BJACK_DEALER_PLAYER_BUST";
		
		case 1:
			return "MINIGAME_BJACK_DEALER_BLACKJACK";
		
		case 2:
			return "MINIGAME_BJACK_DEALER_ANOTHER_CARD";
		
		case 3:
			return func_56(iParam1);
		
		case 4:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 5:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 7:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 6:
			return func_50(uParam2);
		
		case 8:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 9:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 10:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 11:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 12:
			return "MINIGAME_DEALER_BUSTS";
		
		case 13:
			return "MINIGAME_DEALER_WINS";
		
		case 15:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 16:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 14:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		default:
	}
	return "";
}

char* func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x54F800F95142C750(uParam0);
	if (!unk_0x81F82FFBED0CACCA(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = unk_0x6B01934FA503547F(iVar0);
	if (!func_20(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = unk_0x407E03586628E458(iVar1);
	if (func_54(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_52(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_51(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_51(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(unk_0x407E03586628E458(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_1769[*iParam0 /*8*/].f_4;
	return func_53(iVar0, Local_2026.f_257);
}

int func_53(int iParam0, int iParam1)
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_55(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44024[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

char* func_56(int iParam0)
{
	if (iParam0 <= 1 || iParam0 > 21)
	{
		return "";
	}
	switch (iParam0)
	{
		case 2:
			return "MINIGAME_BJACK_DEALER_2";
		
		case 3:
			return "MINIGAME_BJACK_DEALER_3";
		
		case 4:
			return "MINIGAME_BJACK_DEALER_4";
		
		case 5:
			return "MINIGAME_BJACK_DEALER_5";
		
		case 6:
			return "MINIGAME_BJACK_DEALER_6";
		
		case 7:
			return "MINIGAME_BJACK_DEALER_7";
		
		case 8:
			return "MINIGAME_BJACK_DEALER_8";
		
		case 9:
			return "MINIGAME_BJACK_DEALER_9";
		
		case 10:
			return "MINIGAME_BJACK_DEALER_10";
		
		case 11:
			return "MINIGAME_BJACK_DEALER_11";
		
		case 12:
			return "MINIGAME_BJACK_DEALER_12";
		
		case 13:
			return "MINIGAME_BJACK_DEALER_13";
		
		case 14:
			return "MINIGAME_BJACK_DEALER_14";
		
		case 15:
			return "MINIGAME_BJACK_DEALER_15";
		
		case 16:
			return "MINIGAME_BJACK_DEALER_16";
		
		case 17:
			return "MINIGAME_BJACK_DEALER_17";
		
		case 18:
			return "MINIGAME_BJACK_DEALER_18";
		
		case 19:
			return "MINIGAME_BJACK_DEALER_19";
		
		case 20:
			return "MINIGAME_BJACK_DEALER_20";
		
		case 21:
			return "MINIGAME_BJACK_DEALER_21";
		
		default:
	}
	return "";
}

char* func_57(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_place_bet_request";
	}
	return "place_bet_request";
}

char* func_58()
{
	return "anim_casino_b@amb@casino@games@blackjack@dealer";
}

void func_59(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uParam0->f_209 = 0;
	uParam0->f_210 = 208;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_210)
		{
			iVar1 = unk_0x95F3C8DAE5A0339C(0, uParam0->f_210);
			uVar0 = (*uParam0)[iVar2];
			(*uParam0)[iVar2] = (*uParam0)[iVar1];
			(*uParam0)[iVar1] = uVar0;
			iVar2++;
		}
		iVar3++;
	}
}

void func_60(int iParam0, int iParam1)
{
	Local_109.f_1515[iParam1] = iParam0;
}

void func_61(int iParam0)
{
	struct<13> Var0;
	
	Local_109.f_1530[iParam0] = 1;
	if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0])))
	{
		if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
		{
			if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iParam0]))
			{
				Local_109.f_1590[iParam0] = unk_0x57736A7B8965A88A(Local_109.f_1580[iParam0]);
				if (Local_109.f_1590[iParam0] == -1 || ((unk_0x54DE1614490C2A83(Local_109.f_1590[iParam0]) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), joaat("blend_out"))) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), 2116425869)))
				{
					Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
					unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
				}
			}
			else
			{
				unk_0xC31EECA11005273C(Local_109.f_1595[iParam0]);
			}
			return;
		}
	}
	Local_109.f_1555[iParam0] = 0;
	Local_109.f_1565[iParam0] = 0;
	func_63(&(Local_109.f_1633[iParam0 /*2*/]));
	Var0 = 11;
	Local_109.f_846[iParam0 /*13*/] = { Var0 };
	Local_109.f_1525[iParam0] = 0;
	Local_109.f_1575[iParam0] = 0;
	func_63(&(Local_109.f_1642[iParam0 /*2*/]));
	func_73(1, iParam0);
	func_60(0, iParam0);
	func_41(0, iParam0);
	Local_109.f_1560[iParam0]++;
	Local_109.f_1530[iParam0] = 0;
}

int func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_109.f_1600[(iParam0 * 4 + iVar1)] != func_420() && Local_109.f_899[Local_109.f_1600[(iParam0 * 4 + iVar1)] /*9*/].f_8 > 0)
			{
				iVar0++;
			}
		}
		else if (Local_109.f_1600[(iParam0 * 4 + iVar1)] != func_420())
		{
			iVar0++;
		}
		iVar1++;
	}
	if (Local_109.f_1570[iParam0] != iVar0)
	{
		Local_109.f_1570[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_63(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_64(int iParam0, int iParam1)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

int func_65(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_67(uParam0, bParam2, 0);
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_66(var uParam0)
{
	return uParam0->f_1;
}

void func_67(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x9315DBF7D972F07A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				*uParam0 = unk_0xE75390F3CA208D5E();
			}
		}
		else
		{
			*uParam0 = unk_0x320D1840B6DAA1CC();
		}
		uParam0->f_1 = 1;
	}
}

char* func_68(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (unk_0x5853B15F78E1A265(0, 5))
		{
			case 0:
				return "female_idle_var_01";
			
			case 1:
				return "female_idle_var_02";
			
			case 2:
				return "female_idle_var_03";
			
			case 3:
				return "female_idle_var_04";
			
			case 4:
				return "female_idle_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x5853B15F78E1A265(0, 5))
		{
			case 0:
				return "idle_var_01";
			
			case 1:
				return "idle_var_02";
			
			case 2:
				return "idle_var_03";
			
			case 3:
				return "idle_var_04";
			
			case 4:
				return "idle_var_05";
			}
		
		default:
	}
	return "";
}

float func_69(int iParam0)
{
	if (Local_2026.f_257 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -134.69f;
			
			case 1:
				return 45.31f;
			
			case 2:
				return 135.31f;
			
			case 3:
				return 135.31f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_70(int iParam0)
{
	if (Local_2026.f_257 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1148.837f, 269.747f, -52.8409f;
			
			case 1:
				return 1151.84f, 266.747f, -52.8409f;
			
			case 2:
				return 1129.406f, 262.3578f, -52.041f;
			
			case 3:
				return 1144.429f, 247.3352f, -52.041f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_71(int iParam0)
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_72()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_73(int iParam0, int iParam1)
{
	Local_109.f_1520[iParam1] = iParam0;
}

void func_74(var uParam0)
{
	var uVar0[7];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	
	iVar9 = 208;
	iVar10 = 0;
	while (iVar10 < 208)
	{
		iVar8 = unk_0x95F3C8DAE5A0339C(0, iVar9);
		iVar11 = 0;
		while (iVar11 < 208)
		{
			iVar13 = (iVar11 / 32);
			bVar14 = (iVar11 % 32);
			if (iVar12 == iVar8 && !BitTest(uVar0[iVar13], bVar14))
			{
				unk_0xCED9E32812D6C7C7(&(uVar0[iVar13]), bVar14);
				while (iVar11 + 1 > 52)
				{
					iVar11 = (iVar11 - 52);
				}
				(*uParam0)[iVar10] = iVar11 + 1;
			}
			else
			{
				if (!BitTest(uVar0[iVar13], bVar14))
				{
					iVar12++;
				}
				iVar11++;
			}
		}
		iVar12 = 0;
		iVar9 = (iVar9 - 1);
		iVar10++;
	}
	uParam0->f_210 = 208;
}

void func_75()
{
	int iVar0;
	
	if (!func_80(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = iLocal_3691;
		if (Global_2788828 != iVar0 && (Global_2788828 != -1 || func_426(unk_0x9E2D6C50374FCFA9())))
		{
			if (!unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar0]))
			{
				func_77(iVar0);
			}
		}
		else if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar0]))
		{
			if (unk_0x07B2F8356DC13CF4(Local_109.f_1595[iVar0]))
			{
				func_76(&(Local_109.f_1595[iVar0]));
			}
			else
			{
				unk_0xC31EECA11005273C(Local_109.f_1595[iVar0]);
			}
		}
	}
	iLocal_3691++;
	if (iLocal_3691 >= Local_2026.f_257)
	{
		iLocal_3691 = 0;
	}
}

void func_76(var uParam0)
{
	var uVar0;
	
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		if (!unk_0x07B2F8356DC13CF4(*uParam0))
		{
		}
	}
	if (unk_0x90F6E2F6488B98BA(*uParam0))
	{
		uVar0 = unk_0xF2D8DACFAEBD9629(*uParam0);
		unk_0x531055A66E7A812C(&uVar0);
	}
}

void func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("s_m_y_casino_01");
	if (Local_109.f_1550[iParam0] >= 7)
	{
		iVar0 = joaat("s_f_y_casino_01");
	}
	unk_0xD69A0C3662175E68(iVar0);
	if (!unk_0x0152AA00FA3130F1(iVar0))
	{
		return;
	}
	unk_0x8FB472886552D737(func_72());
	if (!unk_0x6F940C2636C076AD(func_72()))
	{
		return;
	}
	if (!unk_0x90F6E2F6488B98BA(Local_109.f_1595[iParam0]))
	{
		if (unk_0xA777DF215CCFCC77(1))
		{
			iVar1 = unk_0xA8D58C3AADA2C41C(26, iVar0, func_70(iParam0), func_69(iParam0), 1, 1);
			unk_0xF1A23B343DFEDFD0(iVar0);
			unk_0xFEF687AF74EEDCC2(iVar1, 0);
			unk_0x80476B7F23BCBB1B(iVar1, 0);
			unk_0x50274A7EACA3133A(iVar1, 1);
			unk_0x3E3D339BAD67F6F2(iVar1, 249, 1);
			unk_0xD6A76BAB45A4B460(iVar1, 185, 1);
			unk_0xD6A76BAB45A4B460(iVar1, 108, 1);
			unk_0x229DD509EDB2FBD4(iVar1, 1);
			unk_0xD1C117AEB22F08E1(iVar1, 1);
			unk_0xB83D9F54C7F8C2BE(iVar1, 0);
			unk_0x1A9E4C03AB189860(iVar1, 1);
			unk_0x3F990964E4A5669A(iVar1, 0);
			unk_0xD6A76BAB45A4B460(iVar1, 208, 1);
			unk_0xC252F409BDE7A700(iVar1, 0);
			func_79(Local_109.f_1550[iParam0], &iVar1);
			func_78(Local_109.f_1550[iParam0], &iVar1);
			unk_0xA539EDE8DA5BBC22(iVar1, func_70(iParam0), 0, 0, 1);
			unk_0xBBF86885619695CE(iVar1, func_69(iParam0));
			Local_109.f_1595[iParam0] = unk_0xED28EE4BE581A032(iVar1);
			unk_0xBEA5F528349F8F75(Local_109.f_1595[iParam0], 0);
			Local_109.f_1540[iParam0] = 1;
			Local_109.f_1580[iParam0] = unk_0x497E09037A63D346(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
			unk_0xFF47C397A9269A1A(unk_0x8AF984152F749D80(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_72(), func_71(iParam0), 1000f, -2f, 13, 16, 1148846080, 0);
			unk_0x60E9DD146055C13E(Local_109.f_1580[iParam0]);
			unk_0xAFC1FBF3F6AE7B9A(func_58());
		}
	}
}

void func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 1:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 2:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 3:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 4:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 5:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 6:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 7:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 8:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 9:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 10:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 11:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 12:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 13:
			unk_0xDB0D726EE9705C73(*iParam1, unk_0x2E87280918B16506("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_79(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 3, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 3, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 3, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 1, 0, 0);
			break;
		
		case 1:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 2, 2, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 4, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 0, 3, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 1, 0, 0);
			break;
		
		case 2:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 2, 1, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 0, 3, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 1, 0, 0);
			break;
		
		case 3:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 3, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 1, 3, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 3, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 1, 0, 0);
			break;
		
		case 4:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 4, 2, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 3, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 1, 0, 0);
			break;
		
		case 5:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 4, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 1, 0, 0);
			break;
		
		case 6:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 4, 1, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 4, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 3, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 1, 0, 0);
			break;
		
		case 7:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 1, 1, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 0, 3, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 0, 0, 0);
			break;
		
		case 8:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 1, 1, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 1, 1, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 1, 3, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 0, 0, 0);
			break;
		
		case 9:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 2, 3, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 0, 0, 0);
			break;
		
		case 10:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 2, 1, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 2, 1, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 3, 3, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 3, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 0, 0, 0);
			break;
		
		case 11:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 3, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 3, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 0, 1, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 0, 0, 0);
			unk_0xD9D122A54FFE62B8(*iParam1, 1, 0, 0, 0);
			break;
		
		case 12:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 3, 1, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 3, 1, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 1, 1, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 0, 0, 0);
			break;
		
		case 13:
			unk_0xDCB52C614B3660EC(*iParam1);
			unk_0xE3752B10DC995E95(*iParam1, 0, 4, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 2, 4, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 3, 2, 1, 0);
			unk_0xE3752B10DC995E95(*iParam1, 4, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 6, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 7, 1, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 8, 2, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(*iParam1, 11, 0, 0, 0);
			unk_0xD9D122A54FFE62B8(*iParam1, 1, 0, 0, 0);
			break;
	}
}

int func_80(int iParam0)
{
	if (iParam0 != func_420() && func_20(iParam0, 1, 1))
	{
		if (func_81(iParam0) && !func_425(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	if (iParam0 != func_420() && func_20(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 3);
	}
	return 0;
}

void func_82()
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	
	Var0 = 7;
	bVar9 = false;
	iVar10 = iLocal_3690;
	if (Local_1769[iVar10 /*8*/].f_4 == -1)
	{
		Local_109.f_899[iVar10 /*9*/] = { Var0 };
		Local_109.f_1188[iVar10 /*9*/] = { Var0 };
	}
	if (Local_1769[iVar10 /*8*/].f_6 == 0)
	{
		if (Local_109.f_1477[iVar10] != 0)
		{
			Local_109.f_1477[iVar10] = 0;
		}
	}
	if (!bVar9)
	{
		if (func_83(iVar10))
		{
			bVar9 = true;
		}
	}
	iLocal_3690++;
	if (iLocal_3690 >= 32)
	{
		iLocal_3690 = 0;
	}
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_415())
	{
		return 0;
	}
	iVar0 = unk_0x54F800F95142C750(iParam0);
	if (!unk_0x81F82FFBED0CACCA(iVar0))
	{
		return 0;
	}
	iVar1 = unk_0x6B01934FA503547F(iVar0);
	if (!func_20(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_1769[iParam0 /*8*/].f_6.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_1769[iParam0 /*8*/].f_6 == 1)
	{
		if (func_47(6, &(Local_109.f_1595[iVar2]), -1, 0, 0, iParam0))
		{
			func_84(iParam0, 1);
		}
		return 1;
	}
	if (Local_1769[iParam0 /*8*/].f_6 == 2)
	{
		if (func_47(7, &(Local_109.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 2);
		}
		return 1;
	}
	if (Local_1769[iParam0 /*8*/].f_6 == 4)
	{
		if (func_47(8, &(Local_109.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 4);
		}
		return 1;
	}
	if (Local_1769[iParam0 /*8*/].f_6 == 5)
	{
		if (func_47(9, &(Local_109.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 5);
		}
		return 1;
	}
	if (Local_1769[iParam0 /*8*/].f_6 == 6)
	{
		if (func_47(10, &(Local_109.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 6);
		}
		return 1;
	}
	if (Local_1769[iParam0 /*8*/].f_6 == 7)
	{
		if (func_47(11, &(Local_109.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	unk_0xCED9E32812D6C7C7(&(Local_109.f_1477[iParam0]), iVar0);
}

void func_85()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_3689;
	if (Local_109.f_1600[iVar0] != func_420())
	{
		iVar1 = Local_109.f_1600[iVar0];
		if (((!func_20(Local_109.f_1600[iVar0], 1, 1) || Local_1769[iVar1 /*8*/].f_3 == -1) || Local_1769[iVar1 /*8*/].f_3 != iVar0) || !unk_0x976D40337FCB1481(Local_109.f_1600[iVar0]))
		{
			Local_109.f_1600[iVar0] = func_420();
			if (Local_109.f_1477[iVar0] != 0)
			{
				Local_109.f_1477[iVar0] = 0;
			}
		}
	}
	if (func_20(iVar0, 1, 1) && unk_0x976D40337FCB1481(iVar0))
	{
		if (Local_1769[iVar0 /*8*/].f_3 > -1 && Local_1769[iVar0 /*8*/].f_3 < 32)
		{
			if (Local_109.f_1600[Local_1769[iVar0 /*8*/].f_3] == func_420())
			{
				if (func_20(unk_0xA1087A6350CD9244(iVar0), 1, 1))
				{
					Local_109.f_1600[Local_1769[bVar0 /*8*/].f_3] = unk_0xA1087A6350CD9244(bVar0);
				}
			}
		}
	}
	iLocal_3689++;
	if (iLocal_3689 >= 32)
	{
		iLocal_3689 = 0;
	}
}

void func_86()
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<21> Var6;
	struct<3> Var27;
	
	func_412();
	if (!Local_2026.f_236)
	{
		if (func_426(unk_0x9E2D6C50374FCFA9()) && func_421() != func_420())
		{
			if (BitTest(Global_2689235[func_421() /*453*/].f_318.f_4, 4))
			{
				Local_2026.f_236 = 1;
				func_411();
				func_410();
				iLocal_3684 = 1;
			}
		}
	}
	else if (iLocal_3684)
	{
		if (func_409())
		{
			iLocal_3684 = 0;
		}
	}
	func_405();
	func_404();
	Local_2026.f_248 = func_401();
	func_382();
	if (Local_2026.f_1 > 2)
	{
		unk_0x7653D561C9574763(2, 210, 1);
		unk_0x07899AAA5D680386(2, 210);
		unk_0x7653D561C9574763(2, 26, 1);
		if (unk_0x51844F589D928A86(2, 210))
		{
		}
		if (func_381(Local_2026.f_247) >= 0 && unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), func_70(func_381(Local_2026.f_247)), 1) > 5f)
		{
			func_375(0);
		}
	}
	if (Local_2026.f_1 > 5)
	{
		unk_0xC43E67C9BA871ECB();
		unk_0xF43060DF31ACEA55();
		unk_0x6EC26FC7C9EC0D16(19);
		func_373(1);
		func_372(1, 0);
	}
	if (Local_2026.f_1 > 6)
	{
		unk_0x7653D561C9574763(2, 0, 1);
		if (unk_0x51844F589D928A86(2, 0))
		{
			if (unk_0x4DE6A646AFB7CF5C(0) == 0)
			{
				unk_0x4B1C22133022D7D3(0, 4);
			}
			else if (unk_0x4DE6A646AFB7CF5C(0) == 4)
			{
				unk_0x4B1C22133022D7D3(0, 0);
			}
		}
		unk_0x39469160703C61AE();
	}
	if (Local_2026.f_1 > 7)
	{
		func_368(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]));
	}
	if (func_367())
	{
		bLocal_3686 = true;
	}
	else if (bLocal_3686)
	{
		func_366(&uLocal_3687, 0, 0);
		bLocal_3686 = false;
	}
	else if (func_66(&uLocal_3687) && func_65(&uLocal_3687, 500, 0))
	{
		func_63(&uLocal_3687);
	}
	switch (Local_2026.f_1)
	{
		case 0:
			if (func_361())
			{
				Local_2026.f_1582 = "idle_cardgames";
				Local_2026.f_252 = 0;
				Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/] = 0;
				Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 = -1;
				Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 = -1;
				Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_5 = 0;
				func_360(unk_0x9E2D6C50374FCFA9());
				func_359(1);
			}
			break;
		
		case 1:
			switch (func_381(Local_2026.f_247))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_2026.f_245 = 5000;
					Local_2026.f_246 = 10;
					break;
				
				case 2:
				case 3:
					bVar0 = true;
					Local_2026.f_245 = 50000;
					Local_2026.f_246 = 1000;
					break;
			}
			if (Local_2026.f_257 == 1)
			{
				bVar0 = true;
				Local_2026.f_245 = 50000;
				Local_2026.f_246 = 1000;
			}
			Local_2026.f_244 = Local_2026.f_246;
			if ((((((((((((((((((((((((!Global_262145.f_26941 && !(Global_262145.f_26943 && !bVar0)) && !(Global_262145.f_26942 && bVar0)) && ((func_358(joaat("rm_GamingFloor_02")) || func_358(joaat("rm_GamingFloor_03"))) || func_426(unk_0x9E2D6C50374FCFA9()))) && func_356(unk_0xE2D3D51028F0428A(), func_357(Local_2026.f_247), 1.5f, 1)) && func_351(unk_0xE2D3D51028F0428A(), func_355(Local_2026.f_247), 40f)) && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 0) && Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 0) && !BitTest(Global_1946250.f_4, 2)) && !Global_2667225.f_2681) && Global_2788828 != func_381(Local_2026.f_247)) && (Global_2788828 != -1 || func_426(unk_0x9E2D6C50374FCFA9()))) && func_350()) && !func_346()) && !unk_0xA829C9A2767AC8EF()) && !unk_0xCB1EF1E7B77ADF4C()) && func_343(unk_0xE2D3D51028F0428A()) <= 9) && !Global_2667225.f_2681) && !unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) && !func_342()) && !func_341()) && !func_339()) && !Global_2725439.f_12) && Global_1946244 != 33) && !func_338())
			{
				func_359(2);
			}
			else
			{
				Local_2026.f_247++;
				if (Local_2026.f_247 >= Local_2026.f_257 * 4)
				{
					Local_2026.f_247 = 0;
				}
			}
			break;
		
		case 2:
			func_337();
			func_360(unk_0x9E2D6C50374FCFA9());
			if (((((((((((((((((((((func_358(joaat("rm_GamingFloor_02")) || func_358(joaat("rm_GamingFloor_03"))) || func_426(unk_0x9E2D6C50374FCFA9())) && func_356(unk_0xE2D3D51028F0428A(), func_357(Local_2026.f_247), 1.5f, 1)) && func_351(unk_0xE2D3D51028F0428A(), func_355(Local_2026.f_247), 40f)) && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 0) && Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 0) && Global_2788828 != func_381(Local_2026.f_247)) && (Global_2788828 != -1 || func_426(unk_0x9E2D6C50374FCFA9()))) && func_350()) && !func_346()) && !unk_0xA829C9A2767AC8EF()) && !unk_0xCB1EF1E7B77ADF4C()) && func_343(unk_0xE2D3D51028F0428A()) <= 9) && !Global_2667225.f_2681) && !unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) && !func_342()) && !func_341()) && !func_339()) && !Global_2725439.f_12) && Global_1946244 != 33) && !func_338())
			{
				if ((((((func_20(unk_0x9E2D6C50374FCFA9(), 1, 1) && unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) && !func_336()) && !func_335()) && !unk_0x3E6C9DAD84CEFED1()) && !bLocal_3686) && !func_66(&uLocal_3687))
				{
					if (func_334(1, &uVar1))
					{
						if (!func_333("BJACK_NA"))
						{
							func_332("BJACK_NA");
						}
					}
					else if (Local_109.f_1600[Local_2026.f_247] != func_420())
					{
						if (!func_333("BJACK_USED"))
						{
							func_332("BJACK_USED");
						}
					}
					else if (func_331())
					{
						if (func_327() == 2)
						{
							if (!func_333("CAS_MG_CTIME"))
							{
								func_332("CAS_MG_CTIME");
							}
						}
						else if (!func_333("CAS_MG_CBAN"))
						{
							func_332("CAS_MG_CBAN");
						}
					}
					else if ((!func_326(unk_0x9E2D6C50374FCFA9()) && (func_381(Local_2026.f_247) == 2 || func_381(Local_2026.f_247) == 3)) && !(func_325(1) && func_326(func_324())))
					{
						if (!func_333("CAS_MG_SUITE2"))
						{
							func_332("CAS_MG_SUITE2");
						}
					}
					else if (!func_323() && !(func_325(1) && func_322(func_324())))
					{
						if (!func_320("CAS_MG_MEMB2", func_321(1)))
						{
							func_319("CAS_MG_MEMB2", func_321(1));
						}
						else if (unk_0xF09A4F413B0D30EB(2, 52))
						{
							unk_0x3410421C60BF7143(1);
							func_318();
							func_359(3);
						}
					}
					else if (Local_2026.f_248 <= 0)
					{
						if (func_426(unk_0x9E2D6C50374FCFA9()))
						{
							if (!func_333("CAS_MG_NOCHIPS6"))
							{
								func_332("CAS_MG_NOCHIPS6");
							}
						}
						else if (!func_333("CAS_MG_NOCHIPS2"))
						{
							func_332("CAS_MG_NOCHIPS2");
						}
					}
					else if (Local_2026.f_248 < Local_2026.f_246)
					{
						if (func_426(unk_0x9E2D6C50374FCFA9()))
						{
							if (!func_333("CAS_MG_LOWCHIPS6"))
							{
								func_332("CAS_MG_LOWCHIPS6");
							}
						}
						else if (!func_333("CAS_MG_LOWCHIPS2"))
						{
							func_332("CAS_MG_LOWCHIPS2");
						}
					}
					else if (Local_2026.f_259 == -1)
					{
						if (func_317())
						{
							unk_0x3410421C60BF7143(1);
						}
						if (((!func_326(unk_0x9E2D6C50374FCFA9()) && (func_381(Local_2026.f_247) == 2 || func_381(Local_2026.f_247) == 3)) && !(func_325(1) && func_326(func_324()))) || (!func_323() && (func_325(1) && func_322(func_324()))))
						{
							if (func_314(func_324()) == 1)
							{
								Local_2026.f_256 = 1;
								func_313(&(Local_2026.f_259), 4, "BJACK_PLAY_A", 0, 0, 0, 0);
							}
							else if (func_312(func_324()))
							{
								Local_2026.f_256 = 2;
								func_313(&(Local_2026.f_259), 4, "BJACK_PLAY_B", 0, 0, 0, 0);
							}
							else
							{
								Local_2026.f_256 = 3;
								func_313(&(Local_2026.f_259), 4, "BJACK_PLAY_C", 0, 0, 0, 0);
							}
						}
						else
						{
							Local_2026.f_256 = 0;
							func_313(&(Local_2026.f_259), 4, "BJACK_PLAY", 0, 0, 0, 0);
						}
					}
					else if (func_311(Local_2026.f_259, 1))
					{
						func_309(&(Local_2026.f_259));
						Local_2026.f_259 = -1;
						unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 185, 1);
						func_308();
						func_298(unk_0x9E2D6C50374FCFA9(), 0, 1048832, 0);
						if (unk_0x4DE6A646AFB7CF5C(0) == 4 && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
						{
							unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
							unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
						}
						func_359(4);
					}
				}
				else
				{
					if (func_317())
					{
						unk_0x3410421C60BF7143(1);
					}
					if (Local_2026.f_259 != -1)
					{
						func_309(&(Local_2026.f_259));
						Local_2026.f_259 = -1;
					}
					Local_2026.f_247 = 0;
					func_359(1);
				}
			}
			else
			{
				if (func_317())
				{
					unk_0x3410421C60BF7143(1);
				}
				if (Local_2026.f_259 != -1)
				{
					func_309(&(Local_2026.f_259));
					Local_2026.f_259 = -1;
				}
				Local_2026.f_247 = 0;
				func_359(1);
			}
			break;
		
		case 3:
			if (!func_297())
			{
				func_359(2);
			}
			break;
		
		case 4:
			func_373(1);
			sVar2 = "CasinoUI_Cards_Blackjack";
			if ((func_381(Local_2026.f_247) == 2 || func_381(Local_2026.f_247) == 3) || func_426(unk_0x9E2D6C50374FCFA9()))
			{
				sVar2 = "CasinoUI_Cards_Blackjack_High";
			}
			if (BitTest(Global_1946250.f_5, 21))
			{
				func_366(&(Local_2026.f_1578), 0, 0);
				func_296(Local_2026.f_247);
				if (unk_0x4DE6A646AFB7CF5C(0) == 4)
				{
					func_298(unk_0x9E2D6C50374FCFA9(), 0, 0, 0);
				}
				else
				{
					func_298(unk_0x9E2D6C50374FCFA9(), 0, 256, 0);
				}
				func_359(5);
			}
			else
			{
				unk_0xA9911C122B3210B5(sVar2, 0);
				if (func_294(0, -1, 0) && unk_0x9D4AFED2949F7082(sVar2))
				{
					if (!iLocal_3685)
					{
						unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
						func_293(0, 0);
						func_291(1, sVar2, sVar2);
						func_290("BJACK_TITLE");
						func_289(-1, 1, 1);
						func_288("BJACK_DIS", 0, 0);
						func_287("BJACK_DIS1");
						func_287("BJACK_DIS2");
						func_287("BJACK_DIS3");
						func_286(202, "BJACK_EXIT", -1);
						func_286(201, "BJACK_CONT", -1);
						iLocal_3685 = 1;
					}
					func_247(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (unk_0x51844F589D928A86(2, 202))
				{
					unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_244(1, -1);
					unk_0x861D35D42CFD2991(sVar2);
					iLocal_3685 = 0;
					func_235();
				}
				else if (unk_0x51844F589D928A86(2, 201))
				{
					unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_244(1, -1);
					unk_0x861D35D42CFD2991(sVar2);
					iLocal_3685 = 0;
					unk_0xCED9E32812D6C7C7(&(Global_1946250.f_5), 21);
					func_366(&(Local_2026.f_1578), 0, 0);
					func_296(Local_2026.f_247);
					if (unk_0x4DE6A646AFB7CF5C(0) == 4)
					{
						func_298(unk_0x9E2D6C50374FCFA9(), 0, 0, 0);
					}
					else
					{
						func_298(unk_0x9E2D6C50374FCFA9(), 0, 256, 0);
					}
					func_359(5);
				}
			}
			break;
		
		case 5:
			if ((((func_234(Local_2026.f_247) && !func_335()) && !func_367()) && func_350()) && !func_346())
			{
				func_63(&(Local_2026.f_1578));
				unk_0xCED9E32812D6C7C7(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_4), 2);
				func_225(1);
				func_359(6);
			}
			else
			{
				if (func_335())
				{
					func_235();
				}
				if (func_367())
				{
					func_235();
				}
				if (func_224(Local_2026.f_247))
				{
					func_235();
				}
				if (func_223())
				{
					func_235();
				}
				if (!func_350())
				{
					func_235();
				}
				if (func_346())
				{
					func_235();
				}
			}
			break;
		
		case 6:
			if (!func_335() && !func_367())
			{
				if (func_222())
				{
					if (unk_0x4DE6A646AFB7CF5C(0) == 1 || unk_0x4DE6A646AFB7CF5C(0) == 2)
					{
						unk_0x4B1C22133022D7D3(0, 0);
					}
					fVar3 = func_220(unk_0xE2D3D51028F0428A(), func_221(Local_2026.f_247, 0), 1);
					fVar4 = func_220(unk_0xE2D3D51028F0428A(), func_221(Local_2026.f_247, 1), 1);
					fVar5 = func_220(unk_0xE2D3D51028F0428A(), func_221(Local_2026.f_247, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_2026.f_251 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_2026.f_251 = 2;
					}
					else
					{
						Local_2026.f_251 = 0;
					}
					unk_0x13C3030981EA7C3B(unk_0xE2D3D51028F0428A(), func_221(Local_2026.f_247, Local_2026.f_251), 1f, 5000, func_219(Local_2026.f_247, Local_2026.f_251), 0.01f);
					func_359(7);
				}
			}
			else
			{
				func_235();
			}
			break;
		
		case 7:
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), joaat("script_task_go_straight_to_coord")) != 0)
			{
				Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_2026.f_247), func_217(Local_2026.f_247), 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_216(), func_215(Local_2026.f_251), 2f, -2f, 13, 16, 2f, 0);
				unk_0x60E9DD146055C13E(Local_2026.f_255);
				Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_6.f_1 = Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4;
				func_359(8);
			}
			break;
		
		case 8:
			unk_0x01727103DD974710(-2124244681);
			Local_2026.f_258 = unk_0x57736A7B8965A88A(Local_2026.f_255);
			if (func_214())
			{
				func_213(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 2);
			}
			else
			{
				func_213(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 1);
			}
			if (Local_2026.f_258 != -1)
			{
				if ((unk_0x54DE1614490C2A83(Local_2026.f_258) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), joaat("ShowUi"))) || unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), joaat("blend_out")))
				{
					Local_2026.f_1582 = "idle_cardgames";
					Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_2026.f_247), func_217(Local_2026.f_247), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_216(), Local_2026.f_1582, 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x60E9DD146055C13E(Local_2026.f_255);
					func_298(unk_0x9E2D6C50374FCFA9(), 0, 256, 0);
					Local_3639 = { Var6 };
					if (func_426(unk_0x9E2D6C50374FCFA9()))
					{
						Local_3639.f_0 = 1695074466;
					}
					else if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 == 2 || Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 == 3)
					{
						Local_3639.f_0 = 1952785842;
					}
					else
					{
						Local_3639.f_0 = joaat("standard");
					}
					Local_3639.f_1 = Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4;
					Local_3639.f_6 = 1;
					if (func_326(unk_0x9E2D6C50374FCFA9()))
					{
						Local_3639.f_15 = 1983458449;
					}
					else if (func_323())
					{
						Local_3639.f_15 = 1334658487;
					}
					else if (func_325(1) && (func_326(func_324()) || func_211(unk_0x9E2D6C50374FCFA9())))
					{
						Local_3639.f_15 = 980726932;
					}
					else
					{
						Local_3639.f_15 = 939907746;
					}
					func_366(&uLocal_3611, 0, 0);
					func_210();
					Local_2026.f_249 = func_401();
					func_359(9);
				}
			}
			break;
		
		case 9:
			if (!unk_0xA37204C64473B324("DLC_VW_Casino_Table_Games"))
			{
				unk_0x66B27A59829491D3("DLC_VW_Casino_Table_Games");
			}
			unk_0x01727103DD974710(-2124244681);
			func_90();
			break;
		
		case 10:
			if (unk_0xA37204C64473B324("DLC_VW_Casino_Table_Games"))
			{
				unk_0x0AF8D3A06BB92903("DLC_VW_Casino_Table_Games");
			}
			if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), joaat("script_task_synchronized_scene")) == 1)
			{
				func_213(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), func_89());
				Var27 = { unk_0x664C0A1BF5E133FA(2, 218), unk_0x664C0A1BF5E133FA(2, 219), 0f };
				Local_2026.f_258 = unk_0x57736A7B8965A88A(Local_2026.f_255);
				if (Local_2026.f_258 != -1 && ((unk_0x54DE1614490C2A83(Local_2026.f_258) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), joaat("blend_out"))) || (unk_0x652D2EEEF1D3E62C(Var27) >= 0.24f && unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), 2116425869))))
				{
					unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
					func_298(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
					unk_0xAFC1FBF3F6AE7B9A(func_58());
					unk_0xAFC1FBF3F6AE7B9A(func_72());
					unk_0xAFC1FBF3F6AE7B9A(func_88());
					unk_0xAFC1FBF3F6AE7B9A(func_216());
					unk_0xB0550BC91B0159D6(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_4), 2);
					func_337();
					func_87();
					func_359(2);
				}
			}
			else
			{
				unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
				func_298(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
				unk_0xAFC1FBF3F6AE7B9A(func_58());
				unk_0xAFC1FBF3F6AE7B9A(func_72());
				unk_0xAFC1FBF3F6AE7B9A(func_88());
				unk_0xAFC1FBF3F6AE7B9A(func_216());
				unk_0xB0550BC91B0159D6(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_4), 2);
				func_337();
				func_87();
				func_359(2);
			}
			break;
	}
}

void func_87()
{
	unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 21);
	unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 22);
}

char* func_88()
{
	return "anim_casino_b@amb@casino@games@blackjack@player";
}

int func_89()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_401();
	iVar1 = (iVar0 - Local_2026.f_249);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_90()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	struct<9> Var12;
	struct<26> Var21;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	char* sVar62;
	char* sVar63;
	char* sVar64;
	char* sVar65;
	bool bVar66;
	char* sVar67;
	
	if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 >= 0)
	{
		iVar1 = (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 * 4 + Local_109.f_1575[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4]);
		iVar0 = Local_109.f_1600[iVar1];
	}
	if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 >= 0)
	{
		if (func_209(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4))
		{
			func_208("BJACK_ERROR", -1);
			return;
		}
	}
	bVar2 = false;
	if (func_53(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, Local_2026.f_257))
	{
		bVar2 = true;
	}
	func_194();
	if (func_415())
	{
		Local_3639.f_10 = 1;
	}
	Local_3639.f_11 = func_192();
	if (Local_109.f_1515[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] != 6 || Local_109.f_1575[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] != (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 - (4 * Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4)))
	{
		if ((((((unk_0xF09A4F413B0D30EB(2, 202) && !unk_0xD199EE48D2842EB1()) && !func_335()) && !unk_0x3E6C9DAD84CEFED1()) && !BitTest(Local_2026.f_250, 0)) && !Local_2026.f_234) && !func_191())
		{
			if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 > -1)
			{
				Local_3613.f_9 = Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4];
			}
			Local_3613.f_18 = func_415();
			Local_3613.f_19 = func_192();
			Local_3613.f_17 = func_190(&uLocal_3609, 0, 0);
			Local_3613.f_7 = func_401();
			Local_3639.f_2 = joaat("QUIT");
			Local_3613.f_4 = joaat("QUIT");
			Local_3613.f_25 = joaat("QUIT");
			if (Local_2026.f_0 > 1 || Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 != 0)
			{
				if (Global_262145.f_26814)
				{
					unk_0xCF03DFE4022CD1AA(&Local_3613);
				}
			}
			if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 > 0 && !Local_2026.f_232)
			{
				func_189(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1);
			}
			if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 > 0 && !Local_2026.f_233)
			{
				func_189(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2);
			}
			unk_0x340A36A700E99699(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1));
			unk_0x340A36A700E99699(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2));
			func_375(1);
			unk_0x3410421C60BF7143(1);
			return;
		}
	}
	if (((Global_2788828 == Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 || Global_2725439.f_12) || Global_1946244 == 33) || !func_187())
	{
		if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 > -1)
		{
			Local_3613.f_9 = Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4];
		}
		Local_3613.f_18 = func_415();
		Local_3613.f_19 = func_192();
		Local_3613.f_17 = func_190(&uLocal_3609, 0, 0);
		Local_3613.f_7 = func_401();
		if (Global_262145.f_26814)
		{
			unk_0xCF03DFE4022CD1AA(&Local_3613);
		}
		func_375(1);
		unk_0x3410421C60BF7143(1);
		return;
	}
	if (Local_2026.f_255 > -1)
	{
		Local_2026.f_258 = unk_0x57736A7B8965A88A(Local_2026.f_255);
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !Local_2026.f_234)
		{
			if (!unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_216(), "idle_cardgames", 3))
			{
				if (Local_2026.f_258 != -1 && (unk_0x54DE1614490C2A83(Local_2026.f_258) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), joaat("blend_out"))))
				{
					Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), func_217(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_216(), "idle_cardgames", 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x60E9DD146055C13E(Local_2026.f_255);
					Local_2026.f_1582 = "idle_cardgames";
					unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 0);
				}
			}
			else if (unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_216(), "idle_cardgames", 3))
			{
				if (Local_2026.f_258 != -1 && (unk_0x54DE1614490C2A83(Local_2026.f_258) >= 0.99f || unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), joaat("blend_out"))))
				{
					Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), func_217(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_216(), func_186(0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x60E9DD146055C13E(Local_2026.f_255);
					unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 0);
				}
			}
		}
	}
	if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 >= 0)
	{
		func_184(&(Local_2026.f_874));
		if ((unk_0x90F6E2F6488B98BA(Local_109.f_1595[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4]))) && !BitTest(Local_2026.f_250, 0))
		{
			if (Local_109.f_1515[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] != 6 || Local_109.f_1575[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] != (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 - (4 * Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4)))
			{
				func_183(unk_0x2018949B2C9FD96A(0, 202, 1), "BJACK_EXIT", &(Local_2026.f_874), 0);
			}
			else if (((unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4]), func_58(), func_25(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 - (4 * Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4)), iVar0, 0), 3) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4]), func_58(), func_25(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 - (4 * Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4)), iVar0, 1), 3)) && !BitTest(Local_109.f_1555[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4], 12)) && !BitTest(Local_2026.f_252, 0))
			{
				if (!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 14))
				{
					if (((!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 12) && !(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2 && func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) == 21)) && func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) <= 21) && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 <= 7)
					{
						func_183(unk_0x2018949B2C9FD96A(0, 201, 1), "BJACK_HIT", &(Local_2026.f_874), 0);
						func_183(unk_0x2018949B2C9FD96A(0, 203, 1), "BJACK_STAND", &(Local_2026.f_874), 0);
					}
				}
				else if ((((!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 12) && !(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2 && func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) == 21)) && func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) <= 21) && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 <= 7) || (((!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 13) && !(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2 && func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])) == 21)) && func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])) <= 21) && Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 <= 7))
				{
					func_183(unk_0x2018949B2C9FD96A(0, 201, 1), "BJACK_HIT", &(Local_2026.f_874), 0);
					func_183(unk_0x2018949B2C9FD96A(0, 203, 1), "BJACK_STAND", &(Local_2026.f_874), 0);
				}
				if (Local_2026.f_248 >= Local_2026.f_244)
				{
					if (!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 14))
					{
						if ((func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) < 21 && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2) && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 10))
						{
							func_183(unk_0x2018949B2C9FD96A(0, 204, 1), "BJACK_DOUBLE", &(Local_2026.f_874), 0);
						}
					}
					else if (!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 13) && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 11))
					{
						if (Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2)
						{
							if (func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])) < 21)
							{
								func_183(unk_0x2018949B2C9FD96A(0, 204, 1), "BJACK_DOUBLE", &(Local_2026.f_874), 0);
							}
						}
					}
					else if ((func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) < 21 && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2) && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 10))
					{
						func_183(unk_0x2018949B2C9FD96A(0, 204, 1), "BJACK_DOUBLE", &(Local_2026.f_874), 0);
					}
				}
				if (Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2 && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 14))
				{
					if (Local_2026.f_248 >= Local_2026.f_244)
					{
						if (func_35(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/][0]) == func_35(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/][1]))
						{
							func_183(unk_0x2018949B2C9FD96A(0, 206, 1), "BJACK_SPLIT", &(Local_2026.f_874), 0);
						}
					}
				}
			}
		}
		if ((Local_109.f_1515[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] == 3 && !BitTest(Local_2026.f_250, 0)) && (Local_2026.f_248 >= Local_2026.f_246 || Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 != 0))
		{
			if (!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 15) && !BitTest(Local_2026.f_252, 0))
			{
				func_183(unk_0x2018949B2C9FD96A(0, 201, 1), "BJACK_PLACE", &(Local_2026.f_874), 0);
				if (!BitTest(Local_2026.f_252, 20))
				{
					func_183(unk_0x2018949B2C9FD96A(0, 204, 1), "BJACK_BET_MAX", &(Local_2026.f_874), 0);
				}
				func_182(2, 7, "BJACK_BET_NUM", &(Local_2026.f_874));
			}
		}
		if (BitTest(Local_2026.f_250, 0))
		{
			func_183(unk_0x2018949B2C9FD96A(0, 202, 1), "IB_BACK", &(Local_2026.f_874), 0);
			func_182(2, 8, "IB_TAB", &(Local_2026.f_874));
		}
		if (Local_109.f_1515[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] < 9 || !BitTest(Local_109.f_1555[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4], 13))
		{
			if (Local_109.f_846[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*13*/].f_12 >= 2)
			{
				func_183(unk_0x2018949B2C9FD96A(0, 208, 1), "BJACK_DLR", &(Local_2026.f_874), 0);
			}
			if (Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 > 0)
			{
				func_183(unk_0x2018949B2C9FD96A(0, 207, 1), "BJACK_CARDS", &(Local_2026.f_874), 0);
			}
		}
		if (bLocal_3677 && Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] > 1)
		{
			func_183(unk_0x2018949B2C9FD96A(0, 195, 1), "BJACK_LR", &(Local_2026.f_874), 0);
		}
		if (!BitTest(Local_2026.f_250, 0))
		{
			func_183(unk_0x2018949B2C9FD96A(2, 210, 1), "BJACK_RULESb", &(Local_2026.f_874), 0);
		}
		Var3 = { func_181() };
		func_180(&(Local_2026.f_874), 1f);
		func_172(&(Local_2026.f_873), &Var3, &(Local_2026.f_874), func_179(&(Local_2026.f_874)));
		func_171(1);
	}
	func_166();
	switch (Local_2026.f_0)
	{
		case 0:
			if (Local_109.f_1515[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] == 3)
			{
				if ((Local_2026.f_244 > Local_2026.f_248 || Local_2026.f_244 < Local_2026.f_246) || Local_2026.f_244 > Local_2026.f_245)
				{
					Local_2026.f_244 = Local_2026.f_246;
				}
				Var12 = 7;
				Local_2026.f_213 = { Var12 };
				Local_2026.f_222 = { Var12 };
				Local_3613 = { Var21 };
				Local_3613.f_10 = 1;
				Local_3613.f_0 = joaat("blackjack");
				Local_3613.f_11 = func_326(unk_0x9E2D6C50374FCFA9());
				if (func_326(unk_0x9E2D6C50374FCFA9()))
				{
					Local_3613.f_20 = 1983458449;
				}
				else if (func_323())
				{
					Local_3613.f_20 = 1334658487;
				}
				else if (func_325(1) && (func_326(func_324()) || func_211(unk_0x9E2D6C50374FCFA9())))
				{
					Local_3613.f_20 = 980726932;
				}
				else
				{
					Local_3613.f_20 = 939907746;
				}
				if (func_426(unk_0x9E2D6C50374FCFA9()))
				{
					Local_3613.f_1 = 1695074466;
				}
				else if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 == 2 || Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 == 3)
				{
					Local_3613.f_1 = 1952785842;
				}
				else
				{
					Local_3613.f_1 = joaat("standard");
				}
				func_366(&uLocal_3609, 0, 0);
				Local_3613.f_3 = Local_109.f_1560[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4];
				Local_3613.f_2 = Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4;
				func_165(1);
			}
			break;
		
		case 1:
			if ((!func_323() && !(func_325(1) && func_322(func_324()))) || ((!func_326(unk_0x9E2D6C50374FCFA9()) && (func_381(Local_2026.f_247) == 2 || func_381(Local_2026.f_247) == 3)) && !(func_325(1) && func_326(func_324()))))
			{
				if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 > -1)
				{
					Local_3613.f_9 = Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4];
				}
				Local_3613.f_18 = func_415();
				Local_3613.f_19 = func_192();
				Local_3613.f_17 = func_190(&uLocal_3609, 0, 0);
				Local_3613.f_7 = func_401();
				Local_3639.f_2 = 939907746;
				Local_3613.f_4 = 939907746;
				if (Global_262145.f_26814)
				{
					unk_0xCF03DFE4022CD1AA(&Local_3613);
				}
				func_375(1);
				unk_0x3410421C60BF7143(1);
				if (Local_2026.f_256 == 1)
				{
					func_208("IT_MEMBOc", -1);
				}
				else if (Local_2026.f_256 == 2)
				{
					func_208("IT_MEMBOa", -1);
				}
				else if (Local_2026.f_256 == 3)
				{
					func_208("IT_MEMBOb", -1);
				}
				return;
			}
			if ((Local_2026.f_248 < Local_2026.f_246 && Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 == 0) && !Local_2026.f_234)
			{
				if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 > -1)
				{
					Local_3613.f_9 = Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4];
				}
				Local_3613.f_18 = func_415();
				Local_3613.f_19 = func_192();
				Local_3613.f_17 = func_190(&uLocal_3609, 0, 0);
				Local_3613.f_7 = func_401();
				Local_3639.f_2 = -1275559872;
				Local_3613.f_4 = -1275559872;
				if (Global_262145.f_26814)
				{
					unk_0xCF03DFE4022CD1AA(&Local_3613);
				}
				func_375(1);
				unk_0x3410421C60BF7143(1);
				if (func_426(unk_0x9E2D6C50374FCFA9()))
				{
					if (Local_2026.f_248 <= 0)
					{
						func_208("CAS_MG_NOCHIPS6", -1);
					}
					else
					{
						func_208("CAS_MG_LOWCHIPS6", -1);
					}
				}
				else if (Local_2026.f_248 <= 0)
				{
					func_208("CAS_MG_NOCHIPS2", -1);
				}
				else
				{
					func_208("CAS_MG_LOWCHIPS2", -1);
				}
				return;
			}
			if (func_331())
			{
				switch (func_327())
				{
					case 0:
						Local_3639.f_2 = 1982714739;
						break;
					
					case 1:
						Local_3639.f_2 = -633175758;
						break;
					
					case 2:
						Local_3639.f_2 = -1625999354;
						break;
				}
				switch (func_327())
				{
					case 0:
						Local_3613.f_4 = 1982714739;
						break;
					
					case 1:
						Local_3613.f_4 = -633175758;
						break;
					
					case 2:
						Local_3613.f_4 = -1625999354;
						break;
				}
				if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 > -1)
				{
					Local_3613.f_9 = Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4];
				}
				Local_3613.f_18 = func_415();
				Local_3613.f_19 = func_192();
				Local_3613.f_17 = func_190(&uLocal_3609, 0, 0);
				Local_3613.f_7 = func_401();
				if (Global_262145.f_26814)
				{
					unk_0xCF03DFE4022CD1AA(&Local_3613);
				}
				func_375(1);
				unk_0x3410421C60BF7143(1);
				if (func_327() == 2)
				{
					func_208("CAS_MG_CTIME", -1);
				}
				else
				{
					func_208("CAS_MG_CBAN", -1);
				}
				return;
			}
			if ((!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 15) && !BitTest(Local_2026.f_252, 0)) && (!func_350() || func_346()))
			{
				if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 > -1)
				{
					Local_3613.f_9 = Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4];
				}
				Local_3613.f_18 = func_415();
				Local_3613.f_19 = func_192();
				Local_3613.f_17 = func_190(&uLocal_3609, 0, 0);
				Local_3613.f_7 = func_401();
				if (Global_262145.f_26814)
				{
					unk_0xCF03DFE4022CD1AA(&Local_3613);
				}
				func_375(1);
				unk_0x3410421C60BF7143(1);
				return;
			}
			if (!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 15) && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 16))
			{
				if (!BitTest(Local_2026.f_252, 0))
				{
					if (((((!BitTest(Local_2026.f_253, 1) && !unk_0xD199EE48D2842EB1()) && !unk_0xF09A4F413B0D30EB(2, 204)) && !func_335()) && !unk_0x3E6C9DAD84CEFED1()) && !BitTest(Local_2026.f_250, 0))
					{
						bVar48 = unk_0x4C1B8C5717647539(2, 188);
						bVar49 = unk_0x4C1B8C5717647539(2, 187);
						if (bVar49 || (((((bVar48 && !unk_0xF09A4F413B0D30EB(2, 204)) && !unk_0xD199EE48D2842EB1()) && !func_335()) && !unk_0x3E6C9DAD84CEFED1()) && !BitTest(Local_2026.f_250, 0)))
						{
							func_67(&(Local_2026.f_1574), 0, 0);
							unk_0xCED9E32812D6C7C7(&(Local_2026.f_253), true);
						}
					}
					else if (func_65(&(Local_2026.f_1574), 100, 0))
					{
						func_63(&(Local_2026.f_1574));
						unk_0xB0550BC91B0159D6(&(Local_2026.f_253), 1);
					}
					if (((((((unk_0xF09A4F413B0D30EB(2, 204) && !bVar49) && !bVar48) && !unk_0xD199EE48D2842EB1()) && !func_335()) && !unk_0x3E6C9DAD84CEFED1()) && !BitTest(Local_2026.f_250, 0)) && !BitTest(Local_2026.f_252, 20))
					{
						unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", 1);
						bVar47 = true;
					}
					if (bVar47)
					{
						while (bVar47)
						{
							if (Local_2026.f_244 >= 10000)
							{
								iVar50 = 5000;
							}
							else if (Local_2026.f_244 >= 5000)
							{
								iVar50 = 1000;
							}
							else if (Local_2026.f_244 >= 500)
							{
								iVar50 = 500;
							}
							else if (Local_2026.f_244 >= 100)
							{
								iVar50 = 50;
							}
							else
							{
								iVar50 = 10;
							}
							if (Local_2026.f_244 > Local_2026.f_248)
							{
								Local_2026.f_244 = (Local_2026.f_244 - iVar50);
							}
							if (Local_2026.f_244 < Local_2026.f_246)
							{
								Local_2026.f_244 = Local_2026.f_246;
							}
							Local_2026.f_244 = (Local_2026.f_244 + iVar50);
							if (Local_2026.f_244 > Local_2026.f_245)
							{
								bVar47 = false;
								Local_2026.f_244 = Local_2026.f_245;
							}
							if (Local_2026.f_244 > Local_2026.f_248)
							{
								bVar47 = false;
								Local_2026.f_244 = (Local_2026.f_244 - iVar50);
							}
						}
					}
					else
					{
						if (Local_2026.f_244 >= 10000)
						{
							iVar50 = 5000;
						}
						else if (Local_2026.f_244 >= 5000)
						{
							iVar50 = 1000;
						}
						else if (Local_2026.f_244 >= 500)
						{
							iVar50 = 500;
						}
						else if (Local_2026.f_244 >= 100)
						{
							iVar50 = 50;
						}
						else
						{
							iVar50 = 10;
						}
						if (Local_2026.f_244 > Local_2026.f_248)
						{
							Local_2026.f_244 = (Local_2026.f_244 - iVar50);
						}
						if (Local_2026.f_244 < Local_2026.f_246)
						{
							Local_2026.f_244 = Local_2026.f_246;
						}
						iVar51 = Local_2026.f_244;
						if (bVar48)
						{
							Local_2026.f_244 = (Local_2026.f_244 + iVar50);
							if (Local_2026.f_244 > Local_2026.f_245)
							{
								Local_2026.f_244 = Local_2026.f_245;
							}
							if (Local_2026.f_244 > Local_2026.f_248)
							{
								Local_2026.f_244 = (Local_2026.f_244 - iVar50);
							}
							if (Local_2026.f_244 == iVar51)
							{
								if (unk_0xF09A4F413B0D30EB(2, 188) || !BitTest(Local_2026.f_252, 23))
								{
									unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 23);
								}
							}
							else
							{
								unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 23);
								unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
						if (bVar49)
						{
							if (Local_2026.f_244 <= 100)
							{
								iVar50 = 10;
							}
							else if (Local_2026.f_244 <= 500)
							{
								iVar50 = 50;
							}
							else if (Local_2026.f_244 <= 5000)
							{
								iVar50 = 500;
							}
							else if (Local_2026.f_244 <= 10000)
							{
								iVar50 = 1000;
							}
							else
							{
								iVar50 = 5000;
							}
							Local_2026.f_244 = (Local_2026.f_244 - iVar50);
							if (Local_2026.f_244 < Local_2026.f_246)
							{
								Local_2026.f_244 = Local_2026.f_246;
							}
							if (Local_2026.f_244 == iVar51)
							{
								if (unk_0xF09A4F413B0D30EB(2, 187) || !BitTest(Local_2026.f_252, 23))
								{
									unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 23);
								}
							}
							else
							{
								unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 23);
								unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
					}
					if ((Local_2026.f_244 == Local_2026.f_245 || (Local_2026.f_244 + iVar50) > Local_2026.f_245) || (Local_2026.f_244 + iVar50) > Local_2026.f_248)
					{
						unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 20);
					}
					else
					{
						unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 20);
					}
					unk_0xCED9E32812D6C7C7(&(Local_2026.f_253), false);
					iVar52 = (30 - (func_190(&(Local_109.f_1642[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*2*/]), 0, 0) / 1000));
					if (iVar52 > 0 || !func_66(&(Local_109.f_1642[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*2*/])))
					{
						if (((((((unk_0xF09A4F413B0D30EB(2, 201) && !unk_0x4C1B8C5717647539(2, 202)) && !unk_0x4C1B8C5717647539(2, 203)) && Local_2026.f_244 >= Local_2026.f_246) && !unk_0xD199EE48D2842EB1()) && !func_335()) && !unk_0x3E6C9DAD84CEFED1()) && !BitTest(Local_2026.f_250, 0))
						{
							unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), false);
							Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), func_217(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_88(), func_164(Local_2026.f_244, bVar2, 0, 0), 4f, -2f, 13, 16, 1148846080, 0);
							unk_0x60E9DD146055C13E(Local_2026.f_255);
							unk_0x3410421C60BF7143(1);
						}
						if (!func_333("BJACK_BET") && !BitTest(Local_2026.f_252, 0))
						{
							if ((!bLocal_3676 && !bLocal_3677) && !bLocal_3668)
							{
								func_163("BJACK_BET");
							}
						}
					}
					else if (func_66(&(Local_109.f_1642[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*2*/])) && func_65(&(Local_109.f_1642[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*2*/]), 30000, 0))
					{
						if (!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 15))
						{
							unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 16);
						}
					}
				}
				else
				{
					if ((Local_2026.f_258 != -1 && unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), 1503712844)) && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 15))
					{
						Local_2026.f_234 = 1;
					}
					if (Local_2026.f_234 && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 15))
					{
						if (func_160(Local_2026.f_244, &(Local_2026.f_243), 1, Local_2026.f_231))
						{
							if (Local_2026.f_243 == 3)
							{
								Local_2026.f_234 = 0;
								Local_2026.f_243 = 0;
							}
							else
							{
								Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 = Local_2026.f_244;
								unk_0x40EB1EFD921822BC(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1));
								Local_3639.f_3 = (Local_3639.f_3 - Local_2026.f_244);
								Local_3613.f_6 = (Local_3613.f_6 - Local_2026.f_244);
								if (BitTest(Local_2026.f_252, 20))
								{
									Local_3613.f_5 = 1;
								}
								Local_3639.f_12++;
								Local_3639.f_7 = (Local_3639.f_7 + Local_2026.f_244);
								Local_3613.f_12 = (Local_3613.f_12 + Local_2026.f_244);
								unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 15);
								Local_2026.f_234 = 0;
							}
						}
					}
				}
			}
			if ((func_66(&(Local_109.f_1642[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*2*/])) && Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] > 1) && (30000 - func_190(&(Local_109.f_1642[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*2*/]), 0, 0)) > 0)
			{
				if (func_190(&(Local_109.f_1642[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*2*/]), 0, 0) <= 24000)
				{
					func_159((30000 - func_190(&(Local_109.f_1642[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_159((30000 - func_190(&(Local_109.f_1642[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				}
			}
			if (Local_109.f_1515[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] > 3)
			{
				if (BitTest(Local_2026.f_253, 0) && !Local_2026.f_234)
				{
					unk_0x3410421C60BF7143(1);
					unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 0);
					if (!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 15))
					{
						unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 16);
					}
					func_165(2);
				}
			}
			func_155(Local_2026.f_244, "BJACK_BET2", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			break;
		
		case 2:
			if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 >= 0)
			{
				if (Local_109.f_846[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*13*/].f_12 >= 2)
				{
					func_63(&(Local_2026.f_1576));
					iLocal_3680 = 0;
					func_165(3);
				}
			}
			break;
		
		case 3:
			iVar53 = func_34(&(Local_109.f_846[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*13*/]), 0);
			iVar54 = func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/]));
			iVar55 = func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/]));
			iVar56 = Local_109.f_846[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*13*/].f_12;
			iVar57 = Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8;
			iVar58 = Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8;
			bVar59 = (iVar56 == 2 && iVar53 == 21);
			bVar60 = (iVar57 == 2 && iVar54 == 21);
			bVar61 = (iVar58 == 2 && iVar55 == 21);
			if (((bVar61 || iVar55 >= 21) || iVar58 == 7) && !BitTest(Local_109.f_1555[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4], 12))
			{
				unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 13);
			}
			if (((bVar60 || iVar54 >= 21) || iVar57 == 7) && !BitTest(Local_109.f_1555[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4], 12))
			{
				if (iVar54 > 21)
				{
					if (!BitTest(Local_2026.f_252, 19))
					{
						Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), func_217(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
						unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_216(), func_154(), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0x60E9DD146055C13E(Local_2026.f_255);
						unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 19);
					}
				}
				unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 12);
			}
			if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4])))
			{
				if ((unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4]), func_58(), func_25(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 - (4 * Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4)), iVar0, 0), 3) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4]), func_58(), func_25(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 - (4 * Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4)), iVar0, 1), 3)) && !BitTest(Local_109.f_1555[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4], 12))
				{
					if (func_66(&(Local_2026.f_1576)))
					{
						if ((30000 - func_190(&(Local_2026.f_1576), 0, 0)) >= 0)
						{
							if (func_190(&(Local_2026.f_1576), 0, 0) <= 24000)
							{
								func_159((30000 - func_190(&(Local_2026.f_1576), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_190(&(Local_2026.f_1576), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (func_65(&(Local_2026.f_1576), 30000, 0))
						{
							unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 12);
							unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 13);
							func_63(&(Local_2026.f_1576));
							return;
						}
					}
					else if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
					{
						if (unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_216(), func_186(1), 3))
						{
							func_366(&(Local_2026.f_1576), 0, 0);
						}
					}
					if (bVar59)
					{
						unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 12);
						unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 13);
					}
					else if (((BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 14) && BitTest(Local_109.f_1565[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4], unk_0x9E2D6C50374FCFA9())) && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 13)) && !(BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 11) && Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 > 2))
					{
						if (!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 11) || BitTest(Local_2026.f_252, 0))
						{
							if (!BitTest(Local_2026.f_252, 0))
							{
								if (((!unk_0xD199EE48D2842EB1() && !func_335()) && !unk_0x3E6C9DAD84CEFED1()) && !BitTest(Local_2026.f_250, 0))
								{
									if (unk_0xF09A4F413B0D30EB(2, 201))
									{
										Local_3613.f_22 = 1;
										if (Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2)
										{
											unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 6);
										}
										else if (Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 3)
										{
											unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 7);
										}
										else if (Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 4)
										{
											unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 8);
										}
										else if (Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 5)
										{
											unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 9);
										}
										else if (Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 6)
										{
											unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 10);
										}
										switch (unk_0x5853B15F78E1A265(0, 3))
										{
											case 0:
												sVar62 = "request_card";
												break;
											
											case 1:
												sVar62 = "request_card_alt1";
												break;
											
											case 2:
												sVar62 = "request_card_alt2";
												break;
										}
										Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), func_217(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_88(), sVar62, 4f, -2f, 13, 16, 1148846080, 0);
										unk_0x60E9DD146055C13E(Local_2026.f_255);
										unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), false);
										func_63(&(Local_2026.f_1576));
									}
									else if (unk_0xF09A4F413B0D30EB(2, 203))
									{
										Local_3613.f_21 = 1;
										switch (unk_0x5853B15F78E1A265(0, 3))
										{
											case 0:
												sVar63 = "decline_card_001";
												break;
											
											case 1:
												sVar63 = "decline_card_alt1";
												break;
											
											case 2:
												sVar63 = "decline_card_alt2";
												break;
										}
										Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), func_217(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_88(), sVar63, 4f, -2f, 13, 16, 1148846080, 0);
										unk_0x60E9DD146055C13E(Local_2026.f_255);
										unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 14);
										unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), false);
										func_63(&(Local_2026.f_1576));
									}
									else if (unk_0xF09A4F413B0D30EB(2, 204))
									{
										if (Local_2026.f_248 >= Local_2026.f_244 && iVar58 == 2)
										{
											Local_3613.f_23 = 1;
											Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), func_217(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
											unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_88(), func_164(Local_2026.f_244, bVar2, 1, 1), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0x60E9DD146055C13E(Local_2026.f_255);
											unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 12);
											unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), false);
											func_63(&(Local_2026.f_1576));
										}
									}
								}
							}
							else if (Local_2026.f_258 != -1)
							{
								if (((unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_88(), "request_card", 3) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_88(), "request_card_alt1", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_88(), "request_card_alt2", 3)) && unk_0x54DE1614490C2A83(Local_2026.f_258) >= 0.3f)
								{
									if (BitTest(Local_2026.f_252, 6))
									{
										unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 6);
										unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 5);
									}
									else if (BitTest(Local_2026.f_252, 7))
									{
										unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 7);
										unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 6);
									}
									else if (BitTest(Local_2026.f_252, 8))
									{
										unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 8);
										unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 7);
									}
									else if (BitTest(Local_2026.f_252, 9))
									{
										unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 9);
										unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 8);
									}
									else if (BitTest(Local_2026.f_252, 10))
									{
										unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 10);
										unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 9);
									}
								}
								if (((unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_88(), "decline_card_001", 3) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_88(), "decline_card_alt1", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_88(), "decline_card_alt2", 3)) && unk_0x54DE1614490C2A83(Local_2026.f_258) >= 0.3f)
								{
									if (BitTest(Local_2026.f_252, 14))
									{
										unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 14);
										unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 13);
									}
								}
								if (BitTest(Local_2026.f_252, 12))
								{
									if (unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), 1503712844))
									{
										Local_2026.f_234 = 1;
									}
									if (!BitTest(Local_2026.f_252, 17) && Local_2026.f_234)
									{
										if (func_160(Local_2026.f_244, &(Local_2026.f_243), 1, Local_2026.f_231))
										{
											if (Local_2026.f_243 == 3)
											{
												unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 12);
												Local_2026.f_234 = 0;
												Local_2026.f_243 = 0;
											}
											else
											{
												Local_3639.f_3 = (Local_3639.f_3 - Local_2026.f_244);
												Local_3613.f_6 = (Local_3613.f_6 - Local_2026.f_244);
												Local_3639.f_8 = (Local_3639.f_8 + Local_2026.f_244);
												Local_3613.f_13 = (Local_3613.f_13 + Local_2026.f_244);
												Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 = (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 + Local_2026.f_244);
												unk_0x40EB1EFD921822BC(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2));
												unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 17);
												unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 12);
												unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 11);
												Local_2026.f_234 = 0;
											}
										}
									}
								}
							}
						}
					}
					else if ((!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 10) && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 12)) || BitTest(Local_2026.f_252, 0))
					{
						if (!BitTest(Local_2026.f_252, 0))
						{
							if (((!unk_0xD199EE48D2842EB1() && !func_335()) && !unk_0x3E6C9DAD84CEFED1()) && !BitTest(Local_2026.f_250, 0))
							{
								if (unk_0xF09A4F413B0D30EB(2, 201))
								{
									Local_3613.f_22 = 1;
									if (Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2)
									{
										unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), true);
									}
									else if (Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 3)
									{
										unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 2);
									}
									else if (Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 4)
									{
										unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 3);
									}
									else if (Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 5)
									{
										unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 4);
									}
									else if (Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 6)
									{
										unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 5);
									}
									switch (unk_0x5853B15F78E1A265(0, 3))
									{
										case 0:
											sVar64 = "request_card";
											break;
										
										case 1:
											sVar64 = "request_card_alt1";
											break;
										
										case 2:
											sVar64 = "request_card_alt2";
											break;
									}
									Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), func_217(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_88(), sVar64, 4f, -2f, 13, 16, 1148846080, 0);
									unk_0x60E9DD146055C13E(Local_2026.f_255);
									unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), false);
									func_63(&(Local_2026.f_1576));
								}
								else if (unk_0xF09A4F413B0D30EB(2, 203))
								{
									Local_3613.f_21 = 1;
									switch (unk_0x5853B15F78E1A265(0, 3))
									{
										case 0:
											sVar65 = "decline_card_001";
											break;
										
										case 1:
											sVar65 = "decline_card_alt1";
											break;
										
										case 2:
											sVar65 = "decline_card_alt2";
											break;
									}
									Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), func_217(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_88(), sVar65, 4f, -2f, 13, 16, 1148846080, 0);
									unk_0x60E9DD146055C13E(Local_2026.f_255);
									unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 13);
									unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), false);
									func_63(&(Local_2026.f_1576));
								}
								else if (unk_0xF09A4F413B0D30EB(2, 204))
								{
									if (Local_2026.f_248 >= Local_2026.f_244 && iVar57 == 2)
									{
										Local_3613.f_23 = 1;
										Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), func_217(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_88(), func_164(Local_2026.f_244, bVar2, 1, 0), 4f, -2f, 13, 16, 1148846080, 0);
										unk_0x60E9DD146055C13E(Local_2026.f_255);
										unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 11);
										unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), false);
										func_63(&(Local_2026.f_1576));
									}
								}
								else if (unk_0xF09A4F413B0D30EB(2, 206))
								{
									if (!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 14))
									{
										if ((func_35(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/][0]) == func_35(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/][1]) && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2) && Local_2026.f_248 >= Local_2026.f_244)
										{
											Local_3613.f_24 = 1;
											Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), func_217(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
											unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_88(), func_164(Local_2026.f_244, bVar2, 0, 1), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0x60E9DD146055C13E(Local_2026.f_255);
											unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 15);
											unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), false);
											func_63(&(Local_2026.f_1576));
										}
									}
								}
							}
						}
						else if (Local_2026.f_258 != -1)
						{
							if (((unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_88(), "request_card", 3) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_88(), "request_card_alt1", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_88(), "request_card_alt2", 3)) && unk_0x54DE1614490C2A83(Local_2026.f_258) >= 0.3f)
							{
								if (BitTest(Local_2026.f_252, 1))
								{
									unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 1);
									unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), false);
								}
								else if (BitTest(Local_2026.f_252, 2))
								{
									unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 2);
									unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), true);
								}
								else if (BitTest(Local_2026.f_252, 3))
								{
									unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 3);
									unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 2);
								}
								else if (BitTest(Local_2026.f_252, 4))
								{
									unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 4);
									unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 3);
								}
								else if (BitTest(Local_2026.f_252, 5))
								{
									unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 5);
									unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 4);
								}
							}
							if (((unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_88(), "decline_card_001", 3) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_88(), "decline_card_alt1", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), func_88(), "decline_card_alt2", 3)) && unk_0x54DE1614490C2A83(Local_2026.f_258) >= 0.3f)
							{
								if (BitTest(Local_2026.f_252, 13))
								{
									unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 13);
									unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 12);
								}
							}
							if (BitTest(Local_2026.f_252, 11))
							{
								if (unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), 1503712844))
								{
									Local_2026.f_234 = 1;
								}
								if (!BitTest(Local_2026.f_252, 16) && Local_2026.f_234)
								{
									if (func_160(Local_2026.f_244, &(Local_2026.f_243), 1, Local_2026.f_231))
									{
										if (Local_2026.f_243 == 3)
										{
											unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 11);
											Local_2026.f_234 = 0;
											Local_2026.f_243 = 0;
										}
										else
										{
											Local_3639.f_3 = (Local_3639.f_3 - Local_2026.f_244);
											Local_3613.f_6 = (Local_3613.f_6 - Local_2026.f_244);
											Local_3639.f_7 = (Local_3639.f_7 + Local_2026.f_244);
											Local_3613.f_12 = (Local_3613.f_12 + Local_2026.f_244);
											Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 = (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 + Local_2026.f_244);
											unk_0x40EB1EFD921822BC(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1));
											unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 16);
											unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 11);
											unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 10);
											Local_2026.f_234 = 0;
										}
									}
								}
							}
							if (BitTest(Local_2026.f_252, 15))
							{
								if (unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), 1503712844))
								{
									Local_2026.f_234 = 1;
								}
								if (!BitTest(Local_2026.f_252, 18) && Local_2026.f_234)
								{
									if (func_160(Local_2026.f_244, &(Local_2026.f_243), 1, Local_2026.f_231))
									{
										if (Local_2026.f_243 == 3)
										{
											unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 15);
											Local_2026.f_234 = 0;
											Local_2026.f_243 = 0;
										}
										else
										{
											Local_3639.f_3 = (Local_3639.f_3 - Local_2026.f_244);
											Local_3613.f_6 = (Local_3613.f_6 - Local_2026.f_244);
											Local_3639.f_8 = (Local_3639.f_8 + Local_2026.f_244);
											Local_3613.f_13 = (Local_3613.f_13 + Local_2026.f_244);
											Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 = (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 + Local_2026.f_244);
											unk_0x40EB1EFD921822BC(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2));
											unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 18);
											unk_0xB0550BC91B0159D6(&(Local_2026.f_252), 15);
											unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/]), 14);
											Local_2026.f_234 = 0;
										}
									}
								}
							}
						}
					}
				}
				else if (iVar0 != unk_0x9E2D6C50374FCFA9() && iVar0 != func_420())
				{
					if (!func_333("BJACK_WAIT"))
					{
						if ((!bLocal_3676 && !bLocal_3677) && !bLocal_3668)
						{
							func_163("BJACK_WAIT");
						}
					}
				}
				else if (func_333("BJACK_WAIT"))
				{
					unk_0x3410421C60BF7143(1);
				}
			}
			if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 >= 0)
			{
				if (Local_109.f_1515[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] == 6)
				{
					if ((Local_109.f_1575[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] == (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 - (4 * Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4)) && !(!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 14) && BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 12))) && !((BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 14) && BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 12)) && BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 13)))
					{
						if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4]), func_58(), func_25(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 - (4 * Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4)), iVar0, 0), 3) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4]), func_58(), func_25(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 - (4 * Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4)), iVar0, 1), 3))
						{
							if (((Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2 && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 14)) && Local_2026.f_248 >= Local_2026.f_244) && func_35(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/][0]) == func_35(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/][1]))
							{
								if ((!bLocal_3676 && !bLocal_3677) && !bLocal_3668)
								{
									if (!func_333("BJACK_TURN_S"))
									{
										func_163("BJACK_TURN_S");
									}
								}
							}
							else if (Local_2026.f_248 >= Local_2026.f_244 && (((((!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 14) && func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) < 21) && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2) && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 10)) || (((!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 13) && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 11)) && Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2) && func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])) < 21)) || ((func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) < 21 && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2) && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 10))))
							{
								if ((!bLocal_3676 && !bLocal_3677) && !bLocal_3668)
								{
									if (!func_333("BJACK_TURN_D"))
									{
										func_163("BJACK_TURN_D");
									}
								}
							}
							else if ((!bLocal_3676 && !bLocal_3677) && !bLocal_3668)
							{
								if (!func_333("BJACK_TURN"))
								{
									func_163("BJACK_TURN");
								}
							}
						}
						else if ((func_333("BJACK_TURN") || func_333("BJACK_TURN_D")) || func_333("BJACK_TURN_S"))
						{
							unk_0x3410421C60BF7143(1);
						}
					}
					else if ((func_333("BJACK_TURN") || func_333("BJACK_TURN_D")) || func_333("BJACK_TURN_S"))
					{
						unk_0x3410421C60BF7143(1);
					}
				}
				if (Local_109.f_1515[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] == 1)
				{
					if (BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 16))
					{
						bVar66 = true;
					}
					if (Local_2026.f_259 != -1)
					{
						func_309(&(Local_2026.f_259));
						Local_2026.f_259 = -1;
					}
					Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/] = 0;
					Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 = 0;
					Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 = 0;
					Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_5 = 0;
					Local_2026.f_232 = 0;
					Local_2026.f_233 = 0;
					Local_2026.f_235 = 0;
					Local_2026.f_252 = 0;
					unk_0x3410421C60BF7143(1);
					func_165(0);
					Local_3613.f_18 = func_415();
					Local_3613.f_19 = func_192();
					Local_3613.f_17 = func_190(&uLocal_3609, 0, 0);
					Local_3613.f_7 = func_401();
					if (!func_350() || func_346())
					{
						func_375(1);
						unk_0x3410421C60BF7143(1);
						if (Global_262145.f_26814 && !bVar66)
						{
							unk_0xCF03DFE4022CD1AA(&Local_3613);
						}
						return;
					}
					if (func_331())
					{
						switch (func_327())
						{
							case 0:
								Local_3639.f_2 = 1982714739;
								break;
							
							case 1:
								Local_3639.f_2 = -633175758;
								break;
							
							case 2:
								Local_3639.f_2 = -1625999354;
								break;
						}
						switch (func_327())
						{
							case 0:
								Local_3613.f_4 = 1982714739;
								break;
							
							case 1:
								Local_3613.f_4 = -633175758;
								break;
							
							case 2:
								Local_3613.f_4 = -1625999354;
								break;
						}
						if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 > -1)
						{
							Local_3613.f_9 = Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4];
						}
						Local_3613.f_18 = func_415();
						Local_3613.f_19 = func_192();
						Local_3613.f_17 = func_190(&uLocal_3609, 0, 0);
						Local_3613.f_7 = func_401();
						if (Global_262145.f_26814 && !bVar66)
						{
							unk_0xCF03DFE4022CD1AA(&Local_3613);
						}
						func_375(1);
						unk_0x3410421C60BF7143(1);
						if (func_327() == 2)
						{
							func_208("CAS_MG_CTIME", -1);
						}
						else
						{
							func_208("CAS_MG_CBAN", -1);
						}
						return;
					}
					if (Global_262145.f_26814 && !bVar66)
					{
						unk_0xCF03DFE4022CD1AA(&Local_3613);
					}
				}
				if (Local_109.f_1515[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] > 6)
				{
					if ((func_333("BJACK_TURN") || func_333("BJACK_TURN_D")) || func_333("BJACK_TURN_S"))
					{
						unk_0x3410421C60BF7143(1);
					}
				}
				if (Local_109.f_1515[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] == 9 && iVar54 > 0)
				{
					if (Local_2026.f_232 && Local_2026.f_233)
					{
						if (!BitTest(Local_2026.f_252, 19))
						{
							if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 > -1)
							{
								Local_3613.f_9 = Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4];
							}
							Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), func_217(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3), 2, 0, 1, 1065353216, 0, 1065353216);
							sVar67 = func_153(Local_3613.f_6);
							if (func_53(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, Local_2026.f_257))
							{
								if (Local_2026.f_244 >= 35000)
								{
									if (((iVar54 <= 21 && iVar57 == 7) || (iVar55 <= 21 && iVar58 == 7)) || ((iVar54 == 21 && iVar55 == 21) && iVar53 != 21))
									{
										sVar67 = func_152();
									}
									else if (Local_2026.f_244 >= 45000)
									{
										if ((((iVar57 >= 2 && iVar54 < 21) && iVar53 == iVar54 + 1) && iVar56 > 2) || (((iVar58 >= 2 && iVar55 < 21) && iVar53 == iVar55 + 1) && iVar56 > 2))
										{
											sVar67 = func_150();
										}
									}
								}
							}
							else if (Local_2026.f_244 >= 4500)
							{
								if (((iVar54 <= 21 && iVar57 == 7) || (iVar55 <= 21 && iVar58 == 7)) || ((iVar54 == 21 && iVar55 == 21) && iVar53 != 21))
								{
									sVar67 = func_152();
								}
							}
							unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_216(), sVar67, 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x60E9DD146055C13E(Local_2026.f_255);
							unk_0xCED9E32812D6C7C7(&(Local_2026.f_252), 19);
						}
					}
					if ((Local_2026.f_232 && Local_2026.f_233) && !Local_2026.f_235)
					{
						if (Local_3613.f_14 > 0)
						{
							if (func_106(Local_3613.f_14, &(Local_2026.f_243), 1))
							{
								unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", 1);
								Local_2026.f_235 = 1;
							}
						}
					}
					if ((((Local_2026.f_232 && Local_2026.f_233) && !bLocal_3676) && !bLocal_3677) && !bLocal_3668)
					{
						if (Local_3613.f_14 > 0)
						{
							if (Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 <= 0)
							{
								if (bVar60 && !bVar59)
								{
									if (!func_105("BJACK_WIN_2", "BJACK_BJ", Local_3613.f_14))
									{
										func_104("BJACK_WIN_2", "BJACK_BJ", Local_3613.f_14);
									}
								}
								else if (iVar54 <= 21 && iVar57 == 7)
								{
									if (!func_105("BJACK_WIN_2", "BJACK_7CC", Local_3613.f_14))
									{
										func_104("BJACK_WIN_2", "BJACK_7CC", Local_3613.f_14);
									}
								}
								else if (iVar54 == iVar53)
								{
									if (!func_333("BJACK_PUSH"))
									{
										func_163("BJACK_PUSH");
									}
								}
								else if (!func_103("BJACK_WIN_1", iVar54, Local_3613.f_14))
								{
									func_102("BJACK_WIN_1", iVar54, Local_3613.f_14);
								}
							}
							else if ((bVar60 || bVar61) && !bVar59)
							{
								if (bVar60 && bVar61)
								{
									if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_3613.f_14))
									{
										func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_3613.f_14);
									}
								}
								else if (bVar60)
								{
									if (iVar55 <= 21 && iVar58 == 7)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_3613.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_3613.f_14);
										}
									}
									else if (iVar55 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_3613.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_3613.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_4", "BJACK_BJ", iVar55, Local_3613.f_14))
									{
										func_98("BJACK_WIN_4", "BJACK_BJ", iVar55, Local_3613.f_14);
									}
								}
								else if (bVar61)
								{
									if (iVar54 <= 21 && iVar57 == 7)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_3613.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_3613.f_14);
										}
									}
									else if (iVar54 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_3613.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_3613.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_5", "BJACK_BJ", iVar54, Local_3613.f_14))
									{
										func_98("BJACK_WIN_5", "BJACK_BJ", iVar54, Local_3613.f_14);
									}
								}
							}
							else if ((iVar54 <= 21 && iVar57 == 7) || (iVar55 <= 21 && iVar58 == 7))
							{
								if ((iVar54 <= 21 && iVar57 == 7) && (iVar55 <= 21 && iVar58 == 7))
								{
									if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_3613.f_14))
									{
										func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_3613.f_14);
									}
								}
								else if (iVar54 <= 21 && iVar57 == 7)
								{
									if (iVar55 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_3613.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_3613.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_4", "BJACK_7CC", iVar55, Local_3613.f_14))
									{
										func_98("BJACK_WIN_4", "BJACK_7CC", iVar55, Local_3613.f_14);
									}
								}
								else if (iVar55 <= 21 && iVar58 == 7)
								{
									if (iVar54 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_3613.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_3613.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_5", "BJACK_7CC", iVar54, Local_3613.f_14))
									{
										func_98("BJACK_WIN_5", "BJACK_7CC", iVar54, Local_3613.f_14);
									}
								}
							}
							else if (iVar54 == iVar53 && iVar55 == iVar53)
							{
								if (!func_333("BJACK_PUSH"))
								{
									func_163("BJACK_PUSH");
								}
							}
							else if (iVar54 <= 21 && iVar55 <= 21)
							{
								if (!func_97("BJACK_WIN_3", iVar54, iVar55, Local_3613.f_14))
								{
									func_96("BJACK_WIN_3", iVar54, iVar55, Local_3613.f_14);
								}
							}
							else if (iVar54 <= 21)
							{
								if (!func_99("BJACK_WIN_5", "BJACK_BUSTED", iVar54, Local_3613.f_14))
								{
									func_98("BJACK_WIN_5", "BJACK_BUSTED", iVar54, Local_3613.f_14);
								}
							}
							else if (iVar55 <= 21)
							{
								if (!func_99("BJACK_WIN_4", "BJACK_BUSTED", iVar55, Local_3613.f_14))
								{
									func_98("BJACK_WIN_4", "BJACK_BUSTED", iVar55, Local_3613.f_14);
								}
							}
						}
						else if (bVar59)
						{
							if (!func_95("BJACK_LOSE_2", "BJACK_BJ"))
							{
								func_94("BJACK_LOSE_2", "BJACK_BJ");
							}
						}
						else if (Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 <= 0)
						{
							if (iVar54 > 21)
							{
								if (!func_95("BJACK_LOSE_3", "BJACK_BUSTED"))
								{
									func_94("BJACK_LOSE_3", "BJACK_BUSTED");
								}
							}
							else if (!func_320("BJACK_LOSE_1", iVar53))
							{
								func_93("BJACK_LOSE_1", iVar53);
							}
						}
						else if (iVar54 > 21 && iVar55 > 21)
						{
							if (!func_92("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED"))
							{
								func_91("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED");
							}
						}
						else if (!func_320("BJACK_LOSE_1", iVar53))
						{
							func_93("BJACK_LOSE_1", iVar53);
						}
					}
					if (!BitTest(iLocal_3680, 0))
					{
						if (bVar60)
						{
							Local_3639.f_17++;
						}
						unk_0xCED9E32812D6C7C7(&iLocal_3680, false);
					}
					if (!BitTest(iLocal_3680, 1))
					{
						if (bVar61)
						{
							Local_3639.f_17++;
						}
						unk_0xCED9E32812D6C7C7(&iLocal_3680, true);
					}
					if (!BitTest(iLocal_3680, 2))
					{
						if (iVar57 == 7 && iVar54 <= 21)
						{
							Local_3639.f_20++;
						}
						unk_0xCED9E32812D6C7C7(&iLocal_3680, 2);
					}
					if (!BitTest(iLocal_3680, 3))
					{
						if (iVar58 == 7 && iVar55 <= 21)
						{
							Local_3639.f_20++;
						}
						unk_0xCED9E32812D6C7C7(&iLocal_3680, 3);
					}
					if (!BitTest(iLocal_3680, 4))
					{
						if (iVar54 > 21)
						{
							Local_3639.f_19++;
						}
						unk_0xCED9E32812D6C7C7(&iLocal_3680, 4);
					}
					if (!BitTest(iLocal_3680, 5))
					{
						if (iVar55 > 21)
						{
							Local_3639.f_19++;
						}
						unk_0xCED9E32812D6C7C7(&iLocal_3680, 5);
					}
					if (!BitTest(iLocal_3680, 6))
					{
						if (bVar59)
						{
							Local_3639.f_16++;
						}
						unk_0xCED9E32812D6C7C7(&iLocal_3680, 6);
					}
					if (bVar59 && !bVar60)
					{
						if (!Local_2026.f_232)
						{
							func_189(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1);
							Local_3613.f_4 = 1183160994;
							Local_3613.f_25 = 1183160994;
							Local_3639.f_14++;
							Local_2026.f_232 = 1;
							Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 = 0;
						}
					}
					else if (iVar54 <= 21)
					{
						unk_0x8E580AB902917360();
						if (bVar60 && !bVar59)
						{
							if (!Local_2026.f_232)
							{
								Local_3639.f_3 = (Local_3639.f_3 + unk_0xF34EE736CF047844((IntToFloat(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1) * 2.5f)));
								Local_3613.f_6 = (Local_3613.f_6 + unk_0xF34EE736CF047844((IntToFloat(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1) * 2.5f)));
								Local_3613.f_14 = (Local_3613.f_14 + unk_0xF34EE736CF047844((IntToFloat(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1) * 2.5f)));
								Local_3613.f_15 = 1;
								Local_3639.f_13++;
								Local_3613.f_4 = -67503841;
								Local_3613.f_25 = -67503841;
								Local_2026.f_232 = 1;
								Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 = 0;
							}
						}
						else if (iVar57 == 7 && !bVar59)
						{
							if (!Local_2026.f_232)
							{
								Local_3639.f_3 = (Local_3639.f_3 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 * 2);
								Local_3613.f_6 = (Local_3613.f_6 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 * 2);
								Local_3613.f_14 = (Local_3613.f_14 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 * 2);
								Local_3613.f_15 = 1;
								Local_3639.f_13++;
								Local_3613.f_4 = 579613221;
								Local_3613.f_25 = 579613221;
								Local_2026.f_232 = 1;
								Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 = 0;
							}
						}
						else if (iVar54 > iVar53 || iVar53 > 21)
						{
							if (!Local_2026.f_232)
							{
								Local_3613.f_25 = joaat("win");
								Local_3639.f_3 = (Local_3639.f_3 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 * 2);
								Local_3613.f_6 = (Local_3613.f_6 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 * 2);
								Local_3613.f_14 = (Local_3613.f_14 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 * 2);
								Local_3613.f_15 = 1;
								Local_3639.f_13++;
								Local_3613.f_4 = joaat("win");
								Local_3613.f_25 = joaat("win");
								Local_2026.f_232 = 1;
								Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 = 0;
							}
						}
						else if (iVar54 < iVar53 || (bVar59 && !bVar60))
						{
							if (!Local_2026.f_232)
							{
								func_189(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1);
								Local_3613.f_4 = joaat("lose");
								Local_3613.f_25 = joaat("lose");
								Local_3639.f_14++;
								Local_2026.f_232 = 1;
								Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 = 0;
							}
						}
						else if (!Local_2026.f_232)
						{
							Local_3613.f_25 = joaat("push");
							Local_3613.f_4 = joaat("push");
							Local_3639.f_3 = (Local_3639.f_3 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1);
							Local_3613.f_6 = (Local_3613.f_6 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1);
							Local_3613.f_14 = (Local_3613.f_14 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1);
							Local_3613.f_15 = 0;
							Local_2026.f_232 = 1;
							func_189(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1);
							Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 = 0;
						}
					}
					else if (!Local_2026.f_232)
					{
						func_189(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1);
						Local_3613.f_4 = joaat("Bust");
						Local_3613.f_25 = joaat("Bust");
						Local_3639.f_14++;
						Local_2026.f_232 = 1;
						Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 = 0;
					}
					unk_0x340A36A700E99699(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1));
					if (BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 14))
					{
						if (bVar59 && !bVar61)
						{
							if (!Local_2026.f_233)
							{
								func_189(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2);
								if (Local_3613.f_25 == joaat("Bust"))
								{
									Local_3613.f_4 = 1702151977;
									Local_3613.f_25 = 1702151977;
								}
								else if (Local_3613.f_25 == 579613221)
								{
									Local_3613.f_4 = -2136370424;
									Local_3613.f_25 = -2136370424;
								}
								else if (Local_3613.f_25 == joaat("lose"))
								{
									Local_3613.f_4 = -1858785397;
									Local_3613.f_25 = -1858785397;
								}
								else if (Local_3613.f_25 == joaat("win"))
								{
									Local_3613.f_4 = 1946656957;
									Local_3613.f_25 = 1946656957;
								}
								else if (Local_3613.f_25 == -67503841)
								{
									Local_3613.f_4 = -2105313098;
									Local_3613.f_25 = -2105313098;
								}
								else if (Local_3613.f_25 == joaat("push"))
								{
									Local_3613.f_4 = -185627827;
									Local_3613.f_25 = -185627827;
								}
								else if (Local_3613.f_25 == 1183160994)
								{
									Local_3613.f_4 = -1498042471;
									Local_3613.f_25 = -1498042471;
								}
								Local_3639.f_14++;
								Local_2026.f_233 = 1;
								Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 = 0;
							}
						}
						else if (iVar55 <= 21)
						{
							unk_0x8E580AB902917360();
							if (bVar61 && !bVar59)
							{
								if (!Local_2026.f_233)
								{
									Local_3639.f_3 = (Local_3639.f_3 + unk_0xF34EE736CF047844((IntToFloat(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2) * 2.5f)));
									Local_3613.f_6 = (Local_3613.f_6 + unk_0xF34EE736CF047844((IntToFloat(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2) * 2.5f)));
									Local_3613.f_14 = (Local_3613.f_14 + unk_0xF34EE736CF047844((IntToFloat(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2) * 2.5f)));
									Local_3613.f_15 = 1;
									Local_3639.f_13++;
									if (Local_3613.f_25 == joaat("Bust"))
									{
										Local_3613.f_4 = 124952027;
										Local_3613.f_25 = 124952027;
									}
									else if (Local_3613.f_25 == 579613221)
									{
										Local_3613.f_4 = 670083824;
										Local_3613.f_25 = 670083824;
									}
									else if (Local_3613.f_25 == joaat("lose"))
									{
										Local_3613.f_4 = 446908156;
										Local_3613.f_25 = 446908156;
									}
									else if (Local_3613.f_25 == joaat("win"))
									{
										Local_3613.f_4 = -1508284701;
										Local_3613.f_25 = -1508284701;
									}
									else if (Local_3613.f_25 == -67503841)
									{
										Local_3613.f_4 = 179647057;
										Local_3613.f_25 = 179647057;
									}
									else if (Local_3613.f_25 == joaat("push"))
									{
										Local_3613.f_4 = -890276844;
										Local_3613.f_25 = -890276844;
									}
									else if (Local_3613.f_25 == 1183160994)
									{
										Local_3613.f_4 = 1647364704;
										Local_3613.f_25 = 1647364704;
									}
									Local_2026.f_233 = 1;
									Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 = 0;
								}
							}
							else if (iVar58 == 7 && !bVar59)
							{
								if (!Local_2026.f_233)
								{
									Local_3639.f_3 = (Local_3639.f_3 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 * 2);
									Local_3613.f_6 = (Local_3613.f_6 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 * 2);
									Local_3613.f_14 = (Local_3613.f_14 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 * 2);
									Local_3613.f_15 = 1;
									Local_3639.f_13++;
									if (Local_3613.f_25 == joaat("Bust"))
									{
										Local_3613.f_4 = -1196919212;
										Local_3613.f_25 = -1196919212;
									}
									else if (Local_3613.f_25 == 579613221)
									{
										Local_3613.f_4 = 505925496;
										Local_3613.f_25 = 505925496;
									}
									else if (Local_3613.f_25 == joaat("lose"))
									{
										Local_3613.f_4 = 2012692421;
										Local_3613.f_25 = 2012692421;
									}
									else if (Local_3613.f_25 == joaat("win"))
									{
										Local_3613.f_4 = 326925312;
										Local_3613.f_25 = 326925312;
									}
									else if (Local_3613.f_25 == -67503841)
									{
										Local_3613.f_4 = 487743337;
										Local_3613.f_25 = 487743337;
									}
									else if (Local_3613.f_25 == joaat("push"))
									{
										Local_3613.f_4 = 526318358;
										Local_3613.f_25 = 526318358;
									}
									else if (Local_3613.f_25 == 1183160994)
									{
										Local_3613.f_4 = -1506449922;
										Local_3613.f_25 = -1506449922;
									}
									Local_2026.f_233 = 1;
									Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 = 0;
								}
							}
							else if (iVar55 > iVar53 || iVar53 > 21)
							{
								if (!Local_2026.f_233)
								{
									Local_3639.f_3 = (Local_3639.f_3 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 * 2);
									Local_3613.f_6 = (Local_3613.f_6 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 * 2);
									Local_3613.f_14 = (Local_3613.f_14 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 * 2);
									Local_3613.f_15 = 1;
									Local_3639.f_13++;
									if (Local_3613.f_25 == joaat("Bust"))
									{
										Local_3613.f_4 = -1738969561;
										Local_3613.f_25 = -1738969561;
									}
									else if (Local_3613.f_25 == 579613221)
									{
										Local_3613.f_4 = -67385374;
										Local_3613.f_25 = -67385374;
									}
									else if (Local_3613.f_25 == joaat("lose"))
									{
										Local_3613.f_4 = 299063546;
										Local_3613.f_25 = 299063546;
									}
									else if (Local_3613.f_25 == joaat("win"))
									{
										Local_3613.f_4 = 639742496;
										Local_3613.f_25 = 639742496;
									}
									else if (Local_3613.f_25 == -67503841)
									{
										Local_3613.f_4 = -833750355;
										Local_3613.f_25 = -833750355;
									}
									else if (Local_3613.f_25 == joaat("push"))
									{
										Local_3613.f_4 = 656184401;
										Local_3613.f_25 = 656184401;
									}
									else if (Local_3613.f_25 == 1183160994)
									{
										Local_3613.f_4 = 1380168920;
										Local_3613.f_25 = 1380168920;
									}
									Local_2026.f_233 = 1;
									Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 = 0;
								}
							}
							else if (iVar55 < iVar53 || (bVar59 && !bVar61))
							{
								if (!Local_2026.f_233)
								{
									func_189(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2);
									if (Local_3613.f_25 == joaat("Bust"))
									{
										Local_3613.f_4 = 1702151977;
										Local_3613.f_25 = 1702151977;
									}
									else if (Local_3613.f_25 == 579613221)
									{
										Local_3613.f_4 = -2136370424;
										Local_3613.f_25 = -2136370424;
									}
									else if (Local_3613.f_25 == joaat("lose"))
									{
										Local_3613.f_4 = -1858785397;
										Local_3613.f_25 = -1858785397;
									}
									else if (Local_3613.f_25 == joaat("win"))
									{
										Local_3613.f_4 = 1946656957;
										Local_3613.f_25 = 1946656957;
									}
									else if (Local_3613.f_25 == -67503841)
									{
										Local_3613.f_4 = -2105313098;
										Local_3613.f_25 = -2105313098;
									}
									else if (Local_3613.f_25 == joaat("push"))
									{
										Local_3613.f_4 = -185627827;
										Local_3613.f_25 = -185627827;
									}
									else if (Local_3613.f_25 == 1183160994)
									{
										Local_3613.f_4 = -1498042471;
										Local_3613.f_25 = -1498042471;
									}
									Local_3639.f_14++;
									Local_2026.f_233 = 1;
									Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 = 0;
								}
							}
							else if (!Local_2026.f_233)
							{
								Local_3639.f_3 = (Local_3639.f_3 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2);
								Local_3613.f_6 = (Local_3613.f_6 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2);
								Local_3613.f_14 = (Local_3613.f_14 + Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2);
								Local_3613.f_15 = 1;
								func_189(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2);
								if (Local_3613.f_25 == joaat("Bust"))
								{
									Local_3613.f_4 = -546469405;
									Local_3613.f_25 = -546469405;
								}
								else if (Local_3613.f_25 == 579613221)
								{
									Local_3613.f_4 = -1749032290;
									Local_3613.f_25 = -1749032290;
								}
								else if (Local_3613.f_25 == joaat("lose"))
								{
									Local_3613.f_4 = 1067415172;
									Local_3613.f_25 = 1067415172;
								}
								else if (Local_3613.f_25 == joaat("win"))
								{
									Local_3613.f_4 = 297125168;
									Local_3613.f_25 = 297125168;
								}
								else if (Local_3613.f_25 == -67503841)
								{
									Local_3613.f_4 = 2030981611;
									Local_3613.f_25 = 2030981611;
								}
								else if (Local_3613.f_25 == joaat("push"))
								{
									Local_3613.f_4 = -684984318;
									Local_3613.f_25 = -684984318;
								}
								else if (Local_3613.f_25 == 1183160994)
								{
									Local_3613.f_4 = 497946612;
									Local_3613.f_25 = 497946612;
								}
								Local_2026.f_233 = 1;
								Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 = 0;
							}
						}
						else if (!Local_2026.f_233)
						{
							func_189(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2);
							if (Local_3613.f_25 == joaat("Bust"))
							{
								Local_3613.f_4 = 1449908402;
								Local_3613.f_25 = 1449908402;
							}
							else if (Local_3613.f_25 == 579613221)
							{
								Local_3613.f_4 = 1210238154;
								Local_3613.f_25 = 1210238154;
							}
							else if (Local_3613.f_25 == joaat("lose"))
							{
								Local_3613.f_4 = 1540383360;
								Local_3613.f_25 = 1540383360;
							}
							else if (Local_3613.f_25 == joaat("win"))
							{
								Local_3613.f_4 = -457084933;
								Local_3613.f_25 = -457084933;
							}
							else if (Local_3613.f_25 == -67503841)
							{
								Local_3613.f_4 = -740134090;
								Local_3613.f_25 = -740134090;
							}
							else if (Local_3613.f_25 == joaat("push"))
							{
								Local_3613.f_4 = -1825077928;
								Local_3613.f_25 = -1825077928;
							}
							else if (Local_3613.f_25 == 1183160994)
							{
								Local_3613.f_4 = 1676117351;
								Local_3613.f_25 = 1676117351;
							}
							Local_3639.f_14++;
							Local_2026.f_233 = 1;
							Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 = 0;
						}
						unk_0x340A36A700E99699(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2));
					}
					else
					{
						Local_2026.f_233 = 1;
					}
				}
			}
			break;
	}
}

void func_91(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0x26C23BE14F66F202(sParam2);
	unk_0x89B545A74F93B1DD(0, 1, 0, -1);
}

bool func_92(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0x26C23BE14F66F202(sParam2);
	return unk_0x73CB3406A86A3A02(0);
}

void func_93(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	unk_0x89B545A74F93B1DD(0, 1, 0, -1);
}

void func_94(char* sParam0, char* sParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0x89B545A74F93B1DD(0, 1, 0, -1);
}

bool func_95(char* sParam0, char* sParam1)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	return unk_0x73CB3406A86A3A02(0);
}

void func_96(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	unk_0x2AE954BA77A66307(iParam2);
	unk_0x2AE954BA77A66307(iParam3);
	unk_0x89B545A74F93B1DD(0, 1, 0, -1);
}

bool func_97(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	unk_0x2AE954BA77A66307(iParam2);
	unk_0x2AE954BA77A66307(iParam3);
	return unk_0x73CB3406A86A3A02(0);
}

void func_98(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0x2AE954BA77A66307(iParam2);
	unk_0x2AE954BA77A66307(iParam3);
	unk_0x89B545A74F93B1DD(0, 1, 0, -1);
}

bool func_99(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0x2AE954BA77A66307(iParam2);
	unk_0x2AE954BA77A66307(iParam3);
	return unk_0x73CB3406A86A3A02(0);
}

void func_100(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0x26C23BE14F66F202(sParam2);
	unk_0x2AE954BA77A66307(iParam3);
	unk_0x89B545A74F93B1DD(0, 1, 0, -1);
}

bool func_101(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0x26C23BE14F66F202(sParam2);
	unk_0x2AE954BA77A66307(iParam3);
	return unk_0x73CB3406A86A3A02(0);
}

void func_102(char* sParam0, int iParam1, int iParam2)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	unk_0x2AE954BA77A66307(iParam2);
	unk_0x89B545A74F93B1DD(0, 1, 0, -1);
}

bool func_103(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	unk_0x2AE954BA77A66307(iParam2);
	return unk_0x73CB3406A86A3A02(0);
}

void func_104(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0x2AE954BA77A66307(iParam2);
	unk_0x89B545A74F93B1DD(0, 1, 0, -1);
}

bool func_105(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0x2AE954BA77A66307(iParam2);
	return unk_0x73CB3406A86A3A02(0);
}

bool func_106(int iParam0, var uParam1, int iParam2)
{
	return func_107(iParam0, 3, uParam1, iParam2, -1);
}

int func_107(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_149(iParam1))
	{
	}
	else
	{
		iVar0 = func_401();
		iVar1 = (Global_262145.f_27174 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_147();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_128(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_401() - Global_1966106);
			func_127(iVar4, 1);
			func_125();
			func_124();
			Global_1966106 = (Global_1966106 + iVar4);
			if (iParam1 == 0)
			{
				func_118(iVar4);
				Global_2725354 = 1;
			}
			else if (iParam1 == 3)
			{
				func_111(iVar4);
				if (iVar4 >= Global_262145.f_27182)
				{
					Global_2725353 = 1;
				}
				else if (iVar4 >= Global_262145.f_27181)
				{
					Global_2725354 = 1;
				}
			}
			Var5.f_0 = func_110(iParam1);
			Var5.f_1 = func_109(iParam1, iParam3, iParam4);
			if (func_108(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (unk_0xEEE6DAFBF451B942(-1) + unk_0xA257ACF32A90B705());
			Var5.f_6 = Global_1966106;
			unk_0x40B7BAFAE68B3B4B(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 11:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_117();
	iVar1 = unk_0x48352343BC5A41AE();
	iVar2 = func_115();
	if (iVar0 == 0)
	{
		func_114();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_27176)
	{
		func_113();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_27178)
	{
		func_112(joaat("mpply_casino_chips_won_gd"), Global_262145.f_27178);
		func_113();
		Global_2725354 = 1;
	}
	else
	{
		func_112(joaat("mpply_casino_chips_won_gd"), (iVar2 + iParam0));
	}
}

void func_112(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, 1);
	}
}

void func_113()
{
	func_114();
}

void func_114()
{
	func_112(joaat("mpply_casino_chips_wontim"), unk_0x48352343BC5A41AE());
}

int func_115()
{
	return func_116(joaat("mpply_casino_chips_won_gd"));
}

int func_116(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_117()
{
	return func_116(joaat("mpply_casino_chips_wontim"));
}

void func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_123();
	iVar1 = unk_0x48352343BC5A41AE();
	iVar2 = func_122();
	if (iVar0 == 0)
	{
		func_121();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_27175)
	{
		func_120();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_119()
	{
		func_112(joaat("mpply_casino_chips_pur_gd"), func_119());
		func_120();
	}
	else
	{
		func_112(joaat("mpply_casino_chips_pur_gd"), (iVar2 + iParam0));
	}
}

int func_119()
{
	if (func_326(unk_0x9E2D6C50374FCFA9()))
	{
		return Global_262145.f_26970;
	}
	return Global_262145.f_26969;
}

void func_120()
{
	func_121();
}

void func_121()
{
	func_112(joaat("mpply_casino_chips_purtim"), unk_0x48352343BC5A41AE());
}

int func_122()
{
	return func_116(joaat("mpply_casino_chips_pur_gd"));
}

int func_123()
{
	return func_116(joaat("mpply_casino_chips_purtim"));
}

void func_124()
{
	if (BitTest(Global_1966179, 6))
	{
		unk_0xCED9E32812D6C7C7(&Global_1966179, 9);
		func_366(&Global_1966182, 0, 0);
	}
}

void func_125()
{
	if (func_126())
	{
		unk_0xCED9E32812D6C7C7(&Global_1966179, true);
	}
}

bool func_126()
{
	return (BitTest(Global_1966179, 6) || BitTest(Global_1966179, 5));
}

void func_127(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	unk_0xCED9E32812D6C7C7(&Global_1966179, 6);
	Global_1966180 = iParam0;
	Global_1966181 = iParam1;
}

bool func_128(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_108(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_146())
	{
		if (*uParam0 == 0)
		{
			if (func_145() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_110(iParam1);
			iVar5 = -22148635;
			if (func_149(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_141(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_141(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_136())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_135(func_145()))
			{
				if (func_134(func_145()) == 2)
				{
					unk_0xCDE1C8CEF9603C08(func_133(func_145()));
					if (func_149(iParam1))
					{
						unk_0xD3FFCBEE9841C8F1(iVar0, iParam2);
					}
					else
					{
						unk_0xF746375EF933064E(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_129(func_145());
			}
		}
	}
	else if (iVar0 > 0 || unk_0x616226219F841621(iVar0, 0, 1, 0, -1, 0))
	{
		if (func_149(iParam1))
		{
			unk_0xD3FFCBEE9841C8F1(iVar0, iParam2);
		}
		else
		{
			unk_0xF746375EF933064E(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_129(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_132(iParam0))
		{
			if (!bVar0)
			{
				unk_0x349E25EA131C0E2A();
			}
		}
		else if (!bVar0)
		{
			unk_0x5ACE3DE15EF4A616(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_130(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_130(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_131(&(uParam0->f_14));
	func_131(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_131(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_132(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_134(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_135(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_136()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_145();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_19()) || unk_0xBA5B5030B7954DAA())
		{
			if (func_140(Global_4534105[iVar2 /*85*/].f_66.f_6, Global_4534105[iVar2 /*85*/].f_66.f_4, Global_4534105[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4535607 = 1;
			}
			return 0;
		}
		if (Global_2726699)
		{
			if (Global_4534105[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4534105[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_133(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0xE894C3F21E583743(iVar3))
		{
			Global_4534105[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4534105[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar2 /*85*/].f_66.f_14 = unk_0x8142A6539DDC180F();
			if (bVar0)
			{
				Global_4534105[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4534105[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4534105[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_137(Global_4534105[iVar2 /*85*/], iVar2);
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	return 0;
}

void func_137(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_139(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_138();
		unk_0x2700C00F82C16BF0(1, &Var0, 36, iVar36);
	}
}

void func_138()
{
	unk_0xAF76A37C80EFD1D8("AM_ARENA_SHP");
}

var func_139(bool bParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, iParam0);
	}
	return uVar0;
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
			case 208223429:
			case -1433071892:
			case 761999406:
			case -1101941763:
			case 1748245957:
			case 1036772696:
			case -1384648535:
			case -800037808:
			case -695852120:
			case 77355315:
			case 2097889166:
			case 1707592130:
			case 1628412596:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_141(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_19()) || unk_0xBA5B5030B7954DAA())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_145();
	if (iVar1 == -1)
	{
		if (!func_143(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_142(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4534105[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4534105[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4534105[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x598E220BD27F56CA(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_143(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_19()) || unk_0xBA5B5030B7954DAA())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4534105[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4534105[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x3F5B892C35F3FF91())
		{
			unk_0x349E25EA131C0E2A();
		}
	}
	if (bVar0 || unk_0x76503DCD0BB2D833(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_144(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_144(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_146())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = uParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = unk_0x8142A6539DDC180F();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_137(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_145()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_133(iVar0) != 2147483647)
		{
			if (func_132(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_146()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

int func_147()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_119() - func_122());
	iVar1 = (Global_262145.f_27174 - func_401());
	iVar2 = func_148();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_148()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_119();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (unk_0x5D4AF7E88039C9FA())
	{
		if (unk_0x616226219F841621(iVar0, 0, 1, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (unk_0xA257ACF32A90B705() + unk_0xEEE6DAFBF451B942(-1));
		}
	}
	else if (unk_0x616226219F841621(iVar0, 0, 1, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0x3543F80EAC8D303C();
	}
	return iVar1;
}

int func_149(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_150()
{
	if (func_151())
	{
		switch (unk_0x5853B15F78E1A265(0, 5))
		{
			case 0:
				return "female_reaction_terrible_var_01";
			
			case 1:
				return "female_reaction_terrible_var_02";
			
			case 2:
				return "female_reaction_terrible_var_03";
			
			case 3:
				return "female_reaction_terrible_var_04";
			
			case 4:
				return "female_reaction_terrible_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x5853B15F78E1A265(0, 4))
		{
			case 0:
				return "reaction_terrible_var_01";
			
			case 1:
				return "reaction_terrible_var_02";
			
			case 2:
				return "reaction_terrible_var_03";
			
			case 3:
				return "reaction_terrible_var_04";
			}
		
		default:
	}
	return "";
}

bool func_151()
{
	return func_51(unk_0x9E2D6C50374FCFA9());
}

char* func_152()
{
	if (func_151())
	{
		switch (unk_0x5853B15F78E1A265(0, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			
			case 1:
				return "female_reaction_great_var_02";
			
			case 2:
				return "female_reaction_great_var_03";
			
			case 3:
				return "female_reaction_great_var_04";
			
			case 4:
				return "female_reaction_great_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x5853B15F78E1A265(0, 4))
		{
			case 0:
				return "reaction_great_var_01";
			
			case 1:
				return "reaction_great_var_02";
			
			case 2:
				return "reaction_great_var_03";
			
			case 3:
				return "reaction_great_var_04";
			}
		
		default:
	}
	return "";
}

char* func_153(int iParam0)
{
	if (func_151())
	{
		if ((func_426(unk_0x9E2D6C50374FCFA9()) || func_381(Local_2026.f_247) == 2) || func_381(Local_2026.f_247) == 3)
		{
			if (iParam0 > 10000 && Local_3613.f_4 != joaat("push"))
			{
				switch (unk_0x5853B15F78E1A265(0, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					
					case 1:
						return "female_reaction_good_var_02";
					
					case 2:
						return "female_reaction_good_var_03";
					
					case 3:
						return "female_reaction_good_var_04";
					
					default:
				}
			}
			else if (iParam0 > -10000 || Local_3613.f_4 == joaat("push"))
			{
				switch (unk_0x5853B15F78E1A265(0, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					
					case 1:
						return "female_reaction_impartial_var_02";
					
					case 2:
						return "female_reaction_impartial_var_03";
					
					case 3:
						return "female_reaction_impartial_var_04";
					
					case 4:
						return "female_reaction_impartial_var_05";
					
					case 5:
						return "female_reaction_impartial_var_06";
					
					case 6:
						return "female_reaction_impartial_var_07";
					
					default:
				}
			}
			else
			{
				switch (unk_0x5853B15F78E1A265(0, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					
					case 1:
						return "female_reaction_bad_var_02";
					
					case 2:
						return "female_reaction_bad_var_03";
					
					case 3:
						return "female_reaction_bad_var_04";
					}
				
				default:
			}
		}
		else if (iParam0 > 1000 && Local_3613.f_4 != joaat("push"))
		{
			switch (unk_0x5853B15F78E1A265(0, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				
				case 1:
					return "female_reaction_good_var_02";
				
				case 2:
					return "female_reaction_good_var_03";
				
				case 3:
					return "female_reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -1000 || Local_3613.f_4 == joaat("push"))
		{
			switch (unk_0x5853B15F78E1A265(0, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				
				case 1:
					return "female_reaction_impartial_var_02";
				
				case 2:
					return "female_reaction_impartial_var_03";
				
				case 3:
					return "female_reaction_impartial_var_04";
				
				case 4:
					return "female_reaction_impartial_var_05";
				
				case 5:
					return "female_reaction_impartial_var_06";
				
				case 6:
					return "female_reaction_impartial_var_07";
				
				default:
			}
		}
		else
		{
			switch (unk_0x5853B15F78E1A265(0, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				
				case 1:
					return "female_reaction_bad_var_02";
				
				case 2:
					return "female_reaction_bad_var_03";
				
				case 3:
					return "female_reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if ((func_426(unk_0x9E2D6C50374FCFA9()) || func_381(Local_2026.f_247) == 2) || func_381(Local_2026.f_247) == 3)
	{
		if (iParam0 > 10000 && Local_3613.f_4 != joaat("push"))
		{
			switch (unk_0x5853B15F78E1A265(0, 4))
			{
				case 0:
					return "reaction_good_var_01";
				
				case 1:
					return "reaction_good_var_02";
				
				case 2:
					return "reaction_good_var_03";
				
				case 3:
					return "reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -10000 || Local_3613.f_4 == joaat("push"))
		{
			switch (unk_0x5853B15F78E1A265(0, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				
				case 1:
					return "reaction_impartial_var_02";
				
				case 2:
					return "reaction_impartial_var_03";
				
				case 3:
					return "reaction_impartial_var_04";
				
				case 4:
					return "reaction_impartial_var_05";
				
				case 5:
					return "reaction_impartial_var_06";
				
				case 6:
					return "reaction_impartial_var_07";
				
				case 7:
					return "reaction_impartial_var_08";
				
				default:
			}
		}
		else
		{
			switch (unk_0x5853B15F78E1A265(0, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				
				case 1:
					return "reaction_bad_var_02";
				
				case 2:
					return "reaction_bad_var_03";
				
				case 3:
					return "reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if (iParam0 > 1000 && Local_3613.f_4 != joaat("push"))
	{
		switch (unk_0x5853B15F78E1A265(0, 4))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			case 3:
				return "reaction_good_var_04";
			
			default:
		}
	}
	else if (iParam0 > -1000 || Local_3613.f_4 == joaat("push"))
	{
		switch (unk_0x5853B15F78E1A265(0, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			case 4:
				return "reaction_impartial_var_05";
			
			case 5:
				return "reaction_impartial_var_06";
			
			case 6:
				return "reaction_impartial_var_07";
			
			case 7:
				return "reaction_impartial_var_08";
			
			default:
		}
	}
	else
	{
		switch (unk_0x5853B15F78E1A265(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

char* func_154()
{
	if (func_151())
	{
		switch (unk_0x5853B15F78E1A265(0, 4))
		{
			case 0:
				return "female_reaction_bad_var_01";
			
			case 1:
				return "female_reaction_bad_var_02";
			
			case 2:
				return "female_reaction_bad_var_03";
			
			case 3:
				return "female_reaction_bad_var_04";
			
			default:
		}
	}
	else
	{
		switch (unk_0x5853B15F78E1A265(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

void func_155(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_158(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_157(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_156(3, iVar0);
		Global_1649593.f_2839[iVar0] = uParam0;
		StringCopy(&(Global_1649593.f_2839.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2839.f_183[iVar0] = iParam3;
		Global_1649593.f_2839.f_172[iVar0] = iParam2;
		Global_1649593.f_2839.f_205[iVar0] = iParam4;
		Global_1649593.f_2839.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_2839.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_2839.f_420[iVar0] = iParam7;
		Global_1649593.f_2839.f_453[iVar0] = iParam8;
		Global_1649593.f_2839.f_431[iVar0] = iParam9;
		Global_1649593.f_2839.f_442[iVar0] = iParam10;
		Global_1649593.f_2839.f_464[iVar0] = iParam11;
		Global_1649593.f_2839.f_475[iVar0] = iParam12;
		Global_1649593.f_2839.f_486[iVar0] = iParam13;
		Global_1649593.f_2839.f_497[iVar0] = iParam14;
	}
}

void func_156(int iParam0, bool bParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_157(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

int func_158(var uParam0)
{
	if (unk_0xE8F6C1F695B25B91(uParam0))
	{
		return 1;
	}
	else if (unk_0x3C57C2F07FEE34D2(uParam0, "") || unk_0x3C57C2F07FEE34D2(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_159(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_157(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_156(7, iVar0);
		Global_1649593.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[iVar0] = iParam2;
		Global_1649593.f_4659.f_216[iVar0] = iParam3;
		Global_1649593.f_4659.f_183[iVar0] = iParam4;
		Global_1649593.f_4659.f_194[iVar0] = iParam5;
		Global_1649593.f_4659.f_249[iVar0] = iParam6;
		Global_1649593.f_4659.f_260[iVar0] = iParam7;
		Global_1649593.f_4659.f_205[iVar0] = iParam8;
		Global_1649593.f_4659.f_314[iVar0] = iParam9;
		Global_1649593.f_4659.f_325[iVar0] = iParam10;
		Global_1649593.f_4659.f_357[iVar0] = iParam11;
		Global_1649593.f_4659.f_238[iVar0] = iParam12;
		Global_1649593.f_4659.f_271[iVar0] = iParam13;
		Global_1649593.f_4659.f_368[iVar0] = iParam14;
		Global_1649593.f_4659.f_379[iVar0] = iParam15;
		Global_1649593.f_4659.f_390[iVar0] = iParam16;
		Global_1649593.f_4659.f_227[iVar0] = iParam17;
	}
}

int func_160(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_146() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_162(iParam0))
	{
		return func_161(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_161(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_149(iParam1))
	{
	}
	else
	{
		iVar0 = func_401();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_146() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_128(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1966106 - func_401());
			if (iParam1 == 1)
			{
				Global_2725353 = 1;
			}
			else if (iVar2 >= Global_262145.f_27183)
			{
				Global_2725354 = 1;
			}
			func_127(iVar2, 0);
			func_125();
			func_124();
			Global_1966106 = (Global_1966106 - iVar2);
			Var3.f_0 = func_110(iParam1);
			Var3.f_1 = func_109(iParam1, iParam3, iParam4);
			if (func_108(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (unk_0xEEE6DAFBF451B942(-1) + unk_0xA257ACF32A90B705());
			Var3.f_6 = Global_1966106;
			Var3.f_7 = iParam5;
			unk_0x40B7BAFAE68B3B4B(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (func_331())
	{
		return 0;
	}
	iVar0 = func_401();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_163(char* sParam0)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 1, 0, -1);
}

char* func_164(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (bParam1)
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large_split";
				}
			
			default:
		}
		return "place_bet_small_split";
	}
	if (((Local_2026.f_247 == 1 || Local_2026.f_247 == 5) || Local_2026.f_247 == 9) || Local_2026.f_247 == 13)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 5000:
					case 10000:
					case 15000:
					case 20000:
					case 25000:
					case 30000:
					case 35000:
					case 40000:
					case 45000:
					case 50000:
						return "place_bet_double_down_player_02";
					
					default:
				}
			}
			else
			{
				return "place_bet_small_player_02";
			}
		}
		if (!bParam1)
		{
			return "place_bet_small_player_02";
		}
		else
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large_player_02";
				
				default:
			}
			return "place_bet_small_player_02";
		}
	}
	else
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 5000:
					case 10000:
					case 15000:
					case 20000:
					case 25000:
					case 30000:
					case 35000:
					case 40000:
					case 45000:
					case 50000:
						return "place_bet_double_down";
					
					default:
				}
			}
			else
			{
				switch (unk_0x5853B15F78E1A265(0, 4))
				{
					case 0:
						return "place_bet_small";
					
					case 1:
						return "place_bet_small_alt1";
					
					case 2:
						return "place_bet_small_alt2";
					
					case 3:
						return "place_bet_small_alt3";
					}
				}
			
			default:
		}
		if (!bParam1)
		{
			switch (unk_0x5853B15F78E1A265(0, 4))
			{
				case 0:
					return "place_bet_small";
				
				case 1:
					return "place_bet_small_alt1";
				
				case 2:
					return "place_bet_small_alt2";
				
				case 3:
					return "place_bet_small_alt3";
				
				default:
			}
		}
		else
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large";
				
				default:
			}
			switch (unk_0x5853B15F78E1A265(0, 4))
			{
				case 0:
					return "place_bet_small";
				
				case 1:
					return "place_bet_small_alt1";
				
				case 2:
					return "place_bet_small_alt2";
				
				case 3:
					return "place_bet_small_alt3";
				}
			}
		
		default:
	}
	return "";
}

void func_165(int iParam0)
{
	Local_2026.f_0 = iParam0;
}

void func_166()
{
	char* sVar0;
	
	if (BitTest(Local_2026.f_250, 2))
	{
		unk_0xB0550BC91B0159D6(&(Local_2026.f_250), 2);
	}
	unk_0x7653D561C9574763(2, 210, 1);
	unk_0x07899AAA5D680386(2, 210);
	if (!BitTest(Local_2026.f_250, 0))
	{
		if (unk_0x51844F589D928A86(2, 210))
		{
			unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
			unk_0xCED9E32812D6C7C7(&(Local_2026.f_250), false);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_381(Local_2026.f_247) == 2 || func_381(Local_2026.f_247) == 3) || func_426(unk_0x9E2D6C50374FCFA9()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		unk_0xA9911C122B3210B5(sVar0, 0);
		if (func_294(0, -1, 0) && unk_0x9D4AFED2949F7082(sVar0))
		{
			if (!BitTest(Local_2026.f_250, 1))
			{
				func_293(0, 0);
				func_291(1, sVar0, sVar0);
				func_290("BJACK_RULES");
				func_170(1, iLocal_3667, 9);
				func_169(1, 1, 1, 1, 1);
				func_289(-1, 1, 1);
				func_288(func_168(iLocal_3667), 0, 0);
				func_287(func_167(iLocal_3667));
				unk_0xCED9E32812D6C7C7(&(Local_2026.f_250), true);
			}
			func_247(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (unk_0x51844F589D928A86(2, 202))
		{
			unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_244(1, -1);
			unk_0x861D35D42CFD2991(sVar0);
			iLocal_3667 = 1;
			Local_2026.f_250 = 0;
			unk_0xCED9E32812D6C7C7(&(Local_2026.f_250), 2);
		}
		else if (unk_0x51844F589D928A86(2, 190))
		{
			iLocal_3667++;
			if (iLocal_3667 > 9)
			{
				iLocal_3667 = 1;
			}
			unk_0xB0550BC91B0159D6(&(Local_2026.f_250), 1);
		}
		else if (unk_0x51844F589D928A86(2, 189))
		{
			iLocal_3667 = (iLocal_3667 - 1);
			if (iLocal_3667 < 1)
			{
				iLocal_3667 = 9;
			}
			unk_0xB0550BC91B0159D6(&(Local_2026.f_250), 1);
		}
	}
}

char* func_167(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1";
		
		case 2:
			return "BJACK_RULE_2";
		
		case 3:
			return "BJACK_RULE_3";
		
		case 4:
			return "BJACK_RULE_4";
		
		case 5:
			return "BJACK_RULE_5";
		
		case 6:
			return "BJACK_RULE_6";
		
		case 7:
			return "BJACK_RULE_7";
		
		case 8:
			return "BJACK_RULE_8";
		
		case 9:
			if ((func_381(Local_2026.f_247) == 2 || func_381(Local_2026.f_247) == 3) || func_426(unk_0x9E2D6C50374FCFA9()))
			{
				return "BJACK_RULE_9b";
			}
			else
			{
				return "BJACK_RULE_9a";
			}
			break;
	}
	return "";
}

char* func_168(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1T";
		
		case 2:
			return "BJACK_RULE_2T";
		
		case 3:
			return "BJACK_RULE_3T";
		
		case 4:
			return "BJACK_RULE_4T";
		
		case 5:
			return "BJACK_RULE_5T";
		
		case 6:
			return "BJACK_RULE_6T";
		
		case 7:
			return "BJACK_RULE_7T";
		
		case 8:
			return "BJACK_RULE_8T";
		
		case 9:
			if ((func_381(Local_2026.f_247) == 2 || func_381(Local_2026.f_247) == 3) || func_426(unk_0x9E2D6C50374FCFA9()))
			{
				return "BJACK_RULE_9Tb";
			}
			else
			{
				return "BJACK_RULE_9Ta";
			}
			break;
	}
	return "";
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5466[0] = iParam0;
	Global_23150.f_5466[1] = iParam1;
	Global_23150.f_5466[2] = iParam2;
	Global_23150.f_5466[3] = iParam3;
	Global_23150.f_5466[4] = iParam4;
}

void func_170(int iParam0, int iParam1, int iParam2)
{
	Global_23150.f_6126 = iParam0;
	Global_23150.f_6127 = iParam1;
	Global_23150.f_6128 = iParam2;
}

void func_171(int iParam0)
{
	Global_1649593.f_1163 = iParam0;
}

void func_172(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0xB1C1E679BD17A4F0(2))
	{
		*uParam2 = 0;
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			if (unk_0x8FE9914D4872D601())
			{
				unk_0xEA5DEA46C3EE64D3(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xD7D6BA6E36AEC182(0);
				unk_0x6F06CF0E9AB02847();
			}
			unk_0xEA5DEA46C3EE64D3(*uParam0, "CLEAR_ALL");
			unk_0x6F06CF0E9AB02847();
		}
		func_178(uParam2);
	}
	if (Global_1577896 < 2)
	{
		func_177(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x0347CCBD719C8ADC(*uParam0))
		{
			*uParam0 = unk_0x528279F3F1EEF869("instructional_buttons");
		}
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			unk_0x966FCEABCB8FA5E7(*uParam0, "CLEAR_ALL");
			if (unk_0x8FE9914D4872D601())
			{
				unk_0xEA5DEA46C3EE64D3(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xD7D6BA6E36AEC182(1);
				unk_0x6F06CF0E9AB02847();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_176(unk_0x2018949B2C9FD96A(iVar1, iVar2, 1));
						if (iVar3 < 363)
						{
							func_176(unk_0x2018949B2C9FD96A(iVar1, iVar3, 1));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						uVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_176(unk_0x19214818F925D149(iVar4, uVar5, 1));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x4ADC8B166E139423(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0x28594D0D61DB1278(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x2AE954BA77A66307(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x2AE954BA77A66307(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xD1D4F8D5470AFA4C();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x4ADC8B166E139423(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x76DB21247AE4E4E2(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xD1D4F8D5470AFA4C();
					}
					else
					{
						func_175(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x8FE9914D4872D601())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							unk_0xD7D6BA6E36AEC182(1);
							unk_0x4F47E317C74C543B(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							unk_0xD7D6BA6E36AEC182(0);
							unk_0x4F47E317C74C543B(363);
						}
					}
					unk_0x6F06CF0E9AB02847();
				}
				else
				{
					unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(bVar0);
					func_176(&(uParam2->f_1[bVar0 /*57*/]));
					if (!unk_0xACC32B78196FBC2A(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_176(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x4ADC8B166E139423(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0x28594D0D61DB1278(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x2AE954BA77A66307(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x2AE954BA77A66307(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xD1D4F8D5470AFA4C();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x4ADC8B166E139423(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x76DB21247AE4E4E2(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xD1D4F8D5470AFA4C();
					}
					else
					{
						func_175(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x8FE9914D4872D601())
					{
						unk_0xD7D6BA6E36AEC182(0);
						unk_0x4F47E317C74C543B(363);
					}
					unk_0x6F06CF0E9AB02847();
				}
				bVar0++;
			}
			unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_MAX_WIDTH");
			unk_0xCA5D23E5F0F0306F(uParam2->f_699);
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x4F47E317C74C543B(false);
			unk_0x6F06CF0E9AB02847();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_174(*uParam0, uParam1);
	}
	func_173();
}

void func_173()
{
	unk_0xAC765EF46E85A446(7);
	unk_0xAC765EF46E85A446(6);
	unk_0xAC765EF46E85A446(8);
	unk_0xAC765EF46E85A446(9);
}

void func_174(var uParam0, var uParam1)
{
	unk_0xC4353D240DCE9533(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_175(var uParam0)
{
	unk_0x4ADC8B166E139423(uParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_176(char* sParam0)
{
	unk_0x341872E4D54CD053(sParam0);
}

void func_177(int iParam0)
{
	Global_1577896 = iParam0;
}

void func_178(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_179(var uParam0)
{
	return uParam0->f_692;
}

void func_180(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_181()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_182(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	unk_0xCED9E32812D6C7C7(&(uParam3->f_689), iVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	unk_0xCED9E32812D6C7C7(&(uParam3->f_690), bVar0);
	uParam3->f_693++;
}

void func_183(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_184(var uParam0)
{
	func_185(uParam0);
	uParam0->f_692 = 1;
}

void func_185(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 363;
		uParam0->f_1[iVar0 /*57*/].f_56 = 363;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

var func_186(bool bParam0)
{
	if (func_151())
	{
		if (!bParam0)
		{
			switch (unk_0x5853B15F78E1A265(0, 8))
			{
				case 0:
					Local_2026.f_1582 = "female_idle_cardgames_var_01";
					break;
				
				case 1:
					Local_2026.f_1582 = "female_idle_cardgames_var_02";
					break;
				
				case 2:
					Local_2026.f_1582 = "female_idle_cardgames_var_03";
					break;
				
				case 3:
					Local_2026.f_1582 = "female_idle_cardgames_var_04";
					break;
				
				case 4:
					Local_2026.f_1582 = "female_idle_cardgames_var_05";
					break;
				
				case 5:
					Local_2026.f_1582 = "female_idle_cardgames_var_06";
					break;
				
				case 6:
					Local_2026.f_1582 = "female_idle_cardgames_var_07";
					break;
				
				case 7:
					Local_2026.f_1582 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (unk_0x5853B15F78E1A265(0, 13))
		{
			case 0:
				Local_2026.f_1582 = "idle_cardgames_var_01";
				break;
			
			case 1:
				Local_2026.f_1582 = "idle_cardgames_var_02";
				break;
			
			case 2:
				Local_2026.f_1582 = "idle_cardgames_var_03";
				break;
			
			case 3:
				Local_2026.f_1582 = "idle_cardgames_var_04";
				break;
			
			case 4:
				Local_2026.f_1582 = "idle_cardgames_var_05";
				break;
			
			case 5:
				Local_2026.f_1582 = "idle_cardgames_var_06";
				break;
			
			case 6:
				Local_2026.f_1582 = "idle_cardgames_var_07";
				break;
			
			case 7:
				Local_2026.f_1582 = "idle_cardgames_var_08";
				break;
			
			case 8:
				Local_2026.f_1582 = "idle_cardgames_var_09";
				break;
			
			case 9:
				Local_2026.f_1582 = "idle_cardgames_var_10";
				break;
			
			case 10:
				Local_2026.f_1582 = "idle_cardgames_var_11";
				break;
			
			case 11:
				Local_2026.f_1582 = "idle_cardgames_var_12";
				break;
			
			case 12:
				Local_2026.f_1582 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_2026.f_1582;
}

int func_187()
{
	if (func_188() == 0)
	{
		return 1;
	}
	return 0;
}

int func_188()
{
	return Global_1574632.f_18;
}

void func_189(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_117();
	iVar1 = unk_0x48352343BC5A41AE();
	iVar2 = func_115();
	if (iVar0 == 0)
	{
		func_114();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_27176)
	{
		func_113();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_27177)
	{
		func_112(joaat("mpply_casino_chips_won_gd"), Global_262145.f_27177);
		func_113();
		Global_2725354 = 1;
	}
	else
	{
		func_112(joaat("mpply_casino_chips_won_gd"), (iVar2 - iParam0));
	}
}

int func_190(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0);
		}
		else
		{
			return unk_0x780A854E3A976A66(unk_0xE75390F3CA208D5E(), *uParam0);
		}
	}
	return unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0);
}

int func_191()
{
	if ((Local_2026.f_232 && Local_2026.f_233) && (!Local_2026.f_235 && Local_3613.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

int func_192()
{
	if (unk_0x10490C0971778A41() != func_193())
	{
		return unk_0xE6DC7EE71BCE8000(unk_0x6B01934FA503547F(unk_0x10490C0971778A41()));
	}
	return 0;
}

int func_193()
{
	return -1;
}

void func_194()
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	int iVar24;
	
	if (!unk_0x4C1B8C5717647539(2, 207))
	{
		if (bLocal_3677)
		{
			func_298(unk_0x9E2D6C50374FCFA9(), 0, 256, 0);
		}
		bLocal_3677 = false;
	}
	if (!unk_0x4C1B8C5717647539(2, 208))
	{
		if (bLocal_3676)
		{
			func_298(unk_0x9E2D6C50374FCFA9(), 0, 256, 0);
		}
		bLocal_3676 = false;
	}
	if ((((Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 >= 0 && !unk_0xD199EE48D2842EB1()) && !func_335()) && !unk_0x3E6C9DAD84CEFED1()) && (Local_109.f_1515[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] < 9 || !BitTest(Local_109.f_1555[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4], 13)))
	{
		if (Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 > 0)
		{
			if ((((unk_0x4C1B8C5717647539(2, 207) && !unk_0x4C1B8C5717647539(2, 208)) && !bLocal_3676) && !func_66(&uLocal_3678)) && !unk_0x876B1078E90C91CB(Local_2026.f_242))
			{
				if (!bLocal_3677)
				{
					if (unk_0x4DE6A646AFB7CF5C(0) == 4)
					{
					}
					func_298(unk_0x9E2D6C50374FCFA9(), 0, 0, 0);
					bLocal_3677 = true;
				}
			}
		}
		else
		{
			if (bLocal_3677)
			{
				func_298(unk_0x9E2D6C50374FCFA9(), 0, 256, 0);
			}
			bLocal_3677 = false;
		}
		if (Local_109.f_846[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*13*/].f_12 >= 2)
		{
			if ((((unk_0x4C1B8C5717647539(2, 208) && !unk_0x4C1B8C5717647539(2, 207)) && !bLocal_3677) && !func_66(&uLocal_3678)) && !unk_0x876B1078E90C91CB(Local_2026.f_242))
			{
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
				{
					func_298(unk_0x9E2D6C50374FCFA9(), 0, 0, 0);
				}
				bLocal_3676 = true;
			}
		}
		else
		{
			if (bLocal_3676)
			{
				func_298(unk_0x9E2D6C50374FCFA9(), 0, 256, 0);
			}
			bLocal_3676 = false;
		}
	}
	else
	{
		if (bLocal_3677 || bLocal_3676)
		{
			func_298(unk_0x9E2D6C50374FCFA9(), 0, 256, 0);
		}
		bLocal_3677 = false;
		bLocal_3676 = false;
	}
	if (bLocal_3676 || bLocal_3677)
	{
		unk_0x4B6A8FC4666F4A3B(1);
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 166, 1);
		}
		if (!unk_0xA37204C64473B324("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0x66B27A59829491D3("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!unk_0x876B1078E90C91CB(Local_2026.f_242))
		{
			Local_2026.f_242 = unk_0xAE96F9AFF21228DC(26379945, 1);
			unk_0x15F5DB94F871E803(Local_2026.f_242, func_207(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3, Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, bLocal_3676), func_206(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3, Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, bLocal_3676), func_205(bLocal_3676), 0, 1, 1, 2);
			unk_0x9BAE3263D9B1FCB9(Local_2026.f_242, "HAND_SHAKE", 0.03f);
			unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
		}
		else if (bLocal_3676)
		{
			if (Local_109.f_1525[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4])
			{
				if (func_27(&(Local_109.f_846[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*13*/])) == 21 && Local_109.f_846[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*13*/].f_12 == 2)
				{
					if (!func_95("BJACK_D_HAND2", "BJACK_BJ"))
					{
						func_94("BJACK_D_HAND2", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_109.f_846[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*13*/])) > 21)
				{
					if (!func_95("BJACK_D_HAND2", "BJACK_BUSTED"))
					{
						func_94("BJACK_D_HAND2", "BJACK_BUSTED");
					}
				}
				else if (!func_320("BJACK_D_HAND1", func_27(&(Local_109.f_846[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*13*/]))))
				{
					func_93("BJACK_D_HAND1", func_27(&(Local_109.f_846[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*13*/])));
				}
			}
			else if (!func_320("BJACK_D_HAND1", func_35(Local_109.f_846[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*13*/][1])))
			{
				func_93("BJACK_D_HAND1", func_35(Local_109.f_846[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 /*13*/][1]));
			}
			fVar0 = unk_0x703CB0B4057DDDF5(Local_2026.f_242);
			fVar1 = 50f;
			fVar1 = func_204(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3, 1);
			fVar0 = func_202(fVar0, fVar1, 0.2f, 4);
			unk_0x15F5DB94F871E803(Local_2026.f_242, func_207(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3, Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, bLocal_3676), func_206(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3, Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, bLocal_3676), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_3677)
		{
			fVar4 = unk_0x703CB0B4057DDDF5(Local_2026.f_242);
			fVar5 = 50f;
			Var6 = { unk_0xE42645792657F001(Local_2026.f_242, 2) };
			Var9 = { 0f, 0f, 0f };
			Var12 = { -38.1166f, -0.0930717f, -102.613f };
			Var15 = { unk_0x97A9BB81C66772B5(Local_2026.f_242) };
			Var18 = { 0f, 0f, 0f };
			Var21 = { 966.621f, 32.009f, 116.621f };
			if (Var6.f_2 < 0f)
			{
				Var6.f_2 = (Var6.f_2 + 360f);
			}
			if (!func_66(&uLocal_3674))
			{
				iVar24 = unk_0xF439FF1991626CB9(2, 30);
				bVar2 = iVar24 < 100;
				bVar3 = iVar24 > 150;
				if (bVar2 || bVar3)
				{
					func_67(&uLocal_3674, 0, 0);
				}
			}
			else if (func_65(&uLocal_3674, 500, 0))
			{
				func_63(&uLocal_3674);
			}
			if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 >= 0 && Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] > 1)
			{
				if (bVar2)
				{
					iLocal_3669 = (iLocal_3669 - 1);
					if (iLocal_3669 < func_201(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3))
					{
						iLocal_3669 = func_201(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3);
					}
				}
				if (bVar3)
				{
					iLocal_3669++;
					if (iLocal_3669 > func_200(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3))
					{
						iLocal_3669 = func_200(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3);
					}
				}
			}
			else
			{
				iLocal_3669 = 0;
			}
			Var21 = { func_207(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3, Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, 0) };
			Var12 = { func_199(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3) };
			fVar5 = func_204(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3, 0);
			if (Var12.f_2 < 0f)
			{
				Var12.f_2 = (Var12.f_2 + 360f);
			}
			Var9 = { func_197(Var6, Var12, 0.2f, 4) };
			Var18 = { func_196(Var15, Var21, 0.2f, 4) };
			if (Var9.f_2 > 180f)
			{
				Var9.f_2 = (Var9.f_2 - 360f);
			}
			else if (Var9.f_2 < -180f)
			{
				Var9.f_2 = (Var9.f_2 + 360f);
			}
			if (func_195(Var6, Var12, 10f, 0) && func_195(Var15, Var21, 0.1f, 0))
			{
				fVar4 = func_202(fVar4, fVar5, 0.2f, 4);
			}
			unk_0x15F5DB94F871E803(Local_2026.f_242, Var18, Var9, fVar4, 0, 1, 1, 2);
		}
	}
	else
	{
		if (unk_0xA37204C64473B324("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0x0AF8D3A06BB92903("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (unk_0x876B1078E90C91CB(Local_2026.f_242))
		{
			unk_0x4B6A8FC4666F4A3B(1);
			if (!func_66(&uLocal_3678) && bLocal_3668)
			{
				func_67(&uLocal_3678, 0, 0);
				unk_0x9DCF157443EA30D6("DefaultBlinkOutro", 0, 0);
			}
			else if (func_65(&uLocal_3678, 100, 0) || !bLocal_3668)
			{
				unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
				unk_0x588DDCB644C6486A(Local_2026.f_242, 0);
				unk_0x3410421C60BF7143(1);
				func_63(&uLocal_3678);
				bLocal_3668 = false;
				iLocal_3669 = 0;
			}
		}
	}
	if (bLocal_3677 || bLocal_3668)
	{
		if ((Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 >= 2 && ((!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 13) && !BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 11)) || (((BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 11) && unk_0xCCDCD6672DAE6835(Local_109.f_1595[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4])) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4]))) && unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4]), func_58(), func_14(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4, Local_109.f_1575[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4], 1), 3)))) || (BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/], 11) && Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 < 3))
		{
			if (func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])) == 21 && Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_BJ"))
				{
					func_94("BJACK_P_HAND2", "BJACK_BJ");
				}
			}
			else if (func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])) <= 21 && Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 7)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_7CC"))
				{
					func_94("BJACK_P_HAND2", "BJACK_7CC");
				}
			}
			else if (func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])) > 21)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_BUSTED"))
				{
					func_94("BJACK_P_HAND2", "BJACK_BUSTED");
				}
			}
			else if (!func_320("BJACK_P_HAND1", func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/]))))
			{
				func_93("BJACK_P_HAND1", func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])));
			}
		}
		else if (Local_109.f_1575[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4] != (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 - (4 * Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4)) && Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 >= 2)
		{
			if (func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])) == 21 && Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2)
			{
				if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) == 21 && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) <= 21 && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 7)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) > 21)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_BJ", func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_BJ", func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])));
				}
			}
			else if (func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])) <= 21 && Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 7)
			{
				if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) == 21 && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC");
					}
				}
				else if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) <= 21 && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 7)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC");
					}
				}
				else if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) > 21)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_7CC", func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_7CC", func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])));
				}
			}
			else if (func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])) > 21)
			{
				if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) == 21 && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED");
					}
				}
				else if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) <= 21 && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 7)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED");
					}
				}
				else if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) > 21)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_BUSTED", func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_BUSTED", func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])));
				}
			}
			else if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) == 21 && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_BJ", func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_BJ", func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])));
				}
			}
			else if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) <= 21 && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 7)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_7CC", func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_7CC", func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])));
				}
			}
			else if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) > 21)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_BUSTED", func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_BUSTED", func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])));
				}
			}
			else if (!func_103("BJACK_SHOW_1", func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])), func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/]))))
			{
				func_102("BJACK_SHOW_1", func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])), func_27(&(Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/])));
			}
		}
		else if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) == 21 && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 2)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_BJ"))
			{
				func_94("BJACK_P_HAND2", "BJACK_BJ");
			}
		}
		else if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) <= 21 && Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 == 7)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_7CC"))
			{
				func_94("BJACK_P_HAND2", "BJACK_7CC");
			}
		}
		else if (func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])) > 21)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_BUSTED"))
			{
				func_94("BJACK_P_HAND2", "BJACK_BUSTED");
			}
		}
		else if (!func_320("BJACK_P_HAND1", func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/]))))
		{
			func_93("BJACK_P_HAND1", func_27(&(Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/])));
		}
	}
}

int func_195(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_196(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	struct<3> Var0;
	
	Var0.f_0 = func_202(Param0.f_0, Param3.f_0, fParam6, iParam7);
	Var0.f_1 = func_202(Param0.f_1, Param3.f_1, fParam6, iParam7);
	Var0.f_2 = func_202(Param0.f_2, Param3.f_2, fParam6, iParam7);
	return Var0;
}

Vector3 func_197(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	struct<3> Var0;
	
	Var0.f_0 = func_198(Param0.f_0, Param3.f_0, fParam6, iParam7);
	Var0.f_1 = func_198(Param0.f_1, Param3.f_1, fParam6, iParam7);
	Var0.f_2 = func_198(Param0.f_2, Param3.f_2, fParam6, iParam7);
	return Var0;
}

float func_198(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x48053974ED6F63CE((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_202(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_199(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_217(iParam0) };
	Var3 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_3669)
			{
				case 0:
					Var3 = { -60.84f, 0f, -87.48f };
					break;
				
				case -1:
					Var3 = { -33.84f, 0f, -51.84f };
					break;
				
				case -2:
					Var3 = { -22.68f, 0f, -58.68f };
					break;
				
				case -3:
					Var3 = { -18f, 0f, -72f };
					break;
			}
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_3669)
			{
				case 0:
					Var3 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					Var3 = { -33.48f, 0f, -123.48f };
					break;
				
				case -1:
					Var3 = { -36f, 0f, -45f };
					break;
				
				case -2:
					Var3 = { -22.68f, 0f, -51.48f };
					break;
			}
			break;
		
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_3669)
			{
				case 0:
					Var3 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					Var3 = { -33.84f, 0f, -130.32f };
					break;
				
				case 2:
					Var3 = { -22.32f, 0f, -124.92f };
					break;
				
				case -1:
					Var3 = { -35.64f, 0f, -50.4f };
					break;
			}
			break;
		
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_3669)
			{
				case 0:
					Var3 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					Var3 = { -34.56f, 0f, -126f };
					break;
				
				case 2:
					Var3 = { -22.32f, 0f, -119.52f };
					break;
				
				case 3:
					Var3 = { -18.36f, 0f, -104.4f };
					break;
			}
			break;
	}
	return Vector(Var0.f_2, 0f, 0f) + Var3;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 0;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return 1;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return 2;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return -3;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return -2;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return -1;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 0;
		
		default:
	}
	return 0;
}

float func_202(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = unk_0xE3621CC40F31FE2E(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - unk_0xE3621CC40F31FE2E((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-unk_0xD0FFB162F40A139C(func_203((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (unk_0xE3621CC40F31FE2E(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_202(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_202(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_203(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_204(int iParam0, bool bParam1)
{
	float fVar0;
	
	fVar0 = 50f;
	if (bParam1)
	{
		return 37.8425f;
	}
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_3669)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
				
				case -2:
					fVar0 = 26.8741f;
					break;
				
				case -3:
					fVar0 = 26.8741f;
					break;
			}
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_3669)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
				
				case -2:
					fVar0 = 26.8741f;
					break;
			}
			break;
		
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_3669)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case 2:
					fVar0 = 26.8741f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
			}
			break;
		
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_3669)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case 2:
					fVar0 = 26.8741f;
					break;
				
				case 3:
					fVar0 = 26.8741f;
					break;
			}
			break;
	}
	return fVar0;
}

float func_205(bool bParam0)
{
	float fVar0;
	
	fVar0 = 35.3669f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	return fVar0;
}

Vector3 func_206(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		return Vector(func_69(iParam1), 0f, 0f) + Vector(0f, 0.061f, -59.1316f);
	}
	else
	{
		Var0 = { func_217(iParam0) };
		return Vector(Var0.f_2, 0f, 0f) + Vector(-87.48f, 0f, -60.84f);
	}
	return 0f, 0f, 0f;
}

Vector3 func_207(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		return unk_0x6DB7FBD602C51670(func_70(iParam1), func_69(iParam1), -0.0094f, -0.0611f, 1.5098f);
	}
	else
	{
		Var0 = { func_217(iParam0) };
		return unk_0x6DB7FBD602C51670(func_357(iParam0), Var0.f_2, 0.245f, 0f, 1.415f);
	}
	return 0f, 0f, 0f;
}

void func_208(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_209(int iParam0)
{
	if (Local_109.f_1515[iParam0] == 2)
	{
		if (!BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_5, 0))
		{
			Local_2026.f_2 = { Local_109.f_1[iParam0 /*211*/] };
			unk_0xCED9E32812D6C7C7(&(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_5), false);
		}
	}
	else if (Local_109.f_1515[iParam0] > 2 && BitTest(Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_5, 0))
	{
		if (Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 > 0)
		{
			if (Local_2026.f_213.f_8 != Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 || (Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 > 0 && Local_2026.f_222.f_8 != Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8))
			{
				Local_2026.f_213 = { Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/] };
			}
			else
			{
				if (Local_2026.f_213[iLocal_3672] != Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/][iLocal_3672])
				{
					iLocal_3671 = 0;
					iLocal_3672 = 0;
					iLocal_3673 = 0;
					if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 > -1)
					{
						Local_3613.f_9 = Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4];
					}
					Local_3613.f_18 = func_415();
					Local_3613.f_19 = func_192();
					Local_3613.f_17 = func_190(&uLocal_3609, 0, 0);
					Local_3613.f_7 = func_401();
					if (Global_262145.f_26814)
					{
						unk_0xCF03DFE4022CD1AA(&Local_3613);
					}
					func_375(1);
					unk_0x3410421C60BF7143(1);
					return 1;
				}
				iLocal_3672++;
				if (iLocal_3672 >= Local_2026.f_213.f_8)
				{
					iLocal_3672 = 0;
				}
			}
		}
		if (Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 > 0)
		{
			if (Local_2026.f_222.f_8 != Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 || (Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8 > 0 && Local_2026.f_213.f_8 != Local_109.f_899[unk_0x9E2D6C50374FCFA9() /*9*/].f_8))
			{
				Local_2026.f_222 = { Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/] };
			}
			else
			{
				if (Local_2026.f_222[iLocal_3673] != Local_109.f_1188[unk_0x9E2D6C50374FCFA9() /*9*/][iLocal_3673])
				{
					iLocal_3671 = 0;
					iLocal_3672 = 0;
					iLocal_3673 = 0;
					if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 > -1)
					{
						Local_3613.f_9 = Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4];
					}
					Local_3613.f_18 = func_415();
					Local_3613.f_19 = func_192();
					Local_3613.f_17 = func_190(&uLocal_3609, 0, 0);
					Local_3613.f_7 = func_401();
					if (Global_262145.f_26814)
					{
						unk_0xCF03DFE4022CD1AA(&Local_3613);
					}
					func_375(1);
					unk_0x3410421C60BF7143(1);
					return 1;
				}
				iLocal_3673++;
				if (iLocal_3673 >= Local_2026.f_222.f_8)
				{
					iLocal_3673 = 0;
				}
			}
		}
		if (Local_109.f_1[iParam0 /*211*/][iLocal_3671] != Local_2026.f_2[iLocal_3671])
		{
			iLocal_3671 = 0;
			iLocal_3672 = 0;
			iLocal_3673 = 0;
			if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 > -1)
			{
				Local_3613.f_9 = Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4];
			}
			Local_3613.f_18 = func_415();
			Local_3613.f_19 = func_192();
			Local_3613.f_17 = func_190(&uLocal_3609, 0, 0);
			Local_3613.f_7 = func_401();
			if (Global_262145.f_26814)
			{
				unk_0xCF03DFE4022CD1AA(&Local_3613);
			}
			func_375(1);
			unk_0x3410421C60BF7143(1);
			return 1;
		}
		iLocal_3671++;
		if (iLocal_3671 >= 208)
		{
			iLocal_3671 = 0;
		}
	}
	return 0;
}

void func_210()
{
	int iVar0;
	
	iVar0 = func_381(Local_2026.f_247);
	if (iVar0 < 32)
	{
		unk_0xCED9E32812D6C7C7(&(Local_2026.f_254), iVar0);
	}
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_420())
	{
		return 0;
	}
	iVar0 = func_212(iParam0);
	if (iVar0 != func_420())
	{
		return func_322(iVar0);
	}
	return 0;
}

int func_212(int iParam0)
{
	if (iParam0 != func_420())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_420();
}

void func_213(var uParam0, int iParam1)
{
	if (uParam0->f_6 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_6 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (func_331())
		{
			func_213(uParam0, 7);
			return;
		}
	}
	uParam0->f_6 = iParam1;
	func_63(&(Local_2026.f_1580));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_67(&(Local_2026.f_1580), 0, 0);
	}
}

int func_214()
{
	int iVar0;
	
	iVar0 = func_381(Local_2026.f_247);
	if (iVar0 < 32)
	{
		return BitTest(Local_2026.f_254, iVar0);
	}
	return 0;
}

char* func_215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		
		case 1:
			return "sit_enter_left_side";
		
		case 2:
			return "sit_enter_right_side";
		
		default:
	}
	return "sit_enter_left";
}

char* func_216()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_217(int iParam0)
{
	var uVar0;
	
	if (Local_2026.f_257 == 1)
	{
		if (func_421() != func_420())
		{
			uVar0 = unk_0x87A467676BDF8C35(func_70(func_381(iParam0)), 1f, func_218(Global_2689235[func_421() /*453*/].f_447), 0, 0, 0);
		}
	}
	else if (func_381(iParam0) == 0 || func_381(iParam0) == 1)
	{
		uVar0 = unk_0x87A467676BDF8C35(func_70(func_381(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01"), 0, 0, 0);
	}
	else
	{
		uVar0 = unk_0x87A467676BDF8C35(func_70(func_381(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01b"), 0, 0, 0);
	}
	if (unk_0xE5965CDF24F93A9F(uVar0) && unk_0x8DEF8D80C66C34D4(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0x9C668C5B3EFA1DEC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("h4_prop_casino_blckjack_01a");
			break;
		
		case 2:
			return joaat("h4_prop_casino_blckjack_01b");
			break;
		
		case 3:
			return joaat("h4_prop_casino_blckjack_01c");
			break;
		
		case 4:
			return joaat("h4_prop_casino_blckjack_01d");
			break;
		
		case 5:
			return joaat("h4_prop_casino_blckjack_01e");
			break;
	}
	return joaat("vw_prop_casino_blckjack_01b");
}

var func_219(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { unk_0x34AEDCEA59226CCB(func_216(), func_215(iParam1), func_357(iParam0), func_217(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

float func_220(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam4);
}

Vector3 func_221(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { unk_0x3DBAB8E11699EAEE(func_216(), func_215(iParam1), func_357(iParam0), func_217(iParam0), 0.01f, 2) };
	return Var0;
}

int func_222()
{
	unk_0x8FB472886552D737(func_58());
	unk_0x8FB472886552D737(func_72());
	unk_0x8FB472886552D737(func_88());
	unk_0x8FB472886552D737(func_216());
	if (((unk_0x6F940C2636C076AD(func_58()) && unk_0x6F940C2636C076AD(func_72())) && unk_0x6F940C2636C076AD(func_88())) && unk_0x6F940C2636C076AD(func_216()))
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	if (func_65(&(Local_2026.f_1578), 3500, 0))
	{
		func_63(&(Local_2026.f_1578));
		return 1;
	}
	return 0;
}

bool func_224(int iParam0)
{
	if (Local_109.f_1600[iParam0] == func_420())
	{
		return 0;
	}
	return Local_109.f_1600[iParam0] != unk_0x9E2D6C50374FCFA9();
}

void func_225(int iParam0)
{
	Global_1966118 = unk_0x48352343BC5A41AE();
	Global_1966136 = iParam0;
	if (!func_233())
	{
		func_230();
	}
	if (!func_229())
	{
		func_226();
	}
}

void func_226()
{
	func_112(joaat("mpply_cas_gmblng_l24_px"), unk_0x48352343BC5A41AE());
	func_228();
	func_227();
	Global_1966132 = 1;
	Global_1966127 = 0;
}

void func_227()
{
	func_112(joaat("mpply_cas_24h_gmblng_px"), unk_0x48352343BC5A41AE());
}

void func_228()
{
	func_112(joaat("mpply_cas_gmblng_l24"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_1"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_2"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_3"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_4"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_5"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_6"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_7"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_8"), 0);
	func_112(joaat("mpply_cas_cur_gmblng_hr"), 0);
	func_112(joaat("mpply_cas_24h_gmblng_px"), 0);
}

bool func_229()
{
	return Global_1966132;
}

void func_230()
{
	func_112(joaat("mpply_casino_gmblng_gd"), unk_0x48352343BC5A41AE());
	func_232();
	func_231((unk_0x48352343BC5A41AE() + 86400));
	Global_1966131 = 1;
}

void func_231(int iParam0)
{
	Global_1966126 = iParam0;
}

void func_232()
{
	func_112(joaat("mpply_cas_cur_gmblng_px"), unk_0x48352343BC5A41AE());
}

bool func_233()
{
	return func_116(joaat("mpply_casino_gmblng_gd")) != 0;
}

bool func_234(int iParam0)
{
	return Local_109.f_1600[iParam0] == unk_0x9E2D6C50374FCFA9();
}

void func_235()
{
	func_359(2);
	unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 185, 0);
	func_337();
	func_298(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
	func_243();
	unk_0xB0550BC91B0159D6(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_4), 2);
	func_236();
}

void func_236()
{
	int iVar0;
	int iVar1;
	
	if (Global_1966136 != -1)
	{
		iVar0 = (unk_0x48352343BC5A41AE() - Global_1966118);
		iVar1 = (unk_0x48352343BC5A41AE() - Global_1966119);
		if (Global_1966119 == -1)
		{
			func_237(iVar0);
		}
		else
		{
			func_237(iVar1);
		}
		func_232();
		func_227();
		Global_1966118 = -1;
		Global_1966119 = -1;
		Global_1966136 = -1;
	}
}

void func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = func_242();
	Global_1966127 = (Global_1966127 + iParam0);
	func_238(iVar0, iParam0);
	func_227();
}

void func_238(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	
	iVar11 = (iParam0 + 1 * 12 - 12);
	iVar12 = 1;
	if ((iVar11 % 32) + 12 > 32)
	{
		iVar12 = 2;
	}
	iVar13 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar11) / 32f));
	if (iVar13 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		if ((iVar13 + iVar0) >= 9)
		{
			return;
		}
		iVar14 = func_241((iVar13 + iVar0));
		uVar1[(iVar13 + iVar0)] = func_116(iVar14);
		iVar0++;
	}
	iVar15 = func_240(&uVar1, iParam0, 12);
	iVar15 = (iVar15 + iParam1);
	func_239(&uVar1, iParam0, 12, iVar15);
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		uVar16 = func_241((iVar13 + iVar0));
		func_112(uVar16, uVar1[(iVar13 + iVar0)]);
		iVar0++;
	}
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar3) / 32f));
	iVar5 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	bVar6 = false;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - bVar6))
		{
			iVar8 = (iParam2 - bVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (BitTest(iParam3, bVar6))
			{
				unk_0xCED9E32812D6C7C7(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				unk_0xB0550BC91B0159D6(uParam0[(iVar4 + iVar0)], bVar1);
			}
			bVar6++;
			bVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_240(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar4) / 32f));
	iVar6 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		bVar1 = iVar8;
		while (bVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (BitTest((*uParam0)[(iVar5 + iVar0)], bVar1))
			{
				unk_0xCED9E32812D6C7C7(&uVar2, iVar7);
			}
			bVar7++;
			bVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_241(int iParam0)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return unk_0x2E87280918B16506(&cVar0);
}

int func_242()
{
	return func_116(joaat("mpply_cas_cur_gmblng_hr"));
}

void func_243()
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

void func_244(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_246(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		unk_0x4FEF096D3AB4AA8C(15);
		Global_23150.f_8808 = 0;
	}
	unk_0x7ED668FC4CB0F4C4(0f);
	if (Global_23150.f_6019[iVar0])
	{
		unk_0xC511E7C272201CF7(9, 0);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		unk_0x861D35D42CFD2991("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		unk_0x861D35D42CFD2991("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_245(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_245(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			unk_0x705B098546DEB18A(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_246(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x9315DBF7D972F07A() && unk_0xDD50B5A22807BAD4())
		{
			iParam2 = unk_0x5C5CE5291FB79534();
		}
	}
	StringCopy(&cVar0, unk_0x05CBA41180F5D521(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x2E87280918B16506(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23150.f_6112[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23150.f_6112[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23150.f_6112[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_247(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	var uVar60;
	var uVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	int iVar96;
	float fVar97;
	float fVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	char cVar105[16];
	float fVar109;
	float fVar110;
	float fVar111;
	float fVar112;
	float fVar113;
	
	if (!func_246(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_283(0, bParam6))
	{
		return;
	}
	unk_0xA5AAB00FA8C570A4(76, 84);
	unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23150)
	{
		if (func_281(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23150 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23149;
	}
	fVar57 = (fParam5 * fVar58);
	if (unk_0x2E87280918B16506(&(Global_23150.f_1)) == unk_0x2E87280918B16506("HIDE"))
	{
		fVar59 = Global_23148;
	}
	else
	{
		fVar59 = (((Global_23148 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_279(bParam7, &uVar60, &uVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23150.f_5609 <= 1)
		{
			func_275(Global_23150.f_5609 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23150.f_6405 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23150.f_6119)
		{
			if (unk_0x2E87280918B16506(&(Global_23150.f_1)) == unk_0x2E87280918B16506("HIDE"))
			{
				fVar51 = Global_23148;
			}
			else
			{
				if (Global_23150)
				{
					StringCopy(&cVar63, func_274(29), 64);
					StringCopy(&cVar79, func_271(29, 1), 64);
					if (unk_0x2E87280918B16506(&(Global_23150.f_7420[29 /*16*/])) == joaat("crew_logo"))
					{
						func_270(Global_23147, Global_23148, fParam5, fVar57, 0, 0, 0, 255);
						unk_0xEBF08DA37D86CD05(&cVar63, &cVar79, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
					else
					{
						unk_0xEBF08DA37D86CD05(&cVar63, &cVar79, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
				}
				if (Global_23150.f_8778)
				{
					iVar1 = Global_23150.f_8774;
					iVar2 = Global_23150.f_8775;
					iVar3 = Global_23150.f_8776;
					iVar4 = Global_23150.f_8777;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_270(Global_23147, (Global_23148 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23148 + fVar57) + 0.034722f) + 0f);
				if (unk_0x2E87280918B16506(&(Global_23150.f_1)) != 0)
				{
					func_269();
					unk_0xCDDA0C58B818F6B2(&(Global_23150.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23150.f_74)
					{
						if (Global_23150.f_5[iVar14] == 2)
						{
							unk_0x2AE954BA77A66307(Global_23150.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23150.f_5[iVar14] == 3)
						{
							unk_0x957E514A6E999374(Global_23150.f_14[iVar16], Global_23150.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23150.f_5[iVar14] == 1)
						{
							unk_0x26C23BE14F66F202(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 8)
						{
							unk_0x26C23BE14F66F202(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 5)
						{
							unk_0x76DB21247AE4E4E2(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 6)
						{
							unk_0x26C23BE14F66F202(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 7)
						{
							unk_0x76DB21247AE4E4E2(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 9)
						{
							unk_0x76DB21247AE4E4E2(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x1A53079994915FA6((Global_23147 + 0.00390625f), ((Global_23148 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23150.f_6126)
				{
					func_269();
					func_267((((Global_23147 + fParam5) - 0.00390625f) - func_268("CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128)), ((Global_23148 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128);
				}
				else if (Global_23150.f_6122 > Global_23150.f_5616)
				{
					if (Global_23150.f_6125 != 0)
					{
						func_269();
						func_267((((Global_23147 + fParam5) - 0.00390625f) - func_268("CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124)), ((Global_23148 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124);
					}
				}
			}
			iVar6 = Global_23150.f_6129;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23150.f_8788)
			{
				iVar1 = Global_23150.f_8784;
				iVar2 = Global_23150.f_8785;
				iVar3 = Global_23150.f_8786;
				iVar4 = Global_23150.f_8787;
			}
			else
			{
				unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23150.f_5616 && iVar6 <= Global_23150.f_5609)
			{
				if (iVar6 >= 0)
				{
					if (Global_23150.f_5876[iVar6])
					{
						if (Global_23150.f_5747[iVar6] && iVar6 != Global_23150.f_6129)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar56 = Global_23150.f_6136[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, 0, 0);
			if (Global_23150.f_6122 > Global_23150.f_5616)
			{
				if (Global_23150.f_8793)
				{
					iVar1 = Global_23150.f_8789;
					iVar2 = Global_23150.f_8790;
					iVar3 = Global_23150.f_8791;
					iVar4 = Global_23150.f_8792;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_270(Global_23147, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x7DF13542ADA68880("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23150.f_8806)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x2F046C9381D8E91B(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "shop_arrows_upANDdown", (Global_23147 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0x2E87280918B16506(&(Global_23150.f_5081)) != 0 && Global_23150.f_5157 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23147 + 0.0046875f);
				if (Global_23150.f_5159 != 0)
				{
					func_281(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_266(fVar42);
				unk_0xB733C0853476F0C1(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBD7DCBC4F2DF91F8(fVar42, (fVar51 + 0.00277776f));
				unk_0x2F046C9381D8E91B(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_270(Global_23147, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_266(fVar42);
				unk_0xCDDA0C58B818F6B2(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x1A53079994915FA6(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23150.f_5159 != 0)
				{
					func_281(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					func_265(Global_23150.f_5159, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xEBF08DA37D86CD05(func_274(Global_23150.f_5159), func_271(Global_23150.f_5159, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_23150.f_5157 > 0)
				{
					if ((unk_0x320D1840B6DAA1CC() - Global_23150.f_5158) > Global_23150.f_5157)
					{
						StringCopy(&(Global_23150.f_5081), "", 24);
						Global_23150.f_5157 = -1;
					}
				}
			}
			if (unk_0x2E87280918B16506(&(Global_4539885.f_21)) != 0 && Global_4539885.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23147 + 0.0046875f);
				if (Global_4539885.f_67 != 0)
				{
					func_281(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_266(fVar42);
				unk_0xB733C0853476F0C1(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBD7DCBC4F2DF91F8(fVar42, (fVar51 + 0.00277776f));
				unk_0x2F046C9381D8E91B(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_270(Global_23147, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_266(fVar42);
				unk_0xCDDA0C58B818F6B2(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x1A53079994915FA6(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4539885.f_67 != 0)
				{
					func_281(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_265(Global_4539885.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xEBF08DA37D86CD05(func_274(Global_4539885.f_67), func_271(Global_4539885.f_67, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4539885.f_65 > 0)
				{
					if ((unk_0x320D1840B6DAA1CC() - Global_4539885.f_66) > Global_4539885.f_65)
					{
						StringCopy(&(Global_4539885.f_21), "", 16);
						Global_4539885.f_65 = -1;
					}
				}
			}
			func_262(uVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xA5AAB00FA8C570A4(76, 84);
			unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23150.f_6119)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar96 = Global_23150.f_5609;
			if (Global_23150.f_6120)
			{
				iVar96 = (Global_23150.f_6123 - 1);
			}
			fVar97 = 0f;
			fVar98 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar96)
			{
				fVar56 = 0.034722f;
				if (Global_23150.f_6136[iVar6] != 0f)
				{
					fVar56 = Global_23150.f_6136[iVar6];
				}
				if (Global_23150.f_6120)
				{
					iVar6 = Global_23150.f_8429[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23150.f_6129 && iVar9 < Global_23150.f_5616)
				{
					bVar33 = true;
					if (Global_23150.f_6130 == iVar6)
					{
						fVar98 = fVar97;
					}
					if (Global_23150.f_5747[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23150.f_6270[iVar6] = fVar35;
				fVar34 = (Global_23147 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23150.f_6130 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_23150.f_8800)
					{
						unk_0x2F046C9381D8E91B(Global_23150.f_8799, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0x2F046C9381D8E91B(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Nav", (Global_23147 + (fParam5 * 0.5f)), (((fVar59 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar100, iVar101, iVar102, iVar103, 0, 0);
					Global_23150.f_6268 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23150.f_5617)
				{
					if (BitTest(Global_23150.f_5480[iVar6], iVar8) || Global_23150.f_5447[iVar8] == 5)
					{
						if (Global_23150.f_6120)
						{
							iVar19 = Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar20 = Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar21 = Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar22 = Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar23 = Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)];
						}
						else
						{
							Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar19;
							Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar20;
							Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar21;
							Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar22;
							Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar23;
						}
						iVar104 = 0;
						bVar55 = false;
						if (Global_23150.f_6402[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[0])
							{
								bVar55 = true;
								iVar104 = 0;
							}
						}
						if (Global_23150.f_6402[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[1])
							{
								bVar55 = true;
								iVar104 = 1;
							}
						}
						if (Global_23150.f_5453[iVar8] != -1f)
						{
							fVar34 = ((Global_23147 + 0.0046875f) + Global_23150.f_5453[iVar8]);
						}
						if ((iVar8 < 4 && Global_23150.f_5453[iVar8 + 1] != -1f) && fVar34 < Global_23150.f_5453[iVar8 + 1])
						{
							fVar46 = (Global_23150.f_5453[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23147 + Global_23149) - 0.0046875f) - fVar34);
						}
						if ((Global_23150.f_5466[iVar8] && Global_23150.f_6265) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23150.f_5447[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23150.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_260(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
											unk_0x27ED46EA48C0A455(&(Global_23150.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x2AE954BA77A66307(Global_23150.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x957E514A6E999374(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = unk_0x63F498818B4DEE3E(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_281(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23150.f_4824[(iVar22 + iVar14)] == 2 || Global_23150.f_4824[(iVar22 + iVar14)] == 51) || Global_23150.f_4824[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar43;
										Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar44;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											iVar99 = (iVar8 - 1);
											while (iVar99 >= 0)
											{
												if (Global_23150.f_5474[iVar99] == 2)
												{
													Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar99)] = (Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar99)] - Global_23150.f_5459[iVar8]);
												}
												iVar99 = (iVar99 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar43 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar44 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar54)
									{
										if (func_281(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_281(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_274(26), func_271(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_281(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_281(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_274(27), func_271(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23150.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_260(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_259(bVar32);
										}
										unk_0xCDDA0C58B818F6B2(&(Global_23150.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x2AE954BA77A66307(Global_23150.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x957E514A6E999374(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar28)] == 2 || Global_23150.f_4824[(iVar22 + iVar28)] == 51) || Global_23150.f_4824[(iVar22 + iVar28)] == 61)
											{
												if (func_281(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_281(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_265(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xEBF08DA37D86CD05(func_274(Global_23150.f_4824[(iVar22 + iVar28)]), func_271(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xEBF08DA37D86CD05(func_274(Global_23150.f_4824[(iVar22 + iVar28)]), func_271(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23150.f_5474[iVar8] == 2)
										{
											unk_0x1A53079994915FA6(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0x1A53079994915FA6((fVar34 + fVar42), fVar35, 0);
											if (func_258() && unk_0xB4C854DD86E40FDA(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23150.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_260(0, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar105, "TEST_LABEL", 16);
													fVar109 = 0f;
													fVar110 = 55f;
													fVar111 = 0.0185f;
													fVar112 = 0.004f;
													fVar113 = 0.02f;
													unk_0x3F03C2D4EFA888BC(0f, (0.35f * 0.7f));
													unk_0x71F4002CB1A0B451(255, 255, 255, 150);
													unk_0xCA4C0AD3CAFF651E((fVar34 - (fVar113 * 0.6f)), (fVar35 + (fVar111 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar110), 0);
													unk_0xCDDA0C58B818F6B2(&cVar105);
													unk_0x2AE954BA77A66307((Global_23150.f_6129 + iVar30));
													unk_0x1A53079994915FA6((fVar34 - fVar113), (fVar35 + fVar112), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar14)] != 2 && Global_23150.f_4824[(iVar22 + iVar14)] != 51) && Global_23150.f_4824[(iVar22 + iVar14)] != 61)
											{
												if (func_281(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_281(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_265(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23150.f_4824[(iVar22 + iVar14)] == 30)
															{
																unk_0xEBF08DA37D86CD05(func_274(Global_23150.f_4824[(iVar22 + iVar14)]), func_271(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (Global_23147 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xEBF08DA37D86CD05(func_274(Global_23150.f_4824[(iVar22 + iVar14)]), func_271(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xEBF08DA37D86CD05(func_274(Global_23150.f_4824[(iVar22 + iVar14)]), func_271(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_260(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_259(bVar32);
										}
										unk_0x27ED46EA48C0A455("NUMBER");
										unk_0x2AE954BA77A66307(Global_23150.f_4309[iVar20]);
										fVar43 = unk_0x63F498818B4DEE3E(1);
										fVar42 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar43 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar54)
									{
										if (func_281(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_281(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_274(26), func_271(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_281(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_281(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_274(27), func_271(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_260(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, 0, 0);
										func_257((fVar34 + fVar42), fVar35, "NUMBER", Global_23150.f_4309[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_260(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_259(bVar32);
										}
										unk_0x27ED46EA48C0A455("NUMBER");
										unk_0x957E514A6E999374(Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
										fVar43 = unk_0x63F498818B4DEE3E(1);
										fVar42 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar43 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar54)
									{
										if (func_281(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_281(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_274(26), func_271(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_281(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_281(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_274(27), func_271(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									func_260(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, 0, 0);
									func_256((fVar34 + fVar42), fVar35, "NUMBER", Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_281(Global_23150.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23150.f_6120)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23150.f_5474[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
											Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
											fVar44 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
										}
										if (bVar54)
										{
											if (func_281(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23150.f_5474[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_281(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_265(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0xEBF08DA37D86CD05(func_274(26), func_271(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
											if (func_281(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_281(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_265(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0xEBF08DA37D86CD05(func_274(27), func_271(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_281(Global_23150.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(Global_23150.f_4824[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0xEBF08DA37D86CD05(func_274(Global_23150.f_4824[iVar22]), func_271(Global_23150.f_4824[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_255(Global_23150.f_4824[iVar22])), (fVar37 * func_255(Global_23150.f_4824[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23150.f_5447[iVar8] == 5)
						{
							if (Global_23150.f_5459[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							if (Global_23150.f_5466[iVar8])
							{
								if (func_281(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23150.f_8429[iVar9] = iVar6;
						Global_23150.f_6131 = iVar6;
						iVar9++;
						if (Global_23150.f_5747[iVar6])
						{
							iVar13++;
						}
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar97 = (fVar97 + Global_23150.f_6136[iVar6]);
						}
						else
						{
							fVar97 = (fVar97 + 0.034722f);
						}
					}
					if (!Global_23150.f_6119)
					{
						Global_23150.f_5876[iVar6] = 1;
						if (Global_23150.f_5618[iVar6])
						{
							if (bVar32)
							{
								Global_23150.f_6125 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23150.f_6125 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23150.f_6119)
			{
				Global_23150.f_6121 = ((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12)));
				Global_23150.f_6124 = iVar11;
				Global_23150.f_6122 = iVar10;
				Global_23150.f_6119 = 1;
			}
		}
		if (!Global_23150.f_6120)
		{
			Global_23150.f_6123 = iVar9;
			Global_23150.f_6120 = 1;
		}
		iVar5++;
	}
	Global_23150.f_6267 = fVar51;
	Global_23150.f_6269 = unk_0x320D1840B6DAA1CC();
	unk_0x7ED668FC4CB0F4C4(Global_23150.f_6267);
	if (!Global_23150.f_8773)
	{
		func_248(0);
	}
	Global_23150.f_8773 = 0;
	if (bParam2)
	{
		unk_0xAC765EF46E85A446(10);
	}
	unk_0xAC765EF46E85A446(6);
	unk_0xAC765EF46E85A446(7);
	unk_0xAC765EF46E85A446(9);
	unk_0xAC765EF46E85A446(8);
	if (bParam0)
	{
		func_171(1);
	}
	unk_0xB5A50A903B9AB61B();
}

void func_248(int iParam0)
{
	if (func_254())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_253(0))
		{
			func_249(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_8137, 2);
	}
}

void func_249(int iParam0)
{
	if (func_254())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_252())
		{
			func_251(1, 1);
		}
		else
		{
			func_251(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_8137, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 30);
	}
	if (!func_250())
	{
		Global_20266.f_1 = 3;
	}
}

int func_250()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_251(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_253(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			unk_0x31636F0193379566(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_20203);
		}
		else
		{
			unk_0x31636F0193379566(Global_20194);
		}
	}
}

bool func_252()
{
	return BitTest(Global_1958711, 5);
}

int func_253(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_254()
{
	return BitTest(Global_1958711, 19);
}

float func_255(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_256(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x957E514A6E999374(uParam3, uParam4);
	unk_0x1A53079994915FA6(fParam0, fParam1, 0);
}

void func_257(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x2AE954BA77A66307(iParam3);
	unk_0x1A53079994915FA6(fParam0, fParam1, iParam4);
}

var func_258()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}

void func_259(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x2F046C9381D8E91B(Global_23150.f_8801[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x2F046C9381D8E91B(Global_23150.f_8801[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
}

void func_260(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_261(Global_23150.f_6402[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x2F046C9381D8E91B(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x2F046C9381D8E91B(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x71F4002CB1A0B451(155, 155, 155, 255);
		}
		else
		{
			unk_0x71F4002CB1A0B451(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x71F4002CB1A0B451(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x71F4002CB1A0B451(155, 155, 155, 255);
	}
	else
	{
		unk_0x71F4002CB1A0B451(155, 155, 155, 255);
	}
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0xB8306DA8A5D18C52(1);
	if (bParam5)
	{
		unk_0x3F03C2D4EFA888BC(0f, 0.425f);
		unk_0xF68E5437AF17EFBC(4);
	}
	else if (bParam6)
	{
		unk_0x3F03C2D4EFA888BC(0f, 0.425f);
		unk_0xF68E5437AF17EFBC(6);
	}
	else
	{
		unk_0xF68E5437AF17EFBC(0);
	}
	unk_0xE835F806BE49C67B(0f, 1f);
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_261(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_262(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_246(&iVar0, 0, iParam1))
	{
		return;
	}
	uParam0 = uParam0;
	if (iParam3 && !func_283(bParam4, bParam8))
	{
		return;
	}
	if (func_263())
	{
		return;
	}
	if (unk_0xD199EE48D2842EB1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_17(unk_0x9E2D6C50374FCFA9(), 0))
		{
			return;
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x9417F1137725B4B3() == 0 || unk_0xD199EE48D2842EB1())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (unk_0xB1C1E679BD17A4F0(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[iVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), unk_0x2018949B2C9FD96A(2, Global_23150.f_5417[iVar1], 1), 64);
				}
				else if (Global_23150.f_5430[iVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), unk_0x19214818F925D149(2, Global_23150.f_5430[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xCA5D23E5F0F0306F((1f - (Global_23150.f_5472 / 100f)));
			unk_0x6F06CF0E9AB02847();
			if (unk_0x8FE9914D4872D601())
			{
				unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD7D6BA6E36AEC182(1);
				unk_0x6F06CF0E9AB02847();
			}
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (unk_0x2E87280918B16506(&(Global_23150.f_5355[iVar1 /*4*/])) != unk_0x2E87280918B16506("PREV"))
				{
					unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(iVar1);
					func_176(&(Global_23150.f_5162[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 12 && unk_0x2E87280918B16506(&(Global_23150.f_5355[iVar2 /*4*/])) == unk_0x2E87280918B16506("PREV"))
					{
						func_176(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[bVar1] == -1)
					{
						func_175(&(Global_23150.f_5355[bVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23150.f_5404[bVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x4ADC8B166E139423(&(Global_23150.f_5355[bVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x28594D0D61DB1278(iVar3, 70);
						}
						else
						{
							unk_0x2AE954BA77A66307(iVar3);
						}
						unk_0xD1D4F8D5470AFA4C();
					}
					if (unk_0x8FE9914D4872D601())
					{
						if (Global_23150.f_5417[bVar1] != 363 && BitTest(Global_23150.f_5443, bVar1))
						{
							unk_0xD7D6BA6E36AEC182(1);
							unk_0x4F47E317C74C543B(Global_23150.f_5417[bVar1]);
						}
						else
						{
							unk_0xD7D6BA6E36AEC182(0);
							unk_0x4F47E317C74C543B(363);
						}
					}
					unk_0x6F06CF0E9AB02847();
				}
				bVar1++;
			}
			if (unk_0x2E87280918B16506(&(Global_4539885.f_16)) != unk_0x2E87280918B16506(""))
			{
				unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(Global_23150.f_5160);
				func_176(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_175(&(Global_4539885.f_16));
				}
				else
				{
					iVar4 = Global_23150.f_5404[bVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x4ADC8B166E139423(&(Global_4539885.f_16));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iVar4, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iVar4);
					}
					unk_0xD1D4F8D5470AFA4C();
				}
				unk_0x6F06CF0E9AB02847();
			}
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4F47E317C74C543B(false);
			unk_0x4F47E317C74C543B(false);
			unk_0x4F47E317C74C543B(false);
			unk_0x4F47E317C74C543B(80);
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				unk_0x4F47E317C74C543B(true);
			}
			else
			{
				unk_0x4F47E317C74C543B(false);
			}
			unk_0x6F06CF0E9AB02847();
			Global_23150.f_5161 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[bVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4F47E317C74C543B(bVar1);
					unk_0x4ADC8B166E139423(&(Global_23150.f_5355[bVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iParam2, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iParam2);
					}
					unk_0xD1D4F8D5470AFA4C();
					unk_0x6F06CF0E9AB02847();
				}
			}
			bVar1++;
		}
		if (Global_4539885.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4F47E317C74C543B(bVar1);
				unk_0x4ADC8B166E139423(&(Global_4539885.f_16));
				if (bParam5)
				{
					unk_0x28594D0D61DB1278(iParam2, 70);
				}
				else
				{
					unk_0x2AE954BA77A66307(iParam2);
				}
				unk_0xD1D4F8D5470AFA4C();
				unk_0x6F06CF0E9AB02847();
			}
		}
		unk_0xA5AAB00FA8C570A4(76, 66);
		unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23150.f_8808)
			{
				unk_0xE73F8CB95153F5B1(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			unk_0x4FEF096D3AB4AA8C(15);
			Global_23150.f_8808 = 0;
		}
		unk_0xB5A50A903B9AB61B();
		if (Global_23150.f_5446)
		{
			unk_0xA5AAB00FA8C570A4(82, 66);
			unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
			unk_0x694170BB080C08FF(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xB5A50A903B9AB61B();
		}
		else
		{
			unk_0xC4353D240DCE9533(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

int func_263()
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_264())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xC81489026785778A(&Var0);
		if (Global_20211 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_264()
{
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_265(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x2F046C9381D8E91B(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0x2F046C9381D8E91B(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_266(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xF68E5437AF17EFBC(0);
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0x28EC5961FD3B75F0(2);
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
	unk_0xE835F806BE49C67B(fParam0, ((Global_23147 + Global_23149) - 0.0046875f));
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_267(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x2AE954BA77A66307(uParam3);
	unk_0x2AE954BA77A66307(uParam4);
	unk_0x1A53079994915FA6(fParam0, fParam1, 0);
}

float func_268(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xE8F6C1F695B25B91(sParam0))
	{
		if (unk_0x2E87280918B16506(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_269();
	unk_0x27ED46EA48C0A455(sParam0);
	unk_0x2AE954BA77A66307(uParam1);
	unk_0x2AE954BA77A66307(uParam2);
	return unk_0x63F498818B4DEE3E(1);
}

void func_269()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23150.f_8783)
	{
		iVar0 = Global_23150.f_8779;
		iVar1 = Global_23150.f_8780;
		iVar2 = Global_23150.f_8781;
		iVar3 = Global_23150.f_8782;
	}
	unk_0xF68E5437AF17EFBC(0);
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
	unk_0xE835F806BE49C67B((Global_23147 + 0.0046875f), ((Global_23147 + Global_23149) - 0.0046875f));
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_270(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xCA4C0AD3CAFF651E((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_271(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_23150.f_7420[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_23150.f_7420[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var19 = { func_273(unk_0x9E2D6C50374FCFA9()) };
			if (unk_0xF9518F925A4A1894(&Var19, &uVar3))
			{
				return func_272(&uVar3);
			}
		}
		else
		{
			return func_272(&(Global_23150.f_7420[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_272(var uParam0)
{
	return uParam0;
}

struct<13> func_273(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

char* func_274(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var16 = { func_273(unk_0x9E2D6C50374FCFA9()) };
			unk_0xF9518F925A4A1894(&Var16, &uVar0);
			return func_272(&uVar0);
		}
		else
		{
			return func_272(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_275(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 1)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 1)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), sParam1, 24);
	if (!unk_0xACC32B78196FBC2A(sParam1) && !unk_0xE73671E3D37CF79E(sParam1))
	{
	}
	Global_23150.f_1616[Global_23150.f_5611] = bParam3;
	Global_23150.f_1873[Global_23150.f_5611] = iParam4;
	Global_23150.f_2130[Global_23150.f_5611] = iParam6;
	Global_23150.f_5611++;
	if (!bParam3)
	{
		func_278(Global_23150.f_5609, 1);
	}
	else
	{
		func_278(Global_23150.f_5609, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_277(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
		if (Global_23150.f_5466[Global_23150.f_5610])
		{
			func_281(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
		{
			Global_23150.f_5459[Global_23150.f_5610] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_276(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
			if (fVar4 > Global_23150.f_6136[iParam0])
			{
				Global_23150.f_6136[iParam0] = fVar4;
			}
		}
	}
	unk_0xCED9E32812D6C7C7(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 1;
	Global_23150.f_6133 = (Global_23150.f_5611 - 1);
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = iParam2;
}

float func_276(char* sParam0)
{
	if (!unk_0xE73671E3D37CF79E(sParam0))
	{
	}
	return unk_0xC23444E9B1B8D081(0.35f, 0);
}

float func_277(char* sParam0)
{
	if (!unk_0xE8F6C1F695B25B91(sParam0))
	{
		if (unk_0x2E87280918B16506(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_260(0, 1, 0, 0, 0, 0, 0);
	unk_0x27ED46EA48C0A455(sParam0);
	return unk_0x63F498818B4DEE3E(1);
}

void func_278(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_279(bool bParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0xBE74EC1CD33D16EA(uParam1, uParam2);
		return;
	}
	unk_0x604161EB05F29E6D(uParam1, uParam2);
	fVar0 = unk_0xBBDA792448DB5A89(*uParam1);
	fVar1 = unk_0xBBDA792448DB5A89(*uParam2);
	fVar2 = unk_0xF4CC509EEB975296(0);
	if (func_280(*uParam1, *uParam2))
	{
		*fParam3 = 1f;
		*uParam1 = unk_0xF2DB717A73826179((fVar1 * fVar2));
		*uParam2 = unk_0xF2DB717A73826179(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*uParam1 = unk_0xF2DB717A73826179((fVar0 / *fParam3));
	*uParam2 = unk_0xF2DB717A73826179((fVar1 / *fParam3));
}

bool func_280(int iParam0, int iParam1)
{
	return (unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1)) > 3.5f;
}

int func_281(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_274(iParam0), 64);
	StringCopy(&cVar16, func_271(iParam0, bParam1), 64);
	if (unk_0x2E87280918B16506(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_279(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { unk_0x7DF13542ADA68880(&cVar0, &cVar16) };
		fVar38 = (func_282(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x2E87280918B16506(&(Global_23150.f_7420[29 /*16*/])) == joaat("crew_logo"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xD87C62FA7E75D2C5() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23149)
			{
				*fParam4 = (*fParam4 * (Global_23149 / *fParam3));
				*fParam3 = Global_23149;
			}
		}
		return 1;
	}
	return 0;
}

float func_282(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_283(bool bParam0, bool bParam1)
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xE9E8955A780DDA01() || (func_285(8, -1) && func_284() != 65)) || (unk_0x1A76A9A82BD6228C() != 0 && !bParam1)) || (unk_0x04458B4E5D9E466A() && !bParam0)) || unk_0x06C559386AD19942()) || Global_78579) || Global_23150.f_8807) || unk_0x3E6C9DAD84CEFED1()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_284()
{
	return Global_1574991;
}

var func_285(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

void func_286(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x2018949B2C9FD96A(2, iParam0, 1);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	unk_0xB0550BC91B0159D6(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_287(char* sParam0)
{
	if (Global_23150.f_5156 >= 3 || Global_23150.f_5153 >= 4)
	{
		return;
	}
	Global_23150.f_5087[Global_23150.f_5153] = 1;
	Global_23150.f_5153++;
	StringCopy(&(Global_23150.f_5104[Global_23150.f_5156 /*16*/]), sParam0, 64);
	Global_23150.f_5156++;
}

void func_288(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_5081), sParam0, 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = iParam1;
	Global_23150.f_5158 = unk_0x320D1840B6DAA1CC();
	Global_23150.f_5159 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
}

void func_289(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_6130 = iParam0;
	Global_23150.f_6265 = iParam2;
	if (Global_23150.f_6130 < Global_23150.f_6129)
	{
		Global_23150.f_6129 = Global_23150.f_6130;
	}
	else if ((Global_23150.f_6120 && Global_23150.f_6130 > Global_23150.f_6131) || (!Global_23150.f_6120 && Global_23150.f_6130 >= (Global_23150.f_6129 + Global_23150.f_5616)))
	{
		iVar0 = Global_23150.f_6129;
		while (iVar0 <= Global_23150.f_6130)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23150.f_5480[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23150.f_5616 && Global_23150.f_6129 < 128)
		{
			Global_23150.f_6129++;
			iVar1 = 0;
			iVar0 = Global_23150.f_6129;
			while (iVar0 <= Global_23150.f_6130)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23150.f_5480[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23150.f_5081), "", 24);
		StringCopy(&(Global_4539885.f_21), "", 16);
	}
}

void func_290(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_1), sParam0, 16);
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_291(int iParam0, char* sParam1, char* sParam2)
{
	Global_23150 = iParam0;
	func_292(29, sParam1, sParam2);
}

void func_292(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_23150.f_6411[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23150.f_7420[iParam0 /*16*/]), sParam2, 64);
}

void func_293(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23150.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23150.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2725950[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_5480[iVar0] = 0;
		Global_23150.f_5618[iVar0] = 0;
		Global_23150.f_5747[iVar0] = 0;
		Global_23150.f_6270[iVar0] = 0f;
		Global_23150.f_5876[iVar0] = 0;
		Global_23150.f_6136[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23150.f_5447[iVar0] = 0;
		Global_23150.f_5459[iVar0] = 0f;
		Global_23150.f_5453[iVar0] = -1f;
		Global_23150.f_5466[iVar0] = 0;
		Global_23150.f_5474[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_23150.f_6411[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23150.f_7420[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23150.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	Global_23150 = 0;
	Global_23150.f_5609 = 0;
	Global_23150.f_5610 = 0;
	Global_23150.f_5611 = 0;
	Global_23150.f_5613 = 0;
	Global_23150.f_5614 = 0;
	Global_23150.f_5615 = 0;
	Global_23150.f_5612 = 0;
	Global_23150.f_6265 = 0;
	Global_23150.f_6405 = 0;
	Global_23150.f_6130 = 0;
	Global_23150.f_6129 = 0;
	Global_23150.f_6131 = 0;
	StringCopy(&(Global_23150.f_5081), "", 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = 0;
	Global_23150.f_5158 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_5159 = 0;
	StringCopy(&(Global_4539885.f_21), "", 16);
	Global_4539885.f_61 = 0;
	Global_4539885.f_62 = 0;
	Global_4539885.f_63 = 0;
	Global_4539885.f_64 = 0;
	Global_4539885.f_65 = 0;
	Global_4539885.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4539885.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4539885.f_67 = 0;
	StringCopy(&(Global_23150.f_1), "", 16);
	Global_23150.f_5465 = 0f;
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_6135 = 0;
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = 0;
	Global_23150.f_6133 = 0;
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	Global_23150.f_5616 = 10;
	Global_23150.f_5617 = 0;
	Global_23150.f_6267 = 0f;
	Global_23150.f_6268 = 0f;
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	Global_23150.f_6121 = 0f;
	Global_23150.f_6122 = 0;
	Global_23150.f_6124 = 0;
	Global_23150.f_6123 = 0;
	Global_23150.f_6125 = 0;
	Global_23150.f_6126 = 0;
	Global_23150.f_6127 = 0;
	Global_23150.f_6128 = 0;
	Global_23150.f_8804 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23150.f_6399[iVar0] = -1;
		Global_23150.f_6402[iVar0] = -1;
		iVar0++;
	}
	Global_23150.f_5472 = 0f;
	Global_23150.f_5443 = 0;
	Global_23150.f_5473 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6406)
	{
		Global_23150.f_6406[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_8783 = 0;
	Global_23150.f_8778 = 0;
	Global_23150.f_8788 = 0;
	Global_23150.f_8793 = 0;
	Global_23150.f_8798 = 0;
	Global_23150.f_8800 = 0;
	Global_23150.f_8806 = 0;
	Global_23147 = 0.05f;
	Global_23148 = 0.05f;
	Global_23149 = 0.225f;
	fVar2 = unk_0xF4CC509EEB975296(0);
	if (bParam0)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23149 = 0.225f;
	}
}

bool func_294(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_246(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xACC32B78196FBC2A(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		unk_0x249A0D3C5714BCF4(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!unk_0x5FABFB823FD821D4(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xA9911C122B3210B5("CommonMenu", 0);
	Global_23150.f_6005[iVar0] = 1;
	if (!unk_0x9D4AFED2949F7082("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xA9911C122B3210B5("MPShopSale", 0);
		Global_23150.f_6012[iVar0] = 1;
		if (!unk_0x9D4AFED2949F7082("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_295(&(Global_23150.f_6051[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_295(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
			{
				*uParam0 = unk_0x528279F3F1EEF869(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x0347CCBD719C8ADC(*uParam0))
					{
						uParam0->f_8 = unk_0x320D1840B6DAA1CC();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x0347CCBD719C8ADC(*uParam0))
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_296(int iParam0)
{
	Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 = iParam0;
	Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 = func_381(iParam0);
}

bool func_297()
{
	return Global_4535599 == 1;
}

void func_298(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x1088B18071ADCCBD())
		{
			unk_0x94B5910A9C945688(0);
		}
	}
	if (func_307())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		uVar0 = iParam2;
		unk_0x64E21045781AFBC9(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x44859561F653DD4E())
		{
			bVar1 = false;
		}
		if (!func_187())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x0D01086B38EC256F(iParam0) && (unk_0x3583A42587543334(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x407E03586628E458(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x9315DBF7D972F07A())
				{
					unk_0x5C53AF694DE011E8(1);
				}
				else if (bVar14 || (!func_17(unk_0x9E2D6C50374FCFA9(), 0) && !func_306()))
				{
					unk_0x1C2ED929474DC6FE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x9315DBF7D972F07A() && !bVar19)
					{
						unk_0x5C53AF694DE011E8(0);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_303(0, 0, 0);
					if (bVar25)
					{
						unk_0x5639E771F6085BF6();
					}
				}
				if (!func_302(uVar27) && !unk_0xE2ED785E8DB4D3FF(uVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(uVar27, true, 0);
					}
				}
				if (!unk_0xE85F749F6D5C809E(uVar27))
				{
					if (!bVar21)
					{
						unk_0x5C65DDDC219B3AA5(uVar27, false);
					}
					unk_0x398C962F550CF3B4(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5C65DDDC219B3AA5(uVar27, false);
				}
				unk_0xA7266A50941DBAEA(uVar27, true);
				unk_0xC099DA307DD6BC62(iParam0, 0);
				unk_0x7E9CA7389EF595E6(iParam0, 0);
				if (unk_0xA13A75665F7E0689(uVar27) && unk_0x6090FC735660B8F7(uVar27))
				{
					unk_0xAD9047296F9EA375(uVar27);
				}
				unk_0xC252F409BDE7A700(uVar27, 1);
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_301();
					func_300();
				}
				if (unk_0xBC4351060BEFB0D2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x2981C54770E1D19C())
				{
				}
				Global_2689235[iParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!func_302(iVar27) && !unk_0xE2ED785E8DB4D3FF(iVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(iVar27, !bVar15, 0);
					}
					if (!unk_0xE85F749F6D5C809E(iVar27))
					{
						if (!bVar21)
						{
							unk_0x5C65DDDC219B3AA5(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x398C962F550CF3B4(iVar27, 1);
						}
					}
					if (func_299(Global_4718592.f_168757))
					{
						unk_0x5C65DDDC219B3AA5(iVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xC099DA307DD6BC62(iParam0, 0);
				}
				else
				{
					unk_0xC099DA307DD6BC62(iParam0, 1);
				}
				unk_0xA7266A50941DBAEA(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xFD478ECFA85A941A(iVar27) && !unk_0xD5C6B5E3B93A5EDC(iVar27, 0))
					{
						unk_0x51BB443B279E4104(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x64E21045781AFBC9(iParam0, bParam1, iVar28);
		}
	}
}

bool func_299(int iParam0)
{
	return iParam0 == 17;
}

void func_300()
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_301()
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_302(int iParam0)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x174CED88B97C78D9(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_303(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x65FAB09725E2FE75(iParam1))
			{
				if (!unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), unk_0xFF65CDB0EB7ACE71(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_305();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x4B1C22133022D7D3(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), true);
			}
		}
		if (func_17(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0x1FD50AAF9DA2199E(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x86998D41F61B3824(iParam0, iParam1);
		}
		unk_0x6CAF65C4F61A4BBD(iParam0, iParam1);
		func_304(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_304(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41483427EFBC0047(iVar0, iParam1, 1);
	}
}

void func_305()
{
	int iVar0;
	
	if (!unk_0xD852449BF2E2BA8D())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x4DE6A646AFB7CF5C(iVar0);
				iVar0++;
			}
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 2);
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), false);
		}
	}
}

bool func_306()
{
	return BitTest(Global_2621446, 3);
}

int func_307()
{
	if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_308()
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

void func_309(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_310(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_310(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_311(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_310(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x3583A42587543334(unk_0xB6BA8B8E3D0B41C6()))
	{
		return 0;
	}
	if (func_253(0))
	{
		return 0;
	}
	if (unk_0xF34D8FCAE3FD4EE4())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1 && Global_43792[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43792[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43792[iVar0 /*32*/].f_5 = 1;
			Global_43792[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43792[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43792[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_312(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 26);
}

void func_313(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xB4C854DD86E40FDA(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x04458B4E5D9E466A())
	{
		if (!*uParam0 == -1)
		{
			func_309(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = unk_0x69CE66B03B2184EB();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xACC32B78196FBC2A(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_314(int iParam0)
{
	if (func_315(iParam0, 1))
	{
		return Global_1892703[func_324() /*599*/].f_10.f_428;
	}
	return -1;
}

bool func_315(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_316(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_420();
}

int func_316(int iParam0)
{
	if (iParam0 != func_420())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_420())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_317()
{
	if (((((((((func_333("BJACK_USED") || func_333("CAS_MG_CBAN")) || func_333("CAS_MG_CTIME")) || func_320("CAS_MG_MEMB2", func_321(1))) || func_333("CAS_MG_SUITE2")) || func_333("CAS_MG_NOCHIPS2")) || func_333("CAS_MG_LOWCHIPS2")) || func_333("CAS_MG_NOCHIPS6")) || func_333("CAS_MG_LOWCHIPS6")) || func_333("BJACK_NA"))
	{
		return 1;
	}
	return 0;
}

void func_318()
{
	if (!unk_0x616226219F841621(func_321(0), 0, 1, 0, -1, 0))
	{
		func_208("MAITRD_M_D0E", -1);
	}
	else if (func_322(unk_0x9E2D6C50374FCFA9()))
	{
	}
	else if (BitTest(Global_1946250.f_5, 31))
	{
	}
	else if (Global_4535599 != 0)
	{
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Global_1946250.f_5), 30);
	}
}

void func_319(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x2AE954BA77A66307(uParam1);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

bool func_320(char* sParam0, int iParam1)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	return unk_0x73CB3406A86A3A02(0);
}

int func_321(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_322(int iParam0)
{
	if (iParam0 == func_420())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_1, 18);
}

bool func_323()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_384.f_1, 18);
}

int func_324()
{
	return Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_10;
}

bool func_325(bool bParam0)
{
	return func_315(unk_0x9E2D6C50374FCFA9(), bParam0);
}

int func_326(int iParam0)
{
	if (iParam0 != func_420())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_384 != 0;
	}
	return 0;
}

int func_327()
{
	if (func_330() <= 0)
	{
		return 0;
	}
	if (func_329() <= 0)
	{
		return 1;
	}
	if (func_328())
	{
		return 2;
	}
	return 3;
}

bool func_328()
{
	return Global_1966125 != 0;
}

int func_329()
{
	return (Global_262145.f_27177 + func_115());
}

int func_330()
{
	return (Global_262145.f_27178 - func_115());
}

bool func_331()
{
	return func_327() != 3;
}

void func_332(char* sParam0)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

bool func_333(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

int func_334(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!unk_0x910C57E77EFCF8CD(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_335()
{
	return unk_0x1A76A9A82BD6228C() != 0;
}

int func_336()
{
	if (Global_4521801.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_337()
{
	if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 != -1)
	{
		Local_2026.f_232 = 0;
		Local_2026.f_233 = 0;
		Local_2026.f_235 = 0;
		Local_2026.f_252 = 0;
		Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/] = 0;
		Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_1 = 0;
		Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_2 = 0;
		Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_3 = -1;
		Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 = -1;
		Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_5 = 0;
	}
}

bool func_338()
{
	return Global_2815059.f_6757;
}

int func_339()
{
	if (((func_340() != -1 && func_340() != 28) && func_340() != 17) && func_340() != 12)
	{
		return 1;
	}
	return 0;
}

int func_340()
{
	return Global_1057409;
}

bool func_341()
{
	return BitTest(Global_2714762.f_2, 11);
}

bool func_342()
{
	return Global_2714762.f_691;
}

int func_343(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	iVar0 = func_345(iParam0);
	iVar1 = func_344(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44024[iVar1 /*5*/].f_3;
}

int func_344(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44024[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_345(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
		{
			return Global_44024[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_346()
{
	int iVar0;
	
	if (func_315(unk_0x9E2D6C50374FCFA9(), 1))
	{
		iVar0 = func_324();
		if (func_20(iVar0, 1, 1) && BitTest(Global_1853348[iVar0 /*834*/].f_267.f_384.f_3, 6))
		{
			return 1;
		}
		if ((func_349(unk_0x9E2D6C50374FCFA9(), 0) && func_347(unk_0x9E2D6C50374FCFA9())) || func_416(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
	}
	return 0;
}

int func_347(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_348(iParam0, 9);
	}
	return 0;
}

var func_348(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_349(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_350()
{
	if (func_426(unk_0x9E2D6C50374FCFA9()) && func_421() != func_420())
	{
		if ((BitTest(Global_2689235[func_421() /*453*/].f_318.f_4, 1) || BitTest(Global_1946250.f_6, 10)) || Global_2689235[func_421() /*453*/].f_447 != Global_1966109)
		{
			return 0;
		}
	}
	return 1;
}

bool func_351(int iParam0, struct<3> Param1, float fParam4)
{
	return func_352(unk_0x6B62510F212526DC(iParam0, 1), unk_0x82FE2343F8BDFF0B(iParam0), Param1, fParam4);
}

bool func_352(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { unk_0x6DB7FBD602C51670(0f, 0f, 0f, uParam3, 0f, 1f, 0f) };
	uVar3 = func_353(func_354(Var0), func_354(Param4 - Param0));
	return unk_0x12528DC2778CB217(uVar3) <= fParam7;
}

float func_353(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_354(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

Vector3 func_355(int iParam0)
{
	if (Local_2026.f_257 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966.9982f, 31.2594f, 116.2281f;
			
			case 1:
				return 966.8203f, 31.9305f, 116.2222f;
			
			case 2:
				return 967.2217f, 32.4899f, 116.2216f;
			
			case 3:
				return 967.8962f, 32.6604f, 116.218f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1148.367f, 269.0835f, -51.7879f;
			
			case 1:
				return 1148.345f, 269.7643f, -51.7876f;
			
			case 2:
				return 1148.821f, 270.2321f, -51.7708f;
			
			case 3:
				return 1149.495f, 270.2401f, -51.7632f;
			
			case 4:
				return 1152.317f, 267.4195f, -51.8003f;
			
			case 5:
				return 1152.337f, 266.7202f, -51.7913f;
			
			case 6:
				return 1151.849f, 266.2183f, -51.7916f;
			
			case 7:
				return 1151.182f, 266.2501f, -51.7864f;
			
			case 8:
				return 1128.713f, 262.8658f, -51.0035f;
			
			case 9:
				return 1129.446f, 262.8649f, -51.0121f;
			
			case 10:
				return 1129.932f, 262.3822f, -51.0027f;
			
			case 11:
				return 1129.899f, 261.6921f, -51.0422f;
			
			case 12:
				return 1143.738f, 247.8562f, -51.034f;
			
			case 13:
				return 1144.459f, 247.8673f, -51.0229f;
			
			case 14:
				return 1144.951f, 247.3612f, -51.015f;
			
			case 15:
				return 1144.913f, 246.663f, -51.0236f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_356(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	return unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(iParam0, iParam5), Param1) <= (fParam4 * fParam4);
}

Vector3 func_357(int iParam0)
{
	var uVar0;
	
	if (Local_2026.f_257 == 1)
	{
		if (func_421() != func_420())
		{
			uVar0 = unk_0x87A467676BDF8C35(func_70(func_381(iParam0)), 1f, func_218(Global_2689235[func_421() /*453*/].f_447), 0, 0, 0);
		}
	}
	else if (func_381(iParam0) == 0 || func_381(iParam0) == 1)
	{
		uVar0 = unk_0x87A467676BDF8C35(func_70(func_381(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01"), 0, 0, 0);
	}
	else
	{
		uVar0 = unk_0x87A467676BDF8C35(func_70(func_381(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01b"), 0, 0, 0);
	}
	if (unk_0xE5965CDF24F93A9F(uVar0) && unk_0x8DEF8D80C66C34D4(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0x851CFDE0CBC150EC(iVar0, unk_0x7F0054A115D66F44(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_358(int iParam0)
{
	return Global_100493.f_374 == iParam0;
}

void func_359(int iParam0)
{
	Local_2026.f_1 = iParam0;
}

void func_360(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_213(&(Local_1769[iParam0 /*8*/]), 0);
	Local_1769[iParam0 /*8*/].f_6.f_1 = -1;
}

int func_361()
{
	int iVar0;
	
	if (Local_2026.f_257 == 1)
	{
		if (!unk_0xE5965CDF24F93A9F(Local_2026.f_537))
		{
			if (func_421() != func_420())
			{
				iVar0 = func_218(Global_2689235[func_421() /*453*/].f_447);
				unk_0xD69A0C3662175E68(iVar0);
				if (!unk_0x0152AA00FA3130F1(iVar0))
				{
					return 0;
				}
				Local_2026.f_537 = unk_0x0E536D72AB30F4C8(iVar0, func_70(0), 0, 0, 1);
				unk_0xA539EDE8DA5BBC22(Local_2026.f_537, func_70(0), 0, 0, 1);
				unk_0xBBF86885619695CE(Local_2026.f_537, func_69(0));
				unk_0x71B42D724F2DB164(Local_2026.f_537, func_362(func_421()));
				unk_0x5C65DDDC219B3AA5(Local_2026.f_537, true);
				unk_0xF1A23B343DFEDFD0(iVar0);
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_362(int iParam0)
{
	if (func_365(iParam0))
	{
		return 1;
	}
	else if (func_364(iParam0))
	{
		return 2;
	}
	else if (func_363(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_363(int iParam0)
{
	if (iParam0 != func_420())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_1, 21);
	}
	return 0;
}

int func_364(int iParam0)
{
	if (iParam0 != func_420())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_1, 20);
	}
	return 0;
}

int func_365(int iParam0)
{
	if (iParam0 != func_420())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_1, 19);
	}
	return 0;
}

void func_366(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x0A89FDFA763DCAED();
		}
		else
		{
			*uParam0 = unk_0xE75390F3CA208D5E();
		}
	}
	else
	{
		*uParam0 = unk_0x320D1840B6DAA1CC();
	}
	uParam0->f_1 = 1;
}

int func_367()
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_368(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 0:
			break;
		
		case 1:
			if ((func_371(unk_0x9E2D6C50374FCFA9(), 1) || func_371(unk_0x9E2D6C50374FCFA9(), 2)) || func_370())
			{
				func_213(uParam0, 3);
			}
			break;
		
		case 2:
			if ((func_371(unk_0x9E2D6C50374FCFA9(), 1) || func_371(unk_0x9E2D6C50374FCFA9(), 2)) || func_370())
			{
				func_213(uParam0, 3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_369())
			{
				func_213(uParam0, 8);
			}
			break;
		
		case 8:
			break;
	}
}

int func_369()
{
	if ((((func_371(unk_0x9E2D6C50374FCFA9(), 4) || func_371(unk_0x9E2D6C50374FCFA9(), 5)) || func_371(unk_0x9E2D6C50374FCFA9(), 6)) || func_371(unk_0x9E2D6C50374FCFA9(), 7)) || func_370())
	{
		return 1;
	}
	return 0;
}

int func_370()
{
	if (func_65(&(Local_2026.f_1580), 3500, 0))
	{
		func_63(&(Local_2026.f_1580));
		return 1;
	}
	return 0;
}

int func_371(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return BitTest(Local_109.f_1477[iParam0], iVar0);
}

void func_372(int iParam0, int iParam1)
{
	Global_23011.f_9 = iParam0;
	Global_23011.f_10 = iParam1;
}

void func_373(bool bParam0)
{
	if (bParam0)
	{
		func_374(1);
		func_249(1);
	}
	if (!unk_0xDFA2E5162727D6D2() && !unk_0xF1EC2C71FD1371B8())
	{
		unk_0xCAFE3D4FD6C43219();
		unk_0x58699DA34F83B510(0);
		unk_0xA308468B6494BC8B(1);
		unk_0x7653D561C9574763(2, 200, 1);
		unk_0x7653D561C9574763(2, 199, 1);
		unk_0x07899AAA5D680386(0, 200);
		unk_0x07899AAA5D680386(2, 200);
		unk_0x07899AAA5D680386(0, 199);
		unk_0x07899AAA5D680386(2, 199);
		unk_0x07899AAA5D680386(0, 201);
		unk_0x07899AAA5D680386(0, 202);
		unk_0x07899AAA5D680386(0, 187);
	}
}

void func_374(bool bParam0)
{
	if (bParam0)
	{
		if (func_341())
		{
			Global_2714762.f_41 = 1;
		}
	}
	else
	{
		Global_2714762.f_41 = 0;
	}
}

void func_375(bool bParam0)
{
	char* sVar0;
	
	if (Local_2026.f_1 > 2 && unk_0x4DE6A646AFB7CF5C(0) != 4)
	{
		if (((((!func_380() && !func_379()) && !func_378()) && !func_377()) && !func_81(unk_0x9E2D6C50374FCFA9())) && !unk_0xBC4351060BEFB0D2())
		{
			func_298(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
		}
		func_243();
	}
	if (Local_2026.f_1 > 2)
	{
		func_243();
	}
	if (BitTest(Local_2026.f_250, 0))
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_381(Local_2026.f_247) == 2 || func_381(Local_2026.f_247) == 3) || func_426(unk_0x9E2D6C50374FCFA9()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		func_244(1, -1);
		unk_0x861D35D42CFD2991(sVar0);
		iLocal_3667 = 1;
		Local_2026.f_250 = 0;
	}
	if (unk_0x876B1078E90C91CB(Local_2026.f_242))
	{
		unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
		unk_0x588DDCB644C6486A(Local_2026.f_242, 0);
		bLocal_3668 = false;
		iLocal_3669 = 0;
	}
	if (Local_2026.f_259 != -1)
	{
		func_309(&(Local_2026.f_259));
		Local_2026.f_259 = -1;
	}
	Local_2026.f_244 = 0;
	Local_2026.f_253 = 0;
	Local_2026.f_252 = 0;
	Local_2026.f_232 = 0;
	Local_2026.f_233 = 0;
	Local_2026.f_234 = 0;
	Local_2026.f_235 = 0;
	Local_2026.f_243 = 0;
	Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_5 = 0;
	if (!bParam0)
	{
		func_337();
	}
	Local_3639.f_4 = func_401();
	Local_3639.f_5 = func_190(&uLocal_3611, 0, 0);
	if (Local_2026.f_1 > 2)
	{
		if (Global_262145.f_26820)
		{
			unk_0xBDE5ABC4347750FF(&Local_3639);
		}
	}
	if (bParam0)
	{
		Local_2026.f_255 = unk_0x497E09037A63D346(func_357(Local_2026.f_247), func_217(Local_2026.f_247), 2, 0, 0, 1065353216, 0, 1065353216);
		unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_2026.f_255, func_216(), func_376(Local_2026.f_247), 2f, -2f, 13, 16, 1148846080, 0);
		unk_0x60E9DD146055C13E(Local_2026.f_255);
	}
	if (!bParam0)
	{
		unk_0xB0550BC91B0159D6(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_4), 2);
	}
	if (bParam0 || Local_2026.f_1 > 2)
	{
		func_236();
	}
	func_359(10);
	func_165(0);
}

char* func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		
		default:
	}
	return "sit_exit_left";
}

int func_377()
{
	if (unk_0xB4C854DD86E40FDA(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_378()
{
	return Global_1575058;
}

int func_379()
{
	if (func_188() == 3 || func_188() == 2)
	{
		return 1;
	}
	return 0;
}

int func_380()
{
	if (func_188() == 1 || func_188() == 4)
	{
		return 1;
	}
	return 0;
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		
		case 8:
		case 9:
		case 10:
		case 11:
			return 2;
		
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

void func_382()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	bool bVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	struct<3> Var15;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	if (((func_358(joaat("rm_GamingFloor_02")) || func_358(joaat("rm_GamingFloor_03"))) || func_426(unk_0x9E2D6C50374FCFA9())) && !func_400())
	{
		iLocal_3661 = 1;
		if (!bLocal_3660)
		{
			bLocal_3660 = (func_409() && func_399());
		}
	}
	else
	{
		if (iLocal_3661)
		{
			func_411();
			func_397();
			iLocal_3661 = 0;
		}
		return;
	}
	if (!Global_1663509.f_808)
	{
		iVar6 = 0;
		while (iVar6 < unk_0x9418088815C89D59(1))
		{
			if (unk_0xB1D84E0EF6979085(1, iVar6) == 174)
			{
				if (unk_0x92039F20B184AB4D(1, iVar6, &Var0, 6))
				{
					if (Var0.f_0 == -1261953521)
					{
						if (((unk_0x976D40337FCB1481(Var0.f_1) && Var0.f_2 >= 0) && Var0.f_2 < 224) && func_396(Var0.f_3, Local_2026.f_236) != 0)
						{
							if (Var0.f_4)
							{
								Local_2026.f_260[Var0.f_2] = Var0.f_3;
							}
							else
							{
								Local_2026.f_305[Var0.f_2] = Var0.f_3;
								if (Var0.f_5)
								{
									func_395(Var0.f_2);
								}
								else
								{
									func_394(Var0.f_2);
								}
							}
						}
					}
				}
			}
			iVar6++;
		}
	}
	iVar7 = 0;
	while (iVar7 < Local_2026.f_257)
	{
		if (iVar7 != iLocal_3670 && iVar7 != Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4)
		{
		}
		else
		{
			Var8 = { func_70(iVar7) };
			Var8.f_2 = (Var8.f_2 + 0.914f);
			bVar11 = false;
			if (func_53(iVar7, Local_2026.f_257))
			{
				bVar11 = true;
			}
			Var15 = { 0f, 0f, func_69(iVar7) };
			iVar18 = 0;
			while (iVar18 < 4)
			{
				iVar19 = Local_109.f_1600[(iVar7 * 4 + iVar18)];
				if (iVar19 < 0 || ((!func_358(joaat("rm_GamingFloor_02")) && !func_358(joaat("rm_GamingFloor_03"))) && !func_426(unk_0x9E2D6C50374FCFA9())))
				{
					iVar12 = 0;
					while (iVar12 < 7)
					{
						iVar13 = func_21(iVar7, iVar12, iVar18, 1);
						if (unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar13]))
						{
							if (unk_0x84724F93D2180BCC(Local_2026.f_648[iVar13]) > 0)
							{
								unk_0x8B9AD14C7D42CC13(Local_2026.f_648[iVar13], unk_0xF34EE736CF047844(func_202(unk_0xBBDA792448DB5A89(unk_0x84724F93D2180BCC(Local_2026.f_648[iVar13])), 0f, 0.1f, 0)), 1);
							}
							else
							{
								unk_0x4BDA5AFD88C085EB(&(Local_2026.f_648[iVar13]));
							}
						}
						if (Local_2026.f_305[iVar13] != -1)
						{
							Local_2026.f_305[iVar13] = -1;
						}
						if (func_393(iVar13))
						{
							func_394(iVar13);
						}
						iVar13 = func_21(iVar7, iVar12, iVar18, 0);
						if (unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar13]))
						{
							if (unk_0x84724F93D2180BCC(Local_2026.f_648[iVar13]) > 0)
							{
								unk_0x8B9AD14C7D42CC13(Local_2026.f_648[iVar13], unk_0xF34EE736CF047844(func_202(unk_0xBBDA792448DB5A89(unk_0x84724F93D2180BCC(Local_2026.f_648[iVar13])), 0f, 0.1f, 0)), 1);
							}
							else
							{
								unk_0x4BDA5AFD88C085EB(&(Local_2026.f_648[iVar13]));
							}
						}
						if (Local_2026.f_305[iVar13] != -1)
						{
							Local_2026.f_305[iVar13] = -1;
						}
						if (func_393(iVar13))
						{
							func_394(iVar13);
						}
						iVar12++;
					}
					iVar12 = 0;
					while (iVar12 < 4)
					{
						if (unk_0xE5965CDF24F93A9F(Local_2026.f_538[func_392(iVar7, iVar18, iVar12)]))
						{
							if (unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, iVar12)]) > 0)
							{
								unk_0x8B9AD14C7D42CC13(Local_2026.f_538[func_392(iVar7, iVar18, iVar12)], unk_0xF34EE736CF047844(func_202(unk_0xBBDA792448DB5A89(unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, iVar12)])), 0f, 0.1f, 0)), 1);
							}
							else
							{
								unk_0x4BDA5AFD88C085EB(&(Local_2026.f_538[func_392(iVar7, iVar18, iVar12)]));
							}
						}
						iVar12++;
					}
				}
				else
				{
					iVar12 = 0;
					iVar12 = 0;
					while (iVar12 < 7)
					{
						iVar13 = func_21(iVar7, iVar12, iVar18, 0);
						uVar14 = func_391(Local_109.f_899[iVar19 /*9*/][iVar12], 1);
						if (iVar13 >= 0 && iVar13 < (56 * Local_2026.f_257))
						{
							if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar7]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7])))
							{
								if ((((iVar18 == 0 && unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_7(iVar7), 3)) || (iVar18 == 1 && unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_6(iVar7), 3))) || (iVar18 == 2 && unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_5(iVar7), 3))) || (iVar18 == 3 && unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_4(iVar7), 3)))
								{
									if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206))
									{
										iVar21 = 0;
										while (iVar21 < 7)
										{
											iVar22 = func_21(iVar7, iVar21, iVar18, 0);
											if (unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar22]))
											{
												iVar20 = iVar21;
											}
											iVar21++;
										}
										if (iVar12 == iVar20)
										{
											if (unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar13]) && !unk_0xE85F749F6D5C809E(Local_2026.f_648[iVar13]))
											{
												unk_0x9A97DC6DBC7B223D(Local_2026.f_648[iVar13], unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), unk_0xB897FCFCFA664B38(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
											}
										}
										else if (unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar13]))
										{
											unk_0x4BDA5AFD88C085EB(&(Local_2026.f_648[iVar13]));
											Local_2026.f_305[iVar13] = -1;
										}
									}
									else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 585557868))
									{
										if (unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar13]))
										{
											unk_0x4BDA5AFD88C085EB(&(Local_2026.f_648[iVar13]));
											Local_2026.f_305[iVar13] = -1;
										}
									}
								}
								else if (!unk_0xACC32B78196FBC2A(uVar14))
								{
									Local_2026.f_305[iVar13] = -1;
									if (!unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar13]))
									{
										if ((((unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar7]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]))) && unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_22(iVar7, iVar18), 3)) && unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206)) && iVar12 == 1)
										{
										}
										else
										{
											if (func_396(Local_109.f_899[iVar19 /*9*/][iVar12], Local_2026.f_236) != 0)
											{
												Local_2026.f_648[iVar13] = unk_0x0A7322C6D0E1A985(func_396(Local_109.f_899[iVar19 /*9*/][iVar12], Local_2026.f_236), unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_390(iVar12, iVar18, 0)), 0, 0, 1);
												unk_0xA539EDE8DA5BBC22(Local_2026.f_648[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_390(iVar12, iVar18, 0)), 0, 0, 1);
												unk_0x8CE3D365F064F69E(Local_2026.f_648[iVar13], Var15 + func_389(iVar12, iVar18, 0, func_393(iVar13)), 2, 1);
											}
											Jump @2151; //curOff = 1856
											if (unk_0x15CAA6D7B11F1A7C(Local_2026.f_648[iVar13]) != func_396(Local_109.f_899[iVar19 /*9*/][iVar12], Local_2026.f_236))
											{
												unk_0x4BDA5AFD88C085EB(&(Local_2026.f_648[iVar13]));
											}
											else if ((((unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar7]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]))) && unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_22(iVar7, iVar18), 3)) && unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206)) && iVar12 == 1)
											{
												unk_0x4BDA5AFD88C085EB(&(Local_2026.f_648[iVar13]));
											}
											else if (unk_0xE85F749F6D5C809E(Local_2026.f_648[iVar13]))
											{
												unk_0xE6451C2F193342C7(Local_2026.f_648[iVar13], 0, 1);
												unk_0xA539EDE8DA5BBC22(Local_2026.f_648[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_390(iVar12, iVar18, 0)), 0, 0, 1);
												unk_0x8CE3D365F064F69E(Local_2026.f_648[iVar13], Var15 + func_389(iVar12, iVar18, 0, func_393(iVar13)), 2, 1);
											}
											Jump @2895; //curOff = 2151
											if (Local_2026.f_305[iVar13] != -1)
											{
												if (!unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar13]))
												{
													Local_2026.f_648[iVar13] = unk_0x0A7322C6D0E1A985(func_396(Local_2026.f_305[iVar13], Local_2026.f_236), Var8, 0, 0, 1);
													if (((unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar7]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]))) && !unk_0x508CDC652F5361B5(Local_2026.f_648[iVar13])) && unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206))
													{
														if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_22(iVar7, iVar18), 3))
														{
															unk_0x9A97DC6DBC7B223D(Local_2026.f_648[iVar13], unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), unk_0xB897FCFCFA664B38(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
														}
														else
														{
															unk_0x9A97DC6DBC7B223D(Local_2026.f_648[iVar13], unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), unk_0xB897FCFCFA664B38(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
														}
													}
												}
												else if (unk_0x15CAA6D7B11F1A7C(Local_2026.f_648[iVar13]) != func_396(Local_2026.f_305[iVar13], Local_2026.f_236))
												{
													unk_0x4BDA5AFD88C085EB(&(Local_2026.f_648[iVar13]));
													Local_2026.f_305[iVar13] = -1;
													func_394(iVar13);
												}
												else if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar7]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7])))
												{
													if (!unk_0x508CDC652F5361B5(Local_2026.f_648[iVar13]) && unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206))
													{
														unk_0x9A97DC6DBC7B223D(Local_2026.f_648[iVar13], unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), unk_0xB897FCFCFA664B38(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
													}
													if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 585557868))
													{
														if (unk_0xE85F749F6D5C809E(Local_2026.f_648[iVar13]))
														{
															unk_0xE6451C2F193342C7(Local_2026.f_648[iVar13], 0, 1);
															unk_0xA539EDE8DA5BBC22(Local_2026.f_648[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_390(iVar12, iVar18, 0)), 0, 0, 1);
															unk_0x8CE3D365F064F69E(Local_2026.f_648[iVar13], Var15 + func_389(iVar12, iVar18, 0, func_393(iVar13)), 2, 1);
														}
													}
												}
											}
											else if (iVar13 >= 0 && iVar13 < (56 * Local_2026.f_257))
											{
												if (unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar13]))
												{
													unk_0x4BDA5AFD88C085EB(&(Local_2026.f_648[iVar13]));
													Local_2026.f_305[iVar13] = -1;
													func_394(iVar13);
												}
											}
										}
										iVar12++;
										if (Local_1769[iVar19 /*8*/].f_1 > 0)
										{
											iVar23 = Local_1769[iVar19 /*8*/].f_1;
											if (BitTest(Local_1769[iVar19 /*8*/], 10))
											{
												iVar23 = (Local_1769[iVar19 /*8*/].f_1 / 2);
											}
											if (!unk_0xE5965CDF24F93A9F(Local_2026.f_538[func_392(iVar7, iVar18, 0)]))
											{
												if (func_388(iVar23, bVar11) != 0)
												{
													Local_2026.f_538[func_392(iVar7, iVar18, 0)] = unk_0x0A7322C6D0E1A985(func_388(iVar23, bVar11), unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_387(iVar23, 0, iVar18, bVar11)), 0, 0, 1);
													unk_0xA539EDE8DA5BBC22(Local_2026.f_538[func_392(iVar7, iVar18, 0)], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_387(iVar23, 0, iVar18, bVar11)), 0, 0, 1);
													unk_0x8CE3D365F064F69E(Local_2026.f_538[func_392(iVar7, iVar18, 0)], Var15 + func_386(iVar23, 0, iVar18, bVar11), 2, 1);
													if (!unk_0xACC32B78196FBC2A(func_385(iVar23)))
													{
														unk_0x979FC7400A5D0CD2(-1, func_385(iVar23), Local_2026.f_538[func_392(iVar7, iVar18, 0)], "dlc_vw_table_games_sounds", 0, 0);
													}
												}
											}
											else if (unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, 0)]) != 255)
											{
												unk_0x4BDA5AFD88C085EB(&(Local_2026.f_538[func_392(iVar7, iVar18, 0)]));
											}
											if (BitTest(Local_1769[iVar19 /*8*/], 10))
											{
												if (!unk_0xE5965CDF24F93A9F(Local_2026.f_538[func_392(iVar7, iVar18, 1)]))
												{
													if (func_388(iVar23, bVar11) != 0)
													{
														Local_2026.f_538[func_392(iVar7, iVar18, 1)] = unk_0x0A7322C6D0E1A985(func_388(iVar23, bVar11), unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_387(iVar23, 1, iVar18, bVar11)), 0, 0, 1);
														unk_0xA539EDE8DA5BBC22(Local_2026.f_538[func_392(iVar7, iVar18, 1)], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_387(iVar23, 1, iVar18, bVar11)), 0, 0, 1);
														unk_0x8CE3D365F064F69E(Local_2026.f_538[func_392(iVar7, iVar18, 1)], Var15 + func_386(iVar23, 1, iVar18, bVar11), 2, 1);
														if (!unk_0xACC32B78196FBC2A(func_385(iVar23)))
														{
															unk_0x979FC7400A5D0CD2(-1, func_385(iVar23), Local_2026.f_538[func_392(iVar7, iVar18, 1)], "dlc_vw_table_games_sounds", 0, 0);
														}
													}
												}
												else if (unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, 1)]) != 255)
												{
													unk_0x4BDA5AFD88C085EB(&(Local_2026.f_538[func_392(iVar7, iVar18, 1)]));
												}
											}
										}
										else
										{
											if (unk_0xE5965CDF24F93A9F(Local_2026.f_538[func_392(iVar7, iVar18, 0)]))
											{
												if (unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, 0)]) > 0)
												{
													unk_0x8B9AD14C7D42CC13(Local_2026.f_538[func_392(iVar7, iVar18, 0)], unk_0xF34EE736CF047844(func_202(unk_0xBBDA792448DB5A89(unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, 0)])), 0f, 0.1f, 0)), 1);
												}
												else
												{
													unk_0x4BDA5AFD88C085EB(&(Local_2026.f_538[func_392(iVar7, iVar18, 0)]));
												}
											}
											if (unk_0xE5965CDF24F93A9F(Local_2026.f_538[func_392(iVar7, iVar18, 1)]))
											{
												if (unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, 1)]) > 0)
												{
													unk_0x8B9AD14C7D42CC13(Local_2026.f_538[func_392(iVar7, iVar18, 1)], unk_0xF34EE736CF047844(func_202(unk_0xBBDA792448DB5A89(unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, 1)])), 0f, 0.1f, 0)), 1);
												}
												else
												{
													unk_0x4BDA5AFD88C085EB(&(Local_2026.f_538[func_392(iVar7, iVar18, 1)]));
												}
											}
										}
										iVar12 = 0;
										iVar12 = 0;
										while (iVar12 < 7)
										{
											iVar13 = func_21(iVar7, iVar12, iVar18, 1);
											sVar14 = func_391(Local_109.f_1188[iVar19 /*9*/][iVar12], 1);
											if (iVar13 >= 0 && iVar13 < (56 * Local_2026.f_257))
											{
												if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar7]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7])))
												{
													if ((((iVar18 == 0 && unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_7(iVar7), 3)) || (iVar18 == 1 && unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_6(iVar7), 3))) || (iVar18 == 2 && unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_5(iVar7), 3))) || (iVar18 == 3 && unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_4(iVar7), 3)))
													{
														if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206) || unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 585557868))
														{
															if (unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar13]))
															{
																unk_0x4BDA5AFD88C085EB(&(Local_2026.f_648[iVar13]));
																Local_2026.f_305[iVar13] = -1;
															}
														}
													}
													else if (!unk_0xACC32B78196FBC2A(sVar14))
													{
														Local_2026.f_305[iVar13] = -1;
														if (!unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar13]))
														{
															if (func_396(Local_109.f_1188[iVar19 /*9*/][iVar12], Local_2026.f_236) != 0)
															{
																Local_2026.f_648[iVar13] = unk_0x0A7322C6D0E1A985(func_396(Local_109.f_1188[iVar19 /*9*/][iVar12], Local_2026.f_236), unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_390(iVar12, iVar18, 1)), 0, 0, 1);
																unk_0xA539EDE8DA5BBC22(Local_2026.f_648[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_390(iVar12, iVar18, 1)), 0, 0, 1);
																unk_0x8CE3D365F064F69E(Local_2026.f_648[iVar13], Var15 + func_389(iVar12, iVar18, 1, func_393(iVar13)), 2, 1);
															}
														}
														else if (unk_0x15CAA6D7B11F1A7C(Local_2026.f_648[iVar13]) != func_396(Local_109.f_1188[iVar19 /*9*/][iVar12], Local_2026.f_236))
														{
															unk_0x4BDA5AFD88C085EB(&(Local_2026.f_648[iVar13]));
														}
														else if (unk_0xE85F749F6D5C809E(Local_2026.f_648[iVar13]))
														{
															unk_0xE6451C2F193342C7(Local_2026.f_648[iVar13], 0, 1);
															unk_0xA539EDE8DA5BBC22(Local_2026.f_648[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_390(iVar12, iVar18, 1)), 0, 0, 1);
															unk_0x8CE3D365F064F69E(Local_2026.f_648[iVar13], Var15 + func_389(iVar12, iVar18, 1, func_393(iVar13)), 2, 1);
														}
													}
													else if (Local_2026.f_305[iVar13] != -1)
													{
														if (!unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar13]))
														{
															Local_2026.f_648[iVar13] = unk_0x0A7322C6D0E1A985(func_396(Local_2026.f_305[iVar13], Local_2026.f_236), Var8, 0, 0, 1);
															if (((unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar7]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]))) && !unk_0x508CDC652F5361B5(Local_2026.f_648[iVar13])) && unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206))
															{
																unk_0x9A97DC6DBC7B223D(Local_2026.f_648[iVar13], unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), unk_0xB897FCFCFA664B38(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
															}
														}
														else if (unk_0x15CAA6D7B11F1A7C(Local_2026.f_648[iVar13]) != func_396(Local_2026.f_305[iVar13], Local_2026.f_236))
														{
															unk_0x4BDA5AFD88C085EB(&(Local_2026.f_648[iVar13]));
															Local_2026.f_305[iVar13] = -1;
															func_394(iVar13);
														}
														else if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar7]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7])))
														{
															if (!unk_0x508CDC652F5361B5(Local_2026.f_648[iVar13]) && unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206))
															{
																unk_0x9A97DC6DBC7B223D(Local_2026.f_648[iVar13], unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), unk_0xB897FCFCFA664B38(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
															}
															if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 585557868))
															{
																if (unk_0xE85F749F6D5C809E(Local_2026.f_648[iVar13]))
																{
																	unk_0xE6451C2F193342C7(Local_2026.f_648[iVar13], 0, 1);
																	unk_0xA539EDE8DA5BBC22(Local_2026.f_648[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_390(iVar12, iVar18, 1)), 0, 0, 1);
																	unk_0x8CE3D365F064F69E(Local_2026.f_648[iVar13], Var15 + func_389(iVar12, iVar18, 1, func_393(iVar13)), 2, 1);
																}
															}
														}
													}
													else if (iVar13 >= 0 && iVar13 < (56 * Local_2026.f_257))
													{
														if (unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar13]))
														{
															unk_0x4BDA5AFD88C085EB(&(Local_2026.f_648[iVar13]));
															Local_2026.f_305[iVar13] = -1;
															func_394(iVar13);
														}
													}
													iVar12++;
													if (Local_1769[iVar19 /*8*/].f_2 > 0)
													{
														iVar23 = Local_1769[iVar19 /*8*/].f_2;
														if (BitTest(Local_1769[iVar19 /*8*/], 11))
														{
															iVar23 = (Local_1769[iVar19 /*8*/].f_2 / 2);
														}
														if (!unk_0xE5965CDF24F93A9F(Local_2026.f_538[func_392(iVar7, iVar18, 2)]))
														{
															if (func_388(iVar23, bVar11) != 0)
															{
																Local_2026.f_538[func_392(iVar7, iVar18, 2)] = unk_0x0A7322C6D0E1A985(func_388(iVar23, bVar11), unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_387(iVar23, 2, iVar18, bVar11)), 0, 0, 1);
																unk_0xA539EDE8DA5BBC22(Local_2026.f_538[func_392(iVar7, iVar18, 2)], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_387(iVar23, 2, iVar18, bVar11)), 0, 0, 1);
																unk_0x8CE3D365F064F69E(Local_2026.f_538[func_392(iVar7, iVar18, 2)], Var15 + func_386(iVar23, 2, iVar18, bVar11), 2, 1);
																if (!unk_0xACC32B78196FBC2A(func_385(iVar23)))
																{
																	unk_0x979FC7400A5D0CD2(-1, func_385(iVar23), Local_2026.f_538[func_392(iVar7, iVar18, 2)], "dlc_vw_table_games_sounds", 0, 0);
																}
															}
														}
														else if (unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, 2)]) != 255)
														{
															unk_0x4BDA5AFD88C085EB(&(Local_2026.f_538[func_392(iVar7, iVar18, 2)]));
														}
														if (BitTest(Local_1769[iVar19 /*8*/], 11))
														{
															if (!unk_0xE5965CDF24F93A9F(Local_2026.f_538[func_392(iVar7, iVar18, 3)]))
															{
																if (func_388(iVar23, bVar11) != 0)
																{
																	Local_2026.f_538[func_392(iVar7, iVar18, 3)] = unk_0x0A7322C6D0E1A985(func_388(iVar23, bVar11), unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_387(iVar23, 3, iVar18, bVar11)), 0, 0, 1);
																	unk_0xA539EDE8DA5BBC22(Local_2026.f_538[func_392(iVar7, iVar18, 3)], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_387(iVar23, 3, iVar18, bVar11)), 0, 0, 1);
																	unk_0x8CE3D365F064F69E(Local_2026.f_538[func_392(iVar7, iVar18, 3)], Var15 + func_386(iVar23, 3, iVar18, bVar11), 2, 1);
																	if (!unk_0xACC32B78196FBC2A(func_385(iVar23)))
																	{
																		unk_0x979FC7400A5D0CD2(-1, func_385(iVar23), Local_2026.f_538[func_392(iVar7, iVar18, 3)], "dlc_vw_table_games_sounds", 0, 0);
																	}
																}
															}
															else if (unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, 3)]) != 255)
															{
																unk_0x4BDA5AFD88C085EB(&(Local_2026.f_538[func_392(iVar7, iVar18, 3)]));
															}
														}
													}
													else
													{
														if (unk_0xE5965CDF24F93A9F(Local_2026.f_538[func_392(iVar7, iVar18, 2)]))
														{
															if (unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, 2)]) > 0)
															{
																unk_0x8B9AD14C7D42CC13(Local_2026.f_538[func_392(iVar7, iVar18, 2)], unk_0xF34EE736CF047844(func_202(unk_0xBBDA792448DB5A89(unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, 2)])), 0f, 0.1f, 0)), 1);
															}
															else
															{
																unk_0x4BDA5AFD88C085EB(&(Local_2026.f_538[func_392(iVar7, iVar18, 2)]));
															}
														}
														if (unk_0xE5965CDF24F93A9F(Local_2026.f_538[func_392(iVar7, iVar18, 3)]))
														{
															if (unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, 3)]) > 0)
															{
																unk_0x8B9AD14C7D42CC13(Local_2026.f_538[func_392(iVar7, iVar18, 3)], unk_0xF34EE736CF047844(func_202(unk_0xBBDA792448DB5A89(unk_0x84724F93D2180BCC(Local_2026.f_538[func_392(iVar7, iVar18, 3)])), 0f, 0.1f, 0)), 1);
															}
															else
															{
																unk_0x4BDA5AFD88C085EB(&(Local_2026.f_538[func_392(iVar7, iVar18, 3)]));
															}
														}
													}
													iVar18++;
													iVar12 = 0;
													iVar12 = 0;
													while (iVar12 < 11)
													{
														bVar25 = true;
														if (!Local_109.f_1525[iVar7] && iVar12 == 0)
														{
															bVar25 = false;
														}
														sVar14 = func_391(Local_109.f_846[iVar7 /*13*/][iVar12], bVar25);
														iVar13 = func_9(iVar7, iVar12);
														if (iVar13 >= 0 && iVar13 < (11 * Local_2026.f_257))
														{
															if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar7]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7])))
															{
																if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_3(iVar7), 3))
																{
																	if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206))
																	{
																		iVar27 = 0;
																		while (iVar27 < 11)
																		{
																			iVar28 = func_9(iVar7, iVar27);
																			if (unk_0xE5965CDF24F93A9F(Local_2026.f_603[iVar28]))
																			{
																				iVar26 = iVar27;
																			}
																			iVar27++;
																		}
																		if (iVar12 == iVar26)
																		{
																			if (unk_0xE5965CDF24F93A9F(Local_2026.f_603[iVar13]) && !unk_0xE85F749F6D5C809E(Local_2026.f_603[iVar13]))
																			{
																				unk_0x9A97DC6DBC7B223D(Local_2026.f_603[iVar13], unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), unk_0xB897FCFCFA664B38(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
																			}
																		}
																		else if (unk_0xE5965CDF24F93A9F(Local_2026.f_603[iVar13]))
																		{
																			unk_0x4BDA5AFD88C085EB(&(Local_2026.f_603[iVar13]));
																			Local_2026.f_260[iVar13] = -1;
																		}
																	}
																	else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 585557868))
																	{
																		if (unk_0xE5965CDF24F93A9F(Local_2026.f_603[iVar13]))
																		{
																			unk_0x4BDA5AFD88C085EB(&(Local_2026.f_603[iVar13]));
																			Local_2026.f_260[iVar13] = -1;
																		}
																	}
																}
																else if (Local_109.f_1520[iVar7] == 2 && ((!unk_0xACC32B78196FBC2A(sVar14) && Local_109.f_846[iVar7 /*13*/][iVar12] != 0) || Local_2026.f_260[iVar13] != -1))
																{
																	if (!unk_0xACC32B78196FBC2A(func_391(Local_109.f_846[iVar7 /*13*/][iVar12], 1)) && func_396(Local_109.f_846[iVar7 /*13*/][iVar12], Local_2026.f_236) != 0)
																	{
																		Local_2026.f_260[iVar13] = -1;
																		if (!unk_0xE5965CDF24F93A9F(Local_2026.f_603[iVar13]))
																		{
																			iVar24 = Local_109.f_846[iVar7 /*13*/][iVar12];
																			if (!bVar25)
																			{
																				iVar24 = 0;
																			}
																			if (!unk_0xACC32B78196FBC2A(func_391(Local_109.f_846[iVar7 /*13*/][iVar12], 1)) && func_396(iVar24, Local_2026.f_236) != 0)
																			{
																				Local_2026.f_603[iVar13] = unk_0x0A7322C6D0E1A985(func_396(iVar24, Local_2026.f_236), unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_384(iVar12)), 0, 0, 1);
																				unk_0xA539EDE8DA5BBC22(Local_2026.f_603[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_384(iVar12)), 0, 0, 1);
																				unk_0x8CE3D365F064F69E(Local_2026.f_603[iVar13], Var15 + func_383(iVar12, bVar25), 2, 1);
																				Local_2026.f_260[iVar13] = -1;
																			}
																		}
																		else if (iVar12 == 0)
																		{
																			if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar7]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7])))
																			{
																				if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_33(iVar7), 3))
																				{
																					if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206))
																					{
																						if (!unk_0xE85F749F6D5C809E(Local_2026.f_603[iVar13]))
																						{
																							unk_0x4BDA5AFD88C085EB(&(Local_2026.f_603[iVar13]));
																							Local_2026.f_260[iVar13] = -1;
																							Local_2026.f_603[iVar13] = unk_0x0A7322C6D0E1A985(func_396(Local_109.f_846[iVar7 /*13*/][iVar12], Local_2026.f_236), unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_384(iVar12)), 0, 0, 1);
																							unk_0xA539EDE8DA5BBC22(Local_2026.f_603[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_384(iVar12)), 0, 0, 1);
																							unk_0x8CE3D365F064F69E(Local_2026.f_603[iVar13], Var15 + func_383(iVar12, 0), 2, 1);
																							unk_0x9A97DC6DBC7B223D(Local_2026.f_603[iVar13], unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), unk_0xB897FCFCFA664B38(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
																						}
																					}
																					else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 585557868))
																					{
																						if (unk_0xE85F749F6D5C809E(Local_2026.f_603[iVar13]))
																						{
																							unk_0xE6451C2F193342C7(Local_2026.f_603[iVar13], 0, 1);
																							unk_0xA539EDE8DA5BBC22(Local_2026.f_603[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_384(iVar12)), 0, 0, 1);
																							unk_0x8CE3D365F064F69E(Local_2026.f_603[iVar13], Var15 + func_383(iVar12, 1), 2, 1);
																						}
																					}
																				}
																				else if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_28(iVar7), 3))
																				{
																					if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206))
																					{
																						if (!unk_0xE85F749F6D5C809E(Local_2026.f_603[iVar13]))
																						{
																							unk_0x9A97DC6DBC7B223D(Local_2026.f_603[iVar13], unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), unk_0xB897FCFCFA664B38(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
																						}
																					}
																					else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 585557868))
																					{
																						if (unk_0xE85F749F6D5C809E(Local_2026.f_603[iVar13]))
																						{
																							unk_0xE6451C2F193342C7(Local_2026.f_603[iVar13], 0, 1);
																							unk_0xA539EDE8DA5BBC22(Local_2026.f_603[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_384(iVar12)), 0, 0, 1);
																							unk_0x8CE3D365F064F69E(Local_2026.f_603[iVar13], Var15 + func_383(iVar12, 0), 2, 1);
																						}
																					}
																				}
																				else if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), func_58(), func_11(iVar7), 3))
																				{
																					if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206))
																					{
																						if (!unk_0xE85F749F6D5C809E(Local_2026.f_603[iVar13]))
																						{
																							unk_0x4BDA5AFD88C085EB(&(Local_2026.f_603[iVar13]));
																							Local_2026.f_260[iVar13] = -1;
																							Local_2026.f_603[iVar13] = unk_0x0A7322C6D0E1A985(func_396(Local_109.f_846[iVar7 /*13*/][iVar12], Local_2026.f_236), unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_384(iVar12)), 0, 0, 1);
																							unk_0xA539EDE8DA5BBC22(Local_2026.f_603[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_384(iVar12)), 0, 0, 1);
																							unk_0x8CE3D365F064F69E(Local_2026.f_603[iVar13], Var15 + func_383(iVar12, 0), 2, 1);
																							unk_0x9A97DC6DBC7B223D(Local_2026.f_603[iVar13], unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), unk_0xB897FCFCFA664B38(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
																						}
																					}
																					else if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 585557868))
																					{
																						if (unk_0xE85F749F6D5C809E(Local_2026.f_603[iVar13]))
																						{
																							unk_0xE6451C2F193342C7(Local_2026.f_603[iVar13], 0, 1);
																							unk_0xA539EDE8DA5BBC22(Local_2026.f_603[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_384(iVar12)), 0, 0, 1);
																							unk_0x8CE3D365F064F69E(Local_2026.f_603[iVar13], Var15 + func_383(iVar12, 1), 2, 1);
																						}
																					}
																				}
																				else if (unk_0xE85F749F6D5C809E(Local_2026.f_603[iVar13]))
																				{
																					unk_0xE6451C2F193342C7(Local_2026.f_603[iVar13], 0, 1);
																					unk_0xA539EDE8DA5BBC22(Local_2026.f_603[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_384(iVar12)), 0, 0, 1);
																					unk_0x8CE3D365F064F69E(Local_2026.f_603[iVar13], Var15 + func_383(iVar12, bVar25), 2, 1);
																				}
																			}
																		}
																		else if (unk_0xE85F749F6D5C809E(Local_2026.f_603[iVar13]))
																		{
																			unk_0xE6451C2F193342C7(Local_2026.f_603[iVar13], 0, 1);
																			unk_0xA539EDE8DA5BBC22(Local_2026.f_603[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_384(iVar12)), 0, 0, 1);
																			unk_0x8CE3D365F064F69E(Local_2026.f_603[iVar13], Var15 + func_383(iVar12, bVar25), 2, 1);
																		}
																	}
																	else if (Local_2026.f_260[iVar13] != -1)
																	{
																		if (!unk_0xE5965CDF24F93A9F(Local_2026.f_603[iVar13]))
																		{
																			iVar24 = Local_2026.f_260[iVar13];
																			if (!bVar25)
																			{
																				iVar24 = 0;
																			}
																			Local_2026.f_603[iVar13] = unk_0x0A7322C6D0E1A985(func_396(iVar24, Local_2026.f_236), Var8, 0, 0, 1);
																			if (((unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar7]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]))) && !unk_0x508CDC652F5361B5(Local_2026.f_603[iVar13])) && unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206))
																			{
																				unk_0x9A97DC6DBC7B223D(Local_2026.f_603[iVar13], unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), unk_0xB897FCFCFA664B38(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
																			}
																		}
																		else if (unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar7]) && !unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7])))
																		{
																			if (!unk_0x508CDC652F5361B5(Local_2026.f_603[iVar13]) && unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), -1345695206))
																			{
																				unk_0x9A97DC6DBC7B223D(Local_2026.f_603[iVar13], unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), unk_0xB897FCFCFA664B38(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
																			}
																			if (unk_0xD9E56EC8ED04E45E(unk_0x8AF984152F749D80(Local_109.f_1595[iVar7]), 585557868))
																			{
																				if (unk_0xE85F749F6D5C809E(Local_2026.f_603[iVar13]))
																				{
																					unk_0xE6451C2F193342C7(Local_2026.f_603[iVar13], 0, 1);
																					unk_0xA539EDE8DA5BBC22(Local_2026.f_603[iVar13], unk_0x6DB7FBD602C51670(func_70(iVar7), Var15.f_2, func_384(iVar12)), 0, 0, 1);
																					unk_0x8CE3D365F064F69E(Local_2026.f_603[iVar13], Var15 + func_383(iVar12, bVar25), 2, 1);
																				}
																			}
																		}
																	}
																}
																else if (iVar13 >= 0 && iVar13 < (11 * Local_2026.f_257))
																{
																	if (unk_0xE5965CDF24F93A9F(Local_2026.f_603[iVar13]))
																	{
																		unk_0x4BDA5AFD88C085EB(&(Local_2026.f_603[iVar13]));
																		Local_2026.f_260[iVar13] = -1;
																	}
																}
																iVar12++;
																iVar7++;
																iLocal_3670++;
																if (iLocal_3670 >= Local_2026.f_257)
																{
																	iLocal_3670 = 0;
																}
															}

Vector3 func_383(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 0f, 0f, 178.92f };
			break;
		
		case 1:
			Var0 = { 0f, 0f, -180f };
			break;
		
		case 2:
			Var0 = { 0f, 0f, -178.92f };
			break;
		
		case 3:
			Var0 = { 0f, 0f, -177.12f };
			break;
		
		case 4:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 5:
			Var0 = { 0f, 0f, 178.56f };
			break;
		
		case 6:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 7:
			Var0 = { 0f, 0f, 178.2f };
			break;
		
		case 8:
			Var0 = { 0f, 0f, -177.12f };
			break;
		
		case 9:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 10:
			Var0 = { 0f, 0f, 178.56f };
			break;
	}
	if (!bParam1)
	{
		Var0.f_0 = 180f;
	}
	return Var0;
}

Vector3 func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.0356f, 0.2105f, 0.94885f;
		
		case 1:
			return -0.0436f, 0.21205f, 0.948875f;
		
		case 2:
			return -0.0636f, 0.213825f, 0.9496f;
		
		case 3:
			return -0.0806f, 0.2137f, 0.950225f;
		
		case 4:
			return -0.1006f, 0.21125f, 0.950875f;
		
		case 5:
			return -0.1256f, 0.21505f, 0.951875f;
		
		case 6:
			return -0.1416f, 0.21305f, 0.953f;
		
		case 7:
			return -0.1656f, 0.21205f, 0.954025f;
		
		case 8:
			return -0.1836f, 0.21255f, 0.95495f;
		
		case 9:
			return -0.2076f, 0.21105f, 0.956025f;
		
		case 10:
			return -0.2246f, 0.21305f, 0.957f;
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_385(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		default:
	}
	return "";
}

Vector3 func_386(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 72f;
					
					case 1:
						return 0f, 0f, 64.8f;
					
					case 2:
						return 0f, 0f, 74.52f;
					
					case 3:
						return 0f, 0f, 72f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 12.96f;
					
					case 1:
						return 0f, 0f, 29.16f;
					
					case 2:
						return 0f, 0f, 32.04f;
					
					case 3:
						return 0f, 0f, 32.04f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -18.36f;
					
					case 1:
						return 0f, 0f, -18.72f;
					
					case 2:
						return 0f, 0f, -15.48f;
					
					case 3:
						return 0f, 0f, -18f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -79.2f;
					
					case 1:
						return 0f, 0f, -68.76f;
					
					case 2:
						return 0f, 0f, -57.6f;
					
					case 3:
						return 0f, 0f, -64.8f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -16.56f;
							
							case 1:
								return 0f, 0f, -22.32f;
							
							case 2:
								return 0f, 0f, -10.8f;
							
							case 3:
								return 0f, 0f, -9.72f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -69.12f;
							
							case 1:
								return 0f, 0f, -64.8f;
							
							case 2:
								return 0f, 0f, -58.68f;
							
							case 3:
								return 0f, 0f, -51.12f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -112.32f;
							
							case 1:
								return 0f, 0f, -108.36f;
							
							case 2:
								return 0f, 0f, -99.72f;
							
							case 3:
								return 0f, 0f, -102.6f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -155.88f;
							
							case 1:
								return 0f, 0f, -151.92f;
							
							case 2:
								return 0f, 0f, -147.24f;
							
							case 3:
								return 0f, 0f, -146.52f;
							
							default:
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 72f;
							
							case 1:
								return 0f, 0f, 64.8f;
							
							case 2:
								return 0f, 0f, 74.52f;
							
							case 3:
								return 0f, 0f, 72f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 12.96f;
							
							case 1:
								return 0f, 0f, 29.16f;
							
							case 2:
								return 0f, 0f, 32.04f;
							
							case 3:
								return 0f, 0f, 32.04f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -18.36f;
							
							case 1:
								return 0f, 0f, -18.72f;
							
							case 2:
								return 0f, 0f, -15.48f;
							
							case 3:
								return 0f, 0f, -18f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -79.2f;
							
							case 1:
								return 0f, 0f, -68.76f;
							
							case 2:
								return 0f, 0f, -57.6f;
							
							case 3:
								return 0f, 0f, -64.8f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_387(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	struct<3> Var1;
	
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.95f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.712625f, 0.170625f, 0f };
						break;
					
					case 1:
						Var1 = { 0.6658f, 0.218375f, 0f };
						break;
					
					case 2:
						Var1 = { 0.756775f, 0.292775f, 0f };
						break;
					
					case 3:
						Var1 = { 0.701875f, 0.3439f, 0f };
						break;
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.278125f, -0.2571f, 0f };
						break;
					
					case 1:
						Var1 = { 0.280375f, -0.190375f, 0f };
						break;
					
					case 2:
						Var1 = { 0.397775f, -0.208525f, 0f };
						break;
					
					case 3:
						Var1 = { 0.39715f, -0.1354f, 0f };
						break;
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.30305f, -0.2464f, 0f };
						break;
					
					case 1:
						Var1 = { -0.257975f, -0.19715f, 0f };
						break;
					
					case 2:
						Var1 = { -0.186575f, -0.2861f, 0f };
						break;
					
					case 3:
						Var1 = { -0.141675f, -0.237925f, 0f };
						break;
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.72855f, 0.17345f, 0f };
						break;
					
					case 1:
						Var1 = { -0.652825f, 0.177525f, 0f };
						break;
					
					case 2:
						Var1 = { -0.6783f, 0.0744f, 0f };
						break;
					
					case 3:
						Var1 = { -0.604425f, 0.082575f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.953f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.6931f, 0.1952f, 0f };
								break;
							
							case 1:
								Var1 = { 0.724925f, 0.26955f, 0f };
								break;
							
							case 2:
								Var1 = { 0.7374f, 0.349625f, 0f };
								break;
							
							case 3:
								Var1 = { 0.76415f, 0.419225f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.2827f, -0.227825f, 0f };
								break;
							
							case 1:
								Var1 = { 0.3605f, -0.1898f, 0f };
								break;
							
							case 2:
								Var1 = { 0.4309f, -0.16365f, 0f };
								break;
							
							case 3:
								Var1 = { 0.49275f, -0.111575f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.279425f, -0.2238f, 0f };
								break;
							
							case 1:
								Var1 = { -0.200775f, -0.25855f, 0f };
								break;
							
							case 2:
								Var1 = { -0.125775f, -0.26815f, 0f };
								break;
							
							case 3:
								Var1 = { -0.05615f, -0.29435f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.685925f, 0.173275f, 0f };
								break;
							
							case 1:
								Var1 = { -0.6568f, 0.092525f, 0f };
								break;
							
							case 2:
								Var1 = { -0.612875f, 0.033025f, 0f };
								break;
							
							case 3:
								Var1 = { -0.58465f, -0.0374f, 0f };
								break;
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.712625f, 0.170625f, 0f };
								break;
							
							case 1:
								Var1 = { 0.6658f, 0.218375f, 0f };
								break;
							
							case 2:
								Var1 = { 0.756775f, 0.292775f, 0f };
								break;
							
							case 3:
								Var1 = { 0.701875f, 0.3439f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.278125f, -0.2571f, 0f };
								break;
							
							case 1:
								Var1 = { 0.280375f, -0.190375f, 0f };
								break;
							
							case 2:
								Var1 = { 0.397775f, -0.208525f, 0f };
								break;
							
							case 3:
								Var1 = { 0.39715f, -0.1354f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.30305f, -0.2464f, 0f };
								break;
							
							case 1:
								Var1 = { -0.257975f, -0.19715f, 0f };
								break;
							
							case 2:
								Var1 = { -0.186575f, -0.2861f, 0f };
								break;
							
							case 3:
								Var1 = { -0.141675f, -0.237925f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.72855f, 0.17345f, 0f };
								break;
							
							case 1:
								Var1 = { -0.652825f, 0.177525f, 0f };
								break;
							
							case 2:
								Var1 = { -0.6783f, 0.0744f, 0f };
								break;
							
							case 3:
								Var1 = { -0.604425f, 0.082575f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	Var1.f_2 = fVar0;
	return Var1;
}

int func_388(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_chip_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_chip_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_plaq_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_plaq_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_plaq_10kdollar_st");
			}
		
		default:
	}
	return 0;
}

Vector3 func_389(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 69.12f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 67.8f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 66.6f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 70.44f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 70.84f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 67.88f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 69.56f };
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 22.11f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 22.32f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 20.8f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 19.8f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 19.44f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 26.28f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 22.68f };
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -21.43f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -20.16f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -16.92f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -23.4f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -21.24f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -23.76f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -19.44f };
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -67.03f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -69.12f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -64.44f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -67.68f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -63.72f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -68.4f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -64.44f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 68.57f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 67.52f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 67.76f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 67.04f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 68.84f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 65.96f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 67.76f };
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 22.11f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 22f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 24.44f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 21.08f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 25.96f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 26.16f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 28.76f };
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -14.04f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -15.48f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -16.56f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -15.84f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -16.92f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -14.4f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -14.28f };
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -67.03f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -67.6f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -69.4f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -69.04f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -68.68f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -66.16f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -63.28f };
						break;
				}
				break;
			}
	}
	if (bParam3)
	{
		Var0.f_2 = (Var0.f_2 + 90f);
	}
	return Var0;
}

Vector3 func_390(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0.5737f, 0.2376f, 0.948025f;
					
					case 1:
						return 0.562975f, 0.2523f, 0.94875f;
					
					case 2:
						return 0.553875f, 0.266325f, 0.94955f;
					
					case 3:
						return 0.5459f, 0.282075f, 0.9501f;
					
					case 4:
						return 0.536125f, 0.29645f, 0.95085f;
					
					case 5:
						return 0.524975f, 0.30975f, 0.9516f;
					
					case 6:
						return 0.515775f, 0.325325f, 0.95235f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0.2325f, -0.1082f, 0.94805f;
					
					case 1:
						return 0.23645f, -0.0918f, 0.949f;
					
					case 2:
						return 0.2401f, -0.074475f, 0.950225f;
					
					case 3:
						return 0.244625f, -0.057675f, 0.951125f;
					
					case 4:
						return 0.249675f, -0.041475f, 0.95205f;
					
					case 5:
						return 0.257575f, -0.0256f, 0.9532f;
					
					case 6:
						return 0.2601f, -0.008175f, 0.954375f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0.2359f, -0.1091f, 0.9483f;
					
					case 1:
						return -0.221025f, -0.100675f, 0.949f;
					
					case 2:
						return -0.20625f, -0.092875f, 0.949725f;
					
					case 3:
						return -0.193225f, -0.07985f, 0.950325f;
					
					case 4:
						return -0.1776f, -0.072f, 0.951025f;
					
					case 5:
						return -0.165f, -0.060025f, 0.951825f;
					
					case 6:
						return -0.14895f, -0.05155f, 0.95255f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0.5765f, 0.2229f, 0.9482f;
					
					case 1:
						return -0.558925f, 0.2197f, 0.949175f;
					
					case 2:
						return -0.5425f, 0.213025f, 0.9499f;
					
					case 3:
						return -0.525925f, 0.21105f, 0.95095f;
					
					case 4:
						return -0.509475f, 0.20535f, 0.9519f;
					
					case 5:
						return -0.491775f, 0.204075f, 0.952825f;
					
					case 6:
						return -0.4752f, 0.197525f, 0.9543f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0.6083f, 0.3523f, 0.94795f;
					
					case 1:
						return 0.598475f, 0.366475f, 0.948925f;
					
					case 2:
						return 0.589525f, 0.3807f, 0.94975f;
					
					case 3:
						return 0.58045f, 0.39435f, 0.950375f;
					
					case 4:
						return 0.571975f, 0.4092f, 0.951075f;
					
					case 5:
						return 0.5614f, 0.4237f, 0.951775f;
					
					case 6:
						return 0.554325f, 0.4402f, 0.952525f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0.3431f, -0.0527f, 0.94855f;
					
					case 1:
						return 0.348575f, -0.0348f, 0.949425f;
					
					case 2:
						return 0.35465f, -0.018825f, 0.9502f;
					
					case 3:
						return 0.3581f, -0.001625f, 0.95115f;
					
					case 4:
						return 0.36515f, 0.015275f, 0.952075f;
					
					case 5:
						return 0.368525f, 0.032475f, 0.95335f;
					
					case 6:
						return 0.373275f, 0.0506f, 0.9543f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0.116f, -0.1501f, 0.947875f;
					
					case 1:
						return -0.102725f, -0.13795f, 0.948525f;
					
					case 2:
						return -0.08975f, -0.12665f, 0.949175f;
					
					case 3:
						return -0.075025f, -0.1159f, 0.949875f;
					
					case 4:
						return -0.0614f, -0.104775f, 0.9507f;
					
					case 5:
						return -0.046275f, -0.095025f, 0.9516f;
					
					case 6:
						return -0.031425f, -0.0846f, 0.952675f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0.5205f, 0.1122f, 0.9478f;
					
					case 1:
						return -0.503175f, 0.108525f, 0.94865f;
					
					case 2:
						return -0.485125f, 0.10475f, 0.949175f;
					
					case 3:
						return -0.468275f, 0.099175f, 0.94995f;
					
					case 4:
						return -0.45155f, 0.09435f, 0.95085f;
					
					case 5:
						return -0.434475f, 0.089725f, 0.95145f;
					
					case 6:
						return -0.415875f, 0.0846f, 0.9523f;
					
					default:
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

char* func_391(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return " ---- ";
	}
	switch (iParam0)
	{
		case 1:
			return " A  C ";
		
		case 2:
			return " 2  C ";
		
		case 3:
			return " 3  C ";
		
		case 4:
			return " 4  C ";
		
		case 5:
			return " 5  C ";
		
		case 6:
			return " 6  C ";
		
		case 7:
			return " 7  C ";
		
		case 8:
			return " 8  C ";
		
		case 9:
			return " 9  C ";
		
		case 10:
			return " 10 C ";
		
		case 11:
			return " J  C ";
		
		case 12:
			return " Q  C ";
		
		case 13:
			return " K  C ";
		
		case 14:
			return " A  D ";
		
		case 15:
			return " 2  D ";
		
		case 16:
			return " 3  D ";
		
		case 17:
			return " 4  D ";
		
		case 18:
			return " 5  D ";
		
		case 19:
			return " 6  D ";
		
		case 20:
			return " 7  D ";
		
		case 21:
			return " 8  D ";
		
		case 22:
			return " 9  D ";
		
		case 23:
			return " 10 D ";
		
		case 24:
			return " J  D ";
		
		case 25:
			return " Q  D ";
		
		case 26:
			return " K  D ";
		
		case 27:
			return " A  H ";
		
		case 28:
			return " 2  H ";
		
		case 29:
			return " 3  H ";
		
		case 30:
			return " 4  H ";
		
		case 31:
			return " 5  H ";
		
		case 32:
			return " 6  H ";
		
		case 33:
			return " 7  H ";
		
		case 34:
			return " 8  H ";
		
		case 35:
			return " 9  H ";
		
		case 36:
			return " 10 H ";
		
		case 37:
			return " J  H ";
		
		case 38:
			return " Q  H ";
		
		case 39:
			return " K  H ";
		
		case 40:
			return " A  S ";
		
		case 41:
			return " 2  S ";
		
		case 42:
			return " 3  S ";
		
		case 43:
			return " 4  S ";
		
		case 44:
			return " 5  S ";
		
		case 45:
			return " 6  S ";
		
		case 46:
			return " 7  S ";
		
		case 47:
			return " 8  S ";
		
		case 48:
			return " 9  S ";
		
		case 49:
			return " 10 S ";
		
		case 50:
			return " J  S ";
		
		case 51:
			return " Q  S ";
		
		case 52:
			return " K  S ";
		
		default:
	}
	return "";
}

int func_392(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 4 * 4 + iParam1 * 4) + iParam2);
}

int func_393(int iParam0)
{
	switch (unk_0xF34EE736CF047844((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			return BitTest(Local_2026.f_530, (iParam0 % 32));
		
		case 1:
			return BitTest(Local_2026.f_531, (iParam0 % 32));
		
		case 2:
			return BitTest(Local_2026.f_532, (iParam0 % 32));
		
		case 3:
			return BitTest(Local_2026.f_533, (iParam0 % 32));
		
		case 4:
			return BitTest(Local_2026.f_534, (iParam0 % 32));
		
		case 5:
			return BitTest(Local_2026.f_535, (iParam0 % 32));
		
		case 6:
			return BitTest(Local_2026.f_536, (iParam0 % 32));
		
		default:
	}
	return 0;
}

void func_394(int iParam0)
{
	switch (unk_0xF34EE736CF047844((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			unk_0xB0550BC91B0159D6(&(Local_2026.f_530), (iParam0 % 32));
			break;
		
		case 1:
			unk_0xB0550BC91B0159D6(&(Local_2026.f_531), (iParam0 % 32));
			break;
		
		case 2:
			unk_0xB0550BC91B0159D6(&(Local_2026.f_532), (iParam0 % 32));
			break;
		
		case 3:
			unk_0xB0550BC91B0159D6(&(Local_2026.f_533), (iParam0 % 32));
			break;
		
		case 4:
			unk_0xB0550BC91B0159D6(&(Local_2026.f_534), (iParam0 % 32));
			break;
		
		case 5:
			unk_0xB0550BC91B0159D6(&(Local_2026.f_535), (iParam0 % 32));
			break;
		
		case 6:
			unk_0xB0550BC91B0159D6(&(Local_2026.f_536), (iParam0 % 32));
			break;
	}
}

void func_395(int iParam0)
{
	switch (unk_0xF34EE736CF047844((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			unk_0xCED9E32812D6C7C7(&(Local_2026.f_530), (iParam0 % 32));
			break;
		
		case 1:
			unk_0xCED9E32812D6C7C7(&(Local_2026.f_531), (iParam0 % 32));
			break;
		
		case 2:
			unk_0xCED9E32812D6C7C7(&(Local_2026.f_532), (iParam0 % 32));
			break;
		
		case 3:
			unk_0xCED9E32812D6C7C7(&(Local_2026.f_533), (iParam0 % 32));
			break;
		
		case 4:
			unk_0xCED9E32812D6C7C7(&(Local_2026.f_534), (iParam0 % 32));
			break;
		
		case 5:
			unk_0xCED9E32812D6C7C7(&(Local_2026.f_535), (iParam0 % 32));
			break;
		
		case 6:
			unk_0xCED9E32812D6C7C7(&(Local_2026.f_536), (iParam0 % 32));
			break;
	}
}

int func_396(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return unk_0x2E87280918B16506("vw_prop_vw_club_char_a_a");
			
			case 2:
				return unk_0x2E87280918B16506("vw_prop_vw_club_char_02a");
			
			case 3:
				return unk_0x2E87280918B16506("vw_prop_vw_club_char_03a");
			
			case 4:
				return unk_0x2E87280918B16506("vw_prop_vw_club_char_04a");
			
			case 5:
				return unk_0x2E87280918B16506("vw_prop_vw_club_char_05a");
			
			case 6:
				return unk_0x2E87280918B16506("vw_prop_vw_club_char_06a");
			
			case 7:
				return unk_0x2E87280918B16506("vw_prop_vw_club_char_07a");
			
			case 8:
				return unk_0x2E87280918B16506("vw_prop_vw_club_char_08a");
			
			case 9:
				return unk_0x2E87280918B16506("vw_prop_vw_club_char_09a");
			
			case 10:
				return unk_0x2E87280918B16506("vw_prop_vw_club_char_10a");
			
			case 11:
				return unk_0x2E87280918B16506("vw_prop_vw_club_char_j_a");
			
			case 12:
				return unk_0x2E87280918B16506("vw_prop_vw_club_char_q_a");
			
			case 13:
				return unk_0x2E87280918B16506("vw_prop_vw_club_char_k_a");
			
			case 14:
				return unk_0x2E87280918B16506("vw_prop_vw_dia_char_a_a");
			
			case 15:
				return unk_0x2E87280918B16506("vw_prop_vw_dia_char_02a");
			
			case 16:
				return unk_0x2E87280918B16506("vw_prop_vw_dia_char_03a");
			
			case 17:
				return unk_0x2E87280918B16506("vw_prop_vw_dia_char_04a");
			
			case 18:
				return unk_0x2E87280918B16506("vw_prop_vw_dia_char_05a");
			
			case 19:
				return unk_0x2E87280918B16506("vw_prop_vw_dia_char_06a");
			
			case 20:
				return unk_0x2E87280918B16506("vw_prop_vw_dia_char_07a");
			
			case 21:
				return unk_0x2E87280918B16506("vw_prop_vw_dia_char_08a");
			
			case 22:
				return unk_0x2E87280918B16506("vw_prop_vw_dia_char_09a");
			
			case 23:
				return unk_0x2E87280918B16506("vw_prop_vw_dia_char_10a");
			
			case 24:
				return unk_0x2E87280918B16506("vw_prop_vw_dia_char_j_a");
			
			case 25:
				return unk_0x2E87280918B16506("vw_prop_vw_dia_char_q_a");
			
			case 26:
				return unk_0x2E87280918B16506("vw_prop_vw_dia_char_k_a");
			
			case 27:
				return unk_0x2E87280918B16506("vw_prop_vw_hrt_char_a_a");
			
			case 28:
				return unk_0x2E87280918B16506("vw_prop_vw_hrt_char_02a");
			
			case 29:
				return unk_0x2E87280918B16506("vw_prop_vw_hrt_char_03a");
			
			case 30:
				return unk_0x2E87280918B16506("vw_prop_vw_hrt_char_04a");
			
			case 31:
				return unk_0x2E87280918B16506("vw_prop_vw_hrt_char_05a");
			
			case 32:
				return unk_0x2E87280918B16506("vw_prop_vw_hrt_char_06a");
			
			case 33:
				return unk_0x2E87280918B16506("vw_prop_vw_hrt_char_07a");
			
			case 34:
				return unk_0x2E87280918B16506("vw_prop_vw_hrt_char_08a");
			
			case 35:
				return unk_0x2E87280918B16506("vw_prop_vw_hrt_char_09a");
			
			case 36:
				return unk_0x2E87280918B16506("vw_prop_vw_hrt_char_10a");
			
			case 37:
				return unk_0x2E87280918B16506("vw_prop_vw_hrt_char_j_a");
			
			case 38:
				return unk_0x2E87280918B16506("vw_prop_vw_hrt_char_q_a");
			
			case 39:
				return unk_0x2E87280918B16506("vw_prop_vw_hrt_char_k_a");
			
			case 40:
				return unk_0x2E87280918B16506("vw_prop_vw_spd_char_a_a");
			
			case 41:
				return unk_0x2E87280918B16506("vw_prop_vw_spd_char_02a");
			
			case 42:
				return unk_0x2E87280918B16506("vw_prop_vw_spd_char_03a");
			
			case 43:
				return unk_0x2E87280918B16506("vw_prop_vw_spd_char_04a");
			
			case 44:
				return unk_0x2E87280918B16506("vw_prop_vw_spd_char_05a");
			
			case 45:
				return unk_0x2E87280918B16506("vw_prop_vw_spd_char_06a");
			
			case 46:
				return unk_0x2E87280918B16506("vw_prop_vw_spd_char_07a");
			
			case 47:
				return unk_0x2E87280918B16506("vw_prop_vw_spd_char_08a");
			
			case 48:
				return unk_0x2E87280918B16506("vw_prop_vw_spd_char_09a");
			
			case 49:
				return unk_0x2E87280918B16506("vw_prop_vw_spd_char_10a");
			
			case 50:
				return unk_0x2E87280918B16506("vw_prop_vw_spd_char_j_a");
			
			case 51:
				return unk_0x2E87280918B16506("vw_prop_vw_spd_char_q_a");
			
			case 52:
				return unk_0x2E87280918B16506("vw_prop_vw_spd_char_k_a");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return unk_0x2E87280918B16506("vw_prop_cas_card_club_ace");
			
			case 2:
				return unk_0x2E87280918B16506("vw_prop_cas_card_club_02");
			
			case 3:
				return unk_0x2E87280918B16506("vw_prop_cas_card_club_03");
			
			case 4:
				return unk_0x2E87280918B16506("vw_prop_cas_card_club_04");
			
			case 5:
				return unk_0x2E87280918B16506("vw_prop_cas_card_club_05");
			
			case 6:
				return unk_0x2E87280918B16506("vw_prop_cas_card_club_06");
			
			case 7:
				return unk_0x2E87280918B16506("vw_prop_cas_card_club_07");
			
			case 8:
				return unk_0x2E87280918B16506("vw_prop_cas_card_club_08");
			
			case 9:
				return unk_0x2E87280918B16506("vw_prop_cas_card_club_09");
			
			case 10:
				return unk_0x2E87280918B16506("vw_prop_cas_card_club_10");
			
			case 11:
				return unk_0x2E87280918B16506("vw_prop_cas_card_club_jack");
			
			case 12:
				return unk_0x2E87280918B16506("vw_prop_cas_card_club_queen");
			
			case 13:
				return unk_0x2E87280918B16506("vw_prop_cas_card_club_king");
			
			case 14:
				return unk_0x2E87280918B16506("vw_prop_cas_card_dia_ace");
			
			case 15:
				return unk_0x2E87280918B16506("vw_prop_cas_card_dia_02");
			
			case 16:
				return unk_0x2E87280918B16506("vw_prop_cas_card_dia_03");
			
			case 17:
				return unk_0x2E87280918B16506("vw_prop_cas_card_dia_04");
			
			case 18:
				return unk_0x2E87280918B16506("vw_prop_cas_card_dia_05");
			
			case 19:
				return unk_0x2E87280918B16506("vw_prop_cas_card_dia_06");
			
			case 20:
				return unk_0x2E87280918B16506("vw_prop_cas_card_dia_07");
			
			case 21:
				return unk_0x2E87280918B16506("vw_prop_cas_card_dia_08");
			
			case 22:
				return unk_0x2E87280918B16506("vw_prop_cas_card_dia_09");
			
			case 23:
				return unk_0x2E87280918B16506("vw_prop_cas_card_dia_10");
			
			case 24:
				return unk_0x2E87280918B16506("vw_prop_cas_card_dia_jack");
			
			case 25:
				return unk_0x2E87280918B16506("vw_prop_cas_card_dia_queen");
			
			case 26:
				return unk_0x2E87280918B16506("vw_prop_cas_card_dia_king");
			
			case 27:
				return unk_0x2E87280918B16506("vw_prop_cas_card_hrt_ace");
			
			case 28:
				return unk_0x2E87280918B16506("vw_prop_cas_card_hrt_02");
			
			case 29:
				return unk_0x2E87280918B16506("vw_prop_cas_card_hrt_03");
			
			case 30:
				return unk_0x2E87280918B16506("vw_prop_cas_card_hrt_04");
			
			case 31:
				return unk_0x2E87280918B16506("vw_prop_cas_card_hrt_05");
			
			case 32:
				return unk_0x2E87280918B16506("vw_prop_cas_card_hrt_06");
			
			case 33:
				return unk_0x2E87280918B16506("vw_prop_cas_card_hrt_07");
			
			case 34:
				return unk_0x2E87280918B16506("vw_prop_cas_card_hrt_08");
			
			case 35:
				return unk_0x2E87280918B16506("vw_prop_cas_card_hrt_09");
			
			case 36:
				return unk_0x2E87280918B16506("vw_prop_cas_card_hrt_10");
			
			case 37:
				return unk_0x2E87280918B16506("vw_prop_cas_card_hrt_jack");
			
			case 38:
				return unk_0x2E87280918B16506("vw_prop_cas_card_hrt_queen");
			
			case 39:
				return unk_0x2E87280918B16506("vw_prop_cas_card_hrt_king");
			
			case 40:
				return unk_0x2E87280918B16506("vw_prop_cas_card_spd_ace");
			
			case 41:
				return unk_0x2E87280918B16506("vw_prop_cas_card_spd_02");
			
			case 42:
				return unk_0x2E87280918B16506("vw_prop_cas_card_spd_03");
			
			case 43:
				return unk_0x2E87280918B16506("vw_prop_cas_card_spd_04");
			
			case 44:
				return unk_0x2E87280918B16506("vw_prop_cas_card_spd_05");
			
			case 45:
				return unk_0x2E87280918B16506("vw_prop_cas_card_spd_06");
			
			case 46:
				return unk_0x2E87280918B16506("vw_prop_cas_card_spd_07");
			
			case 47:
				return unk_0x2E87280918B16506("vw_prop_cas_card_spd_08");
			
			case 48:
				return unk_0x2E87280918B16506("vw_prop_cas_card_spd_09");
			
			case 49:
				return unk_0x2E87280918B16506("vw_prop_cas_card_spd_10");
			
			case 50:
				return unk_0x2E87280918B16506("vw_prop_cas_card_spd_jack");
			
			case 51:
				return unk_0x2E87280918B16506("vw_prop_cas_card_spd_queen");
			
			case 52:
				return unk_0x2E87280918B16506("vw_prop_cas_card_spd_king");
			}
		
		default:
	}
	if (bParam1)
	{
		return unk_0x2E87280918B16506("vw_prop_vw_jo_char_01a");
	}
	return unk_0x2E87280918B16506("vw_prop_casino_cards_single");
}

void func_397()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		uVar1 = func_398(iVar0);
		unk_0xF1A23B343DFEDFD0(uVar1);
		iVar0++;
	}
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("vw_prop_chip_10dollar_x1");
		
		case 1:
			return joaat("vw_prop_chip_50dollar_x1");
		
		case 2:
			return joaat("vw_prop_chip_100dollar_x1");
		
		case 3:
			return joaat("vw_prop_chip_500dollar_x1");
		
		case 4:
			return joaat("vw_prop_chip_1kdollar_x1");
		
		case 5:
			return joaat("vw_prop_chip_5kdollar_x1");
		
		case 6:
			return joaat("vw_prop_chip_10kdollar_x1");
		
		case 7:
			return joaat("vw_prop_chip_10dollar_st");
		
		case 8:
			return joaat("vw_prop_chip_50dollar_st");
		
		case 9:
			return joaat("vw_prop_chip_100dollar_st");
		
		case 10:
			return joaat("vw_prop_chip_500dollar_st");
		
		case 11:
			return joaat("vw_prop_chip_1kdollar_st");
		
		case 12:
			return joaat("vw_prop_chip_5kdollar_st");
		
		case 13:
			return joaat("vw_prop_chip_10kdollar_st");
		
		case 14:
			return joaat("vw_prop_plaq_5kdollar_x1");
		
		case 15:
			return joaat("vw_prop_plaq_5kdollar_st");
		
		case 16:
			return joaat("vw_prop_plaq_10kdollar_x1");
		
		case 17:
			return joaat("vw_prop_plaq_10kdollar_st");
		
		default:
	}
	return 0;
}

int func_399()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_398(iVar0);
		unk_0xD69A0C3662175E68(iVar1);
		if (!unk_0x0152AA00FA3130F1(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_400()
{
	return BitTest(Global_1946250.f_6, 12);
}

int func_401()
{
	return func_402(8251, -1, 0);
}

int func_402(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2826809[iParam0 /*3*/][func_403(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_403(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

void func_404()
{
	if (Local_2026.f_257 == 1)
	{
		if (!unk_0xE5965CDF24F93A9F(uLocal_3681))
		{
			if (func_421() != func_420())
			{
				iLocal_3681 = unk_0x87A467676BDF8C35(func_70(0), 1f, func_218(Global_2689235[func_421() /*453*/].f_447), 0, 0, 0);
			}
		}
		else if (func_421() != func_420() && unk_0xA829C9A2767AC8EF())
		{
			if (unk_0x873082E7F40DB44C(iLocal_3681) != func_362(func_421()))
			{
				unk_0x71B42D724F2DB164(iLocal_3681, func_362(func_421()));
			}
		}
	}
	else
	{
		if (!unk_0xE5965CDF24F93A9F(uLocal_3682))
		{
			iLocal_3682 = unk_0x87A467676BDF8C35(1129.406f, 262.3578f, -52.041f, 1f, joaat("vw_prop_casino_blckjack_01b"), 0, 0, 0);
		}
		else if (unk_0x873082E7F40DB44C(iLocal_3682) != 3)
		{
			unk_0x71B42D724F2DB164(iLocal_3682, 3);
		}
		if (!unk_0xE5965CDF24F93A9F(uLocal_3683))
		{
			iLocal_3683 = unk_0x87A467676BDF8C35(1144.429f, 247.3352f, -52.041f, 1f, joaat("vw_prop_casino_blckjack_01b"), 0, 0, 0);
		}
		else if (unk_0xE5965CDF24F93A9F(iLocal_3683) && unk_0x873082E7F40DB44C(iLocal_3683) != 3)
		{
			unk_0x71B42D724F2DB164(iLocal_3683, 3);
		}
	}
}

void func_405()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2026.f_257)
	{
		if (!unk_0xE5965CDF24F93A9F(uLocal_3662[iVar0]))
		{
			func_406(iVar0);
		}
		iVar0++;
	}
}

void func_406(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (Local_2026.f_236)
	{
		iVar0 = joaat("vw_prop_vw_jo_char_01a");
	}
	else
	{
		iVar0 = joaat("vw_prop_casino_cards_single");
	}
	unk_0xD69A0C3662175E68(iVar0);
	if (!unk_0x0152AA00FA3130F1(iVar0))
	{
		return;
	}
	if (!unk_0xE5965CDF24F93A9F(uLocal_3662[iParam0]))
	{
		uVar1 = unk_0x0A7322C6D0E1A985(iVar0, func_408(iParam0), 0, 0, 1);
		unk_0xF1A23B343DFEDFD0(iVar0);
		unk_0xA539EDE8DA5BBC22(uVar1, func_408(iParam0), 0, 0, 1);
		unk_0x8CE3D365F064F69E(iVar1, func_407(iParam0), 2, 1);
		unk_0x5C65DDDC219B3AA5(iVar1, true);
		uLocal_3662[iParam0] = iVar1;
	}
}

Vector3 func_407(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 164.52f, 11.5f };
	return Vector(func_69(iParam0), 0f, 0f) + Var0;
}

Vector3 func_408(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0.526f, 0.571f, 0.963f };
	return unk_0x6DB7FBD602C51670(func_70(iParam0), func_69(iParam0), Var0);
}

int func_409()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		uVar2 = func_396(iVar1, Local_2026.f_236);
		unk_0xD69A0C3662175E68(uVar2);
		if (!unk_0x0152AA00FA3130F1(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_410()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2026.f_257)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_3662[iVar0]))
		{
			unk_0x4BDA5AFD88C085EB(&(uLocal_3662[iVar0]));
		}
		iVar0++;
	}
}

void func_411()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		uVar2 = func_396(iVar1, Local_2026.f_236);
		unk_0xF1A23B343DFEDFD0(uVar2);
		iVar0++;
	}
}

void func_412()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_2026.f_257)
	{
		if (!unk_0x90F6E2F6488B98BA(Local_109.f_1595[iVar0]))
		{
		}
		else
		{
			uVar1 = unk_0x8AF984152F749D80(Local_109.f_1595[iVar0]);
			if (func_414(uVar1))
			{
				if (func_413(iVar0))
				{
					unk_0x94A6586AEE4BB68E(uVar1, 0, 1);
				}
				else
				{
					unk_0x94A6586AEE4BB68E(uVar1, 1, 0);
				}
			}
		}
		iVar0++;
	}
}

int func_413(int iParam0)
{
	if (BitTest(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_4, 5) || BitTest(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_4, 3))
	{
		return 0;
	}
	if (BitTest(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_4, 2))
	{
		if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_414(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_415()
{
	if (unk_0x9315DBF7D972F07A() && unk_0x54E30A65F4FA4962())
	{
		return 1;
	}
	return 0;
}

int func_416(int iParam0)
{
	if (func_417(iParam0) != func_420())
	{
		return func_417(iParam0) == func_212(iParam0);
	}
	return 0;
}

int func_417(int iParam0)
{
	return Global_1892703[iParam0 /*599*/].f_10.f_35;
}

int func_418()
{
	return func_419(unk_0x9E2D6C50374FCFA9());
}

var func_419(int iParam0)
{
	return unk_0xF6CF013E72C680B4(Global_2689235[iParam0 /*453*/].f_318.f_3, 28, 31);
}

int func_420()
{
	return -1;
}

int func_421()
{
	return func_422(unk_0x9E2D6C50374FCFA9());
}

int func_422(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_420())
	{
		return iParam0;
	}
	if (func_424(iParam0) != -1)
	{
		iVar0 = func_423(func_424(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_315(iParam0, 0))
			{
				return func_212(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_420();
		}
		return Global_2689235[iParam0 /*453*/].f_318.f_9;
	}
	return func_420();
}

int func_423(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_424(int iParam0)
{
	if (iParam0 != func_420())
	{
		if (func_20(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
		else if (((Global_1575058 || Global_2667225.f_2680) && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_20(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
	}
	return -1;
}

int func_425(int iParam0)
{
	if (iParam0 != func_420() && func_20(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 4);
	}
	return 0;
}

int func_426(int iParam0)
{
	if (iParam0 != func_420())
	{
		if (func_20(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_423(Global_2689235[iParam0 /*453*/].f_318.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_427(int iParam0)
{
	if (iParam0 != func_420())
	{
		if (func_20(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_423(Global_2689235[iParam0 /*453*/].f_318.f_6) == 14;
			}
		}
	}
	return 0;
}

var func_428()
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_429()
{
	if (Local_2026.f_1 > 2)
	{
		if (Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4 > -1)
		{
			Local_3613.f_9 = Local_109.f_1570[Local_1769[unk_0x9E2D6C50374FCFA9() /*8*/].f_4];
		}
		Local_3613.f_18 = func_415();
		Local_3613.f_19 = func_192();
		Local_3613.f_17 = func_190(&uLocal_3609, 0, 0);
		Local_3613.f_7 = func_401();
		if (Global_262145.f_26814)
		{
			unk_0xCF03DFE4022CD1AA(&Local_3613);
		}
	}
	if (unk_0xA37204C64473B324("DLC_VW_Casino_Table_Games"))
	{
		unk_0x0AF8D3A06BB92903("DLC_VW_Casino_Table_Games");
	}
	if (unk_0xA37204C64473B324("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		unk_0x0AF8D3A06BB92903("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_375(0);
	func_411();
	func_397();
	func_432();
	func_431();
	func_410();
	if (unk_0xE5965CDF24F93A9F(Local_2026.f_537))
	{
		unk_0x4BDA5AFD88C085EB(&(Local_2026.f_537));
	}
	if (Local_2026.f_1 > 0)
	{
		unk_0xAFC1FBF3F6AE7B9A(func_58());
		unk_0xAFC1FBF3F6AE7B9A(func_72());
		unk_0xAFC1FBF3F6AE7B9A(func_88());
		unk_0xAFC1FBF3F6AE7B9A(func_216());
	}
	Global_1966107 = 0;
	func_430();
}

void func_430()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_431()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (16 * Local_2026.f_257);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (unk_0xE5965CDF24F93A9F(Local_2026.f_538[iVar1]))
		{
			unk_0x4BDA5AFD88C085EB(&(Local_2026.f_538[iVar1]));
		}
		iVar1++;
	}
}

void func_432()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (11 * Local_2026.f_257);
	iVar1 = (56 * Local_2026.f_257);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (unk_0xE5965CDF24F93A9F(Local_2026.f_648[iVar2]))
		{
			unk_0x4BDA5AFD88C085EB(&(Local_2026.f_648[iVar2]));
			Local_2026.f_305[iVar2] = -1;
			func_394(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (unk_0xE5965CDF24F93A9F(Local_2026.f_603[iVar2]))
		{
			unk_0x4BDA5AFD88C085EB(&(Local_2026.f_603[iVar2]));
			Local_2026.f_260[iVar2] = -1;
		}
		iVar2++;
	}
}

int func_433()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_440())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_439())
	{
		return 1;
	}
	if (func_438(159))
	{
		if (!func_437())
		{
			return 1;
		}
	}
	if (func_438(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_434() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_434()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_434()
{
	switch (func_436())
	{
		case 0:
			return func_435();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_435()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_436()
{
	return Global_31959;
}

bool func_437()
{
	return Global_2714762.f_698;
}

int func_438(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_439()
{
	return Global_2725403;
}

bool func_440()
{
	return Global_2714762.f_693;
}

void func_441()
{
	int iVar0;
	int iVar1;
	
	if (Global_1966099)
	{
		Global_1966099 = 0;
	}
	if (func_426(unk_0x9E2D6C50374FCFA9()) && func_421() != func_420())
	{
		if (BitTest(Global_2689235[func_421() /*453*/].f_318.f_4, 4))
		{
			Local_2026.f_236 = 1;
		}
		Global_1966109 = Global_2689235[func_421() /*453*/].f_447;
	}
	while (!(Global_2788828 != -1 || func_426(unk_0x9E2D6C50374FCFA9())))
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			func_429();
		}
		if (func_433())
		{
			func_429();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	iVar0 = -1;
	if (func_426(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = func_445();
	}
	unk_0xD9B114A8D3A8319F(32, 0, iVar0);
	func_443(0, -1, 0);
	unk_0x21F2B09183F31D02(&Local_109, 1660, 0);
	unk_0x7157B1051528D729(&Local_1769, 257, 0);
	if (func_426(unk_0x9E2D6C50374FCFA9()))
	{
		Local_2026.f_257 = 1;
		unk_0x597076E4DA5FF2C8(1);
	}
	else
	{
		unk_0x597076E4DA5FF2C8(3);
	}
	if (!func_442())
	{
		func_429();
	}
	if (unk_0x9315DBF7D972F07A())
	{
		unk_0x2C07CBAFAC54A645(0);
	}
	else
	{
		func_429();
	}
	if (unk_0x54E30A65F4FA4962())
	{
		if (func_426(unk_0x9E2D6C50374FCFA9()))
		{
			Local_109.f_1550[0] = unk_0x5853B15F78E1A265(0, 14);
		}
		else
		{
			Local_109.f_1550[0] = Global_2788842[0];
			Local_109.f_1550[1] = Global_2788842[1];
			Local_109.f_1550[2] = Global_2788842[2];
			Local_109.f_1550[3] = Global_2788842[3];
		}
	}
	Global_1966107 = 1;
	iVar1 = 0;
	while (iVar1 < 44)
	{
		Local_2026.f_260[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 224)
	{
		Local_2026.f_305[iVar1] = -1;
		func_394(iVar1);
		iVar1++;
	}
}

int func_442()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x9315DBF7D972F07A())
		{
			return 0;
		}
		if (unk_0x72FEF2581032D369())
		{
			return 1;
		}
		if (func_440())
		{
			return 0;
		}
		if (func_438(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_443(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_430();
			}
			else
			{
				return 0;
			}
		}
		if (!func_444(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_430();
					}
					else
					{
						return 0;
					}
				}
				if (func_440())
				{
					if (!bParam2)
					{
						func_430();
					}
					else
					{
						return 0;
					}
				}
				if (func_438(157))
				{
					if (!bParam2)
					{
						func_430();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xDB51AF48ABE62D4D())
			{
				if (!bParam2)
				{
					func_430();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x0EEB2C2CA48FB650();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (!bParam2)
			{
				func_430();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xDB51AF48ABE62D4D())
	{
		if (!bParam2)
		{
			func_430();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_444(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

int func_445()
{
	var uVar0;
	
	uVar0 = Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_7;
	return uVar0;
}

