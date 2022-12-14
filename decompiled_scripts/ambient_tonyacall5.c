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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_46 = { 0, 0, 0 } ;
	struct<3> Local_49 = { 0, 0, 0 } ;
	float fLocal_52 = 0f;
	struct<3> Local_53 = { 0, 0, 0 } ;
	float fLocal_56 = 0f;
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	var uLocal_63 = 16;
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
	var uLocal_85 = 0;
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
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
#endregion

void __EntryFunction__()
{
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	fLocal_41 = 50f;
	fLocal_42 = 2500f;
	Local_43 = { 409.1539f, -1626.677f, 28.2928f };
	Local_49 = { 409.2747f, -1623.022f, 28.29278f };
	fLocal_52 = 202.6928f;
	Local_53 = { 415.6071f, -1647.604f, 28.2928f };
	fLocal_56 = 85.7173f;
	if (unk_0x4B34601C5C56F3EE(18))
	{
		func_32();
	}
	if (unk_0xB4C854DD86E40FDA(joaat("ambient_tonyacall5")) > 1)
	{
		unk_0xAFBDF6A5E54114C1();
	}
	while (true)
	{
		unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9());
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			Local_46 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		}
		if (unk_0xB7A628320EFF8E47(Local_46, Local_43) > fLocal_42)
		{
			func_32();
		}
		switch (iLocal_37)
		{
			case 0:
				if (func_28())
				{
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				unk_0x8FB472886552D737("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0x8FB472886552D737("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0x8FB472886552D737("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0xD69A0C3662175E68(joaat("prop_phone_ing"));
				if (((unk_0x0152AA00FA3130F1(joaat("prop_phone_ing")) && unk_0x6F940C2636C076AD("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0x6F940C2636C076AD("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0x6F940C2636C076AD("amb@world_human_stand_mobile@female@standing@call@exit"))
				{
					iLocal_37 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_37 = 3;
				}
				break;
			
			case 3:
				func_32();
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	float fVar8;
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	}
	if (!unk_0x55B23FE400FCEA6B(uLocal_38, 0))
	{
		Var3 = { unk_0x6B62510F212526DC(uLocal_38, 1) };
	}
	else
	{
		Var3 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((unk_0xB7A628320EFF8E47(Var0, Var3) > 10000f || unk_0x55B23FE400FCEA6B(uLocal_38, 0)) || func_27())
	{
		return 1;
	}
	switch (iLocal_40)
	{
		case 0:
			if (unk_0xE5965CDF24F93A9F(uLocal_38) && !unk_0x55B23FE400FCEA6B(uLocal_38, 0))
			{
				if (unk_0x8F41785F110B0DA0(uLocal_38, Local_57, 1f, 1f, 1f, 0, 1, 0))
				{
					unk_0x7461D7C5BA953BC7(&uVar7);
					unk_0xA888F8CC04F25CC8(&uVar7);
					unk_0x30E00B59448AB97E(0, fLocal_60, 0);
					unk_0x49D97B076E3590AC(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0xC963A45B50851768(uVar7);
					unk_0x8ACADA903FCAA42F(uLocal_38, uVar7);
					unk_0x7461D7C5BA953BC7(&uVar7);
					iLocal_40 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xE5965CDF24F93A9F(uLocal_38) && !unk_0x55B23FE400FCEA6B(uLocal_38, 0))
			{
				if (unk_0x0829092F169950AB(uLocal_38) == 1)
				{
					if (!unk_0xE5965CDF24F93A9F(uLocal_39))
					{
						if (unk_0xFCF559C8631ABED7(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar8 = unk_0xD01FAFCE275C94F3(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar8 >= 0.157f)
							{
								uLocal_39 = unk_0x0E536D72AB30F4C8(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
								unk_0x9A97DC6DBC7B223D(uLocal_39, uLocal_38, unk_0xB897FCFCFA664B38(uLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
							}
						}
					}
				}
				else if (unk_0x0829092F169950AB(uLocal_38) == 2)
				{
					iVar6 = (unk_0x5853B15F78E1A265(0, 65535) % 2);
					if (iVar6 == 0)
					{
						if (func_4(&uLocal_63, "TOWAUD", "TONYA_CALL5", 8, 0, 0, 0))
						{
							iLocal_40 = 2;
						}
					}
					else if (func_4(&uLocal_63, "TOWAUD", "TONYA_CALL6", 8, 0, 0, 0))
					{
						iLocal_40 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x55B23FE400FCEA6B(uLocal_38, 0))
			{
				if (!func_3())
				{
					unk_0x7461D7C5BA953BC7(&uVar7);
					unk_0xA888F8CC04F25CC8(&uVar7);
					unk_0x49D97B076E3590AC(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xC9FEFB406C44F60B(0, "WORLD_HUMAN_SMOKING", -1, 1);
					unk_0xC963A45B50851768(uVar7);
					unk_0x8ACADA903FCAA42F(uLocal_38, uVar7);
					unk_0x7461D7C5BA953BC7(&uVar7);
					iLocal_40 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (unk_0xB7A628320EFF8E47(Var0, Var3) < 25f)
			{
				if (unk_0x4DE6A646AFB7CF5C(0) != 4)
				{
					if (func_4(&uLocal_63, "TOWAUD", "TOW_MESS3", 8, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_40 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (unk_0x83666F9FB8FEBD4B() > 10000)
			{
				iLocal_40 = 3;
			}
			break;
	}
	return 0;
}

void func_2()
{
	if (unk_0xE5965CDF24F93A9F(uLocal_38) && !unk_0x55B23FE400FCEA6B(uLocal_38, 0))
	{
		if (unk_0x0829092F169950AB(uLocal_38) == 1)
		{
			if (unk_0xE5965CDF24F93A9F(uLocal_39))
			{
				unk_0x4BDA5AFD88C085EB(&uLocal_39);
				unk_0xF30F15F203736DE4(uLocal_38, unk_0xE2D3D51028F0428A(), -1, 0, 2);
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(uLocal_38) && !unk_0x55B23FE400FCEA6B(uLocal_38, 0))
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_39))
		{
			if (unk_0x174CED88B97C78D9(uLocal_38, joaat("script_task_start_scenario_in_place")) == 1)
			{
				unk_0x4BDA5AFD88C085EB(&uLocal_39);
			}
		}
	}
}

int func_3()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_25();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2E5F8A288A954523())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_23();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			unk_0xB0550BC91B0159D6(&Global_8136, 20);
			unk_0xB0550BC91B0159D6(&Global_8137, 17);
			unk_0xB0550BC91B0159D6(&Global_8138, 0);
			if (bParam2)
			{
				func_15();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (func_14())
				{
					return 0;
				}
				if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x8DE48073046D4CF0(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9()))
					{
						return 0;
					}
					if (unk_0x3DA4842FA4407BE2(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
					{
						return 0;
					}
				}
			}
			if (func_13())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_12();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_11();
		func_6();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_25();
	}
	return 0;
}

void func_6()
{
	if (!func_7())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_7()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_10())
	{
		return 0;
	}
	if (func_8(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	return 1;
}

bool func_8(int iParam0)
{
	return func_9(iParam0, 20);
}

var func_9(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_10()
{
	return -1;
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD681CC2BC1084DB6(0);
	Global_21605 = 1;
}

void func_12()
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	unk_0xB0550BC91B0159D6(&Global_8137, 16);
}

int func_13()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar1, 1);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x2358AE4C940CF1DF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_15()
{
	if (func_22(14))
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
		Global_20266 = func_16();
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

var func_16()
{
	func_17();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_17()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_20(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_19(unk_0xE2D3D51028F0428A());
			if (func_18(iVar0) && (!func_22(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_18(Global_113386.f_2363.f_539.f_4321))
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

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_22(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

bool func_24(int iParam0, int iParam1)
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

void func_25()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if ((unk_0xA3329B7A7520670E() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(1);
		Global_21605 = 6;
		return;
	}
}

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = uParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

int func_27()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && !unk_0x55B23FE400FCEA6B(uLocal_38, 0))
	{
		if (unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), uLocal_38) || unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0xE5965CDF24F93A9F(uLocal_39))
			{
				unk_0xE6451C2F193342C7(uLocal_39, 1, 1);
			}
			unk_0xD681CC2BC1084DB6(0);
			if (unk_0x174CED88B97C78D9(uLocal_38, joaat("script_task_smart_flee_ped")) != 1)
			{
				unk_0xABC2CA6F28903308(uLocal_38, 1);
				unk_0x7734082B0EDB0BE0(uLocal_38, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_28()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	}
	unk_0x72E575062E5D1004(Var0, fLocal_41, 1, 1, &uVar3, 0, 1, -1);
	if (unk_0xE5965CDF24F93A9F(uVar3) && !unk_0x55B23FE400FCEA6B(uVar3, 0))
	{
		iVar4 = unk_0x15CAA6D7B11F1A7C(uVar3);
		if (iVar4 == joaat("ig_tonya"))
		{
			uLocal_38 = uVar3;
			unk_0x2D58A6131679D82C(uLocal_38, 1, 0);
			unk_0x62BDDA84CCCF90A9(uLocal_38, 0);
			unk_0xA7266A50941DBAEA(uLocal_38, 0);
			unk_0xD8B630F464FE1D6D(uLocal_38, "TONYA");
			unk_0xFF4BEB6CFF55A013(uLocal_38, joaat("player"));
			func_31(&uLocal_63, 3, uLocal_38, "TONYA", 1, 1);
			func_30();
			if (!func_29(Local_57))
			{
				if (unk_0x174CED88B97C78D9(uLocal_38, joaat("script_task_follow_nav_mesh_to_coord")) != 1)
				{
					unk_0x7D1424753688EE7A(uLocal_38, Local_57, 1f, -1, 0.25f, 0, fLocal_60);
					unk_0xABC2CA6F28903308(uLocal_38, 1);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_29(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	struct<3> Var0;
	
	if (unk_0xE5965CDF24F93A9F(uLocal_38) && !unk_0x55B23FE400FCEA6B(uLocal_38, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(uLocal_38, 1) };
		if (func_29(Local_57))
		{
			fLocal_61 = unk_0x2A488C176D52CCA5(Var0, Local_49);
			fLocal_62 = unk_0x2A488C176D52CCA5(Var0, Local_53);
			if (fLocal_61 < fLocal_62)
			{
				Local_57 = { Local_49 };
				fLocal_60 = fLocal_52;
			}
			else
			{
				Local_57 = { Local_53 };
				fLocal_60 = fLocal_56;
			}
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
				{
					Local_57 = { Local_53 };
					fLocal_60 = fLocal_56;
				}
			}
		}
	}
}

void func_31(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0xF68107C40359970C(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x2378080C93821600(uParam2, 0);
			}
			else
			{
				unk_0x2378080C93821600(uParam2, 1);
			}
		}
		if (!unk_0xF68107C40359970C(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x102D1A546FDB4B6D(uParam2, 0);
			}
			else
			{
				unk_0x102D1A546FDB4B6D(uParam2, 1);
			}
		}
	}
}

void func_32()
{
	unk_0xAFC1FBF3F6AE7B9A("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0xAFC1FBF3F6AE7B9A("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0xAFC1FBF3F6AE7B9A("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0xF1A23B343DFEDFD0(joaat("prop_phone_ing"));
	if (unk_0xE5965CDF24F93A9F(uLocal_38))
	{
		if (unk_0x4D21C9FB671ED18F(uLocal_38))
		{
			unk_0x05CB75C0837196F9(&uLocal_38);
		}
		else
		{
			unk_0xB3822DB3D538C8F3(&uLocal_38);
		}
	}
	unk_0xAFBDF6A5E54114C1();
}

