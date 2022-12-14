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
	unk_0x3F57BEDBC381CBC7();
	if (unk_0xE2F2D76A4AA269FF() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_173())
	{
		Global_4539953 = 99;
		Global_4539954 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_4539953 = 0;
		Global_4539954 = 0;
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
	func_172();
	if (func_171(1, 1, !iLocal_64, 1))
	{
		iLocal_64 = 1;
	}
	func_170();
	iLocal_112 = unk_0xA9ADCC8D104AA552();
	if (Global_20211 == 0)
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
	Global_22638 = 0;
	Global_22639 = 0;
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (unk_0xA476005B8C3EEAEB(unk_0xE2D3D51028F0428A()))
		{
			Global_22638 = 1;
		}
		if (unk_0xBF97536EEDB58CBD())
		{
			Global_22638 = 1;
		}
		if (unk_0x55A0C756C4A8220C(unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A()), 0))
		{
			Global_22638 = 1;
		}
		if (unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1))
		{
			Global_22638 = 1;
		}
		if (unk_0x2852E016E0AC134C(unk_0xE2D3D51028F0428A()))
		{
			Global_22638 = 1;
		}
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_22638 = 1;
			}
			uLocal_149 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if ((((unk_0x15CAA6D7B11F1A7C(uLocal_149) == joaat("rhino") || unk_0x15CAA6D7B11F1A7C(iLocal_149) == joaat("cutter")) || unk_0x15CAA6D7B11F1A7C(iLocal_149) == joaat("submersible")) || unk_0x15CAA6D7B11F1A7C(iLocal_149) == joaat("khanjali")) || (unk_0x15CAA6D7B11F1A7C(iLocal_149) == joaat("barrage") && unk_0x38B74904557F43CC(iLocal_149, func_169(unk_0xE2D3D51028F0428A(), 1))))
			{
				Global_22638 = 1;
			}
			else if (unk_0xAB793EA186AB8DAA(iLocal_149, -1, 0) == unk_0xE2D3D51028F0428A())
			{
				if (unk_0x90544F2E01A178CD(iLocal_149) > 0f)
				{
					if (!Global_78319)
					{
						if (!func_168(0))
						{
							unk_0xCD41D6F721CB9C3A(unk_0xE2D3D51028F0428A(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_78319)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0xF82507EBD42C6070(unk_0x9E2D6C50374FCFA9(), 0);
		}
	}
	unk_0xB0550BC91B0159D6(&Global_8136, 21);
	func_167(0);
	unk_0xCED9E32812D6C7C7(&Global_8136, 17);
	if (Global_20208 == 0)
	{
		func_166();
	}
	else
	{
		uLocal_140 = unk_0x528279F3F1EEF869("camera_gallery");
		uLocal_141 = unk_0x528279F3F1EEF869("instructional_buttons");
		while (!unk_0x0347CCBD719C8ADC(uLocal_140) || !unk_0x0347CCBD719C8ADC(uLocal_141))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x16E09CCC0BD508DA();
			unk_0x7653D561C9574763(0, 25, 1);
		}
		if (Global_78319)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_165())
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
		func_164(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
		func_163(uLocal_140, "CLOSE_SHUTTER");
		unk_0xEA5DEA46C3EE64D3(Global_20247, "DISPLAY_VIEW");
		unk_0x4F47E317C74C543B(16);
		unk_0x6F06CF0E9AB02847();
	}
	Local_78 = { Global_20226 };
	Local_81 = { Global_20219[Global_20211 /*3*/] };
	Global_22639 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_20266.f_1 > 3)
	{
		Global_20266.f_1 = 8;
	}
	if (iLocal_131 == 0)
	{
		unk_0xB0550BC91B0159D6(&Global_8138, 3);
	}
	func_161();
	unk_0x2E04B7B46A3670E5(4);
	if (unk_0x07A5E5231705659C())
	{
	}
	if (Global_4718592.f_163007)
	{
	}
	if (Global_4718592.f_163009 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x07899AAA5D680386(0, Global_20235);
		unk_0x07899AAA5D680386(0, 186);
		unk_0x16E09CCC0BD508DA();
		unk_0x7653D561C9574763(0, 25, 1);
		unk_0x7653D561C9574763(0, 0, 1);
		if (func_160())
		{
			if (!BitTest(Global_4541229, 2))
			{
				unk_0xCED9E32812D6C7C7(&Global_4541229, 2);
				func_164(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_113386.f_14051.f_81)
		{
			if (!BitTest(Global_4541229, 13))
			{
				if (!unk_0xF847447D4467709D())
				{
					if (!BitTest(Global_8137, 28))
					{
						if ((iLocal_128 && iLocal_131 == 0) && !func_160())
						{
							unk_0xCED9E32812D6C7C7(&Global_4541229, 13);
							Global_113386.f_14051.f_81 = 1;
							func_159("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xF1EC2C71FD1371B8())
		{
			if (Global_4718592.f_163006 == 0 && Global_4718592.f_163007 == 0)
			{
				unk_0xE73F8CB95153F5B1(15, 0f, -0.0375f);
			}
			unk_0xAC765EF46E85A446(7);
			func_158();
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 200, 1);
			}
			unk_0x7653D561C9574763(0, 44, 1);
			unk_0x7653D561C9574763(0, 47, 1);
			unk_0x7653D561C9574763(0, 91, 1);
			unk_0x7653D561C9574763(0, 92, 1);
			unk_0x7653D561C9574763(0, 68, 1);
			if (iLocal_150 == 0)
			{
				unk_0x07899AAA5D680386(0, Global_20239);
			}
			unk_0x07899AAA5D680386(0, Global_20236);
			if ((unk_0xA829C9A2767AC8EF() || unk_0xCB1EF1E7B77ADF4C()) && !func_160())
			{
				iLocal_130 = 1;
				Global_20266.f_1 = 3;
				unk_0x27F66B7FE7DB7C3A(0);
			}
			if (unk_0xBF6119A4AD89EF09())
			{
				Global_20266.f_1 = 3;
				unk_0x27F66B7FE7DB7C3A(0);
			}
			if (BitTest(Global_8137, 3))
			{
				Global_20266.f_1 = 3;
				unk_0x27F66B7FE7DB7C3A(0);
			}
			if (unk_0x9315DBF7D972F07A())
			{
				if (func_150())
				{
					Global_20266.f_1 = 3;
					unk_0x27F66B7FE7DB7C3A(0);
				}
			}
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x1CFDD57741085128(unk_0xE2D3D51028F0428A(), 0))
				{
					Global_20266.f_1 = 3;
					unk_0x27F66B7FE7DB7C3A(0);
				}
				if ((unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0x55E78B6AAFEF4EB8(unk_0x9E2D6C50374FCFA9()))
				{
					if (func_149())
					{
					}
					else
					{
						Global_20266.f_1 = 3;
						unk_0x27F66B7FE7DB7C3A(0);
					}
				}
				if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
				{
					if (Global_78319 == 1)
					{
						Global_20266.f_1 = 3;
					}
				}
				if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x1CC29FEB3B8D48E8(unk_0xE2D3D51028F0428A()) > 0.3f)
					{
						Global_20266.f_1 = 3;
					}
				}
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					func_148();
					iLocal_149 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x90544F2E01A178CD(iLocal_149) < 0f)
					{
						func_145(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!unk_0xFB59E5247FB6B7F9())
							{
								func_145(0);
							}
						}
						else if (!unk_0xFB59E5247FB6B7F9())
						{
							iLocal_116 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0x16E09CCC0BD508DA();
						}
					}
				}
				else if (Global_78319 == 0)
				{
					if (BitTest(Global_8136, 18))
					{
						func_144();
						if ((Global_20266 == 0 || Global_20266 == 1) || Global_20266 == 2)
						{
							if (!unk_0xE7B380B27E19C446(unk_0xE2D3D51028F0428A()))
							{
								if (unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
								{
								}
								else
								{
									Global_20266.f_1 = 3;
									unk_0x27F66B7FE7DB7C3A(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_142)
			{
				func_143();
			}
			if (Global_20266.f_1 < 4)
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
							if (Global_20266.f_1 > 3)
							{
								if (iLocal_150)
								{
									func_141();
									if (Global_22643 == 0 && Global_22640 == 6)
									{
										unk_0xD4DF0F443B8FD284(0, 1);
										unk_0xBE3AC6D6682E4A5E();
										iLocal_150 = 0;
										func_140();
										if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
										{
											Local_67 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
										}
										func_139();
										iLocal_109++;
										if (func_173())
										{
											func_164(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_164(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_128();
									}
									if (Global_22640 == 0)
									{
										iLocal_150 = 0;
										unk_0xBE3AC6D6682E4A5E();
										if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
										{
											Local_67 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
										}
										func_127();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_128();
										if (func_173())
										{
											if (Global_4539954 == 0)
											{
												if (!BitTest(Global_4541229, 2))
												{
													func_164(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!BitTest(Global_4541229, 2))
										{
											func_164(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_126();
										func_125(1);
									}
								}
								else if (Global_20266.f_1 != 9)
								{
									if (Global_22639 == 1)
									{
										if (Global_22638 == 0)
										{
											func_124();
										}
									}
									else if ((Global_8744 - Global_8743) > Global_8745)
									{
										if (unk_0xA829C9A2767AC8EF() && func_123())
										{
											if (func_122() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0x27F66B7FE7DB7C3A(0);
												unk_0xF889BDFCC181BA9F(iLocal_112);
												iLocal_143 = 0;
												if (Global_22638 == 0)
												{
													func_139();
													Global_22638 = 1;
													unk_0xD4DF0F443B8FD284(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_121(0, 0);
													func_125(0);
													iLocal_115 = 0;
													func_116(1);
													iLocal_142 = 0;
													func_114(0, 1);
													func_164(Global_20247, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_112(1);
												}
											}
										}
										if (func_111(2, Global_20234, 0))
										{
											if (func_160())
											{
												if (((Global_1931426 || Global_1574964) || Global_22641) || BitTest(Global_8136, 21))
												{
												}
												else if (func_122() && iLocal_127)
												{
												}
												else if (!func_123())
												{
													if (iLocal_127 == 0)
													{
														unk_0x859006DB870314C5(500);
														iLocal_143 = 0;
														func_114(1, 1);
														func_110(1);
													}
												}
											}
											else if (func_122() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0x27F66B7FE7DB7C3A(0);
												unk_0xF889BDFCC181BA9F(iLocal_112);
												iLocal_143 = 0;
												if (Global_22638 == 0)
												{
													func_139();
													Global_22638 = 1;
													unk_0xD4DF0F443B8FD284(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_121(0, 0);
													func_125(0);
													iLocal_115 = 0;
													func_116(1);
													iLocal_142 = 0;
													func_114(0, 1);
													func_164(Global_20247, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (unk_0xF847447D4467709D())
										{
											func_109();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0xF847447D4467709D())
									{
										func_109();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (BitTest(Global_8136, 28))
										{
											func_109();
											iLocal_102 = 1;
										}
									}
									else if (!BitTest(Global_8136, 28))
									{
										func_109();
										iLocal_102 = 0;
									}
									if (Global_22638 == 1)
									{
										func_98();
									}
									else if (Global_20266.f_1 > 4)
									{
										if (iLocal_124 == 1 && iLocal_125 == 0)
										{
											func_94();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1)
										{
											func_127();
											if (iLocal_136 == 1 || iLocal_136 == 0)
											{
												if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
												{
													if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
													{
														func_163(uLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = unk_0x320D1840B6DAA1CC();
														while (unk_0x320D1840B6DAA1CC() < (iLocal_135 + iLocal_137) && Global_20266.f_1 > 3)
														{
															func_158();
															func_143();
															func_93();
															unk_0x16E09CCC0BD508DA();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_173())
												{
													if (Global_4539954 == 0)
													{
														if (!BitTest(Global_4541229, 2))
														{
															func_164(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!BitTest(Global_4541229, 2))
												{
													func_164(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_143();
												func_158();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_128();
												iLocal_136 = 0;
												func_163(uLocal_140, "OPEN_SHUTTER");
											}
											func_126();
											func_125(1);
											func_92();
										}
									}
									if (iLocal_143 == 1)
									{
										func_89();
									}
									if (iLocal_129)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_128 = 1;
											iLocal_129 = 0;
											unk_0xCED9E32812D6C7C7(&Global_8136, 18);
											if (Global_22638 == 0)
											{
												func_114(1, 1);
											}
										}
									}
									if (iLocal_127 == 0)
									{
										if (iLocal_128 && Global_22638 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_22641 == 0)
											{
												func_12();
											}
										}
										else
										{
											func_93();
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
					if (Global_20266.f_1 > 3)
					{
						if (Global_22639 == 1)
						{
							if (Global_22638 == 0)
							{
								func_124();
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
					if (unk_0xDFC67688F9088B45() || func_5())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0x527312C0DF85960A() || func_4())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0x8FE9914D4872D601())
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
					iVar0 = unk_0xF715B6DB99DB6ACC();
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
					if (unk_0xF09A4F413B0D30EB(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_114(0, 1);
					}
					if (unk_0xF09A4F413B0D30EB(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (unk_0x26009F50A14AD073(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_114(0, 1);
							iLocal_154 = 0;
							unk_0x6E6999B535C86055("Gallery");
							unk_0x7BFF54DBEAD33DA7();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (func_4())
					{
						if (unk_0xF09A4F413B0D30EB(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_114(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (unk_0xF09A4F413B0D30EB(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_114(0, 1);
						iLocal_111 = 0;
					}
					if (!func_4())
					{
						if (unk_0xF09A4F413B0D30EB(2, Global_20238))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_114(0, 1);
							if (BitTest(Global_8137, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = unk_0x320D1840B6DAA1CC();
							unk_0x7EE945726AFADACF(1);
						}
					}
				}
				else if (unk_0xF09A4F413B0D30EB(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_114(0, 1);
				}
			}
		}
		iLocal_108 = unk_0x320D1840B6DAA1CC();
		if (func_160())
		{
			if (!BitTest(Global_4541229, 2))
			{
				unk_0xCED9E32812D6C7C7(&Global_4541229, 2);
				func_164(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_121(0, 0);
			func_125(0);
			iLocal_115 = 0;
			func_116(1);
			Global_22638 = 0;
			Global_22639 = 0;
			Global_22641 = 0;
			unk_0x705B098546DEB18A(&uLocal_140);
			unk_0x705B098546DEB18A(&uLocal_141);
			unk_0x27F66B7FE7DB7C3A(0);
			if (Global_20466 == 1)
			{
				unk_0xCED9E32812D6C7C7(&Global_8136, 17);
			}
			else
			{
				unk_0xB0550BC91B0159D6(&Global_8136, 17);
			}
			unk_0xD4DF0F443B8FD284(0, 1);
			unk_0xF82507EBD42C6070(unk_0x9E2D6C50374FCFA9(), 1);
			unk_0xB0550BC91B0159D6(&Global_8138, 3);
			unk_0xB0550BC91B0159D6(&Global_4541229, 3);
			unk_0x4FEF096D3AB4AA8C(15);
			Global_22642 = 1;
			unk_0xF889BDFCC181BA9F(iLocal_112);
			unk_0xCDBCC1BC1184B002(iLocal_112);
			unk_0xBE3AC6D6682E4A5E();
			func_116(1);
			unk_0x3CDDEB389E6F7E65(0);
			unk_0x78D4941E4DBEDF3C(0);
			unk_0x3DF0D49DDCC957A5(1f);
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), "Mood_Normal_1", 0);
				unk_0x12FAE55D27F5BC42(unk_0xE2D3D51028F0428A());
			}
			if (Global_4539954 > 0 && Global_4539954 < 13)
			{
				unk_0x861D35D42CFD2991(sLocal_33[Global_4539954]);
			}
			unk_0xB0550BC91B0159D6(&Global_8136, 18);
			if (func_160())
			{
				func_114(1, 1);
			}
			else
			{
				func_114(0, 1);
			}
			if (func_171(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			unk_0xAFBDF6A5E54114C1();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x2374AA601C2C4709(1);
		}
		else if (Global_20266.f_1 > 3)
		{
			unk_0x2374AA601C2C4709(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x47E529DA87615548();
	iVar1 = unk_0x4DE6A646AFB7CF5C(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4541507 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 3) || Global_20266.f_1 == 0) || Global_20210 == 1)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

bool func_4()
{
	return (unk_0xA7384DAD7CF469DA() || unk_0x807ABE1AB65C24D2());
}

bool func_5()
{
	return (unk_0x3EBD3AF4E5D7A08C() || unk_0xC545AB1CF97ABB34());
}

void func_6()
{
	iLocal_106 = unk_0x78BB5808602D08AA(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = unk_0x08B0CE958E38AC0D();
			iLocal_110 = unk_0x468404757B8A82C2();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (unk_0x0347CCBD719C8ADC(uLocal_140))
					{
						if (func_173())
						{
							if (Global_4539954 == 0)
							{
								if (!BitTest(Global_4541229, 2))
								{
									func_164(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_164(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!BitTest(Global_4541229, 2))
							{
								func_164(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_164(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x0347CCBD719C8ADC(uLocal_140))
				{
					func_164(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_164(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			unk_0xBE3AC6D6682E4A5E();
			break;
		
		case 1:
			if (!unk_0xABF37173278F2C66())
			{
				unk_0x65F03588435FE39B("CELL_SPINNER2");
				unk_0xA22CDE353F373A10(1);
			}
			break;
		
		case 2:
			if (BitTest(Global_8137, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = 0;
				iLocal_110 = 0;
			}
			else
			{
				Global_20266.f_1 = 3;
				Global_22642 = 1;
			}
			unk_0xBE3AC6D6682E4A5E();
			break;
	}
}

void func_7()
{
	if (func_111(2, Global_20235, 0))
	{
		func_1(0);
		if (BitTest(Global_8137, 28))
		{
			unk_0x27F66B7FE7DB7C3A(0);
			unk_0x5AE11BC36633DE4E(0);
			func_140();
			iLocal_127 = 0;
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				Local_67 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			}
			func_139();
			iLocal_136 = 1;
		}
		else if (func_11())
		{
			if (BitTest(Global_8137, 14))
			{
				func_159("CELL_299", -1);
			}
			else
			{
				func_139();
				func_10();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_114(1, 1);
		}
	}
	if (BitTest(Global_8136, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_158();
			unk_0x16E09CCC0BD508DA();
			func_93();
			func_148();
			func_143();
		}
		unk_0x27F66B7FE7DB7C3A(0);
		func_140();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_127 = 0;
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			Local_67 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		}
		func_128();
		func_139();
	}
	if (func_111(2, Global_20239, 0))
	{
		func_1(0);
		if (func_122() || BitTest(Global_8137, 28))
		{
		}
		else
		{
			unk_0x27F66B7FE7DB7C3A(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_136 = 1;
			func_140();
			iLocal_127 = 0;
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				Local_67 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			}
			func_139();
		}
	}
	if (BitTest(Global_8136, 28))
	{
		if (func_111(2, Global_20238, 0))
		{
			func_1(0);
			unk_0x27F66B7FE7DB7C3A(0);
			unk_0x3DE812D5BE11533E(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x16E09CCC0BD508DA();
			func_158();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x16E09CCC0BD508DA();
			func_158();
			unk_0xEE35B1932EE60B67();
			unk_0x2CF943308FEFB496();
			Global_22642 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_114(0, 1);
			Global_22638 = 1;
			unk_0xD4DF0F443B8FD284(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_8();
			iLocal_127 = 0;
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				Local_67 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			}
			func_121(0, 0);
			func_125(0);
			iLocal_115 = 0;
			func_116(1);
			if (!Global_2815059.f_6689)
			{
				unk_0xCED9E32812D6C7C7(&Global_8136, 9);
			}
			iLocal_142 = 0;
			func_164(Global_20247, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_8()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Accept", &Global_20255, 1);
		func_9();
	}
}

void func_9()
{
	if (func_2())
	{
		unk_0xBCA3FA8D0984A7D3(5);
	}
}

void func_10()
{
	iLocal_150 = 1;
	Global_22643 = 1;
	unk_0xD4DF0F443B8FD284(0, 1);
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
	if (Global_20266.f_1 < 4)
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
	
	if (unk_0x3A76A0944BE2C291(2))
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
		func_84();
		func_80();
		func_79();
		fLocal_73 = unk_0xD5B0BDC980EEB92F();
		fLocal_74 = unk_0x02AC46BF770385C4();
		if (iLocal_133 == 0)
		{
			if (unk_0x4C1B8C5717647539(2, iVar0) && !unk_0x4C1B8C5717647539(2, iVar1))
			{
				iLocal_133 = 1;
				func_164(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_164(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8136, 28))
				{
					func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
					func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 179, 1), func_67());
					func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_280");
					func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
					func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_66();
				unk_0xEA5DEA46C3EE64D3(uLocal_141, "SET_MAX_WIDTH");
				unk_0xCA5D23E5F0F0306F(fLocal_77);
				unk_0x6F06CF0E9AB02847();
				func_164(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x4C1B8C5717647539(2, iVar0) || unk_0x4C1B8C5717647539(2, iVar1))
		{
			iLocal_133 = 0;
			func_128();
		}
		if (iLocal_134 == 0)
		{
			if (unk_0x4C1B8C5717647539(2, iVar1) && !unk_0x4C1B8C5717647539(2, iVar0))
			{
				iLocal_134 = 1;
				func_164(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_164(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8136, 28))
				{
					func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
					func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 179, 1), func_67());
				}
				else if (!func_160())
				{
					func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_280");
					func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
				}
				else
				{
					func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_280");
					func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
				}
				func_65();
				unk_0xEA5DEA46C3EE64D3(uLocal_141, "SET_MAX_WIDTH");
				unk_0xCA5D23E5F0F0306F(fLocal_77);
				unk_0x6F06CF0E9AB02847();
				func_164(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x4C1B8C5717647539(2, iVar1) || unk_0x4C1B8C5717647539(2, iVar0))
		{
			iLocal_134 = 0;
			func_128();
		}
	}
	else
	{
		unk_0x5089DD830FA61D71(0, 2, 1);
		unk_0x5089DD830FA61D71(0, 1, 1);
	}
	if (unk_0xB1C1E679BD17A4F0(2))
	{
		func_128();
	}
	func_148();
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 200, 1);
	}
	if (func_160())
	{
		if (!BitTest(Global_4541229, 2))
		{
			unk_0xCED9E32812D6C7C7(&Global_4541229, 2);
			func_164(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((unk_0xF09A4F413B0D30EB(2, 183) && iLocal_156 == 0) && !func_160())
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_20255, 1);
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
			{
				if (BitTest(Global_4541229, 2))
				{
					unk_0xB0550BC91B0159D6(&Global_4541229, 2);
					if (!BitTest(Global_4541229, 2))
					{
						func_164(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&Global_4541229, 2);
					func_164(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131)
	{
		if (iLocal_132 == 1)
		{
			iLocal_132 = 0;
			unk_0xEA5DEA46C3EE64D3(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD7D6BA6E36AEC182(0);
			func_64("CELL_FOCUS");
			unk_0xD7D6BA6E36AEC182(1);
			unk_0x6F06CF0E9AB02847();
		}
		if (!func_63(14))
		{
			if (BitTest(Global_4541229, 10))
			{
				if ((Global_78319 == 0 && unk_0xB4C854DD86E40FDA(joaat("pi_menu")) > 0) && func_62())
				{
					unk_0xEA5DEA46C3EE64D3(uLocal_140, "SET_FOCUS_LOCK");
					unk_0xD7D6BA6E36AEC182(1);
					unk_0x4ADC8B166E139423("CELL_ACTTL");
					unk_0x76DB21247AE4E4E2(unk_0xAEF70623D03F7B02(&Global_4542214));
					unk_0xD1D4F8D5470AFA4C();
					unk_0xD7D6BA6E36AEC182(0);
					unk_0x6F06CF0E9AB02847();
					unk_0xB0550BC91B0159D6(&Global_4541229, 10);
				}
			}
		}
		else if (BitTest(Global_4541229, 10))
		{
			unk_0xB0550BC91B0159D6(&Global_4541229, 10);
		}
		iLocal_66 = unk_0x320D1840B6DAA1CC();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				Local_70 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
				if (unk_0x987A5F1E1A67E3C0(Local_70, Local_67, 1) > 5f)
				{
					Global_20266.f_1 = 3;
					unk_0x27F66B7FE7DB7C3A(0);
				}
				iLocal_65 = unk_0x320D1840B6DAA1CC();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!unk_0x4C1B8C5717647539(0, 182) && !func_160())
		{
			unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_20255, 1);
			iLocal_132 = 0;
			unk_0xEA5DEA46C3EE64D3(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD7D6BA6E36AEC182(0);
			func_64("CELL_FOCUS");
			unk_0xD7D6BA6E36AEC182(1);
			unk_0x6F06CF0E9AB02847();
		}
	}
	else if (unk_0x4C1B8C5717647539(0, 182) && !func_160())
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_20255, 1);
		iLocal_132 = 1;
		if (!func_63(14))
		{
			unk_0xEA5DEA46C3EE64D3(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD7D6BA6E36AEC182(1);
			func_64("CELL_FOCUS");
			unk_0xD7D6BA6E36AEC182(1);
			unk_0x6F06CF0E9AB02847();
		}
	}
	if (func_173())
	{
		if ((unk_0xF09A4F413B0D30EB(2, 186) && iLocal_156 == 0) && !func_160())
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
					{
						unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_20255, 1);
						unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), "Mood_Normal_1", 0);
						unk_0x12FAE55D27F5BC42(unk_0xE2D3D51028F0428A());
						if (Global_20266 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0xF2BC143F97765619(unk_0xE2D3D51028F0428A(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0xF2BC143F97765619(unk_0xE2D3D51028F0428A(), 1);
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
											unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
					{
						unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), "Mood_Normal_1", 0);
						unk_0x12FAE55D27F5BC42(unk_0xE2D3D51028F0428A());
						unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_20255, 1);
					}
				}
			}
		}
		if ((unk_0xF09A4F413B0D30EB(2, 185) && iLocal_156 == 0) && !func_160())
		{
			if (iLocal_131)
			{
				if (bLocal_62 == 1)
				{
					unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_20255, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (unk_0x3C57C2F07FEE34D2(sLocal_19[Global_4539953], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0x3CDDEB389E6F7E65(1);
							unk_0x78D4941E4DBEDF3C(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						unk_0x3CDDEB389E6F7E65(0);
						unk_0x78D4941E4DBEDF3C(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					unk_0x3CDDEB389E6F7E65(1);
					unk_0x78D4941E4DBEDF3C(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					unk_0x3CDDEB389E6F7E65(0);
					unk_0x78D4941E4DBEDF3C(0);
				}
			}
		}
	}
	if (iLocal_59 == 1 && !func_160())
	{
		if (unk_0xF09A4F413B0D30EB(0, 172) && iLocal_156 == 0)
		{
			if (func_173())
			{
				Global_4539954++;
				unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_20255, 1);
			}
			if (Global_4539954 == 13)
			{
				func_125(0);
				unk_0x3DF0D49DDCC957A5(1f);
				unk_0x861D35D42CFD2991(sLocal_33[(Global_4539954 - 1)]);
				Global_4539954 = 0;
				func_61();
				if (iLocal_47 == 1)
				{
					unk_0xB0550BC91B0159D6(&Global_4541229, 2);
					iLocal_47 = 0;
					func_164(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4539954 > 0 && Global_4539954 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				unk_0xA9911C122B3210B5(sLocal_33[Global_4539954], 0);
			}
		}
	}
	if (Global_4539954 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (unk_0x9D4AFED2949F7082(sLocal_33[Global_4539954]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!unk_0x8CD81CDAF32D145A())
				{
					func_125(1);
				}
				if (iLocal_47 == 0)
				{
					if (!BitTest(Global_4541229, 2))
					{
						iLocal_47 = 1;
					}
				}
				unk_0xCED9E32812D6C7C7(&Global_4541229, 2);
				func_164(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x3DF0D49DDCC957A5(0.25f);
				unk_0xB7BF883D5036C603(sLocal_33[Global_4539954], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_4539954 == 1 || Global_4539954 == 3)
			{
			}
			if (Global_4539954 == 2 || Global_4539954 == 4)
			{
			}
		}
	}
	if ((unk_0xF09A4F413B0D30EB(0, 173) && iLocal_156 == 0) && !func_160())
	{
		if (func_173())
		{
			func_116(0);
			Global_4539953++;
			unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_20255, 1);
		}
		if (Global_4539953 == 13)
		{
			Global_4539953 = 0;
		}
		if (Global_4539953 == 0)
		{
			if (func_173())
			{
				func_116(0);
			}
		}
		else
		{
			func_126();
		}
		func_60();
	}
	if ((unk_0xF01464D7AF0B7347(0, 184) && iLocal_156 == 0) && !func_160())
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
			{
				Local_67 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
				unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_20255, 1);
				func_164(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_163(uLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = unk_0x320D1840B6DAA1CC();
				while (unk_0x320D1840B6DAA1CC() < (iLocal_135 + iLocal_139) && Global_20266.f_1 > 3)
				{
					func_158();
					func_143();
					func_93();
					unk_0x16E09CCC0BD508DA();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_131 == 0)
				{
					unk_0xF889BDFCC181BA9F(iLocal_112);
					iLocal_131 = 1;
					func_59(1);
					func_58();
					unk_0xCED9E32812D6C7C7(&Global_8138, 3);
					iLocal_65 = unk_0x320D1840B6DAA1CC();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_59(0);
					iLocal_131 = 0;
					unk_0xB0550BC91B0159D6(&Global_8138, 3);
				}
				iLocal_135 = unk_0x320D1840B6DAA1CC();
				while (unk_0x320D1840B6DAA1CC() < (iLocal_135 + iLocal_137) && Global_20266.f_1 > 3)
				{
					func_158();
					func_143();
					func_93();
					unk_0x16E09CCC0BD508DA();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_163(uLocal_140, "OPEN_SHUTTER");
				if (func_173())
				{
					if (Global_4539954 == 0)
					{
						if (!BitTest(Global_4541229, 2))
						{
							func_164(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!BitTest(Global_4541229, 2))
				{
					func_164(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_143();
				func_158();
				if (BitTest(Global_8136, 28))
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
			if (unk_0xF09A4F413B0D30EB(0, 40) || unk_0xF09A4F413B0D30EB(0, 41))
			{
				fLocal_114 = unk_0x8E277EF62B1E0BDF();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (unk_0x78D9ADD511FEAD8B(iLocal_112))
					{
						unk_0x91DFC8F68F6D9B05(iLocal_112, "Camera_Zoom", &Global_20255, 1);
					}
				}
				else
				{
					unk_0xF889BDFCC181BA9F(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (unk_0x4C1B8C5717647539(0, 40) || unk_0x4C1B8C5717647539(0, 41))
		{
			fLocal_114 = unk_0x8E277EF62B1E0BDF();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (unk_0x78D9ADD511FEAD8B(iLocal_112))
				{
					unk_0x91DFC8F68F6D9B05(iLocal_112, "Camera_Zoom", &Global_20255, 1);
				}
			}
			else
			{
				unk_0xF889BDFCC181BA9F(iLocal_112);
			}
		}
		else
		{
			unk_0xF889BDFCC181BA9F(iLocal_112);
		}
	}
	if ((func_111(2, Global_20235, 0) && !func_123()) && !func_111(2, Global_20234, 0))
	{
		fLocal_75 = unk_0xD5B0BDC980EEB92F();
		fLocal_76 = unk_0x02AC46BF770385C4();
		unk_0x3DE812D5BE11533E(0, 0);
		unk_0xCED9E32812D6C7C7(&Global_8136, 21);
		unk_0xF889BDFCC181BA9F(iLocal_112);
		iLocal_127 = 1;
		func_164(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_164(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x91DFC8F68F6D9B05(-1, "Camera_Shoot", &Global_20255, 1);
		func_163(uLocal_140, "CLOSE_SHUTTER");
		Local_84 = { -90.3f, 0f, 90f };
		unk_0x6447DA2F47A963E9(Local_84, 0);
		if (!func_173())
		{
			func_116(1);
		}
		Global_22641 = 1;
		unk_0xD4DF0F443B8FD284(0, 1);
		while (Global_22640 < 6 && Global_20266.f_1 > 3)
		{
			func_158();
			func_143();
			func_93();
			func_148();
			unk_0x16E09CCC0BD508DA();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x13AD5FB4A6E050F1(0, 0);
		if (Global_20208)
		{
			func_1(1);
		}
		iLocal_135 = unk_0x320D1840B6DAA1CC();
		while (unk_0x320D1840B6DAA1CC() < (iLocal_135 + iLocal_138) && Global_20266.f_1 > 3)
		{
			func_158();
			func_143();
			func_93();
			unk_0x16E09CCC0BD508DA();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_163(uLocal_140, "OPEN_SHUTTER");
		unk_0xB0550BC91B0159D6(&Global_8136, 21);
		func_128();
		if (Global_20266.f_1 > 3)
		{
			if (Global_78319)
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
						unk_0xFA38CF6FFD2BF050(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0xFA38CF6FFD2BF050(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0xFA38CF6FFD2BF050(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_22();
			}
			func_125(0);
		}
		func_143();
	}
	if (BitTest(Global_8136, 28))
	{
		if (func_111(2, Global_20238, 0))
		{
			unk_0x3DE812D5BE11533E(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x16E09CCC0BD508DA();
			func_158();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x16E09CCC0BD508DA();
			func_158();
			unk_0xEE35B1932EE60B67();
			unk_0x2CF943308FEFB496();
			Global_22642 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_22638 = 1;
			unk_0xD4DF0F443B8FD284(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_8();
			iLocal_127 = 0;
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				Local_67 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			}
			func_121(0, 0);
			func_125(0);
			iLocal_115 = 0;
			func_116(1);
			if (!Global_2815059.f_6689)
			{
				unk_0xCED9E32812D6C7C7(&Global_8136, 9);
			}
			unk_0x27F66B7FE7DB7C3A(0);
			iLocal_142 = 0;
			func_164(Global_20247, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_13()
{
	func_14();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_14()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_17(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_16(unk_0xE2D3D51028F0428A());
			if (func_15(iVar0) && (!func_63(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_15(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
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
	return Global_1998[iParam0 /*29*/];
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_21(iParam1, iParam2))
	{
		iVar0 = func_20();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
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
		if (Global_2725297[iVar1] == 0)
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
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	Global_20203 = { Global_20219[Global_20211 /*3*/] };
	func_114(0, 1);
	func_121(0, 0);
	func_125(0);
	iLocal_115 = 0;
	func_116(1);
	if (!BitTest(Global_8137, 28))
	{
		if (unk_0x07A5E5231705659C() == 0)
		{
			if (unk_0xDFC67688F9088B45())
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
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_28(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_28(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1659693[func_28(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1659699[func_28(uParam2)] = iParam1;
			break;
		
		case 791:
			Global_1659705[func_28(uParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1659711[func_28(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1659657[func_28(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1659663[func_28(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1659669[func_28(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1659675[func_28(uParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1659681[func_28(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1659627[func_28(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1659633[func_28(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1659639[func_28(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1659645[func_28(uParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1659651[func_28(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1659717[func_28(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1659723[func_28(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1659729[func_28(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1659735[func_28(uParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1659741[func_28(uParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1659747[func_28(uParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1659753[func_28(uParam2)] = iParam1;
			break;
		
		case 640:
			Global_1659759[func_28(uParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1659765[func_28(uParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 11391:
			Global_2869950[func_28(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1659771[func_28(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1659777[func_28(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1659783[func_28(uParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1659789[func_28(uParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1659795[func_28(uParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1659801[func_28(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2869985[func_28(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2869994[func_28(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2869988[func_28(uParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2869997[func_28(uParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2869991[func_28(uParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2870000[func_28(uParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2870003[func_28(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2870006[func_28(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2870009[func_28(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2870012[func_28(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2870015[func_28(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2870018[func_28(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2870021[func_28(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2870024[func_28(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2870027[func_28(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2870030[func_28(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2870033[func_28(uParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2870036[func_28(uParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2870039[func_28(uParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2870042[func_28(uParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2870045[func_28(uParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_28(uParam2)] = iParam1;
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
	iVar0 = Global_2826809[iParam0 /*3*/][func_28(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_26(int iParam0)
{
	if (Global_1659608)
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
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 11391:
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
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2826809[iParam0 /*3*/][func_28(uParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
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
		func_164(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_164(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_160())
		{
			func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
			func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_280");
		}
		else
		{
			func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
			func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_280");
		}
		if (iLocal_131)
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
				{
					if (unk_0x3A76A0944BE2C291(2) || func_4())
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_78319 == 0 && unk_0xB4C854DD86E40FDA(joaat("pi_menu")) > 0) && func_62())
				{
					func_53();
				}
				else
				{
					if (unk_0x3A76A0944BE2C291(2) || func_4())
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(2, 183, 1), "CELL_GRID");
					func_77(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					if (func_173())
					{
						func_52(5f);
						func_51(6f);
						if (func_32(1))
						{
							func_31(7f);
							if (bLocal_62)
							{
								func_77(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_77(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
			{
				if (!unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
				{
					if (!func_160())
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
						func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(2, 183, 1), "CELL_GRID");
						func_77(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_284");
					}
					else
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
						if (!unk_0x3A76A0944BE2C291(0))
						{
							func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(0, 210, 1), "CELL_284");
						}
						else
						{
							func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x19214818F925D149(0, 29, 1), "CELL_284");
						}
					}
					if (!func_160())
					{
						if (func_173())
						{
							func_52(6f);
							func_51(7f);
							if (bLocal_63)
							{
								func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 182, 1), "CELL_FOCUS");
							}
							func_77(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					if (func_173())
					{
						func_52(3f);
						func_51(4f);
						func_77(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_160())
				{
					if (unk_0x3A76A0944BE2C291(2) || func_4())
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				if (!unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
				{
					if (!func_160())
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x2018949B2C9FD96A(2, 183, 1), "CELL_GRID");
						func_77(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					}
					else
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
						if (!unk_0x3A76A0944BE2C291(0))
						{
							func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(0, 210, 1), "CELL_284");
						}
						else
						{
							func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x19214818F925D149(0, 29, 1), "CELL_284");
						}
					}
					if (!func_160())
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_284");
					}
					if (!func_160())
					{
						if (func_173())
						{
							func_52(7f);
							func_51(8f);
							if (bLocal_63)
							{
								func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 182, 1), "CELL_FOCUS");
							}
							func_77(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					if (func_173())
					{
						func_52(3f);
						func_51(4f);
						func_77(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xEA5DEA46C3EE64D3(uLocal_141, "SET_MAX_WIDTH");
		unk_0xCA5D23E5F0F0306F(fLocal_77);
		unk_0x6F06CF0E9AB02847();
		func_164(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_31(float fParam0)
{
	func_77(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x2018949B2C9FD96A(0, 174, 1), "CELL_ACTION");
}

int func_32(int iParam0)
{
	if (unk_0x9315DBF7D972F07A())
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
	return func_34(unk_0xE2D3D51028F0428A(), iParam0, iParam1, bParam2, bParam3, bParam4);
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
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("mp_f_freemode_01"))
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
		if (unk_0x9315DBF7D972F07A())
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
	
	uVar0 = unk_0x5355BAA621C153CF(iParam0, 1);
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
	
	uVar0 = unk_0xF2BC143F97765619(iParam0, 0);
	return uVar0;
}

bool func_40(var uParam0, int iParam1)
{
	return func_38(uParam0, iParam1);
}

var func_41(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF2BC143F97765619(iParam0, 0);
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
		unk_0xCED9E32812D6C7C7(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0xB0550BC91B0159D6(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
		unk_0xCED9E32812D6C7C7(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0xB0550BC91B0159D6(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
	func_77(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x2018949B2C9FD96A(0, 172, 1), "CELL_BORDER");
}

void func_52(float fParam0)
{
	if (Global_1941594)
	{
		fParam0 = -1f;
	}
	func_77(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x2018949B2C9FD96A(0, 173, 1), "CELL_FILTER");
}

void func_53()
{
	if (unk_0x3A76A0944BE2C291(2) || func_4())
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 183, 1), "CELL_GRID");
	func_77(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
	func_52(5f);
	func_51(6f);
	func_54(7f);
	func_31(8f);
	if (bLocal_62)
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_63(14))
	{
		if ((Global_78319 == 0 && unk_0xB4C854DD86E40FDA(joaat("pi_menu")) > 0) && func_62())
		{
			unk_0xEA5DEA46C3EE64D3(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD7D6BA6E36AEC182(1);
			unk_0x4ADC8B166E139423("CELL_ACTTL");
			unk_0x76DB21247AE4E4E2(unk_0xAEF70623D03F7B02(&Global_4542214));
			unk_0xD1D4F8D5470AFA4C();
			unk_0xD7D6BA6E36AEC182(0);
			unk_0x6F06CF0E9AB02847();
		}
	}
}

void func_54(float fParam0)
{
	func_77(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x2018949B2C9FD96A(0, 175, 1), "CELL_ACCYC");
}

void func_55()
{
	func_164(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_164(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_284");
	func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
	func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
	func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_280");
	unk_0xEA5DEA46C3EE64D3(uLocal_141, "SET_MAX_WIDTH");
	unk_0xCA5D23E5F0F0306F(fLocal_77);
	unk_0x6F06CF0E9AB02847();
	func_164(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
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
		func_164(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_164(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
		func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 179, 1), func_67());
		if (iLocal_131)
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
				{
					if (unk_0x3A76A0944BE2C291(2) || func_4())
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_173())
					{
						func_52(3f);
						func_51(4f);
					}
				}
				else if ((Global_78319 == 0 && unk_0xB4C854DD86E40FDA(joaat("pi_menu")) > 0) && func_62())
				{
					func_53();
				}
				else
				{
					if (unk_0x3A76A0944BE2C291(2) || func_4())
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(2, 183, 1), "CELL_GRID");
					func_77(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					if (func_173())
					{
						func_52(5f);
						func_51(6f);
						if (func_32(1))
						{
							func_31(7f);
							if (bLocal_62)
							{
								func_77(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_77(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
			{
				if (!unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
				{
					func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(2, 183, 1), "CELL_GRID");
					func_77(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					func_77(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_284");
					if (func_173())
					{
						func_52(6f);
						func_51(7f);
						func_77(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					if (func_173())
					{
						func_52(3f);
						func_51(4f);
						func_77(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
			{
				if (!func_160())
				{
					if (unk_0x3A76A0944BE2C291(2) || func_4())
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				func_77(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x2018949B2C9FD96A(2, 183, 1), "CELL_GRID");
				func_77(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
				func_77(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_284");
				if (func_173())
				{
					if (!func_160())
					{
						func_52(7f);
						func_51(8f);
						if (bLocal_63)
						{
							func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 182, 1), "CELL_FOCUS");
						}
						func_77(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_160())
					{
						if (unk_0x3A76A0944BE2C291(2) || func_4())
						{
							func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_1NP_XB");
						}
						else
						{
							func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_1NP_XB");
						}
					}
					func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					if (func_173())
					{
						if (!func_160())
						{
							func_52(4f);
							func_51(5f);
							func_77(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		unk_0xEA5DEA46C3EE64D3(uLocal_141, "SET_MAX_WIDTH");
		unk_0xCA5D23E5F0F0306F(fLocal_77);
		unk_0x6F06CF0E9AB02847();
		func_164(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_57()
{
	func_164(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_164(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_284");
	func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
	func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 179, 1), func_67());
	func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
	unk_0xEA5DEA46C3EE64D3(uLocal_141, "SET_MAX_WIDTH");
	unk_0xCA5D23E5F0F0306F(fLocal_77);
	unk_0x6F06CF0E9AB02847();
	func_164(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_58()
{
	if (iLocal_131)
	{
		unk_0x080C97B891E2F3AA(fLocal_73, 1065353216);
		unk_0x94953C3FF0664F66(fLocal_74);
	}
}

void func_59(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_4718592.f_163006 == 1)
	{
	}
	else if (Global_4718592.f_163007 == 1)
	{
	}
	else
	{
		unk_0x041ACBE09A018963(iParam0);
	}
}

void func_60()
{
	if (iLocal_61 == 1)
	{
		if (unk_0x3C57C2F07FEE34D2(sLocal_19[Global_4539953], "phone_cam12DUMMY"))
		{
			unk_0x3CDDEB389E6F7E65(0);
			unk_0x78D4941E4DBEDF3C(0);
		}
		else
		{
			unk_0x3CDDEB389E6F7E65(1);
			unk_0x78D4941E4DBEDF3C(1);
		}
	}
}

void func_61()
{
	func_164(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_173())
	{
		if (!Global_1941594)
		{
			unk_0x5C3549D308EC0B7F("phone_cam");
		}
	}
}

int func_62()
{
	if (func_63(14))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if ((unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[0 /*29*/] || unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[1 /*29*/]) || unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[2 /*29*/])
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
	return Global_43052 == iParam0;
}

void func_64(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_65()
{
	if (unk_0x3A76A0944BE2C291(2) || func_4())
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x3A76A0944BE2C291(2))
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 30, 1), "CELL_RT_RSTICK");
		func_77(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 1, 1), "CELL_RT_RSTICK");
		func_77(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_66()
{
	if (unk_0x3A76A0944BE2C291(2) || func_4())
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_77(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(0, 1, 1), "CELL_LT_RSTICK");
	if (func_63(14))
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x2018949B2C9FD96A(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_LT_LSTICKZ");
		func_77(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x2018949B2C9FD96A(2, 30, 1), "CELL_LT_LSTICK");
	}
}

char* func_67()
{
	if (func_76())
	{
		return "FHHUD_SENDLES";
	}
	if (func_74())
	{
		return "CSH_PHONEC";
	}
	if (func_73(unk_0x9E2D6C50374FCFA9(), 275) && Global_1964888)
	{
		return "RE_SS_SNDOMG";
	}
	switch (func_72(unk_0x9E2D6C50374FCFA9()))
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
	switch (func_68(unk_0x9E2D6C50374FCFA9()))
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
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_70(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
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
	while (iVar1 < Global_1888817)
	{
		if (Global_1888817[iVar1] == iParam1)
		{
			if (Global_1888862[iVar0 /*120*/].f_77.f_1[iVar1 /*3*/] == 2)
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
	switch (func_75(unk_0x9E2D6C50374FCFA9()))
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
	switch (Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_10.f_33)
	{
		case 233:
			switch (Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_10.f_182)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_10.f_182)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1973075)
	{
		return 1;
	}
	return 0;
}

void func_77(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0xACC32B78196FBC2A(uParam3))
	{
		func_78(uParam3);
	}
	if (!unk_0xACC32B78196FBC2A(sParam4))
	{
		func_64(sParam4);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_78(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

void func_79()
{
	if (Global_78319)
	{
		switch (Global_22722)
		{
			case 0:
				if (unk_0x3A76A0944BE2C291(2))
				{
					func_159("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_159("CELL_CAM_SELFIE_0", -1);
				}
				Global_22722++;
				break;
			
			case 1:
				if (!unk_0xF847447D4467709D())
				{
					if (unk_0x3A76A0944BE2C291(2))
					{
						func_159("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_159("CELL_CAM_SELFIE_1", -1);
					}
					Global_22722++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_22721)
		{
			case 0:
				if (unk_0x3A76A0944BE2C291(2))
				{
					func_159("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_159("CELL_CAM_SELFIE_0", -1);
				}
				Global_22721++;
				break;
			
			case 1:
				if (!unk_0xF847447D4467709D())
				{
					if (unk_0x3A76A0944BE2C291(2))
					{
						func_159("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_159("CELL_CAM_SELFIE_1", -1);
					}
					Global_22721++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_80()
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
	
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x4C1B8C5717647539(2, iVar10) && !unk_0x4C1B8C5717647539(2, iVar9))
	{
		unk_0x7653D561C9574763(0, 2, 1);
		unk_0x7653D561C9574763(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 2)) * 127;
		if (unk_0x3A76A0944BE2C291(2))
		{
			if (unk_0x07141611FD632B59(iVar0) > 28 || unk_0x07141611FD632B59(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (unk_0x07141611FD632B59(iVar2) > 28 || unk_0x07141611FD632B59(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (unk_0x3A76A0944BE2C291(2))
		{
			fVar7 = unk_0x1EC2077A4D963881(0, 290);
			fVar8 = unk_0x1EC2077A4D963881(0, 291);
			if (unk_0x2ED671F67654FD28())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x07141611FD632B59(iVar0) > 28 || unk_0x07141611FD632B59(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_83(fVar5);
		func_82(fVar6);
		func_81(fVar4);
	}
	else if (!unk_0x4C1B8C5717647539(2, iVar9))
	{
		unk_0x5089DD830FA61D71(0, 2, 1);
		unk_0x5089DD830FA61D71(0, 1, 1);
	}
}

void func_81(float fParam0)
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
	unk_0x707BC059B4839126(fLocal_161);
}

void func_82(float fParam0)
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
	unk_0xAA8B9D1D78A7DB5A(fLocal_162);
}

void func_83(float fParam0)
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
	unk_0xB385B6BD5599FEE4(fLocal_163);
}

void func_84()
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
	
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x4C1B8C5717647539(2, iVar10))
		{
			if (unk_0xF09A4F413B0D30EB(2, 178) && !func_160())
			{
				unk_0x8ECF6C4A4045833D(0.5f);
				unk_0x5C34E45CA45F7A49(0.85f);
				unk_0xBFC33DDACAEC2532(0.5f);
				unk_0x45209E14B5251BD9(-0.25f);
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
	if (unk_0x4C1B8C5717647539(2, iVar10) && !unk_0x4C1B8C5717647539(2, iVar11))
	{
		if (unk_0xF09A4F413B0D30EB(2, 178) && !func_160())
		{
			unk_0x8ECF6C4A4045833D(0.5f);
			unk_0x5C34E45CA45F7A49(0.85f);
			unk_0xBFC33DDACAEC2532(0.5f);
			unk_0x45209E14B5251BD9(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		unk_0x7653D561C9574763(0, 2, 1);
		unk_0x7653D561C9574763(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 2)) * 127;
		if (unk_0x3A76A0944BE2C291(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 39)) * 127;
			fVar8 = unk_0x1EC2077A4D963881(0, 290);
			fVar9 = unk_0x1EC2077A4D963881(0, 291);
			if (unk_0x2ED671F67654FD28())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x07141611FD632B59(iVar2) > 15 || unk_0x07141611FD632B59(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x07141611FD632B59(iVar0) > 28 || unk_0x07141611FD632B59(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		func_88(fVar6);
		func_87(fVar7);
		func_86(fVar4);
		if (!func_63(14))
		{
			func_85(fVar5);
		}
	}
	else if (!unk_0x0DBA73788F6E3C5F(2, iVar11))
	{
		unk_0x5089DD830FA61D71(0, 2, 1);
		unk_0x5089DD830FA61D71(0, 1, 1);
	}
	if (!unk_0x0DBA73788F6E3C5F(2, iVar10) && !unk_0x0DBA73788F6E3C5F(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x1EC2077A4D963881(0, 293)) * 127;
		if (unk_0x07141611FD632B59(iVar2) > 28 || unk_0x07141611FD632B59(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x07141611FD632B59(iVar0) > 28 || unk_0x07141611FD632B59(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		if (!func_63(14))
		{
			func_85(fVar5);
		}
	}
}

void func_85(float fParam0)
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
	unk_0xBFC33DDACAEC2532(fLocal_159);
}

void func_86(float fParam0)
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
	unk_0x45209E14B5251BD9(fLocal_160);
}

void func_87(float fParam0)
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
	unk_0x5C34E45CA45F7A49(fLocal_158);
}

void func_88(float fParam0)
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
	unk_0x8ECF6C4A4045833D(fLocal_157);
}

void func_89()
{
	if (Global_78579 || Global_78580)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_4718592.f_163006 == 0 && Global_4718592.f_163007 == 0)
			{
				unk_0xC4353D240DCE9533(uLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_127 == 0)
	{
		if (Global_20208)
		{
			if (Global_20464)
			{
				if (iLocal_150 == 0)
				{
					if (Global_20266.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_91(255, 255, 255, 255);
			func_90(0.059f, 0.644f, "CELL_284", 0);
			func_91(255, 255, 255, 255);
			func_90(0.165f, 0.644f, "CELL_285", 0);
			func_91(255, 255, 255, 255);
			func_90(0.275f, 0.75f, "CELL_280", 0);
			func_91(255, 255, 255, 255);
			func_90(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_20208)
	{
	}
	else
	{
		func_91(255, 255, 255, 255);
		func_90(0.275f, 0.75f, func_67(), 0);
		func_91(255, 255, 255, 255);
		func_90(0.275f, 0.79f, "CELL_286", 0);
		func_91(255, 255, 255, 255);
		func_90(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_90(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x1A53079994915FA6(fParam0, fParam1, iParam3);
}

void func_91(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x3F03C2D4EFA888BC(0.4f, 0.4f);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(1, 0, 0, 0, 205);
	unk_0x0365AB5B6DB2F6E3(1);
	unk_0xF68E5437AF17EFBC(0);
	unk_0x71F4002CB1A0B451(iParam0, iParam1, iParam2, iParam3);
}

void func_92()
{
	unk_0x080C97B891E2F3AA(fLocal_75, 1065353216);
	unk_0x94953C3FF0664F66(fLocal_76);
}

void func_93()
{
	unk_0x7653D561C9574763(0, 25, 1);
	unk_0x7653D561C9574763(0, 44, 1);
	unk_0x7653D561C9574763(0, 3, 1);
	unk_0x7653D561C9574763(0, 4, 1);
	unk_0x7653D561C9574763(0, 5, 1);
	unk_0x7653D561C9574763(0, 6, 1);
	unk_0x7653D561C9574763(0, 1, 1);
	unk_0x7653D561C9574763(0, 2, 1);
	unk_0x7653D561C9574763(0, 39, 1);
	unk_0x7653D561C9574763(0, 47, 1);
	unk_0x7653D561C9574763(0, 56, 1);
}

void func_94()
{
	Local_87 = { Global_20219[Global_20211 /*3*/] };
	if (Global_20208)
	{
		if (func_97())
		{
			unk_0xC81489026785778A(&Local_93);
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
		if (BitTest(Global_8138, 4))
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
		if (func_97() == 0)
		{
			if (BitTest(Global_8138, 4))
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
			Local_87 = { Global_20212[Global_20211 /*3*/] };
		}
		Local_81 = { Local_87 };
		iLocal_123 = 0;
		iLocal_122 = 0;
		iLocal_121 = 0;
		unk_0x31636F0193379566(Local_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			Local_84 = { -90.3f, 0f, 90f };
			unk_0x6447DA2F47A963E9(Local_84, 0);
			if (!BitTest(Global_8136, 22))
			{
				if (BitTest(Global_8136, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_96();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_95();
				}
				iLocal_100 = 2;
			}
		}
	}
}

void func_95()
{
	func_164(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_164(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8137, 28))
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_286");
	}
	else
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 178, 1), "CELL_277");
		func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xEA5DEA46C3EE64D3(uLocal_141, "SET_MAX_WIDTH");
	unk_0xCA5D23E5F0F0306F(fLocal_77);
	unk_0x6F06CF0E9AB02847();
	func_164(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_96()
{
	func_164(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_164(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8137, 28))
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 179, 1), func_67());
		func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_286");
	}
	else
	{
		func_77(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(2, 179, 1), func_67());
		func_77(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 178, 1), "CELL_277");
		func_77(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xEA5DEA46C3EE64D3(uLocal_141, "SET_MAX_WIDTH");
	unk_0xCA5D23E5F0F0306F(fLocal_77);
	unk_0x6F06CF0E9AB02847();
	func_164(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_97()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			if (Global_20209 == 0)
			{
				if (Global_7451 != 128)
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if (Global_21605 != 2)
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
		if (unk_0x1CFDD57741085128(unk_0xE2D3D51028F0428A(), 0))
		{
			return 0;
		}
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!unk_0x94398B6170DCA18C())
			{
				if (unk_0xD8F9DF94CD871327(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A()) || unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A())) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || (unk_0xED99779C40AEE6C4(unk_0xE2D3D51028F0428A()) && !(BitTest(Global_4718592.f_37, 17) && (unk_0x44859561F653DD4E() || Global_1922883))))
		{
			return 0;
		}
		if (Global_112434)
		{
			return 0;
		}
	}
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x47E529DA87615548();
	iVar1 = unk_0x4DE6A646AFB7CF5C(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x94398B6170DCA18C()))
	{
		iVar2 = 1;
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar3 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				if ((((((((unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iVar3)) || unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(iVar3))) || unk_0xCD8C08FA7D84C27E(unk_0x15CAA6D7B11F1A7C(iVar3))) || unk_0x15CAA6D7B11F1A7C(iVar3) == joaat("seashark")) || unk_0x15CAA6D7B11F1A7C(iVar3) == joaat("seashark2")) || unk_0x15CAA6D7B11F1A7C(iVar3) == joaat("rhino")) || unk_0x15CAA6D7B11F1A7C(iVar3) == joaat("submersible")) || unk_0x15CAA6D7B11F1A7C(iVar3) == joaat("submersible2")) || unk_0x15CAA6D7B11F1A7C(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4541507 || iVar2 == 1)
	{
		if (unk_0xB4C854DD86E40FDA(joaat("apptrackify")) > 0 || Global_113386.f_14051.f_89)
		{
			if (unk_0xB4C854DD86E40FDA(joaat("michael2")) > 0)
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

void func_98()
{
	unk_0x7653D561C9574763(0, 47, 1);
	unk_0x07899AAA5D680386(0, Global_20236);
	Local_84 = { Global_20226 };
	Local_87 = { Global_20219[Global_20211 /*3*/] };
	if (func_97())
	{
		unk_0xDE866220FC1119FA(&Local_90, 0);
		Local_84 = { Local_90 };
		unk_0xC81489026785778A(&Local_93);
		Local_87 = { Local_93 };
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
	}
	if (Global_20208)
	{
		func_164(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(0);
		iLocal_131 = 0;
		if (BitTest(Global_8136, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_99();
		}
		if (iLocal_121)
		{
			if (BitTest(Global_8136, 9))
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
			if (func_97() == 0)
			{
				unk_0x6447DA2F47A963E9(Local_78, 0);
				unk_0x31636F0193379566(Local_81);
			}
			func_114(0, 1);
		}
		else if (func_97() == 0)
		{
			unk_0x6447DA2F47A963E9(Local_78, 0);
			unk_0x31636F0193379566(Local_81);
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_99();
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
			func_99();
		}
	}
	unk_0x6447DA2F47A963E9(Local_78, 0);
}

void func_99()
{
	func_1(0);
	if (func_97() == 0)
	{
		if (BitTest(Global_8136, 30))
		{
			unk_0x31636F0193379566(Global_20212[Global_20211 /*3*/]);
		}
		else
		{
			unk_0x31636F0193379566(Global_20219[Global_20211 /*3*/]);
		}
		Local_78 = { Local_84 };
		unk_0x6447DA2F47A963E9(Local_78, 0);
	}
	Global_22638 = 0;
	func_121(0, 0);
	func_125(0);
	iLocal_115 = 0;
	func_116(1);
	Global_20253 = 1;
	Global_22641 = 0;
	if (Global_20266.f_1 > 4)
	{
		Global_20266.f_1 = 6;
		Global_20244 = 1;
		func_100();
	}
	if (unk_0x0347CCBD719C8ADC(uLocal_140))
	{
		func_163(uLocal_140, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0x16E09CCC0BD508DA();
	unk_0x705B098546DEB18A(&uLocal_141);
	unk_0x705B098546DEB18A(&uLocal_140);
	if (Global_20466 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 17);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 17);
	}
	unk_0xB0550BC91B0159D6(&Global_8136, 18);
	unk_0xB0550BC91B0159D6(&Global_8136, 21);
	unk_0xD4DF0F443B8FD284(0, 1);
	unk_0xB0550BC91B0159D6(&Global_8138, 3);
	unk_0xB0550BC91B0159D6(&Global_4541229, 3);
	unk_0x27F66B7FE7DB7C3A(0);
	unk_0xF82507EBD42C6070(unk_0x9E2D6C50374FCFA9(), 1);
	unk_0x4FEF096D3AB4AA8C(15);
	Global_22642 = 1;
	unk_0xF889BDFCC181BA9F(iLocal_112);
	unk_0xCDBCC1BC1184B002(iLocal_112);
	unk_0xBE3AC6D6682E4A5E();
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), "Mood_Normal_1", 0);
		unk_0x12FAE55D27F5BC42(unk_0xE2D3D51028F0428A());
	}
	func_116(1);
	unk_0x3CDDEB389E6F7E65(0);
	unk_0x78D4941E4DBEDF3C(0);
	unk_0x3DF0D49DDCC957A5(1f);
	if (Global_4539954 > 0 && Global_4539954 < 13)
	{
		unk_0x861D35D42CFD2991(sLocal_33[Global_4539954]);
	}
	func_114(0, 1);
	if (func_171(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_100()
{
	struct<3> Var0;
	
	if (Global_20249 == 1)
	{
		return;
	}
	if (Global_20266.f_1 < 4)
	{
		return;
	}
	while (!unk_0x0347CCBD719C8ADC(Global_20247))
	{
		if (Global_78319)
		{
			return;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_20266.f_1)
	{
		case 6:
			func_164(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_108(Global_8741);
			if (Global_8741 == 1)
			{
				func_164(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20270), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20270;
			}
			else
			{
				func_164(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20271), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20271;
			}
			if (Global_20254)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20466 == 0)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xB0550BC91B0159D6(&Global_8136, 17);
			}
			else if (Global_78319)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xB0550BC91B0159D6(&Global_8136, 17);
			}
			else
			{
				if (Global_20465 == 1)
				{
					if (Global_20254)
					{
						func_107(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_107(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20254)
				{
					func_107(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_107(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xCED9E32812D6C7C7(&Global_8136, 17);
			}
			if (Global_78319)
			{
				func_105();
				unk_0xB0550BC91B0159D6(&Global_8138, 9);
				func_164(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20270), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_164(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_107(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_107(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20265 == 1)
			{
				func_104();
				func_164(Global_20247, "SET_THEME", unk_0xBBDA792448DB5A89(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21618)
				{
					unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(4);
					unk_0x4F47E317C74C543B(0);
					unk_0x4F47E317C74C543B(2);
					unk_0x4ADC8B166E139423("CELL_CONDFON");
					unk_0x76DB21247AE4E4E2(&Global_21620);
					unk_0xD1D4F8D5470AFA4C();
					func_64("CELL_300");
					func_64("CELL_217");
					func_64("CELL_217");
					unk_0x6F06CF0E9AB02847();
				}
				else if (func_103(Global_7451, Global_20266) == 0)
				{
					func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_217", &(Global_1998[Global_7451 /*29*/].f_3), 0);
				}
				func_164(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21605 == 4 || Global_21605 == 3)
			{
				func_164(Global_20247, "SET_THEME", unk_0xBBDA792448DB5A89(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_104();
				if (Global_21618)
				{
					unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(4);
					unk_0x4F47E317C74C543B(0);
					unk_0x4F47E317C74C543B(2);
					unk_0x4ADC8B166E139423("CELL_CONDFON");
					unk_0x76DB21247AE4E4E2(&Global_21620);
					unk_0xD1D4F8D5470AFA4C();
					func_64("CELL_300");
					func_64("CELL_219");
					func_64("CELL_219");
					unk_0x6F06CF0E9AB02847();
				}
				else
				{
					if (Global_21863)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_103(Global_7451, Global_20266) == 0)
					{
						func_164(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_164(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), &Var0, &(Global_1998[Global_7451 /*29*/].f_3), 0);
					}
				}
				func_164(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_101();
			break;
		
		default:
			break;
	}
}

void func_101()
{
	if (unk_0x0347CCBD719C8ADC(Global_20247))
	{
		func_102();
		if (Global_20265 == 1)
		{
			if (Global_20254)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21652)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8136, 20))
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_107(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_8136, 17);
		}
		else
		{
			func_107(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_107(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_102()
{
	if (Global_78319)
	{
		func_107(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xB0550BC91B0159D6(&Global_8136, 17);
	}
}

int func_103(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

void func_104()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (Global_20266 == 0)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 1)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 2)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 3)
		{
			switch (Global_4541505)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_105()
{
	if (Global_78319)
	{
		if (func_106() == 0)
		{
			return;
		}
		func_107(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xCED9E32812D6C7C7(&Global_8136, 17);
	}
}

int func_106()
{
	return 0;
}

void func_107(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xACC32B78196FBC2A(sParam7))
	{
		func_64(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(iParam8))
	{
		func_64(iParam8);
	}
	if (!unk_0xACC32B78196FBC2A(iParam9))
	{
		func_64(iParam9);
	}
	if (!unk_0xACC32B78196FBC2A(iParam10))
	{
		func_64(iParam10);
	}
	if (!unk_0xACC32B78196FBC2A(iParam11))
	{
		func_64(iParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_108(int iParam0)
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
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8705[iVar0] = 0;
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
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20468 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_64(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar2);
								unk_0x6F06CF0E9AB02847();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[iVar0] = 1;
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
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									iVar4 = 0;
									iVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											iVar6 = Global_44249;
											break;
										
										case 1:
											iVar6 = Global_44250;
											break;
										
										case 2:
											iVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_64(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(Global_8142);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_64(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar7);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20468 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_64(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar8);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 8)
							{
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_64(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if ((iVar1 == 23 && unk_0x3C57C2F07FEE34D2(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_64(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_109()
{
	switch (iLocal_100)
	{
		case 1:
			unk_0xD4DF0F443B8FD284(0, 1);
			if (BitTest(Global_8136, 28))
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
			if (!BitTest(Global_8136, 22))
			{
				unk_0xD4DF0F443B8FD284(0, 1);
				if (BitTest(Global_8136, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_96();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_95();
				}
				iLocal_100 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_110(bool bParam0)
{
	if (bParam0)
	{
		if (!func_123())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 17);
		}
	}
	else if (func_123())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 17);
	}
}

int func_111(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xF09A4F413B0D30EB(iParam0, uParam1) || (iParam2 == 1 && unk_0xF01464D7AF0B7347(iParam0, iParam1)))
	{
		if (unk_0x8FE9914D4872D601())
		{
			if (unk_0x9417F1137725B4B3() == 0 || (unk_0xD199EE48D2842EB1() && unk_0x3A76A0944BE2C291(2)))
			{
				return 0;
			}
		}
		if (unk_0xF1EC2C71FD1371B8() || unk_0x3E6C9DAD84CEFED1())
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

void func_112(bool bParam0)
{
	if (bParam0)
	{
		if (!func_113())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 18);
		}
	}
	else if (func_113())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 18);
	}
}

bool func_113()
{
	return BitTest(Global_1958711, 18);
}

void func_114(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_115(0))
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

int func_115(int iParam0)
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

void func_116(int iParam0)
{
	if ((Global_4718592.f_163006 == 0 && Global_4718592.f_163007 == 0) && !Global_1941594)
	{
		if (func_117(unk_0x9E2D6C50374FCFA9()) && iParam0)
		{
			Global_1973148 = 1;
		}
		else
		{
			unk_0xDEABC7EC7DA2B48E();
		}
	}
}

int func_117(int iParam0)
{
	if (iParam0 != func_120())
	{
		if (func_119(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_118(Global_2689235[iParam0 /*453*/].f_318.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_118(int iParam0)
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

int func_119(int iParam0, bool bParam1, bool bParam2)
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

int func_120()
{
	return -1;
}

void func_121(int iParam0, int iParam1)
{
	if (Global_4718592.f_163006 == 1)
	{
	}
	else if (Global_4718592.f_163007 == 1)
	{
	}
	else
	{
		unk_0x13AD5FB4A6E050F1(iParam0, iParam1);
	}
}

int func_122()
{
	if (BitTest(Global_8136, 15))
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return BitTest(Global_1958711, 17);
}

void func_124()
{
	if (Global_20208)
	{
		Local_84 = { -90.3f, 0f, 90f };
		Local_87 = { 1.5f, 0f, -17f };
		if (func_97())
		{
			unk_0xDE866220FC1119FA(&Local_90, 0);
			Local_84 = { Local_90 };
			unk_0xC81489026785778A(&Local_93);
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
		if (func_97() == 0)
		{
			unk_0x6447DA2F47A963E9(Local_78, 0);
			unk_0x31636F0193379566(Local_81);
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
		unk_0x6447DA2F47A963E9(Local_78, 0);
	}
	if (Global_20208)
	{
		if (((((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0) && iLocal_123 == 0)
		{
			if (func_97())
			{
			}
			else
			{
				Local_78 = { Local_84 };
				unk_0x6447DA2F47A963E9(Local_78, 0);
				Local_81 = { Local_87 };
				unk_0x31636F0193379566(Local_81);
			}
			if (iLocal_103 == 0)
			{
				Global_22639 = 0;
				func_121(1, 1);
				iLocal_115 = 1;
				func_125(1);
				func_61();
				func_126();
				func_59(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_142 = 1;
				iLocal_143 = 1;
				func_143();
				func_164(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!BitTest(Global_4541229, 2))
				{
					func_164(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_164(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				func_166();
			}
		}
	}
	else if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
	{
		Local_78 = { Local_84 };
		unk_0x6447DA2F47A963E9(Local_78, 0);
		Global_22639 = 0;
	}
}

void func_125(bool bParam0)
{
	if (func_173())
	{
		if (bParam0)
		{
			if (!unk_0x8CD81CDAF32D145A())
			{
				unk_0x3ED60EDDC1A35365(1);
				if (Global_4539954 > 0 && Global_4539954 < 99)
				{
					unk_0xB7BF883D5036C603(sLocal_33[Global_4539954], 0);
					unk_0x3DF0D49DDCC957A5(0.25f);
				}
			}
		}
		else if (unk_0x8CD81CDAF32D145A())
		{
			unk_0x3ED60EDDC1A35365(0);
		}
	}
}

void func_126()
{
	if (Global_4539953 > 0 && Global_4539953 < 99)
	{
		if (!Global_1941594)
		{
			unk_0x5C3549D308EC0B7F(sLocal_19[Global_4539953]);
		}
	}
}

void func_127()
{
	if (Global_20208)
	{
		iLocal_125 = 0;
		func_61();
		func_114(1, 1);
		func_121(1, 1);
		iLocal_115 = 1;
		Global_22642 = 1;
	}
}

void func_128()
{
	if (Global_4718592.f_163006 == 1 && func_129())
	{
		return;
	}
	if (iLocal_127 == 0)
	{
		if (BitTest(Global_8136, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_56();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_30();
		}
		if (unk_0x3C57C2F07FEE34D2(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

int func_129()
{
	if ((((((func_138() || func_137()) || func_136()) || func_135()) || func_134()) || func_132()) || func_130())
	{
		return 1;
	}
	if (unk_0x44859561F653DD4E() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_130()
{
	return func_131(Global_4718592.f_116524);
}

int func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31703[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_132()
{
	return func_133(Global_4718592.f_116524);
}

int func_133(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_134()
{
	return Global_2714762.f_24;
}

var func_135()
{
	return Global_2714762.f_21;
}

var func_136()
{
	return Global_2714762.f_19;
}

var func_137()
{
	return Global_2714762.f_18;
}

var func_138()
{
	return Global_2714762.f_17;
}

void func_139()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Back", &Global_20255, 1);
	}
}

void func_140()
{
	unk_0x3DE812D5BE11533E(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_141()
{
	func_142();
}

void func_142()
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

void func_143()
{
	if (Global_20266.f_1 > 3)
	{
		if (!unk_0xF1EC2C71FD1371B8())
		{
			unk_0x694170BB080C08FF(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_144()
{
	if (func_63(14))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_13();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

void func_145(int iParam0)
{
	if (func_147())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_160())
		{
			func_114(1, 1);
		}
		else
		{
			func_114(0, 0);
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
	if (!func_146())
	{
		Global_20266.f_1 = 3;
	}
}

int func_146()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_147()
{
	return BitTest(Global_1958711, 19);
}

void func_148()
{
	unk_0x7653D561C9574763(0, 0, 1);
	unk_0x7653D561C9574763(0, 56, 1);
	if (iLocal_150 == 0)
	{
		unk_0x07899AAA5D680386(0, Global_20239);
		unk_0x07899AAA5D680386(0, Global_20236);
		unk_0x7653D561C9574763(0, 278, 1);
		unk_0x7653D561C9574763(0, 279, 1);
		unk_0x7653D561C9574763(0, 280, 1);
		unk_0x7653D561C9574763(0, 281, 1);
		unk_0x7653D561C9574763(0, 282, 1);
		unk_0x7653D561C9574763(0, 282, 1);
		unk_0x7653D561C9574763(0, 284, 1);
		unk_0x7653D561C9574763(0, 285, 1);
		unk_0x7653D561C9574763(0, 69, 1);
		unk_0x7653D561C9574763(0, 70, 1);
		unk_0x7653D561C9574763(0, 114, 1);
		unk_0x7653D561C9574763(0, 71, 1);
		unk_0x7653D561C9574763(0, 72, 1);
		unk_0x7653D561C9574763(0, 74, 1);
		unk_0x7653D561C9574763(0, 75, 1);
		unk_0x7653D561C9574763(0, 76, 1);
		unk_0x7653D561C9574763(0, 73, 1);
		unk_0x7653D561C9574763(0, 77, 1);
		unk_0x7653D561C9574763(0, 78, 1);
		unk_0x7653D561C9574763(0, 286, 1);
		unk_0x7653D561C9574763(0, 287, 1);
		unk_0x7653D561C9574763(0, 79, 1);
		unk_0x7653D561C9574763(0, 80, 1);
		unk_0x7653D561C9574763(0, 81, 1);
		unk_0x7653D561C9574763(0, 82, 1);
		unk_0x7653D561C9574763(0, 86, 1);
		unk_0x7653D561C9574763(0, 59, 1);
		unk_0x7653D561C9574763(0, 60, 1);
		unk_0x7653D561C9574763(0, 61, 1);
		unk_0x7653D561C9574763(0, 62, 1);
		unk_0x7653D561C9574763(0, 63, 1);
		unk_0x7653D561C9574763(0, 64, 1);
		unk_0x7653D561C9574763(0, 87, 1);
		unk_0x7653D561C9574763(0, 88, 1);
		unk_0x7653D561C9574763(0, 89, 1);
		unk_0x7653D561C9574763(0, 90, 1);
		unk_0x7653D561C9574763(0, 107, 1);
		unk_0x7653D561C9574763(0, 108, 1);
		unk_0x7653D561C9574763(0, 109, 1);
		unk_0x7653D561C9574763(0, 110, 1);
		unk_0x7653D561C9574763(0, 111, 1);
		unk_0x7653D561C9574763(0, 112, 1);
		unk_0x7653D561C9574763(0, 113, 1);
		unk_0x7653D561C9574763(0, 114, 1);
		unk_0x7653D561C9574763(0, 91, 1);
		unk_0x7653D561C9574763(0, 92, 1);
		unk_0x7653D561C9574763(0, 68, 1);
		unk_0x7653D561C9574763(0, 102, 1);
		unk_0x7653D561C9574763(0, 136, 1);
		unk_0x7653D561C9574763(0, 137, 1);
		unk_0x7653D561C9574763(0, 138, 1);
		unk_0x7653D561C9574763(0, 139, 1);
		unk_0x7653D561C9574763(0, 102, 1);
	}
}

int func_149()
{
	var uVar0;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x7158135695FAE89D(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0xAB793EA186AB8DAA(uVar0, -1, 0) == unk_0xE2D3D51028F0428A())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_150()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_157())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_156())
	{
		return 1;
	}
	if (func_155(159))
	{
		if (!func_154())
		{
			return 1;
		}
	}
	if (func_155(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_151() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_151()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_151()
{
	switch (func_153())
	{
		case 0:
			return func_152();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_152()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_153()
{
	return Global_31959;
}

bool func_154()
{
	return Global_2714762.f_698;
}

int func_155(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_156()
{
	return Global_2725403;
}

bool func_157()
{
	return Global_2714762.f_693;
}

void func_158()
{
	if (iLocal_156 == 1)
	{
		unk_0xAC765EF46E85A446(7);
		unk_0xAC765EF46E85A446(1);
		unk_0xAC765EF46E85A446(3);
		unk_0xAC765EF46E85A446(4);
		unk_0xAC765EF46E85A446(6);
		unk_0xAC765EF46E85A446(8);
		unk_0xAC765EF46E85A446(9);
		unk_0xAC765EF46E85A446(2);
	}
	else
	{
		unk_0xC43E67C9BA871ECB();
	}
}

void func_159(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

bool func_160()
{
	return BitTest(Global_1958711, 5);
}

void func_161()
{
	if (func_162())
	{
		unk_0xB74730632FB72AE5();
		if (unk_0x04B354BE7E7B0632(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_22642 = 1;
			Global_20266.f_1 = 3;
			unk_0xBE3AC6D6682E4A5E();
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
				if (unk_0x0347CCBD719C8ADC(uLocal_140))
				{
					if (func_173())
					{
						if (Global_4539954 == 0)
						{
							if (!BitTest(Global_4541229, 2))
							{
								func_164(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_164(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!BitTest(Global_4541229, 2))
						{
							func_164(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_164(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x0347CCBD719C8ADC(uLocal_140))
			{
				func_164(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_164(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		unk_0xBE3AC6D6682E4A5E();
	}
}

int func_162()
{
	if (Global_4718592.f_163006 == 1)
	{
		if (Global_78319)
		{
			return 0;
		}
	}
	if (Global_4718592.f_163007 == 1)
	{
		if (Global_78319)
		{
			return 0;
		}
	}
	if (unk_0xDFC67688F9088B45() || unk_0x527312C0DF85960A())
	{
		if (BitTest(Global_8137, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_163(var uParam0, char* sParam1)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x6F06CF0E9AB02847();
}

void func_164(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x6F06CF0E9AB02847();
}

int func_165()
{
	if (Global_78319)
	{
		Global_20266 = 3;
	}
	else
	{
		Global_20266 = func_13();
	}
	if (Global_20266 > 3)
	{
		Global_20266 = 3;
	}
	return Global_113386.f_14051[Global_20266 /*20*/].f_7;
}

void func_166()
{
	if (Global_20266.f_1 > 3)
	{
		Global_20266.f_1 = 8;
	}
	Global_22641 = 0;
	iLocal_127 = 0;
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		Local_67 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	}
	if (Global_20208)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_137)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_143();
			func_93();
			unk_0x16E09CCC0BD508DA();
		}
		func_163(uLocal_140, "OPEN_SHUTTER");
		func_158();
		func_128();
		iLocal_129 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_121(1, 1);
		func_125(1);
		func_61();
		func_126();
		func_59(0);
		iLocal_115 = 1;
	}
}

void func_167(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 15);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 15);
	}
}

bool func_168(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

int func_169(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, iParam1))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(iParam0, iParam1);
			if (unk_0xE5965CDF24F93A9F(uVar0))
			{
				iVar1 = unk_0xD664875C4BDB14B0(unk_0x15CAA6D7B11F1A7C(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x7158135695FAE89D(iVar0, iVar3, 0))
					{
						if (unk_0xAB793EA186AB8DAA(iVar0, iVar3, 0) == iParam0)
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

void func_170()
{
}

int func_171(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x131A54781ECD3789() != iParam0 && bParam2)
		{
			unk_0x10B0B2BEC7FAA911(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_172()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (unk_0x6ABFD2A0B56D6940(unk_0xE2D3D51028F0428A()))
		{
			unk_0x42A972967C73AB48(unk_0xE2D3D51028F0428A(), 0, 0);
			unk_0x8ECF6C4A4045833D(fLocal_157);
			unk_0x5C34E45CA45F7A49(fLocal_158);
			unk_0xBFC33DDACAEC2532(fLocal_159);
		}
		else
		{
			unk_0x8ECF6C4A4045833D(fLocal_157);
			unk_0x5C34E45CA45F7A49(fLocal_158);
			unk_0xBFC33DDACAEC2532(fLocal_159);
		}
	}
	unk_0x45209E14B5251BD9(fLocal_160);
	unk_0x707BC059B4839126(fLocal_161);
	unk_0xAA8B9D1D78A7DB5A(fLocal_162);
	unk_0xB385B6BD5599FEE4(fLocal_163);
	func_58();
}

int func_173()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return 1;
}

