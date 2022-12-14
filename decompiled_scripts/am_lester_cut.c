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
	struct<4> Local_83 = { 0, 0, 0, 0 } ;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 32;
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
	var uLocal_126 = 32;
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
	int iLocal_162 = 0;
	struct<3> Local_163[32];
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 16;
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
	bool bLocal_430 = 0;
	bool bLocal_431 = 0;
	var uLocal_432 = 0;
	char* sLocal_433 = NULL;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
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
	bLocal_431 = true;
	sLocal_433 = "MP_INTRO_MCS_13";
	func_249(ScriptParam_0);
	while (true)
	{
		func_248();
		if (func_241())
		{
			func_237();
		}
		func_232(&Global_1931382);
		switch (func_231(unk_0xF1354995C6159A78()))
		{
			case 0:
				if (func_230() == 2)
				{
					Local_163[unk_0xF1354995C6159A78() /*3*/] = 2;
				}
				else if (func_230() == 6)
				{
					Local_163[unk_0xF1354995C6159A78() /*3*/] = 5;
				}
				break;
			
			case 2:
				if (func_230() == 2)
				{
					if (!func_229(unk_0x9E2D6C50374FCFA9()))
					{
						func_19();
					}
					else if (unk_0x12DD4A0B247D9B4D(Global_1931382))
					{
						func_12();
						unk_0xAAD76B24A5282FDD(Global_1931382, 0);
						unk_0xFFD8EB5462B07B59(&Global_1931382);
						if (BitTest(uLocal_432, 3))
						{
							unk_0x6D23F8C14190D353();
						}
						unk_0xCED9E32812D6C7C7(&(Local_163[unk_0xF1354995C6159A78() /*3*/].f_2), false);
					}
					if (func_8(unk_0x9E2D6C50374FCFA9()))
					{
						Local_163[unk_0xF1354995C6159A78() /*3*/] = 3;
						Global_2815059.f_1780 = 0;
					}
				}
				else if (func_230() == 6)
				{
					Local_163[unk_0xF1354995C6159A78() /*3*/] = 5;
				}
				break;
			
			case 5:
				func_6(&(Local_83.f_3));
				if (func_5(&(Local_83.f_3)))
				{
					Local_163[unk_0xF1354995C6159A78() /*3*/] = 6;
				}
				break;
			
			case 3:
				Local_163[unk_0xF1354995C6159A78() /*3*/] = 6;
			
			case 6:
				func_237();
				break;
		}
		if (unk_0x54E30A65F4FA4962())
		{
			switch (func_230())
			{
				case 0:
					Local_83.f_2 = -1;
					Local_83.f_0 = 2;
					break;
				
				case 2:
					func_3();
					func_2();
					if (func_1())
					{
						Local_83.f_0 = 6;
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
	if (BitTest(Local_83.f_1, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	if (unk_0x54E30A65F4FA4962())
	{
	}
}

void func_3()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x54E30A65F4FA4962())
	{
		if (iLocal_162 == 0)
		{
			unk_0xB0550BC91B0159D6(&uLocal_432, false);
			unk_0xCED9E32812D6C7C7(&uLocal_432, true);
			if (Local_83.f_2 != -1)
			{
				if (!unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(Local_83.f_2)))
				{
					Local_83.f_2 = -1;
				}
			}
		}
		iVar0 = iLocal_162;
		if (unk_0x81F82FFBED0CACCA(iVar0))
		{
			iVar1 = unk_0x6B01934FA503547F(iVar0);
			if (!BitTest(Local_163[iLocal_162 /*3*/].f_2, 0))
			{
				unk_0xB0550BC91B0159D6(&uLocal_432, true);
			}
			if (func_4(iVar1, 0, 1))
			{
				if (BitTest(Local_163[iLocal_162 /*3*/].f_2, 1))
				{
					unk_0xCED9E32812D6C7C7(&uLocal_432, 12);
					if (Local_83.f_2 == -1)
					{
						if (Local_83.f_2 != iLocal_162)
						{
							Local_83.f_2 = iLocal_162;
						}
					}
				}
				else if (Local_83.f_2 == iLocal_162)
				{
					Local_83.f_2 = -1;
				}
			}
		}
		iLocal_162++;
		if (iLocal_162 == 32)
		{
			if (BitTest(uLocal_432, 1))
			{
				unk_0xCED9E32812D6C7C7(&(Local_83.f_1), false);
			}
			if (!BitTest(uLocal_432, 12))
			{
				if (Local_83.f_2 != -1)
				{
					Local_83.f_2 = -1;
				}
			}
			unk_0xCED9E32812D6C7C7(&uLocal_432, false);
			iLocal_162 = 0;
		}
	}
}

int func_4(int iParam0, bool bParam1, bool bParam2)
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

int func_5(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= 1000)
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
		if (unk_0x54E30A65F4FA4962())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
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
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_11(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

void func_12()
{
	if (!func_18())
	{
		return;
	}
	if (!unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == Global_1574757.f_9)
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
	
	bVar0 = unk_0x9315DBF7D972F07A();
	Global_1574757 = 20;
	StringCopy(&(Global_1574757.f_1), "", 32);
	Global_1574757.f_9 = 0;
	if (bVar0)
	{
		Global_1574757.f_10 = unk_0x0A89FDFA763DCAED();
		Global_1574757.f_11 = unk_0x0A89FDFA763DCAED();
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
		unk_0x1419D7B938CBFF2E(&(Global_1574757.f_12));
		func_16();
		unk_0xF4666BA5B36DBCB2();
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
			unk_0x2AE954BA77A66307(Global_1574757.f_52);
			return;
		
		case 2:
			unk_0x2AE954BA77A66307(Global_1574757.f_52);
			unk_0x2AE954BA77A66307(Global_1574757.f_53);
			return;
		
		case 3:
			unk_0x26C23BE14F66F202(&(Global_1574757.f_16));
			return;
		
		case 4:
			unk_0x26C23BE14F66F202(&(Global_1574757.f_16));
			unk_0x26C23BE14F66F202(&(Global_1574757.f_32));
			return;
		
		case 5:
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			return;
		
		case 6:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			return;
		
		case 7:
			unk_0x26C23BE14F66F202(&(Global_1574757.f_16));
			return;
		
		case 8:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_16));
			return;
		
		case 9:
			unk_0x702B349761F63A9E(&(Global_1574757.f_16));
			return;
		
		case 10:
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_32));
			return;
		
		case 12:
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			unk_0x26C23BE14F66F202(&(Global_1574757.f_32));
			return;
		
		case 13:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_16));
			unk_0x138506D6C7564EF1(Global_1574757.f_57);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_32));
			return;
		
		case 11:
			unk_0x702B349761F63A9E(&(Global_1574757.f_16));
			return;
		
		case 14:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_32));
			return;
		
		case 15:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			unk_0x138506D6C7564EF1(Global_1574757.f_57);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_32));
			return;
		
		case 17:
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_32));
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_48));
			return;
		
		case 16:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			return;
		
		case 19:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_16));
			return;
		
		case 18:
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_48));
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_32));
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
	unk_0x09684FD679B0E474(&(Global_1574757.f_12));
	func_16();
	return unk_0xD7AA4C82B5D00977();
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
	
	switch (Local_163[unk_0xF1354995C6159A78() /*3*/].f_1)
	{
		case 0:
			if (!BitTest(uLocal_432, 2))
			{
				if (!BitTest(uLocal_432, 5))
				{
					if (!func_228())
					{
						if (!func_227())
						{
							if (!func_225())
							{
								if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
								{
									if (!func_224(0))
									{
										if (!func_221(unk_0x9E2D6C50374FCFA9(), 1, 0))
										{
											if (!func_220())
											{
												if (func_219() == 0)
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
			if (!BitTest(uLocal_432, 5))
			{
				if ((((((func_221(unk_0x9E2D6C50374FCFA9(), 1, 0) || func_220()) || func_219() > 0) || func_218()) || func_216()) || func_215()) || func_199(0))
				{
					unk_0xCED9E32812D6C7C7(&uLocal_432, 5);
					func_12();
					if (unk_0x12DD4A0B247D9B4D(Global_1931382))
					{
						unk_0xAAD76B24A5282FDD(Global_1931382, 0);
						unk_0xFFD8EB5462B07B59(&Global_1931382);
					}
				}
				else
				{
					if (unk_0x12DD4A0B247D9B4D(Global_1931382))
					{
						if (!BitTest(uLocal_432, 14))
						{
							if (Local_83.f_2 != -1)
							{
								if (Local_83.f_2 != unk_0xF1354995C6159A78())
								{
									unk_0xA582EE8380437B1B(Global_1931382, 39);
									unk_0x293A9399E902A33B(Global_1931382, 0.7f);
									unk_0xCED9E32812D6C7C7(&uLocal_432, 14);
								}
							}
						}
						else if (Local_83.f_2 == -1 || Local_83.f_2 == unk_0xF1354995C6159A78())
						{
							unk_0xA582EE8380437B1B(Global_1931382, 0);
							unk_0x293A9399E902A33B(Global_1931382, 1f);
							unk_0xB0550BC91B0159D6(&uLocal_432, 14);
						}
					}
					if (BitTest(uLocal_432, 8))
					{
						unk_0xB0550BC91B0159D6(&uLocal_432, 8);
					}
					if (func_198())
					{
						if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
						{
							if ((bLocal_430 && unk_0xC6398AABC3E92273()) || !bLocal_430)
							{
								if (!BitTest(Local_163[unk_0xF1354995C6159A78() /*3*/].f_2, 1))
								{
									unk_0xCED9E32812D6C7C7(&(Local_163[unk_0xF1354995C6159A78() /*3*/].f_2), true);
								}
								if (BitTest(Local_163[unk_0xF1354995C6159A78() /*3*/].f_2, 1))
								{
									if (Local_83.f_2 == unk_0xF1354995C6159A78())
									{
										func_12();
										if (unk_0x12DD4A0B247D9B4D(Global_1931382))
										{
											unk_0xAAD76B24A5282FDD(Global_1931382, 0);
											unk_0xFFD8EB5462B07B59(&Global_1931382);
										}
										unk_0x3410421C60BF7143(1);
										func_197(12, 1);
										func_195();
										unk_0xC099DA307DD6BC62(unk_0x9E2D6C50374FCFA9(), 1);
										unk_0xCED9E32812D6C7C7(&uLocal_432, 25);
										unk_0x7A997A0A971D305F(1274.854f, -1721.154f, 53.6808f, 2f, 1, 0, 0, 1);
										if (bLocal_431)
										{
											func_194();
											uLocal_440 = unk_0x528279F3F1EEF869("SECURITY_CAM");
										}
										Local_163[unk_0xF1354995C6159A78() /*3*/].f_1 = 1;
									}
									else if (Local_83.f_2 != -1)
									{
										if (!BitTest(uLocal_432, 13))
										{
											if (func_188(1, 1, 1, 1))
											{
												func_187("FM_LCUT_LRB", -1);
												unk_0xCED9E32812D6C7C7(&uLocal_432, 13);
											}
										}
									}
								}
							}
						}
						else if (!unk_0xF847447D4467709D())
						{
							if (!func_186("FM_LCUT_LCP"))
							{
								func_187("FM_LCUT_LCP", -1);
							}
						}
					}
					else
					{
						if (!BitTest(uLocal_432, 9))
						{
							if (func_188(0, 1, 1, 1))
							{
								if (!func_218())
								{
									func_187("FM_LCUT_LBLP", -1);
									if (!unk_0x12DD4A0B247D9B4D(Global_1931382))
									{
										Global_1931382 = unk_0xC5B823372B67998A(Global_1931383);
										unk_0x1A5B5BA56167D412(Global_1931382, 77);
										unk_0x9705014C37E60003(Global_1931382, 1);
										unk_0xE5D4469DCCFB5170(Global_1931382, 7000);
									}
									unk_0xCED9E32812D6C7C7(&uLocal_432, 2);
									unk_0xCED9E32812D6C7C7(&uLocal_432, 9);
								}
							}
						}
						if (BitTest(Local_163[unk_0xF1354995C6159A78() /*3*/].f_2, 1))
						{
							unk_0xB0550BC91B0159D6(&(Local_163[unk_0xF1354995C6159A78() /*3*/].f_2), true);
						}
						if (BitTest(uLocal_432, 13))
						{
							unk_0xB0550BC91B0159D6(&uLocal_432, 13);
						}
					}
				}
			}
			else if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
				{
					if (unk_0xE9E8955A780DDA01())
					{
						if (((((!func_221(unk_0x9E2D6C50374FCFA9(), 1, 0) && !func_220()) && func_219() == 0) && !func_218()) && !func_216()) && !func_199(0))
						{
							if (!func_185(&uLocal_435))
							{
								func_7(&uLocal_435, 0, 0);
							}
							else if (func_184(&uLocal_435, 10, 0))
							{
								unk_0xB0550BC91B0159D6(&uLocal_432, 5);
								unk_0xB0550BC91B0159D6(&uLocal_432, 2);
								unk_0xB0550BC91B0159D6(&uLocal_432, 3);
								unk_0xB0550BC91B0159D6(&uLocal_432, 8);
								func_183(&uLocal_435);
								if (!unk_0x12DD4A0B247D9B4D(Global_1931382))
								{
									Global_1931382 = unk_0xC5B823372B67998A(Global_1931383);
									unk_0x1A5B5BA56167D412(Global_1931382, 77);
								}
							}
						}
					}
				}
			}
			if (bLocal_430)
			{
			}
			break;
		
		case 1:
			if (bLocal_430)
			{
				if (func_182())
				{
					Local_163[unk_0xF1354995C6159A78() /*3*/].f_1 = 2;
				}
			}
			else if (func_142())
			{
				Local_163[unk_0xF1354995C6159A78() /*3*/].f_1 = 2;
			}
			break;
		
		case 2:
			if (func_87())
			{
				Local_163[unk_0xF1354995C6159A78() /*3*/].f_1 = 3;
			}
			break;
		
		case 3:
			if (!BitTest(Local_163[unk_0xF1354995C6159A78() /*3*/].f_2, 0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_163[unk_0xF1354995C6159A78() /*3*/].f_2), false);
			}
			break;
	}
	if (func_86())
	{
		if (unk_0x12DD4A0B247D9B4D(Global_1931382))
		{
			unk_0xFFD8EB5462B07B59(&Global_1931382);
		}
		func_12();
		uVar0 = Global_1659747[func_85(-1)];
		unk_0xCED9E32812D6C7C7(&uVar0, 2);
		unk_0xCED9E32812D6C7C7(&(Local_163[unk_0xF1354995C6159A78() /*3*/].f_2), false);
		func_84(1304, uVar0, -1, 1);
		func_197(12, 0);
		if (bLocal_430)
		{
			unk_0x6D23F8C14190D353();
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
				Global_1836830[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_71(unk_0x9E2D6C50374FCFA9(), bParam0);
	iVar2 = func_69(iVar1, bParam0);
	if (!func_68(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1836830[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1836830[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 303)
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
		if (unk_0x9315DBF7D972F07A())
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
		}
	}
	if (func_49(21, 0, 0))
	{
		unk_0xE26992076B0111B4(0);
	}
	Global_1057411 = 0;
}

void func_21(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_32(iParam0, 0, 0))
		{
			if (iParam2 && Global_100493.f_18[iParam0])
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
	Global_100493.f_196[iParam0] = 1;
	Global_100493.f_195 = 1;
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
		unk_0xB0550BC91B0159D6(&(Global_100493.f_1393[iParam0]), bParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_27() == 0)
		{
			iVar0 = func_25(func_26(iParam0), -1, 0);
			unk_0xB0550BC91B0159D6(&iVar0, bParam1);
			func_24(func_26(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

void func_24(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_85(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_25(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2826809[iParam0 /*3*/][func_85(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
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
			return 11352;
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
		
		default:
			break;
	}
	return 13122;
}

int func_27()
{
	return Global_31959;
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
		unk_0xCED9E32812D6C7C7(&(Global_100493.f_1393[iParam0]), bParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_27() == 0)
		{
			iVar0 = func_25(func_26(iParam0), -1, 0);
			unk_0xCED9E32812D6C7C7(&iVar0, bParam1);
			func_24(func_26(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

void func_29(int iParam0)
{
	if (Global_100493.f_18[iParam0])
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
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_27() == 0)
		{
			return BitTest(func_25(func_26(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_34())
	{
		iVar0 = Global_2866852[iParam0 /*3*/][func_85(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41483427EFBC0047(iVar0, iParam1, iParam3);
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
	return Global_1575046;
}

bool func_36()
{
	return Global_1575048;
}

void func_37(bool bParam0)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return;
	}
	func_21(28, bParam0, 0);
	func_21(30, bParam0, 0);
	func_21(31, bParam0, 0);
	func_21(33, bParam0, 0);
	func_21(34, bParam0, 0);
	func_21(38, bParam0, 0);
}

void func_38(bool bParam0)
{
	if (!unk_0x9315DBF7D972F07A())
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
	
	uVar0 = Global_2866852[iParam0 /*3*/][func_85(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
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
	
	if (!unk_0x9315DBF7D972F07A())
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
		Global_100493.f_9[iParam0] = 1;
	}
	else
	{
		Global_100493.f_9[iParam0] = 0;
	}
}

void func_43(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x9315DBF7D972F07A())
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
			unk_0xCED9E32812D6C7C7(&(Global_2815059.f_1798), 10);
		}
	}
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (Global_1941273[iParam0 /*8*/] == -1)
	{
		iVar0 = func_25(func_46(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_45(iParam0, 0);
			iVar0 = 0;
		}
		Global_1941273[iParam0 /*8*/] = iVar0;
	}
	return Global_1941273[iParam0 /*8*/];
}

void func_45(int iParam0, int iParam1)
{
	Global_1941273[iParam0 /*8*/] = iParam1;
	func_24(func_46(iParam0), iParam1, -1, 1, 0);
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11353;
		
		default:
	}
	return 11353;
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
		if (!BitTest(Global_2815059.f_1789, 26))
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
	
	if (!unk_0x9315DBF7D972F07A())
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
	
	if (Global_262145.f_8145 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_51(unk_0x9E2D6C50374FCFA9(), 85))
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
		if (Global_262145.f_4746 == 1)
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
	return BitTest(Global_1836830[iVar1], iVar0);
}

int func_50()
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2815059.f_1794, 23))
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
	uVar0 = Global_1659747[func_85(-1)];
	if (BitTest(uVar0, 7))
	{
		unk_0xCED9E32812D6C7C7(&(Global_2815059.f_1794), 23);
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
	return func_52(&(Global_1853348[iParam0 /*834*/].f_765), func_53(iParam1));
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
		
		default:
	}
	return 1;
}

bool func_54()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_143, 3);
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
		unk_0xCED9E32812D6C7C7(&(Global_1836830[iVar1]), bVar0);
	}
}

int func_57()
{
	var uVar0;
	
	if (func_229(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	uVar0 = Global_1659747[func_85(-1)];
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
		if (!BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_139, 25))
		{
			func_59(unk_0x9E2D6C50374FCFA9(), 12);
			unk_0xCED9E32812D6C7C7(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_139), 25);
		}
	}
	else if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_139, 25))
	{
		unk_0xB0550BC91B0159D6(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_139), 25);
	}
}

void func_59(int iParam0, int iParam1)
{
	func_60(&(Global_1853348[iParam0 /*834*/].f_765), func_53(iParam1));
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
		unk_0xCED9E32812D6C7C7(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

int func_61()
{
	var uVar0;
	
	if (BitTest(Global_2815059.f_1794, 6))
	{
		return 1;
	}
	uVar0 = Global_1659747[func_85(-1)];
	if (BitTest(uVar0, 0))
	{
		if (!BitTest(Global_2815059.f_1794, 6))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2815059.f_1794), 6);
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
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_143, 7);
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
		if (Global_295824[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_295824[iVar3] < iParam0)
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
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return Global_1659759[func_85(-1)];
			}
			else if (func_73(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[func_85(-1)];
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
		return BitTest(Global_2703735.f_1, iParam0);
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
	if (func_218() && func_27() == 0)
	{
	}
	else
	{
		unk_0x494B84826E4A775E(0);
	}
	if (func_80(1))
	{
		unk_0x28BBFC5FEC1E27BD(1);
	}
	else
	{
		unk_0x28BBFC5FEC1E27BD(0);
	}
	Global_2714762.f_743 = 0;
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
	return Global_1931618.f_16[iParam0 /*44*/].f_3;
}

void func_81(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_79();
	}
	Global_1659608 = 0;
	if (unk_0xB8F4926B803BFD19() == 0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0:
			unk_0xB625F19076319E9C(0, iParam1);
			uVar1 = func_82(iParam1);
			iVar0 = unk_0x5D851A9195129CE9(uVar1);
			break;
		
		default:
			uVar1 = func_82(iParam1);
			iVar0 = unk_0x5D851A9195129CE9(uVar1);
			if (!BitTest(iVar0, bParam0))
			{
				unk_0xCED9E32812D6C7C7(&iVar0, bParam0);
				unk_0xB625F19076319E9C(iVar0, iParam1);
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
	uVar1 = unk_0x5D851A9195129CE9(uVar0);
	return BitTest(uVar1, iParam0);
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_85(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_85(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1659693[func_85(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1659699[func_85(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1659705[func_85(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1659711[func_85(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1659657[func_85(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1659663[func_85(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1659669[func_85(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1659675[func_85(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1659681[func_85(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1659627[func_85(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1659633[func_85(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1659639[func_85(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1659645[func_85(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1659651[func_85(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1659717[func_85(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1659723[func_85(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1659729[func_85(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1659735[func_85(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1659741[func_85(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1659747[func_85(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1659753[func_85(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1659759[func_85(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1659765[func_85(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 11391:
			Global_2869950[func_85(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1659771[func_85(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1659777[func_85(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1659783[func_85(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1659789[func_85(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1659795[func_85(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1659801[func_85(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2869985[func_85(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2869994[func_85(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2869988[func_85(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2869997[func_85(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2869991[func_85(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2870000[func_85(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2870003[func_85(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2870006[func_85(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2870009[func_85(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2870012[func_85(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2870015[func_85(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2870018[func_85(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2870021[func_85(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2870024[func_85(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2870027[func_85(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2870030[func_85(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2870033[func_85(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2870036[func_85(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2870039[func_85(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2870042[func_85(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2870045[func_85(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_85(iParam2)] = iParam1;
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

int func_86()
{
	if (BitTest(Local_163[unk_0xF1354995C6159A78() /*3*/].f_2, 0))
	{
		return 1;
	}
	return 0;
}

int func_87()
{
	switch (iLocal_260)
	{
		case 0:
			if (!BitTest(uLocal_432, 18))
			{
				if (!unk_0xF68107C40359970C(uLocal_261))
				{
					uLocal_434 = unk_0xEFD6451BF0F3352F(uLocal_261);
					unk_0xD809204F14EF9B68(uLocal_434, 1);
					unk_0xAF62582F3EA39095(uLocal_434, "FM_LEST_BLP");
					func_136("FM_LEST_GTL", 0);
					unk_0xCED9E32812D6C7C7(&uLocal_432, 18);
				}
			}
			if (!BitTest(uLocal_432, 20))
			{
				if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					if (!unk_0xF68107C40359970C(uLocal_261))
					{
						if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1272.747f, -1715.223f, 53.45897f, 1273.732f, -1717.427f, 55.70897f, 2f, 0, 1, 0))
						{
							uLocal_264 = unk_0x8F5F4164BF5FB513(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
							unk_0x950B26F4C891073F(uLocal_261, uLocal_264, "missfinale_c2leadinoutfin_c_int", "_LEADIN_ACTION_LESTER", 1000f, -8f, 5, 16, 1148846080, 0);
							unk_0xAA8557AFE4A4A184(uLocal_263, uLocal_264, "_LEADIN_ACTION_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 4, 1148846080);
							unk_0xCED9E32812D6C7C7(&uLocal_432, 20);
						}
					}
				}
			}
			if (!BitTest(uLocal_432, 3))
			{
				unk_0xD536FD78D8A135F1(sLocal_433, 8);
				unk_0xCED9E32812D6C7C7(&uLocal_432, 3);
			}
			else if (!BitTest(uLocal_432, 10))
			{
				if (unk_0x2566F947AAB7B2A7())
				{
					unk_0xF1BAB9FB6BD91384("MP_1", 0, 1);
					unk_0xCED9E32812D6C7C7(&uLocal_432, 10);
				}
			}
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1275.095f, -1715.769f, 53.70897f, 1274.382f, -1714.219f, 56.02147f, 1.375f, 0, 1, 0))
				{
					if (BitTest(uLocal_432, 10))
					{
						iLocal_260++;
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xC6398AABC3E92273())
			{
				if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == joaat("mp_f_freemode_01"))
					{
						unk_0x48F297980C708DB7(unk_0xE2D3D51028F0428A(), "MP_1", 0, 0, 64);
					}
					else
					{
						unk_0x48F297980C708DB7(unk_0xE2D3D51028F0428A(), "MP_1", 0, 0, 64);
					}
				}
				func_135(1);
				unk_0xF44EE79112016B61(0);
				unk_0x5E1F7FB772C73D20(0);
				func_126(unk_0x9E2D6C50374FCFA9(), 0, 32772, 0);
				func_122(0);
				iLocal_260++;
			}
			break;
		
		case 2:
			if (unk_0xF34D8FCAE3FD4EE4())
			{
				func_118();
				iLocal_260++;
			}
			break;
		
		case 3:
			if (unk_0xF34D8FCAE3FD4EE4())
			{
				func_117();
			}
			else
			{
				iLocal_260++;
			}
			break;
		
		case 4:
			if (iLocal_438)
			{
				if (!unk_0x496531E41FCF5116())
				{
					if (unk_0xA829C9A2767AC8EF() || unk_0xCB1EF1E7B77ADF4C())
					{
						unk_0x5A7ACD1CDF509B0D(500);
					}
					iLocal_438 = 0;
				}
			}
			else if (unk_0xA08A61313445DB46())
			{
				func_90(1, 1, 0, 1);
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), true, 0);
				unk_0x5E1F7FB772C73D20(1);
				if (BitTest(uLocal_432, 25))
				{
					unk_0xC099DA307DD6BC62(unk_0x9E2D6C50374FCFA9(), 0);
				}
				if (iLocal_437 != 0)
				{
					unk_0xAED5221F05DAE55E(iLocal_437);
				}
				unk_0xB0550BC91B0159D6(&(Local_163[unk_0xF1354995C6159A78() /*3*/].f_2), true);
				func_88();
				iLocal_260++;
			}
			break;
		
		case 5:
			return 1;
			break;
	}
	if (!BitTest(uLocal_432, 11))
	{
		if (unk_0x6F2E1326DB60D575("MP_1", 0))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), 1275.219f, -1722.503f, 53.655f, 1, 0, 0, 1);
				unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 228.4235f);
				unk_0x1C2ED929474DC6FE(unk_0xE2D3D51028F0428A(), false, 0);
				unk_0x94953C3FF0664F66(0f);
				unk_0x080C97B891E2F3AA(0f, 1065353216);
				unk_0xCED9E32812D6C7C7(&uLocal_432, 11);
			}
		}
	}
	if (!BitTest(uLocal_432, 26))
	{
		if (iLocal_260 > 2)
		{
			if (unk_0xA337B111DF07BB88(0))
			{
				if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					unk_0x1C2ED929474DC6FE(unk_0xE2D3D51028F0428A(), true, 0);
					unk_0x94953C3FF0664F66(0f);
					unk_0x080C97B891E2F3AA(0f, 1065353216);
					unk_0xCED9E32812D6C7C7(&uLocal_432, 26);
				}
			}
		}
	}
	if (BitTest(uLocal_432, 19))
	{
		unk_0x7653D561C9574763(0, 37, 1);
		unk_0x7653D561C9574763(0, 14, 1);
		unk_0x7653D561C9574763(0, 15, 1);
	}
	return 0;
}

void func_88()
{
	int iVar0;
	
	iVar0 = func_89(53);
	Global_2676732[iVar0 /*83*/] = 53;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2676732[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2676732[iVar1 /*83*/] == 0)
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
		unk_0x3410421C60BF7143(1);
	}
	unk_0xBA6C3C5E9E5A9442();
	func_110();
	unk_0xAA4AFC804C4BA788(0);
	func_106(0, 1, 1, 0, 0, bParam2, 0);
	func_105();
	func_104(12, 0, -1);
	func_103(1);
	unk_0x43F21FA00A1CE779(0, -1);
	unk_0xB60709BD0E075903(1);
	unk_0x72DB022C36FCEA24(1);
	func_102();
	unk_0xB68BD12B3A8C52FD(1);
	if (unk_0x9315DBF7D972F07A())
	{
		if (bParam3)
		{
			if (unk_0xC96A605CF3E9295B())
			{
				unk_0x3DC5858ACD1E01CB(0, 0);
			}
		}
	}
	func_135(0);
	if (((((func_218() == 0 && func_101() == 0) && iParam1) && !func_99(unk_0x9E2D6C50374FCFA9())) && !unk_0x2981C54770E1D19C()) && func_97())
	{
		func_126(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
	}
	Global_2703735.f_3428 = 0;
	func_91();
}

void func_91()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x9315DBF7D972F07A() && func_185(&Global_2824370))
	{
		if (!func_184(&Global_2824370, 3500, 1) || unk_0xF7A68678B96E517C(unk_0x9E2D6C50374FCFA9()))
		{
			if (!func_96())
			{
				if (unk_0xA829C9A2767AC8EF())
				{
					func_95(&Global_2824370, 1, 0);
				}
				else if (!func_93(unk_0x9E2D6C50374FCFA9(), 0))
				{
					if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), joaat("script_task_parachute")) != 1 && unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), joaat("script_task_parachute")) != 0)
					{
						unk_0xB18E70E8229E0DA6(1);
						unk_0xB5F13D9832E1F2AE(unk_0x9E2D6C50374FCFA9(), 1);
					}
					unk_0x8B9AD14C7D42CC13(unk_0xE2D3D51028F0428A(), 255, 0);
				}
			}
			else
			{
				func_95(&Global_2824370, 1, 0);
			}
		}
		else
		{
			if (unk_0x9315DBF7D972F07A())
			{
				unk_0xEAFAF9ED80DB448D(unk_0xE2D3D51028F0428A());
			}
			func_183(&Global_2824370);
		}
	}
	if (Global_2824374 > 0)
	{
		bVar0 = false;
		while (bVar0 < 32)
		{
			if (BitTest(Global_2824374, bVar0))
			{
				bVar1 = unk_0xA1087A6350CD9244(bVar0);
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
	if (BitTest(Global_2824374, bParam0) && unk_0x9315DBF7D972F07A())
	{
		if (!func_184(&(Global_2824375[bParam0 /*2*/]), 3500, 1) || unk_0xF7A68678B96E517C(bParam0))
		{
			if (!func_96())
			{
				if (unk_0xA829C9A2767AC8EF())
				{
					func_95(&(Global_2824375[bParam0 /*2*/]), 1, 0);
				}
				else if (!func_93(bParam0, 0))
				{
					unk_0xB5F13D9832E1F2AE(bParam0, 1);
					if (!unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(bParam0), 0))
					{
						unk_0x8B9AD14C7D42CC13(unk_0x407E03586628E458(bParam0), 255, 0);
					}
				}
			}
			else
			{
				func_95(&(Global_2824375[bParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(bParam0), 0))
			{
				unk_0xEAFAF9ED80DB448D(unk_0x407E03586628E458(bParam0));
			}
			func_183(&(Global_2824375[bParam0 /*2*/]));
			unk_0xB0550BC91B0159D6(&Global_2824374, bParam0);
		}
	}
}

bool func_93(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_94(-1, 0) == 8;
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

int func_94(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

void func_95(var uParam0, bool bParam1, bool bParam2)
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

int func_96()
{
	if (unk_0xF34D8FCAE3FD4EE4() || unk_0xC96A605CF3E9295B())
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
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
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
	return BitTest(Global_2714762, 7);
}

void func_102()
{
	Global_23011.f_5 = 0;
}

void func_103(int iParam0)
{
	Global_2815059.f_4598 = iParam0;
}

void func_104(bool bParam0, bool bParam1, int iParam2)
{
	switch (bParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1648034.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_1648034.f_1046), bParam0);
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(Global_1648034.f_1046), bParam0);
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
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_135(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_109())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_108(1, iParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_135(0);
		unk_0x45227777D3EBECE5();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_108(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_99(unk_0x9E2D6C50374FCFA9())) && !func_93(unk_0x9E2D6C50374FCFA9(), 0)) && !func_107()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_99(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_78317 = 0;
	}
}

bool func_107()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 14);
}

int func_108(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x131A54781ECD3789() != iParam0 && uParam2)
		{
			unk_0x10B0B2BEC7FAA911(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_109()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
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
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0xCED9E32812D6C7C7(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_224(0))
		{
			func_122(0);
		}
	}
	else if (Global_20266.f_1 == 1)
	{
		if (!Global_20266.f_1 == 0)
		{
			Global_20266.f_1 = 3;
		}
	}
}

void func_112()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_113(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112038)
	{
		unk_0xD4DF0F443B8FD284(iVar0, iParam0);
		func_114(iVar0);
		iVar0++;
	}
}

void func_114(int iParam0)
{
	Global_112038[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112038[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112038[iParam0 /*28*/].f_4), "", 64);
	Global_112038[iParam0 /*28*/].f_23 = 0;
	Global_112038[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112038[iParam0 /*28*/].f_27 = 0;
	Global_112038[iParam0 /*28*/].f_20 = 0;
	Global_112038[iParam0 /*28*/].f_22 = 0;
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
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 346, 1);
		if (unk_0x096CDF67382A3EAF(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x4F35A48DA4069275(unk_0x9E2D6C50374FCFA9()))
			{
			}
		}
	}
}

void func_118()
{
	var uVar0;
	
	if (unk_0x12DD4A0B247D9B4D(uLocal_434))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_434);
	}
	if (unk_0xE5965CDF24F93A9F(uLocal_261))
	{
		uVar0 = uLocal_261;
		unk_0x531055A66E7A812C(&uVar0);
	}
	if (unk_0xE5965CDF24F93A9F(uLocal_263))
	{
		uVar0 = uLocal_263;
		unk_0x531055A66E7A812C(&uVar0);
	}
	func_12();
	unk_0xF1A23B343DFEDFD0(func_119(12));
	unk_0xF1A23B343DFEDFD0(joaat("prop_wheelchair_01_s"));
	unk_0xAFC1FBF3F6AE7B9A("missfinale_c2leadinoutfin_c_int");
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
	return Global_1998[iParam0 /*29*/];
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
	if (Global_20464)
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
	if (!func_109())
	{
		Global_20266.f_1 = 3;
	}
}

void func_123(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_224(0))
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

bool func_124()
{
	return BitTest(Global_1958711, 5);
}

bool func_125()
{
	return BitTest(Global_1958711, 19);
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
		if (unk_0x1088B18071ADCCBD())
		{
			unk_0x94B5910A9C945688(0);
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
		if (unk_0x0D01086B38EC256F(iParam0) && (unk_0x3583A42587543334(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x407E03586628E458(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x9315DBF7D972F07A())
				{
					unk_0x5C53AF694DE011E8(1);
				}
				else if (bVar14 || (!func_93(unk_0x9E2D6C50374FCFA9(), 0) && !func_100()))
				{
					unk_0x1C2ED929474DC6FE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x9315DBF7D972F07A() && !bVar19)
					{
						unk_0x5C53AF694DE011E8(0);
					}
					Global_2689235[bParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_131(0, 0, 0);
					if (bVar25)
					{
						unk_0x5639E771F6085BF6();
					}
				}
				if (!func_130(uVar27) && !unk_0xE2ED785E8DB4D3FF(uVar27))
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
				unk_0xC099DA307DD6BC62(bParam0, 0);
				unk_0x7E9CA7389EF595E6(bParam0, 0);
				if (unk_0xA13A75665F7E0689(uVar27) && unk_0x6090FC735660B8F7(uVar27))
				{
					unk_0xAD9047296F9EA375(uVar27);
				}
				unk_0xC252F409BDE7A700(uVar27, 1);
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_129();
					func_128();
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
				Global_2689235[bParam0 /*453*/].f_253 = 0;
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
				if (!func_130(uVar27) && !unk_0xE2ED785E8DB4D3FF(uVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(uVar27, !bVar15, 0);
					}
					if (!unk_0xE85F749F6D5C809E(uVar27))
					{
						if (!bVar21)
						{
							unk_0x5C65DDDC219B3AA5(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x398C962F550CF3B4(uVar27, 1);
						}
					}
					if (func_127(Global_4718592.f_168757))
					{
						unk_0x5C65DDDC219B3AA5(uVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xC099DA307DD6BC62(bParam0, 0);
				}
				else
				{
					unk_0xC099DA307DD6BC62(bParam0, 1);
				}
				unk_0xA7266A50941DBAEA(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xFD478ECFA85A941A(uVar27) && !unk_0xD5C6B5E3B93A5EDC(uVar27, 0))
					{
						unk_0x51BB443B279E4104(uVar27);
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
			unk_0x64E21045781AFBC9(bParam0, bParam1, iVar28);
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
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_129()
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_130(var uParam0)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x174CED88B97C78D9(uParam0, joaat("script_task_enter_vehicle"));
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
				func_133();
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
		if (func_93(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0x1FD50AAF9DA2199E(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x86998D41F61B3824(iParam0, iParam1);
		}
		unk_0x6CAF65C4F61A4BBD(iParam0, iParam1);
		func_132(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41483427EFBC0047(iVar0, iParam1, 1);
	}
}

void func_133()
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

int func_134()
{
	if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 13);
	}
}

void func_136(char* sParam0, bool bParam1)
{
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return;
	}
	if (unk_0x4B83FFC4B00987D9(sParam0) > 23)
	{
		return;
	}
	if (func_140(sParam0))
	{
		return;
	}
	func_13();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), unk_0x05CBA41180F5D521(), 32);
	Global_1574757.f_9 = unk_0x2E87280918B16506(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_139();
	func_138(bParam1);
	func_137();
}

void func_137()
{
	unk_0xCED9E32812D6C7C7(&(Global_1574757.f_59), true);
}

void func_138(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1574757.f_59), false);
		return;
	}
	unk_0xB0550BC91B0159D6(&(Global_1574757.f_59), false);
}

void func_139()
{
	Global_1574757.f_10 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), 86400000);
	Global_1574757.f_11 = unk_0x0A89FDFA763DCAED();
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
	if (unk_0xACC32B78196FBC2A(uParam0))
	{
		return 0;
	}
	return unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574757.f_12));
}

bool func_141(char* sParam0)
{
	if (!func_18())
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(uParam0))
	{
		return 0;
	}
	return unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574757.f_16));
}

int func_142()
{
	switch (iLocal_439)
	{
		case 0:
			if (!BitTest(uLocal_432, 25))
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 1);
				unk_0xCED9E32812D6C7C7(&uLocal_432, 25);
			}
			if (unk_0x0347CCBD719C8ADC(uLocal_440) && func_194())
			{
				func_175();
				func_174();
				func_171(0, 0, 1, 0, 1, 1, 0);
				func_126(unk_0x9E2D6C50374FCFA9(), 0, 8196, 0);
				unk_0x1555F2F21E8F4C75(0, 1);
				unk_0xB970266897BDB48D(unk_0xE2D3D51028F0428A(), 1, 1);
				func_168(1, 1, 0);
				if (!unk_0xF68107C40359970C(uLocal_262))
				{
					unk_0x7A997A0A971D305F(1273.885f, -1718.004f, 53.7715f, 3f, 1, 0, 0, 0);
					unk_0x51BB443B279E4104(uLocal_262);
					unk_0xC64B6E13A6A7F517(uLocal_262, 1275.256f, -1722.368f, 53.655f, 1, 0, 0, 1);
					unk_0xBBF86885619695CE(uLocal_262, 12.6638f);
					unk_0xA8685678DDA27FC3(uLocal_262, joaat("MotionState_Walk"), 0, 0, 0);
					unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
					unk_0x202B28FEABEC4034(uLocal_262, joaat("weapon_unarmed"), 1);
				}
				uLocal_441 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 0);
				unk_0xDD786B89B15AA63F(uLocal_441, 1);
				unk_0x15F5DB94F871E803(uLocal_441, 1276.409f, -1719.918f, 56.1054f, -29.932f, 0f, 137.9132f, 50f, 0, 1, 1, 2);
				unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
				unk_0xEA5DEA46C3EE64D3(uLocal_440, "SET_DETAILS");
				func_167("FM_LEST_CAM");
				unk_0x6F06CF0E9AB02847();
				unk_0xEA5DEA46C3EE64D3(uLocal_440, "SET_LOCATION");
				func_167("FM_LEST_CAM2");
				unk_0x6F06CF0E9AB02847();
				if (unk_0x607B649F72D20B6A() == -1)
				{
					unk_0x5C3549D308EC0B7F("scanline_cam");
				}
				unk_0xCED9E32812D6C7C7(&uLocal_432, 15);
				func_7(&uLocal_442, 0, 0);
				unk_0xD69A0C3662175E68(func_119(12));
				unk_0xD69A0C3662175E68(joaat("prop_wheelchair_01_s"));
				unk_0x8FB472886552D737("MissLester1ALeadInOut");
				unk_0xCED9E32812D6C7C7(&uLocal_432, 23);
				if (!BitTest(uLocal_432, 17))
				{
					if (unk_0xEC32121F2E3875C8(208246292))
					{
						unk_0x7E15597AA5F53F9A(208246292, 0, 0, 0);
						unk_0xCED9E32812D6C7C7(&uLocal_432, 17);
					}
				}
				iLocal_439 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xF68107C40359970C(uLocal_262))
			{
				if (!BitTest(uLocal_432, 21))
				{
					if (func_184(&uLocal_442, 1000, 0))
					{
						unk_0xE1E1AF00CA06A2B7(uLocal_262, 1276.409f, -1719.918f, 56.1054f, -1, 0, 2);
						unk_0xCED9E32812D6C7C7(&uLocal_432, 21);
					}
				}
			}
			if (func_184(&uLocal_442, 1500, 0))
			{
				if (BitTest(uLocal_432, 17))
				{
					if (!unk_0xF68107C40359970C(uLocal_262))
					{
						if (!unk_0xF68107C40359970C(uLocal_261))
						{
							if (func_148(&uLocal_265, "FM_1AU", "FM_LESTCUT", 7, 0, 0, 0))
							{
								func_183(&uLocal_442);
								func_7(&uLocal_442, 0, 0);
								iLocal_439++;
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xF68107C40359970C(uLocal_262))
			{
				if (!func_228())
				{
					unk_0xD6A76BAB45A4B460(uLocal_262, 104, 1);
					unk_0xCED9E32812D6C7C7(&uLocal_432, 22);
					unk_0xC89EA639A6F338A6(uLocal_262);
					unk_0x7D1424753688EE7A(uLocal_262, 1273.576f, -1718.459f, 53.7715f, 1f, 20000, 1048576000, 0, 1193033728);
					func_183(&uLocal_442);
					func_7(&uLocal_442, 0, 0);
					iLocal_439++;
				}
			}
			break;
		
		case 3:
			if (!unk_0xF68107C40359970C(uLocal_262))
			{
				if (func_184(&uLocal_442, 5000, 0) || unk_0xD132EDDA78FF4A51(uLocal_262, 1275.138f, -1718.426f, 53.72994f, 1272.451f, -1719.627f, 55.45897f, 1.5625f, 0, 1, 0))
				{
					if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
					{
						unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), 1273.885f, -1718.004f, 53.7715f, 1, 0, 0, 1);
						unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 21.8709f);
						unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
						if (unk_0x4DE6A646AFB7CF5C(0) == 4)
						{
							unk_0xA8685678DDA27FC3(unk_0xE2D3D51028F0428A(), joaat("MotionState_Aiming"), 0, 0, 0);
							unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
						}
					}
					func_147();
					func_90(1, 1, 0, 1);
					unk_0xB0550BC91B0159D6(&uLocal_432, 22);
					unk_0x94953C3FF0664F66(0);
					unk_0x080C97B891E2F3AA(0, 1065353216);
					func_126(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
					unk_0xC099DA307DD6BC62(unk_0x9E2D6C50374FCFA9(), 1);
					unk_0xCED9E32812D6C7C7(&uLocal_432, 25);
					unk_0x91792061E06F1A74(0);
					unk_0xCED9E32812D6C7C7(&uLocal_432, 24);
					iLocal_439 = 99;
				}
			}
			break;
		
		case 99:
			if (unk_0xEC32121F2E3875C8(208246292))
			{
				unk_0x7E15597AA5F53F9A(208246292, 4, 0, 0);
				unk_0xCED9E32812D6C7C7(&uLocal_432, 19);
				iLocal_439 = 100;
			}
			break;
		
		case 100:
			return 1;
			break;
	}
	if (BitTest(uLocal_432, 15))
	{
		if (unk_0x0347CCBD719C8ADC(uLocal_440))
		{
			unk_0xEA5DEA46C3EE64D3(uLocal_440, "SET_TIME");
			if (unk_0x09FC827691DACE59() >= 0 && unk_0x09FC827691DACE59() <= 12)
			{
				unk_0x4F47E317C74C543B(unk_0x09FC827691DACE59());
			}
			else
			{
				unk_0x4F47E317C74C543B((unk_0x09FC827691DACE59() - 12));
			}
			unk_0x4F47E317C74C543B(unk_0x80F97D7D29800A1A());
			unk_0x4F47E317C74C543B(0);
			if (unk_0x09FC827691DACE59() >= 0 && unk_0x09FC827691DACE59() < 12)
			{
				func_167("FM_LEST_AM");
			}
			else
			{
				func_167("FM_LEST_PM");
			}
			unk_0x6F06CF0E9AB02847();
			unk_0xC4353D240DCE9533(uLocal_440, 255, 255, 255, 255, 0);
		}
	}
	if (BitTest(uLocal_432, 22))
	{
		if (!unk_0xF68107C40359970C(uLocal_262))
		{
			unk_0xD6A76BAB45A4B460(uLocal_262, 104, 1);
			unk_0x3E3D339BAD67F6F2(uLocal_262, 60, 1);
			unk_0x3E3D339BAD67F6F2(uLocal_262, 342, 1);
			unk_0x3E3D339BAD67F6F2(uLocal_262, 348, 1);
		}
	}
	if (BitTest(uLocal_432, 23))
	{
		if (func_143())
		{
			unk_0xB0550BC91B0159D6(&uLocal_432, 23);
		}
	}
	return 0;
}

int func_143()
{
	bool bVar0;
	
	unk_0xD69A0C3662175E68(func_119(12));
	unk_0xD69A0C3662175E68(joaat("prop_wheelchair_01_s"));
	unk_0x8FB472886552D737("missfinale_c2leadinoutfin_c_int");
	if (!unk_0xE5965CDF24F93A9F(uLocal_261))
	{
		if (unk_0x0152AA00FA3130F1(func_119(12)))
		{
			if (func_145(&iLocal_261, 12, 1276.39f, -1712.845f, 54.372f, 338.0729f, 1))
			{
				unk_0x50274A7EACA3133A(iLocal_261, 1);
				unk_0x9210F85E9CD785F1(iLocal_261, 1);
				func_144(&uLocal_265, 8, iLocal_261, "Lester", 0, 1);
				unk_0xD9D122A54FFE62B8(iLocal_261, 1, 0, 0, 0);
			}
		}
	}
	if (!unk_0xE5965CDF24F93A9F(uLocal_263))
	{
		if (unk_0x0152AA00FA3130F1(joaat("prop_wheelchair_01_s")))
		{
			iLocal_263 = unk_0x0E536D72AB30F4C8(joaat("prop_wheelchair_01_s"), 1276.39f, -1712.845f, 54.372f, 0, 0, 0);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_261))
	{
		return 0;
	}
	if (!unk_0xF68107C40359970C(iLocal_261))
	{
		if (!unk_0x6090FC735660B8F7(iLocal_261))
		{
			return 0;
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_263))
	{
		return 0;
	}
	if (!unk_0x6F940C2636C076AD("missfinale_c2leadinoutfin_c_int"))
	{
		return 0;
	}
	if (!unk_0xF68107C40359970C(iLocal_261))
	{
		uLocal_264 = unk_0x8F5F4164BF5FB513(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
		unk_0x950B26F4C891073F(iLocal_261, uLocal_264, "missfinale_c2leadinoutfin_c_int", "_LEADIN_LOOP1_LESTER", 1000f, -8f, 5, 0, 1148846080, 0);
		unk_0xAA8557AFE4A4A184(iLocal_263, uLocal_264, "_LEADIN_LOOP1_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, -8f, 4, 1148846080);
		unk_0xFE1CD80C2F7CBCFB(uLocal_264, 1);
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

int func_145(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_121(iParam1))
	{
		iVar0 = func_119(iParam1);
		unk_0xD69A0C3662175E68(iVar0);
		if (unk_0x0152AA00FA3130F1(iVar0))
		{
			if (unk_0xE5965CDF24F93A9F(*uParam0))
			{
				unk_0x05CB75C0837196F9(uParam0);
			}
			*uParam0 = unk_0xA8D58C3AADA2C41C(26, iVar0, Param2, fParam5, 0, 0);
			unk_0xDCB52C614B3660EC(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x5355BAA621C153CF(*uParam0, 3) == 0)
				{
					unk_0xE3752B10DC995E95(*uParam0, 5, 2, 0, 0);
				}
			}
			func_146(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0xF1A23B343DFEDFD0(iVar0);
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
	Global_96275[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_147()
{
	var uVar0;
	
	if (unk_0x876B1078E90C91CB(uLocal_441))
	{
		unk_0xDD786B89B15AA63F(uLocal_441, 0);
		unk_0x588DDCB644C6486A(uLocal_441, 0);
	}
	unk_0xB0550BC91B0159D6(&uLocal_432, 15);
	unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
	if (unk_0xE5965CDF24F93A9F(uLocal_262))
	{
		uVar0 = iLocal_262;
		unk_0x531055A66E7A812C(&uVar0);
	}
	unk_0x705B098546DEB18A(&uLocal_440);
	unk_0xDEABC7EC7DA2B48E();
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
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_149(sParam2, iParam3, 0);
}

int func_149(char* sParam0, int iParam1, bool bParam2)
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
					func_165();
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
		if (func_164(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_163();
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
			unk_0xB0550BC91B0159D6(&Global_8138, false);
			if (bParam2)
			{
				func_157();
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
				if (func_156())
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
			if (func_109())
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
			func_155();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_154();
		func_150();
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
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_151()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_153())
	{
		return 0;
	}
	if (func_152(unk_0x9E2D6C50374FCFA9()))
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
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD681CC2BC1084DB6(0);
	Global_21605 = 1;
}

void func_155()
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

int func_156()
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

void func_157()
{
	if (func_162(14))
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
		Global_20266 = func_158();
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

var func_158()
{
	func_159();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_159()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_161(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_160(unk_0xE2D3D51028F0428A());
			if (func_121(iVar0) && (!func_162(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_121(Global_113386.f_2363.f_539.f_4321))
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

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
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
	return Global_43052 == iParam0;
}

void func_163()
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

bool func_164(int iParam0, int iParam1)
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

void func_165()
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

void func_166(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_167(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_168(bool bParam0, int iParam1, bool bParam2)
{
	func_170();
	func_113(1);
	unk_0x3410421C60BF7143(1);
	unk_0xBA6C3C5E9E5A9442();
	func_106(1, 1, 1, 0, 0, 0, bParam2);
	func_169();
	func_104(12, 1, -1);
	func_103(0);
	unk_0x43F21FA00A1CE779(1, -1);
	unk_0xB60709BD0E075903(0);
	unk_0x72DB022C36FCEA24(0);
	func_113(1);
	func_135(1);
	Global_2703735.f_3428 = 1;
	if (bParam0)
	{
		if (!unk_0xC96A605CF3E9295B())
		{
			unk_0x3DC5858ACD1E01CB(1, iParam1);
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
	StringCopy(&(Global_1574747.f_1), unk_0x05CBA41180F5D521(), 32);
	Global_1574747.f_9 = unk_0x2E87280918B16506(&(Global_1574747.f_1));
}

void func_171(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_173();
	func_111(1);
	func_103(1);
	func_104(12, 1, -1);
	func_172();
	unk_0xB68BD12B3A8C52FD(0);
	if (bParam0)
	{
		unk_0xF0FF9641AD2902CC(unk_0x9E2D6C50374FCFA9(), iParam6);
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
	func_126(unk_0x9E2D6C50374FCFA9(), 0, iVar0, 0);
	if (bParam5)
	{
		if (unk_0xFF45C7CD7F890B51(unk_0xE2D3D51028F0428A()))
		{
			unk_0xC28A66E18D3390FD(unk_0xE2D3D51028F0428A(), 0);
		}
	}
}

void func_172()
{
	Global_23011.f_5 = 1;
}

void func_173()
{
	func_122(0);
	func_111(1);
}

void func_174()
{
	Global_2703735.f_833.f_9 = 1;
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
	if ((!func_178() && !func_177()) && Global_2715698)
	{
		Global_4718592.f_116524 = 0;
	}
}

bool func_177()
{
	return Global_2714762.f_691;
}

bool func_178()
{
	return Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_192 != 0;
}

void func_179()
{
	Global_2714762.f_756 = 1;
}

var func_180()
{
	return Global_2714762.f_735;
}

var func_181()
{
	return BitTest(Global_2714762.f_2, 11);
}

int func_182()
{
	switch (iLocal_260)
	{
		case 0:
			if (unk_0xF34D8FCAE3FD4EE4())
			{
				iLocal_260++;
			}
			break;
		
		case 1:
			if (unk_0xF34D8FCAE3FD4EE4())
			{
				func_117();
			}
			else
			{
				iLocal_260++;
			}
			break;
		
		case 2:
			if (iLocal_438)
			{
				if (!unk_0x496531E41FCF5116())
				{
					if (unk_0xA829C9A2767AC8EF() || unk_0xCB1EF1E7B77ADF4C())
					{
						unk_0x5A7ACD1CDF509B0D(500);
					}
					iLocal_438 = 0;
				}
			}
			else if (unk_0xA08A61313445DB46())
			{
				func_90(1, 1, 0, 1);
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), true, 0);
				unk_0x5E1F7FB772C73D20(1);
				if (iLocal_437 != 0)
				{
					unk_0xAED5221F05DAE55E(iLocal_437);
				}
				unk_0xB0550BC91B0159D6(&(Local_163[unk_0xF1354995C6159A78() /*3*/].f_2), true);
				iLocal_260++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	if (!BitTest(uLocal_432, 11))
	{
		if (unk_0x6F2E1326DB60D575("MP_1", 0))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), 1275.219f, -1722.503f, 53.655f, 1, 0, 0, 1);
				unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 228.4235f);
				unk_0xCED9E32812D6C7C7(&uLocal_432, 11);
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

bool func_185(var uParam0)
{
	return uParam0->f_1;
}

bool func_186(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_187(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_188(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xF847447D4467709D())
	{
		return 0;
	}
	if (func_228())
	{
		return 0;
	}
	if (!unk_0xE9E8955A780DDA01())
	{
		return 0;
	}
	if (func_193())
	{
		return 0;
	}
	if (func_220())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_221(unk_0x9E2D6C50374FCFA9(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_192(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (func_191())
	{
		return 0;
	}
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (Global_1836356)
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
	if (Global_75485)
	{
		return 0;
	}
	if (Global_2825428)
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
	return Global_2788198;
}

bool func_190()
{
	return Global_2714762.f_845;
}

bool func_191()
{
	return Global_2703735.f_2724.f_582;
}

int func_192(int iParam0)
{
	if (Global_2689235[iParam0 /*453*/].f_216 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_193()
{
	return unk_0x320D1840B6DAA1CC() <= Global_23150.f_6269 + 100;
}

int func_194()
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iLocal_262))
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			uVar0 = unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A());
			iLocal_262 = unk_0xA8D58C3AADA2C41C(4, uVar0, 1273.827f, -1717.873f, 53.7715f, 19.2225f, 0, 0);
			unk_0x9210F85E9CD785F1(iLocal_262, 1);
			unk_0x50274A7EACA3133A(iLocal_262, 1);
			unk_0xC70FD0E17F3B16A8(unk_0xE2D3D51028F0428A(), iLocal_262);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_262))
	{
		return 0;
	}
	if (!unk_0xF68107C40359970C(iLocal_262))
	{
		if (!unk_0x6090FC735660B8F7(iLocal_262))
		{
			return 0;
		}
	}
	return 1;
}

void func_195()
{
	unk_0x494B84826E4A775E(1);
	func_196(1, -1);
	unk_0x28BBFC5FEC1E27BD(1);
	if (func_39(133, -1))
	{
		func_33(133, 0, -1, 1);
	}
	Global_2714762.f_743 = 1;
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
			unk_0xB625F19076319E9C(0, iParam1);
			break;
		
		default:
			uVar1 = func_82(iParam1);
			iVar0 = unk_0x5D851A9195129CE9(uVar1);
			if (BitTest(iVar0, bParam0))
			{
				unk_0xB0550BC91B0159D6(&iVar0, bParam0);
				unk_0xB625F19076319E9C(iVar0, iParam1);
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
		if (!BitTest(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_216, bParam0))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_216), bParam0);
		}
	}
	else if (BitTest(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_216, bParam0))
	{
		unk_0xB0550BC91B0159D6(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_216), bParam0);
	}
}

int func_198()
{
	var uVar0;
	
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	if (bLocal_431)
	{
		if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1274.547f, -1720.694f, 53.6807f) > 500f)
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_262))
			{
				uVar0 = iLocal_262;
				unk_0x531055A66E7A812C(&uVar0);
			}
			return 0;
		}
		func_194();
	}
	if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1273.804f, -1722.466f, 53.21749f, 1277.147f, -1720.779f, 56.09249f, 3.4375f, 0, 1, 0))
	{
		return 0;
	}
	return 1;
}

int func_199(bool bParam0)
{
	if (((((((func_213(unk_0x9E2D6C50374FCFA9()) || func_212(unk_0x9E2D6C50374FCFA9())) || func_211(unk_0x9E2D6C50374FCFA9())) || func_210(unk_0x9E2D6C50374FCFA9())) || func_209(unk_0x9E2D6C50374FCFA9())) || func_208(unk_0x9E2D6C50374FCFA9())) || func_207(unk_0x9E2D6C50374FCFA9())) || func_206(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_205(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
	}
	else if (func_200(unk_0x9E2D6C50374FCFA9()))
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
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_202(Global_2689235[iParam0 /*453*/].f_318.f_6) == 19;
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
	}
	return -1;
}

int func_203(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_202(Global_2689235[iParam0 /*453*/].f_318.f_6) == 15;
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
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_202(Global_2689235[iParam0 /*453*/].f_318.f_6) == 16;
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
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_202(Global_2689235[iParam0 /*453*/].f_318.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_206(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_202(Global_2689235[iParam0 /*453*/].f_318.f_6) == 21;
			}
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_202(Global_2689235[iParam0 /*453*/].f_318.f_6) == 24;
			}
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_202(Global_2689235[iParam0 /*453*/].f_318.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_209(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_202(Global_2689235[iParam0 /*453*/].f_318.f_6) == 23;
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
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_202(Global_2689235[iParam0 /*453*/].f_318.f_6) == 11;
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
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_202(Global_2689235[iParam0 /*453*/].f_318.f_6) == 17;
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
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_153())
			{
				return func_202(Global_2689235[iParam0 /*453*/].f_318.f_6) == 20;
			}
		}
	}
	return 0;
}

var func_213(int iParam0)
{
	return func_214(&(Global_2689235[iParam0 /*453*/].f_434), 0);
}

var func_214(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

var func_215()
{
	return Global_1943927;
}

int func_216()
{
	int iVar0;
	
	return 0;
	if (func_217(8))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_217(int iParam0)
{
	var uVar0;
	
	if (Global_2725437)
	{
		return 1;
	}
	uVar0 = func_25(2481, -1, 0);
	return BitTest(uVar0, iParam0);
}

bool func_218()
{
	return Global_1575058;
}

int func_219()
{
	return Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_193;
}

bool func_220()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 0);
}

int func_221(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_222(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[iParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_222(int iParam0)
{
	return func_223(iParam0);
}

var func_223(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

int func_224(int iParam0)
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

bool func_225()
{
	return func_226();
}

bool func_226()
{
	return Global_1641031.f_40 == 3;
}

int func_227()
{
	if (Global_21605 == 4)
	{
		if (unk_0xA3329B7A7520670E())
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

int func_228()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)
{
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_139, 25);
}

int func_230()
{
	return Local_83.f_0;
}

int func_231(int iParam0)
{
	return Local_163[iParam0 /*3*/];
}

void func_232(var uParam0)
{
	if (func_234(1))
	{
		if (unk_0x12DD4A0B247D9B4D(*uParam0) && !unk_0xC35F1F30893AD957(*uParam0))
		{
			unk_0xA241A7085A493F20(*uParam0, 1);
			unk_0x0FB22292B765BCFA(*uParam0, 0);
			unk_0x7A610B2EC5DA34E7(*uParam0, 5);
		}
	}
	else if (unk_0x12DD4A0B247D9B4D(*uParam0) && (unk_0xC35F1F30893AD957(*uParam0) && !func_233()))
	{
		unk_0xA241A7085A493F20(*uParam0, 0);
		unk_0x0FB22292B765BCFA(*uParam0, 1);
	}
}

int func_233()
{
	return 0;
}

bool func_234(bool bParam0)
{
	return func_235(unk_0x9E2D6C50374FCFA9(), bParam0);
}

bool func_235(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_236(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_153();
}

int func_236(int iParam0)
{
	if (iParam0 != func_153())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_153())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

void func_237()
{
	var uVar0;
	
	func_12();
	func_197(12, 0);
	func_75();
	if (iLocal_437 != 0)
	{
		unk_0xAED5221F05DAE55E(iLocal_437);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_262))
	{
		uVar0 = iLocal_262;
		unk_0x531055A66E7A812C(&uVar0);
	}
	if (unk_0x12DD4A0B247D9B4D(Global_1931382))
	{
		unk_0xAAD76B24A5282FDD(Global_1931382, 0);
		unk_0xFFD8EB5462B07B59(&Global_1931382);
	}
	if (BitTest(uLocal_432, 17))
	{
		if (unk_0xEC32121F2E3875C8(208246292))
		{
			unk_0x7E15597AA5F53F9A(208246292, 4, 0, 0);
		}
	}
	if (BitTest(uLocal_432, 19))
	{
		unk_0x5089DD830FA61D71(0, 37, 1);
		unk_0x5089DD830FA61D71(0, 14, 1);
		unk_0x5089DD830FA61D71(0, 15, 1);
	}
	if (func_240())
	{
		func_239();
	}
	if (unk_0x9315DBF7D972F07A())
	{
		unk_0xB0550BC91B0159D6(&(Local_163[unk_0xF1354995C6159A78() /*3*/].f_2), true);
	}
	if (BitTest(uLocal_432, 25))
	{
		unk_0xC099DA307DD6BC62(unk_0x9E2D6C50374FCFA9(), 0);
	}
	if (BitTest(uLocal_432, 24))
	{
		unk_0x91792061E06F1A74(1);
	}
	func_118();
	unk_0x6D23F8C14190D353();
	func_238();
}

void func_238()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_239()
{
	Global_2703735.f_833.f_9 = 0;
}

bool func_240()
{
	return Global_2703735.f_833.f_9;
}

int func_241()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_247())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_246())
	{
		return 1;
	}
	if (func_245(159))
	{
		if (!func_244())
		{
			return 1;
		}
	}
	if (func_245(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_242() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_242()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_242()
{
	switch (func_27())
	{
		case 0:
			return func_243();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_243()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_244()
{
	return Global_2714762.f_698;
}

int func_245(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_246()
{
	return Global_2725403;
}

bool func_247()
{
	return Global_2714762.f_693;
}

void func_248()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_249(struct<21> Param0)
{
	func_253(func_254(Param0.f_0), Param0);
	func_251(0, -1, 0);
	unk_0x21F2B09183F31D02(&Local_83, 79, 0);
	unk_0x7157B1051528D729(&Local_163, 97, 0);
	unk_0x2C07CBAFAC54A645(0);
	if (!func_250())
	{
		func_237();
	}
}

int func_250()
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
		if (func_247())
		{
			return 0;
		}
		if (func_245(157))
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

int func_251(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_238();
			}
			else
			{
				return 0;
			}
		}
		if (!func_252(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_238();
					}
					else
					{
						return 0;
					}
				}
				if (func_247())
				{
					if (!bParam2)
					{
						func_238();
					}
					else
					{
						return 0;
					}
				}
				if (func_245(157))
				{
					if (!bParam2)
					{
						func_238();
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
					func_238();
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
				func_238();
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
			func_238();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_252(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_253(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		func_238();
	}
	unk_0xD9B114A8D3A8319F(uParam0, 0, Param1.f_16);
}

int func_254(int iParam0)
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
		
		case 163:
			return 32;
		
		case 164:
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
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 165:
			return 32;
		
		case 166:
			return 32;
		
		case 170:
			return 32;
		
		case 168:
			return 32;
		
		case 169:
			return 32;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 171:
			return 32;
		
		case 172:
			return 32;
		
		case 177:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 180:
			return 32;
		
		case 181:
			return 2;
		
		case 186:
			return 1;
		
		case 182:
			return 2;
		
		case 183:
			return 4;
		
		case 184:
			return 2;
		
		case 185:
			return 2;
		
		case 167:
			return 1;
		
		case 187:
			return 2;
		
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
			return 0;
		
		case 209:
			return 1;
		
		case 194:
			return 4;
		
		case 197:
			return 4;
		
		case 198:
			return 1;
		
		case 199:
			return 1;
		
		case 205:
			return 1;
		
		case 201:
			return 2;
		
		case 206:
			return 1;
		
		case 202:
			return 1;
		
		case 200:
			return 2;
		
		case 203:
			return 8;
		
		case 204:
			return 8;
		
		case 207:
			return 1;
		
		case 208:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 195:
			return 16;
		
		case 196:
			return 32;
		
		default:
	}
	switch (func_255(func_256(iParam0, 1)))
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

int func_255(int iParam0)
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
		
		default:
	}
	return -1;
}

int func_256(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 181:
			return 15;
		
		case 188:
			return 8;
		
		case 182:
			return 14;
		
		case 186:
			return 122;
		
		case 189:
			return 1;
		
		case 187:
			return 5;
		
		case 190:
			return 6;
		
		case 183:
			return 11;
		
		case 191:
			return 0;
		
		case 192:
			return 2;
		
		case 184:
			return 13;
		
		case 193:
			return 3;
		
		case 185:
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
		
		default:
	}
	if (bParam1)
	{
	}
	return 304;
}

