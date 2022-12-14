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
	struct<4> Local_85 = { 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 32;
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
	var uLocal_128 = 32;
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
	int iLocal_164 = 0;
	struct<3> Local_165[32];
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 16;
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
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	bool bLocal_432 = 0;
	bool bLocal_433 = 0;
	var uLocal_434 = 0;
	char* sLocal_435 = NULL;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
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
	bLocal_433 = true;
	sLocal_435 = "MP_INTRO_MCS_13";
	func_256(ScriptParam_0);
	while (true)
	{
		func_255();
		if (func_248())
		{
			func_244();
		}
		func_239(&Global_1935132);
		switch (func_238(unk_0xD378D2332270959A()))
		{
			case 0:
				if (func_237() == 2)
				{
					Local_165[unk_0xD378D2332270959A() /*3*/] = 2;
				}
				else if (func_237() == 6)
				{
					Local_165[unk_0xD378D2332270959A() /*3*/] = 5;
				}
				break;
			
			case 2:
				if (func_237() == 2)
				{
					if (!func_236(unk_0x93E99A2DBCBA9CFA()))
					{
						func_19();
					}
					else if (unk_0xCE4AAA035282336C(Global_1935132))
					{
						func_12();
						unk_0xBD91E7D4B770F97E(Global_1935132, 0);
						unk_0x45533C09A6C9B409(&Global_1935132);
						if (BitTest(uLocal_434, 3))
						{
							unk_0x423A98584B1756BF();
						}
						unk_0xECDAB41968FF21A8(&(Local_165[unk_0xD378D2332270959A() /*3*/].f_2), false);
					}
					if (func_8(unk_0x93E99A2DBCBA9CFA()))
					{
						Local_165[unk_0xD378D2332270959A() /*3*/] = 3;
						Global_2793044.f_1810 = 0;
					}
				}
				else if (func_237() == 6)
				{
					Local_165[unk_0xD378D2332270959A() /*3*/] = 5;
				}
				break;
			
			case 5:
				func_6(&(Local_85.f_3));
				if (func_5(&(Local_85.f_3)))
				{
					Local_165[unk_0xD378D2332270959A() /*3*/] = 6;
				}
				break;
			
			case 3:
				Local_165[unk_0xD378D2332270959A() /*3*/] = 6;
			
			case 6:
				func_244();
				break;
		}
		if (unk_0xE85391CF212DE622())
		{
			switch (func_237())
			{
				case 0:
					Local_85.f_2 = -1;
					Local_85.f_0 = 2;
					break;
				
				case 2:
					func_3();
					func_2();
					if (func_1())
					{
						Local_85.f_0 = 6;
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
	if (BitTest(Local_85.f_1, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	if (unk_0xE85391CF212DE622())
	{
	}
}

void func_3()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE85391CF212DE622())
	{
		if (iLocal_164 == 0)
		{
			unk_0x061B1200C95204CB(&uLocal_434, false);
			unk_0xECDAB41968FF21A8(&uLocal_434, true);
			if (Local_85.f_2 != -1)
			{
				if (!unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(Local_85.f_2)))
				{
					Local_85.f_2 = -1;
				}
			}
		}
		iVar0 = iLocal_164;
		if (unk_0x9A45DBB669E889B7(iVar0))
		{
			iVar1 = unk_0xFE2D0B37A9596A4C(iVar0);
			if (!BitTest(Local_165[iLocal_164 /*3*/].f_2, 0))
			{
				unk_0x061B1200C95204CB(&uLocal_434, true);
			}
			if (func_4(iVar1, 0, 1))
			{
				if (BitTest(Local_165[iLocal_164 /*3*/].f_2, 1))
				{
					unk_0xECDAB41968FF21A8(&uLocal_434, 12);
					if (Local_85.f_2 == -1)
					{
						if (Local_85.f_2 != iLocal_164)
						{
							Local_85.f_2 = iLocal_164;
						}
					}
				}
				else if (Local_85.f_2 == iLocal_164)
				{
					Local_85.f_2 = -1;
				}
			}
		}
		iLocal_164++;
		if (iLocal_164 == 32)
		{
			if (BitTest(uLocal_434, 1))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_1), false);
			}
			if (!BitTest(uLocal_434, 12))
			{
				if (Local_85.f_2 != -1)
				{
					Local_85.f_2 = -1;
				}
			}
			unk_0xECDAB41968FF21A8(&uLocal_434, false);
			iLocal_164 = 0;
		}
	}
}

int func_4(int iParam0, bool bParam1, bool bParam2)
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

int func_5(var uParam0)
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

void func_6(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xE85391CF212DE622())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
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

int func_8(int iParam0)
{
	if (func_11(iParam0))
	{
		return 1;
	}
	if (func_9(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return 0;
}

var func_10(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_11(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

void func_12()
{
	if (!func_18())
	{
		return;
	}
	if (!unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A()) == Global_1574757.f_9)
	{
		return;
	}
	func_13();
}

void func_13()
{
	func_15();
	func_14(0);
}

void func_14(bool bParam0)
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

void func_15()
{
	if (!func_17())
	{
	}
	if (func_18())
	{
		unk_0x7A9058087D285F2B(&(Global_1574757.f_12));
		func_16();
		unk_0x83D7210D9382146A();
	}
}

void func_16()
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

int func_17()
{
	if (!func_18())
	{
		return 0;
	}
	unk_0xEB16059D3EDC926B(&(Global_1574757.f_12));
	func_16();
	return unk_0xC44AC9C43C91326C();
}

int func_18()
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

void func_19()
{
	var uVar0;
	
	switch (Local_165[unk_0xD378D2332270959A() /*3*/].f_1)
	{
		case 0:
			if (!BitTest(uLocal_434, 2))
			{
				if (!BitTest(uLocal_434, 5))
				{
					if (!func_235())
					{
						if (!func_234())
						{
							if (!func_232())
							{
								if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
								{
									if (!func_231(0))
									{
										if (!func_228(unk_0x93E99A2DBCBA9CFA(), 1, 0))
										{
											if (!func_227())
											{
												if (func_226() == 0)
												{
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (!BitTest(uLocal_434, 5))
			{
				if ((((((func_228(unk_0x93E99A2DBCBA9CFA(), 1, 0) || func_227()) || func_226() > 0) || func_225()) || func_221()) || func_220()) || func_199(0))
				{
					unk_0xECDAB41968FF21A8(&uLocal_434, 5);
					func_12();
					if (unk_0xCE4AAA035282336C(Global_1935132))
					{
						unk_0xBD91E7D4B770F97E(Global_1935132, 0);
						unk_0x45533C09A6C9B409(&Global_1935132);
					}
				}
				else
				{
					if (unk_0xCE4AAA035282336C(Global_1935132))
					{
						if (!BitTest(uLocal_434, 14))
						{
							if (Local_85.f_2 != -1)
							{
								if (Local_85.f_2 != unk_0xD378D2332270959A())
								{
									unk_0x1886753DA39F38F8(Global_1935132, 39);
									unk_0x225EB85DBC38E707(Global_1935132, 0.7f);
									unk_0xECDAB41968FF21A8(&uLocal_434, 14);
								}
							}
						}
						else if (Local_85.f_2 == -1 || Local_85.f_2 == unk_0xD378D2332270959A())
						{
							unk_0x1886753DA39F38F8(Global_1935132, 0);
							unk_0x225EB85DBC38E707(Global_1935132, 1f);
							unk_0x061B1200C95204CB(&uLocal_434, 14);
						}
					}
					if (BitTest(uLocal_434, 8))
					{
						unk_0x061B1200C95204CB(&uLocal_434, 8);
					}
					if (func_198())
					{
						if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
						{
							if ((bLocal_432 && unk_0xFD017BA8C1B2996F()) || !bLocal_432)
							{
								if (!BitTest(Local_165[unk_0xD378D2332270959A() /*3*/].f_2, 1))
								{
									unk_0xECDAB41968FF21A8(&(Local_165[unk_0xD378D2332270959A() /*3*/].f_2), true);
								}
								if (BitTest(Local_165[unk_0xD378D2332270959A() /*3*/].f_2, 1))
								{
									if (Local_85.f_2 == unk_0xD378D2332270959A())
									{
										func_12();
										if (unk_0xCE4AAA035282336C(Global_1935132))
										{
											unk_0xBD91E7D4B770F97E(Global_1935132, 0);
											unk_0x45533C09A6C9B409(&Global_1935132);
										}
										unk_0xCD3C8E1022864F65(1);
										func_197(12, 1);
										func_195();
										unk_0xA7225B88CE344621(unk_0x93E99A2DBCBA9CFA(), 1);
										unk_0xECDAB41968FF21A8(&uLocal_434, 25);
										unk_0xF82BC5193AF62796(1274.854f, -1721.154f, 53.6808f, 2f, 1, 0, 0, 1);
										if (bLocal_433)
										{
											func_194();
											uLocal_442 = unk_0x2B4645565204EA06("SECURITY_CAM");
										}
										Local_165[unk_0xD378D2332270959A() /*3*/].f_1 = 1;
									}
									else if (Local_85.f_2 != -1)
									{
										if (!BitTest(uLocal_434, 13))
										{
											if (func_188(1, 1, 1, 1))
											{
												func_187("FM_LCUT_LRB", -1);
												unk_0xECDAB41968FF21A8(&uLocal_434, 13);
											}
										}
									}
								}
							}
						}
						else if (!unk_0xF0E4B64AC0B5660E())
						{
							if (!func_186("FM_LCUT_LCP"))
							{
								func_187("FM_LCUT_LCP", -1);
							}
						}
					}
					else
					{
						if (!BitTest(uLocal_434, 9))
						{
							if (func_188(0, 1, 1, 1))
							{
								if (!func_225())
								{
									func_187("FM_LCUT_LBLP", -1);
									if (!unk_0xCE4AAA035282336C(Global_1935132))
									{
										Global_1935132 = unk_0x7F0C74F83813841D(Global_1935133);
										unk_0xEA4639F4444B7003(Global_1935132, 77);
										unk_0x37B37B8045788E6A(Global_1935132, 1);
										unk_0xD48486CAAB189227(Global_1935132, 7000);
									}
									unk_0xECDAB41968FF21A8(&uLocal_434, 2);
									unk_0xECDAB41968FF21A8(&uLocal_434, 9);
								}
							}
						}
						if (BitTest(Local_165[unk_0xD378D2332270959A() /*3*/].f_2, 1))
						{
							unk_0x061B1200C95204CB(&(Local_165[unk_0xD378D2332270959A() /*3*/].f_2), true);
						}
						if (BitTest(uLocal_434, 13))
						{
							unk_0x061B1200C95204CB(&uLocal_434, 13);
						}
					}
				}
			}
			else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
				{
					if (unk_0x35DF833D93BCC488())
					{
						if (((((!func_228(unk_0x93E99A2DBCBA9CFA(), 1, 0) && !func_227()) && func_226() == 0) && !func_225()) && !func_221()) && !func_199(0))
						{
							if (!func_185(&uLocal_437))
							{
								func_7(&uLocal_437, 0, 0);
							}
							else if (func_184(&uLocal_437, 10, 0))
							{
								unk_0x061B1200C95204CB(&uLocal_434, 5);
								unk_0x061B1200C95204CB(&uLocal_434, 2);
								unk_0x061B1200C95204CB(&uLocal_434, 3);
								unk_0x061B1200C95204CB(&uLocal_434, 8);
								func_183(&uLocal_437);
								if (!unk_0xCE4AAA035282336C(Global_1935132))
								{
									Global_1935132 = unk_0x7F0C74F83813841D(Global_1935133);
									unk_0xEA4639F4444B7003(Global_1935132, 77);
								}
							}
						}
					}
				}
			}
			if (bLocal_432)
			{
			}
			break;
		
		case 1:
			if (bLocal_432)
			{
				if (func_182())
				{
					Local_165[unk_0xD378D2332270959A() /*3*/].f_1 = 2;
				}
			}
			else if (func_142())
			{
				Local_165[unk_0xD378D2332270959A() /*3*/].f_1 = 2;
			}
			break;
		
		case 2:
			if (func_87())
			{
				Local_165[unk_0xD378D2332270959A() /*3*/].f_1 = 3;
			}
			break;
		
		case 3:
			if (!BitTest(Local_165[unk_0xD378D2332270959A() /*3*/].f_2, 0))
			{
				unk_0xECDAB41968FF21A8(&(Local_165[unk_0xD378D2332270959A() /*3*/].f_2), false);
			}
			break;
	}
	if (func_86())
	{
		if (unk_0xCE4AAA035282336C(Global_1935132))
		{
			unk_0x45533C09A6C9B409(&Global_1935132);
		}
		func_12();
		uVar0 = Global_1665626[func_85(-1)];
		unk_0xECDAB41968FF21A8(&uVar0, 2);
		unk_0xECDAB41968FF21A8(&(Local_165[unk_0xD378D2332270959A() /*3*/].f_2), false);
		func_84(1304, uVar0, -1, 1);
		func_197(12, 0);
		if (bLocal_432)
		{
			unk_0x423A98584B1756BF();
		}
		func_75();
		func_20(1);
	}
}

void func_20(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1574612)
	{
		if (!func_74())
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
	iVar1 = func_71(unk_0x93E99A2DBCBA9CFA(), bParam0);
	iVar2 = func_69(iVar1, bParam0);
	if (!func_68(-1))
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
		iVar3 = func_67(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_65(iVar4))
			{
				func_56(iVar4, 1);
			}
		}
		iVar4++;
	}
	if (!func_55(1))
	{
		func_48(func_49(59, 0, 0), 0);
		func_43(func_49(135, 0, 0), 1);
		func_41(func_49(22, 0, 0), func_49(73, 0, 0));
	}
	else
	{
		func_41(0, 0);
	}
	if (func_40())
	{
		if (func_39(77, -1))
		{
			func_38(1);
			func_37(1);
		}
	}
	if (func_36() || func_35())
	{
		func_33(77, 1, -1, 1);
		if (unk_0xA26A9A07F761D8F8())
		{
			func_21(28, 1, 0);
			func_21(29, 1, 0);
			func_21(30, 1, 0);
			func_21(31, 1, 0);
			func_21(32, 1, 0);
			func_21(33, 1, 0);
			func_21(34, 1, 0);
			func_21(35, 1, 0);
			func_21(36, 1, 0);
			func_21(37, 1, 0);
			func_21(38, 1, 0);
			func_21(58, 1, 0);
		}
	}
	if (func_49(21, 0, 0))
	{
		unk_0xAEF2B1720C0AF62C(0);
	}
	Global_1057411 = 0;
}

void func_21(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_32(iParam0, 0, 0))
		{
			if (iParam2 && Global_100733.f_18[iParam0])
			{
				if (func_31(iParam0) == 3 && !func_30(iParam0))
				{
					func_29(iParam0);
					func_28(iParam0, 0, 0);
					func_23(iParam0, 1, 0);
					func_22(iParam0);
				}
				else
				{
					func_28(iParam0, 1, 0);
					func_22(iParam0);
				}
			}
			else
			{
				func_28(iParam0, 0, 0);
				func_23(iParam0, 1, 0);
				func_22(iParam0);
			}
		}
		else
		{
			func_23(iParam0, 1, 0);
			func_22(iParam0);
		}
	}
	else if (func_32(iParam0, 0, 0))
	{
		func_23(iParam0, 0, 0);
		func_23(iParam0, 1, 0);
		func_22(iParam0);
	}
}

void func_22(int iParam0)
{
	Global_100733.f_202[iParam0] = 1;
	Global_100733.f_201 = 1;
}

void func_23(int iParam0, bool bParam1, bool bParam2)
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
		if (func_27() == 0)
		{
			iVar0 = func_25(func_26(iParam0), -1, 0);
			unk_0x061B1200C95204CB(&iVar0, bParam1);
			func_24(func_26(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

void func_24(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_85(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_25(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_85(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_26(int iParam0)
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

int func_27()
{
	return Global_32163;
}

void func_28(int iParam0, bool bParam1, bool bParam2)
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
		if (func_27() == 0)
		{
			iVar0 = func_25(func_26(iParam0), -1, 0);
			unk_0xECDAB41968FF21A8(&iVar0, bParam1);
			func_24(func_26(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

void func_29(int iParam0)
{
	if (Global_100733.f_18[iParam0])
	{
		func_28(iParam0, 10, 1);
		func_28(iParam0, 19, 1);
	}
}

bool func_30(int iParam0)
{
	return func_32(iParam0, 5, 1);
}

int func_31(int iParam0)
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

int func_32(int iParam0, int iParam1, bool bParam2)
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
		if (func_27() == 0)
		{
			return BitTest(func_25(func_26(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_34())
	{
		iVar0 = Global_2848280[iParam0 /*3*/][func_85(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD19BD90E0B76FB05(iVar0, iParam1, iParam3);
		}
	}
}

int func_34()
{
	return 1;
	return 0;
}

bool func_35()
{
	return Global_1575048;
}

bool func_36()
{
	return Global_1575050;
}

void func_37(bool bParam0)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	func_21(28, bParam0, 0);
	func_21(30, bParam0, 0);
	func_21(31, bParam0, 0);
	func_21(33, bParam0, 0);
	func_21(34, bParam0, 0);
	func_21(38, bParam0, 0);
	func_21(58, bParam0, 0);
}

void func_38(bool bParam0)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	func_21(29, bParam0, 0);
	func_21(32, bParam0, 0);
	func_21(36, bParam0, 0);
	func_21(35, bParam0, 0);
	func_21(37, bParam0, 0);
}

int func_39(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2848280[iParam0 /*3*/][func_85(iParam1)];
	if (unk_0x494B367FE0CBD765(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_40()
{
	if (!func_74())
	{
		return 0;
	}
	return 1;
}

void func_41(bool bParam0, bool bParam1)
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
	func_21(0, bParam0, 1);
	func_21(1, bParam0, 1);
	func_21(2, bParam0, 1);
	func_21(3, bParam0, 1);
	func_21(4, bParam0, 1);
	func_21(5, bParam0, 1);
	func_21(6, bParam0, 1);
	func_21(7, bParam0, bVar0);
	func_21(8, bParam0, 1);
	func_21(9, bParam0, 1);
	func_21(10, bParam0, 1);
	func_21(11, bParam0, 1);
	func_21(12, bParam0, bVar0);
	func_21(13, bParam0, 1);
	func_21(21, bParam0, 1);
	func_21(14, bParam0, 1);
	func_21(15, bParam0, 1);
	func_21(16, bParam0, 1);
	func_21(17, bParam0, 1);
	func_21(18, bParam0, 1);
	func_21(19, bParam0, 1);
	func_21(20, bParam0, 1);
	func_21(22, bParam0, 1);
	func_21(23, bParam0, 1);
	func_21(24, bParam0, 1);
	func_21(25, bParam0, 1);
	func_21(26, bParam0, 1);
	func_21(27, bParam0, 1);
	func_42(1, !bParam1);
	if (!bVar0)
	{
		func_29(12);
	}
}

void func_42(int iParam0, bool bParam1)
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

void func_43(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	uVar0 = func_47(0);
	if (Global_262145.f_63 == 1 && func_49(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_21(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_30(44))
		{
			func_29(44);
		}
	}
	if (bParam0)
	{
		if (func_44(0) > 1)
		{
			unk_0xECDAB41968FF21A8(&(Global_2793044.f_1828), 10);
		}
	}
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (Global_1945075[iParam0 /*8*/] == -1)
	{
		iVar0 = func_25(func_46(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_45(iParam0, 0);
			iVar0 = 0;
		}
		Global_1945075[iParam0 /*8*/] = iVar0;
	}
	return Global_1945075[iParam0 /*8*/];
}

void func_45(int iParam0, int iParam1)
{
	Global_1945075[iParam0 /*8*/] = iParam1;
	func_24(func_46(iParam0), iParam1, -1, 1, 0);
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12386;
		
		default:
	}
	return 12386;
}

int func_47(bool bParam0)
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!BitTest(Global_2793044.f_1819, 26))
		{
			uVar0 = func_25(1192, -1, 0);
			if (!BitTest(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_39(122, -1);
}

void func_48(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	uVar0 = func_47(0);
	func_21(39, bParam0, 0);
	func_21(40, bParam0, 0);
	func_21(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_21(43, bParam0, 0);
		func_21(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_30(39))
		{
			func_29(39);
		}
		if (!func_30(40))
		{
			func_29(40);
		}
		if (!func_30(41))
		{
			func_29(41);
		}
		if (!func_30(42))
		{
			func_29(42);
		}
		if (!func_30(43))
		{
			func_29(43);
		}
	}
}

int func_49(int iParam0, bool bParam1, bool bParam2)
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
		if (func_51(unk_0x93E99A2DBCBA9CFA(), 85))
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
	if (func_36() || func_35())
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
			if (func_50())
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

int func_50()
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
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	uVar0 = Global_1665626[func_85(-1)];
	if (BitTest(uVar0, 7))
	{
		unk_0xECDAB41968FF21A8(&(Global_2793044.f_1824), 23);
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	if (!func_40())
	{
		return 0;
	}
	if (func_54())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_52(&(Global_1853910[iParam0 /*862*/].f_792), func_53(iParam1));
}

var func_52(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_53(int iParam0)
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

bool func_54()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 3);
}

int func_55(int iParam0)
{
	return 0;
}

void func_56(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_64(-1))
			{
				if (!func_74())
				{
					return;
				}
			}
			if (!func_64(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_63() && !func_62())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_61())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_64(-1))
				{
					if (!func_57())
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

int func_57()
{
	var uVar0;
	
	if (func_236(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	uVar0 = Global_1665626[func_85(-1)];
	if (BitTest(uVar0, 2))
	{
		func_58(1);
		return 1;
	}
	return 0;
}

void func_58(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_139, 25))
		{
			func_59(unk_0x93E99A2DBCBA9CFA(), 12);
			unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_139), 25);
		}
	}
	else if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_139, 25))
	{
		unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_139), 25);
	}
}

void func_59(int iParam0, int iParam1)
{
	func_60(&(Global_1853910[iParam0 /*862*/].f_792), func_53(iParam1));
}

int func_60(var uParam0, var uParam1)
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

int func_61()
{
	var uVar0;
	
	if (BitTest(Global_2793044.f_1824, 6))
	{
		return 1;
	}
	uVar0 = Global_1665626[func_85(-1)];
	if (BitTest(uVar0, 0))
	{
		if (!BitTest(Global_2793044.f_1824, 6))
		{
			unk_0xECDAB41968FF21A8(&(Global_2793044.f_1824), 6);
		}
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return 0;
}

bool func_62()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 7);
}

int func_63()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return func_39(121, -1);
}

bool func_64(int iParam0)
{
	return func_39(123, iParam0);
}

int func_65(int iParam0)
{
	var uVar0;
	bool bVar1;
	
	if (func_36())
	{
		return 1;
	}
	if (func_35())
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
			uVar0 = func_25(func_66(iParam0), -1, 0);
			if (BitTest(uVar0, bVar1))
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

int func_66(int iParam0)
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

int func_67(int iParam0)
{
	if (func_36())
	{
		return 1;
	}
	if (func_35())
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
			if (!func_64(-1))
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

int func_68(int iParam0)
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return func_39(119, iParam0);
}

int func_69(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_70(iParam0, 0);
}

int func_70(int iParam0, int iParam1)
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

int func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_72(iParam0);
}

int func_72(int iParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			{
				return Global_1665638[func_85(-1)];
			}
			else if (func_73(iParam0))
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_85(-1)];
	}
	return 0;
}

int func_73(int iParam0)
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

int func_74()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return func_39(120, -1);
}

void func_75()
{
	if (!func_83(1, -1))
	{
		func_81(1, -1);
	}
	if (func_225() && func_27() == 0)
	{
	}
	else
	{
		unk_0xAD37BC3B140F441C(0);
	}
	if (func_80(1))
	{
		unk_0xD0AF4BC30FE7D28F(1);
	}
	else
	{
		unk_0xD0AF4BC30FE7D28F(0);
	}
	Global_2683862.f_743 = 0;
	if (func_76())
	{
		if (!func_39(133, -1))
		{
			func_33(133, 1, -1, 1);
		}
	}
}

int func_76()
{
	if (func_78() && func_77(0))
	{
		return 1;
	}
	return 0;
}

var func_77(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_78()
{
	return func_77(func_79() + 1);
}

int func_79()
{
	return Global_1574918;
}

bool func_80(int iParam0)
{
	return Global_1935368.f_16[iParam0 /*44*/].f_3;
}

void func_81(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_79();
	}
	Global_1665487 = 0;
	if (unk_0x7D33DF1E1089E1D1() == 0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0:
			unk_0xB61FAFE7FDE57FC8(0, iParam1);
			uVar1 = func_82(iParam1);
			iVar0 = unk_0x516080EA609481E1(uVar1);
			break;
		
		default:
			uVar1 = func_82(iParam1);
			iVar0 = unk_0x516080EA609481E1(uVar1);
			if (!BitTest(iVar0, bParam0))
			{
				unk_0xECDAB41968FF21A8(&iVar0, bParam0);
				unk_0xB61FAFE7FDE57FC8(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_33(120, 0, iParam1, 1);
			func_33(124, 0, iParam1, 1);
			func_33(115, 0, iParam1, 1);
			func_33(119, 0, iParam1, 1);
			func_33(121, 0, iParam1, 1);
			func_33(122, 0, iParam1, 1);
			func_33(125, 0, iParam1, 1);
			func_24(1304, 0, iParam1, 1, 0);
			func_24(7236, 0, iParam1, 1, 0);
			break;
	}
}

int func_82(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_79();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

bool func_83(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_79();
	}
	uVar0 = func_82(iParam1);
	uVar1 = unk_0x516080EA609481E1(uVar0);
	return BitTest(uVar1, iParam0);
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2805027[iParam0 /*3*/][func_85(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, uParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_85(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_85(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_85(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_85(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_85(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_85(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_85(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_85(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_85(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_85(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_85(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_85(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_85(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_85(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_85(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_85(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_85(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_85(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_85(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_85(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_85(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_85(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_85(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_85(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851323[0 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851323[1 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851323[2 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851323[3 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851502[func_85(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_85(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_85(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_85(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_85(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_85(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_85(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_85(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851411[0 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851411[1 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851411[2 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851411[3 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851411[4 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851505[0 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851505[1 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851505[2 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851505[3 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851505[4 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851521[0 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851521[1 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851521[2 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851521[3 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851521[4 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851411[5 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851323[4 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851537[func_85(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851546[func_85(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851540[func_85(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851549[func_85(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851543[func_85(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851552[func_85(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851555[func_85(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851411[6 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851323[5 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851411[7 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851323[6 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851411[8 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851323[7 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851411[9 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851323[8 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851411[10 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851323[9 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851411[11 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851323[10 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851411[12 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851323[11 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851411[13 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851323[12 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851411[14 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851323[13 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851411[15 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851323[14 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851411[16 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851323[15 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851411[17 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851323[16 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851323[17 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851323[18 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851323[19 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851323[20 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851558[func_85(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851561[func_85(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851564[func_85(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851567[func_85(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851570[func_85(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851573[func_85(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851576[func_85(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851579[func_85(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851582[func_85(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851585[func_85(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851588[func_85(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851591[func_85(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851594[func_85(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851597[func_85(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851323[21 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851411[23 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851323[22 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851411[24 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851323[23 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851323[24 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851323[25 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851411[27 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851323[26 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851411[28 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851323[27 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_86()
{
	if (BitTest(Local_165[unk_0xD378D2332270959A() /*3*/].f_2, 0))
	{
		return 1;
	}
	return 0;
}

int func_87()
{
	switch (iLocal_262)
	{
		case 0:
			if (!BitTest(uLocal_434, 18))
			{
				if (!unk_0x66599E73DBA5A850(uLocal_263))
				{
					uLocal_436 = unk_0x53B496178AE44636(uLocal_263);
					unk_0x3BCF1F6A3573A1DF(uLocal_436, 1);
					unk_0x4049FDC177C92D4B(uLocal_436, "FM_LEST_BLP");
					func_136("FM_LEST_GTL", 0);
					unk_0xECDAB41968FF21A8(&uLocal_434, 18);
				}
			}
			if (!BitTest(uLocal_434, 20))
			{
				if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					if (!unk_0x66599E73DBA5A850(uLocal_263))
					{
						if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1272.747f, -1715.223f, 53.45897f, 1273.732f, -1717.427f, 55.70897f, 2f, 0, 1, 0))
						{
							uLocal_266 = unk_0x191673E3F99212B2(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
							unk_0x468D976993BF7FE1(uLocal_263, uLocal_266, "missfinale_c2leadinoutfin_c_int", "_LEADIN_ACTION_LESTER", 1000f, -8f, 5, 16, 1148846080, 0);
							unk_0xA2CBB04560DD6361(uLocal_265, uLocal_266, "_LEADIN_ACTION_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 4, 1148846080);
							unk_0xECDAB41968FF21A8(&uLocal_434, 20);
						}
					}
				}
			}
			if (!BitTest(uLocal_434, 3))
			{
				unk_0x2A3302E8B9D69CC9(sLocal_435, 8);
				unk_0xECDAB41968FF21A8(&uLocal_434, 3);
			}
			else if (!BitTest(uLocal_434, 10))
			{
				if (unk_0x3B7E6BE32C24780B())
				{
					unk_0x07695A0DBD6AE9F8("MP_1", 0, 1);
					unk_0xECDAB41968FF21A8(&uLocal_434, 10);
				}
			}
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1275.095f, -1715.769f, 53.70897f, 1274.382f, -1714.219f, 56.02147f, 1.375f, 0, 1, 0))
				{
					if (BitTest(uLocal_434, 10))
					{
						iLocal_262++;
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xFD017BA8C1B2996F())
			{
				if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == joaat("mp_f_freemode_01"))
					{
						unk_0x970443E58680427C(unk_0xC1A5EC5C986B98AD(), "MP_1", 0, 0, 64);
					}
					else
					{
						unk_0x970443E58680427C(unk_0xC1A5EC5C986B98AD(), "MP_1", 0, 0, 64);
					}
				}
				func_135(1);
				unk_0x2C3ECEEB3179ED02(0);
				unk_0x83F2F4191F952DC5(0);
				func_126(unk_0x93E99A2DBCBA9CFA(), 0, 32772, 0);
				func_122(0);
				iLocal_262++;
			}
			break;
		
		case 2:
			if (unk_0x2FECE8D166B3056B())
			{
				func_118();
				iLocal_262++;
			}
			break;
		
		case 3:
			if (unk_0x2FECE8D166B3056B())
			{
				func_117();
			}
			else
			{
				iLocal_262++;
			}
			break;
		
		case 4:
			if (iLocal_440)
			{
				if (!unk_0x34641C4C8576592F())
				{
					if (unk_0x72474BA05A104E1E() || unk_0x984CA71F26DF483C())
					{
						unk_0x78DD793477D04C42(500);
					}
					iLocal_440 = 0;
				}
			}
			else if (unk_0xD76B5D89D87154D6())
			{
				func_90(1, 1, 0, 1);
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), true, 0);
				unk_0x83F2F4191F952DC5(1);
				if (BitTest(uLocal_434, 25))
				{
					unk_0xA7225B88CE344621(unk_0x93E99A2DBCBA9CFA(), 0);
				}
				if (iLocal_439 != 0)
				{
					unk_0x4D14173532616448(iLocal_439);
				}
				unk_0x061B1200C95204CB(&(Local_165[unk_0xD378D2332270959A() /*3*/].f_2), true);
				func_88();
				iLocal_262++;
			}
			break;
		
		case 5:
			return 1;
			break;
	}
	if (!BitTest(uLocal_434, 11))
	{
		if (unk_0x42C63C7AA899C5C8("MP_1", 0))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), 1275.219f, -1722.503f, 53.655f, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), 228.4235f);
				unk_0x724FFAED1C56CE2B(unk_0xC1A5EC5C986B98AD(), false, 0);
				unk_0xAABD7B0753C5C286(0f);
				unk_0xEAB390443C680F72(0f, 1065353216);
				unk_0xECDAB41968FF21A8(&uLocal_434, 11);
			}
		}
	}
	if (!BitTest(uLocal_434, 26))
	{
		if (iLocal_262 > 2)
		{
			if (unk_0xD73EA79D6A369031(0))
			{
				if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					unk_0x724FFAED1C56CE2B(unk_0xC1A5EC5C986B98AD(), true, 0);
					unk_0xAABD7B0753C5C286(0f);
					unk_0xEAB390443C680F72(0f, 1065353216);
					unk_0xECDAB41968FF21A8(&uLocal_434, 26);
				}
			}
		}
	}
	if (BitTest(uLocal_434, 19))
	{
		unk_0x8B438725D591ED78(0, 37, 1);
		unk_0x8B438725D591ED78(0, 14, 1);
		unk_0x8B438725D591ED78(0, 15, 1);
	}
	return 0;
}

void func_88()
{
	int iVar0;
	
	iVar0 = func_89(53);
	Global_2645068[iVar0 /*83*/] = 53;
	StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645068[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645068[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_90(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_115();
	if (bParam0)
	{
		func_113(1);
		unk_0xCD3C8E1022864F65(1);
	}
	unk_0x8581263F2F024518();
	func_110();
	unk_0xB147C57FEA0EBA61(0);
	func_106(0, 1, 1, 0, 0, bParam2, 0);
	func_105();
	func_104(12, 0, -1);
	func_103(1);
	unk_0xE927736B0094B990(0, -1);
	unk_0x61F7D56FFAFBF706(1);
	unk_0xB1A691274215E4CE(1);
	func_102();
	unk_0x08F0D7975ABD9F5E(1);
	if (unk_0xA26A9A07F761D8F8())
	{
		if (bParam3)
		{
			if (unk_0x6B834C9B3C898679())
			{
				unk_0x953382BBC2544902(0, 0);
			}
		}
	}
	func_135(0);
	if (((((func_225() == 0 && func_101() == 0) && iParam1) && !func_99(unk_0x93E99A2DBCBA9CFA())) && !unk_0x58A962BEF2DDE1DF()) && func_97())
	{
		func_126(unk_0x93E99A2DBCBA9CFA(), 1, 0, 0);
	}
	Global_2672505.f_3541 = 0;
	func_91();
}

void func_91()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0xA26A9A07F761D8F8() && func_185(&Global_2802588))
	{
		if (!func_184(&Global_2802588, 3500, 1) || unk_0xD451220300531739(unk_0x93E99A2DBCBA9CFA()))
		{
			if (!func_96())
			{
				if (unk_0x72474BA05A104E1E())
				{
					func_95(&Global_2802588, 1, 0);
				}
				else if (!func_93(unk_0x93E99A2DBCBA9CFA(), 0))
				{
					if (unk_0xF5F493B789EA063E(unk_0xC1A5EC5C986B98AD(), joaat("script_task_parachute")) != 1 && unk_0xF5F493B789EA063E(unk_0xC1A5EC5C986B98AD(), joaat("script_task_parachute")) != 0)
					{
						unk_0x92904A44D6F765F5(1);
						unk_0x0EF6003F5941AD7E(unk_0x93E99A2DBCBA9CFA(), 1);
					}
					unk_0x312E265D2DE9D3DD(unk_0xC1A5EC5C986B98AD(), 255, 0);
				}
			}
			else
			{
				func_95(&Global_2802588, 1, 0);
			}
		}
		else
		{
			if (unk_0xA26A9A07F761D8F8())
			{
				unk_0x70E20EBF87C51C88(unk_0xC1A5EC5C986B98AD());
			}
			func_183(&Global_2802588);
		}
	}
	if (Global_2802592 > 0)
	{
		bVar0 = false;
		while (bVar0 < 32)
		{
			if (BitTest(Global_2802592, bVar0))
			{
				bVar1 = unk_0xADCF72047FEB806E(bVar0);
				if (func_4(bVar1, 1, 1))
				{
					func_92(bVar1);
				}
			}
			bVar0++;
		}
	}
}

void func_92(bool bParam0)
{
	if (BitTest(Global_2802592, bParam0) && unk_0xA26A9A07F761D8F8())
	{
		if (!func_184(&(Global_2802593[bParam0 /*2*/]), 3500, 1) || unk_0xD451220300531739(bParam0))
		{
			if (!func_96())
			{
				if (unk_0x72474BA05A104E1E())
				{
					func_95(&(Global_2802593[bParam0 /*2*/]), 1, 0);
				}
				else if (!func_93(bParam0, 0))
				{
					unk_0x0EF6003F5941AD7E(bParam0, 1);
					if (!unk_0x055111B11E6624FD(unk_0xF2CFBB1105511E1A(bParam0), 0))
					{
						unk_0x312E265D2DE9D3DD(unk_0xF2CFBB1105511E1A(bParam0), 255, 0);
					}
				}
			}
			else
			{
				func_95(&(Global_2802593[bParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!unk_0x055111B11E6624FD(unk_0xF2CFBB1105511E1A(bParam0), 0))
			{
				unk_0x70E20EBF87C51C88(unk_0xF2CFBB1105511E1A(bParam0));
			}
			func_183(&(Global_2802593[bParam0 /*2*/]));
			unk_0x061B1200C95204CB(&Global_2802592, bParam0);
		}
	}
}

bool func_93(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_94(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			bVar0 = unk_0x4292F1DE8BA2D22E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_94(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

void func_95(var uParam0, bool bParam1, bool bParam2)
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

int func_96()
{
	if (unk_0x2FECE8D166B3056B() || unk_0x6B834C9B3C898679())
	{
		return 1;
	}
	return 0;
}

int func_97()
{
	if (func_98() == 0)
	{
		return 1;
	}
	return 0;
}

int func_98()
{
	return Global_1574632.f_18;
}

int func_99(int iParam0)
{
	if (func_93(iParam0, 0))
	{
		return 1;
	}
	if (func_100())
	{
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_100()
{
	return BitTest(Global_2621446, 3);
}

int func_101()
{
	return BitTest(Global_2683862, 7);
}

void func_102()
{
	Global_23131.f_5 = 0;
}

void func_103(int iParam0)
{
	Global_2793044.f_4628 = iParam0;
}

void func_104(bool bParam0, bool bParam1, int iParam2)
{
	switch (bParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1653913.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xECDAB41968FF21A8(&(Global_1653913.f_1046), bParam0);
			}
			else
			{
				unk_0x061B1200C95204CB(&(Global_1653913.f_1046), bParam0);
			}
			break;
	}
}

void func_105()
{
	func_103(1);
	func_104(4, 0, -1);
	func_104(6, 0, -1);
	func_104(7, 0, -1);
	func_104(3, 0, -1);
	func_104(1, 0, -1);
	func_104(2, 0, -1);
	func_104(11, 0, -1);
	func_104(13, 0, -1);
	func_104(14, 0, -1);
	func_104(16, 0, -1);
}

void func_106(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_135(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
			{
				unk_0xD6625E11483B2324(0);
			}
			if (!func_109())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_108(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_135(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0xDB4D82037BD5A339();
		}
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_108(0, iParam3, iParam2, 0);
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((((((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_99(unk_0x93E99A2DBCBA9CFA())) && !func_93(unk_0x93E99A2DBCBA9CFA(), 0)) && !func_107()) && !bParam4) && !bParam5) && !unk_0x8253CEEA17ED481B())
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_99(unk_0x93E99A2DBCBA9CFA())) && !bParam4) && !bParam5)
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_107()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

int func_108(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x39D9A0A5E812BD25() != iParam0 && uParam2)
		{
			unk_0xA740EFFFBB4FED55(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_109()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_110()
{
	func_111(0);
}

void func_111(bool bParam0)
{
	if (bParam0)
	{
		func_112();
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			unk_0xECDAB41968FF21A8(&Global_8254, 16);
		}
		Global_20383.f_1 = 1;
		if (func_231(0))
		{
			func_122(0);
		}
	}
	else if (Global_20383.f_1 == 1)
	{
		if (!Global_20383.f_1 == 0)
		{
			Global_20383.f_1 = 3;
		}
	}
}

void func_112()
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}
}

void func_113(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112300)
	{
		unk_0x4F6F113654DD2FF9(iVar0, iParam0);
		func_114(iVar0);
		iVar0++;
	}
}

void func_114(int iParam0)
{
	Global_112300[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112300[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112300[iParam0 /*28*/].f_4), "", 64);
	Global_112300[iParam0 /*28*/].f_23 = 0;
	Global_112300[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112300[iParam0 /*28*/].f_27 = 0;
	Global_112300[iParam0 /*28*/].f_20 = 0;
	Global_112300[iParam0 /*28*/].f_22 = 0;
}

void func_115()
{
	if (!Global_1574747)
	{
		return;
	}
	func_116();
}

void func_116()
{
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
}

void func_117()
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 346, 1);
		if (unk_0x73A9A190149B93A1(unk_0x93E99A2DBCBA9CFA()))
		{
			if (unk_0xFD75FD38D5622C50(unk_0x93E99A2DBCBA9CFA()))
			{
			}
		}
	}
}

void func_118()
{
	var uVar0;
	
	if (unk_0xCE4AAA035282336C(uLocal_436))
	{
		unk_0x45533C09A6C9B409(&uLocal_436);
	}
	if (unk_0x7DE17ACDD8BA2642(uLocal_263))
	{
		uVar0 = uLocal_263;
		unk_0x782D744058B1DFA3(&uVar0);
	}
	if (unk_0x7DE17ACDD8BA2642(uLocal_265))
	{
		uVar0 = uLocal_265;
		unk_0x782D744058B1DFA3(&uVar0);
	}
	func_12();
	unk_0xE0A291F406691F03(func_119(12));
	unk_0xE0A291F406691F03(joaat("prop_wheelchair_01_s"));
	unk_0x0B34FA69ECCE3927("missfinale_c2leadinoutfin_c_int");
}

int func_119(int iParam0)
{
	if (!func_121(iParam0))
	{
		return func_120(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_120(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_121(int iParam0)
{
	return iParam0 < 3;
}

void func_122(int iParam0)
{
	if (func_125())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_124())
		{
			func_123(1, 1);
		}
		else
		{
			func_123(0, 0);
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
	if (!func_109())
	{
		Global_20383.f_1 = 3;
	}
}

void func_123(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_231(0))
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

bool func_124()
{
	return BitTest(Global_1962996, 5);
}

bool func_125()
{
	return BitTest(Global_1962996, 19);
}

void func_126(bool bParam0, bool bParam1, int iParam2, int iParam3)
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
		if (unk_0x9AA69AA7F99F66A2())
		{
			unk_0xD111D6644D1D5BD5(0);
		}
	}
	if (func_134())
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
	if (!unk_0xA26A9A07F761D8F8())
	{
		uVar0 = iParam2;
		unk_0xE333240A90F2FF3C(iParam0, bParam1, uVar0);
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
		if (iParam2 & 33554432 != 0 || unk_0x1758F8A8511510AB())
		{
			bVar1 = false;
		}
		if (!func_97())
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
		if (unk_0xE6DEE82DB0922DF0(iParam0) && (unk_0x48DC6A21D1CAD89C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x055111B11E6624FD(unk_0xF2CFBB1105511E1A(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0xF2CFBB1105511E1A(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0xA26A9A07F761D8F8())
				{
					unk_0x0D78C94B1B789F7C(1);
				}
				else if (bVar14 || (!func_93(unk_0x93E99A2DBCBA9CFA(), 0) && !func_100()))
				{
					unk_0x724FFAED1C56CE2B(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0xA26A9A07F761D8F8() && !bVar19)
					{
						unk_0x0D78C94B1B789F7C(0);
					}
					Global_2657589[bParam0 /*466*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_131(0, 0, 0);
					if (bVar25)
					{
						unk_0x3EF548873C55CA64();
					}
				}
				if (!func_130(uVar27) && !unk_0x24405041A9F1A910(uVar27))
				{
					if (!bVar22)
					{
						unk_0xDDE449983CE7572E(uVar27, true, 0);
					}
				}
				if (!unk_0xDC116D955A63BDBE(uVar27))
				{
					if (!bVar21)
					{
						unk_0x2718E9CC165A99F6(uVar27, false);
					}
					unk_0xAD02BD8A749B79F9(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x2718E9CC165A99F6(uVar27, false);
				}
				unk_0xD14067404D35AAE7(uVar27, true);
				unk_0xA7225B88CE344621(bParam0, 0);
				unk_0xD99DA01241D40C5D(bParam0, 0);
				if (unk_0x1951CE8AED052DA4(uVar27) && unk_0x655790C883F82CEB(uVar27))
				{
					unk_0xC7A494C74ED33C50(uVar27);
				}
				unk_0xAC2C285C82A9244C(uVar27, 1);
				if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) == 0)
				{
					func_129();
					func_128();
				}
				if (unk_0xCB964814D9915DE0())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x58A962BEF2DDE1DF())
				{
				}
				Global_2657589[bParam0 /*466*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635559.f_2681)
				{
					Global_2635559.f_2681 = 0;
				}
			}
			else
			{
				if (!func_130(uVar27) && !unk_0x24405041A9F1A910(uVar27))
				{
					if (!bVar22)
					{
						unk_0xDDE449983CE7572E(uVar27, !bVar15, 0);
					}
					if (!unk_0xDC116D955A63BDBE(uVar27))
					{
						if (!bVar21)
						{
							unk_0x2718E9CC165A99F6(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0xAD02BD8A749B79F9(uVar27, 1);
						}
					}
					if (func_127(Global_4718592.f_166301))
					{
						unk_0x2718E9CC165A99F6(uVar27, true);
					}
				}
				if (Global_1575035)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xA7225B88CE344621(bParam0, 0);
				}
				else
				{
					unk_0xA7225B88CE344621(bParam0, 1);
				}
				unk_0xD14067404D35AAE7(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x53E0F2012E168A73(uVar27) && !unk_0x3C3D6D026CF7F51B(uVar27, 0))
					{
						unk_0x35DD50D05C962B6A(uVar27);
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
			unk_0xE333240A90F2FF3C(bParam0, bParam1, iVar28);
		}
	}
}

bool func_127(int iParam0)
{
	return iParam0 == 17;
}

void func_128()
{
	struct<3> Var0;
	
	Global_2672505.f_1023 = 0;
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1030 = -1;
	Global_2672505.f_1031 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_129()
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_130(var uParam0)
{
	int iVar0;
	
	if (unk_0x3C3D6D026CF7F51B(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF5F493B789EA063E(uParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_131(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x055111B11E6624FD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x7DE17ACDD8BA2642(iParam1))
		{
			if (unk_0x60A06DE259634304(iParam1))
			{
				if (!unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), unk_0xB850F932D03EF34D(iParam1)))
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
				func_133();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x84365510DF670D46(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), true);
			}
		}
		if (func_93(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			unk_0xBD35A36DC2D7FB43(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7C5666BA9400B9BF(iParam0, iParam1);
		}
		unk_0xC05C32F03C89FD59(iParam0, iParam1);
		func_132(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD19BD90E0B76FB05(iVar0, iParam1, 1);
	}
}

void func_133()
{
	int iVar0;
	
	if (!unk_0x8253CEEA17ED481B())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x80A3F4E694565F6A(iVar0);
				iVar0++;
			}
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 2);
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), false);
		}
	}
}

int func_134()
{
	if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, 13);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8253, 13);
	}
}

void func_136(char* sParam0, bool bParam1)
{
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return;
	}
	if (unk_0x57049FB1B412BAB7(sParam0) > 23)
	{
		return;
	}
	if (func_140(sParam0))
	{
		return;
	}
	func_13();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), unk_0x688846D56810779A(), 32);
	Global_1574757.f_9 = unk_0x14580F20CBCE4FA9(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_139();
	func_138(bParam1);
	func_137();
}

void func_137()
{
	unk_0xECDAB41968FF21A8(&(Global_1574757.f_59), true);
}

void func_138(bool bParam0)
{
	if (bParam0)
	{
		unk_0xECDAB41968FF21A8(&(Global_1574757.f_59), false);
		return;
	}
	unk_0x061B1200C95204CB(&(Global_1574757.f_59), false);
}

void func_139()
{
	Global_1574757.f_10 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), 86400000);
	Global_1574757.f_11 = unk_0x0DB7F8294D73598B();
}

bool func_140(char* sParam0)
{
	if (!func_18())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_141(uParam0);
	}
	if (unk_0x2AC37494BBF1DB16(uParam0))
	{
		return 0;
	}
	return unk_0x14580F20CBCE4FA9(sParam0) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_12));
}

bool func_141(char* sParam0)
{
	if (!func_18())
	{
		return 0;
	}
	if (unk_0x2AC37494BBF1DB16(uParam0))
	{
		return 0;
	}
	return unk_0x14580F20CBCE4FA9(sParam0) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_16));
}

int func_142()
{
	switch (iLocal_441)
	{
		case 0:
			if (!BitTest(uLocal_434, 25))
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 1);
				unk_0xECDAB41968FF21A8(&uLocal_434, 25);
			}
			if (unk_0x5FAF55B1F052A2E6(uLocal_442) && func_194())
			{
				func_175();
				func_174();
				func_171(0, 0, 1, 0, 1, 1, 0);
				func_126(unk_0x93E99A2DBCBA9CFA(), 0, 8196, 0);
				unk_0x5DB569D82FF62CD0(0, 1);
				unk_0x3298713EEACD1622(unk_0xC1A5EC5C986B98AD(), 1, 1);
				func_168(1, 1, 0);
				if (!unk_0x66599E73DBA5A850(uLocal_264))
				{
					unk_0xF82BC5193AF62796(1273.885f, -1718.004f, 53.7715f, 3f, 1, 0, 0, 0);
					unk_0x35DD50D05C962B6A(uLocal_264);
					unk_0xC2E3C377D893C17A(uLocal_264, 1275.256f, -1722.368f, 53.655f, 1, 0, 0, 1);
					unk_0x692C3FDAD7DB53CC(uLocal_264, 12.6638f);
					unk_0xC5F9EF8F410596F9(uLocal_264, joaat("MotionState_Walk"), 0, 0, 0);
					unk_0xBB6027D1D193CBA6(unk_0xC1A5EC5C986B98AD(), 0, 0);
					unk_0x8CC688927B10006C(uLocal_264, joaat("weapon_unarmed"), 1);
				}
				uLocal_443 = unk_0xDEE46CEB08617ECA("DEFAULT_SCRIPTED_CAMERA", 0);
				unk_0xEEF11E0DB5769366(uLocal_443, 1);
				unk_0xCE4412DC4B679860(uLocal_443, 1276.409f, -1719.918f, 56.1054f, -29.932f, 0f, 137.9132f, 50f, 0, 1, 1, 2);
				unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
				unk_0x9FD96C5DE6EDFC15(uLocal_442, "SET_DETAILS");
				func_167("FM_LEST_CAM");
				unk_0xAE3413B0654A0035();
				unk_0x9FD96C5DE6EDFC15(uLocal_442, "SET_LOCATION");
				func_167("FM_LEST_CAM2");
				unk_0xAE3413B0654A0035();
				if (unk_0x4F873840FC0FA8FE() == -1)
				{
					unk_0xADD48E9C814DB7CB("scanline_cam");
				}
				unk_0xECDAB41968FF21A8(&uLocal_434, 15);
				func_7(&uLocal_444, 0, 0);
				unk_0x852EC2A7DE66202D(func_119(12));
				unk_0x852EC2A7DE66202D(joaat("prop_wheelchair_01_s"));
				unk_0x28818732C8F0F80E("MissLester1ALeadInOut");
				unk_0xECDAB41968FF21A8(&uLocal_434, 23);
				if (!BitTest(uLocal_434, 17))
				{
					if (unk_0xB2FB1E59B6F71D15(208246292))
					{
						unk_0x289D605FFACC399B(208246292, 0, 0, 0);
						unk_0xECDAB41968FF21A8(&uLocal_434, 17);
					}
				}
				iLocal_441 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x66599E73DBA5A850(uLocal_264))
			{
				if (!BitTest(uLocal_434, 21))
				{
					if (func_184(&uLocal_444, 1000, 0))
					{
						unk_0x952D2B8A054C4FF8(uLocal_264, 1276.409f, -1719.918f, 56.1054f, -1, 0, 2);
						unk_0xECDAB41968FF21A8(&uLocal_434, 21);
					}
				}
			}
			if (func_184(&uLocal_444, 1500, 0))
			{
				if (BitTest(uLocal_434, 17))
				{
					if (!unk_0x66599E73DBA5A850(uLocal_264))
					{
						if (!unk_0x66599E73DBA5A850(uLocal_263))
						{
							if (func_148(&uLocal_267, "FM_1AU", "FM_LESTCUT", 7, 0, 0, 0))
							{
								func_183(&uLocal_444);
								func_7(&uLocal_444, 0, 0);
								iLocal_441++;
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x66599E73DBA5A850(uLocal_264))
			{
				if (!func_235())
				{
					unk_0x598D91BBD045C1F3(uLocal_264, 104, 1);
					unk_0xECDAB41968FF21A8(&uLocal_434, 22);
					unk_0x1F9F6C767BE640D5(uLocal_264);
					unk_0x7D9A648CC1936BDA(uLocal_264, 1273.576f, -1718.459f, 53.7715f, 1f, 20000, 1048576000, 0, 1193033728);
					func_183(&uLocal_444);
					func_7(&uLocal_444, 0, 0);
					iLocal_441++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x66599E73DBA5A850(uLocal_264))
			{
				if (func_184(&uLocal_444, 5000, 0) || unk_0x9DC9E896F189AAA5(uLocal_264, 1275.138f, -1718.426f, 53.72994f, 1272.451f, -1719.627f, 55.45897f, 1.5625f, 0, 1, 0))
				{
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), 1273.885f, -1718.004f, 53.7715f, 1, 0, 0, 1);
						unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), 21.8709f);
						unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
						if (unk_0x80A3F4E694565F6A(0) == 4)
						{
							unk_0xC5F9EF8F410596F9(unk_0xC1A5EC5C986B98AD(), joaat("MotionState_Aiming"), 0, 0, 0);
							unk_0xBB6027D1D193CBA6(unk_0xC1A5EC5C986B98AD(), 0, 0);
						}
					}
					func_147();
					func_90(1, 1, 0, 1);
					unk_0x061B1200C95204CB(&uLocal_434, 22);
					unk_0xAABD7B0753C5C286(0);
					unk_0xEAB390443C680F72(0, 1065353216);
					func_126(unk_0x93E99A2DBCBA9CFA(), 1, 0, 0);
					unk_0xA7225B88CE344621(unk_0x93E99A2DBCBA9CFA(), 1);
					unk_0xECDAB41968FF21A8(&uLocal_434, 25);
					unk_0xBA7BEE1631FAAB21(0);
					unk_0xECDAB41968FF21A8(&uLocal_434, 24);
					iLocal_441 = 99;
				}
			}
			break;
		
		case 99:
			if (unk_0xB2FB1E59B6F71D15(208246292))
			{
				unk_0x289D605FFACC399B(208246292, 4, 0, 0);
				unk_0xECDAB41968FF21A8(&uLocal_434, 19);
				iLocal_441 = 100;
			}
			break;
		
		case 100:
			return 1;
			break;
	}
	if (BitTest(uLocal_434, 15))
	{
		if (unk_0x5FAF55B1F052A2E6(uLocal_442))
		{
			unk_0x9FD96C5DE6EDFC15(uLocal_442, "SET_TIME");
			if (unk_0x30DFE1FFD2CC7420() >= 0 && unk_0x30DFE1FFD2CC7420() <= 12)
			{
				unk_0xC6A3EF6C4A3412C1(unk_0x30DFE1FFD2CC7420());
			}
			else
			{
				unk_0xC6A3EF6C4A3412C1((unk_0x30DFE1FFD2CC7420() - 12));
			}
			unk_0xC6A3EF6C4A3412C1(unk_0x77BBAAED3E25322C());
			unk_0xC6A3EF6C4A3412C1(0);
			if (unk_0x30DFE1FFD2CC7420() >= 0 && unk_0x30DFE1FFD2CC7420() < 12)
			{
				func_167("FM_LEST_AM");
			}
			else
			{
				func_167("FM_LEST_PM");
			}
			unk_0xAE3413B0654A0035();
			unk_0x55CCA1B8F633F628(uLocal_442, 255, 255, 255, 255, 0);
		}
	}
	if (BitTest(uLocal_434, 22))
	{
		if (!unk_0x66599E73DBA5A850(uLocal_264))
		{
			unk_0x598D91BBD045C1F3(uLocal_264, 104, 1);
			unk_0x992BB708B4B7A005(uLocal_264, 60, 1);
			unk_0x992BB708B4B7A005(uLocal_264, 342, 1);
			unk_0x992BB708B4B7A005(uLocal_264, 348, 1);
		}
	}
	if (BitTest(uLocal_434, 23))
	{
		if (func_143())
		{
			unk_0x061B1200C95204CB(&uLocal_434, 23);
		}
	}
	return 0;
}

int func_143()
{
	bool bVar0;
	
	unk_0x852EC2A7DE66202D(func_119(12));
	unk_0x852EC2A7DE66202D(joaat("prop_wheelchair_01_s"));
	unk_0x28818732C8F0F80E("missfinale_c2leadinoutfin_c_int");
	if (!unk_0x7DE17ACDD8BA2642(uLocal_263))
	{
		if (unk_0x0CBB7C273DED26E7(func_119(12)))
		{
			if (func_145(&iLocal_263, 12, 1276.39f, -1712.845f, 54.372f, 338.0729f, 1))
			{
				unk_0xC5B2830898581862(iLocal_263, 1);
				unk_0x226C3A30511D5DC4(iLocal_263, 1);
				func_144(&uLocal_267, 8, iLocal_263, "Lester", 0, 1);
				unk_0x0A3B6B850C2EC4FD(iLocal_263, 1, 0, 0, 0, 1);
			}
		}
	}
	if (!unk_0x7DE17ACDD8BA2642(uLocal_265))
	{
		if (unk_0x0CBB7C273DED26E7(joaat("prop_wheelchair_01_s")))
		{
			iLocal_265 = unk_0xF19D6C0E8B56BE23(joaat("prop_wheelchair_01_s"), 1276.39f, -1712.845f, 54.372f, 0, 0, 0);
		}
	}
	if (!unk_0x7DE17ACDD8BA2642(iLocal_263))
	{
		return 0;
	}
	if (!unk_0x66599E73DBA5A850(iLocal_263))
	{
		if (!unk_0x655790C883F82CEB(iLocal_263))
		{
			return 0;
		}
	}
	if (!unk_0x7DE17ACDD8BA2642(iLocal_265))
	{
		return 0;
	}
	if (!unk_0x2BBF749E555360DC("missfinale_c2leadinoutfin_c_int"))
	{
		return 0;
	}
	if (!unk_0x66599E73DBA5A850(iLocal_263))
	{
		uLocal_266 = unk_0x191673E3F99212B2(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
		unk_0x468D976993BF7FE1(iLocal_263, uLocal_266, "missfinale_c2leadinoutfin_c_int", "_LEADIN_LOOP1_LESTER", 1000f, -8f, 5, 0, 1148846080, 0);
		unk_0xA2CBB04560DD6361(iLocal_265, uLocal_266, "_LEADIN_LOOP1_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, -8f, 4, 1148846080);
		unk_0x5F243F8265BB664F(uLocal_266, 1);
		bVar0 = true;
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_144(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_145(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_121(iParam1))
	{
		iVar0 = func_119(iParam1);
		unk_0x852EC2A7DE66202D(iVar0);
		if (unk_0x0CBB7C273DED26E7(iVar0))
		{
			if (unk_0x7DE17ACDD8BA2642(*uParam0))
			{
				unk_0xE9C250FA35A936C8(uParam0);
			}
			*uParam0 = unk_0x69FDD9508259E5B5(26, iVar0, Param2, fParam5, 0, 0);
			unk_0x87EDBB907BE25521(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xAC464F61BE9FD50D(*uParam0, 3) == 0)
				{
					unk_0xFECAE061D8C80757(*uParam0, 5, 2, 0, 0);
				}
			}
			func_146(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0xE0A291F406691F03(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_146(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_96515[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_147()
{
	var uVar0;
	
	if (unk_0xF57C1326FD40C8A7(uLocal_443))
	{
		unk_0xEEF11E0DB5769366(uLocal_443, 0);
		unk_0x42B9FA814615C4F9(uLocal_443, 0);
	}
	unk_0x061B1200C95204CB(&uLocal_434, 15);
	unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
	if (unk_0x7DE17ACDD8BA2642(uLocal_264))
	{
		uVar0 = iLocal_264;
		unk_0x782D744058B1DFA3(&uVar0);
	}
	unk_0xD0AE101DBAA43C98(&uLocal_442);
	unk_0xA2EC5ACB2B5D92A4();
}

bool func_148(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_166(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_149(sParam2, iParam3, 0);
}

int func_149(char* sParam0, int iParam1, bool bParam2)
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
					func_165();
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
		if (func_164(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_163();
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
				func_157();
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
				if (func_156())
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
			if (func_109())
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
			func_155();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_154();
		func_150();
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
		func_165();
	}
	return 0;
}

void func_150()
{
	if (!func_151())
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

int func_151()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_153())
	{
		return 0;
	}
	if (func_152(unk_0x93E99A2DBCBA9CFA()))
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

bool func_152(int iParam0)
{
	return func_10(iParam0, 20);
}

int func_153()
{
	return -1;
}

void func_154()
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

void func_155()
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

int func_156()
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

void func_157()
{
	if (func_162(14))
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
		Global_20383 = func_158();
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

var func_158()
{
	func_159();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_159()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_161(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_160(unk_0xC1A5EC5C986B98AD());
			if (func_121(iVar0) && (!func_162(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_121(Global_113648.f_2365.f_539.f_4321))
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

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_161(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_161(int iParam0)
{
	if (func_121(iParam0))
	{
		return func_120(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_162(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_163()
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

bool func_164(int iParam0, int iParam1)
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

void func_165()
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

void func_166(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = uParam5;
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

void func_167(char* sParam0)
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_168(bool bParam0, int iParam1, bool bParam2)
{
	func_170();
	func_113(1);
	unk_0xCD3C8E1022864F65(1);
	unk_0x8581263F2F024518();
	func_106(1, 1, 1, 0, 0, 0, bParam2);
	func_169();
	func_104(12, 1, -1);
	func_103(0);
	unk_0xE927736B0094B990(1, -1);
	unk_0x61F7D56FFAFBF706(0);
	unk_0xB1A691274215E4CE(0);
	func_113(1);
	func_135(1);
	Global_2672505.f_3541 = 1;
	if (bParam0)
	{
		if (!unk_0x6B834C9B3C898679())
		{
			unk_0x953382BBC2544902(1, iParam1);
		}
	}
}

void func_169()
{
	func_103(0);
	func_104(4, 1, -1);
	func_104(6, 1, -1);
	func_104(7, 1, -1);
	func_104(3, 1, -1);
	func_104(1, 1, -1);
	func_104(2, 1, -1);
	func_104(11, 1, -1);
	func_104(13, 1, -1);
	func_104(14, 1, -1);
	func_104(16, 1, -1);
}

void func_170()
{
	Global_1574747 = 1;
	StringCopy(&(Global_1574747.f_1), unk_0x688846D56810779A(), 32);
	Global_1574747.f_9 = unk_0x14580F20CBCE4FA9(&(Global_1574747.f_1));
}

void func_171(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_173();
	func_111(1);
	func_103(1);
	func_104(12, 1, -1);
	func_172();
	unk_0x08F0D7975ABD9F5E(0);
	if (bParam0)
	{
		unk_0xF2900448ADF6A868(unk_0x93E99A2DBCBA9CFA(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_126(unk_0x93E99A2DBCBA9CFA(), 0, iVar0, 0);
	if (bParam5)
	{
		if (unk_0xCC82082FAFB01DDF(unk_0xC1A5EC5C986B98AD()))
		{
			unk_0x5F2E69E984F09163(unk_0xC1A5EC5C986B98AD(), 0);
		}
	}
}

void func_172()
{
	Global_23131.f_5 = 1;
}

void func_173()
{
	func_122(0);
	func_111(1);
}

void func_174()
{
	Global_2672505.f_946.f_9 = 1;
}

void func_175()
{
	if (func_181() || func_180())
	{
		func_179();
		func_176();
	}
}

void func_176()
{
	if ((!func_178() && !func_177()) && Global_2684798)
	{
		Global_4718592.f_113724 = 0;
	}
}

bool func_177()
{
	return Global_2683862.f_691;
}

bool func_178()
{
	return Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_192 != 0;
}

void func_179()
{
	Global_2683862.f_756 = 1;
}

var func_180()
{
	return Global_2683862.f_735;
}

var func_181()
{
	return BitTest(Global_2683862.f_2, 11);
}

int func_182()
{
	switch (iLocal_262)
	{
		case 0:
			if (unk_0x2FECE8D166B3056B())
			{
				iLocal_262++;
			}
			break;
		
		case 1:
			if (unk_0x2FECE8D166B3056B())
			{
				func_117();
			}
			else
			{
				iLocal_262++;
			}
			break;
		
		case 2:
			if (iLocal_440)
			{
				if (!unk_0x34641C4C8576592F())
				{
					if (unk_0x72474BA05A104E1E() || unk_0x984CA71F26DF483C())
					{
						unk_0x78DD793477D04C42(500);
					}
					iLocal_440 = 0;
				}
			}
			else if (unk_0xD76B5D89D87154D6())
			{
				func_90(1, 1, 0, 1);
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), true, 0);
				unk_0x83F2F4191F952DC5(1);
				if (iLocal_439 != 0)
				{
					unk_0x4D14173532616448(iLocal_439);
				}
				unk_0x061B1200C95204CB(&(Local_165[unk_0xD378D2332270959A() /*3*/].f_2), true);
				iLocal_262++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	if (!BitTest(uLocal_434, 11))
	{
		if (unk_0x42C63C7AA899C5C8("MP_1", 0))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), 1275.219f, -1722.503f, 53.655f, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), 228.4235f);
				unk_0xECDAB41968FF21A8(&uLocal_434, 11);
			}
		}
	}
	return 0;
}

void func_183(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_184(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

bool func_185(var uParam0)
{
	return uParam0->f_1;
}

bool func_186(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

void func_187(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

int func_188(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xF0E4B64AC0B5660E())
	{
		return 0;
	}
	if (func_235())
	{
		return 0;
	}
	if (!unk_0x35DF833D93BCC488())
	{
		return 0;
	}
	if (func_193())
	{
		return 0;
	}
	if (func_227())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_228(unk_0x93E99A2DBCBA9CFA(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_192(unk_0x93E99A2DBCBA9CFA()))
		{
			return 0;
		}
	}
	if (func_191())
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
	if (func_190())
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	if (func_178())
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
	if (func_189())
	{
		return 0;
	}
	return 1;
}

bool func_189()
{
	return Global_2764905;
}

bool func_190()
{
	return Global_2683862.f_845;
}

bool func_191()
{
	return Global_2672505.f_2837.f_582;
}

int func_192(int iParam0)
{
	if (Global_2657589[iParam0 /*466*/].f_218 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_193()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

int func_194()
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(iLocal_264))
	{
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			uVar0 = unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD());
			iLocal_264 = unk_0x69FDD9508259E5B5(4, uVar0, 1273.827f, -1717.873f, 53.7715f, 19.2225f, 0, 0);
			unk_0x226C3A30511D5DC4(iLocal_264, 1);
			unk_0xC5B2830898581862(iLocal_264, 1);
			unk_0x52D31974082B54B1(unk_0xC1A5EC5C986B98AD(), iLocal_264);
		}
	}
	if (!unk_0x7DE17ACDD8BA2642(iLocal_264))
	{
		return 0;
	}
	if (!unk_0x66599E73DBA5A850(iLocal_264))
	{
		if (!unk_0x655790C883F82CEB(iLocal_264))
		{
			return 0;
		}
	}
	return 1;
}

void func_195()
{
	unk_0xAD37BC3B140F441C(1);
	func_196(1, -1);
	unk_0xD0AF4BC30FE7D28F(1);
	if (func_39(133, -1))
	{
		func_33(133, 0, -1, 1);
	}
	Global_2683862.f_743 = 1;
}

void func_196(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_79();
	}
	switch (bParam0)
	{
		case 0:
			unk_0xB61FAFE7FDE57FC8(0, iParam1);
			break;
		
		default:
			uVar1 = func_82(iParam1);
			iVar0 = unk_0x516080EA609481E1(uVar1);
			if (BitTest(iVar0, bParam0))
			{
				unk_0x061B1200C95204CB(&iVar0, bParam0);
				unk_0xB61FAFE7FDE57FC8(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_33(120, 0, iParam1, 1);
			func_33(124, 0, iParam1, 1);
			func_33(115, 0, iParam1, 1);
			func_33(119, 0, iParam1, 1);
			break;
	}
}

void func_197(bool bParam0, bool bParam1)
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

int func_198()
{
	var uVar0;
	
	if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		return 0;
	}
	if (bLocal_433)
	{
		if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 1274.547f, -1720.694f, 53.6807f) > 500f)
		{
			if (unk_0x7DE17ACDD8BA2642(iLocal_264))
			{
				uVar0 = iLocal_264;
				unk_0x782D744058B1DFA3(&uVar0);
			}
			return 0;
		}
		func_194();
	}
	if (!unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1273.804f, -1722.466f, 53.21749f, 1277.147f, -1720.779f, 56.09249f, 3.4375f, 0, 1, 0))
	{
		return 0;
	}
	return 1;
}

int func_199(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x93E99A2DBCBA9CFA();
	if (((((((((func_218(iVar0) || func_217(iVar0)) || func_216(iVar0)) || func_215(iVar0)) || func_214(iVar0)) || func_213(iVar0)) || func_212(iVar0)) || func_211(iVar0)) || func_210(iVar0)) || (func_207(iVar0) && func_206(iVar0)))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_205(iVar0))
		{
			return 1;
		}
	}
	else if (func_200(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	if (((func_205(iParam0) || func_204(iParam0)) || func_203(iParam0)) || func_201(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 19;
			}
		}
	}
	return 0;
}

int func_202(int iParam0)
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

int func_203(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_204(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 16;
			}
		}
	}
	return 0;
}

int func_205(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

int func_206(int iParam0)
{
	if (iParam0 != func_153())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 26);
	}
	return 0;
}

int func_207(int iParam0)
{
	if (func_209(iParam0) && func_208(iParam0) == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0)
{
	if (iParam0 == func_153())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_209(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_153())
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

int func_210(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 26;
			}
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 21;
			}
		}
	}
	return 0;
}

int func_212(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 24;
			}
		}
	}
	return 0;
}

int func_213(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 22;
			}
		}
	}
	return 0;
}

int func_214(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 23;
			}
		}
	}
	return 0;
}

int func_215(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_216(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 17;
			}
		}
	}
	return 0;
}

int func_217(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_153())
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 20;
			}
		}
	}
	return 0;
}

var func_218(int iParam0)
{
	return func_219(&(Global_2657589[iParam0 /*466*/].f_445), 0);
}

var func_219(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

var func_220()
{
	return Global_1947731;
}

int func_221()
{
	int iVar0;
	
	return 0;
	if (func_222(9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_222(int iParam0)
{
	var uVar0;
	
	if (Global_2694558)
	{
		return 1;
	}
	if ((iParam0 >= 0 && iParam0 <= 16) && func_224())
	{
		return 1;
	}
	else if ((iParam0 >= 17 && iParam0 <= 31) && func_223())
	{
		return 1;
	}
	uVar0 = func_25(2481, -1, 0);
	return BitTest(uVar0, iParam0);
}

var func_223()
{
	return BitTest(func_25(2482, -1, 0), 2);
}

var func_224()
{
	return BitTest(func_25(2482, -1, 0), 1);
}

bool func_225()
{
	return Global_1575060;
}

int func_226()
{
	return Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_193;
}

bool func_227()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 0);
}

int func_228(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_229(iParam0))
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

bool func_229(int iParam0)
{
	return func_230(iParam0);
}

var func_230(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_231(int iParam0)
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

bool func_232()
{
	return func_233();
}

bool func_233()
{
	return Global_1649046.f_40 == 3;
}

int func_234()
{
	if (Global_21725 == 4)
	{
		if (unk_0xE444FD7526C8BB46())
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

int func_235()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0)
{
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return BitTest(Global_1853910[iParam0 /*862*/].f_139, 25);
}

int func_237()
{
	return Local_85.f_0;
}

int func_238(int iParam0)
{
	return Local_165[iParam0 /*3*/];
}

void func_239(var uParam0)
{
	if (func_241(1))
	{
		if (unk_0xCE4AAA035282336C(*uParam0) && !unk_0x2594D9A3910C19C1(*uParam0))
		{
			unk_0xDFA9D2A64046A409(*uParam0, 1);
			unk_0x17CC015F2877D162(*uParam0, 0);
			unk_0xC2E0B90856D55E49(*uParam0, 5);
		}
	}
	else if (unk_0xCE4AAA035282336C(*uParam0) && (unk_0x2594D9A3910C19C1(*uParam0) && !func_240()))
	{
		unk_0xDFA9D2A64046A409(*uParam0, 0);
		unk_0x17CC015F2877D162(*uParam0, 1);
	}
}

int func_240()
{
	return 0;
}

bool func_241(bool bParam0)
{
	return func_242(unk_0x93E99A2DBCBA9CFA(), bParam0);
}

bool func_242(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_243(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_153();
}

int func_243(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_153())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

void func_244()
{
	var uVar0;
	
	func_12();
	func_197(12, 0);
	func_75();
	if (iLocal_439 != 0)
	{
		unk_0x4D14173532616448(iLocal_439);
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_264))
	{
		uVar0 = iLocal_264;
		unk_0x782D744058B1DFA3(&uVar0);
	}
	if (unk_0xCE4AAA035282336C(Global_1935132))
	{
		unk_0xBD91E7D4B770F97E(Global_1935132, 0);
		unk_0x45533C09A6C9B409(&Global_1935132);
	}
	if (BitTest(uLocal_434, 17))
	{
		if (unk_0xB2FB1E59B6F71D15(208246292))
		{
			unk_0x289D605FFACC399B(208246292, 4, 0, 0);
		}
	}
	if (BitTest(uLocal_434, 19))
	{
		unk_0x3210A569BAF257BB(0, 37, 1);
		unk_0x3210A569BAF257BB(0, 14, 1);
		unk_0x3210A569BAF257BB(0, 15, 1);
	}
	if (func_247())
	{
		func_246();
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		unk_0x061B1200C95204CB(&(Local_165[unk_0xD378D2332270959A() /*3*/].f_2), true);
	}
	if (BitTest(uLocal_434, 25))
	{
		unk_0xA7225B88CE344621(unk_0x93E99A2DBCBA9CFA(), 0);
	}
	if (BitTest(uLocal_434, 24))
	{
		unk_0xBA7BEE1631FAAB21(1);
	}
	func_118();
	unk_0x423A98584B1756BF();
	func_245();
}

void func_245()
{
	unk_0x675D9C12C73D3DE7();
}

void func_246()
{
	Global_2672505.f_946.f_9 = 0;
}

bool func_247()
{
	return Global_2672505.f_946.f_9;
}

int func_248()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 1;
		}
	}
	if (func_254())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_253())
	{
		return 1;
	}
	if (func_252(159))
	{
		if (!func_251())
		{
			return 1;
		}
	}
	if (func_252(157))
	{
		return 1;
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 1;
	}
	if (func_249() != 0)
	{
		if (unk_0x24B651D85CCE5EB4(func_249()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_249()
{
	switch (func_27())
	{
		case 0:
			return func_250();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_250()
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_251()
{
	return Global_2683862.f_698;
}

int func_252(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_253()
{
	return Global_2694524;
}

bool func_254()
{
	return Global_2683862.f_693;
}

void func_255()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_256(struct<21> Param0)
{
	func_260(func_261(Param0.f_0), Param0);
	func_258(0, -1, 0);
	unk_0xAC5E62CB7808A363(&Local_85, 79, 0);
	unk_0x10BF12101F9D80A4(&Local_165, 97, 0);
	unk_0xF1440897111F3111(0);
	if (!func_257())
	{
		func_244();
	}
}

int func_257()
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
		if (func_254())
		{
			return 0;
		}
		if (func_252(157))
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

int func_258(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xA1089192E8AE61F4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_245();
			}
			else
			{
				return 0;
			}
		}
		if (!func_259(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
				{
					if (!bParam2)
					{
						func_245();
					}
					else
					{
						return 0;
					}
				}
				if (func_254())
				{
					if (!bParam2)
					{
						func_245();
					}
					else
					{
						return 0;
					}
				}
				if (func_252(157))
				{
					if (!bParam2)
					{
						func_245();
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
					func_245();
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
				func_245();
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
			func_245();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_259(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_260(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		func_245();
	}
	unk_0xCF50389093DECE87(uParam0, 0, Param1.f_16);
}

int func_261(int iParam0)
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
	switch (func_262(func_263(iParam0, 1)))
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

int func_262(int iParam0)
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

int func_263(int iParam0, bool bParam1)
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

