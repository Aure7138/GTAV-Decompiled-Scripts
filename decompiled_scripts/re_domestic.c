#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	struct<6> Local_72 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_78 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102[2] = { 0, 0 };
	var uLocal_105 = 0;
	struct<3> Local_106 = { 0, 0, 0 } ;
	struct<3> Local_109 = { 0, 0, 0 } ;
	struct<3> Local_112 = { 0, 0, 0 } ;
	struct<3> Local_115 = { 0, 0, 0 } ;
	struct<3> Local_118 = { 0, 0, 0 } ;
	int iLocal_121[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	bool bLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	bool bLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	char* sLocal_153 = NULL;
	char* sLocal_154 = NULL;
	var uLocal_155 = 16;
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
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
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
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	StringCopy(&Local_72, "", 24);
	Local_118 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_135 = -1;
	Local_51 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x55EEDBBFDC6E810F(11))
	{
		if (!unk_0x66599E73DBA5A850(iLocal_58))
		{
			if (unk_0xE65E1573677B6119(iLocal_58))
			{
				unk_0xDC21E058EE11964C(iLocal_58);
			}
		}
		func_226();
	}
	if (func_225(256, 1))
	{
		unk_0x675D9C12C73D3DE7();
	}
	if (func_183(Local_51, -1, 0, 0, 0))
	{
		func_180(-1);
	}
	else
	{
		unk_0x675D9C12C73D3DE7();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0xCBE2EC2868A6C438() || iLocal_49 == 4) || iLocal_68 > 18)
		{
			if (!func_179())
			{
				if (func_178())
				{
					func_226();
				}
			}
			unk_0x385C3C9C52E9D548("RE_DO", 0);
			if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			{
				switch (iLocal_48)
				{
					case 0:
						if (!bLocal_50)
						{
							if (func_166())
							{
								func_226();
							}
							if (!bLocal_59)
							{
								func_165();
							}
							if (bLocal_59)
							{
								func_164();
							}
						}
						if (bLocal_50)
						{
							iLocal_48 = 1;
						}
						break;
					
					case 1:
						func_156();
						if (iLocal_69 > 3)
						{
							if (!iLocal_92 && !func_155())
							{
								func_154(&uLocal_155, "REDO2AU", "REDO2_THK", 4, 0, 0, 0);
								iLocal_92 = 1;
							}
						}
						switch (iLocal_49)
						{
							case 0:
								func_150();
								iLocal_49 = 1;
								break;
							
							case 1:
								if (!iLocal_99)
								{
									if ((unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), -467.0595f, 540.1724f, 125.3034f, 91.875f, 90.875f, 30f, 0, 1, 0) && unk_0x67670574D396B9A8(Local_106, 1f)) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_106, 20f, 20f, 20f, 0, 1, 0))
									{
										func_149();
										func_140(1);
										iLocal_99 = 1;
									}
								}
								else
								{
									if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_106, 50f, 50f, 50f, 0, 1, 0))
									{
										func_138();
									}
									if (!unk_0x66599E73DBA5A850(iLocal_58))
									{
										if (!unk_0x1C4E4DC1EFE24DF1(iLocal_58, Local_63, 30f, 30f, 30f, 0, 1, 0))
										{
											iLocal_49 = 11;
										}
									}
								}
								break;
							
							case 3:
								func_136();
								if (iLocal_68 > 18)
								{
									func_135();
								}
								else if (!func_155())
								{
									func_135();
								}
								break;
							
							case 7:
								func_136();
								func_131();
								break;
							
							case 4:
								func_136();
								func_81();
								if (func_80(Local_112))
								{
									func_57(0);
									func_55();
									unk_0x4EDE34FBADD967A6(0);
									func_154(&uLocal_155, "REDO2AU", "REDO2_CULT", 4, 0, 0, 0);
								}
								if (func_53())
								{
									func_57(0);
									func_55();
									unk_0x4EDE34FBADD967A6(0);
									func_154(&uLocal_155, "REDO2AU", "REDO2_NEAR", 4, 0, 0, 0);
								}
								if (!iLocal_89)
								{
									if (func_52())
									{
										if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_112, 23f, 60f, 20f, 0, 1, 0))
										{
											func_57(0);
											func_55();
											unk_0x4EDE34FBADD967A6(0);
											if (!func_155())
											{
												func_154(&uLocal_155, "REDO2AU", "REDO2_DRP", 4, 0, 0, 0);
												iLocal_89 = 1;
											}
										}
									}
								}
								break;
							
							case 11:
								func_51();
								break;
						}
						if (!unk_0x66599E73DBA5A850(iLocal_57))
						{
							if (unk_0x7BB3D8F4F6310EB8(iLocal_57, "random@domestic", "f_attack_end", 3))
							{
								func_49(iLocal_57, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
							}
						}
						if ((func_48() && !func_47()) && iLocal_48 != 2)
						{
							if (!unk_0x66599E73DBA5A850(iLocal_58))
							{
								if (unk_0x1C4E4DC1EFE24DF1(iLocal_58, Local_118, 5f, 5f, 5f, 0, 1, 0))
								{
									if (!unk_0x7DE17ACDD8BA2642(iLocal_121[8]))
									{
										iLocal_121[8] = unk_0xF19D6C0E8B56BE23(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
										unk_0xBD02C9D4D7076ECC(iLocal_121[8], iLocal_58, unk_0xCF99BEF1317B66DA(iLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1, 0);
									}
									func_46(0);
									unk_0x4EDE34FBADD967A6(0);
									func_55();
									iLocal_48 = 2;
								}
							}
						}
						if (func_45())
						{
							func_51();
						}
						break;
					
					case 2:
						if (func_44())
						{
							if (unk_0x7DE17ACDD8BA2642(iLocal_58))
							{
								unk_0xE9C250FA35A936C8(&iLocal_58);
							}
							func_14();
						}
						break;
					
					case 3:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_226();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_150 && !iLocal_149)
	{
		func_3(0);
		if (Global_32406)
		{
			unk_0x5C37F509B0398DFA("AC_STOP");
		}
		func_2();
		if (unk_0x7DE17ACDD8BA2642(iLocal_121[8]))
		{
			uLocal_133 = unk_0x9D4156571988E1D4(joaat("pickup_weapon_golfclub"), unk_0x30BE8A934C020461(iLocal_121[8], 1), unk_0x000D018EA42688BA(iLocal_121[8], 2) + Vector(2.8157f, -159.5768f, -14.1956f), 0, -1, 2, 1, 0);
			unk_0xEF078F1FEE785D3E(&(iLocal_121[8]));
		}
		unk_0x8E09E8C52602EBB2(Local_63 - Vector(10f, 10f, 10f), Local_63 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x0133FF6E23A1DCA4(255, uLocal_152, joaat("player"));
		if (bLocal_59)
		{
			unk_0xE0A291F406691F03(iLocal_96);
			unk_0xE0A291F406691F03(iLocal_97);
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_57))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_57))
			{
				unk_0xC5B2830898581862(iLocal_57, 0);
			}
			unk_0x1EEF71E3CDD868D3(&iLocal_57);
		}
		if (unk_0xCE4AAA035282336C(uLocal_105))
		{
			unk_0x45533C09A6C9B409(&uLocal_105);
		}
		if (unk_0xCE4AAA035282336C(uLocal_102[0]))
		{
			unk_0x45533C09A6C9B409(&(uLocal_102[0]));
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_58))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_58))
			{
				if (!unk_0x3C3D6D026CF7F51B(iLocal_58, 0))
				{
					unk_0x2578E1A719BF1CA4(iLocal_58);
				}
				unk_0xDC21E058EE11964C(iLocal_58);
				unk_0xC5B2830898581862(iLocal_58, 0);
				unk_0xD14067404D35AAE7(iLocal_58, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (unk_0x7DE17ACDD8BA2642(iLocal_121[iVar0]))
			{
				unk_0xA81AA70A4D25E140(iLocal_121[iVar0], 1, 1);
			}
			iVar0++;
		}
		unk_0x90DA349CD13C7839(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		unk_0x1090804F1F0FF051();
		iLocal_149 = 1;
	}
	if ((!unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_63, 80f, 80f, 80f, 0, 1, 0) || unk_0x923599D48C8BCBED(uLocal_133)) || !(unk_0x7DE17ACDD8BA2642(iLocal_121[8]) && !unk_0x0E0433D7F75E162D(uLocal_133)))
	{
		func_226();
	}
}

void func_2()
{
	Global_32402 = 0;
	Global_32403 = 0;
	Global_32405 = 0;
	Global_32406 = 0;
	Global_32407 = 0;
}

void func_3(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_4(iVar0, bParam0);
		iVar0++;
	}
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_13(iParam0, 2, 1))
		{
			func_12(iParam0, 2, 1);
		}
	}
	else if (func_13(iParam0, 2, 1))
	{
		func_5(iParam0, 2, 1);
	}
}

void func_5(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x061B1200C95204CB(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			unk_0x061B1200C95204CB(&uVar0, bParam1);
			func_6(func_10(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1574918;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_7(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12385;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		case 58:
			return 11433;
			break;
		
		case 59:
			return 11844;
			break;
		
		default:
			break;
	}
	return 14192;
}

int func_11()
{
	return Global_32163;
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xECDAB41968FF21A8(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			unk_0xECDAB41968FF21A8(&uVar0, iParam1);
			func_6(func_10(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_668[iParam0]), iParam1);
	}
}

int func_13(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100733.f_1407[iParam0], iParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_11() == 0)
		{
			return BitTest(func_9(func_10(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_14()
{
	while (func_155())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_43())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_113648.f_18576.f_383 = func_42() + 1;
	func_18(-1, 0);
	func_15();
	iLocal_48 = 3;
}

void func_15()
{
	func_16();
}

int func_16()
{
	if (func_17(0))
	{
		return 0;
	}
	if (Global_100720.f_8)
	{
		if (Global_100720.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100720.f_10 > 1)
	{
		return 0;
	}
	Global_100720.f_10++;
	return 1;
}

int func_17(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_113648.f_24997.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_20(func_24(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113636 = iParam1;
		if (Global_113634 == 0)
		{
			if (((Global_113637 == 1 || Global_113637 == 5) || Global_113637 == 11) || Global_113637 == 25)
			{
				func_19(2);
			}
			else if ((Global_113637 == 26 || Global_113637 == 8) || Global_113637 == 17)
			{
				func_19(7);
			}
			else
			{
				func_19(1);
			}
		}
	}
}

void func_19(int iParam0)
{
	Global_113634 = iParam0;
}

void func_20(int iParam0, var uParam1, var uParam2)
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
		func_23((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = uParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_21();
	}
}

void func_21()
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
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113648.f_10196[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113648.f_10196[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113384++;
					fVar1 = (fVar1 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113385++;
					fVar2 = (fVar2 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113386++;
					fVar3 = (fVar3 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113387++;
					fVar4 = (fVar4 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113388++;
					fVar5 = (fVar5 + (Global_113648.f_10196[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113389++;
					fVar6 = (fVar6 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113390++;
					fVar7 = (fVar7 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113367 > 0)
	{
		if (Global_113384 == Global_113367)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113368 > 0)
	{
		if (Global_113385 == Global_113368)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113369 > 0)
	{
		if (Global_113386 == Global_113369)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113370 > 0)
	{
		if (Global_113387 == Global_113370)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113371 > 0)
	{
		if (((Global_113388 == Global_113371 || (Global_113371 * 10 / Global_113388) < 41) || Global_113388 > Global_113374) || Global_113388 == Global_113374)
		{
			if (!BitTest(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					unk_0xE571C8D0AF67E3B4(joaat("num_rndevents_completed"), Global_113371, 0);
					unk_0xECDAB41968FF21A8(&(Global_113648.f_10196.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113372 > 0)
	{
		if (Global_113389 == Global_113372)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113373 > 0)
	{
		if (Global_113390 == Global_113373)
		{
			fVar7 = 5f;
		}
	}
	Global_113648.f_10196.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
	{
		iVar9 = Global_113374;
	}
	else
	{
		iVar9 = Global_113388;
	}
	unk_0x3CC35ACFFC9C730E(joaat("num_missions_completed"), Global_113384, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_missions_available"), Global_113367, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_minigames_completed"), Global_113385, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_minigames_available"), Global_113368, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_oddjobs_completed"), Global_113386, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_oddjobs_available"), Global_113369, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndpeople_completed"), Global_113387, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndpeople_available"), Global_113370, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndevents_available"), Global_113374, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_misc_completed"), (Global_113390 + Global_113389), 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_misc_available"), (Global_113373 + Global_113372), 1);
	Global_113391 = (Global_113384 * 100 / Global_113367);
	Global_113393 = ((Global_113386 + Global_113385) * 100 / (Global_113369 + Global_113368));
	Global_113392 = ((Global_113387 + iVar9) * 100 / (Global_113370 + Global_113374));
	Global_113394 = ((Global_113389 + Global_113390) * 100 / (Global_113372 + Global_113373));
	unk_0x683F4BAF21D6EE25(joaat("total_progress_made"), Global_113648.f_10196.f_3853, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_story_missions"), Global_113391, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_ambient_missions"), Global_113392, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_oddjobs"), Global_113393, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853))
	{
		func_22(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_11() == 2 == 0 && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_16();
				}
			}
		}
	}
}

int func_22(int iParam0, int iParam1)
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
	iVar0 = unk_0xED220A261CE0D89C(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x0B3E167D2C1443C7(iParam0, iParam1);
	}
	return 0;
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_8();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

int func_24(int iParam0, int iParam1)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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
		unk_0xECDAB41968FF21A8(&(Global_113648.f_20412.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x4310A0DB886F9FED(sParam0, ""))
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
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (unk_0x4310A0DB886F9FED(&(Global_113648.f_20412[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113648.f_20412.f_145 < 9)
	{
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = (unk_0xA5E11AF0A2B928C1() + iParam3);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = uParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = ((unk_0xA5E11AF0A2B928C1() + iParam3) + iParam4);
		}
		else
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
		}
		Global_113648.f_20412.f_145++;
		func_29();
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113648.f_20412.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[0])
			{
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[1])
			{
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[2])
			{
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_30()
{
	func_31();
	switch (Global_113648.f_2365.f_539.f_4321)
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

void func_31()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_35(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_34(unk_0xC1A5EC5C986B98AD());
			if (func_33(iVar0) && (!func_32(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_33(Global_113648.f_2365.f_539.f_4321))
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

bool func_32(int iParam0)
{
	return Global_43257 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

int func_37(int iParam0)
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
		return BitTest(Global_113648.f_20412.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	unk_0xECDAB41968FF21A8(&(Global_113648.f_24997.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)
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

int func_40()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x688846D56810779A(), 64);
	uVar16 = func_41(Var0);
	return uVar16;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x14580F20CBCE4FA9(&cParam0))
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

int func_42()
{
	return (Global_113648.f_10018.f_21 + Global_113648.f_18576.f_380);
}

int func_43()
{
	return 1;
}

int func_44()
{
	if (Global_32403)
	{
		func_19(4);
		return 1;
	}
	return 0;
}

int func_45()
{
	if (unk_0x66599E73DBA5A850(iLocal_57) && unk_0x66599E73DBA5A850(iLocal_58))
	{
		return 1;
	}
	return 0;
}

void func_46(int iParam0)
{
	Global_22736 = iParam0;
}

int func_47()
{
	if (Global_113648.f_24997.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_48()
{
	return Global_32402;
}

void func_49(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xB7C28610A558761B(iParam0, sParam1, sParam2, func_50(iParam3), 0);
}

int func_50(int iParam0)
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

void func_51()
{
	iLocal_48 = 3;
}

int func_52()
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		iLocal_151 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (unk_0xFBD273FDBCF0C5BD(iLocal_151, 0))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_58))
			{
				if (unk_0x44A6C9475C859B45(iLocal_58, iLocal_151))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_53()
{
	if (func_54() == 2)
	{
		if (func_48())
		{
			if (unk_0x2E496FE654DA4166(-1014.154f, 4881.411f, 245.0001f, unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), 0), 1) < 400f)
			{
				if (!Global_32407)
				{
					unk_0x5C37F509B0398DFA("AC_EN_ROUTE_CULT");
					Global_32407 = 1;
					if (!Global_32406)
					{
						Global_32406 = 1;
						return 1;
					}
				}
			}
			else if (Global_32407)
			{
				unk_0x5C37F509B0398DFA("AC_LEFT_AREA");
				Global_32407 = 0;
			}
		}
	}
	return 0;
}

int func_54()
{
	func_31();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_55()
{
	Global_20591 = 0;
	func_56();
}

void func_56()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
	}
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_71)
		{
			if (func_64(&uLocal_155, "REDO2AU", &Local_78, &Local_72, 8, 0, 0))
			{
				iLocal_71 = 0;
			}
		}
	}
	else if ((!iLocal_71 && unk_0x0DCB385165FDE763()) && !func_62())
	{
		Local_78 = { func_61() };
		Local_72 = { func_60() };
		func_58();
		iLocal_71 = 1;
	}
}

void func_58()
{
	Global_20591 = 0;
	func_59();
}

void func_59()
{
	if (unk_0x0DCB385165FDE763())
	{
		unk_0x782234C275AFBA24();
		Global_22736 = 0;
		unk_0xD6625E11483B2324(1);
		Global_21725 = 6;
		return;
	}
}

struct<6> func_60()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		iVar6 = unk_0x2EAC620A648B0397();
		iVar6 = (iVar6 + Global_22735);
		if (iVar6 > -1)
		{
			return Global_20593[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_61()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		return Global_21344;
	}
	return Var0;
}

int func_62()
{
	if (((((((func_63("REDO2_DRP") || func_63("REDO2_UV")) || func_63("REDO2_UV2")) || func_63("REDO2_CULT")) || func_63("REDO2_NEAR")) || func_63("REDO2_GETOUT")) || func_63("REDO2_JACK")) || func_63("REDO2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_63(char* sParam0)
{
	var uVar0;
	
	if (func_155())
	{
		MemCopy(&uVar0, {func_61()}, 4);
		if (unk_0x4310A0DB886F9FED(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_64(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_79(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21732 = 0;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 1;
	StringCopy(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_65(sParam2, iParam4, 0);
}

int func_65(char* sParam0, int iParam1, bool bParam2)
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					unk_0xD6625E11483B2324(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
				}
				else
				{
					func_78();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0DCB385165FDE763())
		{
			return 0;
		}
		if (func_77(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_76();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			unk_0x061B1200C95204CB(&Global_8253, 20);
			unk_0x061B1200C95204CB(&Global_8254, 17);
			unk_0x061B1200C95204CB(&Global_8255, false);
			if (bParam2)
			{
				func_75();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
			{
				return 0;
			}
			if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			{
				if (unk_0xE3A9F9074FB79A61(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (func_74())
				{
					return 0;
				}
				if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0xA92CED053FDC0D06(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0x87B83AFF6D0F83FD(unk_0xC1A5EC5C986B98AD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78558)
				{
					if (unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
					{
						return 0;
					}
					if (unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()))
					{
						return 0;
					}
					if (unk_0x197DD015F81B0D16(unk_0xC1A5EC5C986B98AD()))
					{
						return 0;
					}
					if (unk_0xF56A91A191EDA1FC(unk_0x93E99A2DBCBA9CFA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_73())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
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
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_72();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_71();
		func_66();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_78();
	}
	return 0;
}

void func_66()
{
	if (!func_67())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_67()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_70())
	{
		return 0;
	}
	if (func_68(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (BitTest(Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x1758F8A8511510AB())
	{
		return 0;
	}
	return 1;
}

bool func_68(int iParam0)
{
	return func_69(iParam0, 20);
}

var func_69(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_70()
{
	return -1;
}

void func_71()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD6625E11483B2324(0);
	Global_21725 = 1;
}

void func_72()
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	unk_0x061B1200C95204CB(&Global_8254, 16);
}

int func_73()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_74()
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
	{
		iVar0 = 0;
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar1, 1);
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC67B4044F323AEB2() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x97247A0CAE4CEFB6(unk_0xC1A5EC5C986B98AD(), 78, 1))
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

void func_75()
{
	if (func_32(14))
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
		Global_20383 = func_54();
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

void func_76()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_77(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

void func_78()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if ((unk_0xE444FD7526C8BB46() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(1);
		Global_21725 = 6;
		return;
	}
}

void func_79(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

int func_80(struct<3> Param0)
{
	if (func_54() == 2)
	{
		if (func_48() && !Global_32405)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Param0) > (fLocal_47 + 200f) || unk_0x2E496FE654DA4166(-1014.154f, 4881.411f, 245.0001f, unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), 0), 1) < 400f)
			{
				Global_32405 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_81()
{
	switch (iLocal_70)
	{
		case 0:
			if (iLocal_68 > 18)
			{
				iLocal_70++;
			}
			else if (!unk_0x66599E73DBA5A850(iLocal_58))
			{
				unk_0xC99325818121C4B9(iLocal_58, 1f);
				if (unk_0xEAEF747543427AC5(iLocal_58, unk_0xC1A5EC5C986B98AD(), 8f, 8f, 8f, 0, 1, 0))
				{
					if (iLocal_68 < 19)
					{
						if (func_154(&uLocal_155, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
						{
							iLocal_70++;
						}
					}
					else
					{
						iLocal_70++;
					}
				}
			}
			break;
		
		case 1:
			func_127();
			if (unk_0x7DE17ACDD8BA2642(iLocal_58))
			{
				if (!unk_0x66599E73DBA5A850(iLocal_58))
				{
					if (unk_0xFBD273FDBCF0C5BD(unk_0xB3011BC7288F3091(unk_0xC1A5EC5C986B98AD()), 0))
					{
						if (unk_0x5CD470B5BDDAC029(iLocal_58))
						{
							unk_0xEF078F1FEE785D3E(&(iLocal_121[8]));
						}
					}
					if (unk_0xACD39355028D39EF(iLocal_58))
					{
						func_125();
						func_119();
						if (func_154(&uLocal_155, "REDO2AU", "REDO2_TO", 4, 0, 0, 0))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_70++;
						}
					}
					else
					{
						unk_0xC99325818121C4B9(iLocal_58, 1f);
					}
				}
			}
			break;
		
		case 2:
			func_119();
			func_118();
			func_127();
			func_117();
			if (unk_0xC9D9444186B5A374() > 1500)
			{
				func_116();
			}
			if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_112, 10f, 10f, 10f, 0, 1, 0))
			{
				unk_0x2D4223712D41EC89();
			}
			if (unk_0x7DE17ACDD8BA2642(iLocal_58))
			{
				if (!unk_0x66599E73DBA5A850(iLocal_58))
				{
					if (unk_0x1C4E4DC1EFE24DF1(iLocal_58, Local_112, Global_19, 1, 1, 0) && func_115(1, 0, 1))
					{
						if (unk_0xCE4AAA035282336C(uLocal_100))
						{
							unk_0x45533C09A6C9B409(&uLocal_100);
						}
						if (unk_0xCE4AAA035282336C(uLocal_101))
						{
							unk_0x45533C09A6C9B409(&uLocal_101);
						}
						if (unk_0x3C3D6D026CF7F51B(iLocal_58, 0))
						{
							unk_0xC8927C3AD7C5D2E1(unk_0x95DC39736F6748E3(iLocal_58, 0), 10.5f, 3, 0);
							iLocal_70++;
						}
						else
						{
							iLocal_70 = 4;
						}
					}
				}
			}
			break;
		
		case 3:
			func_114();
			if (bLocal_145)
			{
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				func_14();
			}
			break;
		
		case 4:
			func_82();
			if (bLocal_145)
			{
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				func_14();
			}
			break;
	}
}

void func_82()
{
	switch (iLocal_143)
	{
		case 0:
			unk_0x2D4223712D41EC89();
			func_58();
			if (func_154(&uLocal_155, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_143++;
			}
			break;
		
		case 1:
			iLocal_143++;
			break;
		
		case 2:
			unk_0x2D4223712D41EC89();
			if (!unk_0x66599E73DBA5A850(iLocal_58))
			{
				unk_0xDC21E058EE11964C(iLocal_58);
				unk_0xDBC7406226B5540E(&uLocal_95);
				unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), 7000, 2048, 2);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 4000);
				unk_0x7D9A648CC1936BDA(0, Local_115, 1f, -1, 0.25f, 0, 311.3569f);
				unk_0x2B8574FAEA21141B(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0xF2CFC6EC8C85FA78(uLocal_95);
				unk_0x3D7110D966B0CEA2(iLocal_58, uLocal_95);
				unk_0x63EF69C6969A3D26(&uLocal_95);
				unk_0x71A535529C1CA5DF(iLocal_58, 1);
				iLocal_144 = unk_0xA5E11AF0A2B928C1() + 4000;
				iLocal_143++;
			}
			break;
		
		case 3:
			if (iLocal_144 < unk_0xA5E11AF0A2B928C1())
			{
				unk_0x2D4223712D41EC89();
				iLocal_143++;
			}
			break;
		
		case 4:
			if (!func_155())
			{
				func_113("DOM_GOLF", -1);
				func_112(&(Global_113648.f_18981), 16);
				if (func_54() == 0)
				{
					func_111(&(Global_113648.f_18981.f_24), 1);
				}
				else if (func_54() == 1)
				{
					func_111(&(Global_113648.f_18981.f_24), 4);
				}
				else if (func_54() == 2)
				{
					func_111(&(Global_113648.f_18981.f_24), 2);
				}
				func_83(func_54(), 1, 80, 0, 1);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_143++;
			}
			break;
		
		case 5:
			if (unk_0x83666F9FB8FEBD4B() > 5000)
			{
				bLocal_145 = true;
			}
			break;
	}
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_110(iParam0) == 3)
	{
		return;
	}
	if (func_110(iParam0) == 4)
	{
		return;
	}
	func_84(func_110(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xDD7756E2742E0F6D(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3CC35ACFFC9C730E(iVar1, iVar0, 1);
	}
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_109();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_108(99, 1);
					func_107(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_107(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_107(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_93(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_91(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_91(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x63C7B2D430A46FC3())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_91(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_90(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_108(95, iParam3);
					break;
				
				case 1:
					func_108(97, iParam3);
					break;
				
				case 2:
					func_108(96, iParam3);
					break;
			}
			func_108(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_87(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_87(bVar1);
	}
	iVar5 = (Global_60536[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60536[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60536[iVar2] = 2147483647;
				}
				else
				{
					Global_60536[iVar2] = (Global_60536[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_107(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_107(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_107(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60536[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60536[iVar2];
			Global_60536[iVar2] = (Global_60536[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113648.f_20566.f_233[iVar2 /*69*/]++;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_1++;
		if (Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_86(iParam0);
	if (Global_43257 == 15)
	{
		func_85(0);
	}
	return 1;
}

void func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60544[iVar0 /*3*/][0] = Global_113648.f_20566[iVar0];
		Global_60544.f_31[iVar0 /*3*/][0] = Global_113648.f_20566.f_11[iVar0];
		Global_60544.f_62[iVar0 /*3*/][0] = Global_113648.f_20566.f_22[iVar0];
		Global_60544.f_93[iVar0 /*3*/][0] = Global_113648.f_20566.f_33[iVar0];
		Global_60544.f_124[iVar0 /*3*/][0] = Global_113648.f_20566.f_44[iVar0];
		Global_60544.f_155[iVar0 /*3*/][0] = Global_113648.f_20566.f_55[iVar0];
		Global_60544.f_186[iVar0 /*3*/][0] = Global_113648.f_20566.f_66[iVar0];
		Global_60544.f_217[iVar0 /*3*/][0] = Global_113648.f_20566.f_77[iVar0];
		Global_60544.f_248[iVar0 /*3*/][0] = Global_113648.f_20566.f_88[iVar0];
		if (!bParam0)
		{
			Global_60544[iVar0 /*3*/][1] = Global_113648.f_20566[iVar0];
			Global_60544.f_31[iVar0 /*3*/][1] = Global_113648.f_20566.f_11[iVar0];
			Global_60544.f_62[iVar0 /*3*/][1] = Global_113648.f_20566.f_22[iVar0];
			Global_60544.f_93[iVar0 /*3*/][1] = Global_113648.f_20566.f_33[iVar0];
			Global_60544.f_124[iVar0 /*3*/][1] = Global_113648.f_20566.f_44[iVar0];
			Global_60544.f_155[iVar0 /*3*/][1] = Global_113648.f_20566.f_55[iVar0];
			Global_60544.f_186[iVar0 /*3*/][1] = Global_113648.f_20566.f_66[iVar0];
			Global_60544.f_217[iVar0 /*3*/][1] = Global_113648.f_20566.f_77[iVar0];
			Global_60544.f_248[iVar0 /*3*/][1] = Global_113648.f_20566.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60536[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3CC35ACFFC9C730E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3CC35ACFFC9C730E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3CC35ACFFC9C730E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_87(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_23(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_23(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_23(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_23(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_6(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_6(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_6(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_6(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_6(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_6(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0xA26A9A07F761D8F8())
	{
		if (BitTest(Global_113648.f_20566.f_471, bParam0))
		{
			bVar0 = true;
			unk_0x061B1200C95204CB(&(Global_113648.f_20566.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_89() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x061B1200C95204CB(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x061B1200C95204CB(&(Global_2359296[func_89() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xD30970E11AD0FF0D("COUP_RED");
		unk_0x48849374B34BB7B9(func_88(bParam0));
		unk_0x4BE755B3858339A1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_88(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_89()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_90(int iParam0)
{
	func_108(93, iParam0);
	func_108(29, iParam0);
	func_108(30, iParam0);
}

int func_91(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_92(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_92(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_92(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_92(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xD48CE560FB238316();
		iVar1 = func_9(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xD48CE560FB238316();
		iVar3 = func_9(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xD48CE560FB238316();
		iVar5 = func_9(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xD48CE560FB238316();
		iVar7 = func_9(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xD48CE560FB238316();
		iVar9 = func_9(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xD48CE560FB238316();
		iVar11 = func_9(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0xA26A9A07F761D8F8())
	{
		return BitTest(Global_113648.f_20566.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_89() /*5568*/].f_681.f_10, iParam0);
}

var func_92(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_93(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x73651E4B1D91FE32(27))
	{
		return 0;
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xDD7756E2742E0F6D(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3CC35ACFFC9C730E(joaat("num_cash_spent"), iVar1, 1);
		func_22(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_94(27, 1);
	return 1;
}

int func_94(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_95(iParam0, iParam1);
}

int func_95(int iParam0, int iParam1)
{
	if (func_32(14) && !func_106(iParam0))
	{
		return 0;
	}
	if (unk_0x73651E4B1D91FE32(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32414 != 0 && !Global_78558)
	{
		return 0;
	}
	if (func_105(&Global_4542597))
	{
		if (func_103(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_96(&Global_4542597, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xD530287A65F961E4(iParam0))
		{
			return 0;
		}
		if (unk_0x73651E4B1D91FE32(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_106(iParam1))
	{
		return 0;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	func_99(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_97(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_106(iParam1))
	{
		return 0;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_98(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_98(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_99(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_100(uParam0, iVar0);
		iVar0++;
	}
	func_101(uParam0, (Global_4542596 - 0.5f));
}

void func_100(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_101(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_102(var uParam0)
{
	return uParam0->f_80;
}

bool func_103(var uParam0, int iParam1)
{
	return func_104(uParam0, iParam1) != -1;
}

int func_104(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_105(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDD7756E2742E0F6D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3CC35ACFFC9C730E(iParam0, iVar0, 1);
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/])
	{
		unk_0xDD7756E2742E0F6D(Global_59104[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3CC35ACFFC9C730E(Global_59104[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_109()
{
	int iVar0;
	
	if (unk_0x7FFBE14C34D75E19())
	{
		unk_0xDD7756E2742E0F6D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60536[0] == iVar0)
		{
			Global_60536[0] = iVar0;
		}
		unk_0xDD7756E2742E0F6D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60536[1] == iVar0)
		{
			Global_60536[1] = iVar0;
		}
		unk_0xDD7756E2742E0F6D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60536[2] == iVar0)
		{
			Global_60536[2] = iVar0;
		}
	}
}

int func_110(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_112(var uParam0, int iParam1)
{
	uParam0->f_23 = (uParam0->f_23 || iParam1);
}

void func_113(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

void func_114()
{
	switch (iLocal_143)
	{
		case 0:
			unk_0x2D4223712D41EC89();
			func_58();
			if (func_154(&uLocal_155, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_143++;
			}
			break;
		
		case 1:
			unk_0x2D4223712D41EC89();
			iLocal_143++;
			break;
		
		case 2:
			unk_0x2D4223712D41EC89();
			iLocal_143++;
			break;
		
		case 3:
			unk_0x2D4223712D41EC89();
			if (!unk_0x66599E73DBA5A850(iLocal_58))
			{
				unk_0xDC21E058EE11964C(iLocal_58);
				unk_0xDBC7406226B5540E(&uLocal_95);
				unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), 7000, 2048, 2);
				unk_0xA3CD3591C0B0EE9A(0, 300);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 4000);
				unk_0x7D9A648CC1936BDA(0, Local_115, 1f, -1, 0.25f, 0, 311.3569f);
				unk_0x2B8574FAEA21141B(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0xF2CFC6EC8C85FA78(uLocal_95);
				unk_0x3D7110D966B0CEA2(iLocal_58, uLocal_95);
				unk_0x63EF69C6969A3D26(&uLocal_95);
				unk_0x71A535529C1CA5DF(iLocal_58, 1);
				if (!unk_0x7DE17ACDD8BA2642(iLocal_121[8]))
				{
					iLocal_121[8] = unk_0xF19D6C0E8B56BE23(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
					unk_0xBD02C9D4D7076ECC(iLocal_121[8], iLocal_58, unk_0xCF99BEF1317B66DA(iLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1, 0);
				}
				iLocal_144 = unk_0xA5E11AF0A2B928C1() + 1000;
				iLocal_143++;
			}
			break;
		
		case 4:
			unk_0x2D4223712D41EC89();
			if (iLocal_144 < unk_0xA5E11AF0A2B928C1())
			{
				if (!unk_0x66599E73DBA5A850(iLocal_58))
				{
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
					iLocal_144 = unk_0xA5E11AF0A2B928C1() + 3000;
					iLocal_143++;
				}
			}
			break;
		
		case 5:
			if (iLocal_144 < unk_0xA5E11AF0A2B928C1())
			{
				unk_0x2D4223712D41EC89();
				iLocal_143++;
			}
			break;
		
		case 6:
			if (!func_155())
			{
				func_113("DOM_GOLF", -1);
				func_112(&(Global_113648.f_18981), 16);
				if (func_54() == 0)
				{
					func_111(&(Global_113648.f_18981.f_24), 1);
				}
				else if (func_54() == 1)
				{
					func_111(&(Global_113648.f_18981.f_24), 4);
				}
				else if (func_54() == 2)
				{
					func_111(&(Global_113648.f_18981.f_24), 2);
				}
				func_83(func_54(), 1, 80, 0, 1);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_143++;
			}
			break;
		
		case 7:
			if (unk_0x83666F9FB8FEBD4B() > 5000)
			{
				bLocal_145 = true;
			}
			break;
	}
}

int func_115(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x45C0F56FBD8A5C1A())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
		{
			return 0;
		}
		iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (bParam0)
		{
			if (unk_0x055111B11E6624FD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x055111B11E6624FD(iVar0, 0))
			{
				if (unk_0xA66E176E5772E965(iVar0, -1, 0) != unk_0xC1A5EC5C986B98AD())
				{
					return 0;
				}
			}
		}
		if (!unk_0x055111B11E6624FD(iVar0, 0))
		{
			if (unk_0x38B6CF1EE3FC9BC1(iVar0) < 0.95f || unk_0x38B6CF1EE3FC9BC1(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (!unk_0xF66F9ECA31DB2AB0(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	return 1;
}

void func_116()
{
	if (!func_62())
	{
		func_57(1);
	}
	if (!func_155())
	{
		switch (iLocal_141)
		{
			case 0:
				if (func_54() == 0)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHTM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHTF", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHTT", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 1:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT2", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 2:
				if (func_54() == 0)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT2M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT2F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT2T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 3:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT3", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 4:
				if (func_54() == 0)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT3M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT3F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT3T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 5:
				func_154(&uLocal_155, "REDO2AU", "REDO_CHT4", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 6:
				iLocal_142 = unk_0xA5E11AF0A2B928C1() + 1000;
				iLocal_141++;
				break;
			
			case 7:
				if (iLocal_142 < unk_0xA5E11AF0A2B928C1())
				{
					if (func_54() == 0)
					{
						func_154(&uLocal_155, "REDO2AU", "REDO_CHT4M", 4, 0, 0, 0);
					}
					else if (func_54() == 1)
					{
						func_154(&uLocal_155, "REDO2AU", "REDO_CHT4F", 4, 0, 0, 0);
					}
					else if (func_54() == 2)
					{
						func_154(&uLocal_155, "REDO2AU", "REDO_CHT4T", 4, 0, 0, 0);
					}
					iLocal_141++;
				}
				break;
			
			case 8:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT5", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 9:
				if (func_54() == 0)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT5M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT5F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT5T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 10:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT6", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 11:
				if (func_54() == 0)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT6M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT6F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT6T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 12:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT7", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 13:
				iLocal_142 = unk_0xA5E11AF0A2B928C1() + 600;
				iLocal_141++;
				break;
			
			case 14:
				if (iLocal_142 < unk_0xA5E11AF0A2B928C1())
				{
					if (func_54() == 0)
					{
						func_154(&uLocal_155, "REDO2AU", "REDO2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_54() == 1)
					{
						func_154(&uLocal_155, "REDO2AU", "REDO2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_54() == 2)
					{
						func_154(&uLocal_155, "REDO2AU", "REDO2_CHT7T", 4, 0, 0, 0);
					}
					iLocal_141++;
				}
				break;
			
			case 15:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT8", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 16:
				if (func_54() == 0)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT8M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT8F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT8T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 17:
				iLocal_142 = unk_0xA5E11AF0A2B928C1() + 800;
				iLocal_141++;
				break;
			
			case 18:
				if (iLocal_142 < unk_0xA5E11AF0A2B928C1())
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT9", 4, 0, 0, 0);
					iLocal_141++;
				}
				break;
			
			case 19:
				if (func_54() == 0)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT9M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT9F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT9T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 20:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT10", 4, 0, 0, 0);
				iLocal_141++;
				break;
			}
	}
}

void func_117()
{
	if (!unk_0x66599E73DBA5A850(iLocal_58))
	{
		if (!iLocal_84)
		{
			if (!unk_0x055111B11E6624FD(unk_0xE475C458F52F1781(), 0))
			{
				if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), unk_0xE475C458F52F1781(), 1) && unk_0xE0D346789C5160EB(iLocal_58, unk_0xE475C458F52F1781(), 0))
				{
					func_57(0);
					func_55();
					unk_0x4EDE34FBADD967A6(0);
					func_154(&uLocal_155, "REDO2AU", "REDO2_GETOUT", 4, 0, 0, 0);
					iLocal_84 = 1;
				}
			}
		}
		else if (!unk_0x055111B11E6624FD(unk_0xE475C458F52F1781(), 0))
		{
			if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), unk_0xE475C458F52F1781(), 0) && unk_0xE0D346789C5160EB(iLocal_58, unk_0xE475C458F52F1781(), 0))
			{
				iLocal_84 = 0;
			}
		}
		if (!iLocal_85)
		{
			if (unk_0xA6AA485513271FDF(unk_0xC1A5EC5C986B98AD()))
			{
				func_57(0);
				func_55();
				unk_0x4EDE34FBADD967A6(0);
				func_154(&uLocal_155, "REDO2AU", "REDO2_JACK", 4, 0, 0, 0);
				iLocal_85 = 1;
			}
		}
		else if (!unk_0xA6AA485513271FDF(unk_0xC1A5EC5C986B98AD()))
		{
			iLocal_85 = 0;
		}
		if (!iLocal_86)
		{
			if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
			{
				func_57(0);
				func_55();
				unk_0x4EDE34FBADD967A6(0);
				func_154(&uLocal_155, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
				iLocal_86 = 1;
			}
		}
		else if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
		{
			iLocal_86 = 0;
		}
	}
}

void func_118()
{
	if (unk_0x63E1343737CA1E47(unk_0xC1A5EC5C986B98AD()))
	{
		if (iLocal_136 == 0)
		{
			iLocal_136 = unk_0xA5E11AF0A2B928C1();
		}
		else
		{
			iLocal_137 = unk_0xA5E11AF0A2B928C1();
		}
	}
	else
	{
		iLocal_137 = 0;
		iLocal_136 = 0;
	}
	if ((iLocal_137 - iLocal_136) > 60000)
	{
		func_55();
		unk_0x4EDE34FBADD967A6(0);
		func_154(&uLocal_155, "REDO2AU", "REDO2_TX", 4, 0, 0, 0);
		if (!unk_0x66599E73DBA5A850(iLocal_58))
		{
			if (unk_0x1C4E4DC1EFE24DF1(iLocal_58, Local_115, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0x7D9A648CC1936BDA(iLocal_58, Local_115, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				unk_0x984708151807AC6D(iLocal_58, 1193033728, 0);
			}
			unk_0x71A535529C1CA5DF(iLocal_58, 1);
			unk_0xDC21E058EE11964C(iLocal_58);
		}
		func_51();
	}
}

void func_119()
{
	if (!unk_0x66599E73DBA5A850(iLocal_58))
	{
		if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_58, 8f, 8f, 8f, 0, 1, 0) || unk_0x741AE70981B696B4(unk_0xC1A5EC5C986B98AD()))
		{
			if ((unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && !unk_0x3C3D6D026CF7F51B(iLocal_58, 0)) && !unk_0x741AE70981B696B4(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0xCE4AAA035282336C(uLocal_102[0]))
				{
					uLocal_102[0] = func_123(iLocal_58, 0, 145);
				}
				if (unk_0xCE4AAA035282336C(uLocal_100))
				{
					unk_0x45533C09A6C9B409(&uLocal_100);
				}
			}
			else
			{
				if (unk_0xCE4AAA035282336C(uLocal_102[0]))
				{
					unk_0x45533C09A6C9B409(&(uLocal_102[0]));
				}
				if (!unk_0xCE4AAA035282336C(uLocal_100))
				{
					uLocal_100 = func_121(Local_112, 1);
				}
				if (func_54() == 2 && !func_47())
				{
					if (!unk_0xCE4AAA035282336C(uLocal_101))
					{
						uLocal_101 = func_121(Local_118, 0);
						unk_0xEA4639F4444B7003(uLocal_101, 269);
						func_120();
					}
				}
			}
		}
		else
		{
			if (!unk_0xCE4AAA035282336C(uLocal_102[0]))
			{
				uLocal_102[0] = func_123(iLocal_58, 0, 145);
			}
			if (unk_0xCE4AAA035282336C(uLocal_100))
			{
				unk_0x45533C09A6C9B409(&uLocal_100);
			}
		}
	}
}

void func_120()
{
	if (func_54() == 2)
	{
		if (!Global_32404)
		{
			func_113("CULT_BLIP_HELP", -1);
			Global_32404 = 1;
		}
	}
}

var func_121(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7F0C74F83813841D(Param0);
	unk_0x225EB85DBC38E707(uVar0, func_122(unk_0xA26A9A07F761D8F8(), 1f, 1f));
	unk_0xBD91E7D4B770F97E(uVar0, iParam3);
	return uVar0;
}

float func_122(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_123(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_124(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE4AAA035282336C(uVar0)) && unk_0x42FA33BDEDF21186(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x4049FDC177C92D4B(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x53B496178AE44636(iParam0);
	if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_122(unk_0xA26A9A07F761D8F8(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
		}
		else
		{
			unk_0x1886753DA39F38F8(uVar0, 2);
		}
	}
	else if (unk_0x71904BD37B848CAF(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_122(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
		unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_122(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_125()
{
	int iVar0;
	
	unk_0x1EEF71E3CDD868D3(&iLocal_57);
	func_126(&uLocal_155, 4);
	iVar0 = 0;
	while (iVar0 < iLocal_121)
	{
		unk_0xC621CC7313639986(&(iLocal_121[iVar0]));
		iVar0++;
	}
	unk_0x0B34FA69ECCE3927("random@domestic");
}

void func_126(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_127()
{
	if (!unk_0x66599E73DBA5A850(iLocal_58))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
		{
			if (!func_130())
			{
				if (unk_0xE65E1573677B6119(iLocal_58))
				{
					unk_0xDC21E058EE11964C(iLocal_58);
				}
				if (unk_0xF5F493B789EA063E(iLocal_58, joaat("script_task_go_to_entity")) != 1 && unk_0xF5F493B789EA063E(iLocal_58, joaat("script_task_go_to_entity")) != 0)
				{
					unk_0xF41AB1E9C5AC9D70(iLocal_58, unk_0xC1A5EC5C986B98AD(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0x3C3D6D026CF7F51B(iLocal_58, 0))
				{
					unk_0x6FE9A0C01D25F413(iLocal_58, 0, 0);
				}
				if (!iLocal_91)
				{
					func_57(0);
					func_55();
					unk_0x4EDE34FBADD967A6(0);
					if (!func_155())
					{
						if (!func_129())
						{
							func_154(&uLocal_155, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_154(&uLocal_155, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_91 = 1;
					}
				}
			}
			else
			{
				iLocal_91 = 0;
				if (unk_0xF5F493B789EA063E(iLocal_58, joaat("script_task_go_to_entity")) == 1 && unk_0xF5F493B789EA063E(iLocal_58, joaat("script_task_go_to_entity")) == 0)
				{
					unk_0x909F139DC199D8E0(iLocal_58);
				}
			}
		}
		else if (!unk_0xE65E1573677B6119(iLocal_58))
		{
			unk_0xF8463C9FBA8DCD46(iLocal_58, func_128());
			unk_0x8E34561476C30D6C(iLocal_58, 1);
			unk_0x04099862985008A1(iLocal_58, 0);
		}
	}
}

var func_128()
{
	return unk_0x2165FE3E3189DC71(unk_0x5DC3DCA82C806319());
}

int func_129()
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
	{
		if (unk_0xFBD273FDBCF0C5BD(unk_0xB3011BC7288F3091(unk_0xC1A5EC5C986B98AD()), 1))
		{
			if ((unk_0x9C7BEEE2232D4F8A(unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 1))) || unk_0x6CEF99E452573979(unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 1)))) || unk_0x5BCB88597C004FED(unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_130()
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (unk_0xFBD273FDBCF0C5BD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0))
		{
			if (((((!unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()) && !unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD())) && !unk_0xB076EA895B1A6BEC(unk_0xC1A5EC5C986B98AD())) && !unk_0x81F36522FE1E02B8(unk_0xC1A5EC5C986B98AD())) && !unk_0x27368BFBD4421C85(unk_0xC1A5EC5C986B98AD())) && !unk_0x36AEE6FB36B84B00(unk_0xC1A5EC5C986B98AD(), joaat("rhino")))
			{
				if (unk_0x2E240694D642679A(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
	{
		if (unk_0xFBD273FDBCF0C5BD(unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD()), 0))
		{
			if ((((!unk_0x2D92D1084D213DC4(unk_0x504B9BB48D41C264(unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD()))) && !unk_0xAF4434A9F7368F35(unk_0x504B9BB48D41C264(unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD())))) && !unk_0x6123E78FD4B274FB(unk_0x504B9BB48D41C264(unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD())))) && !unk_0xF71BABB2940158F7(unk_0x504B9BB48D41C264(unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD())))) && unk_0x504B9BB48D41C264(unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_131()
{
	switch (iLocal_69)
	{
		case 0:
			if (!func_155())
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (func_130())
					{
						if (func_54() == 0)
						{
							func_154(&uLocal_155, "REDO2AU", "REDO2_GLM", 4, 0, 0, 0);
						}
						if (func_54() == 1)
						{
							func_154(&uLocal_155, "REDO2AU", "REDO2_GLF", 4, 0, 0, 0);
						}
						if (func_54() == 2)
						{
							func_154(&uLocal_155, "REDO2AU", "REDO2_GLT", 4, 0, 0, 0);
						}
						iLocal_69 = 2;
					}
					else
					{
						if (func_54() == 0)
						{
							func_154(&uLocal_155, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
						}
						if (func_54() == 1)
						{
							func_154(&uLocal_155, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
						}
						if (func_54() == 2)
						{
							func_154(&uLocal_155, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
						}
						iLocal_69++;
					}
				}
				else
				{
					if (func_54() == 0)
					{
						func_154(&uLocal_155, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
					}
					if (func_54() == 1)
					{
						func_154(&uLocal_155, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
					}
					if (func_54() == 2)
					{
						func_154(&uLocal_155, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
					}
					iLocal_69++;
				}
			}
			break;
		
		case 1:
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				if (!func_130())
				{
					if (!func_155())
					{
						func_154(&uLocal_155, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
						iLocal_139 = unk_0xA5E11AF0A2B928C1();
						iLocal_69++;
					}
				}
				else
				{
					iLocal_69++;
				}
			}
			else if (!func_155())
			{
				func_154(&uLocal_155, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
				iLocal_139 = unk_0xA5E11AF0A2B928C1();
				iLocal_69++;
			}
			break;
		
		case 2:
			iLocal_140 = unk_0xA5E11AF0A2B928C1();
			if (!unk_0x66599E73DBA5A850(iLocal_58))
			{
				if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_58, 12f, 12f, 5f, 0, 1, 2))
				{
					if (func_130())
					{
						unk_0x0133FF6E23A1DCA4(255, uLocal_152, joaat("player"));
						if (func_134("REDO2_WT"))
						{
							func_55();
							unk_0x4EDE34FBADD967A6(0);
						}
						iLocal_69++;
					}
					else if (!func_155() && !iLocal_87)
					{
						if (!func_129())
						{
							func_154(&uLocal_155, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_154(&uLocal_155, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_87 = 1;
					}
				}
			}
			if (iLocal_139 != 0)
			{
				if ((iLocal_140 - iLocal_139) > 60000)
				{
					if (func_154(&uLocal_155, "REDO2AU", "REDO2_TX", 4, 0, 0, 0))
					{
						unk_0x4EDE34FBADD967A6(2000);
						if (!unk_0x66599E73DBA5A850(iLocal_58))
						{
							unk_0xDBC7406226B5540E(&uLocal_95);
							unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 2000);
							unk_0xFF1783C2C0013BD6(0, -1);
							unk_0x984708151807AC6D(0, 1193033728, 0);
							unk_0xF2CFC6EC8C85FA78(uLocal_95);
							unk_0x3D7110D966B0CEA2(iLocal_58, uLocal_95);
							unk_0x63EF69C6969A3D26(&uLocal_95);
							unk_0x71A535529C1CA5DF(iLocal_58, 1);
							unk_0x4EDE34FBADD967A6(3000);
							iLocal_49 = 11;
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x66599E73DBA5A850(iLocal_58) && unk_0x7DE17ACDD8BA2642(iLocal_121[8]))
			{
				unk_0xDBC7406226B5540E(&uLocal_95);
				if (iLocal_68 > 18)
				{
				}
				unk_0x7D9A648CC1936BDA(0, unk_0x30BE8A934C020461(iLocal_121[8], 1) + Vector(0f, 0.39f, 0.35f), 1f, -1, 0f, 512, func_133(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iLocal_121[8], 1)));
				unk_0x3EE48ADC8C7F5CC4(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_95);
				unk_0x3D7110D966B0CEA2(iLocal_58, uLocal_95);
				unk_0x63EF69C6969A3D26(&uLocal_95);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_69++;
			}
			break;
		
		case 4:
		case 5:
			if (!unk_0x66599E73DBA5A850(iLocal_58) && !unk_0x055111B11E6624FD(iLocal_121[8], 0))
			{
				if (unk_0x7BB3D8F4F6310EB8(iLocal_58, "random@domestic", "pickup_low", 3))
				{
					unk_0x01517F1D90085F1A(iLocal_58, iLocal_121[8], 0);
					if (unk_0x92377426879E21FF(iLocal_58, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_69 = 7;
					}
				}
				else if (unk_0xC9D9444186B5A374() > 10000 || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), unk_0x30BE8A934C020461(iLocal_121[8], 1), 1.5f, 1.5f, 3f, 0, 1, 0))
				{
					if (!unk_0xDC116D955A63BDBE(iLocal_121[8]))
					{
						unk_0xDBC7406226B5540E(&uLocal_95);
						unk_0x3EE48ADC8C7F5CC4(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x3EE48ADC8C7F5CC4(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
						unk_0xF2CFC6EC8C85FA78(uLocal_95);
						unk_0x3D7110D966B0CEA2(iLocal_58, uLocal_95);
						unk_0x63EF69C6969A3D26(&uLocal_95);
						iLocal_69 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0x66599E73DBA5A850(iLocal_58) && !unk_0x055111B11E6624FD(iLocal_121[8], 0))
			{
				if (unk_0x7BB3D8F4F6310EB8(iLocal_58, "random@domestic", "pickup_low", 3))
				{
					unk_0x01517F1D90085F1A(iLocal_58, iLocal_121[8], 0);
					if (unk_0x92377426879E21FF(iLocal_58, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_69++;
					}
				}
			}
			break;
		
		case 7:
			if (!unk_0x66599E73DBA5A850(iLocal_58))
			{
				if (unk_0xEAEF747543427AC5(iLocal_58, unk_0xC1A5EC5C986B98AD(), 20f, 20f, 20f, 0, 1, 0))
				{
					unk_0xBD02C9D4D7076ECC(iLocal_121[8], iLocal_58, unk_0xCF99BEF1317B66DA(iLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1, 0);
					unk_0xF8463C9FBA8DCD46(iLocal_58, unk_0x2165FE3E3189DC71(unk_0x93E99A2DBCBA9CFA()));
					unk_0x8E34561476C30D6C(iLocal_58, 1);
					unk_0x04099862985008A1(iLocal_58, 0);
					func_132();
					iLocal_49 = 4;
				}
			}
			break;
	}
}

void func_132()
{
	if (!func_47())
	{
		if (func_54() == 2)
		{
			Global_32402 = 1;
		}
	}
}

var func_133(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x06A2A02CDC68090B((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_134(char* sParam0)
{
	var uVar0;
	
	if (func_155())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (unk_0x4310A0DB886F9FED(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_135()
{
	if (!iLocal_98)
	{
		if (!unk_0x66599E73DBA5A850(iLocal_58))
		{
			if (unk_0xEAEF747543427AC5(iLocal_58, unk_0xC1A5EC5C986B98AD(), 12f, 12f, 5f, 0, 1, 0))
			{
				unk_0x909F139DC199D8E0(iLocal_58);
				unk_0xDBC7406226B5540E(&uLocal_95);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
				unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), 18000, 0, 2);
				unk_0xF2CFC6EC8C85FA78(uLocal_95);
				unk_0x3D7110D966B0CEA2(iLocal_58, uLocal_95);
				unk_0x63EF69C6969A3D26(&uLocal_95);
				unk_0xEDB03CCB50D11479(unk_0xC1A5EC5C986B98AD(), iLocal_58, 15000, 0, 2);
				iLocal_98 = 1;
			}
		}
	}
	if (!unk_0x66599E73DBA5A850(iLocal_58))
	{
		if (unk_0xEAEF747543427AC5(iLocal_58, unk_0xC1A5EC5C986B98AD(), 12f, 12f, 5f, 0, 1, 0))
		{
			if (!bLocal_138)
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					unk_0x909F139DC199D8E0(iLocal_58);
					unk_0xDBC7406226B5540E(&uLocal_95);
					unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 0, 2);
					unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), -1);
					unk_0xF2CFC6EC8C85FA78(uLocal_95);
					unk_0x3D7110D966B0CEA2(iLocal_58, uLocal_95);
					unk_0x63EF69C6969A3D26(&uLocal_95);
					bLocal_138 = true;
				}
				else
				{
					unk_0x909F139DC199D8E0(iLocal_58);
					unk_0xDBC7406226B5540E(&uLocal_95);
					unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 0, 2);
					unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), -1);
					unk_0xF2CFC6EC8C85FA78(uLocal_95);
					unk_0x3D7110D966B0CEA2(iLocal_58, uLocal_95);
					unk_0x63EF69C6969A3D26(&uLocal_95);
					bLocal_138 = true;
				}
			}
			if (bLocal_138)
			{
				if (bLocal_54)
				{
					func_58();
					unk_0x4EDE34FBADD967A6(0);
					if (!unk_0x66599E73DBA5A850(iLocal_58))
					{
						if (!func_155())
						{
							if (unk_0xD495130AEF425591(iLocal_58, unk_0xC1A5EC5C986B98AD(), 90f))
							{
								if (func_154(&uLocal_155, "REDO2AU", "REDO2_LFT2", 4, 0, 0, 0))
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_49 = 7;
								}
							}
						}
					}
				}
				else if (!func_155())
				{
					if (func_154(&uLocal_155, "REDO2AU", "REDO2_LFT", 4, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_49 = 7;
					}
				}
			}
		}
	}
}

void func_136()
{
	if (unk_0x7DE17ACDD8BA2642(iLocal_58))
	{
		if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
		{
			if (func_137())
			{
				func_46(0);
				iLocal_90 = 0;
			}
		}
		else if (func_155() && !iLocal_90)
		{
			func_46(1);
			iLocal_90 = 1;
		}
	}
}

int func_137()
{
	if (Global_22736 == 1)
	{
		return 1;
	}
	return 0;
}

void func_138()
{
	switch (iLocal_68)
	{
		case 0:
			if (!unk_0x66599E73DBA5A850(iLocal_58) && !unk_0x66599E73DBA5A850(iLocal_57))
			{
				if (unk_0x67670574D396B9A8(unk_0x30BE8A934C020461(iLocal_57, 1), 3f))
				{
					if (!func_155())
					{
						if (func_154(&uLocal_155, "REDO2AU", "REDO2_ARMA", 4, 0, 0, 0))
						{
							unk_0x3EE48ADC8C7F5CC4(iLocal_58, "random@domestic", "balcony_fight_male", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							unk_0x3EE48ADC8C7F5CC4(iLocal_57, "random@domestic", "balcony_fight_female", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							iLocal_68++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x66599E73DBA5A850(iLocal_57) && unk_0x7DE17ACDD8BA2642(iLocal_121[8]))
			{
				unk_0xBD02C9D4D7076ECC(iLocal_121[8], iLocal_57, unk_0xCF99BEF1317B66DA(iLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1, 0);
				iLocal_68++;
			}
			break;
		
		case 2:
			if (!unk_0x66599E73DBA5A850(iLocal_57) && unk_0x7DE17ACDD8BA2642(iLocal_121[8]))
			{
				if (unk_0x7BB3D8F4F6310EB8(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x92377426879E21FF(iLocal_57, "random@domestic", "balcony_fight_female") > 0.335f)
					{
						unk_0xA81AA70A4D25E140(iLocal_121[8], 0, 1);
						unk_0x9E1A4BBC2E70DCFB(iLocal_121[8], 1, 0f, 6f, 4f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 3:
			if (!iLocal_88 && unk_0x7DE17ACDD8BA2642(iLocal_121[8]))
			{
				if (unk_0x85A0C6DDA57C5652(iLocal_121[8]))
				{
					unk_0x03AC3DF6C3FAD811(-1, "CLOTHES_THROWN", iLocal_121[8], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_88 = 1;
				}
			}
			if (!func_155() || func_137())
			{
				func_154(&uLocal_155, "REDO2AU", "REDO2_ARFA", 4, 0, 0, 0);
				iLocal_88 = 0;
				iLocal_68++;
			}
			break;
		
		case 4:
			if (!unk_0x66599E73DBA5A850(iLocal_57) && unk_0x7DE17ACDD8BA2642(iLocal_121[9]))
			{
				if (unk_0x7BB3D8F4F6310EB8(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x92377426879E21FF(iLocal_57, "random@domestic", "balcony_fight_female") > 0.473f)
					{
						unk_0xBD02C9D4D7076ECC(iLocal_121[9], iLocal_57, unk_0xCF99BEF1317B66DA(iLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1, 0);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 5:
			if (!func_155() || func_137())
			{
				func_154(&uLocal_155, "REDO2AU", "REDO2_ARMB", 4, 0, 0, 0);
				iLocal_68++;
			}
			break;
		
		case 6:
			if (!unk_0x66599E73DBA5A850(iLocal_57) && unk_0x7DE17ACDD8BA2642(iLocal_121[9]))
			{
				if (unk_0x7BB3D8F4F6310EB8(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x92377426879E21FF(iLocal_57, "random@domestic", "balcony_fight_female") > 0.55f)
					{
						unk_0xA81AA70A4D25E140(iLocal_121[9], 0, 1);
						unk_0x9E1A4BBC2E70DCFB(iLocal_121[9], 1, 1f, 2f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 7:
			if (!iLocal_88 && unk_0x7DE17ACDD8BA2642(iLocal_121[9]))
			{
				if (unk_0x85A0C6DDA57C5652(iLocal_121[9]))
				{
					unk_0x03AC3DF6C3FAD811(-1, "CLOTHES_THROWN", iLocal_121[9], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_88 = 1;
				}
			}
			if (!func_155() || func_137())
			{
				func_154(&uLocal_155, "REDO2AU", "REDO2_ARFB", 4, 0, 0, 0);
				iLocal_88 = 0;
				iLocal_68++;
			}
			break;
		
		case 8:
			if (!unk_0x66599E73DBA5A850(iLocal_57) && unk_0x7DE17ACDD8BA2642(iLocal_121[10]))
			{
				if (unk_0x7BB3D8F4F6310EB8(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x92377426879E21FF(iLocal_57, "random@domestic", "balcony_fight_female") > 0.705f)
					{
						unk_0xBD02C9D4D7076ECC(iLocal_121[10], iLocal_57, unk_0xCF99BEF1317B66DA(iLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1, 0);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 9:
			if (!unk_0x66599E73DBA5A850(iLocal_57) && unk_0x7DE17ACDD8BA2642(iLocal_121[10]))
			{
				if (unk_0x7BB3D8F4F6310EB8(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x92377426879E21FF(iLocal_57, "random@domestic", "balcony_fight_female") > 0.838f)
					{
						unk_0xA81AA70A4D25E140(iLocal_121[10], 0, 1);
						unk_0x9E1A4BBC2E70DCFB(iLocal_121[10], 1, 1f, 3f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 10:
			if (!iLocal_88 && unk_0x7DE17ACDD8BA2642(iLocal_121[10]))
			{
				if (unk_0x85A0C6DDA57C5652(iLocal_121[10]))
				{
					unk_0x03AC3DF6C3FAD811(-1, "CLOTHES_THROWN", iLocal_121[10], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_88 = 1;
				}
			}
			if (!func_155() || func_137())
			{
				func_154(&uLocal_155, "REDO2AU", "REDO2_ARMC", 4, 0, 0, 0);
				iLocal_88 = 0;
				iLocal_68++;
			}
			break;
		
		case 11:
			if (!unk_0x66599E73DBA5A850(iLocal_57) && !unk_0x66599E73DBA5A850(iLocal_58))
			{
				if (unk_0x7BB3D8F4F6310EB8(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x92377426879E21FF(iLocal_57, "random@domestic", "balcony_fight_female") > 0.94f)
					{
						unk_0x06A2A5F6A6959BE7(iLocal_57, iLocal_58, 0);
					}
				}
			}
			if (!func_155() || func_137())
			{
				func_154(&uLocal_155, "REDO2AU", "REDO2_ARFC", 4, 0, 0, 0);
				iLocal_68 = 14;
			}
			break;
		
		case 14:
			if (!func_155())
			{
				if (func_154(&uLocal_155, "REDO2AU", "REDO2_ARFF", 4, 0, 0, 0))
				{
					func_139();
					iLocal_68++;
				}
			}
			break;
		
		case 15:
			if (!func_155())
			{
				if (func_154(&uLocal_155, "REDO2AU", "REDO2_ARMI", 4, 0, 0, 0))
				{
					iLocal_68++;
				}
			}
			break;
		
		case 16:
			if (!unk_0x66599E73DBA5A850(iLocal_58))
			{
				unk_0xDBC7406226B5540E(&uLocal_95);
				unk_0x1F9F6C767BE640D5(0);
				unk_0x195020A03AE6C628(0, Local_109, 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_95);
				unk_0x3D7110D966B0CEA2(iLocal_58, uLocal_95);
				unk_0x63EF69C6969A3D26(&uLocal_95);
				iLocal_68++;
			}
			break;
		
		case 17:
			if (unk_0x7DE17ACDD8BA2642(iLocal_57))
			{
				if (!unk_0x055111B11E6624FD(iLocal_57, 0))
				{
					if (unk_0x1C4E4DC1EFE24DF1(iLocal_57, Local_109, 1f, 1f, 5f, 0, 1, 0) && unk_0xDB08595445CDE2FF(iLocal_57))
					{
						unk_0xE9C250FA35A936C8(&iLocal_57);
					}
				}
			}
			if (iLocal_93 < unk_0xA5E11AF0A2B928C1())
			{
				if (!func_155())
				{
					if (func_154(&uLocal_155, "REDO2AU", "REDO2_INS1", 4, 0, 0, 0))
					{
						iLocal_93 = unk_0xA5E11AF0A2B928C1() + 5000;
						iLocal_94++;
					}
				}
			}
			if (iLocal_94 > 0)
			{
				iLocal_68++;
			}
			break;
		
		case 18:
			if (!unk_0x66599E73DBA5A850(iLocal_58))
			{
				if (!func_155())
				{
					if (func_154(&uLocal_155, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
					{
						unk_0x984708151807AC6D(iLocal_58, 1193033728, 0);
						iLocal_68++;
					}
				}
			}
			break;
	}
	if (!bLocal_54)
	{
		if (iLocal_68 > 2 && iLocal_68 < 8)
		{
			if (!unk_0x66599E73DBA5A850(iLocal_58))
			{
				if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_58, 6f, 4f, 5f, 0, 1, 0) || (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_58, 12f, 12f, 5f, 0, 1, 2) && unk_0x56092233CEE9770B(unk_0x93E99A2DBCBA9CFA())))
				{
					unk_0x909F139DC199D8E0(iLocal_58);
					func_139();
					if (iLocal_68 > 18)
					{
						iLocal_49 = 3;
					}
					else
					{
						func_58();
						while (func_155())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						if (func_154(&uLocal_155, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_54 = true;
							iLocal_49 = 3;
						}
					}
				}
			}
		}
		else if (iLocal_68 > 7)
		{
			if (!unk_0x66599E73DBA5A850(iLocal_58))
			{
				if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_58, 6f, 8f, 5f, 0, 1, 0))
				{
					if (unk_0xCE4AAA035282336C(uLocal_102[0]))
					{
						unk_0xA4B6A532E7DDE178(uLocal_102[0], 1);
					}
					unk_0x909F139DC199D8E0(iLocal_58);
					func_139();
					if (iLocal_68 > 18)
					{
						iLocal_49 = 3;
					}
					else
					{
						func_55();
						while (func_155())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						if (func_154(&uLocal_155, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_54 = true;
							iLocal_49 = 3;
						}
					}
				}
			}
		}
	}
	if (bLocal_56)
	{
		if (iLocal_55 < unk_0xA5E11AF0A2B928C1())
		{
			func_58();
			if (unk_0x7DE17ACDD8BA2642(iLocal_57))
			{
				func_139();
			}
			iLocal_49 = 3;
		}
	}
}

void func_139()
{
	int iVar0;
	
	if (!unk_0x66599E73DBA5A850(iLocal_57))
	{
		unk_0xDBC7406226B5540E(&uLocal_95);
		unk_0x99C48B4CDA4D89A7(0, Local_109, 1f, -1, 1193033728, 1056964608);
		unk_0x3EE48ADC8C7F5CC4(0, "random@domestic", "f_attack_end", 2f, -2f, -1, 1, 0, 0, 0, 0);
		unk_0xF2CFC6EC8C85FA78(uLocal_95);
		unk_0x3D7110D966B0CEA2(iLocal_57, uLocal_95);
		unk_0x63EF69C6969A3D26(&uLocal_95);
		unk_0x71A535529C1CA5DF(iLocal_57, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (unk_0x7DE17ACDD8BA2642(iLocal_121[iVar0]))
			{
				unk_0xA81AA70A4D25E140(iLocal_121[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_140(int iParam0)
{
	if (func_143())
	{
		Global_113638 = 1;
		Global_113635 = unk_0xA5E11AF0A2B928C1();
		if (func_25(Global_113637))
		{
			func_141(0);
		}
		unk_0x97DBA2AA6C70AFC7(1, "RE_TITLE");
		if (iParam0 && func_25(Global_113637))
		{
			unk_0x01680CFD15C1C85D();
		}
		return 1;
	}
	return 0;
}

void func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_113(func_142(iParam0), -1);
					Global_113648.f_24997.f_2++;
					unk_0xECDAB41968FF21A8(&Global_113644, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113644, 1))
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_113(func_142(iParam0), -1);
					Global_113648.f_24997.f_3++;
					unk_0xECDAB41968FF21A8(&Global_113644, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113644, 2))
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_113(func_142(iParam0), -1);
					Global_113648.f_24997.f_4++;
					unk_0xECDAB41968FF21A8(&Global_113644, 2);
				}
			}
			break;
	}
}

char* func_142(int iParam0)
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

int func_143()
{
	switch (func_144(&Global_32223, 0, 5, 0, unk_0xAF908D5E2416DA93()))
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

int func_144(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98159.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_148(0))
		{
			return 0;
		}
		Global_43221++;
		*uParam0 = Global_43221;
		unk_0xA7225B88CE344621(unk_0x5DC3DCA82C806319(), 0);
		Global_23131.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xDAD6345C5D317E79(8);
		}
		Global_43257 = iParam2;
		Global_43219 = *uParam0;
		Global_43220 = iParam4;
		Global_43218 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43218 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43218)
			{
				if (Global_43224[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43219 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_146(iParam2))
		{
			return 0;
		}
		if (Global_43218 == 8)
		{
			return 0;
		}
		Global_43221++;
		*uParam0 = Global_43221;
		Global_43224[Global_43218 /*4*/] = Global_43221;
		Global_43224[Global_43218 /*4*/].f_1 = iParam1;
		Global_43224[Global_43218 /*4*/].f_2 = iParam2;
		Global_43224[Global_43218 /*4*/].f_3 = 0;
		Global_43218++;
		if (iParam4 != 0)
		{
			func_145(uParam0, iParam4);
		}
	}
	return 2;
}

void func_145(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43218 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43218)
	{
		if (Global_43224[iVar0 /*4*/] == *uParam0)
		{
			Global_43224[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_146(int iParam0)
{
	return func_147(iParam0, Global_43257);
}

int func_147(int iParam0, int iParam1)
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

int func_148(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_146(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_149()
{
	if (unk_0xCE4AAA035282336C(uLocal_105))
	{
		unk_0x45533C09A6C9B409(&uLocal_105);
	}
	if (!unk_0xCE4AAA035282336C(uLocal_102[0]))
	{
		uLocal_102[0] = func_123(iLocal_58, 0, 145);
		unk_0xA4B6A532E7DDE178(uLocal_102[0], 0);
	}
}

void func_150()
{
	func_4(39, 1);
	func_4(40, 1);
	func_4(41, 1);
	func_4(42, 1);
	func_4(43, 1);
	func_4(44, 1);
	unk_0xF82BC5193AF62796(Local_63, 2f, 1, 0, 0, 0);
	unk_0xF82BC5193AF62796(Local_60, 2f, 1, 0, 0, 0);
	unk_0x8E09E8C52602EBB2(Local_63 - Vector(10f, 10f, 10f), Local_63 + Vector(10f, 10f, 10f), 0, 1);
	unk_0x9D0EAD95433304CA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 0, 0, 1);
	unk_0x54ECDA2DAB9CFB10(Local_63 - Vector(10f, 10f, 10f), Local_63 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	unk_0x54ECDA2DAB9CFB10(Local_112 - Vector(3f, 2f, 2f), Local_112 + Vector(3f, 2f, 2f), 0, 1, 1, 1);
	unk_0x54ECDA2DAB9CFB10(Vector(53.1038f, 56.6649f, -1366.481f) - Vector(1f, 1f, 1f), Vector(53.1038f, 56.6649f, -1366.481f) + Vector(1f, 1f, 1f), 0, 1, 1, 1);
	unk_0xDA95D0C19E737224("rghDomestic", &uLocal_152);
	unk_0x0133FF6E23A1DCA4(5, uLocal_152, joaat("player"));
	iLocal_57 = unk_0x69FDD9508259E5B5(26, iLocal_96, Local_60, fLocal_66, 1, 1);
	unk_0xC5B2830898581862(iLocal_57, 1);
	unk_0x7FE5E05BE63F6CB8(iLocal_57, 17, 1);
	unk_0x7FE5E05BE63F6CB8(iLocal_57, 8, 0);
	unk_0x474AA9EF29305EA8(iLocal_57, 1, 0);
	unk_0x474AA9EF29305EA8(iLocal_57, 2, 0);
	unk_0x474AA9EF29305EA8(iLocal_57, 128, 1);
	unk_0x474AA9EF29305EA8(iLocal_57, 8, 0);
	unk_0x3EE48ADC8C7F5CC4(iLocal_57, "random@domestic", "balcony_fight_idle_female", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x8386356641D0DED1(iLocal_57, uLocal_152);
	func_153(iLocal_57, "GENERIC_WHATEVER", 24);
	unk_0xE0A291F406691F03(iLocal_96);
	unk_0x598D91BBD045C1F3(iLocal_57, 185, 1);
	iLocal_58 = unk_0x69FDD9508259E5B5(26, iLocal_97, Local_63, fLocal_67, 1, 1);
	unk_0xC5B2830898581862(iLocal_58, 1);
	unk_0x474AA9EF29305EA8(iLocal_58, 1, 1);
	unk_0x474AA9EF29305EA8(iLocal_58, 2, 0);
	unk_0x474AA9EF29305EA8(iLocal_58, 128, 1);
	unk_0x474AA9EF29305EA8(iLocal_58, 8, 0);
	unk_0x474AA9EF29305EA8(iLocal_58, 65536, 1);
	unk_0x598D91BBD045C1F3(iLocal_58, 185, 1);
	unk_0x598D91BBD045C1F3(iLocal_58, 206, 1);
	unk_0x45583CDA541E788E(iLocal_58, 0);
	unk_0xD14067404D35AAE7(iLocal_58, 0);
	unk_0x3EE48ADC8C7F5CC4(iLocal_58, "random@domestic", "balcony_fight_idle_male", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x8386356641D0DED1(iLocal_58, uLocal_152);
	func_153(iLocal_58, "GENERIC_WHATEVER", 24);
	unk_0xE0A291F406691F03(iLocal_97);
	unk_0xEDB03CCB50D11479(iLocal_58, iLocal_57, -1, 0, 2);
	unk_0xEDB03CCB50D11479(iLocal_57, iLocal_58, -1, 0, 2);
	unk_0xFECAE061D8C80757(iLocal_57, 0, 1, 0, 0);
	unk_0xFECAE061D8C80757(iLocal_57, 2, 1, 1, 0);
	unk_0xFECAE061D8C80757(iLocal_57, 3, 1, 1, 0);
	unk_0xFECAE061D8C80757(iLocal_57, 4, 1, 2, 0);
	unk_0xFECAE061D8C80757(iLocal_58, 0, 0, 0, 0);
	unk_0xFECAE061D8C80757(iLocal_58, 2, 1, 0, 0);
	unk_0xFECAE061D8C80757(iLocal_58, 3, 1, 2, 0);
	unk_0xFECAE061D8C80757(iLocal_58, 4, 1, 1, 0);
	unk_0xFECAE061D8C80757(iLocal_58, 8, 0, 0, 0);
	func_152();
	unk_0xECDAB41968FF21A8(&uLocal_134, 5);
	if (func_54() == 0)
	{
		func_151(&uLocal_155, 0, unk_0xC1A5EC5C986B98AD(), "MICHAEL", 0, 1);
	}
	if (func_54() == 1)
	{
		func_151(&uLocal_155, 1, unk_0xC1A5EC5C986B98AD(), "FRANKLIN", 0, 1);
	}
	if (func_54() == 2)
	{
		func_151(&uLocal_155, 2, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
	}
	func_151(&uLocal_155, 3, iLocal_58, "REDOCastro", 0, 1);
	unk_0xEE72EF85581D1171(iLocal_58, sLocal_153);
	func_151(&uLocal_155, 4, iLocal_57, "NATHALIA", 0, 1);
	unk_0xEE72EF85581D1171(iLocal_57, sLocal_154);
	unk_0xC1B1E9A034A63A62(0);
	iLocal_150 = 1;
}

void func_151(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x66599E73DBA5A850(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xAD4CEC14FE6404F6(iParam2, 0);
			}
			else
			{
				unk_0xAD4CEC14FE6404F6(iParam2, 1);
			}
		}
		if (!unk_0x66599E73DBA5A850(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59B8D6E436F5B21C(iParam2, 0);
			}
			else
			{
				unk_0x59B8D6E436F5B21C(iParam2, 1);
			}
		}
	}
}

void func_152()
{
	iLocal_121[0] = unk_0xF19D6C0E8B56BE23(joaat("prop_ld_tshirt_02"), -470.3661f, 541.385f, 120.0205f, 1, 1, 0);
	unk_0x464B5B0F22497FC5(iLocal_121[0], -13.7262f, 0.5001f, -0.5886f, 2, 1);
	unk_0x2718E9CC165A99F6(iLocal_121[0], 1);
	unk_0xE0A291F406691F03(joaat("prop_ld_tshirt_02"));
	iLocal_121[1] = unk_0xF19D6C0E8B56BE23(joaat("prop_ld_jeans_02"), -470.8998f, 540.7595f, 120.169f, 1, 1, 0);
	unk_0x464B5B0F22497FC5(iLocal_121[1], -7.3906f, -12.8136f, -63.733f, 2, 1);
	unk_0x2718E9CC165A99F6(iLocal_121[1], 1);
	unk_0xE0A291F406691F03(joaat("prop_ld_jeans_02"));
	iLocal_121[2] = unk_0xF19D6C0E8B56BE23(joaat("prop_ld_shoe_01"), -468.3266f, 540.7725f, 120.1762f, 1, 1, 0);
	unk_0x464B5B0F22497FC5(iLocal_121[2], -7.041683f, 10.17298f, 45.7617f, 2, 1);
	unk_0x2718E9CC165A99F6(iLocal_121[2], 1);
	unk_0xE0A291F406691F03(joaat("prop_ld_shoe_01"));
	iLocal_121[3] = unk_0xF19D6C0E8B56BE23(joaat("prop_ld_jeans_01"), -468.7787f, 541.864f, 119.9098f, 1, 1, 0);
	unk_0x464B5B0F22497FC5(iLocal_121[3], -8.5884f, 12.6893f, 57.1792f, 2, 1);
	unk_0x2718E9CC165A99F6(iLocal_121[3], 1);
	unk_0xE0A291F406691F03(joaat("prop_ld_jeans_01"));
	iLocal_121[4] = unk_0xF19D6C0E8B56BE23(joaat("prop_ld_shoe_02"), -470.9009f, 541.2538f, 120.0578f, 1, 1, 0);
	unk_0x464B5B0F22497FC5(iLocal_121[4], -16.4886f, 2.4979f, -3.8769f, 2, 1);
	unk_0x2718E9CC165A99F6(iLocal_121[4], 1);
	unk_0xE0A291F406691F03(joaat("prop_ld_shoe_02"));
	iLocal_121[5] = unk_0xF19D6C0E8B56BE23(joaat("prop_ld_shirt_01"), -472.0366f, 542.0591f, 119.8243f, 1, 1, 0);
	unk_0x464B5B0F22497FC5(iLocal_121[5], -3.5946f, -15.0978f, -75.5026f, 2, 1);
	unk_0x2718E9CC165A99F6(iLocal_121[5], 1);
	unk_0xE0A291F406691F03(joaat("prop_ld_shirt_01"));
	iLocal_121[6] = unk_0xF19D6C0E8B56BE23(joaat("prop_porn_mag_03"), -472.7543f, 542.3022f, 119.7628f, 1, 1, 0);
	unk_0x464B5B0F22497FC5(iLocal_121[6], 6.402527f, -15.68665f, -104.1308f, 2, 1);
	unk_0x2718E9CC165A99F6(iLocal_121[6], 1);
	unk_0xE0A291F406691F03(joaat("prop_porn_mag_03"));
	iLocal_121[7] = unk_0xF19D6C0E8B56BE23(joaat("prop_porn_mag_01"), -471.8675f, 543.6655f, 119.4991f, 1, 1, 0);
	unk_0x464B5B0F22497FC5(iLocal_121[7], -8.3642f, 1.9344f, 2.6889f, 2, 1);
	unk_0x2718E9CC165A99F6(iLocal_121[7], 1);
	unk_0xE0A291F406691F03(joaat("prop_porn_mag_01"));
	iLocal_121[8] = unk_0xF19D6C0E8B56BE23(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	iLocal_121[9] = unk_0xF19D6C0E8B56BE23(joaat("prop_cs_rub_binbag_01"), -473.195f, 537.2585f, 123.3303f, 1, 1, 0);
	unk_0xE0A291F406691F03(joaat("prop_cs_rub_binbag_01"));
	iLocal_121[10] = unk_0xF19D6C0E8B56BE23(joaat("prop_golf_bag_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	unk_0xE0A291F406691F03(joaat("prop_golf_bag_01"));
}

void func_153(var uParam0, char* sParam1, int iParam2)
{
	unk_0x824D23CC0FE1835A(uParam0, sParam1, func_50(iParam2), 1);
}

bool func_154(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_79(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_65(sParam2, iParam3, 0);
}

int func_155()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

void func_156()
{
	if (!unk_0x66599E73DBA5A850(iLocal_58) && !unk_0x66599E73DBA5A850(iLocal_57))
	{
		if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
		{
			if (unk_0x85D2845BAE56DBF8(iLocal_58, unk_0xC1A5EC5C986B98AD()) || unk_0x85D2845BAE56DBF8(iLocal_57, unk_0xC1A5EC5C986B98AD()))
			{
				if (((unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iLocal_58) || unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iLocal_58)) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iLocal_57)) || unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iLocal_57))
				{
					if (iLocal_135 == -1)
					{
						iLocal_135 = unk_0xA5E11AF0A2B928C1();
					}
				}
				else
				{
					iLocal_135 = -1;
				}
			}
			if ((iLocal_135 != -1 && unk_0xA5E11AF0A2B928C1() > iLocal_135 + 500) || unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
			{
				func_163();
			}
		}
	}
	if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		func_163();
	}
	if (iLocal_49 == 1)
	{
		if (unk_0x7DE17ACDD8BA2642(iLocal_58))
		{
			if (func_162(iLocal_58))
			{
				func_161();
			}
		}
	}
	if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), -471.1757f, 535.356f, 124.8557f, 3f, 2.5f, 1.5f, 0, 1, 0))
	{
		func_160();
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_57))
	{
		if (func_159(iLocal_57))
		{
			func_157();
		}
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_58))
	{
		if (func_159(iLocal_58) || unk_0x7559C38E6535AB89(iLocal_58, unk_0xC1A5EC5C986B98AD(), 1))
		{
			func_157();
		}
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_57))
	{
		if (func_159(iLocal_57) || unk_0x7559C38E6535AB89(iLocal_57, unk_0xC1A5EC5C986B98AD(), 1))
		{
			func_157();
		}
	}
	if (!unk_0x66599E73DBA5A850(iLocal_58))
	{
		if (!unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_58, 250f, 250f, 250f, 0, 1, 0) || unk_0x1589BC95A4C50F21(iLocal_58))
		{
			iLocal_49 = 11;
		}
	}
	if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
	{
		func_157();
	}
}

void func_157()
{
	func_55();
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
	{
		func_154(&uLocal_155, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
	}
	else
	{
		func_154(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	}
	if (!unk_0x66599E73DBA5A850(iLocal_58))
	{
		unk_0x909F139DC199D8E0(iLocal_58);
		unk_0xDBC7406226B5540E(&uLocal_95);
		unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
		unk_0xF2CFC6EC8C85FA78(uLocal_95);
		unk_0x3D7110D966B0CEA2(iLocal_58, uLocal_95);
		unk_0x63EF69C6969A3D26(&uLocal_95);
		unk_0x71A535529C1CA5DF(iLocal_58, 1);
		unk_0x4EDE34FBADD967A6(3000);
	}
	func_158();
	unk_0x4EDE34FBADD967A6(0);
	func_51();
	iLocal_49 = 11;
}

void func_158()
{
	int iVar0;
	
	if (!unk_0x66599E73DBA5A850(iLocal_57))
	{
		unk_0xA2C73FAE5789EC05(iLocal_57, -1);
		unk_0x71A535529C1CA5DF(iLocal_57, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (unk_0x7DE17ACDD8BA2642(iLocal_121[iVar0]))
			{
				unk_0xA81AA70A4D25E140(iLocal_121[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_159(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		if (unk_0x055111B11E6624FD(iParam0, 0))
		{
			if (unk_0x7559C38E6535AB89(iParam0, unk_0xC1A5EC5C986B98AD(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_160()
{
	func_158();
	func_55();
	unk_0x4EDE34FBADD967A6(0);
	func_154(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!unk_0x66599E73DBA5A850(iLocal_58))
	{
		unk_0x909F139DC199D8E0(iLocal_58);
		unk_0xDBC7406226B5540E(&uLocal_95);
		unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
		unk_0xF2CFC6EC8C85FA78(uLocal_95);
		unk_0x3D7110D966B0CEA2(iLocal_58, uLocal_95);
		unk_0x63EF69C6969A3D26(&uLocal_95);
		unk_0x71A535529C1CA5DF(iLocal_58, 1);
		unk_0x4EDE34FBADD967A6(3000);
	}
	func_51();
	iLocal_49 = 11;
}

void func_161()
{
	if (!unk_0x66599E73DBA5A850(iLocal_58))
	{
		unk_0x909F139DC199D8E0(iLocal_58);
		unk_0xCF302B47D4B347F1(iLocal_58, unk_0x30BE8A934C020461(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 1), 150f, -1, 0, 0);
		unk_0x71A535529C1CA5DF(iLocal_58, 1);
	}
	iLocal_49 = 11;
}

int func_162(int iParam0)
{
	if (!unk_0x66599E73DBA5A850(uParam0))
	{
		if (!unk_0x3C3D6D026CF7F51B(iParam0, 0) && unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iParam0, 1.5f, 1.5f, 8f, 0, 1, 2))
		{
			if (unk_0xDC58AE028CB223BA(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) > 4f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_163()
{
	func_55();
	unk_0x4EDE34FBADD967A6(0);
	func_154(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!unk_0x66599E73DBA5A850(iLocal_58))
	{
		unk_0xDBC7406226B5540E(&uLocal_95);
		unk_0x6FE9A0C01D25F413(0, 0, 4096);
		unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
		unk_0xF2CFC6EC8C85FA78(uLocal_95);
		unk_0x3D7110D966B0CEA2(iLocal_58, uLocal_95);
		unk_0x63EF69C6969A3D26(&uLocal_95);
		unk_0x71A535529C1CA5DF(iLocal_58, 1);
		unk_0x4EDE34FBADD967A6(3000);
	}
	func_51();
	iLocal_49 = 11;
}

void func_164()
{
	unk_0x852EC2A7DE66202D(iLocal_96);
	unk_0x852EC2A7DE66202D(iLocal_97);
	unk_0x852EC2A7DE66202D(joaat("prop_golf_iron_01"));
	unk_0x852EC2A7DE66202D(joaat("prop_cs_rub_binbag_01"));
	unk_0x852EC2A7DE66202D(joaat("prop_golf_bag_01"));
	unk_0x852EC2A7DE66202D(joaat("prop_ld_tshirt_02"));
	unk_0x852EC2A7DE66202D(joaat("prop_ld_jeans_02"));
	unk_0x852EC2A7DE66202D(joaat("prop_ld_shoe_01"));
	unk_0x852EC2A7DE66202D(joaat("prop_ld_jeans_01"));
	unk_0x852EC2A7DE66202D(joaat("prop_ld_shoe_02"));
	unk_0x852EC2A7DE66202D(joaat("prop_ld_shirt_01"));
	unk_0x852EC2A7DE66202D(joaat("prop_porn_mag_03"));
	unk_0x852EC2A7DE66202D(joaat("prop_porn_mag_01"));
	unk_0x28818732C8F0F80E("random@domestic");
	unk_0x28818732C8F0F80E("random@security_van");
	if ((((((((((((((unk_0x0CBB7C273DED26E7(iLocal_96) && unk_0x0CBB7C273DED26E7(iLocal_97)) && unk_0x0CBB7C273DED26E7(joaat("prop_golf_iron_01"))) && unk_0x0CBB7C273DED26E7(joaat("prop_cs_rub_binbag_01"))) && unk_0x0CBB7C273DED26E7(joaat("prop_golf_bag_01"))) && unk_0x0CBB7C273DED26E7(joaat("prop_ld_tshirt_02"))) && unk_0x0CBB7C273DED26E7(joaat("prop_ld_jeans_02"))) && unk_0x0CBB7C273DED26E7(joaat("prop_ld_shoe_01"))) && unk_0x0CBB7C273DED26E7(joaat("prop_ld_jeans_01"))) && unk_0x0CBB7C273DED26E7(joaat("prop_ld_shoe_02"))) && unk_0x0CBB7C273DED26E7(joaat("prop_ld_shirt_01"))) && unk_0x0CBB7C273DED26E7(joaat("prop_porn_mag_03"))) && unk_0x0CBB7C273DED26E7(joaat("prop_porn_mag_01"))) && unk_0x2BBF749E555360DC("random@domestic")) && unk_0x2BBF749E555360DC("random@security_van"))
	{
		bLocal_50 = true;
	}
	else
	{
		unk_0x852EC2A7DE66202D(iLocal_96);
		unk_0x852EC2A7DE66202D(iLocal_97);
		unk_0x852EC2A7DE66202D(joaat("prop_golf_iron_01"));
		unk_0x852EC2A7DE66202D(joaat("prop_cs_rub_binbag_01"));
		unk_0x852EC2A7DE66202D(joaat("prop_golf_bag_01"));
		unk_0x852EC2A7DE66202D(joaat("prop_ld_tshirt_02"));
		unk_0x852EC2A7DE66202D(joaat("prop_ld_jeans_02"));
		unk_0x852EC2A7DE66202D(joaat("prop_ld_shoe_01"));
		unk_0x852EC2A7DE66202D(joaat("prop_ld_jeans_01"));
		unk_0x852EC2A7DE66202D(joaat("prop_ld_shoe_02"));
		unk_0x852EC2A7DE66202D(joaat("prop_ld_shirt_01"));
		unk_0x852EC2A7DE66202D(joaat("prop_porn_mag_03"));
		unk_0x852EC2A7DE66202D(joaat("prop_porn_mag_01"));
		unk_0x28818732C8F0F80E("random@domestic");
		unk_0x28818732C8F0F80E("random@security_van");
	}
}

void func_165()
{
	Local_106 = { -470.4934f, 540.0073f, 120.3715f };
	iLocal_96 = joaat("a_f_y_business_02");
	iLocal_97 = joaat("a_m_y_golfer_01");
	sLocal_153 = "REDOCastro";
	sLocal_154 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
	Local_60 = { -472.6554f, 536.469f, 123.3555f };
	fLocal_66 = 348.9152f;
	Local_63 = { -470.1328f, 542.9949f, 119.6873f };
	fLocal_67 = 156.0666f;
	Local_109 = { -469.082f, 535.0479f, 123.3553f };
	Local_112 = { -1378.273f, 40.2254f, 52.6774f };
	Local_115 = { -1368.188f, 57.2309f, 52.7045f };
	bLocal_59 = true;
}

int func_166()
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_177())
		{
			return 0;
		}
	}
	if (func_173())
	{
		return 1;
	}
	if (func_167(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_167(float fParam0, bool bParam1)
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
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (func_33(func_54()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113648.f_18576[iVar32 /*6*/], 2) && !BitTest(Global_113648.f_18576[iVar32 /*6*/], 3))
				{
					func_168(iVar32, &Var0);
					fVar35 = unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), Var0.f_6, 1);
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

void func_168(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_169(uParam1, "Abigail1", func_171(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 1:
			func_169(uParam1, "Abigail2", func_171(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 2:
			func_169(uParam1, "Barry1", func_171(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 3:
			func_169(uParam1, "Barry2", func_171(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 4:
			func_169(uParam1, "Barry3", func_171(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 5:
			func_169(uParam1, "Barry3A", func_171(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 6:
			func_169(uParam1, "Barry3C", func_171(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 7:
			func_169(uParam1, "Barry4", func_171(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_170(iParam0), 0, 0);
			break;
		
		case 8:
			func_169(uParam1, "Dreyfuss1", func_171(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 9:
			func_169(uParam1, "Epsilon1", func_171(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 10:
			func_169(uParam1, "Epsilon2", func_171(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 11:
			func_169(uParam1, "Epsilon3", func_171(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 12:
			func_169(uParam1, "Epsilon4", func_171(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 13:
			func_169(uParam1, "Epsilon5", func_171(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 14:
			func_169(uParam1, "Epsilon6", func_171(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 15:
			func_169(uParam1, "Epsilon7", func_171(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 16:
			func_169(uParam1, "Epsilon8", func_171(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 17:
			func_169(uParam1, "Extreme1", func_171(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 18:
			func_169(uParam1, "Extreme2", func_171(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 19:
			func_169(uParam1, "Extreme3", func_171(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 20:
			func_169(uParam1, "Extreme4", func_171(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 21:
			func_169(uParam1, "Fanatic1", func_171(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_170(iParam0), 1, 0);
			break;
		
		case 22:
			func_169(uParam1, "Fanatic2", func_171(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_170(iParam0), 1, 0);
			break;
		
		case 23:
			func_169(uParam1, "Fanatic3", func_171(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_170(iParam0), 0, 1);
			break;
		
		case 24:
			func_169(uParam1, "Hao1", func_171(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_170(iParam0), 0, 1);
			break;
		
		case 25:
			func_169(uParam1, "Hunting1", func_171(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 26:
			func_169(uParam1, "Hunting2", func_171(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 27:
			func_169(uParam1, "Josh1", func_171(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 28:
			func_169(uParam1, "Josh2", func_171(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 29:
			func_169(uParam1, "Josh3", func_171(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 30:
			func_169(uParam1, "Josh4", func_171(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 31:
			func_169(uParam1, "Maude1", func_171(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 32:
			func_169(uParam1, "Minute1", func_171(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 33:
			func_169(uParam1, "Minute2", func_171(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 34:
			func_169(uParam1, "Minute3", func_171(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 35:
			func_169(uParam1, "MrsPhilips1", func_171(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 36:
			func_169(uParam1, "MrsPhilips2", func_171(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 37:
			func_169(uParam1, "Nigel1", func_171(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 38:
			func_169(uParam1, "Nigel1A", func_171(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 39:
			func_169(uParam1, "Nigel1B", func_171(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
		
		case 40:
			func_169(uParam1, "Nigel1C", func_171(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
		
		case 41:
			func_169(uParam1, "Nigel1D", func_171(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
		
		case 42:
			func_169(uParam1, "Nigel2", func_171(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 43:
			func_169(uParam1, "Nigel3", func_171(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 44:
			func_169(uParam1, "Omega1", func_171(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 45:
			func_169(uParam1, "Omega2", func_171(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 46:
			func_169(uParam1, "Paparazzo1", func_171(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 47:
			func_169(uParam1, "Paparazzo2", func_171(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 48:
			func_169(uParam1, "Paparazzo3", func_171(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 49:
			func_169(uParam1, "Paparazzo3A", func_171(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 50:
			func_169(uParam1, "Paparazzo3B", func_171(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 51:
			func_169(uParam1, "Paparazzo4", func_171(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 52:
			func_169(uParam1, "Rampage1", func_171(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 54:
			func_169(uParam1, "Rampage3", func_171(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 55:
			func_169(uParam1, "Rampage4", func_171(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 56:
			func_169(uParam1, "Rampage5", func_171(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 53:
			func_169(uParam1, "Rampage2", func_171(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 57:
			func_169(uParam1, "TheLastOne", func_171(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 58:
			func_169(uParam1, "Tonya1", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 59:
			func_169(uParam1, "Tonya2", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 60:
			func_169(uParam1, "Tonya3", func_171(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 61:
			func_169(uParam1, "Tonya4", func_171(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 62:
			func_169(uParam1, "Tonya5", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_169(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_170(int iParam0)
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

struct<2> func_171(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_172(iParam0) };
	if (unk_0x2AC37494BBF1DB16(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_172(int iParam0)
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

int func_173()
{
	if (func_176() && !func_177())
	{
		return 1;
	}
	if (func_175() && func_174())
	{
		return 1;
	}
	return 0;
}

bool func_174()
{
	return Global_113366 > 0;
}

int func_175()
{
	if (Global_97603 != -1)
	{
		return 1;
	}
	return 0;
}

int func_176()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

int func_177()
{
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x27654E358E874F45() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_178()
{
	if (!func_146(5))
	{
		return 1;
	}
	if (func_173())
	{
		return 1;
	}
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_177())
		{
			return 0;
		}
	}
	if (func_167(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_179()
{
	if ((Global_113637 == func_40() && unk_0xA847A0F368810680()) && Global_113638)
	{
		return 1;
	}
	return 0;
}

void func_180(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_182(iParam0);
	unk_0x1A59C174B4130991(0);
	unk_0xB1BC77E1EAD07BAE(1);
	Global_113634 = 0;
	func_181();
}

void func_181()
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			unk_0x9C56520AE72AFDBF(unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)), 1);
		}
		unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 32, 0);
	}
}

void func_182(int iParam0)
{
	Global_113637 = iParam0;
}

int func_183(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152234)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_40();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_224())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			Var1 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_177())
			{
				return 0;
			}
		}
		if (!Global_113648.f_9087)
		{
			return 0;
		}
		if (func_17(0))
		{
			return 0;
		}
		if (func_173())
		{
			return 0;
		}
		if (func_223())
		{
			return 0;
		}
		if (Global_113637 != -1)
		{
			return 0;
		}
		if (func_33(func_54()))
		{
			if (func_167(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_222(iParam3))
		{
			return 0;
		}
		if (func_33(func_54()))
		{
			if (func_221(func_54()) == 4 || func_221(func_54()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_54()))
		{
			if (!func_220(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_219(Global_113648.f_24997.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xA5E11AF0A2B928C1() - Global_113639) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_218())
		{
			return 0;
		}
		if (unk_0x5ABCFD3441B37CA6())
		{
			return 0;
		}
		if (unk_0xA847A0F368810680())
		{
			return 0;
		}
		if (!func_209(4))
		{
			return 0;
		}
		if (!func_146(5))
		{
			return 0;
		}
		if (func_208(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x4D3D95146FD3490D(unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD())))
		{
			if ((unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(377.153f, -717.567f, 10.0536f) || unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(320.9934f, 265.2515f, 82.1221f)) || unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_208(0, 0))
		{
			return 0;
		}
		if (Global_32310)
		{
			return 0;
		}
		if (func_222(30) && !func_208(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_54()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113648.f_2365.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113648.f_2365.f_539.f_2296[iVar4];
				if (func_207(iVar8))
				{
					if (func_185(iVar4))
					{
						if (!func_184(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), Var5) < (210f * 210f))
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

bool func_184(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_186(iVar0);
}

int func_186(int iParam0)
{
	return func_187(iParam0, 1);
}

int func_187(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_207(iParam0))
	{
		return 0;
	}
	func_188(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_188(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_189(func_200(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_189(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_199(iParam0, iParam1))
	{
		iVar0 = func_198(iParam1);
		iVar1 = func_196(iParam0);
		iVar2 = (func_196(iParam0) - func_196(iParam1));
		iVar3 = (func_198(iParam0) - func_198(iParam1));
		iVar4 = (func_195(iParam0) - func_195(iParam1));
		iVar5 = (func_194(iParam0) - func_194(iParam1));
		iVar6 = (func_193(iParam0) - func_193(iParam1));
		iVar7 = (func_192(iParam0) - func_192(iParam1));
	}
	else
	{
		iVar0 = func_198(iParam0);
		iVar1 = func_196(iParam1);
		iVar2 = (func_196(iParam1) - func_196(iParam0));
		iVar3 = (func_198(iParam1) - func_198(iParam0));
		iVar4 = (func_195(iParam1) - func_195(iParam0));
		iVar5 = (func_194(iParam1) - func_194(iParam0));
		iVar6 = (func_193(iParam1) - func_193(iParam0));
		iVar7 = (func_192(iParam1) - func_192(iParam0));
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
		iVar4 = (iVar4 + func_191(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_190(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_190(float fParam0, float fParam1, float fParam2)
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

int func_191(int iParam0, int iParam1)
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

int func_192(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_193(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_194(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_195(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_196(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_197(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_197(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_198(int iParam0)
{
	return iParam0 & 15;
}

int func_199(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_207(iParam1) || !func_207(iParam0))
	{
		return 1;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_193(iParam0);
	iVar1 = func_193(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_192(iParam0);
	iVar1 = func_192(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_200()
{
	var uVar0;
	
	func_206(&uVar0, unk_0x731F95B6458DCF80());
	func_205(&uVar0, unk_0x77BBAAED3E25322C());
	func_204(&uVar0, unk_0x30DFE1FFD2CC7420());
	func_203(&uVar0, unk_0x8C0F17CAC308A14B());
	func_202(&uVar0, unk_0x61117764C67882B7());
	func_201(&uVar0, unk_0x367F557725B53815());
	return uVar0;
}

void func_201(var uParam0, int iParam1)
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

void func_202(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_203(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_198(*uParam0);
	iVar1 = func_196(*uParam0);
	if (iParam1 < 1 || iParam1 > func_191(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_205(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_207(int iParam0)
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
	iVar0 = func_192(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_193(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_194(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_196(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_198(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_195(iParam0);
	if (iVar5 < 1 || iVar5 > func_191(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_208(int iParam0, bool bParam1)
{
	if (BitTest(Global_113648.f_24997.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0)
{
	int iVar0;
	
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				iVar0 = func_54();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_217()) || Global_112695) || Global_32166) || func_216()) || func_77(8, -1)) || func_215()) || func_214()) || func_213()) || func_212()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_217()) || Global_32166) || func_216()) || func_77(8, -1)) || func_213()) || func_215()) || func_214()) || func_212()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_217()) || Global_112695) || Global_32166) || func_216()) || func_77(8, -1)) || func_213()) || func_215()) || func_214()) || func_212()) || Global_113648.f_7690.f_919[iVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_217()) || Global_112695) || Global_32166) || func_216()) || func_77(8, -1)) || func_215()) || func_214()) || func_212()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_217() || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || func_77(8, -1)) || func_212()) || func_211()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_77(8, -1) || func_215()) || func_214()) || func_211()) || func_210())
						{
							return 0;
						}
						if ((unk_0xB53553DC4AAC7D8A() && unk_0x728FB8B438DDCAB6() != 3) && unk_0x19B3485E7C9D734D() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
						{
							if ((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_217()) || Global_32166) || func_216()) || func_77(8, -1)) || func_214()) || func_213()) || func_212()) || Global_113648.f_7690.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || func_217()) || func_214()) || Global_112695) || Global_32166) || func_216()) || Global_44446) || func_77(8, -1)) || func_213()) || func_211()) || func_212()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0)) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1)) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_217()) || Global_112695) || Global_32166) || func_216()) || func_77(8, -1)) || func_213()) || func_211()) || func_215()) || func_214()) || func_212())
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

var func_210()
{
	return Global_100720.f_1;
}

int func_211()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_212()
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_213()
{
	if (Global_78819)
	{
		return 1;
	}
	else if (Global_63356 && !Global_63362)
	{
		return 1;
	}
	return 0;
}

bool func_214()
{
	return Global_100733.f_388 > 0;
}

bool func_215()
{
	return Global_100733.f_387 > 0;
}

var func_216()
{
	return Global_1575060;
}

int func_217()
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_218()
{
	func_75();
	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_219(int iParam0)
{
	return func_199(func_200(), iParam0);
}

int func_220(int iParam0, int iParam1, int iParam2)
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

int func_221(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_113648.f_7690.f_919[iParam0];
}

int func_222(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_224())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113648.f_24997, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113648.f_24997.f_1, iVar0);
	}
	return iVar1;
}

int func_223()
{
	var uVar0;
	
	if (Global_32315)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0xFBD273FDBCF0C5BD(uVar0, 0))
			{
				if (!unk_0x66599E73DBA5A850(unk_0xA66E176E5772E965(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224()
{
	var uVar0;
	
	if (Global_152523 == 2)
	{
		return 1;
	}
	else if (Global_152523 == 3)
	{
		return 0;
	}
	if (unk_0x7FFBE14C34D75E19())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (unk_0x001B3EAD68D731CE())
			{
				unk_0xDD7756E2742E0F6D(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xECDAB41968FF21A8(&uVar0, 2);
				unk_0xECDAB41968FF21A8(&uVar0, 4);
				unk_0xECDAB41968FF21A8(&uVar0, 6);
				unk_0xECDAB41968FF21A8(&Global_25, 2);
				unk_0xECDAB41968FF21A8(&Global_25, 4);
				unk_0xECDAB41968FF21A8(&Global_25, 6);
				unk_0x3CC35ACFFC9C730E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x7D33DF1E1089E1D1())
				{
					iVar0 = unk_0x516080EA609481E1(866);
					unk_0xECDAB41968FF21A8(&iVar0, 0);
					unk_0x705949B096008718(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x7D33DF1E1089E1D1())
	{
		if (BitTest(unk_0x516080EA609481E1(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_225(int iParam0, int iParam1)
{
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_226()
{
	int iVar0;
	
	if (iLocal_150 && !iLocal_149)
	{
		func_3(0);
		if (Global_32406)
		{
			unk_0x5C37F509B0398DFA("AC_STOP");
		}
		func_2();
		unk_0x8E09E8C52602EBB2(Local_63 - Vector(10f, 10f, 10f), Local_63 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x0133FF6E23A1DCA4(255, uLocal_152, joaat("player"));
		if (bLocal_59)
		{
			unk_0xE0A291F406691F03(iLocal_96);
			unk_0xE0A291F406691F03(iLocal_97);
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_57))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_57))
			{
				unk_0x598D91BBD045C1F3(iLocal_57, 317, 1);
				unk_0xC5B2830898581862(iLocal_57, 0);
			}
			unk_0x1EEF71E3CDD868D3(&iLocal_57);
		}
		if (unk_0xCE4AAA035282336C(uLocal_105))
		{
			unk_0x45533C09A6C9B409(&uLocal_105);
		}
		if (unk_0xCE4AAA035282336C(uLocal_102[0]))
		{
			unk_0x45533C09A6C9B409(&(uLocal_102[0]));
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_58))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_58))
			{
				unk_0x598D91BBD045C1F3(iLocal_58, 317, 1);
				if (!unk_0x3C3D6D026CF7F51B(iLocal_58, 0))
				{
					unk_0x2578E1A719BF1CA4(iLocal_58);
				}
				unk_0xDC21E058EE11964C(iLocal_58);
				unk_0xC5B2830898581862(iLocal_58, 0);
				unk_0xD14067404D35AAE7(iLocal_58, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (unk_0x7DE17ACDD8BA2642(iLocal_121[iVar0]))
			{
				unk_0xA81AA70A4D25E140(iLocal_121[iVar0], 1, 1);
			}
			iVar0++;
		}
		unk_0x90DA349CD13C7839(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		unk_0x1090804F1F0FF051();
	}
	func_227(-1);
	unk_0x675D9C12C73D3DE7();
}

void func_227(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_179())
	{
		func_231(iParam0);
		unk_0x97DBA2AA6C70AFC7(0, 0);
		Global_113639 = unk_0xA5E11AF0A2B928C1();
		func_230(30000);
		StringCopy(&cVar0, func_229(Global_113637, 1), 64);
		if (func_39(Global_113637) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113636, 64);
		}
		unk_0x36DDD3AC77856423(&cVar0, Global_113634, (unk_0xA5E11AF0A2B928C1() - Global_113635), 0);
	}
	else if (BitTest(Global_113644, 0) && Global_113648.f_24997.f_2 < 3)
	{
		unk_0x061B1200C95204CB(&Global_113644, false);
	}
	func_228(&Global_32223);
	Global_113638 = 0;
	func_182(-1);
}

void func_228(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43219)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = 0;
	Global_63360 = 0;
}

char* func_229(int iParam0, bool bParam1)
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

void func_230(int iParam0)
{
	Global_43808 = (unk_0xA5E11AF0A2B928C1() + iParam0);
}

void func_231(int iParam0)
{
	func_232(iParam0, 0, func_237(iParam0));
}

void func_232(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_200();
	func_235(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_234(iParam0, &uVar0);
	Var1 = { func_233(&uVar0) };
}

struct<16> func_233(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_194(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_193(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_192(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_195(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_198(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_196(*uParam0), 64);
	return Var0;
}

void func_234(int iParam0, var uParam1)
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
}

void func_235(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_196(*uParam0);
	iVar1 = func_198(*uParam0);
	iVar2 = func_195(*uParam0);
	iVar3 = func_194(*uParam0);
	iVar4 = func_193(*uParam0);
	iVar5 = func_192(*uParam0);
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
	iVar6 = func_191(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_191(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_236(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_206(uParam0, iParam1);
	func_205(uParam0, iParam2);
	func_204(uParam0, iParam3);
	func_202(uParam0, iParam5);
	func_203(uParam0, iParam4);
	func_201(uParam0, iParam6);
}

int func_237(int iParam0)
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

