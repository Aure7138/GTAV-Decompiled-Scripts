#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_68 = 0;
	int iLocal_69[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_76 = 0;
	int iLocal_77[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_84 = 0;
	var uLocal_85 = 16;
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
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x4B34601C5C56F3EE(11))
	{
		func_146();
	}
	if (func_104(Local_50, -1, 0, 0, 0))
	{
		func_101(-1);
	}
	else
	{
		unk_0xAFBDF6A5E54114C1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_100();
		if (unk_0xC92F9F18E020B461())
		{
			if (iLocal_59 > unk_0x320D1840B6DAA1CC())
			{
				unk_0x584B286572B48431();
			}
			if (!func_99())
			{
				if (!func_99())
				{
					if (func_98())
					{
						func_146();
					}
				}
				unk_0x6D3F703013ED87D3("RE_CGF", 0);
				switch (iLocal_46)
				{
					case 0:
						if (func_86())
						{
							func_146();
						}
						if (func_85())
						{
							iLocal_53 = 1;
							iLocal_46 = 1;
						}
						break;
					
					case 1:
						func_84();
						if (!func_83() || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
						{
							if ((!unk_0xF68107C40359970C(uLocal_68) && !unk_0xF68107C40359970C(iLocal_69[0])) && !unk_0xF68107C40359970C(iLocal_69[1]))
							{
								if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 969.2191f, 3608.665f, 41.8758f, 100f, 80f, 20f, 0, 1, 0))
								{
									uLocal_60 = func_80(uLocal_68, 0, 145);
									unk_0x7A610B2EC5DA34E7(uLocal_60, 9);
									uLocal_61[0] = func_80(iLocal_69[0], 1, 145);
									uLocal_61[1] = func_80(iLocal_69[1], 1, 145);
									unk_0x3430966AC4550BB9(uLocal_60, 0);
									unk_0x3430966AC4550BB9(uLocal_61[0], 0);
									unk_0x3430966AC4550BB9(uLocal_61[1], 0);
									func_70(1);
								}
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < iLocal_69)
							{
								if (!unk_0xF68107C40359970C(iLocal_69[iVar0]))
								{
									unk_0x7734082B0EDB0BE0(iLocal_69[iVar0], unk_0xE2D3D51028F0428A(), 150f, -1, 0, 0);
								}
								iVar0++;
							}
							if (!unk_0xF68107C40359970C(uLocal_68))
							{
								unk_0x7734082B0EDB0BE0(uLocal_68, unk_0xE2D3D51028F0428A(), 150f, -1, 0, 0);
							}
							func_69();
						}
						break;
				}
			}
			else
			{
				unk_0x8576657A629C4B0A(0f);
				unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
				if (!unk_0xF68107C40359970C(uLocal_68))
				{
					if (unk_0x0747E45CFF1F74AA(uLocal_68, unk_0xE2D3D51028F0428A(), 1))
					{
						unk_0x7734082B0EDB0BE0(uLocal_68, unk_0xE2D3D51028F0428A(), 150f, -1, 0, 0);
						func_69();
					}
					if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), uLocal_68, 150f, 150f, 50f, 0, 1, 0))
					{
						if (iLocal_48 >= 5 && iLocal_47 == 2)
						{
						}
						else
						{
							func_84();
							func_68();
						}
						switch (iLocal_47)
						{
							case 0:
								func_67();
								if (func_83())
								{
									bLocal_55 = true;
									iLocal_48 = 4;
								}
								break;
							
							case 1:
								if (iLocal_48 < 7 && !unk_0xF68107C40359970C(uLocal_68))
								{
									if (unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), uLocal_68, 90f))
									{
										if (unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), uLocal_68) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), uLocal_68))
										{
											func_64();
										}
									}
								}
								func_59();
								break;
							
							case 2:
								func_9();
								break;
							
							case 3:
								func_1();
								break;
						}
					}
					else
					{
						func_69();
					}
				}
				else
				{
					if (unk_0x12DD4A0B247D9B4D(uLocal_60))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_60);
					}
					if (((!unk_0xF68107C40359970C(iLocal_69[0]) && !unk_0xF68107C40359970C(iLocal_69[1])) && !unk_0x55B23FE400FCEA6B(iLocal_77[0], 0)) && !unk_0x55B23FE400FCEA6B(iLocal_77[1], 0))
					{
						func_69();
					}
					iVar1 = 0;
					iVar2 = 0;
					while (iVar2 < iLocal_69)
					{
						if (!unk_0xF68107C40359970C(iLocal_69[iVar2]))
						{
							unk_0xC1A74225341AA9FB(iLocal_69[iVar2], unk_0xE2D3D51028F0428A(), 0, 16);
							unk_0xABC2CA6F28903308(iLocal_69[iVar2], 1);
							if (!unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_69[iVar2], 150f, 150f, 50f, 0, 1, 0))
							{
								func_69();
							}
							iVar1 = 1;
						}
						else if (unk_0x12DD4A0B247D9B4D(uLocal_61[iVar2]))
						{
							unk_0xFFD8EB5462B07B59(&(uLocal_61[iVar2]));
						}
						iVar2++;
					}
					if (iVar1 == 0)
					{
						func_69();
					}
				}
			}
		}
		else
		{
			func_146();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_53 && !iLocal_58)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0x12DD4A0B247D9B4D(uLocal_60))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_60);
		}
		if (!unk_0xF68107C40359970C(uLocal_68))
		{
			unk_0x0407CF7EFEE35240(uLocal_68, 0);
			unk_0x50274A7EACA3133A(uLocal_68, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_69)
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_61[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_61[iVar0]));
			}
			if (!unk_0xF68107C40359970C(iLocal_69[iVar0]) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0x55B23FE400FCEA6B(iLocal_77[iVar0], 0))
					{
						unk_0xB69D13E19147910F(iLocal_69[iVar0], iLocal_77[iVar0], unk_0xE2D3D51028F0428A(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0xABC2CA6F28903308(iLocal_69[iVar0], 1);
					}
					else
					{
						unk_0x7734082B0EDB0BE0(iLocal_69[iVar0], unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0x7734082B0EDB0BE0(iLocal_69[iVar0], unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
				}
				unk_0x50274A7EACA3133A(iLocal_69[iVar0], 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_77)
		{
			if (!unk_0x55B23FE400FCEA6B(iLocal_77[iVar0], 0))
			{
				unk_0x3D81769BEC61BFF8(&(iLocal_77[iVar0]));
				if (unk_0xA37204C64473B324("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0x0AF8D3A06BB92903("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0x8576657A629C4B0A(1f);
		unk_0x13A2865660B9B033(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		unk_0xEC6D4F9C59CDA6F5();
		unk_0x07CECF421D895F3D(3, 1);
		unk_0x07CECF421D895F3D(5, 1);
		func_3(&uLocal_85, 1);
		func_3(&uLocal_85, 2);
		func_3(&uLocal_85, 3);
		func_3(&uLocal_85, 4);
		iLocal_58 = 1;
	}
	if (unk_0x987A5F1E1A67E3C0(func_2(unk_0x9E2D6C50374FCFA9()), Local_50, 1) > 50f)
	{
		func_146();
	}
}

Vector3 func_2(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	Global_20471 = 0;
	func_5();
}

void func_5()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
	}
}

int func_6(char* sParam0)
{
	var uVar0;
	
	if (func_8())
	{
		MemCopy(&uVar0, {func_7()}, 4);
		if (unk_0x3C57C2F07FEE34D2(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_7()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

int func_8()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_48)
	{
		case 0:
			if (unk_0xC9D9444186B5A374() > 2000)
			{
				iVar0 = 0;
				while (iVar0 < iLocal_69)
				{
					if (!unk_0xF68107C40359970C(iLocal_69[iVar0]) && !unk_0x55B23FE400FCEA6B(iLocal_77[iVar0], 0))
					{
						if (!unk_0x12DD4A0B247D9B4D(uLocal_61[iVar0]))
						{
							uLocal_61[iVar0] = func_80(iLocal_69[iVar0], 1, 145);
							if (unk_0xD5C6B5E3B93A5EDC(iLocal_69[iVar0], 0))
							{
								if (!bLocal_55)
								{
									unk_0x0E6C3A4EFA9D9D35(iLocal_69[iVar0], unk_0xE2D3D51028F0428A(), 0, 0f, 0f, 0f, 150f, 100, 1, -753768974);
								}
								else
								{
									unk_0xA888F8CC04F25CC8(&uLocal_84);
									unk_0xC1A74225341AA9FB(0, unk_0xE2D3D51028F0428A(), 0, 16);
									unk_0xC963A45B50851768(uLocal_84);
									unk_0x8ACADA903FCAA42F(iLocal_69[iVar0], uLocal_84);
									unk_0x7461D7C5BA953BC7(&uLocal_84);
									unk_0xABC2CA6F28903308(iLocal_69[iVar0], 1);
								}
							}
						}
					}
					iVar0++;
				}
				if (!func_8())
				{
					if (func_42(&uLocal_85, "RECGFAU", "RECGF_BIKERS", 4, 0, 0, 0))
					{
						iLocal_48++;
					}
				}
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iLocal_69)
			{
				if (!unk_0xF68107C40359970C(iLocal_69[iVar1]))
				{
					if (unk_0x8F41785F110B0DA0(iLocal_69[iVar1], 904.3153f, 3631.684f, 31.574f, 7f, 7f, 7f, 0, 1, 0))
					{
						if (!unk_0x55B23FE400FCEA6B(iLocal_77[iVar1], 0))
						{
							unk_0x5545B7D117BB40B4(iLocal_77[iVar1], 0);
						}
						if (unk_0xD5C6B5E3B93A5EDC(iLocal_69[iVar1], 0))
						{
							unk_0xA888F8CC04F25CC8(&uLocal_84);
							unk_0xAB7639D658BBCCEE(0, 0, 0);
							unk_0xC1A74225341AA9FB(0, unk_0xE2D3D51028F0428A(), 0, 16);
							unk_0xC963A45B50851768(uLocal_84);
							unk_0x8ACADA903FCAA42F(iLocal_69[iVar1], uLocal_84);
							unk_0x7461D7C5BA953BC7(&uLocal_84);
							unk_0xABC2CA6F28903308(iLocal_69[iVar1], 1);
						}
					}
					if (!unk_0xD5C6B5E3B93A5EDC(iLocal_69[iVar1], 0))
					{
						unk_0xC1A74225341AA9FB(iLocal_69[iVar1], unk_0xE2D3D51028F0428A(), 0, 16);
						unk_0xABC2CA6F28903308(iLocal_69[iVar1], 1);
					}
					if (!unk_0x55B23FE400FCEA6B(iLocal_77[iVar1], 0))
					{
						if (unk_0x8F33D7496432068D(iLocal_77[iVar1]))
						{
						}
					}
				}
				if (unk_0xF68107C40359970C(iLocal_69[iVar1]))
				{
					if (unk_0x12DD4A0B247D9B4D(uLocal_61[iVar1]))
					{
						unk_0xFFD8EB5462B07B59(&(uLocal_61[iVar1]));
					}
				}
				iVar1++;
			}
			if (((unk_0xF68107C40359970C(iLocal_69[2]) && unk_0xF68107C40359970C(iLocal_69[3])) && unk_0xF68107C40359970C(iLocal_69[4])) && unk_0xF68107C40359970C(iLocal_69[5]))
			{
				unk_0x0AF8D3A06BB92903("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
				iLocal_48++;
			}
			break;
		
		case 2:
			func_41(1500);
			if (!unk_0xF68107C40359970C(uLocal_68))
			{
				unk_0x03A927199A2DFE46(uLocal_68);
				unk_0xA888F8CC04F25CC8(&uLocal_84);
				unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2056, 2);
				unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), -1);
				unk_0xC963A45B50851768(uLocal_84);
				unk_0x8ACADA903FCAA42F(uLocal_68, uLocal_84);
				unk_0x7461D7C5BA953BC7(&uLocal_84);
			}
			if (!unk_0x55B23FE400FCEA6B(uLocal_76, 0))
			{
				unk_0xE68645525D451A8B(uLocal_76);
				if (!unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), uLocal_68, 5f, 5f, 5f, 0, 1, 0))
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_REWARD", 4, 0, 0, 0);
				}
			}
			iLocal_48++;
			break;
		
		case 3:
			if (!unk_0xF68107C40359970C(uLocal_68))
			{
				if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), uLocal_68, 6f, 6f, 6f, 0, 1, 0))
				{
					if (unk_0x2E7F5417D4F4DD69(uLocal_68, unk_0xE2D3D51028F0428A(), 60f))
					{
						if (!func_8())
						{
							if (func_42(&uLocal_85, "RECGFAU", "RECGF_END", 4, 0, 0, 0))
							{
								iLocal_48++;
							}
						}
					}
				}
			}
			if (!unk_0xF68107C40359970C(uLocal_68))
			{
				if (!unk_0x77A43AFA9AAEC041(uLocal_68, unk_0xE2D3D51028F0428A(), 120f, 120f, 120f, 0, 1, 0))
				{
					func_10();
				}
			}
			if (!unk_0x55B23FE400FCEA6B(uLocal_76, 0))
			{
				if (unk_0x0747E45CFF1F74AA(uLocal_76, unk_0xE2D3D51028F0428A(), 0))
				{
					func_69();
				}
			}
			break;
		
		case 4:
			iLocal_48++;
			break;
		
		case 5:
			if (!unk_0xF68107C40359970C(uLocal_68) && !unk_0x55B23FE400FCEA6B(uLocal_76, 0))
			{
				unk_0xA888F8CC04F25CC8(&uLocal_84);
				unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 1500);
				unk_0xB486640392EC50BB(0, uLocal_76, -1, -1, 2f, 8, 0);
				unk_0x19C58BA8A663B64B(0, 2000);
				unk_0x49D97B076E3590AC(0, "veh@drivebystd_ds_grenades", "drop_grenade", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xAD6CDBCDA713560A(0, uLocal_76, 10f, 786603);
				unk_0xC963A45B50851768(uLocal_84);
				unk_0x8ACADA903FCAA42F(uLocal_68, uLocal_84);
				unk_0x7461D7C5BA953BC7(&uLocal_84);
				unk_0xABC2CA6F28903308(uLocal_68, 1);
				unk_0x11647D34B93A72EB(uLocal_76, 1);
				iLocal_48++;
			}
			break;
		
		case 6:
			if (!unk_0xF68107C40359970C(uLocal_68))
			{
				if (unk_0xFCF559C8631ABED7(uLocal_68, "veh@drivebystd_ds_grenades", "drop_grenade", 3))
				{
					if (unk_0xD01FAFCE275C94F3(uLocal_68, "veh@drivebystd_ds_grenades", "drop_grenade") > 0.436f && unk_0xD5C6B5E3B93A5EDC(uLocal_68, 0))
					{
						unk_0xAE315B17AC08C2A9(unk_0xCACAD935C0BEE14F(unk_0xB3FF0049C1FD38EC(uLocal_68, 0), -1f, 0f, 0f), 1000, 1, 0);
						iLocal_48++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_8())
			{
				func_42(&uLocal_85, "RECGFAU", "RECGF_END2", 4, 0, 0, 0);
				func_10();
			}
			break;
	}
}

void func_10()
{
	while (func_8())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_40())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_14(-1, 0);
	func_11();
	iLocal_47 = 3;
}

void func_11()
{
	func_12();
}

int func_12()
{
	if (func_13(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

int func_13(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_14(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_37(iParam0))
	{
		func_36(iParam0, iParam1);
		if (!func_35(51))
		{
			func_25("RE_REWARD", 1, 0, 4000, 10000, func_28(), 0, 138, 0);
			func_24(51);
		}
		if (func_23(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_22(iParam0, iParam1) != 322)
		{
			func_16(func_22(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_15(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_15(7);
			}
			else
			{
				func_15(1);
			}
		}
	}
}

void func_15(int iParam0)
{
	Global_113372 = iParam0;
}

void func_16(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_20((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_17();
	}
}

void func_17()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					unk_0x423A6008CEED5D6C(joaat("num_rndevents_completed"), Global_113109, 0);
					unk_0xCED9E32812D6C7C7(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		iVar9 = Global_113112;
	}
	else
	{
		iVar9 = Global_113126;
	}
	unk_0x076A5661EF5ABEE4(joaat("num_missions_completed"), Global_113122, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_missions_available"), Global_113105, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_completed"), Global_113123, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_available"), Global_113106, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_completed"), Global_113124, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_available"), Global_113107, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_completed"), Global_113125, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_available"), Global_113108, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_available"), Global_113112, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_completed"), (Global_113128 + Global_113127), 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_available"), (Global_113111 + Global_113110), 1);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	unk_0xD9B28F1445FFCEE7(joaat("total_progress_made"), Global_113386.f_10194.f_3853, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_story_missions"), Global_113129, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_ambient_missions"), Global_113130, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_oddjobs"), Global_113131, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853))
	{
		func_19(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_78319)
		{
			if (func_18() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_12();
				}
			}
		}
	}
}

int func_18()
{
	return Global_31959;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xE70CD2CDEE98DF14(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEE587CFF91CF5EDA(iParam0, iParam1);
	}
	return 0;
}

void func_20(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

int func_21()
{
	return Global_1574918;
}

int func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xCED9E32812D6C7C7(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_25(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_26(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_26(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3C57C2F07FEE34D2(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (unk_0x320D1840B6DAA1CC() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((unk_0x320D1840B6DAA1CC() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_27();
	}
}

void func_27()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_28()
{
	func_29();
	switch (Global_113386.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_29()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_33(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_32(unk_0xE2D3D51028F0428A());
			if (func_31(iVar0) && (!func_30(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_31(Global_113386.f_2363.f_539.f_4321))
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

bool func_30(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_36(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_38()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x05CBA41180F5D521(), 64);
	uVar16 = func_39(Var0);
	return uVar16;
}

int func_39(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x2E87280918B16506(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_40()
{
	return 1;
}

void func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = (unk_0x320D1840B6DAA1CC() + iParam0);
	while (unk_0x320D1840B6DAA1CC() <= iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_59 > unk_0x320D1840B6DAA1CC())
		{
			unk_0x584B286572B48431();
		}
	}
}

bool func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_55();
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
				func_53();
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
				if (func_52())
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
			if (func_51())
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
			func_50();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_49();
		func_44();
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
		func_57();
	}
	return 0;
}

void func_44()
{
	if (!func_45())
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

int func_45()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_48())
	{
		return 0;
	}
	if (func_46(unk_0x9E2D6C50374FCFA9()))
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

bool func_46(int iParam0)
{
	return func_47(iParam0, 20);
}

var func_47(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_48()
{
	return -1;
}

void func_49()
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

void func_50()
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

int func_51()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_52()
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

void func_53()
{
	if (func_30(14))
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
		Global_20266 = func_54();
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

int func_54()
{
	func_29();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_55()
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

bool func_56(int iParam0, int iParam1)
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

void func_57()
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

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_59()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 0:
			if (!unk_0xF68107C40359970C(uLocal_68))
			{
				iLocal_48++;
			}
			break;
		
		case 1:
			if (!unk_0xF68107C40359970C(uLocal_68))
			{
				if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), uLocal_68, 20f, 20f, 20f, 0, 1, 0))
				{
					unk_0xF30F15F203736DE4(uLocal_68, unk_0xE2D3D51028F0428A(), -1, 2060, 2);
					func_42(&uLocal_85, "RECGFAU", "RECGF_THX", 4, 0, 0, 0);
					iLocal_48++;
				}
			}
			break;
		
		case 2:
			if (!unk_0xF68107C40359970C(iLocal_68) && !unk_0x55B23FE400FCEA6B(uLocal_76, 0))
			{
				unk_0xA888F8CC04F25CC8(&uLocal_84);
				unk_0x7D1424753688EE7A(0, 916.5764f, 3602.146f, 31.9262f, 1f, 40000, 1048576000, 0, 1193033728);
				unk_0xC963A45B50851768(uLocal_84);
				unk_0x8ACADA903FCAA42F(iLocal_68, uLocal_84);
				unk_0x7461D7C5BA953BC7(&uLocal_84);
				iLocal_48++;
			}
			break;
		
		case 3:
			if (!func_8())
			{
				if (func_54() == 0)
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_JABM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_JABF", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_JABBER", 4, 0, 0, 0);
				}
				iLocal_48++;
			}
			break;
		
		case 4:
			if (!unk_0xF68107C40359970C(iLocal_68))
			{
				if (unk_0x8F41785F110B0DA0(iLocal_68, 916.5764f, 3602.146f, 31.9262f, 3.3f, 3.3f, 3.3f, 0, 1, 0))
				{
					if (!unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_68, 8f, 8f, 8f, 0, 1, 0))
					{
						if (!func_8())
						{
							if (func_42(&uLocal_85, "RECGFAU", "RECGF_STASH", 4, 0, 0, 0))
							{
								unk_0x529D306014D3C29A(iLocal_68, unk_0xE2D3D51028F0428A(), -1);
								if (!unk_0x55B23FE400FCEA6B(uLocal_76, 0))
								{
									unk_0xE68645525D451A8B(uLocal_76);
								}
								iLocal_48++;
							}
						}
					}
					else
					{
						if (!unk_0x55B23FE400FCEA6B(uLocal_76, 0))
						{
							unk_0xE68645525D451A8B(uLocal_76);
						}
						iLocal_48 = 6;
					}
				}
			}
			break;
		
		case 5:
			if (!func_8())
			{
				if (func_54() == 0)
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_STASHM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_STASHF", 4, 0, 0, 0);
				}
				iLocal_48++;
			}
			break;
		
		case 6:
			if (!unk_0xF68107C40359970C(iLocal_68))
			{
				if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_68, 8f, 8f, 8f, 0, 1, 0))
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A()))
					{
						if (func_62())
						{
							func_41(1000);
							if ((!unk_0xF68107C40359970C(iLocal_68) && !unk_0xF68107C40359970C(iLocal_69[2])) && !unk_0x55B23FE400FCEA6B(uLocal_76, 0))
							{
								unk_0xA888F8CC04F25CC8(&uLocal_84);
								unk_0xF9D446AF83E7A624(0, uLocal_76, -1, -1, 1f);
								unk_0xF30F15F203736DE4(0, iLocal_69[2], 2000, 0, 2);
								unk_0x529D306014D3C29A(0, iLocal_69[2], 0);
								unk_0xC963A45B50851768(uLocal_84);
								unk_0x8ACADA903FCAA42F(iLocal_68, uLocal_84);
								unk_0x7461D7C5BA953BC7(&uLocal_84);
								func_41(2000);
								func_4();
								func_41(0);
								func_42(&uLocal_85, "RECGFAU", "RECGF_HIDE", 4, 0, 0, 0);
								if ((!unk_0xF68107C40359970C(iLocal_68) && !unk_0x55B23FE400FCEA6B(uLocal_76, 0)) && unk_0xD5C6B5E3B93A5EDC(iLocal_68, 0))
								{
									iLocal_48++;
								}
								else
								{
									if (!unk_0xF68107C40359970C(iLocal_68) && !unk_0xF68107C40359970C(iLocal_69[2]))
									{
										unk_0xA888F8CC04F25CC8(&uLocal_84);
										unk_0x402A537158A551BD(0, -1);
										unk_0xC963A45B50851768(uLocal_84);
										unk_0x8ACADA903FCAA42F(iLocal_68, uLocal_84);
										unk_0x7461D7C5BA953BC7(&uLocal_84);
									}
									bLocal_55 = false;
									unk_0x5AE11BC36633DE4E(0);
									iLocal_48++;
								}
							}
						}
					}
				}
			}
			if (!unk_0x55B23FE400FCEA6B(uLocal_76, 0))
			{
				if (unk_0x0747E45CFF1F74AA(uLocal_76, unk_0xE2D3D51028F0428A(), 0))
				{
					func_69();
				}
			}
			break;
		
		case 7:
			if ((((!unk_0xF68107C40359970C(iLocal_68) && !unk_0x55B23FE400FCEA6B(uLocal_76, 0)) && !unk_0xF6F5D18EF8EAB859(iLocal_68, uLocal_76, 0)) && !unk_0x1CFDD57741085128(iLocal_68, 0)) && !unk_0xD2FB3E2F21B617DF(iLocal_68))
			{
			}
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (!unk_0xF68107C40359970C(iLocal_69[iVar0]) && !unk_0x55B23FE400FCEA6B(iLocal_77[iVar0], 0))
				{
					if (((((unk_0x955815B1A675A225(unk_0xE2D3D51028F0428A(), (916.3351f - 100f), (3602.048f - 100f), (31.9209f - 100f), (916.3351f + 100f), (3602.048f + 100f), (31.9209f + 100f), 0, 1) || unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_69[iVar0], 5f, 5f, 5f, 0, 1, 0)) || unk_0x0747E45CFF1F74AA(iLocal_69[iVar0], unk_0xE2D3D51028F0428A(), 1)) || unk_0x0747E45CFF1F74AA(iLocal_77[iVar0], unk_0xE2D3D51028F0428A(), 1)) || unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), iLocal_69[iVar0])) || unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), iLocal_77[iVar0]))
					{
						bLocal_55 = true;
						unk_0x5AE11BC36633DE4E(2000);
						iLocal_48 = 0;
						iLocal_47 = 2;
					}
				}
				iVar0++;
			}
			if (((unk_0xF68107C40359970C(iLocal_69[2]) && unk_0xF68107C40359970C(iLocal_69[3])) && unk_0xF68107C40359970C(iLocal_69[4])) && unk_0xF68107C40359970C(iLocal_69[5]))
			{
				iLocal_48 = 2;
				iLocal_47 = 2;
			}
			if (unk_0x8F41785F110B0DA0(iLocal_69[2], 970.3641f, 3629.886f, 31.3694f, 5f, 5f, 5f, 0, 1, 0) || unk_0xC9D9444186B5A374() > 13000)
			{
				func_41(2000);
				iVar0 = 0;
				while (iVar0 < iLocal_69)
				{
					if (!unk_0xF68107C40359970C(iLocal_69[iVar0]))
					{
						if (!unk_0x55B23FE400FCEA6B(iLocal_77[iVar0], 0))
						{
							if (unk_0xF6F5D18EF8EAB859(iLocal_69[iVar0], iLocal_77[iVar0], 0))
							{
								unk_0xB69D13E19147910F(iLocal_69[iVar0], iLocal_77[iVar0], unk_0xE2D3D51028F0428A(), (iVar0 - 2) + 10, 60f, 786475, 5f, 10f, 1);
							}
						}
					}
					iVar0++;
				}
				if (!unk_0xF68107C40359970C(iLocal_68))
				{
					if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_68, 15f, 15f, 15f, 0, 1, 0))
					{
						func_60();
						func_41(0);
						func_42(&uLocal_85, "RECGFAU", "RECGF_GANG", 4, 0, 0, 0);
					}
				}
				unk_0x5AE11BC36633DE4E(0);
				iLocal_48 = 0;
				iLocal_47 = 2;
			}
			break;
	}
}

void func_60()
{
	Global_20471 = 0;
	func_61();
}

void func_61()
{
	if (unk_0x2E5F8A288A954523())
	{
		unk_0x82B0661A78CC39CF();
		Global_22616 = 0;
		unk_0xD681CC2BC1084DB6(1);
		Global_21605 = 6;
		return;
	}
}

int func_62()
{
	int iVar0;
	
	if (((((((!unk_0xE5965CDF24F93A9F(iLocal_77[2]) && !unk_0xE5965CDF24F93A9F(iLocal_77[3])) && !unk_0xE5965CDF24F93A9F(iLocal_77[4])) && !unk_0xE5965CDF24F93A9F(iLocal_77[5])) && !unk_0xE5965CDF24F93A9F(iLocal_69[2])) && !unk_0xE5965CDF24F93A9F(iLocal_69[3])) && !unk_0xE5965CDF24F93A9F(iLocal_69[4])) && !unk_0xE5965CDF24F93A9F(iLocal_69[5]))
	{
		unk_0xD69A0C3662175E68(joaat("hexer"));
		unk_0xD69A0C3662175E68(joaat("g_m_y_lost_01"));
		unk_0xD69A0C3662175E68(joaat("g_m_y_lost_02"));
		unk_0x66B27A59829491D3("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		if (unk_0x0152AA00FA3130F1(joaat("hexer")))
		{
			iLocal_77[2] = unk_0xBA715A7BEBA5A1F9(joaat("hexer"), 863.4697f, 3633.5f, 31.9874f, 290.5797f, 1, 1, 0);
			iLocal_77[3] = unk_0xBA715A7BEBA5A1F9(joaat("hexer"), 866.4073f, 3636.039f, 31.9514f, 270.3649f, 1, 1, 0);
			iLocal_77[4] = unk_0xBA715A7BEBA5A1F9(joaat("hexer"), 866.3153f, 3631.587f, 31.9545f, 276.6327f, 1, 1, 0);
			iLocal_77[5] = unk_0xBA715A7BEBA5A1F9(joaat("hexer"), 868.5937f, 3633.523f, 31.9622f, 267.0991f, 1, 1, 0);
			unk_0xF1A23B343DFEDFD0(joaat("hexer"));
			unk_0xC5EAD0C81781889B(iLocal_77[2], 3);
			unk_0xC5EAD0C81781889B(iLocal_77[4], 3);
			iLocal_59 = unk_0x320D1840B6DAA1CC() + 1500;
		}
		if ((unk_0x0152AA00FA3130F1(joaat("g_m_y_lost_01")) && unk_0x0152AA00FA3130F1(joaat("g_m_y_lost_02"))) && unk_0xA37204C64473B324("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
		{
			iLocal_69[2] = unk_0x487C17B41938052C(iLocal_77[2], 22, joaat("g_m_y_lost_01"), -1, 1, 1);
			iLocal_69[3] = unk_0x487C17B41938052C(iLocal_77[3], 22, joaat("g_m_y_lost_02"), -1, 1, 1);
			iLocal_69[4] = unk_0x487C17B41938052C(iLocal_77[4], 22, joaat("g_m_y_lost_01"), -1, 1, 1);
			iLocal_69[5] = unk_0x487C17B41938052C(iLocal_77[5], 22, joaat("g_m_y_lost_02"), -1, 1, 1);
			func_63(&uLocal_85, 4, iLocal_69[4], "RECGFLost3", 0, 1);
			iLocal_59 = unk_0x320D1840B6DAA1CC() + 1500;
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (!unk_0xF68107C40359970C(iLocal_69[iVar0]) && !unk_0x55B23FE400FCEA6B(iLocal_77[iVar0], 0))
				{
					unk_0x2A375326652F1B50(iLocal_77[iVar0], "RE_COUNTRYSIDE_GANG_BIKES", 0);
					unk_0xD6A76BAB45A4B460(iLocal_69[iVar0], 137, 1);
					unk_0x6E9C0F9EAC1F29FD(iLocal_69[iVar0], 0);
					unk_0x71B502FC2E129665(iLocal_69[iVar0], 2);
					unk_0xBC12D08EE7559CCD(iLocal_69[iVar0], 50, 1);
					unk_0x395228F7A14C6543(iLocal_69[iVar0], 2);
					unk_0x78D13FF59B219912(iLocal_69[iVar0], 50f, 20);
					unk_0x3DAB02AAC9E9EC02(iLocal_69[iVar0], 1);
					unk_0x348A212511C78DBF(iLocal_69[iVar0], 13);
					unk_0x5C9D9A4EA475F37E(iLocal_69[iVar0], 100f);
					unk_0xE014FF3C785EEFB5(iLocal_69[iVar0], 100f);
					unk_0xFF4BEB6CFF55A013(iLocal_69[iVar0], uLocal_250);
					unk_0x50274A7EACA3133A(iLocal_69[iVar0], 1);
					unk_0xB11C0CF5CCDFE10A(iLocal_69[iVar0], 3);
					unk_0xA84812D8D6EE8D32(iLocal_69[iVar0], 0);
					unk_0xA7266A50941DBAEA(iLocal_69[iVar0], 1);
					unk_0x06AF73D7E3DF7782(iLocal_69[iVar0], 1, 1000f);
					if (iVar0 > 1 && iVar0 < 5)
					{
						unk_0x9521FB98DB6DDF50(iLocal_69[iVar0], joaat("weapon_pistol"), -1, 1, 1);
					}
					else
					{
						unk_0x9521FB98DB6DDF50(iLocal_69[iVar0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
					}
					unk_0xA888F8CC04F25CC8(&uLocal_84);
					unk_0x3B8F94419979A0B1(0, iLocal_77[2], 966.7098f, 3633.926f, 31.3974f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xE1E1AF00CA06A2B7(0, Local_50, 5000, 0, 2);
					unk_0xC963A45B50851768(uLocal_84);
					unk_0x8ACADA903FCAA42F(iLocal_69[2], uLocal_84);
					unk_0x7461D7C5BA953BC7(&uLocal_84);
					unk_0xA888F8CC04F25CC8(&uLocal_84);
					unk_0x3B8F94419979A0B1(0, iLocal_77[3], 970.6208f, 3636.743f, 31.3666f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xE1E1AF00CA06A2B7(0, Local_50, 5000, 0, 2);
					unk_0xC963A45B50851768(uLocal_84);
					unk_0x8ACADA903FCAA42F(iLocal_69[3], uLocal_84);
					unk_0x7461D7C5BA953BC7(&uLocal_84);
					unk_0xABC2CA6F28903308(iLocal_69[3], 1);
					unk_0xA888F8CC04F25CC8(&uLocal_84);
					unk_0x3B8F94419979A0B1(0, iLocal_77[4], 971.023f, 3631.225f, 31.3807f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xE1E1AF00CA06A2B7(0, Local_50, 5000, 0, 2);
					unk_0xC963A45B50851768(uLocal_84);
					unk_0x8ACADA903FCAA42F(iLocal_69[4], uLocal_84);
					unk_0x7461D7C5BA953BC7(&uLocal_84);
					unk_0xA888F8CC04F25CC8(&uLocal_84);
					unk_0x3B8F94419979A0B1(0, iLocal_77[5], 974.8073f, 3633.771f, 31.3818f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xE1E1AF00CA06A2B7(0, Local_50, 5000, 0, 2);
					unk_0xC963A45B50851768(uLocal_84);
					unk_0x8ACADA903FCAA42F(iLocal_69[5], uLocal_84);
					unk_0x7461D7C5BA953BC7(&uLocal_84);
				}
				iVar0++;
			}
			unk_0xF1A23B343DFEDFD0(joaat("hexer"));
			unk_0xF1A23B343DFEDFD0(joaat("g_m_y_lost_01"));
			unk_0xF1A23B343DFEDFD0(joaat("g_m_y_lost_02"));
			return 1;
		}
	}
	return 0;
}

void func_63(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
				unk_0x2378080C93821600(iParam2, 0);
			}
			else
			{
				unk_0x2378080C93821600(iParam2, 1);
			}
		}
		if (!unk_0xF68107C40359970C(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x102D1A546FDB4B6D(iParam2, 0);
			}
			else
			{
				unk_0x102D1A546FDB4B6D(iParam2, 1);
			}
		}
	}
}

void func_64()
{
	if (!unk_0xF68107C40359970C(iLocal_68))
	{
		unk_0x7734082B0EDB0BE0(iLocal_68, unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
		unk_0xABC2CA6F28903308(iLocal_68, 1);
		if (!unk_0x55B23FE400FCEA6B(iLocal_69[0], 0) && !unk_0x55B23FE400FCEA6B(iLocal_69[1], 0))
		{
			unk_0xF160248D9083ED0C(iLocal_68, 101, 0);
			unk_0x0407CF7EFEE35240(iLocal_68, 0);
			unk_0x913E191F1F726271(iLocal_69[0], iLocal_68, 1000, 0);
			unk_0x913E191F1F726271(iLocal_69[1], iLocal_68, 1000, 0);
		}
		else
		{
			func_4();
			func_41(0);
			if (!unk_0xF68107C40359970C(iLocal_68))
			{
				func_65(iLocal_68, "GENERIC_FRIGHTENED_HIGH", 24);
			}
		}
		func_41(1000);
		func_69();
	}
}

void func_65(var uParam0, char* sParam1, int iParam2)
{
	unk_0xB0C559BD7D5D270D(uParam0, sParam1, func_66(iParam2), 1);
}

int func_66(int iParam0)
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

void func_67()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 0:
			if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_68, 45f, 45f, 20f, 0, 1, 0))
			{
				if (!func_8())
				{
					if (func_54() == 0)
					{
						func_42(&uLocal_85, "RECGFAU", "RECGF_COMM", 4, 0, 0, 0);
					}
					else if (func_54() == 1)
					{
						func_42(&uLocal_85, "RECGFAU", "RECGF_COMF", 4, 0, 0, 0);
					}
					else if (func_54() == 2)
					{
						func_42(&uLocal_85, "RECGFAU", "RECGF_COMT", 4, 0, 0, 0);
					}
					iLocal_48++;
				}
			}
			break;
		
		case 1:
			if (!unk_0xF68107C40359970C(iLocal_68))
			{
				if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_68, 40f, 40f, 20f, 0, 1, 0))
				{
					if (func_42(&uLocal_85, "RECGFAU", "RECGF_HELP", 4, 0, 0, 0))
					{
						iLocal_48++;
					}
				}
			}
			break;
		
		case 2:
			if (!func_8())
			{
				func_42(&uLocal_85, "RECGFAU", "RECGF_SHUTUP", 4, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_48++;
			}
			break;
		
		case 3:
			if ((!unk_0xF68107C40359970C(iLocal_68) && !unk_0xF68107C40359970C(iLocal_69[0])) && !unk_0xF68107C40359970C(iLocal_69[1]))
			{
				if ((unk_0x83666F9FB8FEBD4B() > 5000 && !iLocal_56) && !func_8())
				{
					func_42(&uLocal_85, "RECGFAU", "RECGF_PAYUP", 4, 0, 0, 0);
					iLocal_56 = 1;
				}
				if (unk_0x83666F9FB8FEBD4B() < 28000)
				{
					if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_68, 12f, 12f, 2.5f, 0, 1, 0))
					{
						if (((unk_0x7E006F2E24F03BB4(iLocal_69[0], unk_0xE2D3D51028F0428A()) || unk_0x7E006F2E24F03BB4(iLocal_69[1], unk_0xE2D3D51028F0428A())) || unk_0xD32EE22119FFF87D(iLocal_69[0], unk_0xE2D3D51028F0428A())) || unk_0xD32EE22119FFF87D(iLocal_69[1], unk_0xE2D3D51028F0428A()))
						{
							unk_0xF30F15F203736DE4(iLocal_69[0], unk_0xE2D3D51028F0428A(), 4000, 2056, 4);
							unk_0xF30F15F203736DE4(iLocal_69[1], unk_0xE2D3D51028F0428A(), 4000, 2056, 4);
							if (!iLocal_57)
							{
								func_4();
								func_41(0);
								if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
								{
									func_42(&uLocal_85, "RECGFAU", "RECGF_GETLOS", 4, 0, 0, 0);
								}
								else
								{
									func_42(&uLocal_85, "RECGFAU", "RECGF_BEGONE", 4, 0, 0, 0);
								}
								iLocal_57 = 1;
							}
						}
					}
					else if (!unk_0xFCF559C8631ABED7(iLocal_69[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 3))
					{
						if (!unk_0x2E7F5417D4F4DD69(iLocal_69[0], iLocal_68, 10f))
						{
							unk_0x636B3584208A6D73(iLocal_69[0], iLocal_68, -1, 0);
						}
					}
				}
				else if (!unk_0x55B23FE400FCEA6B(iLocal_77[0], 0) && !unk_0x55B23FE400FCEA6B(iLocal_77[1], 0))
				{
					func_4();
					func_41(0);
					func_42(&uLocal_85, "RECGFAU", "RECGF_SHOOT", 4, 0, 0, 0);
					func_41(2000);
					func_64();
				}
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (!unk_0xF68107C40359970C(iLocal_69[iVar0]))
				{
					unk_0x3E3D339BAD67F6F2(iLocal_69[iVar0], 156, 1);
					unk_0xC1A74225341AA9FB(iLocal_69[iVar0], unk_0xE2D3D51028F0428A(), 0, 16);
					unk_0xABC2CA6F28903308(iLocal_69[iVar0], 1);
				}
				iVar0++;
			}
			if (!unk_0xF68107C40359970C(iLocal_68))
			{
				unk_0x402A537158A551BD(iLocal_68, -1);
			}
			iLocal_48++;
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (unk_0xF68107C40359970C(iLocal_69[iVar0]))
				{
					if (unk_0x12DD4A0B247D9B4D(uLocal_61[iVar0]))
					{
						unk_0xFFD8EB5462B07B59(&(uLocal_61[iVar0]));
						func_3(&uLocal_85, 2);
						func_3(&uLocal_85, 3);
					}
				}
				iVar0++;
			}
			if (unk_0xF68107C40359970C(iLocal_69[0]) && unk_0xF68107C40359970C(iLocal_69[1]))
			{
				iLocal_48 = 0;
				iLocal_47 = 1;
			}
			break;
	}
}

void func_68()
{
	if (!unk_0x0318E2EE6FB4563F(916.4631f, 3601.261f, 31.9327f, 3f))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0x9993EF7FDBCDB632(), 0))
		{
			if (unk_0x8F41785F110B0DA0(unk_0x9993EF7FDBCDB632(), 916.4631f, 3601.261f, 31.9327f, 2f, 2f, 2f, 0, 1, 0))
			{
				unk_0xC64B6E13A6A7F517(unk_0x9993EF7FDBCDB632(), 915.6531f, 3595.061f, 32.0774f, 1, 0, 0, 1);
			}
		}
	}
}

void func_69()
{
	iLocal_47 = 3;
}

int func_70(int iParam0)
{
	if (func_74())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x320D1840B6DAA1CC();
		if (func_23(Global_113375))
		{
			func_71(0);
		}
		unk_0xEFE837B21D5CF02C(1, "RE_TITLE");
		if (iParam0 && func_23(Global_113375))
		{
			unk_0xC70E97154CC5B243();
		}
		return 1;
	}
	return 0;
}

void func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_72(func_73(iParam0), -1);
					Global_113386.f_24995.f_2++;
					unk_0xCED9E32812D6C7C7(&Global_113382, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_72(func_73(iParam0), -1);
					Global_113386.f_24995.f_3++;
					unk_0xCED9E32812D6C7C7(&Global_113382, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_72(func_73(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0xCED9E32812D6C7C7(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_72(var uParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

char* func_73(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_74()
{
	switch (func_75(&Global_32019, 0, 5, 0, unk_0x69CE66B03B2184EB()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_75(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_79(0))
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		unk_0xC099DA307DD6BC62(unk_0xB6BA8B8E3D0B41C6(), 0);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x2481B055C8B5CA09(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *uParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_77(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_76(uParam0, iParam4);
		}
	}
	return 2;
}

void func_76(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_77(int iParam0)
{
	return func_78(iParam0, Global_43052);
}

int func_78(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_79(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_77(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_80(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_81(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(uVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_81(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(uParam0);
	if (unk_0x04D9F44466CBF3CA(uParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_82(unk_0x9315DBF7D972F07A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD809204F14EF9B68(uVar0, bParam1);
		}
		else
		{
			unk_0xA582EE8380437B1B(uVar0, 2);
		}
	}
	else if (unk_0x9044EDB8A7BF67B4(uParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_82(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(uParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_82(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_82(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_83()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!bLocal_55)
	{
		unk_0x9972EFADA7A2A47D(255, uLocal_250, joaat("player"));
		if (!unk_0x55B23FE400FCEA6B(iLocal_69[0], 0) && !unk_0x55B23FE400FCEA6B(iLocal_69[1], 0))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_69[0], unk_0xE2D3D51028F0428A(), 1) || unk_0x0747E45CFF1F74AA(iLocal_69[1], unk_0xE2D3D51028F0428A(), 1))
			{
				func_4();
				return 1;
			}
			if (!unk_0x55B23FE400FCEA6B(unk_0x9993EF7FDBCDB632(), 0))
			{
				if (unk_0x0747E45CFF1F74AA(iLocal_69[0], unk_0x9993EF7FDBCDB632(), 1) || unk_0x0747E45CFF1F74AA(iLocal_69[1], unk_0x9993EF7FDBCDB632(), 1))
				{
					func_4();
					return 1;
				}
			}
		}
		if (!unk_0x55B23FE400FCEA6B(iLocal_77[0], 0) && !unk_0x55B23FE400FCEA6B(iLocal_77[1], 0))
		{
			if (((unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_77[0], 0) || unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_77[1], 0)) || unk_0x0747E45CFF1F74AA(iLocal_77[0], unk_0xE2D3D51028F0428A(), 1)) || unk_0x0747E45CFF1F74AA(iLocal_77[1], unk_0xE2D3D51028F0428A(), 1))
			{
				if (!unk_0xF68107C40359970C(iLocal_69[0]) && !unk_0xF68107C40359970C(iLocal_69[1]))
				{
					if (func_99())
					{
						func_4();
						func_41(0);
						func_42(&uLocal_85, "RECGFAU", "RECGF_BIKES", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
		if (unk_0xF68107C40359970C(iLocal_69[0]) || unk_0xF68107C40359970C(iLocal_69[1]))
		{
			func_4();
			return 1;
		}
		Var0 = { 15f, 15f, 15f };
		Var3 = { -15f, -15f, -15f };
		if (!unk_0xF68107C40359970C(iLocal_69[0]))
		{
			if (unk_0x9AC74C7EF847A074(unk_0x6EA486FF6D815B4B(iLocal_69[0], 31086, 0f, 0f, 0f), 5f, 1))
			{
				func_4();
				return 1;
			}
			Var0 = { Var0 + unk_0x6EA486FF6D815B4B(iLocal_69[0], 31086, 0f, 0f, 0f) };
			Var3 = { Var3 + unk_0x6EA486FF6D815B4B(iLocal_69[0], 31086, 0f, 0f, 0f) };
			if (((unk_0xA1C6623FC1047DAD(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0xA1C6623FC1047DAD(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0xA1C6623FC1047DAD(Var3, Var0, joaat("weapon_grenadelauncher"), 1)) || unk_0xA1C6623FC1047DAD(Var3, Var0, joaat("weapon_stickybomb"), 1))
			{
				func_4();
				return 1;
			}
			if (unk_0x6A1EDF18639D033E(unk_0x6EA486FF6D815B4B(iLocal_69[0], 31086, 0f, 0f, 0f), 3f))
			{
				func_4();
				return 1;
			}
		}
		if (unk_0x955815B1A675A225(unk_0xE2D3D51028F0428A(), (973.053f - 30f), (3616.738f - 30f), (32.6181f - 30f), (973.053f + 30f), (3616.738f + 30f), (32.6181f + 30f), 0, 1))
		{
			func_4();
			return 1;
		}
		if ((!unk_0xF68107C40359970C(iLocal_68) && !unk_0xF68107C40359970C(iLocal_69[0])) && !unk_0xF68107C40359970C(iLocal_69[1]))
		{
			if (iLocal_49 != -1)
			{
				if (((unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_69[0]) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_69[1])) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_69[0])) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_69[1]))
				{
					func_4();
					return 1;
				}
			}
			if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_68, 12f, 12f, 2.5f, 0, 1, 0))
			{
				if (((unk_0x7E006F2E24F03BB4(iLocal_69[0], unk_0xE2D3D51028F0428A()) || unk_0x7E006F2E24F03BB4(iLocal_69[1], unk_0xE2D3D51028F0428A())) || unk_0xD32EE22119FFF87D(iLocal_69[0], unk_0xE2D3D51028F0428A())) || unk_0xD32EE22119FFF87D(iLocal_69[1], unk_0xE2D3D51028F0428A()))
				{
					if (!iLocal_54)
					{
						unk_0x636B3584208A6D73(iLocal_69[0], unk_0xE2D3D51028F0428A(), -1, 0);
						iLocal_54 = 1;
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_60))
					{
						unk_0x3430966AC4550BB9(uLocal_60, 1);
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_61[0]))
					{
						unk_0x3430966AC4550BB9(uLocal_61[0], 1);
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_61[1]))
					{
						unk_0x3430966AC4550BB9(uLocal_61[1], 1);
					}
					if ((!func_8() || func_6("RECGF_SHUTUP")) || func_6("RECGF_PAYUP"))
					{
						if (iLocal_49 == -1)
						{
							iLocal_49 = unk_0x320D1840B6DAA1CC();
							if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
							{
								func_4();
								func_41(0);
								func_42(&uLocal_85, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
							else
							{
								func_4();
								func_41(0);
								func_42(&uLocal_85, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			else
			{
				iLocal_54 = 0;
				iLocal_49 = -1;
			}
			if (iLocal_49 != -1 && unk_0x320D1840B6DAA1CC() > iLocal_49 + 10000)
			{
				func_4();
				func_41(0);
				func_42(&uLocal_85, "RECGFAU", "RECGF_WARNED", 4, 0, 0, 0);
				return 1;
			}
			if (!unk_0x0747E45CFF1F74AA(iLocal_69[0], unk_0xE2D3D51028F0428A(), 1) && !unk_0x0747E45CFF1F74AA(iLocal_69[1], unk_0xE2D3D51028F0428A(), 1))
			{
				if (unk_0x0747E45CFF1F74AA(iLocal_68, unk_0xE2D3D51028F0428A(), 1))
				{
					if (func_99())
					{
						func_4();
						func_41(0);
						func_42(&uLocal_85, "RECGFAU", "RECGF_DEALER", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_84()
{
	if (unk_0x55A0C756C4A8220C(uLocal_76, 0))
	{
		if ((!unk_0x8F41785F110B0DA0(uLocal_76, 915.7905f, 3603.449f, 31.9111f, 5f, 5f, 5f, 0, 1, 0) && !unk_0xF6F5D18EF8EAB859(iLocal_68, iLocal_76, 0)) || unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_76, 1))
		{
			func_64();
		}
	}
	else
	{
		func_64();
	}
}

int func_85()
{
	int iVar0;
	
	if (((((!unk_0xE5965CDF24F93A9F(iLocal_68) && !unk_0xE5965CDF24F93A9F(iLocal_69[0])) && !unk_0xE5965CDF24F93A9F(iLocal_69[1])) && !unk_0xE5965CDF24F93A9F(iLocal_76)) && !unk_0xE5965CDF24F93A9F(iLocal_77[0])) && !unk_0xE5965CDF24F93A9F(iLocal_77[1]))
	{
		unk_0xD69A0C3662175E68(joaat("a_m_m_skidrow_01"));
		unk_0xD69A0C3662175E68(joaat("g_m_y_lost_01"));
		unk_0xD69A0C3662175E68(joaat("g_m_y_lost_02"));
		unk_0xD69A0C3662175E68(joaat("picador"));
		unk_0xD69A0C3662175E68(joaat("hexer"));
		unk_0x8FB472886552D737("random@countryside_gang_fight");
		unk_0x8FB472886552D737("veh@drivebystd_ds_grenades");
		unk_0x3ACA4F727AC4606E("move_m@gangster@var_i");
		if (((((((unk_0x0152AA00FA3130F1(joaat("a_m_m_skidrow_01")) && unk_0x0152AA00FA3130F1(joaat("g_m_y_lost_01"))) && unk_0x0152AA00FA3130F1(joaat("g_m_y_lost_02"))) && unk_0x0152AA00FA3130F1(joaat("picador"))) && unk_0x0152AA00FA3130F1(joaat("hexer"))) && unk_0x6F940C2636C076AD("random@countryside_gang_fight")) && unk_0x6F940C2636C076AD("veh@drivebystd_ds_grenades")) && unk_0xBB103A5DEC572725("move_m@gangster@var_i"))
		{
			unk_0x7CD708DEB04F8474(joaat("picador"), 1);
			unk_0x7CD708DEB04F8474(joaat("hexer"), 1);
			unk_0x208B14CA225DC5A0(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 0, 0, 1);
			unk_0x2915D98110F23A29(Local_50 - Vector(20f, 50f, 80f), Local_50 + Vector(20f, 50f, 70f), 0, 1, 1, 1);
			unk_0x07CECF421D895F3D(3, 0);
			unk_0x07CECF421D895F3D(5, 0);
			unk_0xD642E010A287ADFD("rghLost", &uLocal_250);
			unk_0x9972EFADA7A2A47D(5, uLocal_250, joaat("player"));
			iLocal_68 = unk_0xA8D58C3AADA2C41C(26, joaat("a_m_m_skidrow_01"), 973.053f, 3616.738f, 31.6181f, 110.2753f, 1, 1);
			unk_0xE3752B10DC995E95(iLocal_68, 0, 0, 1, 0);
			unk_0xE3752B10DC995E95(iLocal_68, 2, 1, 0, 0);
			unk_0xE3752B10DC995E95(iLocal_68, 3, 1, 2, 0);
			unk_0xE3752B10DC995E95(iLocal_68, 4, 0, 0, 0);
			unk_0xF1A23B343DFEDFD0(joaat("a_m_m_skidrow_01"));
			unk_0x50274A7EACA3133A(iLocal_68, 1);
			unk_0xBC12D08EE7559CCD(iLocal_68, 17, 1);
			unk_0xA7266A50941DBAEA(iLocal_68, 0);
			unk_0x0407CF7EFEE35240(iLocal_68, 1);
			unk_0xD6A76BAB45A4B460(iLocal_68, 185, 1);
			unk_0xD07E491BDA082CED(iLocal_68, 16);
			unk_0xEEBC95A38CBDED42(iLocal_68, "A_M_M_TRAMP_01_BLACK_MINI_01");
			func_63(&uLocal_85, 1, iLocal_68, "RECGFDealer", 0, 1);
			unk_0x059473086913178C(iLocal_68, 1);
			unk_0x49D97B076E3590AC(iLocal_68, "random@countryside_gang_fight", "gangmember_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0xABFC84F5C4943D7B(iLocal_68, "move_m@gangster@var_i", 1048576000);
			iLocal_76 = unk_0xBA715A7BEBA5A1F9(joaat("picador"), 915.7905f, 3603.449f, 31.9111f, 111.9593f, 1, 1, 0);
			unk_0x58DAFDEB2F46A5EA(iLocal_76, 37, 0);
			unk_0x952B5201CC721090(iLocal_76, 4, 0);
			unk_0xAA207A327A73D480(iLocal_76, 1);
			unk_0x2C2F2F6BEE7AC7E7(iLocal_76, "WDU 696");
			iLocal_69[0] = unk_0xA8D58C3AADA2C41C(22, joaat("g_m_y_lost_01"), 970.2217f, 3614.821f, 31.6909f, 297.4345f, 1, 1);
			func_63(&uLocal_85, 3, iLocal_69[0], "RECGFLost2", 0, 1);
			iLocal_69[1] = unk_0xA8D58C3AADA2C41C(22, joaat("g_m_y_lost_02"), 971.504f, 3618.054f, 31.5565f, 216.9967f, 1, 1);
			func_63(&uLocal_85, 2, iLocal_69[1], "RECGFLost1", 0, 1);
			unk_0xF1A23B343DFEDFD0(joaat("g_m_y_lost_01"));
			unk_0xF1A23B343DFEDFD0(joaat("g_m_y_lost_02"));
			iLocal_77[0] = unk_0xBA715A7BEBA5A1F9(joaat("hexer"), 968.2626f, 3611.717f, 31.7874f, 296.8978f, 1, 1, 0);
			iLocal_77[1] = unk_0xBA715A7BEBA5A1F9(joaat("hexer"), 970.8362f, 3625.563f, 31.3415f, 212.3456f, 1, 1, 0);
			unk_0xF1A23B343DFEDFD0(joaat("hexer"));
			unk_0x49D97B076E3590AC(iLocal_69[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x49D97B076E3590AC(iLocal_69[1], "random@countryside_gang_fight", "biker_01_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (iVar0 < 2)
				{
					unk_0x6E9C0F9EAC1F29FD(iLocal_69[iVar0], 0);
					unk_0xFF4BEB6CFF55A013(iLocal_69[iVar0], uLocal_250);
					unk_0x71B502FC2E129665(iLocal_69[iVar0], 2);
					unk_0xBC12D08EE7559CCD(iLocal_69[iVar0], 50, 1);
					unk_0x3DAB02AAC9E9EC02(iLocal_69[iVar0], 0);
					unk_0x9521FB98DB6DDF50(iLocal_69[0], joaat("weapon_pistol"), -1, 1, 1);
					unk_0x9521FB98DB6DDF50(iLocal_69[1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
					unk_0xABC2CA6F28903308(iLocal_69[iVar0], 1);
					unk_0x50274A7EACA3133A(iLocal_69[iVar0], 1);
					unk_0x006574E87E6F1942(iLocal_69[iVar0], 1, 1);
				}
				iVar0++;
			}
			iLocal_59 = unk_0x320D1840B6DAA1CC() + 1500;
			if (func_54() == 0)
			{
				func_63(&uLocal_85, 0, unk_0xE2D3D51028F0428A(), "MICHAEL", 0, 1);
			}
			else if (func_54() == 1)
			{
				func_63(&uLocal_85, 0, unk_0xE2D3D51028F0428A(), "FRANKLIN", 0, 1);
			}
			else if (func_54() == 2)
			{
				func_63(&uLocal_85, 0, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

int func_86()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_97())
		{
			return 0;
		}
	}
	if (func_93())
	{
		return 1;
	}
	if (func_87(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_87(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_31(func_54()))
		{
			iVar36 = func_28();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113386.f_18574[iVar32 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar32 /*6*/], 3))
				{
					func_88(iVar32, &Var0);
					fVar35 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_88(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_89(uParam1, "Abigail1", func_91(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 1:
			func_89(uParam1, "Abigail2", func_91(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 2:
			func_89(uParam1, "Barry1", func_91(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 3:
			func_89(uParam1, "Barry2", func_91(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 4:
			func_89(uParam1, "Barry3", func_91(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 5:
			func_89(uParam1, "Barry3A", func_91(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 6:
			func_89(uParam1, "Barry3C", func_91(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 7:
			func_89(uParam1, "Barry4", func_91(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_90(iParam0), 0, 0);
			break;
		
		case 8:
			func_89(uParam1, "Dreyfuss1", func_91(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 9:
			func_89(uParam1, "Epsilon1", func_91(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 10:
			func_89(uParam1, "Epsilon2", func_91(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 11:
			func_89(uParam1, "Epsilon3", func_91(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 12:
			func_89(uParam1, "Epsilon4", func_91(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 13:
			func_89(uParam1, "Epsilon5", func_91(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 14:
			func_89(uParam1, "Epsilon6", func_91(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 15:
			func_89(uParam1, "Epsilon7", func_91(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 16:
			func_89(uParam1, "Epsilon8", func_91(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 17:
			func_89(uParam1, "Extreme1", func_91(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 18:
			func_89(uParam1, "Extreme2", func_91(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 19:
			func_89(uParam1, "Extreme3", func_91(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 20:
			func_89(uParam1, "Extreme4", func_91(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 21:
			func_89(uParam1, "Fanatic1", func_91(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_90(iParam0), 1, 0);
			break;
		
		case 22:
			func_89(uParam1, "Fanatic2", func_91(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_90(iParam0), 1, 0);
			break;
		
		case 23:
			func_89(uParam1, "Fanatic3", func_91(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_90(iParam0), 0, 1);
			break;
		
		case 24:
			func_89(uParam1, "Hao1", func_91(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_90(iParam0), 0, 1);
			break;
		
		case 25:
			func_89(uParam1, "Hunting1", func_91(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 26:
			func_89(uParam1, "Hunting2", func_91(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 27:
			func_89(uParam1, "Josh1", func_91(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 28:
			func_89(uParam1, "Josh2", func_91(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 29:
			func_89(uParam1, "Josh3", func_91(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 30:
			func_89(uParam1, "Josh4", func_91(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 31:
			func_89(uParam1, "Maude1", func_91(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 32:
			func_89(uParam1, "Minute1", func_91(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 33:
			func_89(uParam1, "Minute2", func_91(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 34:
			func_89(uParam1, "Minute3", func_91(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 35:
			func_89(uParam1, "MrsPhilips1", func_91(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 36:
			func_89(uParam1, "MrsPhilips2", func_91(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 37:
			func_89(uParam1, "Nigel1", func_91(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 38:
			func_89(uParam1, "Nigel1A", func_91(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 39:
			func_89(uParam1, "Nigel1B", func_91(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		
		case 40:
			func_89(uParam1, "Nigel1C", func_91(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		
		case 41:
			func_89(uParam1, "Nigel1D", func_91(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		
		case 42:
			func_89(uParam1, "Nigel2", func_91(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 43:
			func_89(uParam1, "Nigel3", func_91(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 44:
			func_89(uParam1, "Omega1", func_91(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 45:
			func_89(uParam1, "Omega2", func_91(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 46:
			func_89(uParam1, "Paparazzo1", func_91(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 47:
			func_89(uParam1, "Paparazzo2", func_91(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 48:
			func_89(uParam1, "Paparazzo3", func_91(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 49:
			func_89(uParam1, "Paparazzo3A", func_91(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 50:
			func_89(uParam1, "Paparazzo3B", func_91(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 51:
			func_89(uParam1, "Paparazzo4", func_91(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 52:
			func_89(uParam1, "Rampage1", func_91(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 54:
			func_89(uParam1, "Rampage3", func_91(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 55:
			func_89(uParam1, "Rampage4", func_91(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 56:
			func_89(uParam1, "Rampage5", func_91(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 53:
			func_89(uParam1, "Rampage2", func_91(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 57:
			func_89(uParam1, "TheLastOne", func_91(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 58:
			func_89(uParam1, "Tonya1", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 59:
			func_89(uParam1, "Tonya2", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 60:
			func_89(uParam1, "Tonya3", func_91(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 61:
			func_89(uParam1, "Tonya4", func_91(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 62:
			func_89(uParam1, "Tonya5", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_89(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_91(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_92(iParam0) };
	if (unk_0xACC32B78196FBC2A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_92(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_93()
{
	if (func_96() && !func_97())
	{
		return 1;
	}
	if (func_95() && func_94())
	{
		return 1;
	}
	return 0;
}

bool func_94()
{
	return Global_113104 > 0;
}

int func_95()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_96()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_97()
{
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x5CC952A51A751C4C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_98()
{
	if (!func_77(5))
	{
		return 1;
	}
	if (func_93())
	{
		return 1;
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_97())
		{
			return 0;
		}
	}
	if (func_87(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	if ((Global_113375 == func_38() && unk_0xE3BBDB1C36703410()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_100()
{
}

void func_101(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_103(iParam0);
	unk_0xEEEFCC23227A8148(0);
	unk_0xA560174A439E78F1(1);
	Global_113372 = 0;
	func_102();
}

void func_102()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			unk_0x7CD708DEB04F8474(unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)), 1);
		}
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 0);
	}
}

void func_103(int iParam0)
{
	Global_113375 = iParam0;
}

int func_104(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_38();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_145())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_97())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_13(0))
		{
			return 0;
		}
		if (func_93())
		{
			return 0;
		}
		if (func_144())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_31(func_54()))
		{
			if (func_87(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_143(iParam3))
		{
			return 0;
		}
		if (func_31(func_54()))
		{
			if (func_142(func_54()) == 4 || func_142(func_54()) == 5)
			{
				return 0;
			}
		}
		if (func_31(func_54()))
		{
			if (!func_141(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_140(Global_113386.f_24995.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x320D1840B6DAA1CC() - Global_113377) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_139())
		{
			return 0;
		}
		if (unk_0x969475FA6AB2673A())
		{
			return 0;
		}
		if (unk_0xE3BBDB1C36703410())
		{
			return 0;
		}
		if (!func_130(4))
		{
			return 0;
		}
		if (!func_77(5))
		{
			return 0;
		}
		if (func_129(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xBCC73B466E2B2350(unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A())))
		{
			if ((unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(377.153f, -717.567f, 10.0536f) || unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(320.9934f, 265.2515f, 82.1221f)) || unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_129(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_143(30) && !func_129(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_31(func_54()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113386.f_2363.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113386.f_2363.f_539.f_2296[iVar4];
				if (func_128(iVar8))
				{
					if (func_106(iVar4))
					{
						if (!func_105(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var5) < (210f * 210f))
							{
								if (func_54() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_105(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_107(iVar0);
}

int func_107(int iParam0)
{
	return func_108(iParam0, 1);
}

int func_108(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_128(iParam0))
	{
		return 0;
	}
	func_109(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_109(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_110(func_121(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_110(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_120(iParam0, iParam1))
	{
		iVar0 = func_119(iParam1);
		iVar1 = func_117(iParam0);
		iVar2 = (func_117(iParam0) - func_117(iParam1));
		iVar3 = (func_119(iParam0) - func_119(iParam1));
		iVar4 = (func_116(iParam0) - func_116(iParam1));
		iVar5 = (func_115(iParam0) - func_115(iParam1));
		iVar6 = (func_114(iParam0) - func_114(iParam1));
		iVar7 = (func_113(iParam0) - func_113(iParam1));
	}
	else
	{
		iVar0 = func_119(iParam0);
		iVar1 = func_117(iParam1);
		iVar2 = (func_117(iParam1) - func_117(iParam0));
		iVar3 = (func_119(iParam1) - func_119(iParam0));
		iVar4 = (func_116(iParam1) - func_116(iParam0));
		iVar5 = (func_115(iParam1) - func_115(iParam0));
		iVar6 = (func_114(iParam1) - func_114(iParam0));
		iVar7 = (func_113(iParam1) - func_113(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_112(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_111(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_111(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_112(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_113(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_114(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_115(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_116(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_117(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_118(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_118(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_119(int iParam0)
{
	return iParam0 & 15;
}

int func_120(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_128(iParam1) || !func_128(iParam0))
	{
		return 1;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_117(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_119(iParam0);
	iVar1 = func_119(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_116(iParam0);
	iVar1 = func_116(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_115(iParam0);
	iVar1 = func_115(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_114(iParam0);
	iVar1 = func_114(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_113(iParam0);
	iVar1 = func_113(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	var uVar0;
	
	func_127(&uVar0, unk_0xAA2844CAD88768B5());
	func_126(&uVar0, unk_0x80F97D7D29800A1A());
	func_125(&uVar0, unk_0x09FC827691DACE59());
	func_124(&uVar0, unk_0xD52BD97E61483713());
	func_123(&uVar0, unk_0x771485043FDC55DE());
	func_122(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_122(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_123(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_124(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_119(*uParam0);
	iVar1 = func_117(*uParam0);
	if (iParam1 < 1 || iParam1 > func_112(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_125(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_126(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_127(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_113(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_114(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_115(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_117(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_119(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_116(iParam0);
	if (iVar5 < 1 || iVar5 > func_112(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_129(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_54();
				if (!func_31(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_138()) || Global_112433) || Global_31962) || func_137()) || func_56(8, -1)) || func_136()) || func_135()) || func_134()) || func_133()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_138()) || Global_31962) || func_137()) || func_56(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_138()) || Global_112433) || Global_31962) || func_137()) || func_56(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_138()) || Global_112433) || Global_31962) || func_137()) || func_56(8, -1)) || func_136()) || func_135()) || func_133()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_138() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_56(8, -1)) || func_133()) || func_132()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_56(8, -1) || func_136()) || func_135()) || func_132()) || func_131())
						{
							return 0;
						}
						if ((unk_0x04458B4E5D9E466A() && unk_0xB6BDAC890771ED04() != 3) && unk_0xEEFB36B938654045() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
						{
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_138()) || Global_31962) || func_137()) || func_56(8, -1)) || func_135()) || func_134()) || func_133()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_138()) || func_135()) || Global_112433) || Global_31962) || func_137()) || Global_44238) || func_56(8, -1)) || func_134()) || func_132()) || func_133()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_138()) || Global_112433) || Global_31962) || func_137()) || func_56(8, -1)) || func_134()) || func_132()) || func_136()) || func_135()) || func_133())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_131()
{
	return Global_100480.f_1;
}

int func_132()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_133()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_134()
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

bool func_135()
{
	return Global_100493.f_376 > 0;
}

bool func_136()
{
	return Global_100493.f_375 > 0;
}

var func_137()
{
	return Global_1575058;
}

int func_138()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_139()
{
	func_53();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_140(int iParam0)
{
	return func_120(func_121(), iParam0);
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_54();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_142(int iParam0)
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_145())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_144()
{
	var uVar0;
	
	if (Global_32110)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x55A0C756C4A8220C(uVar0, 0))
			{
				if (!unk_0xF68107C40359970C(unk_0xAB793EA186AB8DAA(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_145()
{
	var uVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (unk_0xAF5DBE95205A49D1())
	{
		if (unk_0x5B66E9FB7530BB95())
		{
			if (unk_0x2F04A4784A70593C())
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCED9E32812D6C7C7(&uVar0, 2);
				unk_0xCED9E32812D6C7C7(&uVar0, 4);
				unk_0xCED9E32812D6C7C7(&uVar0, 6);
				unk_0xCED9E32812D6C7C7(&Global_25, 2);
				unk_0xCED9E32812D6C7C7(&Global_25, 4);
				unk_0xCED9E32812D6C7C7(&Global_25, 6);
				unk_0x076A5661EF5ABEE4(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB8F4926B803BFD19())
				{
					iVar0 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&iVar0, 0);
					unk_0x212EDDD868F364B5(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0xB8F4926B803BFD19())
	{
		if (BitTest(unk_0x5D851A9195129CE9(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_146()
{
	int iVar0;
	
	if (iLocal_53 && !iLocal_58)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0x12DD4A0B247D9B4D(uLocal_60))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_60);
		}
		if (!unk_0xF68107C40359970C(iLocal_68))
		{
			unk_0xD6A76BAB45A4B460(iLocal_68, 317, 1);
			unk_0x0407CF7EFEE35240(iLocal_68, 0);
			unk_0x50274A7EACA3133A(iLocal_68, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_69)
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_61[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_61[iVar0]));
			}
			if (!unk_0xF68107C40359970C(iLocal_69[iVar0]) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0x55B23FE400FCEA6B(iLocal_77[iVar0], 0))
					{
						unk_0xB69D13E19147910F(iLocal_69[iVar0], iLocal_77[iVar0], unk_0xE2D3D51028F0428A(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0xABC2CA6F28903308(iLocal_69[iVar0], 1);
					}
					else
					{
						unk_0x7734082B0EDB0BE0(iLocal_69[iVar0], unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0x7734082B0EDB0BE0(iLocal_69[iVar0], unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
				}
				unk_0x50274A7EACA3133A(iLocal_69[iVar0], 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_77)
		{
			if (!unk_0x55B23FE400FCEA6B(iLocal_77[iVar0], 0))
			{
				unk_0x3D81769BEC61BFF8(&(iLocal_77[iVar0]));
				if (unk_0xA37204C64473B324("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0x0AF8D3A06BB92903("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0x8576657A629C4B0A(1f);
		unk_0x13A2865660B9B033(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		unk_0xEC6D4F9C59CDA6F5();
		unk_0x07CECF421D895F3D(3, 1);
		unk_0x07CECF421D895F3D(5, 1);
		func_3(&uLocal_85, 1);
		func_3(&uLocal_85, 2);
		func_3(&uLocal_85, 3);
		func_3(&uLocal_85, 4);
	}
	func_147(-1);
	unk_0xAFBDF6A5E54114C1();
}

void func_147(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_99())
	{
		func_151(iParam0);
		unk_0xEFE837B21D5CF02C(0, 0);
		Global_113377 = unk_0x320D1840B6DAA1CC();
		func_150(30000);
		StringCopy(&cVar0, func_149(Global_113375, 1), 64);
		if (func_37(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		unk_0x151E30E68B218815(&cVar0, Global_113372, (unk_0x320D1840B6DAA1CC() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		unk_0xB0550BC91B0159D6(&Global_113382, 0);
	}
	func_148(&Global_32019);
	Global_113376 = 0;
	func_103(-1);
}

void func_148(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43014)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

char* func_149(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_150(int iParam0)
{
	Global_43603 = (unk_0x320D1840B6DAA1CC() + iParam0);
}

void func_151(int iParam0)
{
	func_152(iParam0, 0, func_157(iParam0));
}

void func_152(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_121();
	func_155(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_154(iParam0, &uVar0);
	Var1 = { func_153(&uVar0) };
}

struct<16> func_153(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_115(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_114(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_113(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_116(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_119(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_117(*uParam0), 64);
	return Var0;
}

void func_154(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_155(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_117(*uParam0);
	iVar1 = func_119(*uParam0);
	iVar2 = func_116(*uParam0);
	iVar3 = func_115(*uParam0);
	iVar4 = func_114(*uParam0);
	iVar5 = func_113(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_112(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_112(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_156(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_156(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_127(uParam0, iParam1);
	func_126(uParam0, iParam2);
	func_125(uParam0, iParam3);
	func_123(uParam0, iParam5);
	func_124(uParam0, iParam4);
	func_122(uParam0, iParam6);
}

int func_157(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

