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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	struct<6> Local_65 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 32;
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
	var uLocal_108 = 32;
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
	int iLocal_144 = 0;
	int iLocal_145[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_203 = 16;
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
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	int iLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_64 = 600000;
	iLocal_368 = -1;
	func_316(ScriptParam_0);
	while (true)
	{
		func_315();
		if (func_308() || !func_307(unk_0x93E99A2DBCBA9CFA(), 0, 1))
		{
			func_305();
		}
		switch (func_304(unk_0xD378D2332270959A()))
		{
			case 0:
				if (func_303() == 2)
				{
					iLocal_145[unk_0xD378D2332270959A()] = 2;
				}
				else if (func_303() == 6)
				{
					iLocal_145[unk_0xD378D2332270959A()] = 5;
				}
				break;
			
			case 2:
				if (func_303() == 2)
				{
					if (!func_302())
					{
						if (func_34(&uLocal_178))
						{
						}
					}
					else
					{
						if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 4))
						{
							func_33(1);
							func_32(0);
							func_25();
						}
						func_24(8, 0);
					}
				}
				else if (func_303() == 6)
				{
					iLocal_145[unk_0xD378D2332270959A()] = 5;
				}
				break;
			
			case 5:
				func_23(&(Local_65.f_3));
				if (func_22(&(Local_65.f_3)))
				{
					iLocal_145[unk_0xD378D2332270959A()] = 6;
				}
				break;
			
			case 3:
				iLocal_145[unk_0xD378D2332270959A()] = 6;
			
			case 6:
				func_305();
				break;
		}
		if (unk_0xE85391CF212DE622())
		{
			switch (func_303())
			{
				case 0:
					Local_65.f_0 = 2;
					break;
				
				case 2:
					func_21();
					func_2();
					if (func_1())
					{
						Local_65.f_0 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (BitTest(Local_65.f_1, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar2 = false;
	if (unk_0xE85391CF212DE622())
	{
		switch (Local_65.f_5.f_2)
		{
			case 0:
				if (!BitTest(Local_65.f_5.f_3, 1))
				{
					bVar0 = false;
					while (bVar0 <= 31)
					{
						Local_65.f_5.f_5[bVar0] = -1;
						Local_65.f_5.f_38[bVar0] = -1;
						bVar0++;
					}
					unk_0xECDAB41968FF21A8(&(Local_65.f_5.f_3), true);
				}
				if (Global_2793044.f_1818)
				{
					unk_0xECDAB41968FF21A8(&(Local_65.f_5.f_3), false);
					Global_2793044.f_1818 = 0;
				}
				if (BitTest(Local_65.f_5.f_3, 1))
				{
					if (BitTest(Local_65.f_5.f_3, 0))
					{
						if (!func_20(&(Local_65.f_5)) || func_19(&(Local_65.f_5), 5000, 0))
						{
							if (Local_65.f_5.f_4 == 0)
							{
								Local_65.f_5.f_72 = 0;
								unk_0x061B1200C95204CB(&(Local_65.f_5.f_3), 2);
								unk_0x061B1200C95204CB(&(Local_65.f_5.f_3), 3);
							}
							bVar0 = Local_65.f_5.f_4;
							bVar1 = bVar0;
							if (unk_0xE6DEE82DB0922DF0(bVar1))
							{
								if (BitTest(Global_1853910[bVar0 /*862*/].f_143, 0))
								{
									unk_0xECDAB41968FF21A8(&(Local_65.f_5.f_73), bVar1);
									Local_65.f_5.f_72++;
									if (BitTest(Global_1853910[bVar0 /*862*/].f_143, 6))
									{
										Local_65.f_5.f_5[bVar0] = -1;
									}
								}
							}
							Local_65.f_5.f_4++;
							if (Local_65.f_5.f_4 == 32)
							{
								func_18(&(Local_65.f_5));
								func_17(&(Local_65.f_5), 0, 0);
								if (Local_65.f_5.f_72 >= 1)
								{
									Local_65.f_5.f_2 = 1;
									unk_0x061B1200C95204CB(&(Local_65.f_5.f_3), 2);
								}
								Local_65.f_5.f_4 = 0;
							}
						}
					}
				}
				break;
			
			case 1:
				if (Local_65.f_5.f_4 == 0)
				{
					unk_0x061B1200C95204CB(&(Local_65.f_5.f_3), 2);
				}
				bVar0 = Local_65.f_5.f_4;
				if (BitTest(Local_65.f_5.f_73, bVar0))
				{
					if (func_307(bVar0, 1, 1))
					{
						if (!BitTest(Global_1853910[bVar0 /*862*/].f_143, 8))
						{
							if (BitTest(Global_1853910[bVar0 /*862*/].f_143, 0))
							{
								if (Local_65.f_5.f_5[bVar0] == -1)
								{
									if (BitTest(Global_1853910[bVar0 /*862*/].f_143, 6))
									{
										Local_65.f_5.f_5[bVar0] = -1;
									}
									bVar2 = func_16(bVar0, &(Local_65.f_5.f_73));
									if (bVar2 > -1)
									{
										Local_65.f_5.f_5[bVar0] = bVar2;
										Local_65.f_5.f_5[bVar2] = bVar0;
										unk_0xECDAB41968FF21A8(&(Local_65.f_5.f_3), 2);
									}
								}
								else
								{
									unk_0xECDAB41968FF21A8(&(Local_65.f_5.f_3), 2);
								}
							}
						}
					}
				}
				Local_65.f_5.f_4++;
				if (Local_65.f_5.f_4 == 32)
				{
					if (BitTest(Local_65.f_5.f_3, 2))
					{
					}
					Local_65.f_5.f_4 = 0;
					Local_65.f_5.f_2 = 2;
					unk_0x061B1200C95204CB(&(Local_65.f_5.f_3), 3);
					func_15();
				}
				break;
			
			case 2:
				if (Local_65.f_5.f_4 == 0)
				{
					unk_0x061B1200C95204CB(&(Local_65.f_5.f_3), 3);
				}
				bVar0 = Local_65.f_5.f_4;
				if (BitTest(Local_65.f_5.f_73, bVar0))
				{
					if (BitTest(Global_1853910[bVar0 /*862*/].f_143, 0))
					{
						if (func_307(bVar0, 1, 1))
						{
							if (Local_65.f_5.f_38[bVar0] == -1)
							{
								iVar3 = Local_65.f_5.f_5[bVar0];
								if (iVar3 > -1)
								{
									if (BitTest(Global_1853910[iVar3 /*862*/].f_143, 0))
									{
										if (Local_65.f_5.f_38[bVar0] == -1)
										{
											bVar2 = func_9(bVar0, &(Local_65.f_5.f_71));
											if (bVar2 > -1)
											{
												Local_65.f_5.f_38[bVar0] = bVar2;
												Local_65.f_5.f_38[iVar3] = bVar2;
												unk_0xECDAB41968FF21A8(&(Local_65.f_5.f_3), 3);
												func_8(bVar2);
											}
										}
										else if (Local_65.f_5.f_38[bVar0] == Local_65.f_5.f_38[iVar3] || Local_65.f_5.f_38[iVar3] == -1)
										{
											unk_0xECDAB41968FF21A8(&(Local_65.f_5.f_3), 3);
										}
										else if (!BitTest(Global_1853910[bVar0 /*862*/].f_143, 3))
										{
											Local_65.f_5.f_38[bVar0] = Local_65.f_5.f_38[iVar3];
										}
										else if (!BitTest(Global_1853910[iVar3 /*862*/].f_143, 3))
										{
											Local_65.f_5.f_38[iVar3] = Local_65.f_5.f_38[bVar0];
										}
									}
									else
									{
										Local_65.f_5.f_5[bVar0] = -1;
										Local_65.f_5.f_5[iVar3] = -1;
									}
								}
								else
								{
									bVar2 = func_9(bVar0, &(Local_65.f_5.f_71));
									if (bVar2 > -1)
									{
										unk_0xECDAB41968FF21A8(&(Local_65.f_5.f_3), 3);
										Local_65.f_5.f_38[bVar0] = bVar2;
										func_8(bVar2);
									}
								}
							}
							else
							{
								unk_0xECDAB41968FF21A8(&(Local_65.f_5.f_3), 3);
							}
						}
					}
				}
				Local_65.f_5.f_4++;
				if (Local_65.f_5.f_4 == 32)
				{
					if (BitTest(Local_65.f_5.f_3, 3))
					{
						func_3();
						unk_0x061B1200C95204CB(&(Local_65.f_5.f_3), false);
						Local_65.f_5.f_2 = 0;
					}
					else
					{
						unk_0x061B1200C95204CB(&(Local_65.f_5.f_3), false);
						Local_65.f_5.f_2 = 0;
					}
					Local_65.f_5.f_4 = 0;
				}
				break;
			}
	}
}

void func_3()
{
	struct<2> Var0;
	
	Var0.f_0 = 854806881;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	unk_0x46F55A5B9F053761(1, &Var0, 2, func_4(1, 1));
}

int func_4(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = unk_0xADCF72047FEB806E(bVar1);
		if (func_307(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x93E99A2DBCBA9CFA() || iParam0)
			{
				if (bParam1)
				{
					unk_0xECDAB41968FF21A8(&uVar0, bVar1);
				}
				else if (!func_5(iVar2, 0))
				{
					unk_0xECDAB41968FF21A8(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_5(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_6(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			bVar0 = unk_0x4292F1DE8BA2D22E(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_6(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_7();
	}
	if (Global_1575040[iVar1] == 1)
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

int func_7()
{
	return Global_1574918;
}

void func_8(bool bParam0)
{
	unk_0xECDAB41968FF21A8(&(Local_65.f_2), bParam0);
}

bool func_9(bool bParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	int iVar14;
	
	bVar2 = -1;
	iVar3 = Local_65.f_5.f_5[bParam0];
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = (200f * 200f);
	iVar10 = bParam0;
	uVar11 = unk_0xF2CFBB1105511E1A(iVar10);
	if (iVar3 > -1)
	{
		if (iVar3 != bParam0)
		{
			if (Local_65.f_5.f_38[iVar3] == -1)
			{
				iVar12 = iVar3;
				uVar13 = unk_0xF2CFBB1105511E1A(iVar12);
				bVar1 = false;
				while (bVar1 <= 19)
				{
					if (!bVar0)
					{
						if (BitTest(*uParam1, bVar1))
						{
							if (!func_13(bVar1))
							{
								unk_0x061B1200C95204CB(uParam1, bVar1);
							}
						}
						if (func_12(bVar1))
						{
							iVar14 = func_11(bVar1);
							if (iVar14 != -1)
							{
								if (Global_2657418.f_87[iVar14] == 0)
								{
									if (!BitTest(*uParam1, bVar1))
									{
										if (!unk_0x66599E73DBA5A850(uVar11))
										{
											if (!unk_0x66599E73DBA5A850(uVar13))
											{
												Var7 = { func_10(bVar1) };
												fVar4 = unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(uVar11, 1), Var7);
												if (fVar4 > fVar6)
												{
													fVar5 = unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(uVar13, 1), Var7);
													if (fVar5 > fVar6)
													{
														bVar2 = bVar1;
														bVar0 = true;
														unk_0xECDAB41968FF21A8(uParam1, bVar1);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					bVar1++;
				}
			}
			else
			{
				bVar2 = Local_65.f_5.f_38[iVar3];
			}
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= 19)
		{
			if (!bVar0)
			{
				if (func_12(bVar1))
				{
					iVar14 = func_11(bVar1);
					if (iVar14 != -1)
					{
						if (Global_2657418.f_87[iVar14] == 0)
						{
							if (!BitTest(*uParam1, bVar1))
							{
								if (!unk_0x66599E73DBA5A850(uVar11))
								{
									Var7 = { func_10(bVar1) };
									fVar4 = unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(uVar11, 1), Var7);
									if (fVar4 > fVar6)
									{
										bVar2 = bVar1;
										bVar0 = true;
										unk_0xECDAB41968FF21A8(uParam1, bVar1);
									}
								}
							}
						}
					}
				}
			}
			bVar1++;
		}
	}
	return bVar2;
}

Vector3 func_10(bool bParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (bParam0)
	{
		case 0:
			Var0 = { -52.27f, -1733.58f, 28.23f };
			break;
		
		case 1:
			Var0 = { 15.4693f, -1354.067f, 28.315f };
			break;
		
		case 2:
			Var0 = { -1238.39f, -904.58f, 13.27f };
			break;
		
		case 3:
			Var0 = { -724.14f, -912.37f, 20.34f };
			break;
		
		case 4:
			Var0 = { 1145.433f, -972.5638f, 45.6656f };
			break;
		
		case 5:
			Var0 = { -1502.037f, -380.4863f, 39.8563f };
			break;
		
		case 6:
			Var0 = { 364.9397f, 320.9199f, 102.6601f };
			break;
		
		case 7:
			Var0 = { 1162.664f, -338.0286f, 67.4397f };
			break;
		
		case 8:
			Var0 = { 2567.102f, 384.5044f, 107.4621f };
			break;
		
		case 9:
			Var0 = { -2970.054f, 401.0349f, 14.0942f };
			break;
		
		case 10:
			Var0 = { -3042.513f, 599.3762f, 6.5342f };
			break;
		
		case 11:
			Var0 = { -3252.98f, 992.51f, 13.5f };
			break;
		
		case 12:
			Var0 = { -1814.226f, 778.6277f, 136.175f };
			break;
		
		case 13:
			Var0 = { 531.4801f, 2675.505f, 41.4485f };
			break;
		
		case 14:
			Var0 = { 1183.174f, 2693.942f, 36.9294f };
			break;
		
		case 15:
			Var0 = { 1382.555f, 3598.162f, 33.8769f };
			break;
		
		case 16:
			Var0 = { 1959.975f, 3731.025f, 31.3247f };
			break;
		
		case 17:
			Var0 = { 2681.91f, 3292.97f, 55.49f };
			break;
		
		case 18:
			Var0 = { 1687.99f, 4918.174f, 41.0781f };
			break;
		
		case 19:
			Var0 = { 1687.99f, 4918.174f, 41.0781f };
			break;
	}
	return Var0;
}

int func_11(bool bParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (bParam0)
	{
		case 0:
			iVar0 = 17;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 12;
			break;
		
		case 3:
			iVar0 = 16;
			break;
		
		case 4:
			iVar0 = 13;
			break;
		
		case 5:
			iVar0 = 14;
			break;
		
		case 6:
			iVar0 = 9;
			break;
		
		case 7:
			iVar0 = 18;
			break;
		
		case 8:
			iVar0 = 4;
			break;
		
		case 9:
			iVar0 = 11;
			break;
		
		case 10:
			iVar0 = 1;
			break;
		
		case 11:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 19;
			break;
		
		case 13:
			iVar0 = 3;
			break;
		
		case 14:
			iVar0 = 10;
			break;
		
		case 15:
			iVar0 = 0;
			break;
		
		case 16:
			iVar0 = 7;
			break;
		
		case 17:
			iVar0 = 5;
			break;
		
		case 18:
			iVar0 = 15;
			break;
		
		case 19:
			iVar0 = 6;
			break;
	}
	return iVar0;
}

int func_12(bool bParam0)
{
	bool bVar0;
	
	bVar0 = func_11(bParam0);
	if (bVar0 != -1)
	{
		if (BitTest(Global_2657418.f_64, bVar0))
		{
			if (!BitTest(Global_2657418.f_62, bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_13(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_14(bParam0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		bVar2 = iVar1;
		if (Local_65.f_5.f_38[iVar1] == bParam0)
		{
			if (func_307(bVar2, 0, 1))
			{
				if (!BitTest(Global_1853910[iVar1 /*862*/].f_143, 4))
				{
					if (BitTest(Global_1853910[iVar1 /*862*/].f_143, 3))
					{
						iVar0 = 1;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_14(var uParam0)
{
	return BitTest(Local_65.f_2, uParam0);
}

void func_15()
{
	Local_65.f_2 = 0;
}

bool func_16(bool bParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = -1;
	bVar0 = false;
	while (bVar0 <= 31)
	{
		if (bVar1 == -1)
		{
			if (bVar0 != bParam0)
			{
				if (BitTest(*uParam1, bVar0))
				{
					if (BitTest(Global_1853910[bVar0 /*862*/].f_143, 0))
					{
						if (!BitTest(Global_1853910[bVar0 /*862*/].f_143, 3))
						{
							if (!BitTest(Global_1853910[bVar0 /*862*/].f_143, 2))
							{
								if (!BitTest(Global_1853910[bVar0 /*862*/].f_143, 8))
								{
									if (Local_65.f_5.f_5[bVar0] == -1)
									{
										bVar1 = bVar0;
									}
								}
							}
						}
					}
				}
			}
		}
		bVar0++;
	}
	return bVar1;
}

void func_17(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA26A9A07F761D8F8() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0DB7F8294D73598B();
			}
			else
			{
				*uParam0 = unk_0xB78F034955403399();
			}
		}
		else
		{
			*uParam0 = unk_0xA5E11AF0A2B928C1();
		}
		uParam0->f_1 = 1;
	}
}

void func_18(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_17(uParam0, bParam2, 0);
	if (unk_0xA26A9A07F761D8F8() && !bParam2)
	{
		if (unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0xA5E11AF0A2B928C1(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_20(var uParam0)
{
	return uParam0->f_1;
}

void func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE85391CF212DE622())
	{
		if (iLocal_144 == 0)
		{
			unk_0x061B1200C95204CB(&uLocal_202, false);
			unk_0xECDAB41968FF21A8(&uLocal_202, true);
		}
		iVar1 = iLocal_144;
		iVar2 = Local_65.f_5.f_5[iLocal_144];
		if (func_307(iVar1, 0, 1))
		{
			if (!BitTest(Global_1853910[iLocal_144 /*862*/].f_143, 4))
			{
				unk_0x061B1200C95204CB(&uLocal_202, true);
			}
		}
		if (BitTest(Global_1853910[iLocal_144 /*862*/].f_143, 0))
		{
			if (func_307(iVar1, 0, 1))
			{
				if (iVar2 > -1)
				{
					iVar0 = iVar2;
					if (!func_307(iVar0, 0, 1))
					{
						Local_65.f_5.f_5[iLocal_144] = -1;
					}
				}
			}
			else
			{
				if (Local_65.f_5.f_5[iLocal_144] != -1)
				{
					Local_65.f_5.f_5[iLocal_144] = -1;
				}
				if (Local_65.f_5.f_38[iLocal_144] != -1)
				{
					Local_65.f_5.f_38[iLocal_144] = -1;
				}
			}
		}
		else if (func_307(iVar1, 0, 1))
		{
			if (BitTest(Global_1853910[iLocal_144 /*862*/].f_143, 12))
			{
				if (Local_65.f_5.f_5[iLocal_144] != -1)
				{
					Local_65.f_5.f_5[iLocal_144] = -1;
				}
				if (Local_65.f_5.f_38[iLocal_144] != -1)
				{
					Local_65.f_5.f_38[iLocal_144] = -1;
				}
				if (iVar2 > -1)
				{
					iVar0 = iVar2;
					if (func_307(iVar0, 0, 1))
					{
						Local_65.f_5.f_5[iVar2] = -1;
					}
				}
			}
		}
		iLocal_144++;
		if (iLocal_144 == 32)
		{
			if (BitTest(uLocal_202, 1))
			{
				unk_0xECDAB41968FF21A8(&(Local_65.f_1), false);
			}
			unk_0xECDAB41968FF21A8(&uLocal_202, false);
			iLocal_144 = 0;
		}
	}
}

int func_22(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_23(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xE85391CF212DE622())
		{
			func_17(uParam0, 0, 0);
		}
	}
}

void func_24(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_218, bParam0))
		{
			unk_0xECDAB41968FF21A8(&(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_218, bParam0))
	{
		unk_0x061B1200C95204CB(&(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_218), bParam0);
	}
}

void func_25()
{
	if (!func_31())
	{
		return;
	}
	if (!unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A()) == Global_1574757.f_9)
	{
		return;
	}
	func_26();
}

void func_26()
{
	func_28();
	func_27(0);
}

void func_27(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xA26A9A07F761D8F8();
	Global_1574757 = 20;
	StringCopy(&(Global_1574757.f_1), "", 32);
	Global_1574757.f_9 = 0;
	if (bVar0)
	{
		Global_1574757.f_10 = unk_0x0DB7F8294D73598B();
		Global_1574757.f_11 = unk_0x0DB7F8294D73598B();
	}
	StringCopy(&(Global_1574757.f_12), "", 16);
	StringCopy(&(Global_1574757.f_16), "", 64);
	StringCopy(&(Global_1574757.f_32), "", 64);
	Global_1574757.f_52 = 0;
	Global_1574757.f_53 = 0;
	Global_1574757.f_54 = 0;
	Global_1574757.f_55 = -1;
	Global_1574757.f_56 = 0;
	Global_1574757.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_28()
{
	if (!func_30())
	{
	}
	if (func_31())
	{
		unk_0x7A9058087D285F2B(&(Global_1574757.f_12));
		func_29();
		unk_0x83D7210D9382146A();
	}
}

void func_29()
{
	switch (Global_1574757)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x64C50E40AA09A6B5(Global_1574757.f_52);
			return;
		
		case 2:
			unk_0x64C50E40AA09A6B5(Global_1574757.f_52);
			unk_0x64C50E40AA09A6B5(Global_1574757.f_53);
			return;
		
		case 3:
			unk_0x48849374B34BB7B9(&(Global_1574757.f_16));
			return;
		
		case 4:
			unk_0x48849374B34BB7B9(&(Global_1574757.f_16));
			unk_0x48849374B34BB7B9(&(Global_1574757.f_32));
			return;
		
		case 5:
			unk_0x76B34CBB6F5FA1BB(&(Global_1574757.f_16));
			return;
		
		case 6:
			unk_0x35451336B8B420D6(Global_1574757.f_56);
			unk_0x76B34CBB6F5FA1BB(&(Global_1574757.f_16));
			return;
		
		case 7:
			unk_0x48849374B34BB7B9(&(Global_1574757.f_16));
			return;
		
		case 8:
			unk_0x35451336B8B420D6(Global_1574757.f_56);
			unk_0x48849374B34BB7B9(&(Global_1574757.f_16));
			return;
		
		case 9:
			unk_0x700F38A62DF4BE36(&(Global_1574757.f_16));
			return;
		
		case 10:
			unk_0x76B34CBB6F5FA1BB(&(Global_1574757.f_16));
			unk_0x76B34CBB6F5FA1BB(&(Global_1574757.f_32));
			return;
		
		case 12:
			unk_0x76B34CBB6F5FA1BB(&(Global_1574757.f_16));
			unk_0x48849374B34BB7B9(&(Global_1574757.f_32));
			return;
		
		case 13:
			unk_0x35451336B8B420D6(Global_1574757.f_56);
			unk_0x48849374B34BB7B9(&(Global_1574757.f_16));
			unk_0x35451336B8B420D6(Global_1574757.f_57);
			unk_0x48849374B34BB7B9(&(Global_1574757.f_32));
			return;
		
		case 11:
			unk_0x700F38A62DF4BE36(&(Global_1574757.f_16));
			return;
		
		case 14:
			unk_0x35451336B8B420D6(Global_1574757.f_56);
			unk_0x76B34CBB6F5FA1BB(&(Global_1574757.f_16));
			unk_0x35451336B8B420D6(Global_1574757.f_56);
			unk_0x48849374B34BB7B9(&(Global_1574757.f_32));
			return;
		
		case 15:
			unk_0x35451336B8B420D6(Global_1574757.f_56);
			unk_0x76B34CBB6F5FA1BB(&(Global_1574757.f_16));
			unk_0x35451336B8B420D6(Global_1574757.f_57);
			unk_0x48849374B34BB7B9(&(Global_1574757.f_32));
			return;
		
		case 17:
			unk_0x76B34CBB6F5FA1BB(&(Global_1574757.f_16));
			unk_0x76B34CBB6F5FA1BB(&(Global_1574757.f_32));
			unk_0x35451336B8B420D6(Global_1574757.f_56);
			unk_0x48849374B34BB7B9(&(Global_1574757.f_48));
			return;
		
		case 16:
			unk_0x35451336B8B420D6(Global_1574757.f_56);
			unk_0x76B34CBB6F5FA1BB(&(Global_1574757.f_16));
			return;
		
		case 19:
			unk_0x35451336B8B420D6(Global_1574757.f_56);
			unk_0x48849374B34BB7B9(&(Global_1574757.f_16));
			return;
		
		case 18:
			unk_0x76B34CBB6F5FA1BB(&(Global_1574757.f_16));
			unk_0x35451336B8B420D6(Global_1574757.f_56);
			unk_0x48849374B34BB7B9(&(Global_1574757.f_48));
			unk_0x76B34CBB6F5FA1BB(&(Global_1574757.f_32));
			return;
		
		default:
	}
}

int func_30()
{
	if (!func_31())
	{
		return 0;
	}
	unk_0xEB16059D3EDC926B(&(Global_1574757.f_12));
	func_29();
	return unk_0xC44AC9C43C91326C();
}

int func_31()
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

void func_32(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 0))
		{
			unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), false);
		}
	}
	else if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 0))
	{
		unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), false);
	}
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 4))
		{
			unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 4);
		}
	}
	else if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 4))
	{
		unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 4);
	}
}

int func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<13> Var5;
	var uVar18;
	
	if (Global_2793044.f_1818)
	{
		if (!unk_0xE85391CF212DE622())
		{
			Global_2793044.f_1818 = 0;
		}
	}
	if (*uParam0 > 0)
	{
		unk_0x6352F03F31CA0713(unk_0x93E99A2DBCBA9CFA());
		if (!BitTest(uParam0->f_1, 2))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if ((func_299(unk_0x93E99A2DBCBA9CFA(), 1, 0) || func_298()) || func_297() != 0)
				{
					func_295(uParam0);
					unk_0xECDAB41968FF21A8(&(uParam0->f_1), 2);
					unk_0x061B1200C95204CB(&(uParam0->f_1), 12);
					unk_0x061B1200C95204CB(&uLocal_202, 11);
				}
			}
		}
		else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
			{
				if (!func_299(unk_0x93E99A2DBCBA9CFA(), 1, 0))
				{
					if (!func_298())
					{
						if (func_297() == 0)
						{
							unk_0x061B1200C95204CB(&(uParam0->f_1), 2);
							unk_0x061B1200C95204CB(&(uParam0->f_1), true);
							unk_0x061B1200C95204CB(&(uParam0->f_1), false);
							unk_0x061B1200C95204CB(&(uParam0->f_1), 3);
							unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 2);
							if (*uParam0 > 1)
							{
								*uParam0 = 1;
							}
						}
					}
				}
			}
		}
		iVar3 = unk_0x93E99A2DBCBA9CFA();
		if (!BitTest(Global_1853910[iVar3 /*862*/].f_143, 5))
		{
			if (func_299(unk_0x93E99A2DBCBA9CFA(), 1, 0) || func_298())
			{
				unk_0xECDAB41968FF21A8(&(Global_1853910[iVar3 /*862*/].f_143), 5);
				*uParam0 = 0;
				func_32(0);
				func_294(0);
				func_24(8, 0);
				unk_0x061B1200C95204CB(&(uParam0->f_1), false);
				func_295(uParam0);
			}
		}
		if (*uParam0 < 3)
		{
			if (Local_65.f_5.f_5[unk_0x93E99A2DBCBA9CFA()] == -1)
			{
				if (func_19(&(uParam0->f_6), 15000, 0))
				{
					func_293();
					func_18(&(uParam0->f_6));
					func_17(&(uParam0->f_6), 0, 0);
				}
			}
		}
		if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 9))
		{
			if (func_19(&(uParam0->f_6), 5000, 0))
			{
				func_293();
				func_18(&(uParam0->f_6));
				func_17(&(uParam0->f_6), 0, 0);
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			iVar3 = unk_0x93E99A2DBCBA9CFA();
			if (!BitTest(Global_1853910[iVar3 /*862*/].f_143, 13))
			{
				if (BitTest(Global_2793044.f_1819, 6) || BitTest(Global_2793044.f_1821, 31))
				{
					if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 0))
					{
						if (!func_292())
						{
							if (!func_299(unk_0x93E99A2DBCBA9CFA(), 1, 0))
							{
								if (!func_298())
								{
									if (func_297() == 0)
									{
										if (func_169())
										{
											if (func_151(uParam0))
											{
												Global_1926512.f_1 = -1;
												func_32(1);
												func_293();
												if (BitTest(Global_1853910[iVar3 /*862*/].f_143, 5))
												{
													unk_0x061B1200C95204CB(&(Global_1853910[iVar3 /*862*/].f_143), 5);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (BitTest(Global_1853910[iVar3 /*862*/].f_143, 0))
				{
					if (!BitTest(uParam0->f_1, 13))
					{
						if (!unk_0xF0E4B64AC0B5660E())
						{
							func_150("FM_IHELP_ACPI", -1);
							unk_0xECDAB41968FF21A8(&(uParam0->f_1), 13);
						}
					}
					if (BitTest(Global_1926512, 1))
					{
						iVar3 = unk_0x93E99A2DBCBA9CFA();
						iVar0 = Local_65.f_5.f_5[iVar3];
						iVar1 = Local_65.f_5.f_38[iVar3];
						if (iVar1 > -1)
						{
							iVar2 = func_11(iVar1);
							if (iVar2 == 0)
							{
							}
							func_149(iVar2, 1, func_4(1, 1));
							func_18(&(uParam0->f_6));
							func_17(&(uParam0->f_6), 0, 0);
							func_294(1);
							func_24(8, 1);
							uVar18 = func_148(1191, -1, 0);
							unk_0x061B1200C95204CB(&uVar18, true);
							unk_0x061B1200C95204CB(&uVar18, 2);
							unk_0x061B1200C95204CB(&uVar18, 3);
							unk_0x061B1200C95204CB(&uVar18, 5);
							unk_0x061B1200C95204CB(&uVar18, 6);
							*uParam0 = 1;
							func_147(1191, uVar18, -1, 1, 0);
							iLocal_368 = func_148(1168, -1, 0);
						}
						else if (!func_20(&(uParam0->f_6)) || func_19(&(uParam0->f_6), 5000, 0))
						{
							func_293();
							func_18(&(uParam0->f_6));
							func_17(&(uParam0->f_6), 0, 0);
						}
					}
					else if (!func_20(&(uParam0->f_6)) || func_19(&(uParam0->f_6), 30000, 0))
					{
						func_293();
						func_18(&(uParam0->f_6));
						func_17(&(uParam0->f_6), 0, 0);
					}
				}
			}
			else
			{
				if (BitTest(Global_1853910[iVar3 /*862*/].f_143, 0))
				{
					unk_0x061B1200C95204CB(&(Global_1853910[iVar3 /*862*/].f_143), false);
					unk_0x061B1200C95204CB(&(uParam0->f_1), false);
					unk_0x061B1200C95204CB(&(Global_1853910[iVar3 /*862*/].f_143), 2);
					unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 16);
					func_32(0);
				}
				if (BitTest(Global_1853910[iVar3 /*862*/].f_143, 12))
				{
					if (Local_65.f_5.f_38[iVar3] == -1 && Local_65.f_5.f_5[iVar3] == -1)
					{
						unk_0x061B1200C95204CB(&(Global_1853910[iVar3 /*862*/].f_143), 12);
					}
				}
				else if (!func_20(&(uParam0->f_12)))
				{
					func_17(&(uParam0->f_12), 0, 0);
				}
				else if (func_19(&(uParam0->f_12), 30000, 0))
				{
					unk_0x061B1200C95204CB(&(Global_1853910[iVar3 /*862*/].f_143), 13);
					func_18(&(uParam0->f_6));
				}
			}
			break;
		
		case 1:
			iVar3 = unk_0x93E99A2DBCBA9CFA();
			iVar1 = Local_65.f_5.f_38[iVar3];
			iVar0 = Local_65.f_5.f_5[iVar3];
			func_146();
			if (!BitTest(uParam0->f_1, 0))
			{
				if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 16))
				{
					unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 16);
				}
				if (BitTest(uParam0->f_1, 14))
				{
					unk_0x061B1200C95204CB(&(uParam0->f_1), 14);
				}
				if (!unk_0xCE4AAA035282336C(uParam0->f_4))
				{
					if (iVar1 >= 0)
					{
						uParam0->f_4 = unk_0x7F0C74F83813841D(func_10(iVar1));
						unk_0xBD91E7D4B770F97E(uParam0->f_4, 1);
						unk_0xC2E0B90856D55E49(uParam0->f_4, 9);
					}
				}
				if (iVar0 > -1 && func_145(iVar0, 1))
				{
					iVar4 = iVar0;
					if (unk_0xE6DEE82DB0922DF0(iVar4))
					{
						if (func_307(bVar4, 0, 1))
						{
							if (!BitTest(Global_1853910[iVar0 /*862*/].f_143, 4) && !BitTest(Global_1853910[iVar0 /*862*/].f_143, 5))
							{
								func_144("FM_HTUT_GO", 0);
								unk_0xECDAB41968FF21A8(&(uParam0->f_1), false);
							}
						}
					}
				}
				if (!BitTest(uParam0->f_1, 0))
				{
					func_144("FM_HTUT_GO", 0);
					unk_0xECDAB41968FF21A8(&(uParam0->f_1), true);
				}
				else
				{
					func_18(&(uParam0->f_10));
					func_17(&(uParam0->f_10), 0, 0);
				}
				unk_0xECDAB41968FF21A8(&(uParam0->f_1), false);
			}
			else
			{
				if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 16))
				{
					unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 16);
				}
				if (BitTest(uParam0->f_1, 14))
				{
					unk_0x061B1200C95204CB(&(uParam0->f_1), 14);
				}
				if (!BitTest(Global_1853910[iVar3 /*862*/].f_143, 2))
				{
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						if ((unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), func_10(iVar1)) < (15f * 15f) || (iVar0 == -1 && func_143(25f))) || func_142(1101004800, 1117126656))
						{
							if (unk_0xCE4AAA035282336C(uParam0->f_4))
							{
								unk_0x45533C09A6C9B409(&(uParam0->f_4));
							}
							if (iVar0 > -1 && func_145(iVar0, 1))
							{
								bVar4 = iVar0;
								if (!BitTest(Global_1853910[iVar0 /*862*/].f_143, 2))
								{
									if (unk_0xE6DEE82DB0922DF0(bVar4))
									{
										if (func_307(bVar4, 1, 1))
										{
											if (!func_141())
											{
												Var5 = { func_140(bVar4) };
												if (unk_0xF27423FF2D483551(&Var5))
												{
													func_134("FM_HTUT_FWAT", bVar4, 0, 0);
												}
												else
												{
													func_134("FM_HTUT_WAT", bVar4, 0, 0);
												}
											}
										}
									}
								}
							}
							unk_0xECDAB41968FF21A8(&(Global_1853910[iVar3 /*862*/].f_143), 2);
						}
					}
				}
				else
				{
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						if (!BitTest(uParam0->f_1, 2))
						{
							if ((!BitTest(uLocal_202, 18) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), func_10(iVar1)) > (35f * 35f)) || (BitTest(uLocal_202, 18) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), func_10(iVar1)) > (90f * 90f)))
							{
								unk_0x061B1200C95204CB(&(uParam0->f_1), false);
								unk_0x061B1200C95204CB(&(Global_1853910[iVar3 /*862*/].f_143), 2);
								unk_0x061B1200C95204CB(&uLocal_202, 18);
							}
						}
					}
					if (BitTest(Global_1926512, 15))
					{
						if (func_131("FM_HTUT_WAT") || func_131("FM_HTUT_FWAT"))
						{
							func_25();
						}
					}
				}
			}
			if (iVar0 > -1 && func_145(iVar0, 1))
			{
				if (BitTest(Global_1853910[iVar0 /*862*/].f_143, 2))
				{
					if (!BitTest(Global_1853910[iVar3 /*862*/].f_143, 2))
					{
						if (!BitTest(Global_1853910[iVar3 /*862*/].f_143, 12))
						{
							if (func_20(&(uParam0->f_10)))
							{
								if (func_19(&(uParam0->f_10), iLocal_64, 0))
								{
									unk_0xECDAB41968FF21A8(&(Global_1853910[iVar3 /*862*/].f_143), 12);
									unk_0xECDAB41968FF21A8(&(Global_1853910[iVar3 /*862*/].f_143), 13);
									if (unk_0xCE4AAA035282336C(uParam0->f_4))
									{
										unk_0x45533C09A6C9B409(&(uParam0->f_4));
									}
									func_25();
									*uParam0 = 0;
									unk_0x061B1200C95204CB(&(uParam0->f_1), 12);
									unk_0x061B1200C95204CB(&uLocal_202, 11);
								}
								else if (!BitTest(uParam0->f_1, 2))
								{
									if (!BitTest(uParam0->f_1, 12))
									{
										if (func_19(&(uParam0->f_10), (iLocal_64 - 60000), 0))
										{
											unk_0xECDAB41968FF21A8(&(uParam0->f_1), 12);
										}
										else if (!BitTest(uLocal_202, 11))
										{
											if (BitTest(Global_1853910[iVar0 /*862*/].f_143, 2))
											{
												if (!func_19(&(uParam0->f_10), (iLocal_64 - 420000), 0))
												{
													func_18(&(uParam0->f_10));
													func_17(&(uParam0->f_10), 0, 0);
													unk_0xECDAB41968FF21A8(&uLocal_202, 11);
													iLocal_64 = 180000;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!BitTest(Global_1853910[iVar3 /*862*/].f_143, 12))
				{
					if (BitTest(Global_1853910[iVar3 /*862*/].f_143, 2) && BitTest(Global_1853910[iVar0 /*862*/].f_143, 2))
					{
						unk_0x061B1200C95204CB(&(uParam0->f_1), 12);
						unk_0x061B1200C95204CB(&uLocal_202, 11);
						unk_0xECDAB41968FF21A8(&(uParam0->f_1), 4);
						*uParam0 = 3;
						func_295(uParam0);
						func_17(&uLocal_196, 0, 0);
						unk_0xECDAB41968FF21A8(&(uParam0->f_1), 6);
						func_130(1);
						func_17(&uLocal_196, 0, 0);
						if (func_145(iVar0, 1))
						{
							if (!BitTest(uParam0->f_1, 15))
							{
								if (func_129(iVar0, 0))
								{
									unk_0xECDAB41968FF21A8(&(uParam0->f_1), 15);
								}
							}
						}
					}
					else if (BitTest(Global_1853910[iVar3 /*862*/].f_143, 2))
					{
						if (!BitTest(Global_1853910[iVar0 /*862*/].f_143, 2))
						{
							func_120();
						}
					}
				}
			}
			else if (BitTest(Global_1853910[iVar3 /*862*/].f_143, 2))
			{
				unk_0xECDAB41968FF21A8(&(uParam0->f_1), 4);
				unk_0xECDAB41968FF21A8(&(uParam0->f_1), 5);
				unk_0xECDAB41968FF21A8(&(uParam0->f_1), 6);
				func_295(uParam0);
				func_130(1);
				*uParam0 = 3;
			}
			if (BitTest(uParam0->f_1, 12))
			{
				func_116(iLocal_64, uParam0->f_10);
			}
			break;
		
		case 2:
			if (func_19(&uLocal_196, 1000, 0))
			{
				*uParam0 = 3;
				func_295(uParam0);
				func_130(1);
				func_17(&uLocal_196, 0, 0);
			}
			break;
		
		case 3:
			iVar3 = unk_0x93E99A2DBCBA9CFA();
			iVar0 = Local_65.f_5.f_5[iVar3];
			iVar1 = Local_65.f_5.f_38[iVar3];
			if (!BitTest(uLocal_202, 8))
			{
				if (func_143(35f))
				{
					iVar2 = func_11(iVar1);
					if (iVar2 == 0)
					{
					}
					func_149(iVar2, 0, func_4(1, 1));
					unk_0xECDAB41968FF21A8(&uLocal_202, 8);
				}
			}
			if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 16))
			{
				unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 16);
			}
			if (!BitTest(uParam0->f_1, 3))
			{
				if (!BitTest(uParam0->f_1, 14))
				{
					if (!func_115())
					{
						if (iVar0 > -1 && func_145(iVar0, 1))
						{
							bVar4 = iVar0;
							if (unk_0xE6DEE82DB0922DF0(bVar4))
							{
								if (func_307(bVar4, 1, 1))
								{
									if (!BitTest(Global_1853910[iVar0 /*862*/].f_143, 16))
									{
										Var5 = { func_140(bVar4) };
										if (unk_0xF27423FF2D483551(&Var5))
										{
											func_134("FM_HTUT_FHLD", bVar4, 0, 0);
										}
										else
										{
											func_134("FM_HTUT_HLD", bVar4, 0, 0);
										}
										unk_0xECDAB41968FF21A8(&(uParam0->f_1), 3);
									}
									else if (!BitTest(uParam0->f_1, 14))
									{
										unk_0xECDAB41968FF21A8(&(uParam0->f_1), 14);
										func_134("FM_HTUT_HLC", bVar4, 1, 0);
									}
								}
							}
						}
						if (!BitTest(uParam0->f_1, 3) && !BitTest(uParam0->f_1, 14))
						{
							func_144("FM_HTUT_HLS", 0);
							unk_0xECDAB41968FF21A8(&(uParam0->f_1), 3);
							unk_0xECDAB41968FF21A8(&(Global_1853910[iVar3 /*862*/].f_143), 8);
						}
					}
				}
				else
				{
					iVar3 = unk_0x93E99A2DBCBA9CFA();
					iVar0 = Local_65.f_5.f_5[iVar3];
					if (iVar0 > -1 && func_145(iVar0, 1))
					{
						if (!BitTest(Global_1853910[iVar0 /*862*/].f_143, 16))
						{
							unk_0x061B1200C95204CB(&(uParam0->f_1), 14);
						}
					}
					else
					{
						unk_0x061B1200C95204CB(&(uParam0->f_1), 14);
					}
				}
			}
			else if (func_115())
			{
				if (BitTest(uParam0->f_1, 3))
				{
					unk_0x061B1200C95204CB(&(uParam0->f_1), 3);
				}
			}
			else if (iVar0 > -1 && func_145(iVar0, 1))
			{
				if (BitTest(Global_1853910[iVar0 /*862*/].f_143, 16))
				{
					unk_0x061B1200C95204CB(&(uParam0->f_1), 3);
				}
			}
			break;
		
		case 99:
			return 1;
			break;
	}
	if (*uParam0 > 0)
	{
		func_114(uParam0);
		func_105(uParam0);
		func_96(uParam0);
		func_93(uParam0);
		if (!func_302())
		{
			if (func_90(uParam0))
			{
				if (unk_0xCE4AAA035282336C(uParam0->f_4))
				{
					unk_0x45533C09A6C9B409(&(uParam0->f_4));
				}
				if (unk_0xCE4AAA035282336C(uParam0->f_5))
				{
					unk_0x45533C09A6C9B409(&(uParam0->f_5));
				}
				if (BitTest(uParam0->f_1, 15))
				{
					iVar0 = Local_65.f_5.f_5[unk_0x93E99A2DBCBA9CFA()];
					if (func_129(iVar0, 1))
					{
					}
				}
				if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
				{
					func_89(1);
				}
				if (BitTest(uLocal_202, 12))
				{
					unk_0x4235C9F9C67D9842(1);
					unk_0x061B1200C95204CB(&uLocal_202, 12);
				}
				func_25();
				func_33(1);
				func_294(0);
				func_32(0);
				func_24(8, 0);
				func_87(121, 1, -1, 1);
				func_35(1);
				*uParam0 = 99;
			}
		}
	}
	return 0;
}

void func_35(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1574612)
	{
		if (!func_86())
		{
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				Global_1836844[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_83(unk_0x93E99A2DBCBA9CFA(), bParam0);
	iVar2 = func_81(iVar1, bParam0);
	if (!func_80(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1836844[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1836844[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 311)
	{
		iVar3 = func_79(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_77(iVar4))
			{
				func_68(iVar4, 1);
			}
		}
		iVar4++;
	}
	if (!func_67(1))
	{
		func_60(func_61(59, 0, 0), 0);
		func_55(func_61(135, 0, 0), 1);
		func_53(func_61(22, 0, 0), func_61(73, 0, 0));
	}
	else
	{
		func_53(0, 0);
	}
	if (func_52())
	{
		if (func_50(77, -1))
		{
			func_49(1);
			func_48(1);
		}
	}
	if (func_47() || func_46())
	{
		func_87(77, 1, -1, 1);
		if (unk_0xA26A9A07F761D8F8())
		{
			func_36(28, 1, 0);
			func_36(29, 1, 0);
			func_36(30, 1, 0);
			func_36(31, 1, 0);
			func_36(32, 1, 0);
			func_36(33, 1, 0);
			func_36(34, 1, 0);
			func_36(35, 1, 0);
			func_36(36, 1, 0);
			func_36(37, 1, 0);
			func_36(38, 1, 0);
			func_36(58, 1, 0);
		}
	}
	if (func_61(21, 0, 0))
	{
		unk_0xAEF2B1720C0AF62C(0);
	}
	Global_1057411 = 0;
}

void func_36(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_45(iParam0, 0, 0))
		{
			if (iParam2 && Global_100733.f_18[iParam0])
			{
				if (func_44(iParam0) == 3 && !func_43(iParam0))
				{
					func_42(iParam0);
					func_41(iParam0, 0, 0);
					func_38(iParam0, 1, 0);
					func_37(iParam0);
				}
				else
				{
					func_41(iParam0, 1, 0);
					func_37(iParam0);
				}
			}
			else
			{
				func_41(iParam0, 0, 0);
				func_38(iParam0, 1, 0);
				func_37(iParam0);
			}
		}
		else
		{
			func_38(iParam0, 1, 0);
			func_37(iParam0);
		}
	}
	else if (func_45(iParam0, 0, 0))
	{
		func_38(iParam0, 0, 0);
		func_38(iParam0, 1, 0);
		func_37(iParam0);
	}
}

void func_37(int iParam0)
{
	Global_100733.f_202[iParam0] = 1;
	Global_100733.f_201 = 1;
}

void func_38(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x061B1200C95204CB(&(Global_100733.f_1407[iParam0]), bParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_40() == 0)
		{
			iVar0 = func_148(func_39(iParam0), -1, 0);
			unk_0x061B1200C95204CB(&iVar0, bParam1);
			func_147(func_39(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

int func_39(int iParam0)
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

int func_40()
{
	return Global_32163;
}

void func_41(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xECDAB41968FF21A8(&(Global_100733.f_1407[iParam0]), bParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_40() == 0)
		{
			iVar0 = func_148(func_39(iParam0), -1, 0);
			unk_0xECDAB41968FF21A8(&iVar0, bParam1);
			func_147(func_39(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

void func_42(int iParam0)
{
	if (Global_100733.f_18[iParam0])
	{
		func_41(iParam0, 10, 1);
		func_41(iParam0, 19, 1);
	}
}

bool func_43(int iParam0)
{
	return func_45(iParam0, 5, 1);
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
	}
	return 6;
}

int func_45(int iParam0, int iParam1, bool bParam2)
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
		if (func_40() == 0)
		{
			return BitTest(func_148(func_39(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

bool func_46()
{
	return Global_1575048;
}

bool func_47()
{
	return Global_1575050;
}

void func_48(bool bParam0)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	func_36(28, bParam0, 0);
	func_36(30, bParam0, 0);
	func_36(31, bParam0, 0);
	func_36(33, bParam0, 0);
	func_36(34, bParam0, 0);
	func_36(38, bParam0, 0);
	func_36(58, bParam0, 0);
}

void func_49(bool bParam0)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	func_36(29, bParam0, 0);
	func_36(32, bParam0, 0);
	func_36(36, bParam0, 0);
	func_36(35, bParam0, 0);
	func_36(37, bParam0, 0);
}

int func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2848280[iParam0 /*3*/][func_51(iParam1)];
	if (unk_0x494B367FE0CBD765(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
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

int func_52()
{
	if (!func_86())
	{
		return 0;
	}
	return 1;
}

void func_53(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_36(0, bParam0, 1);
	func_36(1, bParam0, 1);
	func_36(2, bParam0, 1);
	func_36(3, bParam0, 1);
	func_36(4, bParam0, 1);
	func_36(5, bParam0, 1);
	func_36(6, bParam0, 1);
	func_36(7, bParam0, bVar0);
	func_36(8, bParam0, 1);
	func_36(9, bParam0, 1);
	func_36(10, bParam0, 1);
	func_36(11, bParam0, 1);
	func_36(12, bParam0, bVar0);
	func_36(13, bParam0, 1);
	func_36(21, bParam0, 1);
	func_36(14, bParam0, 1);
	func_36(15, bParam0, 1);
	func_36(16, bParam0, 1);
	func_36(17, bParam0, 1);
	func_36(18, bParam0, 1);
	func_36(19, bParam0, 1);
	func_36(20, bParam0, 1);
	func_36(22, bParam0, 1);
	func_36(23, bParam0, 1);
	func_36(24, bParam0, 1);
	func_36(25, bParam0, 1);
	func_36(26, bParam0, 1);
	func_36(27, bParam0, 1);
	func_54(1, !bParam1);
	if (!bVar0)
	{
		func_42(12);
	}
}

void func_54(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_100733.f_9[iParam0] = 1;
	}
	else
	{
		Global_100733.f_9[iParam0] = 0;
	}
}

void func_55(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	uVar0 = func_59(0);
	if (Global_262145.f_63 == 1 && func_61(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_36(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_43(44))
		{
			func_42(44);
		}
	}
	if (bParam0)
	{
		if (func_56(0) > 1)
		{
			unk_0xECDAB41968FF21A8(&(Global_2793044.f_1828), 10);
		}
	}
}

int func_56(int iParam0)
{
	int iVar0;
	
	if (Global_1945075[iParam0 /*8*/] == -1)
	{
		iVar0 = func_148(func_58(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_57(iParam0, 0);
			iVar0 = 0;
		}
		Global_1945075[iParam0 /*8*/] = iVar0;
	}
	return Global_1945075[iParam0 /*8*/];
}

void func_57(int iParam0, int iParam1)
{
	Global_1945075[iParam0 /*8*/] = iParam1;
	func_147(func_58(iParam0), iParam1, -1, 1, 0);
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12386;
		
		default:
	}
	return 12386;
}

int func_59(bool bParam0)
{
	int iVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!BitTest(Global_2793044.f_1819, 26))
		{
			iVar0 = func_148(1192, -1, 0);
			if (!BitTest(iVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_50(122, -1);
}

void func_60(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	uVar0 = func_59(0);
	func_36(39, bParam0, 0);
	func_36(40, bParam0, 0);
	func_36(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_36(43, bParam0, 0);
		func_36(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_43(39))
		{
			func_42(39);
		}
		if (!func_43(40))
		{
			func_42(40);
		}
		if (!func_43(41))
		{
			func_42(41);
		}
		if (!func_43(42))
		{
			func_42(42);
		}
		if (!func_43(43))
		{
			func_42(43);
		}
	}
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8146 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_63(unk_0x93E99A2DBCBA9CFA(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4747 == 1)
		{
			return 1;
		}
	}
	if (func_47() || func_46())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_62())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836844[iVar1], iVar0);
}

int func_62()
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2793044.f_1824, 23))
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	uVar0 = Global_1665626[func_51(-1)];
	if (BitTest(uVar0, 7))
	{
		unk_0xECDAB41968FF21A8(&(Global_2793044.f_1824), 23);
		return 1;
	}
	return 0;
}

int func_63(int iParam0, int iParam1)
{
	if (!func_52())
	{
		return 0;
	}
	if (func_66())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_64(&(Global_1853910[iParam0 /*862*/].f_792), func_65(iParam1));
}

var func_64(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		case 177:
			return 39;
		
		case 182:
			return 40;
		
		case 188:
			return 41;
		
		default:
	}
	return 1;
}

bool func_66()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 3);
}

int func_67(int iParam0)
{
	return 0;
}

void func_68(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_76(-1))
			{
				if (!func_86())
				{
					return;
				}
			}
			if (!func_76(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_302() && !func_75())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_74())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_76(-1))
				{
					if (!func_69())
					{
						return;
					}
				}
			}
		}
		bVar0 = iParam0;
		iVar1 = (bVar0 / 32);
		bVar0 = (bVar0 % 32);
		unk_0xECDAB41968FF21A8(&(Global_1836844[iVar1]), bVar0);
	}
}

int func_69()
{
	var uVar0;
	
	if (func_73(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	uVar0 = Global_1665626[func_51(-1)];
	if (BitTest(uVar0, 2))
	{
		func_70(1);
		return 1;
	}
	return 0;
}

void func_70(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_139, 25))
		{
			func_71(unk_0x93E99A2DBCBA9CFA(), 12);
			unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_139), 25);
		}
	}
	else if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_139, 25))
	{
		unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_139), 25);
	}
}

void func_71(int iParam0, int iParam1)
{
	func_72(&(Global_1853910[iParam0 /*862*/].f_792), func_65(iParam1));
}

int func_72(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		unk_0xECDAB41968FF21A8(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

int func_73(int iParam0)
{
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return BitTest(Global_1853910[iParam0 /*862*/].f_139, 25);
}

int func_74()
{
	var uVar0;
	
	if (BitTest(Global_2793044.f_1824, 6))
	{
		return 1;
	}
	uVar0 = Global_1665626[func_51(-1)];
	if (BitTest(uVar0, 0))
	{
		if (!BitTest(Global_2793044.f_1824, 6))
		{
			unk_0xECDAB41968FF21A8(&(Global_2793044.f_1824), 6);
		}
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return 0;
}

bool func_75()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 7);
}

bool func_76(int iParam0)
{
	return func_50(123, iParam0);
}

int func_77(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			bVar1 = iParam0;
			bVar1 = (bVar1 % 32);
			iVar0 = func_148(func_78(iParam0), -1, 0);
			if (BitTest(iVar0, bVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1201;
			break;
		
		case 1:
			return 1202;
			break;
		
		case 2:
			return 1203;
			break;
		
		case 3:
			return 1204;
			break;
		
		case 4:
			return 1205;
			break;
		
		case 5:
			return 1207;
			break;
		
		case 6:
			return 3818;
			break;
		
		case 7:
			return 4021;
			break;
		
		case 8:
			return 5475;
			break;
		
		case 9:
			return 10353;
			break;
	}
	return 1201;
}

int func_79(int iParam0)
{
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_76(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_80(int iParam0)
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return func_50(119, iParam0);
}

int func_81(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_82(iParam0, 0);
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_297010[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_297010[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_83(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_84(iParam0);
}

int func_84(int iParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			{
				return Global_1665638[func_51(-1)];
			}
			else if (func_85(iParam0))
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_51(-1)];
	}
	return 0;
}

int func_85(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2672505.f_1, iParam0);
	}
	return 1;
}

int func_86()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return func_50(120, -1);
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_88())
	{
		iVar0 = Global_2848280[iParam0 /*3*/][func_51(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD19BD90E0B76FB05(iVar0, iParam1, iParam3);
		}
	}
}

int func_88()
{
	return 1;
	return 0;
}

void func_89(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 17))
		{
			unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 17);
		}
	}
	else if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 17))
	{
		unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 17);
	}
}

int func_90(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_65.f_5.f_5[unk_0x93E99A2DBCBA9CFA()];
	if (BitTest(Global_1853910[unk_0xD378D2332270959A() /*862*/].f_143, 2))
	{
		if (func_148(1168, -1, 0) > iLocal_368)
		{
			unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 10);
			if (iVar0 > -1)
			{
				iVar1 = iVar0;
				if (unk_0xE6DEE82DB0922DF0(iVar1))
				{
					if (func_307(bVar1, 1, 1))
					{
						if (BitTest(Global_1853910[iVar0 /*862*/].f_143, 2))
						{
							Global_1926512.f_1 = iVar0;
							unk_0xECDAB41968FF21A8(&Global_1926512, 14);
						}
					}
				}
			}
			return 1;
		}
	}
	if (*uParam0 > 1)
	{
		if (func_92())
		{
			if (!BitTest(uParam0->f_1, 8))
			{
				if (iVar0 > -1)
				{
					bVar1 = iVar0;
					if (unk_0xE6DEE82DB0922DF0(bVar1))
					{
						if (func_307(bVar1, 1, 1))
						{
							Global_1926512.f_1 = iVar0;
							unk_0xECDAB41968FF21A8(&Global_1926512, 14);
						}
					}
				}
				return 1;
			}
		}
		else if (func_91())
		{
			if (!BitTest(uParam0->f_1, 8))
			{
				return 1;
			}
		}
	}
	if ((BitTest(uParam0->f_1, 7) && !BitTest(uParam0->f_1, 10)) && !BitTest(uParam0->f_1, 9))
	{
		if (!func_20(&(uParam0->f_16)))
		{
			func_17(&(uParam0->f_16), 0, 0);
		}
		else if (func_19(&(uParam0->f_16), 3000, 0))
		{
			unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 11);
			return 1;
		}
	}
	return 0;
}

int func_91()
{
	int iVar0;
	
	iVar0 = Local_65.f_5.f_5[unk_0x93E99A2DBCBA9CFA()];
	if (iVar0 > -1)
	{
		if (BitTest(Global_1853910[iVar0 /*862*/].f_143, 11))
		{
			return 1;
		}
	}
	return 0;
}

int func_92()
{
	int iVar0;
	
	iVar0 = Local_65.f_5.f_5[unk_0x93E99A2DBCBA9CFA()];
	if (iVar0 > -1)
	{
		if (BitTest(Global_1853910[iVar0 /*862*/].f_143, 10))
		{
			return 1;
		}
	}
	return 0;
}

void func_93(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (BitTest(uParam0->f_1, 6))
	{
		if (!unk_0xCE4AAA035282336C(uParam0->f_5))
		{
			if (!func_115())
			{
				iVar0 = Local_65.f_5.f_38[unk_0x93E99A2DBCBA9CFA()];
				if (iVar0 > -1)
				{
					Var1 = { func_95(iVar0) };
					if (!func_94(Var1, 0f, 0f, 0f, 0))
					{
						if (!unk_0xCE4AAA035282336C(uParam0->f_5))
						{
							unk_0xE06BECF2118573C4(1);
							uParam0->f_5 = unk_0x7F0C74F83813841D(Var1);
							unk_0xEA4639F4444B7003(uParam0->f_5, 52);
							unk_0x225EB85DBC38E707(uParam0->f_5, 1f);
							unk_0xC2E0B90856D55E49(uParam0->f_5, 7);
							unk_0xBD91E7D4B770F97E(uParam0->f_5, 1);
						}
					}
				}
			}
		}
		else if (func_115())
		{
			if (unk_0xCE4AAA035282336C(uParam0->f_5))
			{
				unk_0x45533C09A6C9B409(&(uParam0->f_5));
			}
		}
	}
}

bool func_94(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_95(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			Var0 = { -53.124f, -1756.405f, 28.421f };
			break;
		
		case 1:
			Var0 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 2:
			Var0 = { -1226.464f, -902.5864f, 11.2783f };
			break;
		
		case 3:
			Var0 = { -711.721f, -916.6965f, 18.2145f };
			break;
		
		case 4:
			Var0 = { 1141.36f, -980.8802f, 45.4155f };
			break;
		
		case 5:
			Var0 = { -1491.057f, -383.5728f, 39.1706f };
			break;
		
		case 6:
			Var0 = { 376.6533f, 323.6471f, 102.5664f };
			break;
		
		case 7:
			Var0 = { 1159.542f, -326.6986f, 67.923f };
			break;
		
		case 8:
			Var0 = { 2559.247f, 385.5266f, 107.623f };
			break;
		
		case 9:
			Var0 = { -2973.262f, 390.8184f, 14.0433f };
			break;
		
		case 10:
			Var0 = { -3038.908f, 589.5187f, 6.9048f };
			break;
		
		case 11:
			Var0 = { -3240.317f, 1004.433f, 11.8307f };
			break;
		
		case 12:
			Var0 = { -1822.287f, 788.006f, 137.1859f };
			break;
		
		case 13:
			Var0 = { 544.2802f, 2672.811f, 41.1566f };
			break;
		
		case 14:
			Var0 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			break;
		
		case 15:
			Var0 = { 1394.169f, 3599.86f, 34.0121f };
			break;
		
		case 16:
			Var0 = { 1965.054f, 3740.555f, 31.3448f };
			break;
		
		case 17:
			Var0 = { 2682.003f, 3282.543f, 54.2411f };
			break;
		
		case 18:
			Var0 = { 1698.808f, 4929.198f, 41.0783f };
			break;
		
		case 19:
			Var0 = { 1731.21f, 6411.403f, 34.0372f };
			break;
	}
	return Var0;
}

void func_96(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (BitTest(uParam0->f_1, 4))
			{
				if (!BitTest(uParam0->f_1, 5))
				{
					if (!unk_0xF0E4B64AC0B5660E())
					{
						if (!unk_0xFEE065E56A9BEF3F())
						{
							if (func_98())
							{
								uParam0->f_2++;
							}
						}
					}
				}
				else
				{
					uParam0->f_2++;
				}
			}
			break;
		
		case 1:
			if (!unk_0xF0E4B64AC0B5660E())
			{
				if (!unk_0xFEE065E56A9BEF3F())
				{
					if (func_98())
					{
						func_150("FHU_HELP1", -1);
						uParam0->f_2++;
						iVar0 = func_148(1191, -1, 0);
						if (!BitTest(iVar0, 1))
						{
							unk_0xECDAB41968FF21A8(&iVar0, true);
							func_147(1191, iVar0, -1, 1, 0);
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xF0E4B64AC0B5660E())
			{
				if (!unk_0xFEE065E56A9BEF3F())
				{
					if (func_98())
					{
						if (func_143(1089470464))
						{
							if (!func_97())
							{
								func_150("FHU_HELP5", -1);
								uParam0->f_2++;
							}
							else if (!BitTest(uLocal_202, 7) || unk_0x992AACDC3C066F55(0, 37))
							{
								func_150("FM_PASS_DBL", -1);
								unk_0xECDAB41968FF21A8(&uLocal_202, 7);
							}
						}
					}
				}
			}
			break;
	}
}

bool func_97()
{
	return Global_1574582;
}

int func_98()
{
	if (((((((((((((((!func_307(unk_0x93E99A2DBCBA9CFA(), 1, 1) || unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD())) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || func_104(8, -1)) || func_104(15, -1)) || func_103()) || func_104(3, -1)) || unk_0xF0E4B64AC0B5660E()) || func_299(unk_0x93E99A2DBCBA9CFA(), 1, 0)) || func_298()) || func_102()) || func_101()) || func_100()) || unk_0xFEE065E56A9BEF3F()) || unk_0x359808AE8C4C629B()) || func_99())
	{
		return 0;
	}
	return 1;
}

var func_99()
{
	return BitTest(Global_2793044.f_1825, 12);
}

bool func_100()
{
	return Global_2672505.f_2837.f_582;
}

bool func_101()
{
	return Global_100733.f_388 > 0;
}

bool func_102()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

var func_103()
{
	return Global_2625288;
}

bool func_104(int iParam0, int iParam1)
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

void func_105(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_92())
	{
		if (*uParam0 <= 1)
		{
			if (!BitTest(uParam0->f_1, 8))
			{
				unk_0xECDAB41968FF21A8(&(uParam0->f_1), 8);
			}
		}
	}
	if (func_66())
	{
		if (!func_20(&uLocal_371) || func_19(&uLocal_371, 5000, 0))
		{
			if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 2))
			{
				if (iLocal_368 > -1)
				{
					iVar1 = func_148(1168, -1, 0);
					if (iLocal_368 != iVar1)
					{
						iLocal_368 = iVar1;
					}
					func_18(&uLocal_371);
					func_17(&uLocal_371, 0, 0);
				}
			}
		}
	}
	if (!BitTest(uParam0->f_1, 7))
	{
		if (!func_113())
		{
			iVar0 = func_148(1168, -1, 0);
			if (iLocal_368 > -1 && iVar0 == iLocal_368)
			{
				if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 2) && ((unk_0x24B651D85CCE5EB4(joaat("am_hold_up")) == 0 && !BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 16)) && !func_112()))
				{
					unk_0xECDAB41968FF21A8(&(uParam0->f_1), 9);
					unk_0xECDAB41968FF21A8(&(uParam0->f_1), 7);
				}
				else if (*uParam0 >= 1)
				{
					if ((!func_115() && !BitTest(uParam0->f_1, 8)) && unk_0x24B651D85CCE5EB4(joaat("am_hold_up")) == 0)
					{
						unk_0xECDAB41968FF21A8(&(uParam0->f_1), 9);
						unk_0xECDAB41968FF21A8(&(uParam0->f_1), 7);
					}
					else
					{
						unk_0xECDAB41968FF21A8(&(uParam0->f_1), 7);
					}
				}
			}
		}
	}
	else if (BitTest(uParam0->f_1, 10))
	{
		if (func_113())
		{
			if (BitTest(uParam0->f_1, 7))
			{
				unk_0x061B1200C95204CB(&(uParam0->f_1), 7);
				unk_0x061B1200C95204CB(&(uParam0->f_1), 9);
				unk_0x061B1200C95204CB(&(uParam0->f_1), 10);
			}
		}
	}
	if (BitTest(uParam0->f_1, 9))
	{
		if (!BitTest(uParam0->f_1, 10))
		{
			if (*uParam0 > 1)
			{
				if (func_143(10f))
				{
					iVar2 = unk_0x41877C61D8E004AE(func_111(), -1, 0);
					if (iVar2 != func_110())
					{
						unk_0x061B1200C95204CB(&(uParam0->f_1), 9);
						unk_0xECDAB41968FF21A8(&(uParam0->f_1), 10);
						func_107();
					}
				}
			}
		}
	}
	if (!BitTest(uLocal_202, 12))
	{
		if (func_115())
		{
			unk_0x4235C9F9C67D9842(0);
			unk_0xECDAB41968FF21A8(&uLocal_202, 12);
		}
	}
	else if (!func_115())
	{
		unk_0x4235C9F9C67D9842(1);
		unk_0x061B1200C95204CB(&uLocal_202, 12);
	}
	if (func_143(25f))
	{
		if (!func_112())
		{
			func_106(1);
		}
	}
	else if (func_112())
	{
		func_106(0);
	}
}

void func_106(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_2793044.f_1825, 21))
		{
			unk_0xECDAB41968FF21A8(&(Global_2793044.f_1825), 21);
		}
	}
	else if (BitTest(Global_2793044.f_1825, 21))
	{
		unk_0x061B1200C95204CB(&(Global_2793044.f_1825), 21);
	}
}

void func_107()
{
	int iVar0;
	
	if (Local_65.f_5.f_38[unk_0x93E99A2DBCBA9CFA()] > -1)
	{
		iVar0 = func_11(Local_65.f_5.f_38[unk_0x93E99A2DBCBA9CFA()]);
		func_108(iVar0, 1, func_109(unk_0x41877C61D8E004AE(func_111(), -1, 0)));
	}
}

void func_108(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 538193013;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0x46F55A5B9F053761(1, &Var0, 4, iParam2);
	}
}

int func_109(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0xECDAB41968FF21A8(&uVar0, bParam0);
	}
	return uVar0;
}

int func_110()
{
	return -1;
}

char* func_111()
{
	switch (Global_2697019)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

bool func_112()
{
	return BitTest(Global_2793044.f_1825, 21);
}

int func_113()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = Local_65.f_5.f_38[unk_0x93E99A2DBCBA9CFA()];
	bVar1 = func_11(iVar0);
	if (BitTest(Global_2657418.f_65, bVar1))
	{
		return 1;
	}
	if (iVar0 > -1)
	{
		if (func_12(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_114(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x93E99A2DBCBA9CFA();
	iVar0 = Local_65.f_5.f_5[iVar1];
	if (!BitTest(uParam0->f_1, 1) && !BitTest(Global_1853910[iVar1 /*862*/].f_143, 8))
	{
		if (iVar0 > -1)
		{
			if (BitTest(Global_1853910[iVar1 /*862*/].f_143, 6))
			{
				unk_0x061B1200C95204CB(&(Global_1853910[iVar1 /*862*/].f_143), 6);
			}
			if (!func_145(iVar0, 1))
			{
				unk_0x061B1200C95204CB(&(uParam0->f_1), false);
				unk_0x061B1200C95204CB(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		if (*uParam0 < 3)
		{
			if (!BitTest(Global_1853910[iVar1 /*862*/].f_143, 6))
			{
				unk_0xECDAB41968FF21A8(&(Global_1853910[iVar1 /*862*/].f_143), 6);
			}
		}
		else if (BitTest(Global_1853910[iVar1 /*862*/].f_143, 6))
		{
			unk_0x061B1200C95204CB(&(Global_1853910[iVar1 /*862*/].f_143), 6);
		}
		if (iVar0 > -1)
		{
			if (func_145(iVar0, 1))
			{
				unk_0x061B1200C95204CB(&(uParam0->f_1), true);
				unk_0x061B1200C95204CB(&(uParam0->f_1), false);
				unk_0x061B1200C95204CB(&(Global_1853910[iVar1 /*862*/].f_143), 6);
			}
		}
	}
}

int func_115()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { func_95(Local_65.f_5.f_38[unk_0x93E99A2DBCBA9CFA()]) };
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (!func_94(Var1, 0f, 0f, 0f, 0))
		{
			iVar0 = unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD());
			if (iVar0 != 0)
			{
				if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Var1, 1) < 25f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_116(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (func_20(&uParam1))
	{
		iVar0 = (iParam0 - unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), uParam1));
		if (iVar0 >= 0)
		{
			func_117(iVar0, "FM_HTUT_TME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
}

void func_117(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_119(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_118(7, bVar0);
		Global_1655472.f_4659[bVar0] = iParam0;
		StringCopy(&(Global_1655472.f_4659.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1655472.f_4659.f_172[bVar0] = iParam2;
		Global_1655472.f_4659.f_216[bVar0] = iParam3;
		Global_1655472.f_4659.f_183[bVar0] = iParam4;
		Global_1655472.f_4659.f_194[bVar0] = iParam5;
		Global_1655472.f_4659.f_249[bVar0] = iParam6;
		Global_1655472.f_4659.f_260[bVar0] = iParam7;
		Global_1655472.f_4659.f_205[bVar0] = iParam8;
		Global_1655472.f_4659.f_314[bVar0] = iParam9;
		Global_1655472.f_4659.f_325[bVar0] = iParam10;
		Global_1655472.f_4659.f_357[bVar0] = iParam11;
		Global_1655472.f_4659.f_238[bVar0] = iParam12;
		Global_1655472.f_4659.f_271[bVar0] = iParam13;
		Global_1655472.f_4659.f_368[bVar0] = iParam14;
		Global_1655472.f_4659.f_379[bVar0] = iParam15;
		Global_1655472.f_4659.f_390[bVar0] = iParam16;
		Global_1655472.f_4659.f_227[bVar0] = iParam17;
	}
}

void func_118(int iParam0, bool bParam1)
{
	unk_0xECDAB41968FF21A8(&(Global_1655472.f_7009[iParam0]), bParam1);
}

int func_119(int iParam0, int iParam1)
{
	return BitTest(Global_1655472.f_7009[iParam0], iParam1);
}

void func_120()
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(uLocal_202, 14))
	{
		if (!BitTest(uLocal_202, 15))
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				iVar1 = unk_0xADCF72047FEB806E(iVar0);
				if (func_307(iVar1, 1, 1))
				{
					if (iVar1 != unk_0x93E99A2DBCBA9CFA())
					{
						if (unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
						{
							if (func_128(iVar1))
							{
								unk_0xECDAB41968FF21A8(&uLocal_202, 15);
							}
						}
					}
				}
				bVar0++;
			}
		}
		else if (func_121(0, 1, 1, 1))
		{
			func_150("FM_IHELP_BLP", -1);
			unk_0xECDAB41968FF21A8(&uLocal_202, 14);
		}
	}
}

int func_121(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xF0E4B64AC0B5660E())
	{
		return 0;
	}
	if (func_127())
	{
		return 0;
	}
	if (!unk_0x35DF833D93BCC488())
	{
		return 0;
	}
	if (func_102())
	{
		return 0;
	}
	if (func_298())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_299(unk_0x93E99A2DBCBA9CFA(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_126(unk_0x93E99A2DBCBA9CFA()))
		{
			return 0;
		}
	}
	if (func_100())
	{
		return 0;
	}
	if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		return 0;
	}
	if (unk_0xFEE065E56A9BEF3F())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
		{
			return 0;
		}
	}
	if (Global_1836367)
	{
		return 0;
	}
	if (func_125())
	{
		return 0;
	}
	if (func_124())
	{
		return 0;
	}
	if (func_123())
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (Global_2803646)
	{
		return 0;
	}
	if (func_122())
	{
		return 0;
	}
	return 1;
}

bool func_122()
{
	return Global_2764905;
}

bool func_123()
{
	return Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_192 != 0;
}

bool func_124()
{
	return Global_2683862.f_691;
}

bool func_125()
{
	return Global_2683862.f_845;
}

int func_126(int iParam0)
{
	if (Global_2657589[iParam0 /*466*/].f_218 == 0)
	{
		return 0;
	}
	return 1;
}

int func_127()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

bool func_128(int iParam0)
{
	return unk_0xCE4AAA035282336C(Global_2646729[iParam0]);
}

int func_129(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = iParam0;
		if (unk_0xE6DEE82DB0922DF0(iVar0))
		{
			if (func_307(bVar0, 0, 1))
			{
				unk_0xA8864224E7639E2A(unk_0xC1A5EC5C986B98AD(), bVar0, iParam1);
				return 1;
			}
		}
	}
	return 0;
}

void func_130(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 7))
		{
			unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 7);
		}
	}
	else if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 7))
	{
		unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 7);
	}
}

int func_131(char* sParam0)
{
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return 0;
	}
	if (!func_31())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		if (unk_0x57049FB1B412BAB7(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x57049FB1B412BAB7(sParam0) > 23)
	{
		return 0;
	}
	return func_132(sParam0);
}

bool func_132(char* sParam0)
{
	if (!func_31())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_133(sParam0);
	}
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return 0;
	}
	return unk_0x14580F20CBCE4FA9(sParam0) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_12));
}

bool func_133(char* sParam0)
{
	if (!func_31())
	{
		return 0;
	}
	if (unk_0x2AC37494BBF1DB16(uParam0))
	{
		return 0;
	}
	return unk_0x14580F20CBCE4FA9(sParam0) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_16));
}

void func_134(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_135(sParam0, unk_0x1D25117F71EE3811(iParam1), bParam3, 1);
}

int func_135(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return 0;
	}
	if (unk_0x57049FB1B412BAB7(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x2AC37494BBF1DB16(sParam1))
	{
		return 0;
	}
	if (unk_0x57049FB1B412BAB7(sParam1) > 63)
	{
		return 0;
	}
	if (func_139(sParam0, sParam1) && Global_1574757.f_56 == Global_1574757.f_58)
	{
		return 0;
	}
	uVar0 = Global_1574757.f_54;
	func_26();
	Global_1574757 = 9;
	StringCopy(&(Global_1574757.f_1), unk_0x688846D56810779A(), 32);
	Global_1574757.f_9 = unk_0x14580F20CBCE4FA9(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	StringCopy(&(Global_1574757.f_16), sParam1, 64);
	Global_1574757.f_58 = iParam3;
	Global_1574757.f_56 = iParam3;
	Global_1574757.f_54 = uVar0;
	func_138();
	func_137(bParam2);
	func_136();
	return 1;
}

void func_136()
{
	unk_0xECDAB41968FF21A8(&(Global_1574757.f_59), true);
}

void func_137(bool bParam0)
{
	if (bParam0)
	{
		unk_0xECDAB41968FF21A8(&(Global_1574757.f_59), false);
		return;
	}
	unk_0x061B1200C95204CB(&(Global_1574757.f_59), false);
}

void func_138()
{
	Global_1574757.f_10 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), 86400000);
	Global_1574757.f_11 = unk_0x0DB7F8294D73598B();
}

bool func_139(char* sParam0, char* sParam1)
{
	if (!func_31())
	{
		return 0;
	}
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return 0;
	}
	if (unk_0x2AC37494BBF1DB16(sParam1))
	{
		return 0;
	}
	if (!unk_0x14580F20CBCE4FA9(sParam0) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_12)))
	{
		return 0;
	}
	return unk_0x14580F20CBCE4FA9(sParam1) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_16));
}

struct<13> func_140(int iParam0)
{
	struct<13> Var0;
	
	unk_0x23BD70608BA4F8D9(iParam0, &Var0, 13);
	return Var0;
}

int func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = unk_0x93E99A2DBCBA9CFA();
	iVar1 = Local_65.f_5.f_5[iVar0];
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
		{
			iVar2 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (iVar1 > -1 && func_145(iVar1, 1))
			{
				iVar3 = iVar1;
				if (unk_0xE6DEE82DB0922DF0(iVar3))
				{
					if (func_307(bVar3, 0, 1))
					{
						uVar4 = unk_0xF2CFBB1105511E1A(bVar3);
						if (!unk_0x66599E73DBA5A850(uVar4))
						{
							if (unk_0xACD39355028D39EF(uVar4))
							{
								if (unk_0x95DC39736F6748E3(uVar4, 0) == iVar2)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_142(float fParam0, float fParam1)
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
		{
			if (unk_0xDC58AE028CB223BA(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) > fParam0)
			{
				if (func_143(fParam1))
				{
					if (!BitTest(uLocal_202, 18))
					{
						unk_0xECDAB41968FF21A8(&uLocal_202, 18);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_143(float fParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = unk_0x93E99A2DBCBA9CFA();
	if (iVar0 > -1)
	{
		Var1 = { func_95(Local_65.f_5.f_38[iVar0]) };
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			Var4 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			if (unk_0xB7A628320EFF8E47(Var4, Var1) < (fParam0 * fParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_144(char* sParam0, bool bParam1)
{
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return;
	}
	if (unk_0x57049FB1B412BAB7(sParam0) > 23)
	{
		return;
	}
	if (func_132(sParam0))
	{
		return;
	}
	func_26();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), unk_0x688846D56810779A(), 32);
	Global_1574757.f_9 = unk_0x14580F20CBCE4FA9(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_138();
	func_137(bParam1);
	func_136();
}

int func_145(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!func_307(iVar0, 0, 1))
	{
		return 0;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853910[iParam0 /*862*/].f_143, 4))
		{
			return 0;
		}
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_143, 8))
	{
		return 0;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_143, 5))
	{
		return 0;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_143, 12))
	{
		return 0;
	}
	return 1;
}

void func_146()
{
	if (!BitTest(uLocal_202, 16))
	{
		if (func_121(0, 1, 1, 1))
		{
			func_150("FM_IHELP_INV", 10000);
			unk_0xECDAB41968FF21A8(&uLocal_202, 16);
		}
	}
	if (!BitTest(uLocal_202, 6))
	{
		if (BitTest(uLocal_202, 13))
		{
			if (!func_20(&uLocal_200))
			{
				func_17(&uLocal_200, 0, 0);
			}
			else if (func_19(&uLocal_200, 15000, 0))
			{
				if (func_121(0, 1, 1, 1))
				{
					unk_0xECDAB41968FF21A8(&uLocal_202, 6);
				}
			}
		}
	}
}

void func_147(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_148(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_51(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_149(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 1163337421;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0x46F55A5B9F053761(1, &Var0, 4, iParam2);
	}
}

void func_150(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

int func_151(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 0:
			if (!func_20(&(uParam0->f_14)))
			{
				func_17(&(uParam0->f_14), 0, 0);
			}
			else if (func_19(&(uParam0->f_14), 7000, 0))
			{
				if (func_167())
				{
					if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
					{
						if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 16))
						{
							unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 16);
						}
						if (!func_166(0))
						{
							func_158(19, 30, "", 0, 0, 1, 0);
							func_150("FM_IHELP_QNV", -1);
							uParam0->f_3++;
						}
					}
					else if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 16))
					{
						func_144("FM_IHELP_LCP", 0);
						unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 16);
						if (func_157("FM_IHELP_INV2") || func_157("FM_IHELP_INV"))
						{
							unk_0xCD3C8E1022864F65(1);
						}
					}
				}
			}
			break;
		
		case 1:
			if (func_152(19, 30))
			{
				unk_0xCD3C8E1022864F65(1);
				uParam0->f_3++;
			}
			else if (func_167())
			{
				if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
				{
					if (func_131("FM_IHELP_LCP"))
					{
						func_25();
					}
					if ((!func_20(&uLocal_369) || func_19(&uLocal_369, 20000, 0)) || BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 16))
					{
						if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 16))
						{
							unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 16);
						}
						if (!BitTest(uLocal_202, 16))
						{
							if (!func_157("FM_IHELP_INV"))
							{
								if (!func_157("FM_IHELP_QNV"))
								{
									if (func_98())
									{
										func_150("FM_IHELP_INV", 10000);
										unk_0xECDAB41968FF21A8(&uLocal_202, 16);
									}
								}
							}
						}
						else if (!func_157("FM_IHELP_INV"))
						{
							if (!func_157("FM_IHELP_INV2"))
							{
								if (!unk_0xF0E4B64AC0B5660E())
								{
									if (func_98())
									{
										func_150("FM_IHELP_INV2", -1);
										func_18(&uLocal_369);
										func_17(&uLocal_369, 0, 0);
									}
								}
							}
						}
					}
				}
				else if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 16))
				{
					func_144("FM_IHELP_LCP", 0);
					unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 16);
					if ((func_157("FM_IHELP_INV2") || func_157("FM_IHELP_INV")) || func_157("FM_IHELP_QNV"))
					{
						unk_0xCD3C8E1022864F65(1);
					}
				}
			}
			else if ((func_157("FM_IHELP_INV2") || func_157("FM_IHELP_INV")) || func_157("FM_IHELP_QNV"))
			{
				unk_0xCD3C8E1022864F65(1);
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_156(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2624658[iVar0 /*46*/].f_8)
	{
		return 0;
	}
	if (!Global_2624658[iVar0 /*46*/].f_2)
	{
		return 0;
	}
	func_153(iVar0);
	Global_2625824 = unk_0xA5E11AF0A2B928C1() + 1500;
	return 1;
}

void func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1665319)
	{
		return;
	}
	if (Global_2624658[iParam0 /*46*/].f_26 != -1)
	{
		unk_0x341B37C2C5AA5999(Global_2624658[iParam0 /*46*/].f_26);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1665319)
	{
		Global_2624658[iVar0 /*46*/] = { Global_2624658[iVar1 /*46*/] };
		Global_2624658[iVar0 /*46*/] = { Global_2624658[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_155(iVar0);
	Global_1665319 = (Global_1665319 - 1);
	if (Global_1665290)
	{
		if (Global_1665288 > 0)
		{
			func_154();
		}
	}
}

void func_154()
{
	Global_1665290 = 0;
}

void func_155(int iParam0)
{
	Global_2624658[iParam0 /*46*/] = 0;
	Global_2624658[iParam0 /*46*/].f_2 = 0;
	Global_2624658[iParam0 /*46*/].f_3 = 0;
	Global_2624658[iParam0 /*46*/].f_4 = 0;
	Global_2624658[iParam0 /*46*/].f_5 = func_110();
	Global_2624658[iParam0 /*46*/].f_6 = 145;
	Global_2624658[iParam0 /*46*/].f_7 = 1;
	Global_2624658[iParam0 /*46*/].f_8 = -1;
	Global_2624658[iParam0 /*46*/].f_9 = -1;
	StringCopy(&(Global_2624658[iParam0 /*46*/].f_10), "", 64);
	Global_2624658[iParam0 /*46*/].f_26 = -1;
	StringCopy(&(Global_2624658[iParam0 /*46*/].f_27), "", 32);
	Global_2624658[iParam0 /*46*/].f_35 = -1;
	Global_2624658[iParam0 /*46*/].f_36 = -1;
	Global_2624658[iParam0 /*46*/].f_37 = 0;
	Global_2624658[iParam0 /*46*/].f_39 = 0;
	Global_2624658[iParam0 /*46*/].f_40 = -1;
	Global_2624658[iParam0 /*46*/].f_41 = 0;
	Global_2624658[iParam0 /*46*/].f_42 = 0;
	Global_2624658[iParam0 /*46*/].f_43 = 0;
	Global_2624658[iParam0 /*46*/].f_45 = 0;
	if (unk_0xA26A9A07F761D8F8())
	{
		Global_2624658[iParam0 /*46*/].f_38 = unk_0x0DB7F8294D73598B();
	}
}

int func_156(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1665319)
	{
		if (!Global_2624658[iVar0 /*46*/].f_7)
		{
			if (Global_2624658[iVar0 /*46*/].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_157(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

void func_158(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_156(iParam0);
	if (bParam5)
	{
		if (iVar0 != -1)
		{
			func_153(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_159(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1, iParam4, iParam6);
}

void func_159(int iParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<46> Var5;
	bool bVar51;
	struct<13> Var52;
	int iVar65;
	
	iVar0 = func_110();
	iVar1 = 145;
	if (bParam2)
	{
		iVar0 = unk_0xADCF72047FEB806E(iParam1);
	}
	else
	{
		iVar1 = bParam1;
	}
	if (bParam2)
	{
		if (func_165())
		{
			return;
		}
	}
	iVar2 = Global_1665319;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2624658[iVar2 /*46*/] = { Global_2624658[iVar3 /*46*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1665319++;
	if (Global_1665319 > 12)
	{
		Global_1665319 = 12;
	}
	iVar4 = 0;
	if (Global_2624658[1 /*46*/].f_1)
	{
		Global_2624658[0 /*46*/] = { Global_2624658[1 /*46*/] };
		Global_2624658[1 /*46*/] = { Var5 };
		iVar4 = 1;
	}
	if (iVar4 == 0)
	{
		Global_2624658[iVar4 /*46*/].f_1 = uParam10;
	}
	else
	{
		Global_2624658[iVar4 /*46*/].f_1 = 0;
	}
	Global_2624658[iVar4 /*46*/] = 0;
	Global_2624658[iVar4 /*46*/].f_2 = 0;
	Global_2624658[iVar4 /*46*/].f_3 = 0;
	Global_2624658[iVar4 /*46*/].f_4 = 0;
	Global_2624658[iVar4 /*46*/].f_5 = iVar0;
	Global_2624658[iVar4 /*46*/].f_6 = iVar1;
	Global_2624658[iVar4 /*46*/].f_7 = bParam2;
	Global_2624658[iVar4 /*46*/].f_8 = iParam0;
	Global_2624658[iVar4 /*46*/].f_9 = -1;
	StringCopy(&(Global_2624658[iVar4 /*46*/].f_10), sParam3, 64);
	Global_2624658[iVar4 /*46*/].f_26 = -1;
	StringCopy(&(Global_2624658[iVar4 /*46*/].f_27), sParam4, 32);
	Global_2624658[iVar4 /*46*/].f_35 = iParam6;
	Global_2624658[iVar4 /*46*/].f_36 = iParam7;
	Global_2624658[iVar4 /*46*/].f_37 = 0;
	Global_2624658[iVar4 /*46*/].f_38 = unk_0x0DB7F8294D73598B();
	Global_2624658[iVar4 /*46*/].f_39 = uParam5;
	Global_2624658[iVar4 /*46*/].f_40 = Global_2625823;
	Global_2624658[iVar4 /*46*/].f_44 = iParam8;
	Global_2624658[iVar4 /*46*/].f_45 = uParam9;
	if (iParam0 == 123 || iParam0 == 234)
	{
		Global_2624658[iVar4 /*46*/].f_9 = func_162();
	}
	else if (iParam0 == 272)
	{
		Global_2624658[iVar4 /*46*/].f_9 = iParam6;
	}
	else if (iParam0 == 212)
	{
		Global_2624658[iVar4 /*46*/].f_9 = iParam6;
	}
	Global_2625823++;
	func_161();
	Global_2624658[iVar4 /*46*/].f_41 = 0;
	Global_2624658[iVar4 /*46*/].f_42 = 0;
	Global_2624658[iVar4 /*46*/].f_43 = 0;
	if (func_160())
	{
		if (bParam2)
		{
			bVar51 = true;
			if (bVar51)
			{
				Var52 = { func_140(iVar0) };
				iVar65 = unk_0x4A5DA249C6B4B0FF(&Var52);
				if (iVar65 != -1)
				{
					Global_2624658[iVar4 /*46*/].f_41 = iVar65;
					Global_2624658[iVar4 /*46*/].f_42 = 1;
					Global_2624658[iVar4 /*46*/].f_43 = 0;
				}
			}
		}
	}
}

bool func_160()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
}

void func_161()
{
	Global_1665292 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), 30000);
}

int func_162()
{
	char cVar0[24];
	int iVar6;
	int iVar7;
	var uVar8;
	bool bVar9;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_164() };
	if (unk_0x2AC37494BBF1DB16(&cVar0) || unk_0x4310A0DB886F9FED(".", &cVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = 0;
	iVar6 = 0;
	while (iVar6 < 7)
	{
		switch (iVar6)
		{
			case 0:
				StringCopy(&cVar0, func_163(57, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_163(58, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_163(59, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_163(60, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_163(61, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_163(62, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_163(63, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!unk_0x2AC37494BBF1DB16(&cVar0) && !unk_0x4310A0DB886F9FED(".", &cVar0))
		{
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 == 0)
	{
		return -1;
	}
	uVar8 = func_148(11941, -1, 0);
	bVar9 = false;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		bVar9 = iVar6 * 3;
		if (bVar9 != -1)
		{
			if (!BitTest(uVar8, bVar9))
			{
				return 7;
			}
		}
		iVar6++;
	}
	return 1;
}

var func_163(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_2849799[iParam0 /*3*/][func_51(iParam1)];
	return unk_0x70EFC5B4D041081B(uVar0, -1);
}

struct<6> func_164()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	
	if (unk_0x2AC37494BBF1DB16(&(Global_1941268.f_10)))
	{
		iVar7 = func_148(11942, -1, 0);
		if (iVar7 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar6 = unk_0x0546ACFECA98380F(iVar7);
			if (iVar6 != -1)
			{
				Var0 = { Global_794709.f_183637[Global_794709.f_159989[iVar6 /*13*/].f_10 /*6*/] };
			}
			if (unk_0x2AC37494BBF1DB16(&Var0))
			{
			}
		}
		Global_1941268.f_10 = { Var0 };
		return Var0;
	}
	return Global_1941268.f_10;
}

bool func_165()
{
	return Global_1575018 == 10;
}

int func_166(int iParam0)
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

int func_167()
{
	if (func_168() == 0)
	{
		return 1;
	}
	return 0;
}

int func_168()
{
	return Global_1574632.f_18;
}

bool func_169()
{
	var uVar0;
	
	if (!BitTest(uLocal_202, 2))
	{
		if (!BitTest(uLocal_202, 10))
		{
			if (func_290(1103626240))
			{
				unk_0xECDAB41968FF21A8(&uLocal_202, 9);
			}
			unk_0xECDAB41968FF21A8(&uLocal_202, 10);
		}
		else if (!BitTest(uLocal_202, 9))
		{
			if (!BitTest(uLocal_202, 3))
			{
				if (!BitTest(uLocal_202, 5) || (BitTest(uLocal_202, 5) && func_19(&uLocal_198, 60000, 0)))
				{
					if (func_286())
					{
						if (!BitTest(uLocal_202, 4))
						{
							func_280(19, 3, 0);
							func_279(&uLocal_203, 1, 0, "Lamar", 0, 1);
							unk_0xECDAB41968FF21A8(&uLocal_202, 4);
						}
						else
						{
							unk_0xECDAB41968FF21A8(&uVar0, 4);
							unk_0xECDAB41968FF21A8(&uVar0, 7);
							if (func_275(&uLocal_203, 19, "FM_1AU", "FM_HOLD", uVar0, 0))
							{
								unk_0xECDAB41968FF21A8(&uLocal_202, 3);
								unk_0x061B1200C95204CB(&uLocal_202, 5);
							}
						}
					}
				}
			}
			else if (!func_292())
			{
				if (func_274())
				{
					unk_0xECDAB41968FF21A8(&uLocal_202, 2);
					func_273(0);
				}
				else
				{
					func_18(&uLocal_198);
					func_17(&uLocal_198, 0, 0);
					unk_0x061B1200C95204CB(&uLocal_202, 3);
					unk_0xECDAB41968FF21A8(&uLocal_202, 5);
				}
			}
		}
		else if (func_286())
		{
			if (func_170(19, "CELL_HOLD", 0, 0))
			{
				unk_0xECDAB41968FF21A8(&uLocal_202, 2);
				func_273(0);
			}
		}
	}
	return BitTest(uLocal_202, 2);
}

bool func_170(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_171(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_171(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_172(&uVar0, iParam0, func_272(), sParam1, iVar165, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_172(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x2AC37494BBF1DB16(sParam2))
	{
		return 0;
	}
	if (unk_0x57049FB1B412BAB7(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x2AC37494BBF1DB16(sParam3))
	{
		return 0;
	}
	if (unk_0x57049FB1B412BAB7(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A());
	iVar1 = func_271(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x2AC37494BBF1DB16(sParam7))
	{
		iVar2 = unk_0x14580F20CBCE4FA9(sParam7);
	}
	if (func_270(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_265(uParam6))
	{
		return 0;
	}
	if (func_262(iVar0, iVar1, iVar2))
	{
		if (func_261())
		{
			return 0;
		}
		func_260();
		return func_179(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_178(iParam4))
	{
		return 0;
	}
	func_173(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_173(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1649046.f_40.f_1 = iParam0;
	Global_1649046.f_40.f_2 = iParam1;
	Global_1649046.f_40.f_3 = iParam2;
	StringCopy(&(Global_1649046.f_40.f_4), sParam3, 16);
	Global_1649046.f_40.f_8 = iParam4;
	Global_1649046.f_40.f_9 = iParam5;
	Global_1649046.f_40.f_14 = uParam6;
	func_174(iParam4);
	func_260();
	Global_1649046.f_40.f_13 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), 7000);
}

void func_174(int iParam0)
{
	if (func_177(iParam0))
	{
		func_176();
		return;
	}
	func_175();
}

void func_175()
{
	Global_1649046.f_40.f_10 = 0;
}

void func_176()
{
	Global_1649046.f_40.f_10 = 1;
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_178(int iParam0)
{
	return iParam0 > Global_1649046.f_40.f_8;
}

int func_179(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_259();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_256(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_253(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_256(uParam0, sParam3, sParam4);
		}
		return func_236(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_235(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_223(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_222(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_180(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_180(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_221();
	bVar0 = true;
	if (func_182(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_181(120000);
		return 1;
	}
	return 0;
}

void func_181(int iParam0)
{
	Global_1649046.f_40.f_11 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), iParam0);
	Global_1649046.f_40.f_12 = 1;
}

int func_182(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_110();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x1D25117F71EE3811(iVar0);
		iVar1 = func_215(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xF8CFDD89447316E5(unk_0x0DB7F8294D73598B(), Global_1649046.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_214(sParam5, bParam6, &iVar3);
	uVar5 = func_212(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x2AC37494BBF1DB16(sParam8))
	{
		iVar6++;
		if (!unk_0x2AC37494BBF1DB16(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x4310A0DB886F9FED(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x2AC37494BBF1DB16(sVar2))
	{
		bVar12 = func_211(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_186(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_185();
	}
	func_221();
	func_184();
	func_183();
	return 1;
}

void func_183()
{
	Global_1649046.f_57 = 0;
	Global_1649046.f_57.f_1 = 0;
}

void func_184()
{
	Global_1649046.f_40 = 3;
}

void func_185()
{
	unk_0xECDAB41968FF21A8(&Global_8253, 8);
}

int func_186(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_187(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8960 = iParam6;
			unk_0xECDAB41968FF21A8(&Global_4542297, false);
		}
		return 1;
	}
	return 0;
}

int func_187(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x4310A0DB886F9FED(sParam14, sParam15))
	{
	}
	func_204();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20383 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20383 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20383 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if (unk_0x1774A64AB2C276EF(unk_0xC1A5EC5C986B98AD()))
			{
				return 0;
			}
		}
		if (Global_4542282 == 1)
		{
			return 0;
		}
		if (unk_0x24B651D85CCE5EB4(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x24B651D85CCE5EB4(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_203() == 0)
	{
		func_201();
		return 0;
	}
	func_200(Global_4542281);
	StringCopy(&(Global_4541032[Global_4542281 /*104*/]), sParam1, 64);
	Global_4541032[Global_4542281 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4541032[Global_4542281 /*104*/].f_24 = iParam2;
	}
	Global_4541032[Global_4542281 /*104*/].f_25 = iParam7;
	Global_4541032[Global_4542281 /*104*/].f_26 = uParam8;
	Global_4541032[Global_4542281 /*104*/].f_29 = uParam9;
	Global_4541032[Global_4542281 /*104*/].f_30 = uParam12;
	Global_4541032[Global_4542281 /*104*/].f_31 = uParam11;
	Global_4541032[Global_4542281 /*104*/].f_28 = 0;
	Global_4541032[Global_4542281 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4541032[Global_4542281 /*104*/].f_33), sParam4, 64);
	Global_4541032[Global_4542281 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4541032[Global_4542281 /*104*/].f_50), sParam5, 64);
	Global_4541032[Global_4542281 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4541032[Global_4542281 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4541032[Global_4542281 /*104*/].f_83), sParam15, 64);
	func_204();
	switch (iParam16)
	{
		case 3:
			Global_4541032[Global_4542281 /*104*/].f_99[Global_20383] = 1;
			break;
		
		case 0:
			Global_4541032[Global_4542281 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4541032[Global_4542281 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4541032[Global_4542281 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20383)
		{
			case 0:
				func_199(0);
				break;
			
			case 1:
				func_199(1);
				break;
			
			case 2:
				func_199(2);
				break;
			
			case 3:
				func_199(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4542282 = 1;
				break;
			
			case 0:
				Global_4542282 = 1;
				break;
			
			case 2:
				Global_4542282 = 1;
				break;
			
			case 1:
				Global_4542282 = 1;
				break;
			}
	}
	Global_22794[Global_4542281] = 0;
	if (bParam10)
	{
		func_204();
		if (Global_20326)
		{
			StringCopy(&Global_20372, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20383)
			{
				case 0:
					StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20372, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20372, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_198())
			{
				unk_0x531D638530A8DB97(-1, "Text_Arrive_Tone", &Global_20372, 1);
			}
		}
	}
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_197(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_193(1);
			func_197(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1977527 != -1 && iParam0 == Global_1977527)
	{
		bVar1 = true;
	}
	func_188(iParam0, sParam1, bVar1, func_192(unk_0x93E99A2DBCBA9CFA()));
	return 1;
}

void func_188(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_189())
	{
		return;
	}
	unk_0xCC71BAE72F44A029(iParam0, -1180597171, unk_0x14580F20CBCE4FA9(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
	if (bParam2)
	{
		Global_1977527 = -1;
	}
}

int func_189()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_110())
	{
		return 0;
	}
	if (func_190(unk_0x93E99A2DBCBA9CFA()))
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

bool func_190(int iParam0)
{
	return func_191(iParam0, 20);
}

var func_191(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

var func_192(int iParam0)
{
	return Global_1853910[iParam0 /*862*/].f_205.f_6;
}

void func_193(int iParam0)
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
		if (func_196(14))
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
								func_195(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(iVar2);
								unk_0xAE3413B0654A0035();
							}
							if (Global_2694519)
							{
								if (iVar1 == 14)
								{
									func_194(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_194(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_194(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_194(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_194(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_195(&(Global_8260[iVar1 /*15*/]));
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
								func_195(&(Global_8260[iVar1 /*15*/]));
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
								func_195(&(Global_8260[iVar1 /*15*/]));
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
								func_195(&(Global_8260[iVar1 /*15*/]));
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
								func_195(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(42);
								unk_0xAE3413B0654A0035();
							}
							else if (Global_8260[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890001.f_1;
								func_194(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_194(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_194(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_195(sParam7);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam8))
	{
		func_195(sParam8);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam9))
	{
		func_195(sParam9);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam10))
	{
		func_195(sParam10);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam11))
	{
		func_195(sParam11);
	}
	unk_0xAE3413B0654A0035();
}

void func_195(char* sParam0)
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
}

bool func_196(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_197(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_198()
{
	return Global_1575060;
}

void func_199(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113648.f_14053[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_200(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x731F95B6458DCF80();
	uVar1 = unk_0x77BBAAED3E25322C();
	uVar2 = unk_0x30DFE1FFD2CC7420();
	uVar3 = unk_0x8C0F17CAC308A14B();
	uVar4 = unk_0x61117764C67882B7() + 1;
	uVar5 = unk_0x367F557725B53815();
	Global_4541032[iParam0 /*104*/].f_18 = uVar0;
	Global_4541032[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4541032[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4541032[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4541032[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4541032[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_201()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4542281 = 11;
	Global_4541032[Global_4542281 /*104*/].f_18 = -1;
	Global_4541032[Global_4542281 /*104*/].f_18.f_1 = 0;
	Global_4541032[Global_4542281 /*104*/].f_18.f_2 = 0;
	Global_4541032[Global_4542281 /*104*/].f_18.f_3 = 0;
	Global_4541032[Global_4542281 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_202(Global_4541032[iVar2 /*104*/].f_18, Global_4541032[Global_4542281 /*104*/].f_18))
		{
			Global_4542281 = iVar2;
		}
		iVar2++;
	}
	Global_4541032[Global_4542281 /*104*/].f_24 = 1;
}

int func_202(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_203()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4541032[iVar2 /*104*/].f_24 == 0)
		{
			Global_4542281 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4542281 = 11;
	Global_4541032[Global_4542281 /*104*/].f_18 = -1;
	Global_4541032[Global_4542281 /*104*/].f_18.f_1 = 0;
	Global_4541032[Global_4542281 /*104*/].f_18.f_2 = 0;
	Global_4541032[Global_4542281 /*104*/].f_18.f_3 = 0;
	Global_4541032[Global_4542281 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4541032[iVar2 /*104*/].f_24 == 0 || Global_4541032[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_202(Global_4541032[iVar2 /*104*/].f_18, Global_4541032[Global_4542281 /*104*/].f_18))
			{
				Global_4542281 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4542281 == 11)
	{
		return 0;
	}
	Global_4541032[Global_4542281 /*104*/].f_99[0] = 0;
	Global_4541032[Global_4542281 /*104*/].f_99[1] = 0;
	Global_4541032[Global_4542281 /*104*/].f_99[2] = 0;
	return 1;
}

void func_204()
{
	if (func_196(14))
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
		Global_20383 = func_205();
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

var func_205()
{
	func_206();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_206()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_209(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_208(unk_0xC1A5EC5C986B98AD());
			if (func_207(iVar0) && (!func_196(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_207(Global_113648.f_2365.f_539.f_4321))
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

bool func_207(int iParam0)
{
	return iParam0 < 3;
}

int func_208(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_209(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_209(int iParam0)
{
	if (func_207(iParam0))
	{
		return func_210(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_210(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

int func_211(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_187(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8960 = iParam10;
			unk_0xECDAB41968FF21A8(&Global_4542297, false);
		}
		return 1;
	}
	return 0;
}

int func_212(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_213(2, iParam1);
	return iParam0;
}

void func_213(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_214(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x4310A0DB886F9FED(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_213(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x45816CECE89B5B19(sParam0);
}

int func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = func_218(iParam0);
	if (iVar0 == -1)
	{
		func_216(iParam0, 1);
		return 0;
	}
	Global_1666668[iVar0 /*5*/].f_4 = 1;
	return Global_1666668[iVar0 /*5*/].f_2;
}

void func_216(int iParam0, bool bParam1)
{
	if (!func_307(iParam0, 0, 1))
	{
		return;
	}
	if (func_218(iParam0) != -1)
	{
		return;
	}
	if (Global_1666831)
	{
		if (iParam0 == Global_1666831.f_1)
		{
			return;
		}
	}
	if (func_217(iParam0))
	{
		return;
	}
	if (Global_1666869 >= 32)
	{
		return;
	}
	Global_1666836[Global_1666869] = iParam0;
	Global_1666869++;
	if (bParam1)
	{
	}
}

int func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666869)
	{
		if (Global_1666836[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_218(int iParam0)
{
	int iVar0;
	
	if (!func_307(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1666829 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666829)
	{
		if (Global_1666668[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xDFF9E7382B675942(Global_1666668[iVar0 /*5*/].f_2) && unk_0x367CC6D9413FE353(Global_1666668[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_219(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_219(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1666829)
	{
		return;
	}
	if (unk_0xDFF9E7382B675942(Global_1666668[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1666668[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x0E2FD3D4F40014B2(Global_1666668[iParam0 /*5*/].f_2), 64);
			unk_0x3D0CB5A9795BD2A8(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x0ED59D1B8E7D03E6(Global_1666668[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1666829)
	{
		Global_1666668[iVar32 /*5*/] = { Global_1666668[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_220(&(Global_1666668[iVar32 /*5*/]));
	Global_1666829 = (Global_1666829 - 1);
}

void func_220(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_110();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA26A9A07F761D8F8())
	{
		uParam0->f_3 = unk_0x0DB7F8294D73598B();
	}
}

void func_221()
{
	Global_1649046.f_40.f_9 = 4;
}

int func_222(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_221();
	bVar0 = false;
	return func_182(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_223(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_224(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_224(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_110();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x1D25117F71EE3811(iVar0);
		iVar1 = func_215(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xF8CFDD89447316E5(unk_0x0DB7F8294D73598B(), Global_1649046.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22786 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_214(sParam5, bParam6, &iVar3);
	uVar5 = func_212(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x2AC37494BBF1DB16(sParam8))
	{
		iVar6++;
		if (!unk_0x2AC37494BBF1DB16(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x4310A0DB886F9FED(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x2AC37494BBF1DB16(sVar2))
	{
		bVar12 = func_234(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_226(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_185();
	}
	func_225();
	func_184();
	func_183();
	return 1;
}

void func_225()
{
	Global_1649046.f_40.f_9 = 3;
}

int func_226(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x061B1200C95204CB(&Global_8253, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_228(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8960 = iParam6;
			Global_8863[3 /*6*/] = { func_227(iParam0) };
			Global_8940 = iParam0;
			unk_0xECDAB41968FF21A8(&Global_8253, true);
			unk_0xECDAB41968FF21A8(&Global_8253, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_227(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_3;
}

int func_228(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x4310A0DB886F9FED(sParam14, sParam15))
	{
	}
	func_204();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20383 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20383 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20383 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if (unk_0x1774A64AB2C276EF(unk_0xC1A5EC5C986B98AD()))
			{
				return 0;
			}
		}
		if (Global_113648.f_14053[Global_20383 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x24B651D85CCE5EB4(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x24B651D85CCE5EB4(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_233() == 0)
	{
		func_231();
		return 0;
	}
	func_230(Global_22792);
	StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/]), sParam1, 64);
	Global_113648.f_14143[Global_22792 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113648.f_14143[Global_22792 /*104*/].f_24 = iParam2;
	}
	Global_113648.f_14143[Global_22792 /*104*/].f_25 = iParam7;
	Global_113648.f_14143[Global_22792 /*104*/].f_26 = uParam8;
	Global_113648.f_14143[Global_22792 /*104*/].f_29 = uParam9;
	Global_113648.f_14143[Global_22792 /*104*/].f_30 = uParam12;
	Global_113648.f_14143[Global_22792 /*104*/].f_31 = uParam11;
	Global_113648.f_14143[Global_22792 /*104*/].f_28 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_33), sParam4, 64);
	Global_113648.f_14143[Global_22792 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_50), sParam5, 64);
	Global_113648.f_14143[Global_22792 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8253, 10))
	{
		Global_113648.f_14143[Global_22792 /*104*/].f_99[0] = 1;
		Global_113648.f_14143[Global_22792 /*104*/].f_99[1] = 1;
		Global_113648.f_14143[Global_22792 /*104*/].f_99[2] = 1;
		Global_8959 = 4;
		func_199(0);
		func_199(2);
		func_199(1);
	}
	else
	{
		func_204();
		switch (iParam16)
		{
			case 3:
				Global_113648.f_14143[Global_22792 /*104*/].f_99[Global_20383] = 1;
				break;
			
			case 0:
				Global_113648.f_14143[Global_22792 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113648.f_14143[Global_22792 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113648.f_14143[Global_22792 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20383)
			{
				case 0:
					func_199(0);
					Global_8959 = 0;
					break;
				
				case 1:
					func_199(1);
					Global_8959 = 1;
					break;
				
				case 2:
					func_199(2);
					Global_8959 = 2;
					break;
				
				case 3:
					func_199(3);
					Global_8959 = 3;
					break;
				
				default:
					Global_8959 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8253, 10))
		{
			Global_113648.f_14053[0 /*20*/].f_17 = 1;
			Global_113648.f_14053[1 /*20*/].f_17 = 1;
			Global_113648.f_14053[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113648.f_14053[Global_20383 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113648.f_14053[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113648.f_14053[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113648.f_14053[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22794[Global_22792] = 0;
	if (bParam10)
	{
		func_204();
		if (Global_20326)
		{
			StringCopy(&Global_20372, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20383)
			{
				case 0:
					StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20372, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20372, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_198())
			{
				unk_0x531D638530A8DB97(-1, "Text_Arrive_Tone", &Global_20372, 1);
			}
		}
	}
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_197(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_193(1);
			func_197(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1977527 != -1 && iParam0 == Global_1977527)
	{
		bVar1 = true;
	}
	func_229(iParam0, sParam1, bVar1, func_192(unk_0x93E99A2DBCBA9CFA()));
	return 1;
}

void func_229(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_189())
	{
		return;
	}
	unk_0xCC71BAE72F44A029(iParam0, 1654525105, unk_0x14580F20CBCE4FA9(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
	if (bParam2)
	{
		Global_1977527 = -1;
	}
}

void func_230(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x731F95B6458DCF80();
	uVar1 = unk_0x77BBAAED3E25322C();
	uVar2 = unk_0x30DFE1FFD2CC7420();
	uVar3 = unk_0x8C0F17CAC308A14B();
	uVar4 = unk_0x61117764C67882B7() + 1;
	uVar5 = unk_0x367F557725B53815();
	Global_113648.f_14143[iParam0 /*104*/].f_18 = uVar0;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_231()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78558)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22792 = 34;
	Global_113648.f_14143[Global_22792 /*104*/].f_18 = -1;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_232(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18))
		{
			Global_22792 = iVar2;
		}
		iVar2++;
	}
	Global_113648.f_14143[Global_22792 /*104*/].f_24 = 1;
}

int func_232(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_233()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78558)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113648.f_14143[iVar2 /*104*/].f_24 == 0)
		{
			Global_22792 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22792 = 34;
	Global_113648.f_14143[Global_22792 /*104*/].f_18 = -1;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113648.f_14143[iVar2 /*104*/].f_24 == 0 || Global_113648.f_14143[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_232(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18))
			{
				Global_22792 = iVar2;
			}
		}
		if (Global_113648.f_14143[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22792 == 34)
	{
		return 0;
	}
	Global_113648.f_14143[Global_22792 /*104*/].f_99[0] = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_99[1] = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_99[2] = 0;
	return 1;
}

int func_234(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x061B1200C95204CB(&Global_8253, 10);
	iVar0 = 3;
	if (func_228(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8960 = iParam10;
			Global_8863[3 /*6*/] = { func_227(iParam0) };
			Global_8940 = iParam0;
			StringCopy(&Global_8941, sParam5, 64);
			unk_0xECDAB41968FF21A8(&Global_8253, true);
			unk_0xECDAB41968FF21A8(&Global_8253, 7);
		}
		return 1;
	}
	return 0;
}

int func_235(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
	}
	if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
	{
		return 0;
	}
	func_225();
	bVar0 = true;
	if (func_224(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_181(120000);
		return 1;
	}
	return 0;
}

int func_236(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_252(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_242(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_241(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_240(1);
		}
		func_239();
		func_184();
		func_238();
		func_237();
		return 1;
	}
	return 0;
}

void func_237()
{
	Global_2803162 = 0;
}

void func_238()
{
	Global_1649046.f_57 = 1;
	Global_1649046.f_57.f_1 = 0;
}

void func_239()
{
	Global_1649046.f_40.f_9 = 1;
}

void func_240(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8255, false);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8255, false);
	}
}

void func_241(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, 20);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8253, 20);
	}
}

int func_242(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_251(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21773 = 0;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_21730 = 0;
	Global_21777 = 0;
	Global_21779 = 0;
	Global_2883585 = 0;
	return func_243(sParam3, iParam4, bParam7);
}

int func_243(char* sParam0, int iParam1, bool bParam2)
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
					func_250();
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
		if (func_104(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_249();
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
				func_204();
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
				if (func_248())
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
			if (func_247())
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
			func_246();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_245();
		func_244();
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
		func_250();
	}
	return 0;
}

void func_244()
{
	if (!func_189())
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

void func_245()
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

void func_246()
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

int func_247()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_248()
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

void func_249()
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

void func_250()
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

void func_251(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_252(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_251(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21773 = 1;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_21730 = 0;
	Global_21777 = 0;
	Global_21779 = 0;
	Global_2883585 = 0;
	return func_243(sParam3, iParam4, bParam7);
}

int func_253(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
	}
	if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
	{
		return 0;
	}
	if (func_255(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_254();
		func_239();
		func_184();
		func_238();
		func_237();
		return 1;
	}
	return 0;
}

void func_254()
{
	Global_22743 = 0;
}

bool func_255(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_251(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21773 = 0;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 1;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_21730 = 0;
	Global_21777 = 1;
	Global_21779 = 0;
	StringCopy(&Global_21873, sParam5, 24);
	Global_2883585 = 0;
	return func_243(sParam3, iParam4, bParam8);
}

int func_256(var uParam0, char* sParam1, char* sParam2)
{
	if (func_258(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_257();
		func_184();
		func_238();
		return 1;
	}
	return 0;
}

void func_257()
{
	Global_1649046.f_40.f_9 = 2;
}

bool func_258(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_251(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_243(sParam2, iParam3, 0);
}

void func_259()
{
	Global_1649046.f_55 = Global_1649046.f_40.f_1;
	Global_1649046.f_55.f_1 = Global_1649046.f_40.f_10;
}

void func_260()
{
	Global_1649046.f_40 = 1;
}

bool func_261()
{
	return Global_1649046.f_40 == 1;
}

int func_262(int iParam0, int iParam1, int iParam2)
{
	if (!func_263(iParam0))
	{
		return 0;
	}
	if (Global_1649046.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1649046.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_263(int iParam0)
{
	if (!func_264())
	{
		return 0;
	}
	if (!Global_1649046.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_264()
{
	if (Global_1649046.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_265(var uParam0)
{
	if (func_269())
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	if (func_166(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1935176 || func_267())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_266())
		{
			return 0;
		}
	}
	return 1;
}

bool func_266()
{
	return unk_0xF8CFDD89447316E5(unk_0x0DB7F8294D73598B(), Global_1665292);
}

int func_267()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_268()
{
	return Global_1649046.f_40 == 3;
}

bool func_269()
{
	return func_247();
}

int func_270(int iParam0, int iParam1, int iParam2)
{
	if (!func_268())
	{
		return 0;
	}
	return func_262(iParam0, iParam1, iParam2);
}

int func_271(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x14580F20CBCE4FA9(&cVar0);
}

char* func_272()
{
	return "TXTMSG";
}

void func_273(bool bParam0)
{
	if (bParam0)
	{
		unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 28);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 28);
	}
}

bool func_274()
{
	return Global_1649046.f_57.f_1;
}

int func_275(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_277())
	{
		return 0;
	}
	if (func_276())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_172(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

bool func_276()
{
	return Global_2800023.f_1;
}

int func_277()
{
	if (Global_1649234.f_2)
	{
		return 1;
	}
	return func_278();
}

bool func_278()
{
	return func_269();
}

void func_279(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x66599E73DBA5A850(iParam2))
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

void func_280(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8939 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		func_204();
		if (iParam1 == 4)
		{
			func_285(iParam0, 0, 1);
			func_285(iParam0, 1, 1);
			func_285(iParam0, 2, 1);
			func_284(iParam0, 0, 1);
			func_284(iParam0, 1, 1);
			func_284(iParam0, 2, 1);
		}
		else
		{
			if (func_283(iParam0, iParam1) == 1 && func_282(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_285(iParam0, iVar0, 1);
			func_284(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2793044.f_6891)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2793044.f_6890)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2793044.f_6890)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78558)
			{
				if (iParam1 != 4)
				{
					if (Global_20383 != iParam1)
					{
						Global_8912[iParam1 /*4*/] = { func_227(iParam0) };
						Global_8929[iParam1] = 1;
						Global_8934[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20383)
					{
					}
					else
					{
						Global_8863[1 /*6*/] = { func_227(iParam0) };
						Global_8863[1 /*6*/].f_5 = iParam1;
						func_281();
					}
				}
				else
				{
					Global_8863[1 /*6*/] = { func_227(iParam0) };
					Global_8863[1 /*6*/].f_5 = iParam1;
					func_281();
				}
			}
			else
			{
				Global_8863[1 /*6*/] = { func_227(iParam0) };
				Global_8863[1 /*6*/].f_5 = iParam1;
				func_281();
			}
		}
	}
}

void func_281()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x45816CECE89B5B19(&(Global_2028[Global_8939 /*29*/].f_7)), 64);
	if (Global_8958 == 0)
	{
		unk_0xD30970E11AD0FF0D("");
		StringCopy(&cVar16, unk_0x45816CECE89B5B19(&(Global_8863[1 /*6*/])), 64);
		sVar32 = unk_0x45816CECE89B5B19("CELL_253");
		unk_0x4BE755B3858339A1(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xD30970E11AD0FF0D("CELL_255");
		unk_0x48849374B34BB7B9(&(Global_8863[1 /*6*/]));
		unk_0x4BE755B3858339A1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x061B1200C95204CB(&Global_8253, false);
}

int func_282(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

int func_283(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_12[iParam1];
}

void func_284(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2028[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2028[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_286()
{
	if (func_102())
	{
		return 0;
	}
	if (unk_0xF0E4B64AC0B5660E())
	{
		return 0;
	}
	if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		return 0;
	}
	if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
	{
		return 0;
	}
	if (!unk_0x35DF833D93BCC488())
	{
		return 0;
	}
	if (func_289())
	{
		return 0;
	}
	if (func_127())
	{
		return 0;
	}
	if (func_299(unk_0x93E99A2DBCBA9CFA(), 1, 0))
	{
		return 0;
	}
	if (func_298())
	{
		return 0;
	}
	if (func_100())
	{
		return 0;
	}
	if (unk_0xFEE065E56A9BEF3F())
	{
		return 0;
	}
	if (func_266())
	{
		return 0;
	}
	if (func_288())
	{
		return 0;
	}
	if (func_287(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		return 0;
	}
	return 1;
}

bool func_287(int iParam0, int iParam1)
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

bool func_288()
{
	return Global_2684799.f_2846.f_42;
}

int func_289()
{
	if (Global_20383.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_290(float fParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		Var2 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0xADCF72047FEB806E(iVar0);
			if (func_307(iVar1, 1, 1))
			{
				if (iVar1 != unk_0x93E99A2DBCBA9CFA())
				{
					if (func_291(iVar1))
					{
						if (unk_0xB7A628320EFF8E47(Var2, unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iVar1), 1)) < (fParam0 * fParam0))
						{
							return 1;
						}
					}
				}
			}
			bVar0++;
		}
	}
	return 0;
}

bool func_291(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_143, 28);
}

bool func_292()
{
	return func_268();
}

void func_293()
{
	struct<3> Var0;
	
	Var0.f_0 = -1575137150;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = unk_0xE16824A2A0B2A6D8();
	unk_0x46F55A5B9F053761(1, &Var0, 3, func_4(1, 1));
}

void func_294(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 3))
		{
			unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 3);
		}
	}
	else if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 3))
	{
		unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143), 3);
	}
}

void func_295(var uParam0)
{
	if (func_131("FM_HTUT_GOP"))
	{
		func_296("FM_HTUT_GOP");
	}
	if (func_131("FM_HTUT_GO"))
	{
		func_296("FM_HTUT_GO");
	}
	if (func_131("FM_HTUT_WAT"))
	{
		func_296("FM_HTUT_WAT");
	}
	if (func_131("FM_HTUT_HLD"))
	{
		func_296("FM_HTUT_HLD");
	}
	if (func_131("FM_HTUT_HLS"))
	{
		func_296("FM_HTUT_HLS");
	}
	if (unk_0xCE4AAA035282336C(uParam0->f_4))
	{
		unk_0x45533C09A6C9B409(&(uParam0->f_4));
	}
}

void func_296(char* sParam0)
{
	bool bVar0;
	
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_31())
	{
		if (Global_1574757 == 11)
		{
			if (unk_0x57049FB1B412BAB7(sParam0) > 63)
			{
				return;
			}
			bVar0 = unk_0x14580F20CBCE4FA9(sParam0) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_16));
		}
		else
		{
			if (unk_0x57049FB1B412BAB7(sParam0) > 23)
			{
				return;
			}
			bVar0 = unk_0x14580F20CBCE4FA9(sParam0) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_12));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_26();
}

int func_297()
{
	return Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_193;
}

bool func_298()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 0);
}

int func_299(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_300(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853910[iParam0 /*862*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_300(int iParam0)
{
	return func_301(iParam0);
}

var func_301(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_302()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return func_50(121, -1);
}

int func_303()
{
	return Local_65.f_0;
}

int func_304(int iParam0)
{
	return iLocal_145[iParam0];
}

void func_305()
{
	unk_0xE06BECF2118573C4(0);
	func_25();
	func_24(8, 0);
	unk_0x4235C9F9C67D9842(1);
	if (func_291(unk_0x93E99A2DBCBA9CFA()))
	{
		func_273(0);
	}
	func_306();
}

void func_306()
{
	unk_0x675D9C12C73D3DE7();
}

int func_307(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (unk_0xE6DEE82DB0922DF0(bParam0))
		{
			if (bParam1)
			{
				if (!unk_0x48DC6A21D1CAD89C(bParam0))
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

int func_308()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 1;
		}
	}
	if (func_314())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_313())
	{
		return 1;
	}
	if (func_312(159))
	{
		if (!func_311())
		{
			return 1;
		}
	}
	if (func_312(157))
	{
		return 1;
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 1;
	}
	if (func_309() != 0)
	{
		if (unk_0x24B651D85CCE5EB4(func_309()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_309()
{
	switch (func_40())
	{
		case 0:
			return func_310();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_310()
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_311()
{
	return Global_2683862.f_698;
}

int func_312(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_313()
{
	return Global_2694524;
}

bool func_314()
{
	return Global_2683862.f_693;
}

void func_315()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_316(struct<21> Param0)
{
	func_320(func_321(Param0.f_0), Param0);
	func_318(0, -1, 0);
	unk_0xAC5E62CB7808A363(&Local_65, 79, 0);
	unk_0x10BF12101F9D80A4(&iLocal_145, 33, 0);
	unk_0xF1440897111F3111(0);
	if (!func_317())
	{
		func_305();
	}
	unk_0x061B1200C95204CB(&Global_1926512, true);
	unk_0x061B1200C95204CB(&Global_1926512, 15);
	unk_0x061B1200C95204CB(&Global_1926512, 14);
	func_24(8, 1);
	if (!func_291(unk_0x93E99A2DBCBA9CFA()))
	{
		func_273(1);
	}
}

int func_317()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 0;
		}
		if (unk_0x0C8B35057DDAA980())
		{
			return 1;
		}
		if (func_314())
		{
			return 0;
		}
		if (func_312(157))
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

int func_318(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xA1089192E8AE61F4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_306();
			}
			else
			{
				return 0;
			}
		}
		if (!func_319(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
				{
					if (!bParam2)
					{
						func_306();
					}
					else
					{
						return 0;
					}
				}
				if (func_314())
				{
					if (!bParam2)
					{
						func_306();
					}
					else
					{
						return 0;
					}
				}
				if (func_312(157))
				{
					if (!bParam2)
					{
						func_306();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE3C3FF8D5649A77D())
			{
				if (!bParam2)
				{
					func_306();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xA1089192E8AE61F4();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			if (!bParam2)
			{
				func_306();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE3C3FF8D5649A77D())
	{
		if (!bParam2)
		{
			func_306();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_319(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_320(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		func_306();
	}
	unk_0xCF50389093DECE87(uParam0, 0, Param1.f_16);
}

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 180:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 183:
			return 32;
		
		case 184:
			return 32;
		
		case 181:
			return 32;
		
		case 182:
			return 32;
		
		case 187:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 2;
		
		case 196:
			return 1;
		
		case 192:
			return 2;
		
		case 193:
			return 4;
		
		case 194:
			return 2;
		
		case 195:
			return 2;
		
		case 177:
			return 1;
		
		case 197:
			return 2;
		
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
			return 0;
		
		case 219:
			return 1;
		
		case 204:
			return 4;
		
		case 207:
			return 4;
		
		case 208:
			return 1;
		
		case 209:
			return 1;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 216:
			return 1;
		
		case 212:
			return 1;
		
		case 210:
			return 2;
		
		case 213:
			return 8;
		
		case 214:
			return 8;
		
		case 217:
			return 1;
		
		case 218:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 205:
			return 16;
		
		case 206:
			return 32;
		
		default:
	}
	switch (func_322(func_323(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		default:
	}
	return -1;
}

int func_323(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 191:
			return 15;
		
		case 198:
			return 8;
		
		case 192:
			return 14;
		
		case 196:
			return 122;
		
		case 199:
			return 1;
		
		case 197:
			return 5;
		
		case 200:
			return 6;
		
		case 193:
			return 11;
		
		case 201:
			return 0;
		
		case 202:
			return 2;
		
		case 194:
			return 13;
		
		case 203:
			return 3;
		
		case 195:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		default:
	}
	if (bParam1)
	{
	}
	return 312;
}

