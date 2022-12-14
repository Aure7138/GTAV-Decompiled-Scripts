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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_33[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_47 = 0;
	char* sLocal_48[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	float fLocal_114 = 0f;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	char cLocal_145[16] = "";
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
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
	iLocal_59 = 1;
	bLocal_62 = true;
	bLocal_63 = true;
	fLocal_73 = 0f;
	fLocal_74 = 172f;
	fLocal_77 = 0.7f;
	iLocal_137 = 1200;
	iLocal_138 = 1200;
	iLocal_139 = 166;
	fLocal_157 = 0.5f;
	fLocal_158 = 0.85f;
	fLocal_159 = 0.5f;
	fLocal_160 = -0.25f;
	fLocal_161 = 0.25f;
	fLocal_162 = 0.3f;
	fLocal_163 = 0.3f;
	fLocal_164 = 0.075f;
	unk_0x389D5B1C24A046B5();
	if (unk_0x1CD355F775EE640C() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_174())
	{
		Global_4541021 = 99;
		Global_4541022 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_4541021 = 0;
		Global_4541022 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_33[0] = "No_Border";
	sLocal_33[1] = "frame1";
	sLocal_33[2] = "frame2";
	sLocal_33[3] = "frame3";
	sLocal_33[4] = "frame4";
	sLocal_33[5] = "frame5";
	sLocal_33[6] = "frame6";
	sLocal_33[7] = "frame7";
	sLocal_33[8] = "frame8";
	sLocal_33[9] = "frame9";
	sLocal_33[10] = "frame10";
	sLocal_33[11] = "frame11";
	sLocal_33[12] = "frame12";
	sLocal_48[0] = "No_Expression";
	sLocal_48[1] = "mood_Aiming_1";
	sLocal_48[2] = "mood_Happy_1";
	sLocal_48[3] = "mood_smug_1";
	sLocal_48[4] = "mood_Injured_1";
	sLocal_48[5] = "mood_sulk_1";
	sLocal_48[6] = "mood_Angry_1";
	func_173();
	if (func_172(1, 1, !iLocal_64, 1))
	{
		iLocal_64 = 1;
	}
	func_171();
	iLocal_112 = unk_0x9F2C1BA4F2BF5CF8();
	if (Global_20328 == 0)
	{
		fLocal_96 = 0.207f;
		fLocal_97 = 0.158f;
		fLocal_98 = 0.207f;
		fLocal_99 = 0.335f;
	}
	else
	{
		fLocal_96 = 0.24f;
		fLocal_97 = 0.258f;
		fLocal_98 = 0.24f;
		fLocal_99 = 0.435f;
	}
	Global_22758 = 0;
	Global_22759 = 0;
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (unk_0x530BAFF86C1287AD(unk_0xC1A5EC5C986B98AD()))
		{
			Global_22758 = 1;
		}
		if (unk_0xFC47CA8A14619F36())
		{
			Global_22758 = 1;
		}
		if (unk_0xFBD273FDBCF0C5BD(unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD()), 0))
		{
			Global_22758 = 1;
		}
		if (unk_0x97247A0CAE4CEFB6(unk_0xC1A5EC5C986B98AD(), 78, 1))
		{
			Global_22758 = 1;
		}
		if (unk_0x27368BFBD4421C85(unk_0xC1A5EC5C986B98AD()))
		{
			Global_22758 = 1;
		}
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_22758 = 1;
			}
			uLocal_149 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if ((((unk_0x504B9BB48D41C264(uLocal_149) == joaat("rhino") || unk_0x504B9BB48D41C264(iLocal_149) == joaat("cutter")) || unk_0x504B9BB48D41C264(iLocal_149) == joaat("submersible")) || unk_0x504B9BB48D41C264(iLocal_149) == joaat("khanjali")) || (unk_0x504B9BB48D41C264(iLocal_149) == joaat("barrage") && unk_0xC78C3E6F7A5988D9(iLocal_149, func_170(unk_0xC1A5EC5C986B98AD(), 1))))
			{
				Global_22758 = 1;
			}
			else if (unk_0xA66E176E5772E965(iLocal_149, -1, 0) == unk_0xC1A5EC5C986B98AD())
			{
				if (unk_0x38B6CF1EE3FC9BC1(iLocal_149) > 0f)
				{
					if (!Global_78558)
					{
						if (!func_169(0))
						{
							unk_0xCFAA9546D1402590(unk_0xC1A5EC5C986B98AD(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_78558)
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0xBED533B930EE6D8E(unk_0x93E99A2DBCBA9CFA(), 0);
		}
	}
	unk_0x061B1200C95204CB(&Global_8253, 21);
	func_168(0);
	unk_0xECDAB41968FF21A8(&Global_8253, 17);
	if (Global_20325 == 0)
	{
		func_167();
	}
	else
	{
		uLocal_140 = unk_0x2B4645565204EA06("camera_gallery");
		uLocal_141 = unk_0x2B4645565204EA06("instructional_buttons");
		while (!unk_0x5FAF55B1F052A2E6(uLocal_140) || !unk_0x5FAF55B1F052A2E6(uLocal_141))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x063E0F2515867ED4();
			unk_0x8B438725D591ED78(0, 25, 1);
		}
		if (Global_78558)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_166())
			{
				case 0:
					iLocal_144 = 2;
					break;
				
				case 2:
					iLocal_144 = 2;
					break;
				
				case 3:
					iLocal_144 = 2;
					break;
				}
		}
		func_165(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
		func_164(uLocal_140, "CLOSE_SHUTTER");
		unk_0x9FD96C5DE6EDFC15(Global_20364, "DISPLAY_VIEW");
		unk_0xC6A3EF6C4A3412C1(16);
		unk_0xAE3413B0654A0035();
	}
	Local_78 = { Global_20343 };
	Local_81 = { Global_20336[Global_20328 /*3*/] };
	Global_22759 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_20383.f_1 > 3)
	{
		Global_20383.f_1 = 8;
	}
	if (iLocal_131 == 0)
	{
		unk_0x061B1200C95204CB(&Global_8255, 3);
	}
	func_162();
	unk_0xCA0440712A8201E9(4);
	if (unk_0x8DDFA10A42914472())
	{
	}
	if (Global_4718592.f_160554)
	{
	}
	if (Global_4718592.f_160556 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x4150CF46B891FFF5(0, Global_20352);
		unk_0x4150CF46B891FFF5(0, 186);
		unk_0x063E0F2515867ED4();
		unk_0x8B438725D591ED78(0, 25, 1);
		unk_0x8B438725D591ED78(0, 0, 1);
		if (func_161())
		{
			if (!BitTest(Global_4542297, 2))
			{
				unk_0xECDAB41968FF21A8(&Global_4542297, 2);
				func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_113648.f_14053.f_81)
		{
			if (!BitTest(Global_4542297, 13))
			{
				if (!unk_0xF0E4B64AC0B5660E())
				{
					if (!BitTest(Global_8254, 28))
					{
						if ((iLocal_128 && iLocal_131 == 0) && !func_161())
						{
							unk_0xECDAB41968FF21A8(&Global_4542297, 13);
							Global_113648.f_14053.f_81 = 1;
							func_160("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xFEE065E56A9BEF3F())
		{
			if (Global_4718592.f_160553 == 0 && Global_4718592.f_160554 == 0)
			{
				unk_0x71CD983E90DB042A(15, 0f, -0.0375f);
			}
			unk_0xEDECDDE17C1E41F5(7);
			func_159();
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 200, 1);
			}
			unk_0x8B438725D591ED78(0, 44, 1);
			unk_0x8B438725D591ED78(0, 47, 1);
			unk_0x8B438725D591ED78(0, 91, 1);
			unk_0x8B438725D591ED78(0, 92, 1);
			unk_0x8B438725D591ED78(0, 68, 1);
			if (iLocal_150 == 0)
			{
				unk_0x4150CF46B891FFF5(0, Global_20356);
			}
			unk_0x4150CF46B891FFF5(0, Global_20353);
			if ((unk_0x72474BA05A104E1E() || unk_0x984CA71F26DF483C()) && !func_161())
			{
				iLocal_130 = 1;
				Global_20383.f_1 = 3;
				unk_0x577AE0048ADA90C8(0);
			}
			if (unk_0xF23DF97D5FA97992())
			{
				Global_20383.f_1 = 3;
				unk_0x577AE0048ADA90C8(0);
			}
			if (BitTest(Global_8254, 3))
			{
				Global_20383.f_1 = 3;
				unk_0x577AE0048ADA90C8(0);
			}
			if (unk_0xA26A9A07F761D8F8())
			{
				if (func_151())
				{
					Global_20383.f_1 = 3;
					unk_0x577AE0048ADA90C8(0);
				}
			}
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x8DEE51D44B32DE1F(unk_0xC1A5EC5C986B98AD(), 0))
				{
					Global_20383.f_1 = 3;
					unk_0x577AE0048ADA90C8(0);
				}
				if ((unk_0x97247A0CAE4CEFB6(unk_0xC1A5EC5C986B98AD(), 78, 1) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0x5C3926F501DBBD3A(unk_0x93E99A2DBCBA9CFA()))
				{
					if (func_150())
					{
					}
					else
					{
						Global_20383.f_1 = 3;
						unk_0x577AE0048ADA90C8(0);
					}
				}
				if (unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0xA92CED053FDC0D06(unk_0xC1A5EC5C986B98AD()))
				{
					if (Global_78558 == 1)
					{
						Global_20383.f_1 = 3;
					}
				}
				if (unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0xA57B95471CC90EA4(unk_0xC1A5EC5C986B98AD()) > 0.3f)
					{
						Global_20383.f_1 = 3;
					}
				}
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					func_149();
					iLocal_149 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
					if (unk_0x38B6CF1EE3FC9BC1(iLocal_149) < 0f)
					{
						func_146(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!unk_0x6E79A9ABB5A154C9())
							{
								func_146(0);
							}
						}
						else if (!unk_0x6E79A9ABB5A154C9())
						{
							iLocal_116 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0x063E0F2515867ED4();
						}
					}
				}
				else if (Global_78558 == 0)
				{
					if (BitTest(Global_8253, 18))
					{
						func_145();
						if ((Global_20383 == 0 || Global_20383 == 1) || Global_20383 == 2)
						{
							if (!unk_0x87933E7F2AEEBA16(unk_0xC1A5EC5C986B98AD()))
							{
								if (unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 2)
								{
								}
								else
								{
									Global_20383.f_1 = 3;
									unk_0x577AE0048ADA90C8(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_142)
			{
				func_144();
			}
			if (Global_20383.f_1 < 4)
			{
			}
			if (iLocal_153 == 0)
			{
				if (iLocal_103 == 0)
				{
					if (iLocal_104 == 0)
					{
						if (iLocal_111 == 0)
						{
							if (Global_20383.f_1 > 3)
							{
								if (iLocal_150)
								{
									func_142();
									if (Global_22763 == 0 && Global_22760 == 6)
									{
										unk_0x4F6F113654DD2FF9(0, 1);
										unk_0x5E49B93D34BD8FC0();
										iLocal_150 = 0;
										func_141();
										if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
										{
											Local_67 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
										}
										func_140();
										iLocal_109++;
										if (func_174())
										{
											func_165(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_165(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_129();
									}
									if (Global_22760 == 0)
									{
										iLocal_150 = 0;
										unk_0x5E49B93D34BD8FC0();
										if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
										{
											Local_67 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
										}
										func_128();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_129();
										if (func_174())
										{
											if (Global_4541022 == 0)
											{
												if (!BitTest(Global_4542297, 2))
												{
													func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!BitTest(Global_4542297, 2))
										{
											func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_127();
										func_126(1);
									}
								}
								else if (Global_20383.f_1 != 9)
								{
									if (Global_22759 == 1)
									{
										if (Global_22758 == 0)
										{
											func_125();
										}
									}
									else if ((Global_8861 - Global_8860) > Global_8862)
									{
										if (unk_0x72474BA05A104E1E() && func_124())
										{
											if (func_123() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0x577AE0048ADA90C8(0);
												unk_0xA13B5B0EF7402391(iLocal_112);
												iLocal_143 = 0;
												if (Global_22758 == 0)
												{
													func_140();
													Global_22758 = 1;
													unk_0x4F6F113654DD2FF9(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_122(0, 0);
													func_126(0);
													iLocal_115 = 0;
													func_117(1);
													iLocal_142 = 0;
													func_115(0, 1);
													func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_113(1);
												}
											}
										}
										if (func_112(2, Global_20351, 0))
										{
											if (func_161())
											{
												if (((Global_1935176 || Global_1574964) || Global_22761) || BitTest(Global_8253, 21))
												{
												}
												else if (func_123() && iLocal_127)
												{
												}
												else if (!func_124())
												{
													if (iLocal_127 == 0)
													{
														unk_0x6D5ACBBD4CE34249(500);
														iLocal_143 = 0;
														func_115(1, 1);
														func_111(1);
													}
												}
											}
											else if (func_123() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0x577AE0048ADA90C8(0);
												unk_0xA13B5B0EF7402391(iLocal_112);
												iLocal_143 = 0;
												if (Global_22758 == 0)
												{
													func_140();
													Global_22758 = 1;
													unk_0x4F6F113654DD2FF9(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_122(0, 0);
													func_126(0);
													iLocal_115 = 0;
													func_117(1);
													iLocal_142 = 0;
													func_115(0, 1);
													func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (unk_0xF0E4B64AC0B5660E())
										{
											func_110();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0xF0E4B64AC0B5660E())
									{
										func_110();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (BitTest(Global_8253, 28))
										{
											func_110();
											iLocal_102 = 1;
										}
									}
									else if (!BitTest(Global_8253, 28))
									{
										func_110();
										iLocal_102 = 0;
									}
									if (Global_22758 == 1)
									{
										func_99();
									}
									else if (Global_20383.f_1 > 4)
									{
										if (iLocal_124 == 1 && iLocal_125 == 0)
										{
											func_95();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1)
										{
											func_128();
											if (iLocal_136 == 1 || iLocal_136 == 0)
											{
												if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
												{
													if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
													{
														func_164(uLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = unk_0xA5E11AF0A2B928C1();
														while (unk_0xA5E11AF0A2B928C1() < (iLocal_135 + iLocal_137) && Global_20383.f_1 > 3)
														{
															func_159();
															func_144();
															func_94();
															unk_0x063E0F2515867ED4();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_174())
												{
													if (Global_4541022 == 0)
													{
														if (!BitTest(Global_4542297, 2))
														{
															func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!BitTest(Global_4542297, 2))
												{
													func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_144();
												func_159();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_129();
												iLocal_136 = 0;
												func_164(uLocal_140, "OPEN_SHUTTER");
											}
											func_127();
											func_126(1);
											func_93();
										}
									}
									if (iLocal_143 == 1)
									{
										func_90();
									}
									if (iLocal_129)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_128 = 1;
											iLocal_129 = 0;
											unk_0xECDAB41968FF21A8(&Global_8253, 18);
											if (Global_22758 == 0)
											{
												func_115(1, 1);
											}
										}
									}
									if (iLocal_127 == 0)
									{
										if (iLocal_128 && Global_22758 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_22761 == 0)
											{
												func_12();
											}
										}
										else
										{
											func_94();
										}
									}
									else if (iLocal_124 == 0)
									{
										func_7();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_20383.f_1 > 3)
					{
						if (Global_22759 == 1)
						{
							if (Global_22758 == 0)
							{
								func_125();
							}
						}
					}
					func_6();
				}
			}
			else
			{
				if (iLocal_155 == 1)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_152, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 2)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 6)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 3)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 7)
				{
					if (unk_0xCCE9BCDAB8B7FAED() || func_5())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0x674D69D3896862C7() || func_4())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0xCC17806DB0C41C19())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_152, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_155 == 4)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_152, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 5)
				{
					iVar0 = unk_0xE5203E6402C22F02();
					switch (iVar0)
					{
						case -1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 0:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 2:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						default:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						}
				}
				if (iLocal_155 == 0)
				{
				}
				if (iLocal_155 == 2 || iLocal_155 == 3)
				{
					if (unk_0x87644B1F984197FE(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_115(0, 1);
					}
					if (unk_0x87644B1F984197FE(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (unk_0x6BD2D66249562506(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_115(0, 1);
							iLocal_154 = 0;
							unk_0x48C1B62E5547CD4B("Gallery");
							unk_0x5B5989B0F9709D0D();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (func_4())
					{
						if (unk_0x87644B1F984197FE(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_115(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (unk_0x87644B1F984197FE(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_115(0, 1);
						iLocal_111 = 0;
					}
					if (!func_4())
					{
						if (unk_0x87644B1F984197FE(2, Global_20355))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_115(0, 1);
							if (BitTest(Global_8254, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = unk_0xA5E11AF0A2B928C1();
							unk_0xD3B50E6F9885FA39(1);
						}
					}
				}
				else if (unk_0x87644B1F984197FE(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_115(0, 1);
				}
			}
		}
		iLocal_108 = unk_0xA5E11AF0A2B928C1();
		if (func_161())
		{
			if (!BitTest(Global_4542297, 2))
			{
				unk_0xECDAB41968FF21A8(&Global_4542297, 2);
				func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_122(0, 0);
			func_126(0);
			iLocal_115 = 0;
			func_117(1);
			Global_22758 = 0;
			Global_22759 = 0;
			Global_22761 = 0;
			unk_0xD0AE101DBAA43C98(&uLocal_140);
			unk_0xD0AE101DBAA43C98(&uLocal_141);
			unk_0x577AE0048ADA90C8(0);
			if (Global_20586 == 1)
			{
				unk_0xECDAB41968FF21A8(&Global_8253, 17);
			}
			else
			{
				unk_0x061B1200C95204CB(&Global_8253, 17);
			}
			unk_0x4F6F113654DD2FF9(0, 1);
			unk_0xBED533B930EE6D8E(unk_0x93E99A2DBCBA9CFA(), 1);
			unk_0x061B1200C95204CB(&Global_8255, 3);
			unk_0x061B1200C95204CB(&Global_4542297, 3);
			unk_0x833DC7C29EA6EEF3(15);
			Global_22762 = 1;
			unk_0xA13B5B0EF7402391(iLocal_112);
			unk_0x8A1B9F78F1F46A12(iLocal_112);
			unk_0x5E49B93D34BD8FC0();
			func_117(1);
			unk_0x2FBEA75DAA5B4D53(0);
			unk_0x2DF93170E1060FE0(0);
			unk_0x12B2931464E8FC82(1f);
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				unk_0x69B06069E38FB537(unk_0xC1A5EC5C986B98AD(), "Mood_Normal_1", 0);
				unk_0x0F2FEB47E011668F(unk_0xC1A5EC5C986B98AD());
			}
			if (Global_4541022 > 0 && Global_4541022 < 13)
			{
				unk_0xFBA79BC11313B81D(sLocal_33[Global_4541022]);
			}
			unk_0x061B1200C95204CB(&Global_8253, 18);
			if (func_161())
			{
				func_115(1, 1);
			}
			else
			{
				func_115(0, 1);
			}
			if (func_172(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			unk_0x675D9C12C73D3DE7();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x59F5AEF2832C3D8C(1);
		}
		else if (Global_20383.f_1 > 3)
		{
			unk_0x59F5AEF2832C3D8C(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78558)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x990C52ABB0EFEBA9();
	iVar1 = unk_0x80A3F4E694565F6A(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4542575 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_20383.f_1 == 1 || Global_20383.f_1 == 3) || Global_20383.f_1 == 0) || Global_20327 == 1)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

bool func_4()
{
	return (unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A());
}

var func_5()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
}

void func_6()
{
	iLocal_106 = unk_0x5EFC2F9A6A62E410(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = unk_0xB59E3F5CD4A72985();
			iLocal_110 = unk_0x0B1C8FE235BC1C1D();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (unk_0x5FAF55B1F052A2E6(uLocal_140))
					{
						if (func_174())
						{
							if (Global_4541022 == 0)
							{
								if (!BitTest(Global_4542297, 2))
								{
									func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_165(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!BitTest(Global_4542297, 2))
							{
								func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_165(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x5FAF55B1F052A2E6(uLocal_140))
				{
					func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_165(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			unk_0x5E49B93D34BD8FC0();
			break;
		
		case 1:
			if (!unk_0x00E7715CBBB904D9())
			{
				unk_0xCB4985E4432AAAC3("CELL_SPINNER2");
				unk_0x287337934DFDC8C3(1);
			}
			break;
		
		case 2:
			if (BitTest(Global_8254, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = 0;
				iLocal_110 = 0;
			}
			else
			{
				Global_20383.f_1 = 3;
				Global_22762 = 1;
			}
			unk_0x5E49B93D34BD8FC0();
			break;
	}
}

void func_7()
{
	if (func_112(2, Global_20352, 0))
	{
		func_1(0);
		if (BitTest(Global_8254, 28))
		{
			unk_0x577AE0048ADA90C8(0);
			unk_0x5AE11BC36633DE4E(0);
			func_141();
			iLocal_127 = 0;
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				Local_67 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			}
			func_140();
			iLocal_136 = 1;
		}
		else if (func_11())
		{
			if (BitTest(Global_8254, 14))
			{
				func_160("CELL_299", -1);
			}
			else
			{
				func_140();
				func_10();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_115(1, 1);
		}
	}
	if (BitTest(Global_8253, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_159();
			unk_0x063E0F2515867ED4();
			func_94();
			func_149();
			func_144();
		}
		unk_0x577AE0048ADA90C8(0);
		func_141();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_127 = 0;
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			Local_67 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
		}
		func_129();
		func_140();
	}
	if (func_112(2, Global_20356, 0))
	{
		func_1(0);
		if (func_123() || BitTest(Global_8254, 28))
		{
		}
		else
		{
			unk_0x577AE0048ADA90C8(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_136 = 1;
			func_141();
			iLocal_127 = 0;
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				Local_67 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			}
			func_140();
		}
	}
	if (BitTest(Global_8253, 28))
	{
		if (func_112(2, Global_20355, 0))
		{
			func_1(0);
			unk_0x577AE0048ADA90C8(0);
			unk_0x439E1DB93055D9F3(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x063E0F2515867ED4();
			func_159();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x063E0F2515867ED4();
			func_159();
			unk_0xEFC5ECE28DD98538();
			unk_0xE1A45DD3AF3FD758();
			Global_22762 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_115(0, 1);
			Global_22758 = 1;
			unk_0x4F6F113654DD2FF9(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_8();
			iLocal_127 = 0;
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				Local_67 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			}
			func_122(0, 0);
			func_126(0);
			iLocal_115 = 0;
			func_117(1);
			if (!Global_2793044.f_6749)
			{
				unk_0xECDAB41968FF21A8(&Global_8253, 9);
			}
			iLocal_142 = 0;
			func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_8()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Accept", &Global_20372, 1);
		func_9();
	}
}

void func_9()
{
	if (func_2())
	{
		unk_0x8C27BB4299B24A0D(5);
	}
}

void func_10()
{
	iLocal_150 = 1;
	Global_22763 = 1;
	unk_0x4F6F113654DD2FF9(0, 1);
}

int func_11()
{
	if (iLocal_107 == iLocal_108)
	{
		if (iLocal_105)
		{
			iLocal_105 = 1;
		}
	}
	if (Global_20383.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_109 == iLocal_110 || iLocal_109 > iLocal_110)
	{
		iLocal_155 = 1;
		iLocal_152 = 2;
		return 0;
	}
	return 1;
}

void func_12()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x42AAFCB5B7854AA9(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_131)
	{
		func_85();
		func_81();
		func_80();
		fLocal_73 = unk_0x95D2DED3002B1087();
		fLocal_74 = unk_0x0BEB2E3FBF23C027();
		if (iLocal_133 == 0)
		{
			if (unk_0x51EB177CA0562B62(2, iVar0) && !unk_0x51EB177CA0562B62(2, iVar1))
			{
				iLocal_133 = 1;
				func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8253, 28))
				{
					func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x28AEB293270C3DDA(0, 177, 1), "CELL_281");
					func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x28AEB293270C3DDA(2, 179, 1), func_67());
					func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x28AEB293270C3DDA(0, 176, 1), "CELL_280");
					func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x28AEB293270C3DDA(0, 177, 1), "CELL_281");
					func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_66();
				unk_0x9FD96C5DE6EDFC15(uLocal_141, "SET_MAX_WIDTH");
				unk_0xC49D258FBF3BF214(fLocal_77);
				unk_0xAE3413B0654A0035();
				func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x51EB177CA0562B62(2, iVar0) || unk_0x51EB177CA0562B62(2, iVar1))
		{
			iLocal_133 = 0;
			func_129();
		}
		if (iLocal_134 == 0)
		{
			if (unk_0x51EB177CA0562B62(2, iVar1) && !unk_0x51EB177CA0562B62(2, iVar0))
			{
				iLocal_134 = 1;
				func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8253, 28))
				{
					func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x28AEB293270C3DDA(0, 177, 1), "CELL_281");
					func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x28AEB293270C3DDA(2, 179, 1), func_67());
				}
				else if (!func_161())
				{
					func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x28AEB293270C3DDA(0, 176, 1), "CELL_280");
					func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x28AEB293270C3DDA(0, 177, 1), "CELL_281");
				}
				else
				{
					func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 176, 1), "CELL_280");
					func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(0, 177, 1), "CELL_281");
				}
				func_65();
				unk_0x9FD96C5DE6EDFC15(uLocal_141, "SET_MAX_WIDTH");
				unk_0xC49D258FBF3BF214(fLocal_77);
				unk_0xAE3413B0654A0035();
				func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x51EB177CA0562B62(2, iVar1) || unk_0x51EB177CA0562B62(2, iVar0))
		{
			iLocal_134 = 0;
			func_129();
		}
	}
	else
	{
		unk_0x3210A569BAF257BB(0, 2, 1);
		unk_0x3210A569BAF257BB(0, 1, 1);
	}
	if (unk_0x6163ED6C61AD64FC(2))
	{
		func_129();
	}
	func_149();
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 200, 1);
	}
	if (func_161())
	{
		if (!BitTest(Global_4542297, 2))
		{
			unk_0xECDAB41968FF21A8(&Global_4542297, 2);
			func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((unk_0x87644B1F984197FE(2, 183) && iLocal_156 == 0) && !func_161())
	{
		unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (!unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 2)
			{
				if (BitTest(Global_4542297, 2))
				{
					unk_0x061B1200C95204CB(&Global_4542297, 2);
					if (!BitTest(Global_4542297, 2))
					{
						func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xECDAB41968FF21A8(&Global_4542297, 2);
					func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131)
	{
		if (iLocal_132 == 1)
		{
			iLocal_132 = 0;
			unk_0x9FD96C5DE6EDFC15(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD546F85F5AF0F231(0);
			func_64("CELL_FOCUS");
			unk_0xD546F85F5AF0F231(1);
			unk_0xAE3413B0654A0035();
		}
		if (!func_63(14))
		{
			if (BitTest(Global_4542297, 10))
			{
				if ((Global_78558 == 0 && unk_0x24B651D85CCE5EB4(joaat("pi_menu")) > 0) && func_62())
				{
					unk_0x9FD96C5DE6EDFC15(uLocal_140, "SET_FOCUS_LOCK");
					unk_0xD546F85F5AF0F231(1);
					unk_0x2AF11E92DE43CDE3("CELL_ACTTL");
					unk_0x76B34CBB6F5FA1BB(unk_0x45816CECE89B5B19(&Global_4543282));
					unk_0xF8FCA9E7130CE1C8();
					unk_0xD546F85F5AF0F231(0);
					unk_0xAE3413B0654A0035();
					unk_0x061B1200C95204CB(&Global_4542297, 10);
				}
			}
		}
		else if (BitTest(Global_4542297, 10))
		{
			unk_0x061B1200C95204CB(&Global_4542297, 10);
		}
		iLocal_66 = unk_0xA5E11AF0A2B928C1();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				Local_70 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
				if (unk_0x2E496FE654DA4166(Local_70, Local_67, 1) > 5f)
				{
					Global_20383.f_1 = 3;
					unk_0x577AE0048ADA90C8(0);
				}
				iLocal_65 = unk_0xA5E11AF0A2B928C1();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!unk_0x51EB177CA0562B62(0, 182) && !func_161())
		{
			unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
			iLocal_132 = 0;
			unk_0x9FD96C5DE6EDFC15(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD546F85F5AF0F231(0);
			func_64("CELL_FOCUS");
			unk_0xD546F85F5AF0F231(1);
			unk_0xAE3413B0654A0035();
		}
	}
	else if (unk_0x51EB177CA0562B62(0, 182) && !func_161())
	{
		unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
		iLocal_132 = 1;
		if (!func_63(14))
		{
			unk_0x9FD96C5DE6EDFC15(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD546F85F5AF0F231(1);
			func_64("CELL_FOCUS");
			unk_0xD546F85F5AF0F231(1);
			unk_0xAE3413B0654A0035();
		}
	}
	if (func_174())
	{
		if ((unk_0x87644B1F984197FE(2, 186) && iLocal_156 == 0) && !func_161())
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
					{
						unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
						unk_0x69B06069E38FB537(unk_0xC1A5EC5C986B98AD(), "Mood_Normal_1", 0);
						unk_0x0F2FEB47E011668F(unk_0xC1A5EC5C986B98AD());
						if (Global_20383 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x6BC6C26115124DFE(unk_0xC1A5EC5C986B98AD(), 0, 1);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x6BC6C26115124DFE(unk_0xC1A5EC5C986B98AD(), 1, 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_57 == 2 || iLocal_57 == 3) || iLocal_57 == 4) || iLocal_57 == 8) || iLocal_57 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_57 == 3)
										{
											unk_0x69B06069E38FB537(unk_0xC1A5EC5C986B98AD(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									unk_0x69B06069E38FB537(unk_0xC1A5EC5C986B98AD(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								unk_0x69B06069E38FB537(unk_0xC1A5EC5C986B98AD(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							unk_0x69B06069E38FB537(unk_0xC1A5EC5C986B98AD(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
					{
						unk_0x69B06069E38FB537(unk_0xC1A5EC5C986B98AD(), "Mood_Normal_1", 0);
						unk_0x0F2FEB47E011668F(unk_0xC1A5EC5C986B98AD());
						unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
					}
				}
			}
		}
		if ((unk_0x87644B1F984197FE(2, 185) && iLocal_156 == 0) && !func_161())
		{
			if (iLocal_131)
			{
				if (bLocal_62 == 1)
				{
					unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (unk_0x4310A0DB886F9FED(sLocal_19[Global_4541021], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0x2FBEA75DAA5B4D53(1);
							unk_0x2DF93170E1060FE0(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						unk_0x2FBEA75DAA5B4D53(0);
						unk_0x2DF93170E1060FE0(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					unk_0x2FBEA75DAA5B4D53(1);
					unk_0x2DF93170E1060FE0(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					unk_0x2FBEA75DAA5B4D53(0);
					unk_0x2DF93170E1060FE0(0);
				}
			}
		}
	}
	if (iLocal_59 == 1 && !func_161())
	{
		if (unk_0x87644B1F984197FE(0, 172) && iLocal_156 == 0)
		{
			if (func_174())
			{
				Global_4541022++;
				unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
			}
			if (Global_4541022 == 13)
			{
				func_126(0);
				unk_0x12B2931464E8FC82(1f);
				unk_0xFBA79BC11313B81D(sLocal_33[(Global_4541022 - 1)]);
				Global_4541022 = 0;
				func_61();
				if (iLocal_47 == 1)
				{
					unk_0x061B1200C95204CB(&Global_4542297, 2);
					iLocal_47 = 0;
					func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4541022 > 0 && Global_4541022 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				unk_0xEBA1698B77FD0A86(sLocal_33[Global_4541022], 0);
			}
		}
	}
	if (Global_4541022 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (unk_0x9812897315C21146(sLocal_33[Global_4541022]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!unk_0xD3CB74FBD1A538A0())
				{
					func_126(1);
				}
				if (iLocal_47 == 0)
				{
					if (!BitTest(Global_4542297, 2))
					{
						iLocal_47 = 1;
					}
				}
				unk_0xECDAB41968FF21A8(&Global_4542297, 2);
				func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x12B2931464E8FC82(0.25f);
				unk_0x9349155F78E899AF(sLocal_33[Global_4541022], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_4541022 == 1 || Global_4541022 == 3)
			{
			}
			if (Global_4541022 == 2 || Global_4541022 == 4)
			{
			}
		}
	}
	if ((unk_0x87644B1F984197FE(0, 173) && iLocal_156 == 0) && !func_161())
	{
		if (func_174())
		{
			func_117(0);
			Global_4541021++;
			unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
		}
		if (Global_4541021 == 13)
		{
			Global_4541021 = 0;
		}
		if (Global_4541021 == 0)
		{
			if (func_174())
			{
				func_117(0);
			}
		}
		else
		{
			func_127();
		}
		func_60();
	}
	if ((unk_0xE665ABCFC5784C35(0, 184) && iLocal_156 == 0) && !func_161())
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && !unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 2)
			{
				Local_67 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
				unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
				func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_164(uLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = unk_0xA5E11AF0A2B928C1();
				while (unk_0xA5E11AF0A2B928C1() < (iLocal_135 + iLocal_139) && Global_20383.f_1 > 3)
				{
					func_159();
					func_144();
					func_94();
					unk_0x063E0F2515867ED4();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_131 == 0)
				{
					unk_0xA13B5B0EF7402391(iLocal_112);
					iLocal_131 = 1;
					func_59(1);
					func_58();
					unk_0xECDAB41968FF21A8(&Global_8255, 3);
					iLocal_65 = unk_0xA5E11AF0A2B928C1();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_59(0);
					iLocal_131 = 0;
					unk_0x061B1200C95204CB(&Global_8255, 3);
				}
				iLocal_135 = unk_0xA5E11AF0A2B928C1();
				while (unk_0xA5E11AF0A2B928C1() < (iLocal_135 + iLocal_137) && Global_20383.f_1 > 3)
				{
					func_159();
					func_144();
					func_94();
					unk_0x063E0F2515867ED4();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_164(uLocal_140, "OPEN_SHUTTER");
				if (func_174())
				{
					if (Global_4541022 == 0)
					{
						if (!BitTest(Global_4542297, 2))
						{
							func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!BitTest(Global_4542297, 2))
				{
					func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_144();
				func_159();
				if (BitTest(Global_8253, 28))
				{
					StringCopy(&cLocal_145, "CELL_296", 16);
					func_56();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_295", 16);
					func_30();
				}
			}
		}
	}
	if (iLocal_131 == 0)
	{
		if (iLocal_113 == 0)
		{
			if (unk_0x87644B1F984197FE(0, 40) || unk_0x87644B1F984197FE(0, 41))
			{
				fLocal_114 = unk_0x140757F4135364CD();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (unk_0x209C5E3492025E4B(iLocal_112))
					{
						unk_0x531D638530A8DB97(iLocal_112, "Camera_Zoom", &Global_20372, 1);
					}
				}
				else
				{
					unk_0xA13B5B0EF7402391(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (unk_0x51EB177CA0562B62(0, 40) || unk_0x51EB177CA0562B62(0, 41))
		{
			fLocal_114 = unk_0x140757F4135364CD();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (unk_0x209C5E3492025E4B(iLocal_112))
				{
					unk_0x531D638530A8DB97(iLocal_112, "Camera_Zoom", &Global_20372, 1);
				}
			}
			else
			{
				unk_0xA13B5B0EF7402391(iLocal_112);
			}
		}
		else
		{
			unk_0xA13B5B0EF7402391(iLocal_112);
		}
	}
	if ((func_112(2, Global_20352, 0) && !func_124()) && !func_112(2, Global_20351, 0))
	{
		fLocal_75 = unk_0x95D2DED3002B1087();
		fLocal_76 = unk_0x0BEB2E3FBF23C027();
		unk_0x439E1DB93055D9F3(0, 0);
		unk_0xECDAB41968FF21A8(&Global_8253, 21);
		unk_0xA13B5B0EF7402391(iLocal_112);
		iLocal_127 = 1;
		func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_165(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x531D638530A8DB97(-1, "Camera_Shoot", &Global_20372, 1);
		func_164(uLocal_140, "CLOSE_SHUTTER");
		Local_84 = { -90.3f, 0f, 90f };
		unk_0xB9A6388BF8103D8F(Local_84, 0);
		if (!func_174())
		{
			func_117(1);
		}
		Global_22761 = 1;
		unk_0x4F6F113654DD2FF9(0, 1);
		while (Global_22760 < 6 && Global_20383.f_1 > 3)
		{
			func_159();
			func_144();
			func_94();
			func_149();
			unk_0x063E0F2515867ED4();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC7ED38D178CE2768(0, 0);
		if (Global_20325)
		{
			func_1(1);
		}
		iLocal_135 = unk_0xA5E11AF0A2B928C1();
		while (unk_0xA5E11AF0A2B928C1() < (iLocal_135 + iLocal_138) && Global_20383.f_1 > 3)
		{
			func_159();
			func_144();
			func_94();
			unk_0x063E0F2515867ED4();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_164(uLocal_140, "OPEN_SHUTTER");
		unk_0x061B1200C95204CB(&Global_8253, 21);
		func_129();
		if (Global_20383.f_1 > 3)
		{
			if (Global_78558)
			{
				func_23(1087, 1, -1);
				func_22();
				func_19(-1492367786, 23, 0);
			}
			else
			{
				switch (func_13())
				{
					case 0:
						unk_0xB27C3C2F7357CAA1(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0xB27C3C2F7357CAA1(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0xB27C3C2F7357CAA1(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_22();
			}
			func_126(0);
		}
		func_144();
	}
	if (BitTest(Global_8253, 28))
	{
		if (func_112(2, Global_20355, 0))
		{
			unk_0x439E1DB93055D9F3(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x063E0F2515867ED4();
			func_159();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x063E0F2515867ED4();
			func_159();
			unk_0xEFC5ECE28DD98538();
			unk_0xE1A45DD3AF3FD758();
			Global_22762 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_22758 = 1;
			unk_0x4F6F113654DD2FF9(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_8();
			iLocal_127 = 0;
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				Local_67 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			}
			func_122(0, 0);
			func_126(0);
			iLocal_115 = 0;
			func_117(1);
			if (!Global_2793044.f_6749)
			{
				unk_0xECDAB41968FF21A8(&Global_8253, 9);
			}
			unk_0x577AE0048ADA90C8(0);
			iLocal_142 = 0;
			func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_13()
{
	func_14();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_14()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_17(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_16(unk_0xC1A5EC5C986B98AD());
			if (func_15(iVar0) && (!func_63(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_15(Global_113648.f_2365.f_539.f_4321))
				{
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
				}
				Global_113648.f_2365.f_539.f_4323 = iVar0;
				Global_113648.f_2365.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
			{
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
			}
			return;
		}
	}
	Global_113648.f_2365.f_539.f_4321 = 145;
}

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return func_18(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_18(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_21(iParam1, iParam2))
	{
		iVar0 = func_20();
		Global_2694418[iVar0] = iParam1;
		Global_2694429[iVar0] = iParam0;
	}
}

int func_20()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694418[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_21(int iParam0, var uParam1)
{
	if (Global_1575048)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575060) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_22()
{
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 1;
	iLocal_125 = 0;
	Global_20320 = { Global_20336[Global_20328 /*3*/] };
	func_115(0, 1);
	func_122(0, 0);
	func_126(0);
	iLocal_115 = 0;
	func_117(1);
	if (!BitTest(Global_8254, 28))
	{
		if (unk_0x8DDFA10A42914472() == 0)
		{
			if (unk_0xCCE9BCDAB8B7FAED())
			{
				if (iLocal_117 == 0)
				{
					iLocal_117 = 1;
				}
			}
		}
	}
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_27(iParam0, func_28(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_26(iParam0))
	{
		func_25(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_24(iParam0, iVar0, iParam2, 1);
	}
}

void func_24(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2805027[iParam0 /*3*/][func_28(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_28(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_28(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_28(uParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_28(uParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_28(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_28(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_28(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_28(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_28(uParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_28(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_28(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_28(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_28(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_28(uParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_28(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_28(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_28(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_28(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_28(uParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_28(uParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_28(uParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_28(uParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_28(uParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_28(uParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851323[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851323[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851323[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851323[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851502[func_28(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_28(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_28(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_28(uParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_28(uParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_28(uParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_28(uParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_28(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851411[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851411[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851411[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851411[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851411[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851505[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851505[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851505[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851505[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851505[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851521[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851521[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851521[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851521[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851521[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851411[5 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851323[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851537[func_28(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851546[func_28(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851540[func_28(uParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851549[func_28(uParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851543[func_28(uParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851552[func_28(uParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851555[func_28(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851411[6 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851323[5 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851411[7 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851323[6 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851411[8 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851323[7 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851411[9 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851323[8 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851411[10 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851323[9 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851411[11 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851323[10 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851411[12 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851323[11 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851411[13 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851323[12 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851411[14 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851323[13 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851411[15 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851323[14 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851411[16 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851323[15 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851411[17 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851323[16 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851323[17 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851323[18 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851323[19 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851323[20 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851558[func_28(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851561[func_28(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851564[func_28(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851567[func_28(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851570[func_28(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851573[func_28(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851576[func_28(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851579[func_28(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851582[func_28(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851585[func_28(uParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851588[func_28(uParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851591[func_28(uParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851594[func_28(uParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851597[func_28(uParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851323[21 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851411[23 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851323[22 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851411[24 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851323[23 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851323[24 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851323[25 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851411[27 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851323[26 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851411[28 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851323[27 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_25(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_28(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_26(int iParam0)
{
	if (Global_1665487)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 11803:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 12424:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

int func_27(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_28(uParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_28(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

var func_29()
{
	return Global_1574918;
}

void func_30()
{
	if (iLocal_156 == 1)
	{
		func_55();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_161())
		{
			func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x28AEB293270C3DDA(0, 177, 1), "CELL_281");
			func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x28AEB293270C3DDA(0, 176, 1), "CELL_280");
		}
		else
		{
			func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(0, 177, 1), "CELL_281");
			func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 176, 1), "CELL_280");
		}
		if (iLocal_131)
		{
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 2)
				{
					if (unk_0x42AAFCB5B7854AA9(2) || func_4())
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_78558 == 0 && unk_0x24B651D85CCE5EB4(joaat("pi_menu")) > 0) && func_62())
				{
					func_53();
				}
				else
				{
					if (unk_0x42AAFCB5B7854AA9(2) || func_4())
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(2, 183, 1), "CELL_GRID");
					func_78(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
					if (func_174())
					{
						func_52(5f);
						func_51(6f);
						if (func_32(1))
						{
							func_31(7f);
							if (bLocal_62)
							{
								func_78(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x28AEB293270C3DDA(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_78(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x28AEB293270C3DDA(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 2)
			{
				if (!unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 2)
				{
					if (!func_161())
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
						func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(2, 183, 1), "CELL_GRID");
						func_78(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x28AEB293270C3DDA(0, 39, 1), "CELL_284");
					}
					else
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
						if (!unk_0x42AAFCB5B7854AA9(0))
						{
							func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x28AEB293270C3DDA(0, 210, 1), "CELL_284");
						}
						else
						{
							func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xB49FF1EF1051E9DA(0, 29, 1), "CELL_284");
						}
					}
					if (!func_161())
					{
						if (func_174())
						{
							func_52(6f);
							func_51(7f);
							if (bLocal_63)
							{
								func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(0, 182, 1), "CELL_FOCUS");
							}
							func_78(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x28AEB293270C3DDA(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
					if (func_174())
					{
						func_52(3f);
						func_51(4f);
						func_78(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x28AEB293270C3DDA(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_161())
				{
					if (unk_0x42AAFCB5B7854AA9(2) || func_4())
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				if (!unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 2)
				{
					if (!func_161())
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x28AEB293270C3DDA(2, 183, 1), "CELL_GRID");
						func_78(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
					}
					else
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
						if (!unk_0x42AAFCB5B7854AA9(0))
						{
							func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x28AEB293270C3DDA(0, 210, 1), "CELL_284");
						}
						else
						{
							func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xB49FF1EF1051E9DA(0, 29, 1), "CELL_284");
						}
					}
					if (!func_161())
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x28AEB293270C3DDA(0, 39, 1), "CELL_284");
					}
					if (!func_161())
					{
						if (func_174())
						{
							func_52(7f);
							func_51(8f);
							if (bLocal_63)
							{
								func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(0, 182, 1), "CELL_FOCUS");
							}
							func_78(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x28AEB293270C3DDA(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
					if (func_174())
					{
						func_52(3f);
						func_51(4f);
						func_78(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x28AEB293270C3DDA(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x9FD96C5DE6EDFC15(uLocal_141, "SET_MAX_WIDTH");
		unk_0xC49D258FBF3BF214(fLocal_77);
		unk_0xAE3413B0654A0035();
		func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_31(float fParam0)
{
	func_78(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x28AEB293270C3DDA(0, 174, 1), "CELL_ACTION");
}

int func_32(int iParam0)
{
	if (unk_0xA26A9A07F761D8F8())
	{
		if (func_50(Global_4456522, Global_4456523))
		{
			if (iParam0 == 0 || !func_33(Global_4456522, Global_4456523, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_33(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_34(unk_0xC1A5EC5C986B98AD(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar7;
	var uVar14;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	if (func_49())
	{
		return 0;
	}
	uVar0 = 6;
	uVar7 = 6;
	uVar14 = 7;
	if (iParam1 == 0)
	{
		iVar25 = 3;
	}
	else if (bParam3)
	{
		iVar25 = 1;
	}
	else if (bParam4)
	{
		iVar25 = 2;
	}
	else
	{
		iVar25 = 0;
	}
	func_42(iParam1, iParam2, &uVar0, &uVar7, &uVar14, iVar25, bParam5);
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (unk_0x504B9BB48D41C264(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar22 = func_41(iParam0);
			if (!iVar22 == -1)
			{
				if (func_40(&uVar0, iVar22))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar23 = func_39(iParam0);
			if (!iVar23 == -1)
			{
				if (func_37(&uVar7, iVar23))
				{
					return 1;
				}
			}
		}
		if (unk_0xA26A9A07F761D8F8())
		{
			iVar24 = func_36(iParam0);
			if (!iVar24 == 0)
			{
				if (func_35(&uVar14, iVar24))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xAC464F61BE9FD50D(iParam0, 1);
	return uVar0;
}

bool func_37(var uParam0, int iParam1)
{
	return func_38(uParam0, iParam1);
}

int func_38(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_39(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6BC6C26115124DFE(iParam0, 0, 1);
	return uVar0;
}

bool func_40(var uParam0, int iParam1)
{
	return func_38(uParam0, iParam1);
}

var func_41(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6BC6C26115124DFE(iParam0, 0, 1);
	return uVar0;
}

void func_42(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_48(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_47(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 4, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 38, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 62, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_48(uParam4, 136, 1);
							func_48(uParam4, 138, 1);
							func_48(uParam4, 139, 1);
							func_48(uParam4, 143, 1);
							func_48(uParam4, 144, 1);
							func_48(uParam4, 145, 1);
							func_48(uParam4, 147, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_48(uParam4, 136, 1);
							func_48(uParam4, 138, 1);
							func_48(uParam4, 139, 1);
							func_48(uParam4, 143, 1);
							func_48(uParam4, 144, 1);
							func_48(uParam4, 145, 1);
							func_48(uParam4, 147, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 59:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 66, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 60:
				case 63:
					func_46(uParam3, 67, 1);
					func_46(uParam3, 68, 1);
					func_46(uParam3, 69, 1);
					func_46(uParam3, 70, 1);
					func_46(uParam3, 71, 1);
					func_46(uParam3, 72, 1);
					func_46(uParam3, 73, 1);
					func_46(uParam3, 74, 1);
					func_46(uParam3, 78, 1);
					func_46(uParam3, 79, 1);
					func_46(uParam3, 80, 1);
					func_46(uParam3, 81, 1);
					func_46(uParam3, 82, 1);
					func_46(uParam3, 91, 1);
					func_46(uParam3, 92, 1);
					func_44(uParam2, 66, 1);
					func_44(uParam2, 67, 1);
					func_44(uParam2, 68, 1);
					func_44(uParam2, 69, 1);
					func_44(uParam2, 70, 1);
					func_44(uParam2, 71, 1);
					func_44(uParam2, 72, 1);
					func_44(uParam2, 73, 1);
					func_44(uParam2, 77, 1);
					func_44(uParam2, 78, 1);
					func_44(uParam2, 79, 1);
					func_44(uParam2, 80, 1);
					func_44(uParam2, 81, 1);
					func_44(uParam2, 90, 1);
					func_44(uParam2, 91, 1);
					func_46(uParam3, 38, 1);
					func_46(uParam3, 47, 1);
					func_46(uParam3, 111, 1);
					func_44(uParam2, 37, 1);
					func_44(uParam2, 46, 1);
					func_44(uParam2, 110, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_43(uParam2, uParam3, uParam4);
					break;
				
				case 61:
					func_46(uParam3, 67, 1);
					func_46(uParam3, 68, 1);
					func_46(uParam3, 69, 1);
					func_46(uParam3, 70, 1);
					func_46(uParam3, 71, 1);
					func_46(uParam3, 72, 1);
					func_46(uParam3, 73, 1);
					func_46(uParam3, 74, 1);
					func_46(uParam3, 78, 1);
					func_46(uParam3, 79, 1);
					func_46(uParam3, 80, 1);
					func_46(uParam3, 81, 1);
					func_46(uParam3, 82, 1);
					func_46(uParam3, 91, 1);
					func_46(uParam3, 92, 1);
					func_44(uParam2, 66, 1);
					func_44(uParam2, 67, 1);
					func_44(uParam2, 68, 1);
					func_44(uParam2, 69, 1);
					func_44(uParam2, 70, 1);
					func_44(uParam2, 71, 1);
					func_44(uParam2, 72, 1);
					func_44(uParam2, 73, 1);
					func_44(uParam2, 77, 1);
					func_44(uParam2, 78, 1);
					func_44(uParam2, 79, 1);
					func_44(uParam2, 80, 1);
					func_44(uParam2, 81, 1);
					func_44(uParam2, 90, 1);
					func_44(uParam2, 91, 1);
					func_46(uParam3, 38, 1);
					func_46(uParam3, 47, 1);
					func_46(uParam3, 111, 1);
					func_44(uParam2, 37, 1);
					func_44(uParam2, 46, 1);
					func_44(uParam2, 110, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_43(uParam2, uParam3, uParam4);
					break;
				
				case 62:
					func_46(uParam3, 67, 1);
					func_46(uParam3, 68, 1);
					func_46(uParam3, 69, 1);
					func_46(uParam3, 70, 1);
					func_46(uParam3, 71, 1);
					func_46(uParam3, 72, 1);
					func_46(uParam3, 73, 1);
					func_46(uParam3, 74, 1);
					func_46(uParam3, 78, 1);
					func_46(uParam3, 79, 1);
					func_46(uParam3, 80, 1);
					func_46(uParam3, 81, 1);
					func_46(uParam3, 82, 1);
					func_46(uParam3, 91, 1);
					func_46(uParam3, 92, 1);
					func_44(uParam2, 66, 1);
					func_44(uParam2, 67, 1);
					func_44(uParam2, 68, 1);
					func_44(uParam2, 69, 1);
					func_44(uParam2, 70, 1);
					func_44(uParam2, 71, 1);
					func_44(uParam2, 72, 1);
					func_44(uParam2, 73, 1);
					func_44(uParam2, 77, 1);
					func_44(uParam2, 78, 1);
					func_44(uParam2, 79, 1);
					func_44(uParam2, 80, 1);
					func_44(uParam2, 81, 1);
					func_44(uParam2, 90, 1);
					func_44(uParam2, 91, 1);
					func_46(uParam3, 38, 1);
					func_46(uParam3, 47, 1);
					func_46(uParam3, 111, 1);
					func_44(uParam2, 37, 1);
					func_44(uParam2, 46, 1);
					func_44(uParam2, 110, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_43(uParam2, uParam3, uParam4);
					break;
				
				case 64:
				case 65:
				case 66:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 6, 1);
							func_46(uParam3, 10, 1);
							func_46(uParam3, 54, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 56, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 106, 1);
							func_46(uParam3, 114, 1);
							func_46(uParam3, 116, 1);
							func_46(uParam3, 117, 1);
							func_46(uParam3, 118, 1);
							func_46(uParam3, 119, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 56, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 105, 1);
							func_44(uParam2, 113, 1);
							func_44(uParam2, 114, 1);
							func_44(uParam2, 115, 1);
							func_44(uParam2, 116, 1);
							func_44(uParam2, 117, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 6, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 19, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 106, 1);
							func_46(uParam3, 114, 1);
							func_46(uParam3, 116, 1);
							func_46(uParam3, 117, 1);
							func_46(uParam3, 118, 1);
							func_46(uParam3, 119, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 56, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 105, 1);
							func_44(uParam2, 113, 1);
							func_44(uParam2, 114, 1);
							func_44(uParam2, 115, 1);
							func_44(uParam2, 116, 1);
							func_44(uParam2, 117, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 106, 1);
							func_46(uParam3, 114, 1);
							func_46(uParam3, 116, 1);
							func_46(uParam3, 117, 1);
							func_46(uParam3, 118, 1);
							func_46(uParam3, 119, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 105, 1);
							func_44(uParam2, 113, 1);
							func_44(uParam2, 114, 1);
							func_44(uParam2, 115, 1);
							func_44(uParam2, 116, 1);
							func_44(uParam2, 117, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_43(uParam2, uParam3, uParam4);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_43(uParam2, uParam3, uParam4);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 4, 1);
							break;
						
						case 1:
							func_48(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 37, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 36, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 38, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 1, 1);
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 5, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 10, 1);
							func_46(uParam3, 54, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 56, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 1, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 5, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 56, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 12, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 23, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 29, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 33, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 55, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_42(2, 59, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_42(2, 60, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_43(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_48(uParam2, 124, 1);
	func_48(uParam2, 125, 1);
	func_48(uParam2, 126, 1);
	func_48(uParam2, 127, 1);
	func_48(uParam2, 128, 1);
	func_48(uParam2, 129, 1);
	func_48(uParam2, 130, 1);
	func_48(uParam2, 131, 1);
	func_48(uParam2, 132, 1);
	func_48(uParam2, 133, 1);
	func_48(uParam2, 136, 1);
	func_48(uParam2, 138, 1);
	func_48(uParam2, 139, 1);
	func_48(uParam2, 143, 1);
	func_48(uParam2, 144, 1);
	func_48(uParam2, 145, 1);
	func_48(uParam2, 147, 1);
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	func_45(uParam0, iParam1, bParam2);
}

void func_45(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xECDAB41968FF21A8(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x061B1200C95204CB(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_46(var uParam0, int iParam1, bool bParam2)
{
	func_45(uParam0, iParam1, bParam2);
}

void func_47(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_48(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							break;
						
						case 1:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							break;
						
						case 2:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
					}
					func_48(uParam4, 3, 1);
					func_48(uParam4, 4, 1);
					func_48(uParam4, 5, 1);
					func_48(uParam4, 6, 1);
					func_48(uParam4, 7, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 14, 1);
					func_48(uParam4, 15, 1);
					func_48(uParam4, 16, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_48(uParam4, 110, 1);
					func_48(uParam4, 112, 1);
					func_48(uParam4, 115, 1);
					func_48(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
					}
					func_48(uParam4, 9, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					break;
				
				case 10:
					func_48(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_46(uParam3, 3, 1);
						func_46(uParam3, 4, 1);
						func_46(uParam3, 6, 1);
						func_46(uParam3, 10, 1);
						func_46(uParam3, 54, 1);
						func_46(uParam3, 55, 1);
						func_46(uParam3, 56, 1);
						func_46(uParam3, 13, 1);
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_46(uParam3, 20, 1);
						func_46(uParam3, 26, 1);
						func_46(uParam3, 27, 1);
						func_46(uParam3, 32, 1);
						func_46(uParam3, 33, 1);
						func_46(uParam3, 37, 1);
						func_46(uParam3, 39, 1);
						func_46(uParam3, 106, 1);
						func_46(uParam3, 114, 1);
						func_46(uParam3, 116, 1);
						func_46(uParam3, 117, 1);
						func_46(uParam3, 118, 1);
						func_46(uParam3, 119, 1);
						func_44(uParam2, 3, 1);
						func_44(uParam2, 4, 1);
						func_44(uParam2, 6, 1);
						func_44(uParam2, 8, 1);
						func_44(uParam2, 9, 1);
						func_44(uParam2, 10, 1);
						func_44(uParam2, 53, 1);
						func_44(uParam2, 56, 1);
						func_44(uParam2, 55, 1);
						func_44(uParam2, 13, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
						func_44(uParam2, 21, 1);
						func_44(uParam2, 26, 1);
						func_44(uParam2, 27, 1);
						func_44(uParam2, 28, 1);
						func_44(uParam2, 32, 1);
						func_44(uParam2, 36, 1);
						func_44(uParam2, 38, 1);
						func_44(uParam2, 55, 1);
						func_44(uParam2, 14, 1);
						func_44(uParam2, 105, 1);
						func_44(uParam2, 113, 1);
						func_44(uParam2, 114, 1);
						func_44(uParam2, 115, 1);
						func_44(uParam2, 116, 1);
						func_44(uParam2, 117, 1);
					}
					func_48(uParam4, 2, 1);
					func_48(uParam4, 3, 1);
					func_48(uParam4, 4, 1);
					func_48(uParam4, 14, 1);
					func_48(uParam4, 15, 1);
					func_48(uParam4, 16, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 32, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_48(uParam4, 110, 1);
					func_48(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
						func_44(uParam2, 19, 1);
					}
					func_48(uParam4, 3, 1);
					func_48(uParam4, 6, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 32, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_48(uParam4, 110, 1);
					func_48(uParam4, 112, 1);
					func_48(uParam4, 115, 1);
					func_48(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_46(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_48(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
					}
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_46(uParam3, 3, 1);
						func_46(uParam3, 7, 1);
						func_46(uParam3, 0, 1);
						func_46(uParam3, 12, 1);
						func_46(uParam3, 13, 1);
						func_46(uParam3, 15, 1);
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 17, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_46(uParam3, 20, 1);
						func_46(uParam3, 21, 1);
						func_46(uParam3, 25, 1);
						func_46(uParam3, 26, 1);
						func_46(uParam3, 27, 1);
						func_46(uParam3, 30, 1);
						func_46(uParam3, 31, 1);
						func_46(uParam3, 32, 1);
						func_46(uParam3, 33, 1);
						func_46(uParam3, 39, 1);
						func_46(uParam3, 37, 1);
						func_46(uParam3, 55, 1);
						func_44(uParam2, 0, 1);
						func_44(uParam2, 2, 1);
						func_44(uParam2, 3, 1);
						func_44(uParam2, 4, 1);
						func_44(uParam2, 6, 1);
						func_44(uParam2, 7, 1);
						func_44(uParam2, 8, 1);
						func_44(uParam2, 11, 1);
						func_44(uParam2, 13, 1);
						func_44(uParam2, 15, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 17, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
						func_44(uParam2, 19, 1);
						func_44(uParam2, 20, 1);
						func_44(uParam2, 21, 1);
						func_44(uParam2, 22, 1);
						func_44(uParam2, 54, 1);
						func_44(uParam2, 24, 1);
						func_44(uParam2, 26, 1);
						func_44(uParam2, 27, 1);
						func_44(uParam2, 28, 1);
						func_44(uParam2, 30, 1);
						func_44(uParam2, 31, 1);
						func_44(uParam2, 32, 1);
						func_44(uParam2, 38, 1);
						func_44(uParam2, 36, 1);
					}
					func_48(uParam4, 3, 1);
					func_48(uParam4, 3, 1);
					func_48(uParam4, 4, 1);
					func_48(uParam4, 14, 1);
					func_48(uParam4, 15, 1);
					func_48(uParam4, 16, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_48(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xECDAB41968FF21A8(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x061B1200C95204CB(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_49()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_51(float fParam0)
{
	func_78(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x28AEB293270C3DDA(0, 172, 1), "CELL_BORDER");
}

void func_52(float fParam0)
{
	if (Global_1945396)
	{
		fParam0 = -1f;
	}
	func_78(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x28AEB293270C3DDA(0, 173, 1), "CELL_FILTER");
}

void func_53()
{
	if (unk_0x42AAFCB5B7854AA9(2) || func_4())
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(0, 183, 1), "CELL_GRID");
	func_78(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
	func_52(5f);
	func_51(6f);
	func_54(7f);
	func_31(8f);
	if (bLocal_62)
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x28AEB293270C3DDA(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_63(14))
	{
		if ((Global_78558 == 0 && unk_0x24B651D85CCE5EB4(joaat("pi_menu")) > 0) && func_62())
		{
			unk_0x9FD96C5DE6EDFC15(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD546F85F5AF0F231(1);
			unk_0x2AF11E92DE43CDE3("CELL_ACTTL");
			unk_0x76B34CBB6F5FA1BB(unk_0x45816CECE89B5B19(&Global_4543282));
			unk_0xF8FCA9E7130CE1C8();
			unk_0xD546F85F5AF0F231(0);
			unk_0xAE3413B0654A0035();
		}
	}
}

void func_54(float fParam0)
{
	func_78(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x28AEB293270C3DDA(0, 175, 1), "CELL_ACCYC");
}

void func_55()
{
	func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(0, 39, 1), "CELL_284");
	func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
	func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x28AEB293270C3DDA(0, 177, 1), "CELL_281");
	func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x28AEB293270C3DDA(0, 176, 1), "CELL_280");
	unk_0x9FD96C5DE6EDFC15(uLocal_141, "SET_MAX_WIDTH");
	unk_0xC49D258FBF3BF214(fLocal_77);
	unk_0xAE3413B0654A0035();
	func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_56()
{
	if (iLocal_156 == 1)
	{
		func_57();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x28AEB293270C3DDA(0, 177, 1), "CELL_281");
		func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x28AEB293270C3DDA(2, 179, 1), func_67());
		if (iLocal_131)
		{
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 2)
				{
					if (unk_0x42AAFCB5B7854AA9(2) || func_4())
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_174())
					{
						func_52(3f);
						func_51(4f);
					}
				}
				else if ((Global_78558 == 0 && unk_0x24B651D85CCE5EB4(joaat("pi_menu")) > 0) && func_62())
				{
					func_53();
				}
				else
				{
					if (unk_0x42AAFCB5B7854AA9(2) || func_4())
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(2, 183, 1), "CELL_GRID");
					func_78(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
					if (func_174())
					{
						func_52(5f);
						func_51(6f);
						if (func_32(1))
						{
							func_31(7f);
							if (bLocal_62)
							{
								func_78(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x28AEB293270C3DDA(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_78(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x28AEB293270C3DDA(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 2)
			{
				if (!unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 2)
				{
					func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(2, 183, 1), "CELL_GRID");
					func_78(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
					func_78(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x28AEB293270C3DDA(0, 39, 1), "CELL_284");
					if (func_174())
					{
						func_52(6f);
						func_51(7f);
						func_78(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x28AEB293270C3DDA(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
					if (func_174())
					{
						func_52(3f);
						func_51(4f);
						func_78(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x28AEB293270C3DDA(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 2)
			{
				if (!func_161())
				{
					if (unk_0x42AAFCB5B7854AA9(2) || func_4())
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				func_78(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x28AEB293270C3DDA(2, 183, 1), "CELL_GRID");
				func_78(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
				func_78(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x28AEB293270C3DDA(0, 39, 1), "CELL_284");
				if (func_174())
				{
					if (!func_161())
					{
						func_52(7f);
						func_51(8f);
						if (bLocal_63)
						{
							func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(0, 182, 1), "CELL_FOCUS");
						}
						func_78(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x28AEB293270C3DDA(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_161())
					{
						if (unk_0x42AAFCB5B7854AA9(2) || func_4())
						{
							func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_1NP_XB");
						}
						else
						{
							func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_1NP_XB");
						}
					}
					func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
					if (func_174())
					{
						if (!func_161())
						{
							func_52(4f);
							func_51(5f);
							func_78(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x28AEB293270C3DDA(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		unk_0x9FD96C5DE6EDFC15(uLocal_141, "SET_MAX_WIDTH");
		unk_0xC49D258FBF3BF214(fLocal_77);
		unk_0xAE3413B0654A0035();
		func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_57()
{
	func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(0, 39, 1), "CELL_284");
	func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_285");
	func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x28AEB293270C3DDA(2, 179, 1), func_67());
	func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x28AEB293270C3DDA(0, 177, 1), "CELL_281");
	unk_0x9FD96C5DE6EDFC15(uLocal_141, "SET_MAX_WIDTH");
	unk_0xC49D258FBF3BF214(fLocal_77);
	unk_0xAE3413B0654A0035();
	func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_58()
{
	if (iLocal_131)
	{
		unk_0xEAB390443C680F72(fLocal_73, 1065353216);
		unk_0xAABD7B0753C5C286(fLocal_74);
	}
}

void func_59(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_4718592.f_160553 == 1)
	{
	}
	else if (Global_4718592.f_160554 == 1)
	{
	}
	else
	{
		unk_0x5A3CE54251FC2A8F(iParam0);
	}
}

void func_60()
{
	if (iLocal_61 == 1)
	{
		if (unk_0x4310A0DB886F9FED(sLocal_19[Global_4541021], "phone_cam12DUMMY"))
		{
			unk_0x2FBEA75DAA5B4D53(0);
			unk_0x2DF93170E1060FE0(0);
		}
		else
		{
			unk_0x2FBEA75DAA5B4D53(1);
			unk_0x2DF93170E1060FE0(1);
		}
	}
}

void func_61()
{
	func_165(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_174())
	{
		if (!Global_1945396)
		{
			unk_0xADD48E9C814DB7CB("phone_cam");
		}
	}
}

int func_62()
{
	if (func_63(14))
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if ((unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[0 /*29*/] || unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[1 /*29*/]) || unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[2 /*29*/])
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
	return 1;
}

bool func_63(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_64(char* sParam0)
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_65()
{
	if (unk_0x42AAFCB5B7854AA9(2) || func_4())
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x42AAFCB5B7854AA9(2))
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(0, 30, 1), "CELL_RT_RSTICK");
		func_78(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xB49FF1EF1051E9DA(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(0, 1, 1), "CELL_RT_RSTICK");
		func_78(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xB49FF1EF1051E9DA(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_66()
{
	if (unk_0x42AAFCB5B7854AA9(2) || func_4())
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x28AEB293270C3DDA(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_78(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xB49FF1EF1051E9DA(0, 1, 1), "CELL_LT_RSTICK");
	if (func_63(14))
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x28AEB293270C3DDA(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x28AEB293270C3DDA(0, 39, 1), "CELL_LT_LSTICKZ");
		func_78(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x28AEB293270C3DDA(2, 30, 1), "CELL_LT_LSTICK");
	}
}

char* func_67()
{
	if (!unk_0x2AC37494BBF1DB16(&Global_1969246))
	{
		return func_77(&Global_1969246);
	}
	if (func_76())
	{
		return "FHHUD_SENDLES";
	}
	if (func_74())
	{
		return "CSH_PHONEC";
	}
	if (func_73(unk_0x93E99A2DBCBA9CFA(), 275) && Global_1969239)
	{
		return "RE_SS_SNDOMG";
	}
	switch (func_72(unk_0x93E99A2DBCBA9CFA()))
	{
		case 14:
		case 3:
		case 7:
		case 8:
		case 12:
		case 2:
		case 15:
			return "TR_SESS_PHTO";
		
		default:
	}
	switch (func_68(unk_0x93E99A2DBCBA9CFA()))
	{
		case 3:
			return "FXR_FRAN_PHTO";
		
		case 2:
			return "FXR_IMAN_PHTO";
		
		default:
	}
	return "CELL_287";
}

int func_68(int iParam0)
{
	if (func_71(iParam0) == 264)
	{
		return func_69(iParam0);
	}
	return -1;
}

int func_69(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

int func_70(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_72(int iParam0)
{
	if (func_71(iParam0) == 271)
	{
		return func_69(iParam0);
	}
	return -1;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < Global_1890386)
	{
		if (Global_1890386[iVar1] == iParam1)
		{
			if (Global_1890444[iVar0 /*129*/].f_77.f_1[iVar1 /*3*/] == 2)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_74()
{
	switch (func_75(unk_0x93E99A2DBCBA9CFA()))
	{
		case 16:
			return 1;
		
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_75(int iParam0)
{
	if (func_71(iParam0) == 256)
	{
		return func_69(iParam0);
	}
	return -1;
}

int func_76()
{
	switch (Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10.f_33)
	{
		case 233:
			switch (Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10.f_182)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10.f_182)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1977436)
	{
		return 1;
	}
	return 0;
}

var func_77(var uParam0)
{
	return uParam0;
}

void func_78(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0x2AC37494BBF1DB16(uParam3))
	{
		func_79(uParam3);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam4))
	{
		func_64(sParam4);
	}
	unk_0xAE3413B0654A0035();
}

void func_79(var uParam0)
{
	unk_0x7DDE71A42D80E8FA(uParam0);
}

void func_80()
{
	if (Global_78558)
	{
		switch (Global_22842)
		{
			case 0:
				if (unk_0x42AAFCB5B7854AA9(2))
				{
					func_160("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_160("CELL_CAM_SELFIE_0", -1);
				}
				Global_22842++;
				break;
			
			case 1:
				if (!unk_0xF0E4B64AC0B5660E())
				{
					if (unk_0x42AAFCB5B7854AA9(2))
					{
						func_160("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_160("CELL_CAM_SELFIE_1", -1);
					}
					Global_22842++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_22841)
		{
			case 0:
				if (unk_0x42AAFCB5B7854AA9(2))
				{
					func_160("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_160("CELL_CAM_SELFIE_0", -1);
				}
				Global_22841++;
				break;
			
			case 1:
				if (!unk_0xF0E4B64AC0B5660E())
				{
					if (unk_0x42AAFCB5B7854AA9(2))
					{
						func_160("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_160("CELL_CAM_SELFIE_1", -1);
					}
					Global_22841++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0x42AAFCB5B7854AA9(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x51EB177CA0562B62(2, iVar10) && !unk_0x51EB177CA0562B62(2, iVar9))
	{
		unk_0x8B438725D591ED78(0, 2, 1);
		unk_0x8B438725D591ED78(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 2)) * 127;
		if (unk_0x42AAFCB5B7854AA9(2))
		{
			if (unk_0x3CDF9E9E483AADE1(iVar0) > 28 || unk_0x3CDF9E9E483AADE1(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (unk_0x3CDF9E9E483AADE1(iVar2) > 28 || unk_0x3CDF9E9E483AADE1(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (unk_0x42AAFCB5B7854AA9(2))
		{
			fVar7 = unk_0xBD6438016C54920C(0, 290);
			fVar8 = unk_0xBD6438016C54920C(0, 291);
			if (unk_0xA12842DEAE51AADE())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x3CDF9E9E483AADE1(iVar0) > 28 || unk_0x3CDF9E9E483AADE1(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_84(fVar5);
		func_83(fVar6);
		func_82(fVar4);
	}
	else if (!unk_0x51EB177CA0562B62(2, iVar9))
	{
		unk_0x3210A569BAF257BB(0, 2, 1);
		unk_0x3210A569BAF257BB(0, 1, 1);
	}
}

void func_82(float fParam0)
{
	fLocal_161 = (fLocal_161 + fParam0);
	if (fLocal_161 > 1f)
	{
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f)
	{
		fLocal_161 = -1f;
	}
	unk_0xFA68D8B3839F27CF(fLocal_161);
}

void func_83(float fParam0)
{
	fLocal_162 = (fLocal_162 + fParam0);
	if (fLocal_162 > 1f)
	{
		fLocal_162 = 1f;
	}
	else if (fLocal_162 < -1f)
	{
		fLocal_162 = -1f;
	}
	unk_0x07E82B3843BE99D3(fLocal_162);
}

void func_84(float fParam0)
{
	fLocal_163 = (fLocal_163 + fParam0);
	if (fLocal_163 > 1f)
	{
		fLocal_163 = 1f;
	}
	else if (fLocal_163 < -1f)
	{
		fLocal_163 = -1f;
	}
	unk_0xA5EFEDE8AD32267B(fLocal_163);
}

void func_85()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0x42AAFCB5B7854AA9(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x51EB177CA0562B62(2, iVar10))
		{
			if (unk_0x87644B1F984197FE(2, 178) && !func_161())
			{
				unk_0xCC6A86062DA4BEDB(0.5f);
				unk_0xCD3C7AFD495AE99F(0.85f);
				unk_0x151BB9C281E3A36B(0.5f);
				unk_0x3CE6102B760F6D79(-0.25f);
				fLocal_157 = 0.5f;
				fLocal_158 = 0.85f;
				fLocal_159 = 0.5f;
				fLocal_160 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0x51EB177CA0562B62(2, iVar10) && !unk_0x51EB177CA0562B62(2, iVar11))
	{
		if (unk_0x87644B1F984197FE(2, 178) && !func_161())
		{
			unk_0xCC6A86062DA4BEDB(0.5f);
			unk_0xCD3C7AFD495AE99F(0.85f);
			unk_0x151BB9C281E3A36B(0.5f);
			unk_0x3CE6102B760F6D79(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		unk_0x8B438725D591ED78(0, 2, 1);
		unk_0x8B438725D591ED78(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 2)) * 127;
		if (unk_0x42AAFCB5B7854AA9(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 39)) * 127;
			fVar8 = unk_0xBD6438016C54920C(0, 290);
			fVar9 = unk_0xBD6438016C54920C(0, 291);
			if (unk_0xA12842DEAE51AADE())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x3CDF9E9E483AADE1(iVar2) > 15 || unk_0x3CDF9E9E483AADE1(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x3CDF9E9E483AADE1(iVar0) > 28 || unk_0x3CDF9E9E483AADE1(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		func_89(fVar6);
		func_88(fVar7);
		func_87(fVar4);
		if (!func_63(14))
		{
			func_86(fVar5);
		}
	}
	else if (!unk_0x992AACDC3C066F55(2, iVar11))
	{
		unk_0x3210A569BAF257BB(0, 2, 1);
		unk_0x3210A569BAF257BB(0, 1, 1);
	}
	if (!unk_0x992AACDC3C066F55(2, iVar10) && !unk_0x992AACDC3C066F55(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBD6438016C54920C(0, 293)) * 127;
		if (unk_0x3CDF9E9E483AADE1(iVar2) > 28 || unk_0x3CDF9E9E483AADE1(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x3CDF9E9E483AADE1(iVar0) > 28 || unk_0x3CDF9E9E483AADE1(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		if (!func_63(14))
		{
			func_86(fVar5);
		}
	}
}

void func_86(float fParam0)
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < 0f)
	{
		fLocal_159 = 0f;
	}
	unk_0x151BB9C281E3A36B(fLocal_159);
}

void func_87(float fParam0)
{
	fLocal_160 = (fLocal_160 + fParam0);
	if (fLocal_160 > 1f)
	{
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f)
	{
		fLocal_160 = -1f;
	}
	unk_0x3CE6102B760F6D79(fLocal_160);
}

void func_88(float fParam0)
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1.5f)
	{
		fLocal_158 = 1.5f;
	}
	else if (fLocal_158 < 0.5f)
	{
		fLocal_158 = 0.5f;
	}
	unk_0xCD3C7AFD495AE99F(fLocal_158);
}

void func_89(float fParam0)
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 2f)
	{
		fLocal_157 = 2f;
	}
	else if (fLocal_157 < -1.7f)
	{
		fLocal_157 = -1.7f;
	}
	unk_0xCC6A86062DA4BEDB(fLocal_157);
}

void func_90()
{
	if (Global_78819 || Global_78820)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_4718592.f_160553 == 0 && Global_4718592.f_160554 == 0)
			{
				unk_0x55CCA1B8F633F628(uLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_127 == 0)
	{
		if (Global_20325)
		{
			if (Global_20584)
			{
				if (iLocal_150 == 0)
				{
					if (Global_20383.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_92(255, 255, 255, 255);
			func_91(0.059f, 0.644f, "CELL_284", 0);
			func_92(255, 255, 255, 255);
			func_91(0.165f, 0.644f, "CELL_285", 0);
			func_92(255, 255, 255, 255);
			func_91(0.275f, 0.75f, "CELL_280", 0);
			func_92(255, 255, 255, 255);
			func_91(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_20325)
	{
	}
	else
	{
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.75f, func_67(), 0);
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.79f, "CELL_286", 0);
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_91(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x1AFC19685A6AF4A9(sParam2);
	unk_0x8E03B3A2F624EF8B(fParam0, fParam1, iParam3);
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xF4621DEB617A5113(0.4f, 0.4f);
	unk_0xD03168FF6874527E(0, 0, 0, 0, 0);
	unk_0x7CC33148FD727621(1, 0, 0, 0, 205);
	unk_0x64A5F6639CD1645D(1);
	unk_0x3EACBAAEB55B5131(0);
	unk_0x4EC989440A6E11DD(iParam0, iParam1, iParam2, iParam3);
}

void func_93()
{
	unk_0xEAB390443C680F72(fLocal_75, 1065353216);
	unk_0xAABD7B0753C5C286(fLocal_76);
}

void func_94()
{
	unk_0x8B438725D591ED78(0, 25, 1);
	unk_0x8B438725D591ED78(0, 44, 1);
	unk_0x8B438725D591ED78(0, 3, 1);
	unk_0x8B438725D591ED78(0, 4, 1);
	unk_0x8B438725D591ED78(0, 5, 1);
	unk_0x8B438725D591ED78(0, 6, 1);
	unk_0x8B438725D591ED78(0, 1, 1);
	unk_0x8B438725D591ED78(0, 2, 1);
	unk_0x8B438725D591ED78(0, 39, 1);
	unk_0x8B438725D591ED78(0, 47, 1);
	unk_0x8B438725D591ED78(0, 56, 1);
}

void func_95()
{
	Local_87 = { Global_20336[Global_20328 /*3*/] };
	if (Global_20325)
	{
		if (func_98())
		{
			unk_0xF756EDB27C588BED(&Local_93);
			Local_87 = { Local_93 };
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		func_1(1);
		if (iLocal_121)
		{
			Local_81.f_0 = (Local_81.f_0 + 12f);
		}
		if (Local_81.f_0 > Local_87.f_0 || Local_81.f_0 == Local_87.f_0)
		{
			Local_81.f_0 = Local_87.f_0;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_81.f_1 = (Local_81.f_1 - 6f);
		}
		if (BitTest(Global_8255, 4))
		{
			if (Local_81.f_1 < (Local_87.f_1 + 15f) || Local_81.f_1 == (Local_87.f_1 + 15f))
			{
				Local_81.f_1 = (Local_87.f_1 + 15f);
				iLocal_122 = 0;
			}
		}
		else if (Local_81.f_1 < (Local_87.f_1 + 10f) || Local_81.f_1 == (Local_87.f_1 + 10f))
		{
			Local_81.f_1 = (Local_87.f_1 + 10f);
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			Local_81.f_2 = (Local_81.f_2 - 10f);
		}
		if (Local_81.f_2 < Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
		{
			Local_81.f_2 = Local_87.f_2;
			iLocal_123 = 0;
		}
		if (func_98() == 0)
		{
			if (BitTest(Global_8255, 4))
			{
				Local_87.f_1 = (Local_87.f_1 + 15f);
			}
			else
			{
				Local_87.f_1 = (Local_87.f_1 + 10f);
			}
			Local_87.f_0 = (Local_87.f_0 - 14f);
		}
		else
		{
			Local_87 = { Global_20329[Global_20328 /*3*/] };
		}
		Local_81 = { Local_87 };
		iLocal_123 = 0;
		iLocal_122 = 0;
		iLocal_121 = 0;
		unk_0x6B2D55EA37C443D5(Local_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			Local_84 = { -90.3f, 0f, 90f };
			unk_0xB9A6388BF8103D8F(Local_84, 0);
			if (!BitTest(Global_8253, 22))
			{
				if (BitTest(Global_8253, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_97();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_96();
				}
				iLocal_100 = 2;
			}
		}
	}
}

void func_96()
{
	func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8254, 28))
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x28AEB293270C3DDA(0, 176, 1), "CELL_286");
	}
	else
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x28AEB293270C3DDA(2, 178, 1), "CELL_277");
		func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x28AEB293270C3DDA(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x9FD96C5DE6EDFC15(uLocal_141, "SET_MAX_WIDTH");
	unk_0xC49D258FBF3BF214(fLocal_77);
	unk_0xAE3413B0654A0035();
	func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_97()
{
	func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8254, 28))
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x28AEB293270C3DDA(2, 179, 1), func_67());
		func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x28AEB293270C3DDA(0, 176, 1), "CELL_286");
	}
	else
	{
		func_78(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x28AEB293270C3DDA(2, 179, 1), func_67());
		func_78(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x28AEB293270C3DDA(2, 178, 1), "CELL_277");
		func_78(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x28AEB293270C3DDA(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x9FD96C5DE6EDFC15(uLocal_141, "SET_MAX_WIDTH");
	unk_0xC49D258FBF3BF214(fLocal_77);
	unk_0xAE3413B0654A0035();
	func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_98()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			if (Global_20326 == 0)
			{
				if (Global_7568 != 128)
				{
					if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
					{
						if (Global_21725 != 2)
						{
						}
					}
				}
			}
		}
		if (func_63(14))
		{
			return 0;
		}
		if (unk_0x8DEE51D44B32DE1F(unk_0xC1A5EC5C986B98AD(), 0))
		{
			return 0;
		}
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (!unk_0xB7D65B9FB14C2AE5())
			{
				if (unk_0x1589BC95A4C50F21(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD()) || unk_0x1774A64AB2C276EF(unk_0xC1A5EC5C986B98AD())) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || (unk_0x9C42F9EEAF66B131(unk_0xC1A5EC5C986B98AD()) && !(BitTest(Global_4718592.f_37, 17) && (unk_0x1758F8A8511510AB() || Global_1926632))))
		{
			return 0;
		}
		if (Global_112696)
		{
			return 0;
		}
	}
	if (Global_78558)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x990C52ABB0EFEBA9();
	iVar1 = unk_0x80A3F4E694565F6A(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xB7D65B9FB14C2AE5()))
	{
		iVar2 = 1;
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				iVar3 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				if ((((((((unk_0x6CEF99E452573979(unk_0x504B9BB48D41C264(iVar3)) || unk_0x9C7BEEE2232D4F8A(unk_0x504B9BB48D41C264(iVar3))) || unk_0x5BCB88597C004FED(unk_0x504B9BB48D41C264(iVar3))) || unk_0x504B9BB48D41C264(iVar3) == joaat("seashark")) || unk_0x504B9BB48D41C264(iVar3) == joaat("seashark2")) || unk_0x504B9BB48D41C264(iVar3) == joaat("rhino")) || unk_0x504B9BB48D41C264(iVar3) == joaat("submersible")) || unk_0x504B9BB48D41C264(iVar3) == joaat("submersible2")) || unk_0x504B9BB48D41C264(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4542575 || iVar2 == 1)
	{
		if (unk_0x24B651D85CCE5EB4(joaat("apptrackify")) > 0 || Global_113648.f_14053.f_89)
		{
			if (unk_0x24B651D85CCE5EB4(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_99()
{
	unk_0x8B438725D591ED78(0, 47, 1);
	unk_0x4150CF46B891FFF5(0, Global_20353);
	Local_84 = { Global_20343 };
	Local_87 = { Global_20336[Global_20328 /*3*/] };
	if (func_98())
	{
		unk_0xB6AD87092EBF0ADD(&Local_90, 0);
		Local_84 = { Local_90 };
		unk_0xF756EDB27C588BED(&Local_93);
		Local_87 = { Local_93 };
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
	}
	if (Global_20325)
	{
		func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(0);
		iLocal_131 = 0;
		if (BitTest(Global_8253, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_100();
		}
		if (iLocal_121)
		{
			if (BitTest(Global_8253, 9))
			{
				Local_81.f_0 = (Local_81.f_0 + 2f);
			}
			else
			{
				Local_81.f_0 = (Local_81.f_0 + 12f);
			}
		}
		if (Local_81.f_0 > Local_87.f_0 || Local_81.f_0 == Local_87.f_0)
		{
			Local_81.f_0 = Local_87.f_0;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_81.f_1 = (Local_81.f_1 - 6f);
		}
		if (Local_81.f_1 < Local_87.f_1 || Local_81.f_1 == Local_87.f_1)
		{
			Local_81.f_1 = Local_87.f_1;
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			Local_81.f_2 = (Local_81.f_2 - 10f);
		}
		if (Local_81.f_2 < Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
		{
			Local_81.f_2 = Local_87.f_2;
			iLocal_123 = 0;
		}
		if (iLocal_123 == 0)
		{
			if (iLocal_118)
			{
				Local_78.f_0 = (Local_78.f_0 + 1f);
			}
			if (Local_78.f_0 > Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
			{
				Local_78.f_0 = Local_84.f_0;
				iLocal_118 = 0;
			}
			if (iLocal_119)
			{
				Local_78.f_1 = (Local_78.f_1 - 2f);
			}
			if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
			{
				Local_78.f_1 = Local_84.f_1;
				iLocal_119 = 0;
			}
			if (iLocal_120)
			{
				Local_78.f_2 = (Local_78.f_2 - 14f);
			}
			if (Local_78.f_2 < Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
			{
				Local_78.f_2 = Local_84.f_2;
				iLocal_120 = 0;
			}
		}
		if (iLocal_126)
		{
			Local_78 = { Local_84 };
			Local_81 = { Local_87 };
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			if (func_98() == 0)
			{
				unk_0xB9A6388BF8103D8F(Local_78, 0);
				unk_0x6B2D55EA37C443D5(Local_81);
			}
			func_115(0, 1);
		}
		else if (func_98() == 0)
		{
			unk_0xB9A6388BF8103D8F(Local_78, 0);
			unk_0x6B2D55EA37C443D5(Local_81);
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_100();
		}
	}
	else
	{
		if (iLocal_118)
		{
			Local_78.f_0 = (Local_78.f_0 + 1f);
		}
		if (Local_78.f_0 > Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 - 2f);
		}
		if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 - 7f);
		}
		if (Local_78.f_2 < Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			iLocal_120 = 0;
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_100();
		}
	}
	unk_0xB9A6388BF8103D8F(Local_78, 0);
}

void func_100()
{
	func_1(0);
	if (func_98() == 0)
	{
		if (BitTest(Global_8253, 30))
		{
			unk_0x6B2D55EA37C443D5(Global_20329[Global_20328 /*3*/]);
		}
		else
		{
			unk_0x6B2D55EA37C443D5(Global_20336[Global_20328 /*3*/]);
		}
		Local_78 = { Local_84 };
		unk_0xB9A6388BF8103D8F(Local_78, 0);
	}
	Global_22758 = 0;
	func_122(0, 0);
	func_126(0);
	iLocal_115 = 0;
	func_117(1);
	Global_20370 = 1;
	Global_22761 = 0;
	if (Global_20383.f_1 > 4)
	{
		Global_20383.f_1 = 6;
		Global_20361 = 1;
		func_101();
	}
	if (unk_0x5FAF55B1F052A2E6(uLocal_140))
	{
		func_164(uLocal_140, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0x063E0F2515867ED4();
	unk_0xD0AE101DBAA43C98(&uLocal_141);
	unk_0xD0AE101DBAA43C98(&uLocal_140);
	if (Global_20586 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, 17);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8253, 17);
	}
	unk_0x061B1200C95204CB(&Global_8253, 18);
	unk_0x061B1200C95204CB(&Global_8253, 21);
	unk_0x4F6F113654DD2FF9(0, 1);
	unk_0x061B1200C95204CB(&Global_8255, 3);
	unk_0x061B1200C95204CB(&Global_4542297, 3);
	unk_0x577AE0048ADA90C8(0);
	unk_0xBED533B930EE6D8E(unk_0x93E99A2DBCBA9CFA(), 1);
	unk_0x833DC7C29EA6EEF3(15);
	Global_22762 = 1;
	unk_0xA13B5B0EF7402391(iLocal_112);
	unk_0x8A1B9F78F1F46A12(iLocal_112);
	unk_0x5E49B93D34BD8FC0();
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x69B06069E38FB537(unk_0xC1A5EC5C986B98AD(), "Mood_Normal_1", 0);
		unk_0x0F2FEB47E011668F(unk_0xC1A5EC5C986B98AD());
	}
	func_117(1);
	unk_0x2FBEA75DAA5B4D53(0);
	unk_0x2DF93170E1060FE0(0);
	unk_0x12B2931464E8FC82(1f);
	if (Global_4541022 > 0 && Global_4541022 < 13)
	{
		unk_0xFBA79BC11313B81D(sLocal_33[Global_4541022]);
	}
	func_115(0, 1);
	if (func_172(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	unk_0x675D9C12C73D3DE7();
}

void func_101()
{
	struct<3> Var0;
	
	if (Global_20366 == 1)
	{
		return;
	}
	if (Global_20383.f_1 < 4)
	{
		return;
	}
	while (!unk_0x5FAF55B1F052A2E6(Global_20364))
	{
		if (Global_78558)
		{
			return;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_20383.f_1)
	{
		case 6:
			func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_109(Global_8858);
			if (Global_8858 == 1)
			{
				func_165(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20387), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20387;
			}
			else
			{
				func_165(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20388), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20388;
			}
			if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20586 == 0)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x061B1200C95204CB(&Global_8253, 17);
			}
			else if (Global_78558)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x061B1200C95204CB(&Global_8253, 17);
			}
			else
			{
				if (Global_20585 == 1)
				{
					if (Global_20371)
					{
						func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20371)
				{
					func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xECDAB41968FF21A8(&Global_8253, 17);
			}
			if (Global_78558)
			{
				func_106();
				unk_0x061B1200C95204CB(&Global_8255, 9);
				func_165(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20387), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_108(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20326)
				{
					func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20382 == 1)
			{
				func_105();
				func_165(Global_20364, "SET_THEME", unk_0xBBDA792448DB5A89(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21738)
				{
					unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(4);
					unk_0xC6A3EF6C4A3412C1(0);
					unk_0xC6A3EF6C4A3412C1(2);
					unk_0x2AF11E92DE43CDE3("CELL_CONDFON");
					unk_0x76B34CBB6F5FA1BB(&Global_21740);
					unk_0xF8FCA9E7130CE1C8();
					func_64("CELL_300");
					func_64("CELL_217");
					func_64("CELL_217");
					unk_0xAE3413B0654A0035();
				}
				else if (func_104(Global_7568, Global_20383) == 0)
				{
					func_108(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_108(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217", &(Global_2028[Global_7568 /*29*/].f_3), 0);
				}
				func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21725 == 4 || Global_21725 == 3)
			{
				func_165(Global_20364, "SET_THEME", unk_0xBBDA792448DB5A89(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_105();
				if (Global_21738)
				{
					unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(4);
					unk_0xC6A3EF6C4A3412C1(0);
					unk_0xC6A3EF6C4A3412C1(2);
					unk_0x2AF11E92DE43CDE3("CELL_CONDFON");
					unk_0x76B34CBB6F5FA1BB(&Global_21740);
					unk_0xF8FCA9E7130CE1C8();
					func_64("CELL_300");
					func_64("CELL_219");
					func_64("CELL_219");
					unk_0xAE3413B0654A0035();
				}
				else
				{
					if (Global_21983)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_104(Global_7568, Global_20383) == 0)
					{
						func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &Var0, &(Global_2028[Global_7568 /*29*/].f_3), 0);
					}
				}
				func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_102();
			break;
		
		default:
			break;
	}
}

void func_102()
{
	if (unk_0x5FAF55B1F052A2E6(Global_20364))
	{
		func_103();
		if (Global_20382 == 1)
		{
			if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21772)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8253, 20))
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
		}
		else
		{
			func_108(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20326)
				{
					func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_103()
{
	if (Global_78558)
	{
		func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x061B1200C95204CB(&Global_8253, 17);
	}
}

int func_104(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

void func_105()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (Global_20383 == 0)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
				
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
				
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
				
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
				
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
				
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
				
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20383 == 1)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
				
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
				
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
				
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
				
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
				
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
				
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20383 == 2)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
				
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
				
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
				
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
				
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
				
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
				
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20383 == 3)
		{
			switch (Global_4542573)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
				
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
				
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
				
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
				
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
				
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
				
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_106()
{
	if (Global_78558)
	{
		if (func_107() == 0)
		{
			return;
		}
		func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xECDAB41968FF21A8(&Global_8253, 17);
	}
}

int func_107()
{
	return 0;
}

void func_108(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x2AC37494BBF1DB16(sParam7))
	{
		func_64(sParam7);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam8))
	{
		func_64(iParam8);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam9))
	{
		func_64(iParam9);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam10))
	{
		func_64(iParam10);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam11))
	{
		func_64(iParam11);
	}
	unk_0xAE3413B0654A0035();
}

void func_109(int iParam0)
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
	
	Global_22793 = 0;
	Global_8858 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8822[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_63(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8260[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8260[iVar1 /*15*/].f_4)
					{
						if (Global_8822[iVar0] == 0)
						{
							Global_8786[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8254, 3))
								{
									iVar2 = 42;
									Global_20588 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20588 = 0;
								}
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(iVar2);
								unk_0xAE3413B0654A0035();
							}
							if (Global_2694519)
							{
								if (iVar1 == 14)
								{
									func_108(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8822[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8260[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8260[iVar1 /*15*/].f_4)
					{
						if (Global_8822[iVar0] == 0)
						{
							Global_8786[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113648.f_14143[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113648.f_14143[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113648.f_14143[iVar3 /*104*/].f_99[Global_20383] == 1)
											{
												Global_22793++;
											}
										}
									}
									iVar3++;
								}
								func_108(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78558)
								{
									iVar4 = 0;
									iVar4 = Global_4541031;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541032[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541032[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541032[iVar5 /*104*/].f_99[Global_20383] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_108(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20383)
									{
										case 0:
											iVar6 = Global_44457;
											break;
										
										case 1:
											iVar6 = Global_44458;
											break;
										
										case 2:
											iVar6 = Global_44459;
											break;
										
										default:
											break;
									}
									func_108(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_108(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(Global_8259);
								unk_0xAE3413B0654A0035();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8254, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(iVar7);
								unk_0xAE3413B0654A0035();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8254, 3))
								{
									iVar8 = 42;
									Global_20588 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20588 = 0;
								}
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(iVar8);
								unk_0xAE3413B0654A0035();
							}
							else if (iVar1 == 8)
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(42);
								unk_0xAE3413B0654A0035();
							}
							else if ((iVar1 == 23 && unk_0x4310A0DB886F9FED(&(Global_8260[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8254, 6))
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(42);
								unk_0xAE3413B0654A0035();
							}
							else if (Global_8260[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890001.f_1;
								func_108(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8822[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_110()
{
	switch (iLocal_100)
	{
		case 1:
			unk_0x4F6F113654DD2FF9(0, 1);
			if (BitTest(Global_8253, 28))
			{
				StringCopy(&cLocal_145, "CELL_296", 16);
				func_56();
			}
			else
			{
				StringCopy(&cLocal_145, "CELL_295", 16);
				func_30();
			}
			break;
		
		case 2:
			if (!BitTest(Global_8253, 22))
			{
				unk_0x4F6F113654DD2FF9(0, 1);
				if (BitTest(Global_8253, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_97();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_96();
				}
				iLocal_100 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_111(bool bParam0)
{
	if (bParam0)
	{
		if (!func_124())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 17);
		}
	}
	else if (func_124())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 17);
	}
}

int func_112(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x87644B1F984197FE(iParam0, uParam1) || (iParam2 == 1 && unk_0xE665ABCFC5784C35(iParam0, iParam1)))
	{
		if (unk_0xCC17806DB0C41C19())
		{
			if (unk_0x6C75193377D3CE17() == 0 || (unk_0xEBDA168F3804CE1F() && unk_0x42AAFCB5B7854AA9(2)))
			{
				return 0;
			}
		}
		if (unk_0xFEE065E56A9BEF3F() || unk_0x47F8B78DC1737D5C())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_113(bool bParam0)
{
	if (bParam0)
	{
		if (!func_114())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 18);
		}
	}
	else if (func_114())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 18);
	}
}

bool func_114()
{
	return BitTest(Global_1962996, 18);
}

void func_115(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_116(0))
		{
			Global_20584 = 1;
			if (bParam1)
			{
				unk_0xF756EDB27C588BED(&Global_20320);
			}
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
	else if (Global_20584 == 1)
	{
		Global_20584 = 0;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
		if (bParam1)
		{
			unk_0x6B2D55EA37C443D5(Global_20320);
		}
		else
		{
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
}

int func_116(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
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
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_117(int iParam0)
{
	if ((Global_4718592.f_160553 == 0 && Global_4718592.f_160554 == 0) && !Global_1945396)
	{
		if (func_118(unk_0x93E99A2DBCBA9CFA()) && iParam0)
		{
			Global_1977509 = 1;
		}
		else
		{
			unk_0xA2EC5ACB2B5D92A4();
		}
	}
}

int func_118(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_120(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_119(Global_2657589[iParam0 /*466*/].f_321.f_7) == 17;
			}
		}
	}
	return 0;
}

int func_119(int iParam0)
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
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
	}
	return -1;
}

int func_120(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x48DC6A21D1CAD89C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_121()
{
	return -1;
}

void func_122(int iParam0, int iParam1)
{
	if (Global_4718592.f_160553 == 1)
	{
	}
	else if (Global_4718592.f_160554 == 1)
	{
	}
	else
	{
		unk_0xC7ED38D178CE2768(iParam0, iParam1);
	}
}

int func_123()
{
	if (BitTest(Global_8253, 15))
	{
		return 1;
	}
	return 0;
}

bool func_124()
{
	return BitTest(Global_1962996, 17);
}

void func_125()
{
	if (Global_20325)
	{
		Local_84 = { -90.3f, 0f, 90f };
		Local_87 = { 1.5f, 0f, -17f };
		if (func_98())
		{
			unk_0xB6AD87092EBF0ADD(&Local_90, 0);
			Local_84 = { Local_90 };
			unk_0xF756EDB27C588BED(&Local_93);
			Local_87 = { Local_93 };
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		if (iLocal_120 == 0)
		{
			if (iLocal_121)
			{
				Local_81.f_0 = (Local_81.f_0 - 14f);
			}
			if (Local_81.f_0 < Local_87.f_0 || Local_81.f_0 == Local_87.f_0)
			{
				iLocal_121 = 0;
			}
			if (iLocal_122)
			{
				Local_81.f_1 = (Local_81.f_1 + 7f);
			}
			if (Local_81.f_1 > Local_87.f_1 || Local_81.f_1 == Local_87.f_1)
			{
				iLocal_122 = 0;
			}
			if (iLocal_123)
			{
				Local_81.f_2 = (Local_81.f_2 + 12f);
			}
			if (Local_81.f_2 > Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
			{
				iLocal_123 = 0;
			}
		}
		if (iLocal_118)
		{
			Local_78.f_0 = (Local_78.f_0 - 1f);
		}
		if (Local_78.f_0 < Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
		{
			Local_78.f_0 = Local_84.f_0;
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 - 0.5f);
		}
		if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			Local_78.f_1 = Local_84.f_1;
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 + 11f);
		}
		if (Local_78.f_2 > Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			Local_78.f_2 = Local_84.f_2;
			iLocal_120 = 0;
		}
		if (func_98() == 0)
		{
			unk_0xB9A6388BF8103D8F(Local_78, 0);
			unk_0x6B2D55EA37C443D5(Local_81);
		}
	}
	else
	{
		Local_84 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_118)
		{
			Local_78.f_0 = (Local_78.f_0 - 1f);
		}
		if (Local_78.f_0 < Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 + 2f);
		}
		if (Local_78.f_1 > Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 + 7f);
		}
		if (Local_78.f_2 > Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			iLocal_120 = 0;
		}
		unk_0xB9A6388BF8103D8F(Local_78, 0);
	}
	if (Global_20325)
	{
		if (((((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0) && iLocal_123 == 0)
		{
			if (func_98())
			{
			}
			else
			{
				Local_78 = { Local_84 };
				unk_0xB9A6388BF8103D8F(Local_78, 0);
				Local_81 = { Local_87 };
				unk_0x6B2D55EA37C443D5(Local_81);
			}
			if (iLocal_103 == 0)
			{
				Global_22759 = 0;
				func_122(1, 1);
				iLocal_115 = 1;
				func_126(1);
				func_61();
				func_127();
				func_59(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_142 = 1;
				iLocal_143 = 1;
				func_144();
				func_165(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!BitTest(Global_4542297, 2))
				{
					func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_165(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				func_167();
			}
		}
	}
	else if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
	{
		Local_78 = { Local_84 };
		unk_0xB9A6388BF8103D8F(Local_78, 0);
		Global_22759 = 0;
	}
}

void func_126(bool bParam0)
{
	if (func_174())
	{
		if (bParam0)
		{
			if (!unk_0xD3CB74FBD1A538A0())
			{
				unk_0xE728ED3E68D681A2(1);
				if (Global_4541022 > 0 && Global_4541022 < 99)
				{
					unk_0x9349155F78E899AF(sLocal_33[Global_4541022], 0);
					unk_0x12B2931464E8FC82(0.25f);
				}
			}
		}
		else if (unk_0xD3CB74FBD1A538A0())
		{
			unk_0xE728ED3E68D681A2(0);
		}
	}
}

void func_127()
{
	if (Global_4541021 > 0 && Global_4541021 < 99)
	{
		if (!Global_1945396)
		{
			unk_0xADD48E9C814DB7CB(sLocal_19[Global_4541021]);
		}
	}
}

void func_128()
{
	if (Global_20325)
	{
		iLocal_125 = 0;
		func_61();
		func_115(1, 1);
		func_122(1, 1);
		iLocal_115 = 1;
		Global_22762 = 1;
	}
}

void func_129()
{
	if (Global_4718592.f_160553 == 1 && func_130())
	{
		return;
	}
	if (iLocal_127 == 0)
	{
		if (BitTest(Global_8253, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_56();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_30();
		}
		if (unk_0x4310A0DB886F9FED(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

int func_130()
{
	if ((((((func_139() || func_138()) || func_137()) || func_136()) || func_135()) || func_133()) || func_131())
	{
		return 1;
	}
	if (unk_0x1758F8A8511510AB() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_131()
{
	return func_132(Global_4718592.f_113724);
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31715[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_133()
{
	return func_134(Global_4718592.f_113724);
}

int func_134(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31051[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_135()
{
	return Global_2683862.f_24;
}

var func_136()
{
	return Global_2683862.f_21;
}

var func_137()
{
	return Global_2683862.f_19;
}

var func_138()
{
	return Global_2683862.f_18;
}

var func_139()
{
	return Global_2683862.f_17;
}

void func_140()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Back", &Global_20372, 1);
	}
}

void func_141()
{
	unk_0x439E1DB93055D9F3(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_142()
{
	func_143();
}

void func_143()
{
	if (iLocal_151)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_151 = 0;
		}
	}
	if (iLocal_151 == 0)
	{
	}
}

void func_144()
{
	if (Global_20383.f_1 > 3)
	{
		if (!unk_0xFEE065E56A9BEF3F())
		{
			unk_0x20C68F87D0FDD976(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_145()
{
	if (func_63(14))
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_13();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

void func_146(int iParam0)
{
	if (func_148())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_161())
		{
			func_115(1, 1);
		}
		else
		{
			func_115(0, 0);
		}
	}
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
	{
		unk_0xECDAB41968FF21A8(&Global_8254, 16);
	}
	if (unk_0xE444FD7526C8BB46())
	{
		unk_0xD6625E11483B2324(0);
	}
	Global_21725 = 5;
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8253, 30);
	}
	if (!func_147())
	{
		Global_20383.f_1 = 3;
	}
}

int func_147()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_148()
{
	return BitTest(Global_1962996, 19);
}

void func_149()
{
	unk_0x8B438725D591ED78(0, 0, 1);
	unk_0x8B438725D591ED78(0, 56, 1);
	if (iLocal_150 == 0)
	{
		unk_0x4150CF46B891FFF5(0, Global_20356);
		unk_0x4150CF46B891FFF5(0, Global_20353);
		unk_0x8B438725D591ED78(0, 278, 1);
		unk_0x8B438725D591ED78(0, 279, 1);
		unk_0x8B438725D591ED78(0, 280, 1);
		unk_0x8B438725D591ED78(0, 281, 1);
		unk_0x8B438725D591ED78(0, 282, 1);
		unk_0x8B438725D591ED78(0, 282, 1);
		unk_0x8B438725D591ED78(0, 284, 1);
		unk_0x8B438725D591ED78(0, 285, 1);
		unk_0x8B438725D591ED78(0, 69, 1);
		unk_0x8B438725D591ED78(0, 70, 1);
		unk_0x8B438725D591ED78(0, 114, 1);
		unk_0x8B438725D591ED78(0, 71, 1);
		unk_0x8B438725D591ED78(0, 72, 1);
		unk_0x8B438725D591ED78(0, 74, 1);
		unk_0x8B438725D591ED78(0, 75, 1);
		unk_0x8B438725D591ED78(0, 76, 1);
		unk_0x8B438725D591ED78(0, 73, 1);
		unk_0x8B438725D591ED78(0, 77, 1);
		unk_0x8B438725D591ED78(0, 78, 1);
		unk_0x8B438725D591ED78(0, 286, 1);
		unk_0x8B438725D591ED78(0, 287, 1);
		unk_0x8B438725D591ED78(0, 79, 1);
		unk_0x8B438725D591ED78(0, 80, 1);
		unk_0x8B438725D591ED78(0, 81, 1);
		unk_0x8B438725D591ED78(0, 82, 1);
		unk_0x8B438725D591ED78(0, 86, 1);
		unk_0x8B438725D591ED78(0, 59, 1);
		unk_0x8B438725D591ED78(0, 60, 1);
		unk_0x8B438725D591ED78(0, 61, 1);
		unk_0x8B438725D591ED78(0, 62, 1);
		unk_0x8B438725D591ED78(0, 63, 1);
		unk_0x8B438725D591ED78(0, 64, 1);
		unk_0x8B438725D591ED78(0, 87, 1);
		unk_0x8B438725D591ED78(0, 88, 1);
		unk_0x8B438725D591ED78(0, 89, 1);
		unk_0x8B438725D591ED78(0, 90, 1);
		unk_0x8B438725D591ED78(0, 107, 1);
		unk_0x8B438725D591ED78(0, 108, 1);
		unk_0x8B438725D591ED78(0, 109, 1);
		unk_0x8B438725D591ED78(0, 110, 1);
		unk_0x8B438725D591ED78(0, 111, 1);
		unk_0x8B438725D591ED78(0, 112, 1);
		unk_0x8B438725D591ED78(0, 113, 1);
		unk_0x8B438725D591ED78(0, 114, 1);
		unk_0x8B438725D591ED78(0, 91, 1);
		unk_0x8B438725D591ED78(0, 92, 1);
		unk_0x8B438725D591ED78(0, 68, 1);
		unk_0x8B438725D591ED78(0, 102, 1);
		unk_0x8B438725D591ED78(0, 136, 1);
		unk_0x8B438725D591ED78(0, 137, 1);
		unk_0x8B438725D591ED78(0, 138, 1);
		unk_0x8B438725D591ED78(0, 139, 1);
		unk_0x8B438725D591ED78(0, 102, 1);
	}
}

int func_150()
{
	var uVar0;
	
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0x9CFCDD9C62B56708(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0xA66E176E5772E965(uVar0, -1, 0) == unk_0xC1A5EC5C986B98AD())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_151()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 1;
		}
	}
	if (func_158())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_157())
	{
		return 1;
	}
	if (func_156(159))
	{
		if (!func_155())
		{
			return 1;
		}
	}
	if (func_156(157))
	{
		return 1;
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 1;
	}
	if (func_152() != 0)
	{
		if (unk_0x24B651D85CCE5EB4(func_152()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_152()
{
	switch (func_154())
	{
		case 0:
			return func_153();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_153()
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_154()
{
	return Global_32163;
}

bool func_155()
{
	return Global_2683862.f_698;
}

int func_156(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_157()
{
	return Global_2694524;
}

bool func_158()
{
	return Global_2683862.f_693;
}

void func_159()
{
	if (iLocal_156 == 1)
	{
		unk_0xEDECDDE17C1E41F5(7);
		unk_0xEDECDDE17C1E41F5(1);
		unk_0xEDECDDE17C1E41F5(3);
		unk_0xEDECDDE17C1E41F5(4);
		unk_0xEDECDDE17C1E41F5(6);
		unk_0xEDECDDE17C1E41F5(8);
		unk_0xEDECDDE17C1E41F5(9);
		unk_0xEDECDDE17C1E41F5(2);
	}
	else
	{
		unk_0xE288789FFB1A0C2F();
	}
}

void func_160(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

bool func_161()
{
	return BitTest(Global_1962996, 5);
}

void func_162()
{
	if (func_163())
	{
		unk_0xBF8900ECCC35F55C();
		if (unk_0xED7229D7E32106FF(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_22762 = 1;
			Global_20383.f_1 = 3;
			unk_0x5E49B93D34BD8FC0();
		}
	}
	else
	{
		iLocal_109 = 0;
		iLocal_110 = 0;
		if (iLocal_104 == 1)
		{
			if (iLocal_127 == 0)
			{
				if (unk_0x5FAF55B1F052A2E6(uLocal_140))
				{
					if (func_174())
					{
						if (Global_4541022 == 0)
						{
							if (!BitTest(Global_4542297, 2))
							{
								func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_165(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!BitTest(Global_4542297, 2))
						{
							func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_165(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x5FAF55B1F052A2E6(uLocal_140))
			{
				func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_165(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		unk_0x5E49B93D34BD8FC0();
	}
}

int func_163()
{
	if (Global_4718592.f_160553 == 1)
	{
		if (Global_78558)
		{
			return 0;
		}
	}
	if (Global_4718592.f_160554 == 1)
	{
		if (Global_78558)
		{
			return 0;
		}
	}
	if (unk_0xCCE9BCDAB8B7FAED() || unk_0x674D69D3896862C7())
	{
		if (BitTest(Global_8254, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_164(var uParam0, char* sParam1)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	unk_0xAE3413B0654A0035();
}

void func_165(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xAE3413B0654A0035();
}

int func_166()
{
	if (Global_78558)
	{
		Global_20383 = 3;
	}
	else
	{
		Global_20383 = func_13();
	}
	if (Global_20383 > 3)
	{
		Global_20383 = 3;
	}
	return Global_113648.f_14053[Global_20383 /*20*/].f_7;
}

void func_167()
{
	if (Global_20383.f_1 > 3)
	{
		Global_20383.f_1 = 8;
	}
	Global_22761 = 0;
	iLocal_127 = 0;
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		Local_67 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
	}
	if (Global_20325)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_137)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_144();
			func_94();
			unk_0x063E0F2515867ED4();
		}
		func_164(uLocal_140, "OPEN_SHUTTER");
		func_159();
		func_129();
		iLocal_129 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_122(1, 1);
		func_126(1);
		func_61();
		func_127();
		func_59(0);
		iLocal_115 = 1;
	}
}

void func_168(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, 15);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8253, 15);
	}
}

bool func_169(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

int func_170(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		if (unk_0x3C3D6D026CF7F51B(iParam0, iParam1))
		{
			uVar0 = unk_0x95DC39736F6748E3(iParam0, iParam1);
			if (unk_0x7DE17ACDD8BA2642(uVar0))
			{
				iVar1 = unk_0xB47599824058F1C1(unk_0x504B9BB48D41C264(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x9CFCDD9C62B56708(iVar0, iVar3, 0))
					{
						if (unk_0xA66E176E5772E965(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_171()
{
}

int func_172(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x39D9A0A5E812BD25() != iParam0 && bParam2)
		{
			unk_0xA740EFFFBB4FED55(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_173()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (unk_0xC29B1DE5CA9282CB(unk_0xC1A5EC5C986B98AD()))
		{
			unk_0x0002182D625AEFEA(unk_0xC1A5EC5C986B98AD(), 0, 0);
			unk_0xCC6A86062DA4BEDB(fLocal_157);
			unk_0xCD3C7AFD495AE99F(fLocal_158);
			unk_0x151BB9C281E3A36B(fLocal_159);
		}
		else
		{
			unk_0xCC6A86062DA4BEDB(fLocal_157);
			unk_0xCD3C7AFD495AE99F(fLocal_158);
			unk_0x151BB9C281E3A36B(fLocal_159);
		}
	}
	unk_0x3CE6102B760F6D79(fLocal_160);
	unk_0xFA68D8B3839F27CF(fLocal_161);
	unk_0x07E82B3843BE99D3(fLocal_162);
	unk_0xA5EFEDE8AD32267B(fLocal_163);
	func_58();
}

int func_174()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return 1;
}

