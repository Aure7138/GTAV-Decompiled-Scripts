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
	struct<55> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_118 = 0;
	struct<5> Local_119[32];
	int iLocal_280 = 0;
	int iLocal_281[3] = { 0, 0, 0 };
	int iLocal_285 = 0;
	bool bLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	struct<3> Local_290 = { 0, 0, 0 } ;
	var uLocal_293 = 0;
	int iLocal_294 = 0;
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 16;
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
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	bLocal_286 = -1;
	iLocal_289 = -1;
	if (unk_0xA26A9A07F761D8F8())
	{
		func_562(ScriptParam_0);
	}
	while (true)
	{
		func_561();
		if (func_554())
		{
			func_551();
		}
		uLocal_293 = unk_0x0DB7F8294D73598B();
		func_542();
		func_539();
		func_534();
		func_533();
		switch (func_532(unk_0xD056B8CB0E6A5169()))
		{
			case 0:
				if (func_531() == 1)
				{
					Local_119[unk_0xD056B8CB0E6A5169() /*5*/] = 1;
				}
				else if (func_531() == 4)
				{
					Local_119[unk_0xD056B8CB0E6A5169() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_531() == 1)
				{
					func_525();
				}
				else if (func_531() == 0)
				{
					func_519();
					Local_119[unk_0xD056B8CB0E6A5169() /*5*/] = 0;
				}
				else if (func_531() == 4)
				{
					Local_119[unk_0xD056B8CB0E6A5169() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_495();
				func_493(&(Local_63.f_54));
				if (func_492(&(Local_63.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < func_491(bLocal_286))
					{
						func_495();
						iVar0++;
					}
					Local_119[unk_0xD056B8CB0E6A5169() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_119[unk_0xD056B8CB0E6A5169() /*5*/] = 4;
			
			case 4:
				func_265();
				break;
		}
		if (unk_0xE85391CF212DE622())
		{
			func_263();
			func_262();
			func_261();
			switch (func_531())
			{
				case 0:
					func_260();
					if (func_256())
					{
						if (!unk_0x055111B11E6624FD(unk_0xF2CFBB1105511E1A(iLocal_288), 0))
						{
							func_254(unk_0xF2CFBB1105511E1A(iLocal_288));
						}
						else
						{
							Local_63.f_36 = { Local_290 };
						}
						unk_0x061B1200C95204CB(&(Local_63.f_2), 6);
						Local_63.f_0 = 1;
					}
					break;
				
				case 1:
					if (func_65())
					{
						func_64();
						func_63();
					}
					func_45();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (func_531() < 4)
	{
		if (func_22())
		{
			iLocal_294 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_491(bLocal_286) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_63.f_0 = 4;
		}
	}
}

void func_2()
{
	var uVar0;
	struct<14> Var1;
	
	if (BitTest(Local_63.f_10[iLocal_294 /*7*/].f_2, 1) || BitTest(Local_63.f_10[iLocal_294 /*7*/].f_2, 6))
	{
		if (unk_0x7E2E2E8A648611F4(Local_63.f_10[iLocal_294 /*7*/]))
		{
			if (unk_0x7DE17ACDD8BA2642(unk_0x0DB8386015E986B7(Local_63.f_10[iLocal_294 /*7*/])))
			{
				if (unk_0x055111B11E6624FD(unk_0x0DB8386015E986B7(Local_63.f_10[iLocal_294 /*7*/]), 0))
				{
					if (!BitTest(Local_63.f_10[iLocal_294 /*7*/].f_2, 6))
					{
						if (bLocal_286 == 0)
						{
							Local_63.f_48++;
							if (!BitTest(Local_63.f_2, 12))
							{
								if (unk_0x88B3E6B9F291E29C(Local_63.f_10[iLocal_294 /*7*/], &uVar0) == iLocal_288)
								{
									unk_0xECDAB41968FF21A8(&(Local_63.f_2), 12);
								}
							}
							if ((Local_63.f_42 == iLocal_294 && !BitTest(Local_63.f_2, 5)) || Local_63.f_48 == func_491(bLocal_286))
							{
								Var1.f_2 = -1218457646;
								Var1.f_10 = iLocal_288;
								Var1.f_11 = iLocal_287;
								if (func_491(bLocal_286) > 1)
								{
									Var1.f_12 = unk_0xADCF72047FEB806E(true);
								}
								else
								{
									Var1.f_12 = unk_0xADCF72047FEB806E(false);
								}
								Var1.f_3 = Local_63.f_43;
								func_20(Var1, func_21(1));
								if (Local_63.f_42 == iLocal_294)
								{
									unk_0xECDAB41968FF21A8(&(Local_63.f_2), 5);
								}
							}
							else if (!BitTest(Local_63.f_2, 5))
							{
								Var1.f_2 = 1821738714;
								Var1.f_11 = iLocal_287;
								func_20(Var1, func_21(1));
							}
						}
						unk_0xECDAB41968FF21A8(&(Local_63.f_10[iLocal_294 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!BitTest(Local_63.f_10[iLocal_294 /*7*/].f_2, 5))
					{
						unk_0xECDAB41968FF21A8(&iLocal_280, 2);
					}
					unk_0xECDAB41968FF21A8(&iLocal_280, true);
				}
			}
		}
	}
	else
	{
		unk_0xECDAB41968FF21A8(&iLocal_280, true);
		unk_0xECDAB41968FF21A8(&iLocal_280, 2);
	}
	func_3(iLocal_294);
	iLocal_294++;
	if (iLocal_294 >= func_491(bLocal_286))
	{
		iLocal_294 = 0;
		if (BitTest(Local_63.f_1, 0))
		{
			if (!BitTest(iLocal_280, 1))
			{
				if (!BitTest(Local_63.f_1, 1))
				{
					unk_0xECDAB41968FF21A8(&(Local_63.f_1), true);
				}
			}
			if (!BitTest(iLocal_280, 2))
			{
				if (!BitTest(Local_63.f_1, 9))
				{
					unk_0xECDAB41968FF21A8(&(Local_63.f_1), 9);
				}
			}
		}
		unk_0x061B1200C95204CB(&iLocal_280, true);
		unk_0x061B1200C95204CB(&iLocal_280, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (unk_0xE85391CF212DE622())
	{
		if (unk_0x7E2E2E8A648611F4(Local_63.f_10[iParam0 /*7*/]))
		{
			iVar0 = unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]);
			if (!unk_0x055111B11E6624FD(iVar0, 0))
			{
				if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_63.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_19(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						unk_0xECDAB41968FF21A8(&(Local_63.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_63.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((unk_0x95914E6BD5323353(iVar0) == 2 || (Global_2657589[iLocal_288 /*466*/].f_246 != -1 && func_18(Global_2657589[iLocal_288 /*466*/].f_246) == 4)) || BitTest(Global_1853910[iLocal_288 /*862*/].f_861, 14)) || func_16(iLocal_288, 0)) || func_9(iLocal_288))
								{
									Local_63.f_10[iParam0 /*7*/].f_3 = uLocal_293;
									unk_0xECDAB41968FF21A8(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((unk_0x95914E6BD5323353(iVar0) != 2 && Global_2657589[iLocal_288 /*466*/].f_246 == -1) && !BitTest(Global_1853910[iLocal_288 /*862*/].f_861, 14)) && !func_16(iLocal_288, 0)) && !func_9(iLocal_288))
							{
								unk_0x061B1200C95204CB(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (unk_0x55DB5FC567C065D9(uLocal_293, Local_63.f_10[iParam0 /*7*/].f_3) > 10000 || unk_0x95914E6BD5323353(iVar0) != 2)
							{
								if (!BitTest(Local_63.f_2, 10))
								{
									unk_0xECDAB41968FF21A8(&(Local_63.f_2), 10);
									Local_63.f_39 = { func_8(iLocal_288) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_491(bLocal_286))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (unk_0xB3C2812E280A588D(iVar0) == 3f && !unk_0x97247A0CAE4CEFB6(iVar0, 118, 1))
									{
										unk_0xECDAB41968FF21A8(&(Local_63.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (BitTest(Local_63.f_2, 1))
						{
							unk_0xECDAB41968FF21A8(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_288, 1, 1))
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(unk_0x30BE8A934C020461(iVar0, 1), unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iLocal_288), 1), 25f) || !func_5(unk_0x30BE8A934C020461(iVar0, 1), unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iLocal_288), 1), 625f))
								{
									unk_0xECDAB41968FF21A8(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(unk_0x30BE8A934C020461(iVar0, 1), unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iLocal_288), 1)) || (unk_0xA6AA485513271FDF(iVar0) && unk_0x3B30C0E6D3B00F6B(iVar0) == unk_0xF2CFBB1105511E1A(iLocal_288)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (BitTest(Local_63.f_2, 1))
						{
							unk_0xECDAB41968FF21A8(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_288, 1, 1))
						{
							if (!func_4(unk_0x30BE8A934C020461(iVar0, 1), unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iLocal_288), 1)) && !(unk_0xA6AA485513271FDF(iVar0) && unk_0x3B30C0E6D3B00F6B(iVar0) == unk_0xF2CFBB1105511E1A(iLocal_288)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (unk_0x97247A0CAE4CEFB6(iVar0, 118, 1))
								{
									unk_0xECDAB41968FF21A8(&(Local_63.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x2655A8EC638E4FD1((Param3.f_2 - Param0.f_2)) < 2f)
	{
		Var0.f_0 = Param0.f_0;
		Var0.f_1 = Param0.f_1;
		Var3.f_0 = Param3.f_0;
		Var3.f_1 = Param3.f_1;
		if (func_5(Var0, Var3, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (unk_0xB7A628320EFF8E47(Param0, Param3) < fParam6)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)
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

void func_7(int iParam0, int iParam1)
{
	Local_63.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iParam0), 0);
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE6DEE82DB0922DF0(iParam0))
	{
		if (func_14(iParam0, 1))
		{
			iVar0 = unk_0xF2CFBB1105511E1A(iParam0);
			iVar1 = func_11(iParam0);
			if (unk_0x7DE17ACDD8BA2642(iVar1))
			{
				if (unk_0xFBD273FDBCF0C5BD(iVar1, 0))
				{
					if (unk_0xE0D346789C5160EB(iVar0, iVar1, 0))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		if (unk_0x19D6457970A9D67E("MPBitset", 3) && unk_0x2B6E67EB7FF3FD10(iParam0, "MPBitset"))
		{
			iVar0 = unk_0xC2DE378329C46B2E(iParam0, "MPBitset");
			if (BitTest(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(int iParam0)
{
	if (func_14(iParam0, 1))
	{
		return Global_2793044.f_5225.f_226[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_13();
}

int func_13()
{
	return -1;
}

bool func_14(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_13();
}

int func_15(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_13())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = unk_0xF2CFBB1105511E1A(iParam0);
		if (unk_0x3C3D6D026CF7F51B(iVar0, iParam1))
		{
			if (func_17(unk_0x95DC39736F6748E3(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)
{
	if (Global_78558)
	{
		if (unk_0x7DE17ACDD8BA2642(iParam0) && (!bParam1 || unk_0xFBD273FDBCF0C5BD(iParam0, 0)))
		{
			if (unk_0x2B6E67EB7FF3FD10(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(int iParam0)
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

int func_19(int iParam0, bool bParam1)
{
	if (unk_0x19D6457970A9D67E("AttributeDamage", 3))
	{
		if (unk_0x2B6E67EB7FF3FD10(iParam0, "AttributeDamage"))
		{
			if (BitTest(unk_0xC2DE378329C46B2E(iParam0, "AttributeDamage"), bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 548471420;
	Param0.f_1 = unk_0x93E99A2DBCBA9CFA();
	if (!iParam14 == 0)
	{
		unk_0x46F55A5B9F053761(1, &Param0, 14, iParam14);
	}
}

int func_21(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar1)))
		{
			iVar2 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x93E99A2DBCBA9CFA() || iParam0)
				{
					unk_0xECDAB41968FF21A8(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_22()
{
	if (BitTest(Local_63.f_1, 0))
	{
		if (bLocal_286 == 1)
		{
			if (BitTest(Local_63.f_1, 4))
			{
				unk_0xECDAB41968FF21A8(&(Local_63.f_3), 11);
				return 1;
			}
		}
		else if (BitTest(Local_63.f_1, 1))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_3), false);
			return 1;
		}
	}
	else if (BitTest(Local_63.f_1, 2))
	{
		unk_0xECDAB41968FF21A8(&(Local_63.f_3), true);
		unk_0xECDAB41968FF21A8(&Global_1926701, bLocal_286);
		return 1;
	}
	if (BitTest(Local_63.f_3, 12))
	{
		return 1;
	}
	if (bLocal_286 == 0)
	{
		if (BitTest(Local_63.f_2, 2))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_3), 2);
			return 1;
		}
		if (BitTest(Local_63.f_2, 8))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_3), 8);
			return 1;
		}
		if (BitTest(Local_63.f_2, 5))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_3), 3);
			return 1;
		}
		if (BitTest(Local_63.f_2, 9))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_3), 9);
			return 1;
		}
		if (BitTest(Local_63.f_1, 15))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_288, 0, 1))
	{
		if (bLocal_286 != 0 || !BitTest(Local_63.f_2, 1))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_43(iLocal_288, 129))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 13);
			unk_0xECDAB41968FF21A8(&(Local_63.f_3), 8);
			return 1;
		}
		if (func_43(iLocal_288, 131) || BitTest(Global_1894573[iLocal_288 /*608*/].f_1, 11))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 13);
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_43(iLocal_288, 136) || (func_42(unk_0x93E99A2DBCBA9CFA(), 24) && func_41(iLocal_288)))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_43(iLocal_288, 146))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_40(unk_0x93E99A2DBCBA9CFA()) && ((func_39(unk_0x93E99A2DBCBA9CFA()) == 148 || func_39(unk_0x93E99A2DBCBA9CFA()) == 142) || func_39(unk_0x93E99A2DBCBA9CFA()) == 164))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(unk_0x93E99A2DBCBA9CFA()) == 153)
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(unk_0x93E99A2DBCBA9CFA()) && func_39(unk_0x93E99A2DBCBA9CFA()) == 170)
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(unk_0x93E99A2DBCBA9CFA()) == 167)
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(unk_0x93E99A2DBCBA9CFA()) == 168)
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(unk_0x93E99A2DBCBA9CFA()) && func_39(unk_0x93E99A2DBCBA9CFA()) == 238)
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(unk_0x93E99A2DBCBA9CFA()) && func_39(unk_0x93E99A2DBCBA9CFA()) == 249)
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			return 1;
		}
		switch (func_36(unk_0x93E99A2DBCBA9CFA()))
		{
			case 6:
			case 7:
				if (func_35())
				{
					unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
					return 1;
				}
				break;
		}
		if (func_34(iLocal_288))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_33(iLocal_288))
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(iLocal_288) == 276)
		{
			if (func_31(iLocal_288) == 3)
			{
				unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
				return 1;
			}
		}
		if (func_39(iLocal_288) == 309)
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			return 1;
		}
		if (unk_0x055111B11E6624FD(unk_0xF2CFBB1105511E1A(iLocal_288), 0))
		{
			if (bLocal_286 == 1)
			{
				if (BitTest(Local_63.f_1, 0))
				{
					unk_0xECDAB41968FF21A8(&(Local_63.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (bLocal_286 == 1)
			{
				if (func_43(iLocal_288, 146))
				{
					unk_0xECDAB41968FF21A8(&(Local_63.f_3), 7);
					return 1;
				}
				if (!BitTest(Local_63.f_1, 16))
				{
					if (unk_0x55DB5FC567C065D9(uLocal_293, Local_63.f_9) > func_30())
					{
						unk_0xECDAB41968FF21A8(&(Local_63.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					unk_0xECDAB41968FF21A8(&(Local_63.f_3), 7);
					return 1;
				}
				if (func_23(iLocal_288, func_12(iLocal_287), 1))
				{
					unk_0xECDAB41968FF21A8(&(Local_63.f_3), 7);
					return 1;
				}
			}
			if (iLocal_289 != unk_0x14580F20CBCE4FA9(unk_0x1D25117F71EE3811(iLocal_288)))
			{
				unk_0xECDAB41968FF21A8(&(Local_63.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_23(int iParam0, int iParam1, bool bParam2)
{
	return func_24(iParam0, iParam1, bParam2, 1);
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_13() && iParam0 != func_13())
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1894573[iParam0 /*608*/].f_10 != func_13())
		{
			if (iParam1 == Global_1894573[iParam0 /*608*/].f_10)
			{
				return func_25(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)
{
	if (func_15(iParam0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 != func_13())
			{
				if (Global_1894573[iParam0 /*608*/].f_10 == iParam0)
				{
					if (Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_27()
{
	if (((func_29(iLocal_288, 1, 1) || func_42(iLocal_288, 0)) || func_42(iLocal_288, 7)) || func_28(iLocal_288))
	{
		return 1;
	}
	return 0;
}

bool func_28(int iParam0)
{
	return Global_1853910[iParam0 /*862*/].f_192 != 0;
}

int func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_30()
{
	if (Local_63.f_52)
	{
		return 300000;
	}
	return 120000;
}

int func_31(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

int func_32(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890444[iVar0 /*129*/].f_77.f_51 != 0;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA26A9A07F761D8F8())
	{
		return 0;
	}
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		return Global_2764905;
	}
	else
	{
		iVar0 = unk_0xF2CFBB1105511E1A(iParam0);
		if (unk_0x7DE17ACDD8BA2642(iVar0))
		{
			iVar1 = unk_0x504B9BB48D41C264(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_35()
{
	return Global_1835493;
}

int func_36(int iParam0)
{
	if (func_39(iParam0) == 243)
	{
		return func_31(iParam0);
	}
	return -1;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_38(iParam0, 9);
	}
	return 0;
}

var func_38(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_39(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_40(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_37(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

var func_41(int iParam0)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_1, 4);
}

var func_42(int iParam0, int iParam1)
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

int func_43(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/] == iParam1)
	{
		return func_44(iParam0);
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

void func_45()
{
	func_56();
	if (bLocal_286 != 1)
	{
		func_2();
	}
	func_46();
}

void func_46()
{
	int iVar0;
	
	if (func_6(unk_0xADCF72047FEB806E(iLocal_295), 0, 1))
	{
		if (bLocal_286 == 1)
		{
			if (unk_0xADCF72047FEB806E(bLocal_295) == iLocal_288)
			{
				if (!BitTest(Local_63.f_1, 16))
				{
					if (BitTest(Local_119[bLocal_295 /*5*/].f_1, 3))
					{
						unk_0xECDAB41968FF21A8(&(Local_63.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!BitTest(Local_63.f_1, 11))
			{
				if (func_52(unk_0xADCF72047FEB806E(bLocal_295)))
				{
					if (!BitTest(Local_63.f_4, bLocal_295))
					{
						unk_0xECDAB41968FF21A8(&(Local_63.f_1), 11);
						unk_0xECDAB41968FF21A8(&(Local_63.f_4), bLocal_295);
					}
				}
				else if (BitTest(Local_63.f_4, bLocal_295))
				{
					unk_0xECDAB41968FF21A8(&(Local_63.f_1), 11);
					unk_0x061B1200C95204CB(&(Local_63.f_4), bLocal_295);
				}
			}
			else if (BitTest(Local_119[bLocal_295 /*5*/].f_1, 2))
			{
				unk_0x061B1200C95204CB(&(Local_63.f_1), 11);
			}
			if (bLocal_286 == 0)
			{
				if (BitTest(Local_119[bLocal_295 /*5*/].f_1, 0))
				{
					if (Local_119[bLocal_295 /*5*/].f_2 != -1)
					{
						if (!BitTest(Local_63.f_2, 1))
						{
							unk_0xECDAB41968FF21A8(&(Local_63.f_2), true);
							Local_63.f_42 = Local_119[bLocal_295 /*5*/].f_2;
							Local_63.f_43 = Local_119[bLocal_295 /*5*/].f_3;
							if (!func_51())
							{
								func_50();
							}
						}
					}
					else if (!BitTest(Local_63.f_2, 9))
					{
						if (!func_51())
						{
							func_49();
						}
						iVar0 = 0;
						while (iVar0 < func_491(bLocal_286))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						unk_0xECDAB41968FF21A8(&(Local_63.f_2), 9);
						unk_0xECDAB41968FF21A8(&(Local_63.f_2), true);
					}
				}
				if (func_51())
				{
					if (!BitTest(iLocal_280, 17))
					{
						if (BitTest(Local_119[bLocal_295 /*5*/].f_1, 5))
						{
							func_50();
							unk_0xECDAB41968FF21A8(&iLocal_280, 17);
						}
						else if (BitTest(Local_119[bLocal_295 /*5*/].f_1, 6))
						{
							func_49();
							unk_0xECDAB41968FF21A8(&iLocal_280, 17);
						}
					}
				}
				if (!BitTest(Local_119[bLocal_295 /*5*/].f_1, 1))
				{
					if (!BitTest(iLocal_280, 3))
					{
						unk_0xECDAB41968FF21A8(&iLocal_280, 3);
					}
				}
				else if (unk_0xADCF72047FEB806E(bLocal_295) == iLocal_288)
				{
					if (bLocal_286 == 0)
					{
						if (!BitTest(Local_63.f_2, 1))
						{
							if (!BitTest(Local_63.f_2, 6))
							{
								unk_0xECDAB41968FF21A8(&(Local_63.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	bLocal_295++;
	if (bLocal_295 >= 32)
	{
		bLocal_295 = false;
		if (bLocal_286 == 0)
		{
			if (!BitTest(iLocal_280, 3))
			{
				func_48();
			}
			else
			{
				func_47();
			}
			unk_0x061B1200C95204CB(&iLocal_280, 3);
		}
	}
}

void func_47()
{
	if (BitTest(Local_63.f_2, 3))
	{
		unk_0x061B1200C95204CB(&(Local_63.f_2), 3);
	}
}

void func_48()
{
	if (!BitTest(Local_63.f_2, 3))
	{
		Local_63.f_6 = uLocal_293;
		unk_0xECDAB41968FF21A8(&(Local_63.f_2), 3);
	}
}

void func_49()
{
	struct<14> Var0;
	
	Var0.f_2 = -832016399;
	Var0.f_10 = iLocal_288;
	Var0.f_11 = iLocal_287;
	func_20(Var0, func_21(1));
}

void func_50()
{
	struct<14> Var0;
	
	Var0.f_2 = 532932991;
	Var0.f_10 = iLocal_288;
	Var0.f_11 = iLocal_287;
	if (func_491(bLocal_286) > 1)
	{
		Var0.f_12 = unk_0xADCF72047FEB806E(true);
	}
	else
	{
		Var0.f_12 = unk_0xADCF72047FEB806E(false);
	}
	Var0.f_3 = Local_63.f_43;
	func_20(Var0, func_21(1));
}

int func_51()
{
	if (unk_0xCC17806DB0C41C19())
	{
		return unk_0xF6919DB2626A28C5();
	}
	return 0;
}

bool func_52(int iParam0)
{
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		return func_55();
	}
	return BitTest(Global_1653913.f_241.f_136[func_54(10) /*33*/][iParam0], func_53(10));
}

int func_53(int iParam0)
{
	return (iParam0 % 32);
}

int func_54(int iParam0)
{
	return (iParam0 / 32);
}

var func_55()
{
	return Global_1574582;
}

void func_56()
{
	int iVar0;
	
	if (bLocal_286 == 0)
	{
		if (BitTest(Local_63.f_2, 3))
		{
			if (unk_0x55DB5FC567C065D9(uLocal_293, Local_63.f_6) > 10000)
			{
				if (BitTest(Local_63.f_2, 1))
				{
					unk_0xECDAB41968FF21A8(&(Local_63.f_2), 2);
				}
			}
		}
		if (BitTest(Local_63.f_1, 8))
		{
			if (!BitTest(Local_63.f_2, 1))
			{
				if (func_60())
				{
					unk_0xECDAB41968FF21A8(&(Local_63.f_2), 6);
					func_59();
				}
			}
		}
		if (!BitTest(Local_63.f_1, 0))
		{
			if (func_6(iLocal_288, 1, 1))
			{
				iVar0 = unk_0xF2CFBB1105511E1A(iLocal_288);
				if (func_58(iVar0))
				{
					func_254(iVar0);
				}
			}
		}
		if (!BitTest(Local_63.f_2, 1))
		{
			if (!func_6(iLocal_288, 1, 1) || func_28(iLocal_288))
			{
				unk_0xECDAB41968FF21A8(&(Local_63.f_1), 15);
			}
		}
	}
	if (BitTest(Local_63.f_1, 0))
	{
		if (BitTest(Local_63.f_1, 5))
		{
			if (!BitTest(Local_63.f_1, 4))
			{
				if (unk_0x55DB5FC567C065D9(uLocal_293, Local_63.f_5) > 600000)
				{
					unk_0xECDAB41968FF21A8(&(Local_63.f_1), 4);
				}
			}
		}
		if (!BitTest(Local_63.f_3, 12))
		{
			if (func_57())
			{
				unk_0xECDAB41968FF21A8(&(Local_63.f_3), 12);
			}
		}
	}
}

int func_57()
{
	switch (Local_63.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_800 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_800 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (unk_0x66599E73DBA5A850(iParam0))
	{
	}
	if (BitTest(Local_63.f_1, 17))
	{
		if (!unk_0x1589BC95A4C50F21(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_63.f_36, unk_0x30BE8A934C020461(iParam0, 1), 625f))
	{
		return 1;
	}
	return 0;
}

void func_59()
{
	func_519();
	Local_63.f_0 = 0;
}

int func_60()
{
	if ((((((((BitTest(Local_63.f_2, 6) || unk_0x8C1810CF0182E949(iLocal_288)) || func_29(iLocal_288, 1, 1)) || func_62(iLocal_288)) || func_42(iLocal_288, 0)) || func_42(iLocal_288, 7)) || func_28(iLocal_288)) || Global_2657589[iLocal_288 /*466*/].f_248) || func_61(unk_0xF2CFBB1105511E1A(iLocal_288), joaat("titan")))
	{
		return 1;
	}
	if (iLocal_288 != -1)
	{
		if (BitTest(Local_119[iLocal_288 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (!unk_0x66599E73DBA5A850(iParam0))
		{
			if (unk_0xACD39355028D39EF(iParam0))
			{
				uVar0 = unk_0x95DC39736F6748E3(iParam0, 0);
				if (unk_0x7DE17ACDD8BA2642(uVar0))
				{
					if (unk_0x504B9BB48D41C264(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 11))
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (!BitTest(Local_63.f_1, 5))
	{
		Local_63.f_5 = uLocal_293;
		unk_0xECDAB41968FF21A8(&(Local_63.f_1), 5);
	}
}

void func_64()
{
	if (BitTest(Local_63.f_1, 5))
	{
		unk_0x061B1200C95204CB(&(Local_63.f_1), 5);
	}
}

int func_65()
{
	bool bVar0;
	
	if (BitTest(Local_63.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_256())
		{
			if (bLocal_286 == 1)
			{
				bVar0 = true;
			}
			else if (func_251())
			{
				if (func_248())
				{
					if (func_247())
					{
						bVar0 = true;
					}
					else if (func_245(func_246(bLocal_286)))
					{
						if (func_71())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_63();
			if (func_66())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xE85391CF212DE622())
	{
		if (BitTest(Local_63.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (bLocal_286)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_491(bLocal_286))
					{
						if ((!unk_0x7E2E2E8A648611F4(Local_63.f_10[iVar0 /*7*/]) && !BitTest(Local_63.f_10[iVar0 /*7*/].f_2, 1)) && !BitTest(Local_63.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_67(iVar0, func_70(bLocal_286), Local_63.f_32, Local_63.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (bLocal_286 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_491(bLocal_286))
				{
					if (!unk_0x7E2E2E8A648611F4(Local_63.f_10[iVar0 /*7*/]))
					{
						if (!BitTest(Local_63.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			unk_0xECDAB41968FF21A8(&iLocal_280, true);
			unk_0xECDAB41968FF21A8(&iLocal_280, 2);
			unk_0xECDAB41968FF21A8(&iLocal_280, 3);
			unk_0xECDAB41968FF21A8(&iLocal_280, 4);
			unk_0xECDAB41968FF21A8(&(Local_63.f_1), false);
			unk_0xECDAB41968FF21A8(&Global_1926702, bLocal_286);
			return 1;
		}
	}
	return 0;
}

void func_67(int iParam0, var uParam1, struct<3> Param2, var uParam5)
{
	if (unk_0xE85391CF212DE622())
	{
		if (!unk_0x7E2E2E8A648611F4(Local_63.f_10[iParam0 /*7*/]))
		{
			if (unk_0x9E6BB98E57150635(0) < unk_0x3F6A5B7803413D6A(false, 0))
			{
				if (unk_0x334CA22E0AD77C7C(1))
				{
					if (func_245(func_246(bLocal_286)))
					{
						if (func_69(&(Local_63.f_10[iParam0 /*7*/]), 7, func_246(bLocal_286), Param2, uParam5, 1, 1, 1))
						{
							Local_63.f_10[iParam0 /*7*/].f_1 = bLocal_286;
							Local_63.f_10[iParam0 /*7*/].f_4 = uParam1;
							func_68(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_68(int iParam0)
{
	char cVar0[16];
	
	if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!unk_0x055111B11E6624FD(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
			{
				unk_0x8386356641D0DED1(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), Global_1837210);
				unk_0x0ED84C7CAC16D974(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 1);
				unk_0xD9ED40756C5B3368(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 0);
			}
			unk_0x03879CC8EF9E3635(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 0, 0, 0, 0, 0, 0, 1, 0);
			unk_0xE5069E489A2DE9E5(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 2);
			unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 13, 1);
			unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 41, 1);
			unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 20, 1);
			unk_0x598D91BBD045C1F3(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 132, 1);
			unk_0x598D91BBD045C1F3(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 118, 0);
			unk_0x598D91BBD045C1F3(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 311, 1);
			unk_0x5D9BB2F6626AA730(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 300f, 10);
			unk_0x71A535529C1CA5DF(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 1);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			unk_0x260A70C42FAA4EDC(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_63.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 0, 0);
					unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 2, 0);
					unk_0x8F758E95FCF28E36(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 2);
					unk_0x857E9EFB607AD64E(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 0);
					unk_0x59591B4AFCAA6F1D(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 0, -1, 0);
					unk_0x598D91BBD045C1F3(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 32, 1);
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 4, 0);
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 1024, 1);
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 128, 1);
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 32, 0);
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 8, 0);
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 64, 0);
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 256, 1);
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 1, 0);
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 2, 1);
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 16, 1);
					if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 0))
					{
						unk_0xECDAB41968FF21A8(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
					}
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 512, 1);
					unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 17, 0);
					unk_0xCBDC2B59922F92C3(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, 1, 1);
					unk_0xCFFDA1550DF82B52(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 0);
					unk_0xEDB03CCB50D11479(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), unk_0xF2CFBB1105511E1A(iLocal_288), -1, 0, 2);
					unk_0x361F9E062A7840CB(Local_63.f_10[iParam0 /*7*/], 1);
					break;
			}
			unk_0xED2BD879E739E86B(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), unk_0xF2DB717A73826179((Global_262145.f_165 * IntToFloat(unk_0x2935B4D6CE81318D(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]))))), 0);
			if (!BitTest(Local_63.f_1, 8))
			{
				unk_0xECDAB41968FF21A8(&(Local_63.f_1), 8);
			}
			unk_0xECDAB41968FF21A8(&(Local_63.f_10[iParam0 /*7*/].f_2), true);
		}
	}
}

int func_69(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0x334CA22E0AD77C7C(1))
	{
		return 0;
	}
	uVar0 = unk_0x69FDD9508259E5B5(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xFDCB460E036BA39B(uVar0);
	if (unk_0x7E2E2E8A648611F4(*uParam0))
	{
		unk_0xAD02BD8A749B79F9(uVar0, iParam9);
		if (unk_0xC59A2EB21A3834E2(uVar0))
		{
			if (bParam7)
			{
				unk_0x6CD289A8A1000001(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_71()
{
	struct<6> Var0;
	
	if (BitTest(Local_63.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (bLocal_286)
		{
			case 0:
				if (unk_0xE6DEE82DB0922DF0(iLocal_288) && func_6(iLocal_288, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_32 = -1082130432;
					Var0.f_34 = 1;
					Var0 = { unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iLocal_288), 1) };
					Var0.f_5 = 20f;
					if (func_72(Local_63.f_36, 40f, &(Local_63.f_32), &(Local_63.f_35), &Var0))
					{
						unk_0xECDAB41968FF21A8(&(Local_63.f_1), 3);
						return 1;
					}
				}
				else
				{
					unk_0xE8064964433196F6();
					unk_0x012897049FFE52B9();
					if (Global_2635559.f_2472)
					{
						unk_0x92A550B29F3691DA();
						Global_2635559.f_2472 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_72(struct<3> Param0, float fParam3, var uParam4, var uParam5, var uParam6)
{
	struct<17> Var0;
	struct<18> Var34;
	struct<3> Var65;
	
	if (uParam6->f_5 > (fParam3 - 20f))
	{
		uParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34.f_28 = -1;
	Var34 = { Param0 };
	Var34.f_3 = uParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_73(&Var34, uParam6, &Var0))
	{
		if ((uParam6->f_12 > 0f && uParam6->f_7) && uParam6->f_8)
		{
			Var65 = { Param0 - Var0[0 /*3*/] };
			if (Var65.f_2 > uParam6->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam6->f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_73(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	struct<3> Var18;
	struct<3> Var21;
	var uVar24;
	bool bVar25;
	struct<61> Var26;
	bool bVar87;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2635559.f_2466 == *uParam0 || !Global_2635559.f_2466.f_1 == uParam0->f_1) || !Global_2635559.f_2466.f_2 == uParam0->f_2) || !Global_2635559.f_2469 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2635559.f_2480 == uParam0->f_8 || !Global_2635559.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2635559.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2635559.f_2483 == uParam0->f_11) || !Global_2635559.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2635559.f_2483.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2635559.f_2480 == uParam0->f_8 || !Global_2635559.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2635559.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2635559.f_2483 == uParam0->f_11) || !Global_2635559.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2635559.f_2483.f_2 == uParam0->f_11.f_2) || !Global_2635559.f_2486 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2635559.f_2487 == uParam0->f_7)
		{
			bVar25 = true;
		}
		if (unk_0xB8CEC43FB7EF2D92(Global_2635559.f_2473) && !Global_2635559.f_2473 == unk_0xAF908D5E2416DA93())
		{
			bVar25 = true;
		}
	}
	if (bVar25)
	{
		if (Global_2635559.f_2464 == 1)
		{
			if (unk_0xB8CEC43FB7EF2D92(Global_2635559.f_2473))
			{
				if (Global_2635559.f_2473 == unk_0xAF908D5E2416DA93())
				{
					if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2470) < func_244(0))
					{
						return 0;
					}
				}
				else if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2470) < func_244(0))
				{
					return 0;
				}
			}
			unk_0xE8064964433196F6();
			unk_0x012897049FFE52B9();
			func_243();
		}
		Global_2635559.f_2464 = 0;
	}
	else if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2470) > func_244(0))
	{
		Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
		func_237();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0x350F65B0612C7A16(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2635559.f_2464)
	{
		unk_0xE8064964433196F6();
		unk_0x012897049FFE52B9();
		func_243();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_236(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x15F34AE5010EC735())
		{
			Global_2635559.f_2487 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2635559.f_2466 = { *uParam0 };
					Global_2635559.f_2469 = uParam0->f_4;
					break;
				
				case 1:
					Global_2635559.f_2480 = { uParam0->f_8 };
					Global_2635559.f_2483 = { uParam0->f_11 };
					Global_2635559.f_2486 = 0f;
					Global_2635559.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2635559.f_2480 = { uParam0->f_8 };
					Global_2635559.f_2483 = { uParam0->f_11 };
					Global_2635559.f_2486 = uParam0->f_14;
					Global_2635559.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_235(Var8.f_0, Var8.f_1);
			}
			Global_2635559.f_2465 = 1;
			Global_2635559.f_2464 = 1;
			Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
			Global_2635559.f_2470 = unk_0x0DB7F8294D73598B();
			Global_2635559.f_2473 = unk_0xAF908D5E2416DA93();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2635559.f_2464)
	{
		if (Global_2635559.f_2465 == 1)
		{
			if (unk_0x9ADDEEB34545AD94(fVar4, fVar5, fVar6, fVar7) || unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2471) > 5000)
			{
				Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var26.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_234(Global_4718592.f_166301))
					{
						Var26.f_9 = 1;
					}
					Var26.f_60 = uParam0->f_30;
					func_207(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_206(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2635559.f_2465 = 9;
				}
				else
				{
					Global_2635559.f_2465 = 2;
				}
			}
		}
		if (Global_2635559.f_2465 == 2)
		{
			if ((unk_0xEB34AFF09AB10808(Var11, Var14) || unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2471) > 15000) || unk_0x9E01F84110A94180(Var11, Var14) == 0)
			{
				Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
				if (uParam0->f_5 && !func_203(unk_0x93E99A2DBCBA9CFA(), 0))
				{
					Global_2635559.f_2465 = 3;
				}
				else
				{
					Global_2635559.f_2465 = 4;
				}
			}
			else if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2475) > 7000)
			{
				func_202(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2635559.f_2465 == 3)
		{
			if (func_201() || unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2471) > 10000)
			{
				Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
				Global_2635559.f_2465 = 4;
			}
		}
		if (Global_2635559.f_2465 == 4)
		{
			if (unk_0x15F34AE5010EC735())
			{
				unk_0xE8064964433196F6();
				unk_0x012897049FFE52B9();
			}
			else
			{
				iVar0 = 0;
				func_237();
				if (uParam0->f_5)
				{
					if (unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x2BC7E947F8C8689A(unk_0x93E99A2DBCBA9CFA(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
								Global_2635559.f_2465 = 5;
							}
							break;
						
						case 1:
							func_200(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x7F629900E1BACBE5(unk_0x93E99A2DBCBA9CFA(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
								Global_2635559.f_2465 = 5;
							}
							break;
						
						case 2:
							if (unk_0x7F629900E1BACBE5(unk_0x93E99A2DBCBA9CFA(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
								Global_2635559.f_2465 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
					Global_2635559.f_2465 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xF842385C6D91CA51(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_200(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x8CA5F0E81F53EAB7(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x8CA5F0E81F53EAB7(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2635559.f_2465 == 5)
		{
			if (func_126(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2635559.f_2491.f_5)
				{
					Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
					Global_2635559.f_2465 = 6;
				}
				else
				{
					Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x06A2A02CDC68090B(Var1.f_0, Var1.f_1);
						}
					}
					Global_2635559.f_2465 = 9;
				}
			}
			else if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2471) > 20000)
			{
				unk_0xE8064964433196F6();
				unk_0x012897049FFE52B9();
				Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
				Global_2635559.f_2465 = 8;
			}
		}
		if (Global_2635559.f_2465 == 6)
		{
			iVar0 = 0;
			Global_2635559.f_2491.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_125(uParam0->f_4))
				{
					if (unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_124(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
			Global_2635559.f_2465 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xF842385C6D91CA51(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_200(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x8CA5F0E81F53EAB7(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x8CA5F0E81F53EAB7(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2635559.f_2465 == 7)
		{
			if (func_126(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2635559.f_2625[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_206(Global_2635559.f_2625[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2635559.f_2625[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_122(Global_2635559.f_2625[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2635559.f_2625[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x9E76D45F14E2C578(Global_2635559.f_2625[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2635559.f_2625[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_76(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = unk_0x06A2A02CDC68090B(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2635559.f_2465 = 9;
			}
			else if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2471) > 20000)
			{
				Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
				Global_2635559.f_2465 = 8;
			}
		}
		if (Global_2635559.f_2465 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_75(Global_2635559.f_489))
				{
				}
			}
			else if (Global_2635559.f_2491.f_2)
			{
				func_74(uParam2, &(Global_2635559.f_2491.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar87 = false;
				}
				else
				{
					bVar87 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2635559.f_2466 };
				func_76(uParam2[0 /*3*/], 0, bVar87, 0, 0, uParam0, uParam1);
			}
			Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
			Global_2635559.f_2465 = 9;
		}
		if (Global_2635559.f_2465 == 9)
		{
			Global_2635559.f_2464 = 0;
			unk_0xE8064964433196F6();
			unk_0x012897049FFE52B9();
			func_243();
			return 1;
		}
		Global_2635559.f_2470 = unk_0x0DB7F8294D73598B();
	}
	return 0;
}

void func_74(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_75(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_76(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar3;
	struct<61> Var4;
	var uVar65;
	int iVar66;
	bool bVar67;
	int iVar68;
	struct<3> Var69;
	struct<3> Var72;
	struct<3> Var75;
	float fVar78;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar68 = 0;
	}
	else
	{
		iVar68 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar68 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var69 = { *uParam5 };
						if (func_125(uParam5->f_4) || !unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Var69)))
						{
							iVar68 += 4;
						}
						break;
					
					case 1:
						Var69 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Var69)))
						{
							iVar68 += 4;
						}
						break;
					
					case 2:
						Var69 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Var69)))
						{
							iVar68 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar68 += 4;
		}
	}
	if (func_90(*uParam0, &Var0, iVar68, iParam3, 1))
	{
	}
	else
	{
		bVar67 = true;
	}
	if (bVar67)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var4.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar66 = 0;
		while (iVar66 < 2)
		{
			Var4.f_38[iVar66 /*3*/] = { uParam6->f_13[iVar66 /*3*/] };
			Var4.f_45[iVar66] = uParam6->f_20[iVar66];
			iVar66++;
		}
		Var4.f_51 = uParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_88(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			Var4.f_9 = 1;
		}
		Var4.f_60 = uParam5->f_30;
		func_207(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var72 = { *uParam5 };
				fVar78 = uParam5->f_4;
				break;
			
			case 1:
				Var72 = { uParam5->f_8 };
				Var75 = { uParam5->f_11 };
				break;
			
			case 2:
				Var72 = { uParam5->f_8 };
				Var75 = { uParam5->f_11 };
				fVar78 = uParam5->f_14;
				break;
		}
		if (!func_87(Var0, uParam5->f_7, Var72, Var75, fVar78))
		{
			if (func_90(*uParam0, &Var0, iVar68, iParam3, 0))
			{
				if (!func_87(Var0, uParam5->f_7, Var72, Var75, fVar78))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var72 + Var75 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var72 };
					}
					if (unk_0xDE209AFE421606C6(Var0, &uVar65, 0, 0))
					{
						Var0.f_2 = uVar65;
					}
				}
			}
			else if (func_77(uParam0, 1, 1, 1, 1))
			{
				func_76(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var72 + Var75 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var72 };
				}
				if (unk_0xDE209AFE421606C6(Var0, &uVar65, 0, 0))
				{
					Var0.f_2 = uVar65;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2635559.f_667 = 1;
}

int func_77(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2640505[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2640505[iVar0 /*17*/].f_16))
			{
				if (func_86(*uParam0, &(Global_2640505[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2640505[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2640505[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_78(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_77(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_78(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_78(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_85(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_83(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_82(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_79(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_79(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_81(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0xB43F151D3D35221A(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_80(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_80(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = unk_0x2A488C176D52CCA5(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_81(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_81(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0xB43F151D3D35221A(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_80(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_80(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (unk_0x2A488C176D52CCA5(Var10, *uParam0, uParam0->f_1, 0f) < unk_0x2A488C176D52CCA5(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

float func_80(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_81(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_82(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

void func_83(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_84(&Var0, 0f, 0f, unk_0xD88C7A93096DA0F7(0f, 360f));
		}
		else
		{
			func_84(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

void func_84(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_0);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_1);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_2);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

Vector3 func_85(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_83(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_82(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_79(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x16BB0517A69884B4(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_206(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_122(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x9E76D45F14E2C578(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_86(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_206(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2635559.f_2735) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_122(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x9E76D45F14E2C578(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x9E76D45F14E2C578(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (unk_0x9E76D45F14E2C578(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x9E76D45F14E2C578(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_87(struct<3> Param0, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (unk_0x2A488C176D52CCA5(Param0, Param4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_122(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x9E76D45F14E2C578(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0x504B9BB48D41C264(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_13())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_13())
			{
				return func_89(Global_2657589[iParam0 /*466*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
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

int func_90(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_121(Param0, uParam3))
	{
		if (func_91(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0xD150D18ADFDC5159(Param0, 0, uParam3, iParam4))
	{
		if (func_91(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(struct<3> Param0, var uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_107(Global_2635559.f_512, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_95(*uParam3, 1056964608))
			{
				if (!func_92(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_92(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_94(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2642106[iVar4])
	{
		if (func_93(Var1, &(Global_2640710[iVar4 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&Var1, Global_2640710[iVar4 /*155*/][iVar0 /*7*/], Global_2640710[iVar4 /*155*/][iVar0 /*7*/].f_3, Global_2640710[iVar4 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642106[8])
	{
		if (func_93(Var1, &(Global_2640710[8 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&Var1, Global_2640710[8 /*155*/][iVar0 /*7*/], Global_2640710[8 /*155*/][iVar0 /*7*/].f_3, Global_2640710[8 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_93(struct<3> Param0, var uParam3)
{
	return unk_0x9E76D45F14E2C578(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_94(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2642117[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2642117[1])
	{
		if (Param0.f_0 < Global_2642121[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2642117[2])
	{
		if (Param0.f_0 < Global_2642121[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2642121[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2642121[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_95(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_104(unk_0x93E99A2DBCBA9CFA(), 1, 0))
	{
		if (Global_4980736.f_39172 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_39172)
			{
				if (Global_4980736.f_39173[iVar0 /*148*/].f_7 != 0)
				{
					if (func_96(Param0, Global_4980736.f_39173[iVar0 /*148*/], Global_4980736.f_39173[iVar0 /*148*/].f_6, Global_4980736.f_39173[iVar0 /*148*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_5991 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_5991)
			{
				if (Global_4980736.f_5994[iVar0 /*492*/].f_15 != 0)
				{
					if (func_96(Param0, Global_4980736.f_5994[iVar0 /*492*/], Global_4980736.f_5994[iVar0 /*492*/].f_3, Global_4980736.f_5994[iVar0 /*492*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_84915 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_84915)
			{
				if (Global_4980736.f_84919[iVar0 /*499*/].f_12 != 0)
				{
					if (func_96(Param0, Global_4980736.f_84919[iVar0 /*499*/], Global_4980736.f_84919[iVar0 /*499*/].f_3, Global_4980736.f_84919[iVar0 /*499*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058070.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058070.f_268)
			{
				if (unk_0x7DE17ACDD8BA2642(Global_1058070.f_233[iVar0]) && !unk_0x055111B11E6624FD(Global_1058070.f_233[iVar0], 0))
				{
					if (func_96(Param0, unk_0x30BE8A934C020461(Global_1058070.f_233[iVar0], 1), unk_0xD850DD08D5434072(Global_1058070.f_233[iVar0]), unk_0x504B9BB48D41C264(Global_1058070.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058070.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058070.f_266)
			{
				if (unk_0x7DE17ACDD8BA2642(Global_1058070.f_119[iVar0]) && !unk_0x055111B11E6624FD(Global_1058070.f_119[iVar0], 0))
				{
					if (func_96(Param0, unk_0x30BE8A934C020461(Global_1058070.f_119[iVar0], 1), unk_0xD850DD08D5434072(Global_1058070.f_119[iVar0]), unk_0x504B9BB48D41C264(Global_1058070.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_96(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_103(iParam7, 1008981770))
	{
		func_97(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0x9E76D45F14E2C578(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_97(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_84(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	func_98(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x2655A8EC638E4FD1((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x2655A8EC638E4FD1((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x2655A8EC638E4FD1((Var6.f_0 - Var3.f_0));
}

void func_98(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x36A2218D87DEF488(iParam0))
	{
		unk_0x1C97A6E4D8DA4B2F(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_101(iParam0);
		if (iVar0 != 0)
		{
			func_99(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(*uParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_99(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_100(iParam0, &Global_1577994);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x36A2218D87DEF488(Global_1577994[iVar0]))
		{
			unk_0x1C97A6E4D8DA4B2F(Global_1577994[iVar0], &(Global_1577998[iVar0 /*3*/]), &(Global_1578005[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1577998[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1578005[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1577998[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578005[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1577998[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578005[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1577998[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578005[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578012[iVar0] = (Global_1578005[iVar0 /*3*/] - Global_1577998[iVar0 /*3*/]);
		Global_1578015[iVar0] = (Global_1578005[iVar0 /*3*/].f_1 - Global_1577998[iVar0 /*3*/].f_1);
		Global_1578018[iVar0] = (Global_1578005[iVar0 /*3*/].f_2 - Global_1577998[iVar0 /*3*/].f_2);
		if (Global_1578012[iVar0] > Global_1578021)
		{
			Global_1578021 = Global_1578012[iVar0];
		}
		if (Global_1578018[iVar0] > Global_1578022)
		{
			Global_1578022 = Global_1578018[iVar0];
		}
		iVar0++;
	}
	Global_1578023 = (Global_1578021 * -0.5f);
	Global_1578026 = (Global_1578021 * 0.5f);
	Global_1578023.f_1 = ((((0.5f * Global_1578015[0]) + Global_1578015[1]) + Global_1577994.f_3) * -1f);
	Global_1578026.f_1 = (0.5f * Global_1578015[0]);
	Global_1578023.f_2 = (Global_1578018[0] * -0.5f);
	Global_1578026.f_2 = (Global_1578018[0] * 0.5f);
	*uParam1 = { Global_1578023 };
	*uParam2 = { Global_1578026 };
}

void func_100(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_102(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_103(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_98(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_104(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_105(iParam0))
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

bool func_105(int iParam0)
{
	return func_106(iParam0);
}

var func_106(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_107(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_114(Param0))
	{
		if (func_77(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_109(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_108(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (unk_0x2A488C176D52CCA5(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_83(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_108(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2635559.f_2737[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_111(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_78(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_111(Var2, &uVar1) || func_110(Var2))
			{
				Var2 = { *uParam0 };
				func_78(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_110(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2635559.f_596 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2635559.f_593);
		if (fVar0 < Global_2635559.f_596)
		{
			return 1;
		}
	}
	return 0;
}

int func_111(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_113())
	{
		return 0;
	}
	iVar1 = func_112();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2635559.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_86(Param0, &(Global_2635559.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_112()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635559.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_113()
{
	return Global_1950108.f_528;
}

int func_114(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2635559.f_515 && !Global_2635559.f_516)
	{
		if (!Global_2635559.f_45.f_317)
		{
			if (!func_118(unk_0x93E99A2DBCBA9CFA(), 1))
			{
				return 1;
			}
			if (!func_117(Param0, 1008981770))
			{
				if (!func_77(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_77(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_116(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_115(&(Global_2635559.f_45[iVar0 /*12*/])) };
					if (!func_77(&Var1, 0, 0, 0, 1))
					{
						if (!func_77(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_115(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_116(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635559.f_45[iVar0 /*12*/].f_9)
		{
			if (func_86(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_117(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635559.f_45[iVar0 /*12*/].f_9)
		{
			if (func_86(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_118(int iParam0, bool bParam1)
{
	if (func_120() != 0)
	{
		return func_119(iParam0) != 0;
	}
	return func_104(iParam0, bParam1, 0);
}

int func_119(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_2657589[iParam0 /*466*/].f_1;
	}
	return 0;
}

int func_120()
{
	return Global_32163;
}

int func_121(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2635559.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2635559.f_2262)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2635559.f_2263[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2635559.f_2263[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_122(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_123(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_123(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_124(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param0.f_0 > Param3.f_0)
	{
		Var3.f_0 = Param0.f_0;
		Var0.f_0 = Param3.f_0;
	}
	else
	{
		Var3.f_0 = Param3.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param3.f_1)
	{
		Var3.f_1 = Param0.f_1;
		Var0.f_1 = Param3.f_1;
	}
	else
	{
		Var3.f_1 = Param3.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param3.f_2)
	{
		Var3.f_2 = Param0.f_2;
		Var0.f_2 = Param3.f_2;
	}
	else
	{
		Var3.f_2 = Param3.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (unk_0x652D2EEEF1D3E62C(Var3 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_125(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_126(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2635559.f_2491.f_1 == 0 && Global_2635559.f_2491 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x51E00353AA7C8C23(&(Global_2635559.f_2491.f_1)))
			{
				case 0:
					func_198(uParam1, uParam2);
					if (!Global_2635559.f_2491.f_2)
					{
						if (uParam2->f_7 && Global_2635559.f_555.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2635559.f_2466 };
							}
							if (uParam1->f_5 && func_75(Global_2635559.f_489))
							{
								if (!Global_2635559.f_2491.f_5)
								{
									Global_2635559.f_2491.f_5 = 1;
								}
								else
								{
									func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_76(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0xD88C7A93096DA0F7(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_198(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x15F34AE5010EC735())
		{
			if (!unk_0xC4E6C26C01C762B9())
			{
				if (unk_0xDF3754F63FE8C705())
				{
					func_198(uParam1, uParam2);
					Global_2635559.f_2491.f_1 = unk_0xE993DEF3CDE767EB();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x012897049FFE52B9();
				func_198(uParam1, uParam2);
				if (!Global_2635559.f_2491.f_2)
				{
					Global_2635559.f_2491.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_195(Global_2635559.f_555, &(Global_2635559.f_2491.f_57), &(Global_2635559.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2635559.f_2491.f_4)
	{
		Global_2635559.f_2491.f_4 = 1;
		func_134(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2635559.f_2491.f_1 > 0 || Global_2635559.f_2491 > 0)
	{
		if (uParam1->f_5 || unk_0x15F34AE5010EC735())
		{
			iVar4 = 0;
			while (iVar4 < Global_2635559.f_2491.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2635559.f_2491.f_3)
					{
						iVar4 = Global_2635559.f_2491.f_3 + 1;
					}
					if (iVar4 > (Global_2635559.f_2491.f_1 - 1))
					{
						iVar4 = (Global_2635559.f_2491.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xF2069351918A58E0(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x7612340B41629249(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xAC7C551A7F3A46C0(iVar4);
					}
					else
					{
						unk_0x9E50944C32896E43(iVar4, &iVar5);
					}
					func_134(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2635559.f_2491.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2635559.f_2491.f_1;
		}
		if (Global_2635559.f_2491.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2635559.f_2889)
			{
				func_128(&(Global_2635559.f_2491.f_6[0 /*10*/]), &(Global_2635559.f_2491.f_6[1 /*10*/]), &(Global_2635559.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_75(Global_2635559.f_489))
			{
				if (Global_2635559.f_2491.f_2)
				{
					func_74(uParam0, &(Global_2635559.f_2491.f_6));
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2635559.f_2466 };
					func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xD88C7A93096DA0F7(0f, 360f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2635559.f_2491.f_2)
			{
				func_74(uParam0, &(Global_2635559.f_2491.f_6));
				func_127(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x15A88CFAAFFC6C4B(0, Global_2635559.f_2491.f_1);
				unk_0xF2069351918A58E0(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_92(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2635559.f_2466 };
					func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xD88C7A93096DA0F7(0f, 360f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2635559.f_2466 };
				func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0xD88C7A93096DA0F7(0f, 360f);
				func_127(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2635559.f_2466 };
		if (uParam1->f_5 && func_75(Global_2635559.f_489))
		{
			if (!Global_2635559.f_2491.f_5)
			{
				Global_2635559.f_2491.f_5 = 1;
			}
			else
			{
				func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_76(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0xD88C7A93096DA0F7(0f, 360f);
		func_127(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_127(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2635559.f_2625[(3 - iVar0) /*3*/] = { Global_2635559.f_2625[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2635559.f_2625[0 /*3*/] = { Param0 };
}

void func_128(var uParam0, var uParam1, var uParam2)
{
	if (func_75(Global_2635559.f_489) && func_133() < 4096)
	{
		func_132(uParam0, 0f);
		func_132(uParam1, uParam0->f_2);
		func_132(uParam2, uParam1->f_2);
	}
	else
	{
		func_131(uParam0);
		func_130(uParam2, uParam0->f_4);
		func_129(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_129(var uParam0, struct<3> Param1, struct<3> Param4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2638502[iVar0 /*10*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2638502[iVar0 /*10*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2638502[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2638502[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_130(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2638502[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2638502[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2638502[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_131(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] > 0)
		{
			if (Global_2638502[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2638502[iVar0 /*10*/].f_1;
				Var2 = { Global_2638502[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_132(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] > 0)
		{
			if (Global_2638502[iVar0 /*10*/].f_2 < fVar1 && Global_2638502[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2638502[iVar0 /*10*/].f_2;
				Var2 = { Global_2638502[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_133()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2638502[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_134(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar15;
	int iVar16;
	struct<3> Var17;
	struct<3> Var20;
	float fVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam4->f_5)
	{
		if (Global_2635559.f_489 == 1)
		{
			if (unk_0x2655A8EC638E4FD1((Global_2635559.f_512.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam4->f_5)
	{
		if (func_192(unk_0x93E99A2DBCBA9CFA()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_191(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam4->f_5)
	{
		if (!unk_0xD672EE955D5E7855(unk_0xC1A5EC5C986B98AD(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0xD672EE955D5E7855(unk_0xC1A5EC5C986B98AD(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_190(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (unk_0x652D2EEEF1D3E62C(uParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!unk_0x2A488C176D52CCA5(Param0, uParam5->f_13[iVar11 /*3*/]) > uParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((unk_0x652D2EEEF1D3E62C(uParam5->f_23) > 0f && unk_0x652D2EEEF1D3E62C(uParam5->f_26) > 0f) && uParam5->f_29 > 0f)
		{
			if (unk_0x9E76D45F14E2C578(Param0, uParam5->f_23, uParam5->f_26, uParam5->f_29, 0, 1))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_184(Param0, fParam3, uParam4->f_15, func_189(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2635559.f_3;
		}
	}
	else if (!func_181(Param0, 25f, unk_0x93E99A2DBCBA9CFA(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_177(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_177(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2635559.f_701)
		{
			Var12 = { Global_2635559.f_512 };
			if (Global_2635559.f_489 == 26)
			{
				Var12 = { Global_2635559.f_555.f_18 };
			}
			if (!func_108(Param0, 0.5f))
			{
				if (func_114(Var12))
				{
					if (!func_77(&Param0, 0, 0, 0, 1) && !func_176(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_176(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_175(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_174(unk_0x93E99A2DBCBA9CFA()) && func_173(unk_0x93E99A2DBCBA9CFA())))
		{
			if (!func_172(&Param0, &(Global_2635559.f_2491.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_173(unk_0x93E99A2DBCBA9CFA()))
		{
			if (!func_171(Param0, &(Global_2635559.f_2491.f_57), &(Global_2635559.f_2491.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_170(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_75(Global_2635559.f_489))
			{
				if (func_117(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_169(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2635559.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2635559.f_701)
		{
			if (!func_109(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_92(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_116(Param0, 1008981770);
		if (iVar16 > -1)
		{
			func_168(Param0, &Var17, &Var20, &fVar23);
			if (!func_163(&(Global_2635559.f_45[iVar16 /*12*/]), Var17, Var20, fVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_95(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam5->f_33)
	{
		if (unk_0x5829BBF74D541BA8(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (unk_0x0B5B560B8AF5E5BF(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_162(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2635559.f_2889 && uParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_153(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_153(Param0, Global_2635559.f_2466, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_75(Global_2635559.f_489) && iVar8 < 4096)
			{
				Var25.f_2 = func_151(Param0);
			}
			uVar7 = func_140(Param0, 1, 0, 0, 0, 0);
			Var25.f_4 = { Param0 };
			Var25.f_7 = fParam3;
			Var25.f_0 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_139(Var25);
			Global_2635559.f_2491.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2635559.f_2491.f_6[iVar24 /*10*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_153(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_153(Param0, Global_2635559.f_2466, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_75(Global_2635559.f_489) && iVar8 == Global_2635559.f_2491.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_151(Param0);
							bVar36 = true;
						}
						if (fVar2 < Global_2635559.f_2491.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { Param0 };
							Var25.f_7 = fParam3;
							Var25.f_0 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_138(Var25, iVar24);
							Global_2635559.f_2491.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2635559.f_2491.f_6[iVar24 /*10*/] || (iVar8 == Global_2635559.f_2491.f_6[iVar24 /*10*/] && fVar0 > Global_2635559.f_2491.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25.f_0 = iVar8;
						Var25.f_1 = fVar0;
						func_138(Var25, iVar24);
						Global_2635559.f_2491.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_136(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_140(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_135(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_135(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2635559.f_2491.f_6[iVar24 /*10*/] || (iVar8 == Global_2635559.f_2491.f_6[iVar24 /*10*/] && fVar3 > Global_2635559.f_2491.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25.f_0 = iVar8;
						Var25.f_3 = fVar3;
						func_138(Var25, iVar24);
						Global_2635559.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_135(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_136(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_6(unk_0x93E99A2DBCBA9CFA(), 1, 1))
		{
			if (!unk_0x72474BA05A104E1E())
			{
				if (unk_0x67670574D396B9A8(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_203(iVar1, 0) && unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x93E99A2DBCBA9CFA()))
				{
					if (func_137(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x4292F1DE8BA2D22E(iVar1) != unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()))) || unk_0x4292F1DE8BA2D22E(iVar1) == -1)
							{
								if (unk_0x9BC088F261691923(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x4292F1DE8BA2D22E(iVar1) != iParam7 || unk_0x4292F1DE8BA2D22E(iVar1) == -1)
						{
							if (unk_0x9BC088F261691923(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return unk_0x71D93B57D07F9804(fVar3);
	}
	return -1f;
}

int func_137(int iParam0)
{
	if (unk_0x8FC78693DAAD4372(unk_0xF2CFBB1105511E1A(iParam0)) || Global_2657589[iParam0 /*466*/].f_255)
	{
		return 1;
	}
	return 0;
}

void func_138(struct<10> Param0, int iParam10)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2635559.f_2491.f_6[iParam10 /*10*/] };
	Global_2635559.f_2491.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_138(Var0, iParam10 + 1);
	}
}

void func_139(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;
	
	Var1.f_2 = 1176256410;
	iVar11 = func_133();
	if (Param0.f_0 > iVar11)
	{
		iVar11 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] < iVar11)
		{
			Global_2638502[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] == 0)
		{
			Global_2638502[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] > 0)
		{
			if (Global_2638502[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2638502[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2638502[iVar13 /*10*/] = { Param0 };
	}
}

float func_140(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_6(iVar11, 1, 1) || (iParam7 == 1 && func_6(iVar11, 0, 0)))
		{
			if (!iVar11 == unk_0x93E99A2DBCBA9CFA() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_141(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x4292F1DE8BA2D22E(iVar11) == unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()))
					{
						if (!unk_0x4292F1DE8BA2D22E(iVar11) == -1 || !func_118(unk_0x93E99A2DBCBA9CFA(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar11) || !bParam6)
					{
						if (func_137(iVar11))
						{
							Var5 = { func_8(iVar11) };
							if (!iVar11 == unk_0x93E99A2DBCBA9CFA())
							{
								Var8 = { unk_0x3079F36CF73A06A0(unk_0xF2CFBB1105511E1A(iVar11)) };
							}
							else
							{
								Var8 = { Var5 };
							}
							if (!bParam6)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var8.f_2 < -100f)
								{
									Var8.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x2E496FE654DA4166(Param0, Var5, 1);
							fVar2 = unk_0x2E496FE654DA4166(Param0, Var8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_141(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_149(iParam0))
		{
			if (unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iParam0))
			{
				if (!unk_0x4292F1DE8BA2D22E(iParam0) == unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()))
				{
					if (func_104(unk_0x93E99A2DBCBA9CFA(), 1, 0))
					{
						if (!func_146(unk_0x4292F1DE8BA2D22E(iParam0), unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()), 0, -1))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x4292F1DE8BA2D22E(iParam0) == -1 && unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1)
				{
					if (!func_104(unk_0x93E99A2DBCBA9CFA(), 1, 0))
					{
						if (!func_142(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_142(int iParam0)
{
	if (func_145(unk_0x93E99A2DBCBA9CFA(), iParam0))
	{
		return 1;
	}
	Global_2764201 = { func_144(iParam0) };
	if (unk_0xF27423FF2D483551(&Global_2764201))
	{
		return 1;
	}
	if (func_143(unk_0x93E99A2DBCBA9CFA(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (!iVar0 == func_13())
	{
		if (iVar0 == func_12(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_144(int iParam0)
{
	struct<13> Var0;
	
	unk_0x23BD70608BA4F8D9(iParam0, &Var0, 13);
	return Var0;
}

int func_145(int iParam0, int iParam1)
{
	if (unk_0xE52BCF7D5014E06E())
	{
		Global_2764201 = { func_144(iParam0) };
		Global_2764214 = { func_144(iParam1) };
		if (unk_0x7DD2CE58D33238D9(&Global_2764201))
		{
			if (unk_0x7DD2CE58D33238D9(&Global_2764214))
			{
				unk_0xEB463FCE742A28B2(&Global_2764131, 35, &Global_2764201);
				unk_0xEB463FCE742A28B2(&Global_2764166, 35, &Global_2764214);
				if (Global_2764131 == Global_2764166)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_146(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058070.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, bVar0))
			{
				bVar1 = Global_1058070.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_147(iParam0, bVar0, iParam1, bVar1) || !func_147(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_147(iParam0, bVar0, iParam1, bVar1) || !func_147(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_147(iParam0, bVar0, iParam1, bVar1) || !func_147(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_147(iParam0, bVar0, iParam1, bVar1) || !func_147(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 0);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 1);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 2);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 4);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 5);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 6);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 8);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 9);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 10);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 12);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 13);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 14);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_147(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		iVar4 = unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_6(iVar1, 1, 1) || func_203(iVar1, 0)) || BitTest(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_148(iVar1))
		{
		}
		else if (unk_0x4292F1DE8BA2D22E(iVar1) != iParam2)
		{
		}
		else
		{
			uVar2 = unk_0xF2CFBB1105511E1A(iVar1);
			if (unk_0x66599E73DBA5A850(uVar2))
			{
			}
			else
			{
				iVar3 = unk_0x504B9BB48D41C264(iVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_148(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_149(int iParam0)
{
	if (func_203(iParam0, 0))
	{
		return 1;
	}
	if (func_150())
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

bool func_150()
{
	return BitTest(Global_2621446, 3);
}

float func_151(struct<3> Param0)
{
	var uVar0;
	
	return func_152(Param0, &(Global_2635559.f_45), &uVar0);
}

float func_152(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2635559.f_2735) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_153(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (unk_0xBBDA792448DB5A89(iParam9) / unk_0xBBDA792448DB5A89(8));
	}
	if (bParam6)
	{
		fVar0 = func_135(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_140(Param0, 1, 0, 0, 1, 0);
	fVar0 = func_135(fVar4, 0f, func_161(), func_159(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_157(Param0);
	fVar0 = func_135(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1 && !func_118(unk_0x93E99A2DBCBA9CFA(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_155(Param0, unk_0x93E99A2DBCBA9CFA(), 0);
	fVar0 = func_135(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_154(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_135(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_135(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_135(unk_0x2A488C176D52CCA5(Global_2635559.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_154(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x0754F207039DA45A(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x6683A7D1A593A7B4(uVar3))
	{
		unk_0xBCE3586A35418057(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x2655A8EC638E4FD1((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_155(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_6(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_6(iVar3, 0, 1))
				{
					if (unk_0x4292F1DE8BA2D22E(iVar3) != unk_0x4292F1DE8BA2D22E(iParam3) || (unk_0x4292F1DE8BA2D22E(iVar3) == -1 && unk_0x4292F1DE8BA2D22E(iParam3) == -1))
					{
						if (!func_156(iVar3, iParam3))
						{
							if (Global_2648605.f_261[iVar2])
							{
								fVar1 = unk_0x2A488C176D52CCA5(Global_2648605.f_131[iVar2 /*3*/], Param0);
								if (fVar1 < fVar0)
								{
									fVar0 = fVar1;
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_13() && iParam1 != func_13())
	{
		iVar0 = func_12(iParam0);
		if (iVar0 != func_13())
		{
			return iVar0 == func_12(iParam1);
		}
	}
	return 0;
}

float func_157(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0xA5D17FEE5372152E(unk_0xC1A5EC5C986B98AD(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x7DE17ACDD8BA2642(uVar6[iVar2]))
		{
			if (!unk_0x055111B11E6624FD(uVar6[iVar2], 0))
			{
				if (func_158(uVar6[iVar2]))
				{
					Var3 = { unk_0x30BE8A934C020461(uVar6[iVar2], 1) };
					fVar1 = unk_0x2E496FE654DA4166(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2635559.f_2934)
	{
		if (Global_1058070.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1058070.f_267)
			{
				if (unk_0x7DE17ACDD8BA2642(Global_1058070.f_152[iVar2]))
				{
					if (!unk_0x055111B11E6624FD(Global_1058070.f_152[iVar2], 0))
					{
						if (func_158(Global_1058070.f_152[iVar2]))
						{
							Var3 = { unk_0x30BE8A934C020461(Global_1058070.f_152[iVar2], 1) };
							fVar1 = unk_0x2E496FE654DA4166(Param0, Var3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_158(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x3C6D9801F427CC2E(uParam0);
	switch (unk_0x8B48F80291B64EA6(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0xCBAD2BB7D5709DFA(Global_1837175[unk_0x93E99A2DBCBA9CFA()]))
	{
		switch (unk_0x8B48F80291B64EA6(uVar0, Global_1837175[unk_0x93E99A2DBCBA9CFA()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/] == 0)
	{
		iVar1 = unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0xCBAD2BB7D5709DFA(Global_1836885[iVar1]))
			{
				switch (unk_0x8B48F80291B64EA6(uVar0, Global_1836885[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_159()
{
	if (func_160())
	{
		if ((unk_0xAF4434A9F7368F35(Global_2635559.f_45.f_67) || unk_0x2D92D1084D213DC4(Global_2635559.f_45.f_67)) || Global_2635559.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_160()
{
	if (Global_2635559.f_45.f_65 && !Global_2635559.f_45.f_304)
	{
		if (!func_149(unk_0x93E99A2DBCBA9CFA()))
		{
			return 1;
		}
	}
	return 0;
}

float func_161()
{
	if (func_160())
	{
		if ((unk_0xAF4434A9F7368F35(Global_2635559.f_45.f_67) || unk_0x2D92D1084D213DC4(Global_2635559.f_45.f_67)) || Global_2635559.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_162(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x0B5B560B8AF5E5BF(Param0, fParam7)) || (fVar0 > 0f && unk_0x5829BBF74D541BA8(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0xA6FBF829D141DA09(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0xA6FBF829D141DA09(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_163(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_167(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_166(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_164(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_164(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_165(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x9E76D45F14E2C578(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_165(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	var uVar7;
	
	if (Param0.f_2 == Param3.f_2)
	{
		Param3.f_2 = (Param3.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param3 };
	Var3 = { func_81(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var3 = { Var3 / FtoV(unk_0x652D2EEEF1D3E62C(Var3)) };
	Var3 = { Var3 * FtoV((fParam6 * 0.5f)) };
	if (Param0.f_2 > Param3.f_2)
	{
		uVar6 = Param3.f_2;
		uVar7 = Param0.f_2;
	}
	else
	{
		uVar6 = Param0.f_2;
		uVar7 = Param3.f_2;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) + Var3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) + Var3 };
}

int func_166(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
{
	struct<3> Var0[8];
	int iVar25;
	
	Var0[0 /*3*/] = { Param0.f_0, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.f_0, Param0.f_1, Param3.f_2 };
	Var0[2 /*3*/] = { Param0.f_0, Param3.f_1, Param3.f_2 };
	Var0[3 /*3*/] = { Param0.f_0, Param3.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param3.f_0, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param3.f_0, Param0.f_1, Param3.f_2 };
	Var0[6 /*3*/] = { Param3.f_0, Param3.f_1, Param3.f_2 };
	Var0[7 /*3*/] = { Param3.f_0, Param3.f_1, Param0.f_2 };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x9E76D45F14E2C578(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_167(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	struct<3> Var0[4];
	int iVar13;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam3, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam3), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam3) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!unk_0x9E76D45F14E2C578(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_168(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_94(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2642106[iVar4])
	{
		if (func_93(Var1, &(Global_2640710[iVar4 /*155*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2640710[iVar4 /*155*/][iVar0 /*7*/] };
			*uParam4 = { Global_2640710[iVar4 /*155*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2640710[iVar4 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642106[8])
	{
		if (func_93(Var1, &(Global_2640710[8 /*155*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2640710[8 /*155*/][iVar0 /*7*/] };
			*uParam4 = { Global_2640710[8 /*155*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2640710[8 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_169(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2635559.f_45.f_55)
	{
		if (unk_0x4D3D95146FD3490D(Global_2635559.f_45.f_56))
		{
			if (!unk_0x5B1AFB012FBCA44D(Param0))
			{
				uVar0 = unk_0x9CE0235348AE4A4D(Param0);
				if (unk_0x4D3D95146FD3490D(uVar0))
				{
					iVar1 = unk_0x04F08B8CE27A9B9B(uVar0);
					if (!iVar1 == Global_2635559.f_45.f_57)
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
		}
	}
	return 1;
}

int func_170(struct<3> Param0)
{
	switch (Global_2635559.f_2487)
	{
		case 0:
			return func_206(Param0, Global_2635559.f_2466, Global_2635559.f_2469, 0, 0);
			break;
		
		case 1:
			return func_122(Param0, Global_2635559.f_2480, Global_2635559.f_2483, 0, 0);
			break;
		
		case 2:
			return unk_0x9E76D45F14E2C578(Param0, Global_2635559.f_2480, Global_2635559.f_2483, Global_2635559.f_2486, 0, 1);
			break;
	}
	return 0;
}

int func_171(struct<3> Param0, var uParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (unk_0x2A488C176D52CCA5(*(uParam3[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		Var2 = { *(uParam4[iVar1 /*10*/]) };
		Var5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (unk_0x9E76D45F14E2C578(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_172(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (unk_0x2A488C176D52CCA5((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_83(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_173(int iParam0)
{
	switch (func_120())
	{
		case 0:
			if (!func_28(iParam0))
			{
				if (Global_1853910[iParam0 /*862*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_174(int iParam0)
{
	if (func_104(iParam0, 1, 0))
	{
		if (Global_1853910[iParam0 /*862*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_175(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2635559.f_2625[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_176(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_110(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0xD88C7A93096DA0F7(0.01f, 360f);
			func_83(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 0, fVar4);
			if (func_111(Var1, &uVar0) || func_110(Var1))
			{
				Var1 = { *uParam0 };
				func_83(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_177(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_6(unk_0x93E99A2DBCBA9CFA(), 1, 1))
		{
			if (!unk_0x72474BA05A104E1E())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x2E496FE654DA4166(func_178(unk_0x93E99A2DBCBA9CFA()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x67670574D396B9A8(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_203(iVar1, 0) && unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x93E99A2DBCBA9CFA()))
				{
					if ((func_137(iVar1) || !bParam10) && !Global_2657589[iVar1 /*466*/].f_270)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x4292F1DE8BA2D22E(iVar1) == -1)
							{
								if (unk_0x4292F1DE8BA2D22E(iVar1) == unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x4292F1DE8BA2D22E(iVar1) != unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()))) || unk_0x4292F1DE8BA2D22E(iVar1) == -1)
							{
								if (unk_0x2E496FE654DA4166(func_178(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x9BC088F261691923(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x4292F1DE8BA2D22E(iVar1) != iParam8 || unk_0x4292F1DE8BA2D22E(iVar1) == -1)
						{
							if (unk_0x2E496FE654DA4166(func_178(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x9BC088F261691923(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_180() && Global_1853910[iVar0 /*862*/].f_832) && !func_179(Global_1853910[iVar0 /*862*/].f_833))
	{
		return Global_1853910[iVar0 /*862*/].f_833;
	}
	return func_8(iParam0);
}

int func_179(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_180()
{
	return Global_2683862.f_19;
}

int func_181(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_183(Param0, fParam3, iParam4, iParam5, 0) || func_182(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_182(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_96(Param0, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_183(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam4, 0, 1))
				{
					if (unk_0x4292F1DE8BA2D22E(iVar1) == unk_0x4292F1DE8BA2D22E(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam4, 0, 1))
				{
					if (Global_2648605.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_8(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2648605.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_6(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_8(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_184(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2635559.f_3 = 0;
	if (!func_181(Param0, 0.5f, unk_0x93E99A2DBCBA9CFA(), 0, 0))
	{
		Global_2635559.f_3++;
		if (bParam5)
		{
			if (func_236(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2635559.f_3 = (Global_2635559.f_3 + Global_2635559.f_2);
				if (!func_188(Param0, fParam12))
				{
					Global_2635559.f_3++;
					if (!func_95(Param0, 1056964608))
					{
						Global_2635559.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2635559.f_3 = (Global_2635559.f_3 + Global_2635559.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_236(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2635559.f_3 = (Global_2635559.f_3 + Global_2635559.f_2);
				if (!func_188(Param0, fParam12))
				{
					Global_2635559.f_3++;
					if (!func_185(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2635559.f_3++;
						if (!func_95(Param0, 1056964608))
						{
							Global_2635559.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2635559.f_3 = (Global_2635559.f_3 + Global_2635559.f_2);
			}
		}
		else if (func_236(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2635559.f_3 = (Global_2635559.f_3 + Global_2635559.f_2);
			if (!func_188(Param0, fParam12))
			{
				Global_2635559.f_3++;
				if (!func_185(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2635559.f_3++;
					if (!func_95(Param0, 1056964608))
					{
						Global_2635559.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2635559.f_3 = (Global_2635559.f_3 + Global_2635559.f_2);
		}
	}
	return 0;
}

int func_185(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x93E99A2DBCBA9CFA() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_137(iVar1)) && unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
			{
				if (!func_187(unk_0x93E99A2DBCBA9CFA(), iVar1, -2, 0))
				{
					if (func_186(func_8(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_186(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	Var0.f_0 = unk_0x0BADBFA3B172435F(fParam6);
	Var0.f_1 = unk_0xD0FFB162F40A139C(fParam6);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	Var0 = { Var0 * Vector(fParam7, fParam7, fParam7) };
	Var3 = { Param3 + Var0 };
	Var3.f_2 = Param3.f_2;
	Var3.f_2 = (Var3.f_2 + fParam9);
	Param3.f_2 = (Param3.f_2 + fParam9);
	return unk_0x9E76D45F14E2C578(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_187(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x4292F1DE8BA2D22E(iParam0) == -1 && unk_0x4292F1DE8BA2D22E(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x4292F1DE8BA2D22E(iParam0) == unk_0x4292F1DE8BA2D22E(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x4292F1DE8BA2D22E(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x4292F1DE8BA2D22E(iParam0) == iParam2;
	}
	return unk_0x4292F1DE8BA2D22E(iParam0) == iParam2;
}

int func_188(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_137(iVar1)) && unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
		{
			if ((unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1 && unk_0x4292F1DE8BA2D22E(iVar1) == -1) && !func_118(unk_0x93E99A2DBCBA9CFA(), 1))
			{
				return 0;
			}
			else if ((unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1 && !unk_0x93E99A2DBCBA9CFA() == iVar1) || !func_187(unk_0x93E99A2DBCBA9CFA(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_8(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_189(int iParam0)
{
	if ((Global_2635559.f_489 == 9 || Global_2635559.f_489 == 9) || (Global_2635559.f_489 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_190(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x93E99A2DBCBA9CFA() != iVar1) || iParam8 == 0)
		{
			if (func_6(iVar1, bParam4, bParam5))
			{
				if (iParam10 || unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
				{
					if (!bParam7 || (!unk_0x66599E73DBA5A850(unk_0xF2CFBB1105511E1A(iVar1)) && func_137(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) != unk_0x4292F1DE8BA2D22E(iVar1))) || unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1)
						{
							if (((unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1 && iParam9) && bParam6) && func_142(iVar1))
							{
							}
							else if (unk_0x7DE17ACDD8BA2642(unk_0xF2CFBB1105511E1A(iVar1)))
							{
								if (unk_0x2E496FE654DA4166(func_8(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_191(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_203(iVar1, 0) && unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1)) && iVar1 != unk_0x93E99A2DBCBA9CFA())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x4292F1DE8BA2D22E(iVar1) == -1)
						{
							if (unk_0x4292F1DE8BA2D22E(iVar1) == unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x4292F1DE8BA2D22E(iVar1) == iVar3)
					{
						if (unk_0x2E496FE654DA4166(func_8(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x9BC088F261691923(iVar1, Param0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_192(int iParam0)
{
	if (((func_118(iParam0, 1) || func_194(iParam0)) || func_32(iParam0, 0)) || func_193(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_193(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_861, 2);
}

int func_194(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/] != -1;
	}
	return 0;
}

void func_195(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var7;
	struct<3> Var17;
	struct<3> Var20;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!BitTest(Global_4543624[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_4543624[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_4543624[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_4543624[iVar1 /*26*/].f_6.f_2;
					func_197(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_262145.f_6293[iVar1 /*3*/], Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6293[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_197(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_262145.f_6351[iVar1 /*19*/][iVar2 /*3*/], Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6351[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_197(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			Var17 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var20 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (unk_0x652D2EEEF1D3E62C(*(uParam4[iVar0 /*10*/])) == 0f || unk_0x2A488C176D52CCA5(Var17, Param0) < unk_0x2A488C176D52CCA5(Var20, Param0))
			{
				Var7 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var7.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var7.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var7.f_7 = { Global_4543300[iVar1 /*3*/] };
				func_196(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_196(var uParam0, var uParam1, int iParam2)
{
	Global_2643112 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_196(&Global_2643112, uParam1, iParam2 + 1);
	}
}

void func_197(var uParam0, var uParam1, int iParam2)
{
	Global_2643108 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_197(&Global_2643108, uParam1, iParam2 + 1);
	}
}

void func_198(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2635559.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2635559.f_2262)
		{
			if (func_199(Global_2635559.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2635559.f_2263[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2635559.f_2263[iVar0 /*4*/] };
					fVar4 = unk_0x06A2A02CDC68090B(Var1.f_0, Var1.f_1);
				}
				func_134(Global_2635559.f_2263[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, uParam0->f_28);
				Global_2635559.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2635559.f_2889)
	{
		func_128(&(Global_2635559.f_2491.f_6[0 /*10*/]), &(Global_2635559.f_2491.f_6[1 /*10*/]), &(Global_2635559.f_2491.f_6[2 /*10*/]));
	}
}

int func_199(struct<3> Param0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_87(Param0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_87(Param0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_200(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_123(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

var func_201()
{
	return Global_1573131.f_4;
}

void func_202(var uParam0, var uParam1)
{
	func_243();
	func_235(uParam0, uParam1);
}

bool func_203(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_204(-1, 0) == 8;
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

int func_204(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_205();
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

int func_205()
{
	return Global_1574918;
}

bool func_206(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
}

void func_207(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2635559.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_229(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_208(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_208(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	var uVar30;
	struct<3> Var31;
	float fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_107(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_228(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2643122.f_162 = 0;
	Global_2643122.f_163 = 0;
	Global_2643122.f_164 = -99;
	Global_2643122.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2643122[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2643122.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_101(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x0754F207039DA45A(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x6683A7D1A593A7B4(iVar8))
		{
			unk_0xBCE3586A35418057(iVar8, &Var1);
			bVar12 = false;
			if (Global_2643122.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2643122.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xBD0716EB92E5A53F(iVar8)) || unk_0x452C74D04BD4A4C1(iVar8))
			{
				unk_0x84AFCB2EC2CA9FCB(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_176(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_227(Var1))
									{
										Var1 = { func_223(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_95(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_222(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_228(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_218(Var1, fVar4, uParam2->f_34, unk_0x93E99A2DBCBA9CFA(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_107(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_217(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_236(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_236(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_215(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_214(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643122.f_162)
																										{
																											Global_2643122[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2643122.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2643122.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2643122.f_162 == 0)
																									{
																										Global_2643122[0 /*3*/] = { Var1 };
																										Global_2643122.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643122.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2643122[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_213(Var1, fVar4, iVar16);
																													iVar16 = Global_2643122.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2643122.f_162++;
																									if (Global_2643122.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643122.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2643122[Global_2643122.f_162 /*3*/] = { Var1 };
																									Global_2643122.f_121[Global_2643122.f_162] = fVar4;
																									Global_2643122.f_162++;
																									if (func_222(Var1, uParam2))
																									{
																										Global_2643122.f_163++;
																									}
																									if (Global_2643122.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643122.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2643122.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2643122[0 /*3*/] };
						*uParam1 = Global_2643122.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2643122.f_163 > 0 && !Global_2643122.f_163 == Global_2643122.f_162)
						{
							func_211(0, uParam2);
						}
						iVar26 = unk_0x15A88CFAAFFC6C4B(0, Global_2643122.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2643122[0 /*3*/] };
						uVar30 = Global_2643122.f_121[0];
						Global_2643122[0 /*3*/] = { Global_2643122[iVar26 /*3*/] };
						Global_2643122.f_121[0] = Global_2643122.f_121[iVar26];
						Global_2643122[iVar26 /*3*/] = { Var27 };
						Global_2643122.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2643122[0 /*3*/] };
						*uParam1 = Global_2643122.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_210(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_107(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_228(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_209(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2643122.f_164 = iVar8;
	}
	return 0;
}

void func_209(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_181(*(uParam0[iVar2 /*4*/]), 5f, unk_0x93E99A2DBCBA9CFA(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_210(int iParam0, struct<3> Param1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = unk_0x15A88CFAAFFC6C4B((1 + iParam0), (40 + iParam0));
		if (unk_0xF205ECAF6E47803C(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12))
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam5) > 0f)
			{
				*uParam5 = { func_223(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) };
				if (!func_227(*uParam5))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_211(int iParam0, var uParam1)
{
	if (!func_222(Global_2643122[iParam0 /*3*/], uParam1))
	{
		Global_2643122.f_162 = (Global_2643122.f_162 - 1);
		func_212(iParam0);
		if (Global_2643122.f_162 > Global_2643122.f_163)
		{
			func_211(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_211(iParam0 + 1, uParam1);
	}
}

void func_212(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2643122[iParam0 /*3*/] = { Global_2643122[iParam0 + 1 /*3*/] };
			Global_2643122.f_121[iParam0] = Global_2643122.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_213(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2643122[iParam4 /*3*/] };
	uVar3 = Global_2643122.f_121[iParam4];
	Global_2643122[iParam4 /*3*/] = { Param0 };
	Global_2643122.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2643122.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_213(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_214(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_141(iVar5))
		{
			Var1 = { func_8(iVar5) };
			fVar7 = unk_0x2A488C176D52CCA5(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_215(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x93E99A2DBCBA9CFA() != iVar1) || iParam9 == 0)
		{
			if (func_6(iVar1, bParam5, bParam6))
			{
				if (unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
				{
					if (!bParam8 || (!unk_0x66599E73DBA5A850(unk_0xF2CFBB1105511E1A(iVar1)) && func_137(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) != unk_0x4292F1DE8BA2D22E(iVar1))) || unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1)
						{
							if (((unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1 && iParam10) && bParam7) && func_142(iVar1))
							{
							}
							else if (unk_0x7DE17ACDD8BA2642(unk_0xF2CFBB1105511E1A(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x3C3D6D026CF7F51B(unk_0xF2CFBB1105511E1A(iVar1), 0))
								{
									iVar3 = unk_0x95DC39736F6748E3(unk_0xF2CFBB1105511E1A(iVar1), 0);
									if (unk_0x7DE17ACDD8BA2642(iVar3) && !unk_0x055111B11E6624FD(iVar3, 0))
									{
										iVar4 = unk_0x504B9BB48D41C264(iVar3);
										Var5 = { unk_0x30BE8A934C020461(iVar3, 0) };
										fVar8 = unk_0xD850DD08D5434072(iVar3);
										if (func_216(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_96(func_8(iVar1), Param0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_216(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10)
{
	if (func_96(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_97(Param0, fParam3, iParam4, &Global_1981305, &(Global_1981305.f_3), &(Global_1981305.f_6), 1036831949);
	func_97(Param5, fParam8, iParam9, &(Global_1981305.f_7), &(Global_1981305.f_10), &(Global_1981305.f_13), 1036831949);
	if (unk_0x3ED477BC92415F4F(Global_1981305, Global_1981305.f_3, Global_1981305.f_6, Global_1981305.f_7, Global_1981305.f_10, Global_1981305.f_13))
	{
		return 1;
	}
	return 0;
}

int func_217(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0xC51EF944AABAC0E5(Param0, 30f, 0, iVar0);
	if (unk_0x7DE17ACDD8BA2642(iVar1) && !unk_0x055111B11E6624FD(iVar1, 0))
	{
		iVar2 = unk_0x504B9BB48D41C264(iVar1);
		Var3 = { unk_0x30BE8A934C020461(iVar1, 0) };
		fVar6 = unk_0xD850DD08D5434072(iVar1);
		if (func_216(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0xC51EF944AABAC0E5(Param0, 30f, 0, iVar0);
	if (unk_0x7DE17ACDD8BA2642(iVar1) && !unk_0x055111B11E6624FD(iVar1, 0))
	{
		iVar2 = unk_0x504B9BB48D41C264(iVar1);
		Var3 = { unk_0x30BE8A934C020461(iVar1, 0) };
		fVar6 = unk_0xD850DD08D5434072(iVar1);
		if (func_216(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_218(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_221(Param0, fParam3, iParam4, iParam5, iParam6) || func_219(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_219(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_220(Param0, iParam4, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_216(Param0, fParam3, iParam4, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_220(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_103(iParam3, 1008981770);
	fVar1 = func_103(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_221(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam5, 0, 1))
			{
				if (Global_2648605.f_261[iVar0])
				{
					if (func_96(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_96(func_8(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2648605.f_261[iVar0])
			{
				if (func_96(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (unk_0x7DE17ACDD8BA2642(unk_0xF2CFBB1105511E1A(iVar1)))
				{
					if (func_96(func_8(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_222(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_206(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_122(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x9E76D45F14E2C578(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_223(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_226(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x84AFCB2EC2CA9FCB(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x2826D335F2B1621B(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0x2D92D1084D213DC4(iParam11) && func_225(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*uParam3 = (*uParam3 + 180f);
			if (*uParam3 > 360f)
			{
				*uParam3 = (*uParam3 + -360f);
			}
		}
		if (*uParam3 <= 90f || *uParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_224(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_224(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_226(Param0, *uParam3, Param6))
		{
			if ((bParam5 || uParam16) || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
			{
				*uParam3 = (*uParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { unk_0xF2A6E8EA57F9D501(Param0, *uParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x833D59D9DD080BB6(Param0, *uParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(unk_0x652D2EEEF1D3E62C(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_224(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_224(iParam11, 1.5f);
				}
				Var21 = { Var21 * FtoV((fVar14 * 0.5f)) };
				Var18 = { Var18 - Var21 };
				Var15 = { Param0 + Var18 };
			}
			Var21 = { Var0 - Var15 };
			Var0 = { Var15 };
		}
	}
	return Var0;
}

float func_224(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_98(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_225(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0xDE209AFE421606C6(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_226(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_84(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_80(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_227(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_94(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2642829[iVar1])
	{
		if (func_93(Param0, &(Global_2642126[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642829[8])
	{
		if (func_93(Param0, &(Global_2642126[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_228(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2635559.f_26.f_18)
	{
		switch (Global_2635559.f_26.f_17)
		{
			case 0:
				if (func_206(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_122(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x9E76D45F14E2C578(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_85(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, Global_2635559.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_229(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2635559.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_107(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_228(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2643122.f_162 = 0;
		Global_2643122.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2643122[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2643122.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (uParam2->f_30)
		{
			func_232(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_231();
		}
		else
		{
			func_230();
		}
		iVar1 = 0;
		while (iVar1 < Global_2635559.f_1754)
		{
			iVar2 = Global_2635559.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2635559.f_1755[iVar2 /*4*/] };
				fVar6 = Global_2635559.f_1755[iVar2 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var3) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_218(Var3, fVar6, uParam2->f_34, unk_0x93E99A2DBCBA9CFA(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_107(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar8 = uParam2->f_31;
										bVar9 = true;
										iVar10 = 1;
										fVar11 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											fVar11 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar11 = (fVar11 * 0.375f);
											}
										}
										else
										{
											bVar9 = true;
											iVar10 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar11 = (fVar11 * 0.375f);
												}
											}
										}
										bVar12 = false;
										if (!func_217(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_236(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_236(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_215(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar12 = true;
											}
										}
										if (bVar12)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar14 = 0f;
												if (uParam2->f_52)
												{
													iVar13 = func_214(Var3, uParam2->f_54, &fVar14);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar13 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar13 < uParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2643122.f_162)
															{
																Global_2643122[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2643122.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2643122.f_162 = 0;
															uParam2->f_53 = iVar13;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2643122.f_162 == 0)
														{
															Global_2643122[0 /*3*/] = { Var3 };
															Global_2643122.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2643122.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var3, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2643122[iVar7 /*3*/], uParam2->f_35))
																	{
																		func_213(Var3, fVar6, iVar7);
																		iVar7 = Global_2643122.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2643122.f_162++;
														if (Global_2643122.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635559.f_1754;
															}
															else if (Global_2643122.f_162 == 40)
															{
																iVar1 = Global_2635559.f_1754;
															}
														}
													}
													else
													{
														Global_2643122[Global_2643122.f_162 /*3*/] = { Var3 };
														Global_2643122.f_121[Global_2643122.f_162] = fVar6;
														Global_2643122.f_162++;
														if (Global_2643122.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635559.f_1754;
															}
															else if (Global_2643122.f_162 == 40)
															{
																iVar1 = Global_2635559.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar6;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar6;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2643122.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2643122[0 /*3*/] };
				*uParam1 = Global_2643122.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2643122.f_163 > 0 && !Global_2643122.f_163 == Global_2643122.f_162)
				{
					func_211(0, uParam2);
				}
				iVar0 = unk_0x15A88CFAAFFC6C4B(0, Global_2643122.f_162);
				Var15 = { Global_2643122[0 /*3*/] };
				uVar18 = Global_2643122.f_121[0];
				Global_2643122[0 /*3*/] = { Global_2643122[iVar0 /*3*/] };
				Global_2643122.f_121[0] = Global_2643122.f_121[iVar0];
				Global_2643122[iVar0 /*3*/] = { Var15 };
				Global_2643122.f_121[iVar0] = uVar18;
				*uParam0 = { Global_2643122[0 /*3*/] };
				*uParam1 = Global_2643122.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2635559.f_1754 > 0)
			{
				iVar0 = unk_0x15A88CFAAFFC6C4B(0, Global_2635559.f_1754);
				*uParam0 = { Global_2635559.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2635559.f_1755[iVar0 /*4*/].f_3;
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

void func_230()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2635559.f_1754)
	{
		Global_2635559.f_2160[iVar0] = iVar0;
		iVar0++;
	}
}

void func_231()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2635559.f_1754)
	{
		Global_2635559.f_2160[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2635559.f_1754)
	{
		iVar1 = unk_0x15A88CFAAFFC6C4B(0, Global_2635559.f_1754);
		iVar2 = unk_0x15A88CFAAFFC6C4B(0, Global_2635559.f_1754);
		uVar3 = Global_2635559.f_2160[iVar1];
		Global_2635559.f_2160[iVar1] = Global_2635559.f_2160[iVar2];
		Global_2635559.f_2160[iVar2] = uVar3;
		iVar0++;
	}
}

void func_232(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2635559.f_1754)
	{
		uVar1 = func_233(Param0, fVar0, &fVar0);
		Global_2635559.f_2160[iVar2] = uVar1;
		iVar2++;
	}
}

int func_233(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2635559.f_1754)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2635559.f_1755[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_234(int iParam0)
{
	return iParam0 == 50;
}

void func_235(var uParam0, var uParam1)
{
	unk_0x71F08D3A3C5EA09B(uParam0, uParam1, 0.1f);
	Global_2635559.f_2474 = unk_0xAF908D5E2416DA93();
	Global_2635559.f_2472 = 1;
	Global_2635559.f_2475 = unk_0x0DB7F8294D73598B();
}

int func_236(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2635559.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x0B5B560B8AF5E5BF(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x5829BBF74D541BA8(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x5829BBF74D541BA8(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xA6FBF829D141DA09(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam13)
	{
		if (unk_0xE2D062C14C126762(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (fParam14 > 0f)
	{
		if (func_190(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_177(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635559.f_2++;
	return 1;
}

void func_237()
{
	func_242();
	func_241();
	func_240();
	func_239();
	func_238();
}

void func_238()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2638502[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_239()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2635559.f_2491.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_240()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2635559.f_2491.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_241()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2635559.f_2491.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_242()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2635559.f_2491 = { Var0 };
}

void func_243()
{
	if (Global_2635559.f_2472)
	{
		if (unk_0xAF908D5E2416DA93() == Global_2635559.f_2474)
		{
			unk_0x92A550B29F3691DA();
		}
		else
		{
			unk_0x92A550B29F3691DA();
		}
		Global_2635559.f_2472 = 0;
	}
}

int func_244(bool bParam0)
{
	if (unk_0x72474BA05A104E1E())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_245(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x852EC2A7DE66202D(iParam0);
	return unk_0x0CBB7C273DED26E7(iParam0);
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_63.f_49;
			break;
	}
	return 0;
}

int func_247()
{
	if (bLocal_286 == 0)
	{
		if (BitTest(Local_63.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_248()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!BitTest(Local_63.f_2, 0))
	{
		unk_0xECDAB41968FF21A8(&(Local_63.f_2), false);
		if (bLocal_286 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_288, 1, 1))
		{
			if (unk_0x3F6A5B7803413D6A(false, 0) - unk_0x9E6BB98E57150635(0)) >= func_491(bLocal_286)
			{
				if (unk_0x334CA22E0AD77C7C(func_491(bLocal_286)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = unk_0xF2CFBB1105511E1A(iLocal_288);
					iVar3 = unk_0xA5D17FEE5372152E(iVar2, &uLocal_471, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_491(bLocal_286))
							{
								if (iVar5 == -1)
								{
									if (((!unk_0x7E2E2E8A648611F4(Local_63.f_10[iVar1 /*7*/]) && !BitTest(Local_63.f_10[iVar1 /*7*/].f_2, 1)) && !BitTest(Local_63.f_10[iVar1 /*7*/].f_2, 6)) && !BitTest(Local_63.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (unk_0x7DE17ACDD8BA2642(uLocal_471[iVar0]))
								{
									if (!unk_0x055111B11E6624FD(uLocal_471[iVar0], 0))
									{
										if (!unk_0x60A06DE259634304(uLocal_471[iVar0]))
										{
											if (func_250(unk_0x504B9BB48D41C264(uLocal_471[iVar0])))
											{
												if (!unk_0x1AFE963DA61006ED(uLocal_471[iVar0]))
												{
													if (!unk_0x3C3D6D026CF7F51B(uLocal_471[iVar0], 0))
													{
														if (func_5(unk_0x30BE8A934C020461(uLocal_471[iVar0], 1), unk_0x30BE8A934C020461(iVar2, 1), 625f))
														{
															unk_0x85BAE84748AD1A23(uLocal_471[iVar0], 1, 0);
															Local_63.f_10[iVar5 /*7*/].f_6 = iVar0;
															unk_0xECDAB41968FF21A8(&(Local_63.f_10[iVar5 /*7*/].f_2), 8);
															if (!BitTest(Local_63.f_1, 12))
															{
																Local_63.f_8 = uLocal_293;
																unk_0xECDAB41968FF21A8(&(Local_63.f_1), 12);
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
						iVar0++;
					}
				}
			}
		}
	}
	else if (BitTest(Local_63.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_491(bLocal_286))
		{
			if (BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 1) || BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!unk_0x055111B11E6624FD(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (unk_0x1AFE963DA61006ED(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6]))
					{
						if (!unk_0xB6B927AA8C3DAD36(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6]))
						{
							unk_0xBDB0FB8EEE50C9CD(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							unk_0x9E7B0A53DA7F1D95(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6], 1);
							Local_63.f_10[iVar6 /*7*/] = unk_0xFDCB460E036BA39B(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6]);
							unk_0x6CD289A8A1000001(Local_63.f_10[iVar6 /*7*/], 1);
							unk_0xECDAB41968FF21A8(&(Local_63.f_10[iVar6 /*7*/].f_2), false);
							Local_63.f_10[iVar6 /*7*/].f_1 = bLocal_286;
							Local_63.f_10[iVar6 /*7*/].f_4 = func_70(bLocal_286);
							func_68(iVar6);
							unk_0x061B1200C95204CB(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || unk_0x55DB5FC567C065D9(uLocal_293, Local_63.f_8) > 5000)
		{
			if (iVar7 >= func_491(bLocal_286))
			{
				unk_0xECDAB41968FF21A8(&(Local_63.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_471[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_491(bLocal_286))
			{
				if (BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_249(&(Local_63.f_10[iVar6 /*7*/]));
					unk_0x061B1200C95204CB(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			unk_0x061B1200C95204CB(&(Local_63.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_249(var uParam0)
{
	var uVar0;
	
	if (unk_0x5E6D8811A0BD0954(*uParam0))
	{
		uVar0 = unk_0x177F7E959D2D410B(*uParam0);
		unk_0xE1D0FB923395DF66(&uVar0);
	}
}

int func_250(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == joaat("s_m_y_casino_01"))
	{
		return 0;
	}
	return 1;
}

int func_251()
{
	if (BitTest(Local_63.f_1, 6))
	{
		return 1;
	}
	else if (bLocal_286 == 0)
	{
		Local_63.f_49 = func_252(Local_63.f_36, 1);
		unk_0xECDAB41968FF21A8(&(Local_63.f_1), 6);
		return 1;
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(Local_63.f_1), 6);
		return 1;
	}
	return 0;
}

int func_252(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	if (func_253(Param0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_253(Param0, 1100f, -196f, 300f, 350f, 0) || func_253(Param0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_253(Param0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_253(Param0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_253(Param0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_253(Param0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_253(Param0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam3 == 1)
	{
		iVar0 = unk_0x15A88CFAAFFC6C4B(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (Param0.f_1 > 800f)
		{
			iVar0 = unk_0x15A88CFAAFFC6C4B(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_253(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	return unk_0x2E496FE654DA4166(Param0, Param3, iParam7) <= fParam6;
}

void func_254(int iParam0)
{
	if (unk_0x66599E73DBA5A850(iParam0))
	{
	}
	Local_63.f_36 = { unk_0x30BE8A934C020461(iParam0, 1) };
	if (func_255(iParam0, 0))
	{
		unk_0xECDAB41968FF21A8(&(Local_63.f_1), 17);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Local_63.f_1), 17);
	}
}

int func_255(int iParam0, int iParam1)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0) || iParam1)
		{
			if (unk_0x1589BC95A4C50F21(iParam0))
			{
				if (unk_0xA57B95471CC90EA4(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_256()
{
	bool bVar0;
	
	if (unk_0xE85391CF212DE622())
	{
		if (BitTest(Local_63.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (bLocal_286)
			{
				case 0:
					if (BitTest(Local_63.f_2, 11))
					{
						if (func_6(iLocal_288, 1, 1))
						{
							if (unk_0xB7A628320EFF8E47(func_8(iLocal_288), Local_63.f_39) > 625f)
							{
								unk_0x061B1200C95204CB(&(Local_63.f_2), 11);
								unk_0x061B1200C95204CB(&iLocal_280, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_288, 1, 1))
						{
							bVar0 = true;
							if (func_259())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_63();
						}
						else
						{
							func_64();
						}
						if (BitTest(Local_63.f_1, 5))
						{
							if (func_258())
							{
								func_64();
								unk_0xECDAB41968FF21A8(&(Local_63.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_288, 1, 1))
					{
						bVar0 = true;
						if (func_257())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_63();
					}
					else
					{
						func_64();
					}
					if (BitTest(Local_63.f_1, 5))
					{
						if (unk_0x55DB5FC567C065D9(uLocal_293, Local_63.f_5) > 30000)
						{
							func_64();
							unk_0xECDAB41968FF21A8(&(Local_63.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_257()
{
	int iVar0;
	
	iVar0 = unk_0xF2CFBB1105511E1A(iLocal_288);
	if (((((unk_0xDA70CA6A0D1738D3(iVar0) || unk_0x1589BC95A4C50F21(iVar0)) || func_29(iLocal_288, 1, 1)) || func_42(iLocal_288, 0)) || func_42(iLocal_288, 7)) || func_28(iLocal_288))
	{
		return 1;
	}
	if (func_118(iLocal_288, 1))
	{
		if (iLocal_288 > -1)
		{
			if (Global_1853910[iLocal_288 /*862*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_258()
{
	if (!BitTest(Local_63.f_1, 18))
	{
		if (unk_0x55DB5FC567C065D9(uLocal_293, Local_63.f_5) > 5000)
		{
			unk_0xECDAB41968FF21A8(&(Local_63.f_1), 18);
			return 1;
		}
	}
	else if (unk_0x55DB5FC567C065D9(uLocal_293, Local_63.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_259()
{
	int iVar0;
	
	iVar0 = unk_0xF2CFBB1105511E1A(iLocal_288);
	if (((((((((unk_0xDC58AE028CB223BA(iVar0) > 10f || unk_0xDA70CA6A0D1738D3(iVar0)) || unk_0x1589BC95A4C50F21(iVar0)) || func_29(iLocal_288, 1, 1)) || func_62(iLocal_288)) || func_42(iLocal_288, 0)) || func_42(iLocal_288, 7)) || func_28(iLocal_288)) || Global_2657589[iLocal_288 /*466*/].f_248) || func_61(unk_0xF2CFBB1105511E1A(iLocal_288), joaat("titan")))
	{
		return 1;
	}
	if (func_118(iLocal_288, 1))
	{
		if (iLocal_288 > -1)
		{
			if (Global_1853910[iLocal_288 /*862*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_288 != -1)
	{
		if (BitTest(Local_119[iLocal_288 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_260()
{
	if (!BitTest(Local_63.f_1, 14))
	{
		Local_63.f_9 = uLocal_293;
		unk_0xECDAB41968FF21A8(&(Local_63.f_1), 14);
	}
}

void func_261()
{
	if (Local_63.f_44 != Local_119[iLocal_287 /*5*/].f_4)
	{
		Local_63.f_44 = Local_119[iLocal_287 /*5*/].f_4;
	}
}

void func_262()
{
	if (!BitTest(Local_63.f_1, 10))
	{
		Local_63.f_45 = func_491(bLocal_286);
		Local_63.f_46 = 0;
		Local_63.f_47 = 0;
		unk_0xECDAB41968FF21A8(&(Local_63.f_1), 10);
	}
}

void func_263()
{
	func_264();
	if (!BitTest(Local_63.f_1, 8))
	{
		if (BitTest(Local_63.f_2, 7))
		{
			if (unk_0x55DB5FC567C065D9(uLocal_293, Local_63.f_7) > 300000)
			{
				unk_0xECDAB41968FF21A8(&(Local_63.f_2), 8);
			}
		}
	}
}

void func_264()
{
	if (!BitTest(Local_63.f_2, 7))
	{
		Local_63.f_7 = uLocal_293;
		unk_0xECDAB41968FF21A8(&(Local_63.f_2), 7);
	}
}

void func_265()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xECDAB41968FF21A8(&iLocal_280, 7);
	if (BitTest(Local_63.f_3, 1))
	{
	}
	if (BitTest(Local_63.f_3, 2))
	{
	}
	if (BitTest(Local_63.f_3, 3))
	{
	}
	if (BitTest(Local_63.f_3, 9))
	{
	}
	if (BitTest(Local_63.f_3, 4))
	{
	}
	if (BitTest(Local_63.f_3, 5))
	{
	}
	if (BitTest(Local_63.f_3, 11))
	{
		if (unk_0x93E99A2DBCBA9CFA() == iLocal_287)
		{
			unk_0x061B1200C95204CB(&iLocal_280, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				unk_0xECDAB41968FF21A8(&iLocal_280, 7);
			}
			else if (func_385("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				unk_0xECDAB41968FF21A8(&iLocal_280, 7);
			}
		}
	}
	if (BitTest(Local_63.f_3, 6))
	{
		if (unk_0x93E99A2DBCBA9CFA() == iLocal_287)
		{
			unk_0x061B1200C95204CB(&iLocal_280, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				unk_0xECDAB41968FF21A8(&iLocal_280, 7);
			}
			else if (func_385("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				unk_0xECDAB41968FF21A8(&iLocal_280, 7);
			}
		}
	}
	if (BitTest(Local_63.f_3, 7))
	{
		if (unk_0x93E99A2DBCBA9CFA() == iLocal_287)
		{
			unk_0x061B1200C95204CB(&iLocal_280, 7);
			if (func_345())
			{
				if (!Local_63.f_50)
				{
					if (Local_63.f_52)
					{
						iLocal_488 = func_344(Local_63.f_53);
					}
					else
					{
						iLocal_488 = func_340(12);
					}
					if (iLocal_488 > 0)
					{
						func_338(iLocal_488, 1, 0, 0f);
						func_323(iLocal_488, 4, 1, 1);
					}
					unk_0xECDAB41968FF21A8(&iLocal_280, 7);
				}
				else
				{
					unk_0xECDAB41968FF21A8(&iLocal_280, 7);
				}
			}
		}
	}
	if (BitTest(Local_63.f_3, 0))
	{
		if (unk_0x93E99A2DBCBA9CFA() == iLocal_287)
		{
			if (!BitTest(Local_63.f_2, 1))
			{
				unk_0x061B1200C95204CB(&iLocal_280, 7);
				if (func_385("MPCT_mugfail", "LAMAR", 19))
				{
					unk_0xECDAB41968FF21A8(&iLocal_280, 7);
				}
			}
		}
		else if (unk_0x93E99A2DBCBA9CFA() == iLocal_288)
		{
			if (BitTest(Local_63.f_2, 1))
			{
				if (BitTest(Local_63.f_2, 12))
				{
					iVar0 = unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_7102) * Global_262145.f_4304));
					func_281(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_267(47, 1);
				}
			}
		}
	}
	if (BitTest(Local_63.f_3, 8))
	{
		if (unk_0x93E99A2DBCBA9CFA() == iLocal_287)
		{
			unk_0x061B1200C95204CB(&iLocal_280, 7);
			if (func_345())
			{
				if (bLocal_286 == 0)
				{
					iLocal_488 = (func_340(2) * func_491(bLocal_286));
					iVar1 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						iLocal_488 = func_344(Local_63.f_53);
					}
					else
					{
						iLocal_488 = func_340(12);
					}
					iVar1 = 4;
				}
				if (!Local_63.f_50)
				{
					if (iLocal_488 > 0)
					{
						func_338(iLocal_488, 1, 0, 0f);
						func_323(iLocal_488, iVar1, 1, 0);
					}
					unk_0xECDAB41968FF21A8(&iLocal_280, 7);
				}
				else
				{
					unk_0xECDAB41968FF21A8(&iLocal_280, 7);
				}
			}
		}
	}
	if (BitTest(Local_63.f_3, 10))
	{
		if (unk_0x93E99A2DBCBA9CFA() == iLocal_287)
		{
			unk_0x061B1200C95204CB(&iLocal_280, 7);
			if (func_345())
			{
				if (bLocal_286 == 0)
				{
					iLocal_488 = (func_340(2) * func_491(bLocal_286));
					iVar2 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						iLocal_488 = func_344(Local_63.f_53);
					}
					else
					{
						iLocal_488 = func_340(12);
					}
					iVar2 = 4;
				}
				if (!Local_63.f_50)
				{
					if (iLocal_488 > 0)
					{
						func_338(iLocal_488, 1, 0, 0f);
						func_323(iLocal_488, iVar2, 1, 0);
					}
					unk_0xECDAB41968FF21A8(&iLocal_280, 7);
				}
				else
				{
					unk_0xECDAB41968FF21A8(&iLocal_280, 7);
				}
			}
		}
	}
	if (BitTest(iLocal_280, 7))
	{
		func_266();
	}
}

void func_266()
{
	unk_0x061B1200C95204CB(&(Global_1853910[unk_0xD056B8CB0E6A5169() /*862*/].f_140), bLocal_286);
	Global_1853910[unk_0xD056B8CB0E6A5169() /*862*/].f_141 = -1;
	if (bLocal_286 == 1)
	{
		if (unk_0xC1B5FB06637242C9(uLocal_470))
		{
			unk_0xCBFA60E5BB3B03C4(uLocal_470);
		}
	}
	func_519();
	func_551();
}

int func_267(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_268(iParam0, iParam1);
}

int func_268(int iParam0, int iParam1)
{
	if (func_280(14) && !func_279(iParam0))
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
	if (func_278(&Global_4542597))
	{
		if (func_276(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_269(&Global_4542597, iParam0))
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

int func_269(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_280(14) && !func_279(iParam1))
	{
		return 0;
	}
	if (func_276(uParam0, iParam1))
	{
		return 0;
	}
	if (func_275(uParam0) < 0f)
	{
		func_274(uParam0, 0);
	}
	func_272(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_270(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_270(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_280(14) && !func_279(iParam1))
	{
		return 0;
	}
	if (func_276(uParam0, iParam1))
	{
		return 0;
	}
	if (func_275(uParam0) < 0f)
	{
		func_274(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_271(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_271(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_272(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_273(uParam0, iVar0);
		iVar0++;
	}
	func_274(uParam0, (Global_4542596 - 0.5f));
}

void func_273(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_274(var uParam0, float fParam1)
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

float func_275(var uParam0)
{
	return uParam0->f_80;
}

bool func_276(var uParam0, int iParam1)
{
	return func_277(uParam0, iParam1) != -1;
}

int func_277(var uParam0, int iParam1)
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

bool func_278(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_279(int iParam0)
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

bool func_280(int iParam0)
{
	return Global_43257 == iParam0;
}

var func_281(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_282(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_282(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_283(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_283(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_316();
	if (func_315(uParam2))
	{
	}
	if (func_314())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_312(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_311(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_309(0, &iVar1);
					break;
				
				case 3:
					func_309(1, &iVar1);
					break;
				
				case 1:
					func_307(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1961999)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_304(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_293((func_303(unk_0x93E99A2DBCBA9CFA()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x140AEC0C03C45A46(iVar1, iParam8, iParam9);
				if (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_2 != -1)
				{
					func_304(1166, iVar1, -1);
				}
				func_288(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_284((func_286(unk_0x93E99A2DBCBA9CFA()) + iVar1));
			}
			else
			{
				func_284((func_286(unk_0x93E99A2DBCBA9CFA()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_284(int iParam0)
{
	if (func_314())
	{
		Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_5 = iParam0;
		func_285(joaat("mpply_globalxp"), iParam0);
	}
}

void func_285(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, uParam1, 1);
	}
}

int func_286(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			{
				return func_287(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_5;
			}
		}
		else
		{
			return func_287(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_287(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_288(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_144(unk_0x93E99A2DBCBA9CFA()) };
	if (unk_0xE52BCF7D5014E06E())
	{
		if (unk_0x7DD2CE58D33238D9(&Var0))
		{
			iVar13 = func_291(func_292(&Var0));
			if (iVar13 == 0)
			{
				func_290(&Global_1665493, iParam0);
				func_289(joaat("mpply_crew_local_xp_0"), Global_1665493);
			}
			else if (iVar13 == 1)
			{
				func_290(&Global_1665494, iParam0);
				func_289(joaat("mpply_crew_local_xp_1"), Global_1665494);
			}
			else if (iVar13 == 2)
			{
				func_290(&Global_1665495, iParam0);
				func_289(joaat("mpply_crew_local_xp_2"), Global_1665495);
			}
			else if (iVar13 == 3)
			{
				func_290(&Global_1665496, iParam0);
				func_289(joaat("mpply_crew_local_xp_3"), Global_1665496);
			}
			else if (iVar13 == 4)
			{
				func_290(&Global_1665497, iParam0);
				func_289(joaat("mpply_crew_local_xp_4"), Global_1665497);
			}
		}
	}
}

void func_289(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1665488 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1665490 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1665490 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1665491 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1665492 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1665493 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1665494 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1665495 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1665496 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1665497 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1665498 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1665499 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1665500 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1665501 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1665502 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1665503 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1665504 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_290(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_291(int iParam0)
{
	if (iParam0 == Global_1665488)
	{
		return 0;
	}
	else if (iParam0 == Global_1665489)
	{
		return 1;
	}
	else if (iParam0 == Global_1665490)
	{
		return 2;
	}
	else if (iParam0 == Global_1665491)
	{
		return 3;
	}
	else if (iParam0 == Global_1665492)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_292(var uParam0)
{
	if (unk_0xE52BCF7D5014E06E())
	{
		if (unk_0x7DD2CE58D33238D9(uParam0))
		{
			return Global_2694466;
		}
	}
	return Global_2694466;
}

void func_293(int iParam0, int iParam1, int iParam2)
{
	if (func_314())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10070 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1665638[func_302(-1)])
				{
					unk_0x140AEC0C03C45A46(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1665638[func_302(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10069 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x140AEC0C03C45A46(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10069 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x140AEC0C03C45A46(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_301(unk_0x93E99A2DBCBA9CFA()))
		{
			Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_1 = iParam0;
			Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_6 = func_299(iParam0, 1);
		}
		func_298(640, iParam0, -1, 1);
		func_297(641, func_299(iParam0, 1), -1, 1, 0);
		Global_1665638[func_302(-1)] = iParam0;
		func_294(-1109644434, 7, 0);
	}
}

void func_294(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_296(iParam1, iParam2))
	{
		iVar0 = func_295();
		Global_2694418[iVar0] = iParam1;
		Global_2694429[iVar0] = iParam0;
	}
}

int func_295()
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

int func_296(int iParam0, var uParam1)
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

void func_297(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_302(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

void func_298(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2805027[iParam0 /*3*/][func_302(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_302(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_302(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_302(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_302(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_302(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_302(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_302(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_302(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_302(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_302(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_302(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_302(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_302(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_302(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_302(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_302(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_302(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_302(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_302(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_302(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_302(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_302(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_302(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_302(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851323[0 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851323[1 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851323[2 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851323[3 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851502[func_302(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_302(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_302(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_302(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_302(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_302(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_302(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_302(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851411[0 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851411[1 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851411[2 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851411[3 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851411[4 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851505[0 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851505[1 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851505[2 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851505[3 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851505[4 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851521[0 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851521[1 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851521[2 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851521[3 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851521[4 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851411[5 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851323[4 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851537[func_302(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851546[func_302(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851540[func_302(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851549[func_302(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851543[func_302(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851552[func_302(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851555[func_302(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851411[6 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851323[5 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851411[7 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851323[6 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851411[8 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851323[7 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851411[9 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851323[8 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851411[10 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851323[9 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851411[11 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851323[10 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851411[12 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851323[11 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851411[13 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851323[12 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851411[14 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851323[13 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851411[15 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851323[14 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851411[16 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851323[15 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851411[17 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851323[16 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851323[17 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851323[18 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851323[19 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851323[20 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851558[func_302(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851561[func_302(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851564[func_302(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851567[func_302(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851570[func_302(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851573[func_302(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851576[func_302(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851579[func_302(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851582[func_302(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851585[func_302(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851588[func_302(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851591[func_302(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851594[func_302(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851597[func_302(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851323[21 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851411[23 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851323[22 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851411[24 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851323[23 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851323[24 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851323[25 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851411[27 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851323[26 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851411[28 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851323[27 /*3*/][func_302(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_299(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_300(iParam0, 0);
}

int func_300(int iParam0, int iParam1)
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

int func_301(int iParam0)
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

int func_302(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_205();
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

int func_303(int iParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			{
				return Global_1665638[func_302(-1)];
			}
			else if (func_301(iParam0))
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_302(-1)];
	}
	return 0;
}

void func_304(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_306(iParam0, func_302(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_305(iParam0))
	{
		func_297(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_298(iParam0, iVar0, iParam2, 1);
	}
}

int func_305(int iParam0)
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

int func_306(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_302(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_307(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA());
	iVar0 = 0;
	while (iVar0 < unk_0x1C57E792CD67EF97())
	{
		iVar4 = unk_0x74A08123C183740A(iVar0);
		if (unk_0x9A45DBB669E889B7(iVar4))
		{
			iVar5 = unk_0xFE2D0B37A9596A4C(iVar4);
			if (unk_0x4292F1DE8BA2D22E(iVar5) != -1)
			{
				if (unk_0x4292F1DE8BA2D22E(iVar5) == iVar1 || func_146(unk_0x4292F1DE8BA2D22E(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != unk_0x93E99A2DBCBA9CFA())
					{
						if (func_145(unk_0x93E99A2DBCBA9CFA(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_308(*iParam0, 100) * (10f * Global_262145.f_4228)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_308(*iParam0, 100) * (20f * Global_262145.f_4221)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_308(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_309(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x1C57E792CD67EF97())
		{
			iVar3 = iVar0;
			if (unk_0x9A45DBB669E889B7(iVar3))
			{
				iVar4 = unk_0xFE2D0B37A9596A4C(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x93E99A2DBCBA9CFA())
					{
						iVar1++;
						if (func_145(unk_0x93E99A2DBCBA9CFA(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x93E99A2DBCBA9CFA())
				{
					if (func_310(unk_0x93E99A2DBCBA9CFA(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_145(unk_0x93E99A2DBCBA9CFA(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_308(*iParam1, 100) * (10f * Global_262145.f_4228)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_308(*iParam1, 100) * (20f * Global_262145.f_4221)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_310(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_311(int iParam0)
{
	int iVar0;
	
	if (unk_0xD5361E259B8F211D() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_308(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_312(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x3CDF9E9E483AADE1(iParam0) > func_303(unk_0x93E99A2DBCBA9CFA()))
		{
			iParam0 = -func_303(unk_0x93E99A2DBCBA9CFA());
		}
	}
	if (func_313(8000, 0, 0) > 0)
	{
		if (func_313(8000, 0, 0) < (iParam0 + func_303(unk_0x93E99A2DBCBA9CFA())))
		{
			iParam0 = (func_313(8000, 0, 0) - func_303(unk_0x93E99A2DBCBA9CFA()));
		}
	}
	return iParam0;
}

int func_313(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_297010[iParam0];
}

int func_314()
{
	return 1;
}

int func_315(var uParam0)
{
	if (unk_0xB71C73D0269747D5(uParam0))
	{
		return 1;
	}
	else if (unk_0x4310A0DB886F9FED(uParam0, "") || unk_0x4310A0DB886F9FED(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_316()
{
	int iVar0;
	
	if (func_322(unk_0x93E99A2DBCBA9CFA()) || func_321(unk_0x93E99A2DBCBA9CFA()))
	{
		if (Global_262145.f_10102 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10102;
		}
	}
	else if (func_319() || func_317(unk_0x93E99A2DBCBA9CFA()))
	{
		if (Global_262145.f_23282 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23282;
		}
	}
	else if (Global_262145.f_7095 > 30000)
	{
		iVar0 = 30000;
	}
	else
	{
		iVar0 = Global_262145.f_7095;
	}
	return iVar0;
}

int func_317(int iParam0)
{
	return func_318(func_39(iParam0));
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_319()
{
	if (unk_0x1758F8A8511510AB())
	{
		return func_180();
	}
	return func_320(Global_4718592.f_113724);
}

int func_320(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5042[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_321(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 2;
}

bool func_322(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 7;
}

void func_323(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var4;
	int iVar12;
	int iVar13;
	
	StringCopy(&Var0, func_337(iParam1), 16);
	StringCopy(&Var4, func_336(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar12 = 1287308202;
			break;
		
		case 1:
			iVar12 = 691372038;
			break;
		
		case 2:
			iVar12 = 1480707108;
			break;
		
		case 3:
			iVar12 = 1512499951;
			break;
		
		case 4:
			iVar12 = 562283735;
			break;
		
		case 5:
			iVar12 = -154732333;
			break;
		
		case 6:
			iVar12 = -1362660491;
			break;
		
		case 7:
			iVar12 = 645708827;
			break;
		
		case 8:
			iVar12 = 767907967;
			break;
		
		case 9:
			iVar12 = -1970151306;
			break;
		
		case 10:
			iVar12 = 718859568;
			break;
		
		case 11:
			iVar12 = -1955564771;
			break;
		
		case 12:
			iVar12 = 892388724;
			break;
		
		case 13:
			iVar12 = -1426920838;
			break;
		
		case 14:
			iVar12 = -664597565;
			break;
		
		case 15:
			iVar12 = 1864522104;
			break;
		
		case 16:
			iVar12 = 215608230;
			break;
		
		case 17:
			iVar12 = -1100963799;
			break;
	}
	if (func_51())
	{
		func_324(iVar12, iParam0, &iVar13, bParam3, bParam3, 0);
		Global_4535172[iVar13 /*85*/].f_14.f_40 = { Var0 };
		Global_4535172[iVar13 /*85*/].f_14.f_44 = { Var4 };
	}
	else
	{
		unk_0x49D5B8FAB4CA32F5(iParam0, &Var0, &Var4, bParam3);
	}
}

void func_324(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_51())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 2115896461:
		case 797947947:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28375)
			{
				func_325(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
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
		case 1982688246:
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
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
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
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_325(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
		case -2081984382:
		case 1089562091:
			if (iParam1 > 0 || Global_262145.f_28375)
			{
				func_325(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
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
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
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
		case 883337077:
		case -1274418755:
		case -1853979468:
		case -239888995:
		case 1163066566:
		case -955087020:
		case 1874391251:
		case 1633116913:
		case 668586600:
		case 15168061:
		case 590289134:
		case 99792878:
		case 1866258778:
		case -178394060:
		case 409592287:
		case 593836803:
		case 1973036520:
		case 2063456538:
		case -728008329:
		case 119239868:
			func_325(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_325(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x366262A55539062C(func_205()) || unk_0xF0773A1CAE4717D9())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695819)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535172[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x8C722BABE4726C11(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE0AAA58EEB49D003(iVar4))
		{
			*uParam0 = func_332(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535172[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535172[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4536673 = 1;
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_331(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_326(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_326(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xECDAB41968FF21A8(&(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_126.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_327(iParam0);
	}
}

void func_327(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_330(iParam0))
		{
			if (!bVar0)
			{
				unk_0xD327B45EF800DBCD();
			}
		}
		else if (!bVar0)
		{
			unk_0xCF052ECECC8D7067(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_328(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_328(var uParam0)
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
	func_329(&(uParam0->f_14));
	func_329(&(uParam0->f_14.f_13));
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

void func_329(var uParam0)
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

int func_330(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_331(int iParam0, var uParam1)
{
	Global_2697013 = uParam1;
	Global_2697012 = iParam0;
}

int func_332(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_51())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = iParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = unk_0xE16824A2A0B2A6D8();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_333(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_333(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -444617715;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_335(Var0.f_1);
	if ((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_334();
		unk_0x46F55A5B9F053761(1, &Var0, 36, iVar36);
	}
}

void func_334()
{
	unk_0x3EC562D93709C894("AM_ARENA_SHP");
}

var func_335(bool bParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xECDAB41968FF21A8(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_336(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_337(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_338(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_4 = iVar1;
	Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_3 = (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_339(iVar1, 0);
	}
}

void func_339(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_340(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_343(iParam0) >= 0)
	{
		iVar0 = func_343(iParam0);
	}
	else
	{
		iVar0 = func_341(iParam0);
	}
	return iVar0;
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_342())
			{
				return 0;
			}
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 1)
			{
				return 200;
			}
			else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 2)
			{
				return 400;
			}
			else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 3)
			{
				return 600;
			}
			else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 4)
			{
				return 800;
			}
			else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_342()
{
	return BitTest(func_306(6427, -1, 0), 19);
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_7105;
			break;
		
		case 10:
			return Global_262145.f_4128;
			break;
		
		case 11:
			return Global_262145.f_4129;
			break;
		
		case 8:
			return Global_262145.f_4126;
			break;
		
		case 0:
			return Global_262145.f_4112;
			break;
		
		case 9:
			return Global_262145.f_4127;
			break;
		
		case 13:
			return Global_262145.f_4131;
			break;
		
		case 12:
			return Global_262145.f_4130;
			break;
		
		case 2:
			return Global_262145.f_4122;
			break;
		
		case 14:
			return Global_262145.f_4132;
			break;
		
		case 20:
			if (func_342())
			{
				return 0;
			}
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 1)
			{
				return Global_262145.f_7112;
			}
			else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 2)
			{
				return Global_262145.f_7113;
			}
			else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 3)
			{
				return Global_262145.f_7114;
			}
			else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 4)
			{
				return Global_262145.f_7115;
			}
			else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 5)
			{
				return Global_262145.f_7116;
			}
			break;
		
		case 6:
			return Global_262145.f_4125;
			break;
		
		case 22:
			return Global_262145.f_4138;
			break;
		
		case 23:
			return Global_262145.f_4139;
			break;
		
		case 24:
			return Global_262145.f_4140;
			break;
		
		case 25:
			return Global_262145.f_4141;
			break;
		
		case 26:
			return Global_262145.f_4142;
			break;
		
		case 35:
			return Global_262145.f_7681;
			break;
		
		case 15:
			return Global_262145.f_7106;
			break;
		
		case 17:
			return Global_262145.f_7106;
			break;
		
		case 18:
			return Global_262145.f_7106;
			break;
		
		case 19:
			return Global_262145.f_7106;
			break;
		
		case 21:
			return Global_262145.f_7106;
			break;
		
		case 36:
			return Global_262145.f_8148;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_13359;
			break;
		
		case 41:
			return Global_262145.f_13360;
			break;
		
		case 42:
			return Global_262145.f_13361;
			break;
		
		case 43:
			return Global_262145.f_15888;
			break;
		
		case 44:
			return Global_262145.f_15890;
			break;
		
		case 57:
			return Global_262145.f_4140;
			break;
		
		case 58:
			return Global_262145.f_25788;
			break;
		
		case 62:
			return Global_262145.f_25789;
			break;
		
		case 63:
			return Global_262145.f_29259;
			break;
		
		case 64:
			return Global_262145.f_7106;
			break;
		
		case 72:
			return Global_262145.f_25789;
			break;
		
		case 73:
			return Global_262145.f_31774;
			break;
		
		case 74:
			return Global_262145.f_31776;
			break;
		
		case 75:
			return Global_262145.f_31778;
			break;
	}
	return 0;
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23964;
		
		case 2:
			return Global_262145.f_23965;
		
		case 3:
			return Global_262145.f_23966;
		
		default:
	}
	return 9999999;
}

int func_345()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_63.f_50 || Local_63.f_52)
	{
		if (!Local_63.f_51)
		{
			if (!BitTest(Local_63.f_3, 7))
			{
				func_346("HS_UNABLE", iLocal_288, 0, 0, 0, 1, 0);
			}
		}
		return 1;
	}
	switch (bLocal_286)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_385(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_346(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x4292F1DE8BA2D22E(iParam1);
	if (unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x1D25117F71EE3811(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x1D25117F71EE3811(iParam1), 64);
		}
		if (unk_0x2AC37494BBF1DB16(&Var2))
		{
		}
		unk_0xD30970E11AD0FF0D(sParam0);
		if ((iVar1 != -1 && unk_0x1758F8A8511510AB()) && iVar1 < 4)
		{
			if (Global_4718592.f_108449[iVar1] != -1)
			{
				unk_0x35451336B8B420D6(func_383(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x35451336B8B420D6(func_354(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x35451336B8B420D6(func_354(iParam1, -2, 1, 0, 0));
		}
		unk_0x76B34CBB6F5FA1BB(func_352(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xEAFC6135DF75DE92(0, 1);
		}
		else
		{
			Global_2764201 = { func_144(iParam1) };
			if (unk_0xEB463FCE742A28B2(&Global_2764131, 35, &Global_2764201))
			{
				iVar18 = 0;
				if (unk_0x4310A0DB886F9FED(&(Global_2764131.f_22), "Leader") && Global_2764131.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2764131.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_351(&Var2) };
					}
					iVar0 = unk_0xA8A7186C6D1C5263(iVar19, unk_0xF79F9F8D5D13FFFD(&Global_2764131, 35), &(Global_2764131.f_17), Global_2764131.f_30, iVar18, 0, Global_2764131, &Var2, Global_1576217, Global_1576218, Global_1576219);
				}
				else
				{
					iVar0 = unk_0x26823DC92652072F(iVar19, unk_0xF79F9F8D5D13FFFD(&Global_2764131, 35), &(Global_2764131.f_17), Global_2764131.f_30, iVar18, 0, Global_2764131, Global_1576217, Global_1576218, Global_1576219);
				}
			}
			else
			{
				iVar0 = unk_0xEAFC6135DF75DE92(0, 1);
			}
		}
		func_347(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_347(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_350() || !unk_0x1758F8A8511510AB()) || !func_203(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		return;
	}
	iVar0 = func_348(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1944061.f_5[iVar0 /*53*/] = iParam0;
		Global_1944061.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1944061.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1944061.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1944061.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1944061.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1944061.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_348(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944061 - 1))
	{
		if (iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1)
		{
			func_349(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1944061++;
	if (Global_1944061 > 5)
	{
		Global_1944061 = 5;
		return Global_1944061;
	}
	return (Global_1944061 - 1);
}

void func_349(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944061.f_5[iVar0 /*53*/] = { Global_1944061.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_350()
{
	return unk_0x7681F180D7938DA8(-1762644250);
}

struct<16> func_351(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_352(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_353(&cVar0);
}

var func_353(char[4] cParam0)
{
	return cParam0;
}

int func_354(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_149(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x4292F1DE8BA2D22E(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_108449[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_149(unk_0x93E99A2DBCBA9CFA()) || (func_382() && func_381())) && !BitTest(Global_2793044.f_4690, 31)) && !bParam4)
	{
		uVar1 = func_380();
		if (unk_0x7DE17ACDD8BA2642(uVar1))
		{
			if (unk_0x60A06DE259634304(iVar1))
			{
				if (unk_0xB850F932D03EF34D(iVar1) != -1)
				{
					if (func_6(unk_0xB850F932D03EF34D(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1758F8A8511510AB()) && iParam1 < 4)
						{
							if (Global_4718592.f_108449[iParam1] != -1)
							{
								return func_383(iParam1, iParam0, 0);
							}
							else
							{
								return func_366(iParam0, unk_0xB850F932D03EF34D(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_366(iParam0, unk_0xB850F932D03EF34D(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1758F8A8511510AB()) && iParam1 < 4)
			{
				if (Global_4718592.f_108449[iParam1] != -1)
				{
					return func_383(iParam1, iParam0, 0);
				}
				else
				{
					return func_355(0, -1, 0);
				}
			}
			else
			{
				return func_355(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1758F8A8511510AB()) && iParam1 < 4)
	{
		if (Global_4718592.f_108449[iParam1] != -1)
		{
			return func_383(iParam1, iParam0, 0);
		}
		else
		{
			return func_366(iParam0, unk_0x93E99A2DBCBA9CFA(), iParam1, bParam2, bParam3);
		}
	}
	return func_366(iParam0, unk_0x93E99A2DBCBA9CFA(), iParam1, bParam2, bParam3);
}

int func_355(bool bParam0, int iParam1, bool bParam2)
{
	return func_356(unk_0x93E99A2DBCBA9CFA(), bParam0, iParam1, bParam2);
}

int func_356(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xE6DEE82DB0922DF0(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x4292F1DE8BA2D22E(iParam0);
	if ((func_365() || (func_364() && func_362())) && Global_1665699.f_1)
	{
		if (bParam1)
		{
			return func_361(iParam2, iVar0);
		}
		else
		{
			return func_361(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_146(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_360(1);
				}
				else
				{
					return func_360(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_357(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_357(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_360(1);
	}
	return func_360(0);
}

int func_357(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_359(iParam0, iParam1, iParam3);
	if (func_358(Global_4718592.f_113724, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_358(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_166301 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9486[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_359(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_146(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_360(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_361(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_359(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_362()
{
	if (func_363())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_170488, 4);
}

bool func_363()
{
	return BitTest(Global_4718592.f_160050, 12);
}

bool func_364()
{
	if (unk_0x1758F8A8511510AB())
	{
		return BitTest(Global_4718592.f_170488, 0);
	}
	return ((BitTest(Global_4718592.f_170488, 0) || Global_1926644) && unk_0x24B651D85CCE5EB4(joaat("fm_deathmatch_creator")) > 0);
}

int func_365()
{
	if (func_363() && unk_0x1758F8A8511510AB())
	{
		return 1;
	}
	return 0;
}

int func_366(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x4292F1DE8BA2D22E(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853910[iVar2 /*862*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_371())
			{
				iVar3 = func_370(iParam0);
				if (!iVar3 == -1)
				{
					return func_368(iVar3);
				}
			}
			if ((func_187(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_146(unk_0x4292F1DE8BA2D22E(iParam1), unk_0x4292F1DE8BA2D22E(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_360(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_367(1);
			}
			else
			{
				return func_356(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836597 || Global_1836587) || Global_1853910[iParam0 /*862*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836597 == 1 && Global_1836607 == 0))
			{
				return func_360(1);
			}
			else
			{
				return func_356(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836591 && Global_1836078.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_370(iParam0);
	if (!iVar4 == -1)
	{
		return func_368(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_367(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_368(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_369(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_369(int iParam0)
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_370(int iParam0)
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 1))
		{
			return Global_2648605.f_818.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

int func_371()
{
	if ((((((func_379() || func_378()) || func_180()) || func_377()) || func_376()) || func_374()) || func_372())
	{
		return 1;
	}
	if (unk_0x1758F8A8511510AB() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_372()
{
	return func_373(Global_4718592.f_113724);
}

int func_373(int iParam0)
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

int func_374()
{
	return func_375(Global_4718592.f_113724);
}

int func_375(int iParam0)
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

var func_376()
{
	return Global_2683862.f_24;
}

var func_377()
{
	return Global_2683862.f_21;
}

var func_378()
{
	return Global_2683862.f_18;
}

var func_379()
{
	return Global_2683862.f_17;
}

var func_380()
{
	return Global_2621446.f_2;
}

var func_381()
{
	return BitTest(Global_2621446, 4);
}

var func_382()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

int func_383(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058070.f_14[iParam0];
	if (func_371())
	{
		iVar2 = func_370(iParam1);
		if (!iVar2 == -1)
		{
			return func_368(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_13())
	{
		if (Global_4718592.f_108449[iParam0] != -1 && Global_4718592.f_108449[iParam0] <= 4)
		{
			if (Global_4718592.f_108449[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_108449[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_108449[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_108449[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_108449[iParam0];
			}
		}
		else
		{
			iVar0 = func_356(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_384(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_146(iParam0, unk_0x4292F1DE8BA2D22E(iParam1), 0, -1))
		{
			iVar0 = func_367(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_384(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_166456;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_166457;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_166458;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_166459;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_385(char* sParam0, char* sParam1, int iParam2)
{
	if (!unk_0x4310A0DB886F9FED(sParam0, "NULL"))
	{
		if (!BitTest(iLocal_285, 0))
		{
			func_490(&uLocal_305, 3, 0, sParam1, 0, 1);
			if (func_387(&uLocal_305, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				unk_0xECDAB41968FF21A8(&iLocal_285, false);
			}
		}
		else if (!BitTest(iLocal_285, 1))
		{
			if (func_386(0))
			{
				unk_0xECDAB41968FF21A8(&iLocal_285, true);
			}
		}
		else if (!func_386(0))
		{
			iLocal_285 = 0;
			return 1;
		}
	}
	return 0;
}

int func_386(int iParam0)
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

int func_387(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_488())
	{
		return 0;
	}
	if (func_487())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_388(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_388(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
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
	iVar1 = func_486(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x2AC37494BBF1DB16(iParam7))
	{
		iVar2 = unk_0x14580F20CBCE4FA9(iParam7);
	}
	if (func_485(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_480(uParam6))
	{
		return 0;
	}
	if (func_477(iVar0, iVar1, iVar2))
	{
		if (func_476())
		{
			return 0;
		}
		func_475();
		return func_395(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_394(iParam4))
	{
		return 0;
	}
	func_389(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_389(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1649046.f_40.f_1 = iParam0;
	Global_1649046.f_40.f_2 = iParam1;
	Global_1649046.f_40.f_3 = iParam2;
	StringCopy(&(Global_1649046.f_40.f_4), sParam3, 16);
	Global_1649046.f_40.f_8 = iParam4;
	Global_1649046.f_40.f_9 = iParam5;
	Global_1649046.f_40.f_14 = uParam6;
	func_390(iParam4);
	func_475();
	Global_1649046.f_40.f_13 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), 7000);
}

void func_390(int iParam0)
{
	if (func_393(iParam0))
	{
		func_392();
		return;
	}
	func_391();
}

void func_391()
{
	Global_1649046.f_40.f_10 = 0;
}

void func_392()
{
	Global_1649046.f_40.f_10 = 1;
}

int func_393(int iParam0)
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

bool func_394(int iParam0)
{
	return iParam0 > Global_1649046.f_40.f_8;
}

int func_395(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_474();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_471(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_468(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_471(uParam0, sParam3, sParam4);
		}
		return func_450(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_449(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_437(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_436(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_396(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_396(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_435();
	bVar0 = true;
	if (func_398(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_397(120000);
		return 1;
	}
	return 0;
}

void func_397(int iParam0)
{
	Global_1649046.f_40.f_11 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), iParam0);
	Global_1649046.f_40.f_12 = 1;
}

int func_398(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x1D25117F71EE3811(iVar0);
		iVar1 = func_429(iVar0);
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
	sVar4 = func_428(uParam5, bParam6, &iVar3);
	uVar5 = func_426(iParam7, &iVar3);
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
		bVar12 = func_425(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_402(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_401();
	}
	func_435();
	func_400();
	func_399();
	return 1;
}

void func_399()
{
	Global_1649046.f_57 = 0;
	Global_1649046.f_57.f_1 = 0;
}

void func_400()
{
	Global_1649046.f_40 = 3;
}

void func_401()
{
	unk_0xECDAB41968FF21A8(&Global_8253, 8);
}

int func_402(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_403(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_403(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x4310A0DB886F9FED(sParam14, sParam15))
	{
	}
	func_418();
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
	if (func_417() == 0)
	{
		func_415();
		return 0;
	}
	func_414(Global_4542281);
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
	func_418();
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
				func_413(0);
				break;
			
			case 1:
				func_413(1);
				break;
			
			case 2:
				func_413(2);
				break;
			
			case 3:
				func_413(3);
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
		func_418();
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
			if (!func_412())
			{
				unk_0x531D638530A8DB97(-1, "Text_Arrive_Tone", &Global_20372, 1);
			}
		}
	}
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_411(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_408(1);
			func_411(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1977527 != -1 && iParam0 == Global_1977527)
	{
		bVar1 = true;
	}
	func_404(iParam0, sParam1, bVar1, func_407(unk_0x93E99A2DBCBA9CFA()));
	return 1;
}

void func_404(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_405())
	{
		return;
	}
	unk_0xCC71BAE72F44A029(iParam0, -1180597171, unk_0x14580F20CBCE4FA9(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
	if (bParam2)
	{
		Global_1977527 = -1;
	}
}

int func_405()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_13())
	{
		return 0;
	}
	if (func_406(unk_0x93E99A2DBCBA9CFA()))
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

bool func_406(int iParam0)
{
	return func_38(iParam0, 20);
}

var func_407(int iParam0)
{
	return Global_1853910[iParam0 /*862*/].f_205.f_6;
}

void func_408(int iParam0)
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
		if (func_280(14))
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
								func_410(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(iVar2);
								unk_0xAE3413B0654A0035();
							}
							if (Global_2694519)
							{
								if (iVar1 == 14)
								{
									func_409(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_409(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_409(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_409(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_409(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_410(&(Global_8260[iVar1 /*15*/]));
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
								func_410(&(Global_8260[iVar1 /*15*/]));
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
								func_410(&(Global_8260[iVar1 /*15*/]));
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
								func_410(&(Global_8260[iVar1 /*15*/]));
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
								func_410(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(42);
								unk_0xAE3413B0654A0035();
							}
							else if (Global_8260[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890001.f_1;
								func_409(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_409(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_409(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_410(sParam7);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam8))
	{
		func_410(sParam8);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam9))
	{
		func_410(sParam9);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam10))
	{
		func_410(sParam10);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam11))
	{
		func_410(sParam11);
	}
	unk_0xAE3413B0654A0035();
}

void func_410(char* sParam0)
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_411(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_412()
{
	return Global_1575060;
}

void func_413(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113648.f_14053[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_414(int iParam0)
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

void func_415()
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
		if (!func_416(Global_4541032[iVar2 /*104*/].f_18, Global_4541032[Global_4542281 /*104*/].f_18))
		{
			Global_4542281 = iVar2;
		}
		iVar2++;
	}
	Global_4541032[Global_4542281 /*104*/].f_24 = 1;
}

int func_416(struct<6> Param0, struct<6> Param6)
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

int func_417()
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
			if (!func_416(Global_4541032[iVar2 /*104*/].f_18, Global_4541032[Global_4542281 /*104*/].f_18))
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

void func_418()
{
	if (func_280(14))
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
		Global_20383 = func_419();
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

var func_419()
{
	func_420();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_420()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_423(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_422(unk_0xC1A5EC5C986B98AD());
			if (func_421(iVar0) && (!func_280(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_421(Global_113648.f_2365.f_539.f_4321))
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

bool func_421(int iParam0)
{
	return iParam0 < 3;
}

int func_422(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_423(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_423(int iParam0)
{
	if (func_421(iParam0))
	{
		return func_424(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_424(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

int func_425(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_403(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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

int func_426(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_427(2, iParam1);
	return iParam0;
}

void func_427(int iParam0, var uParam1)
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

var func_428(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x2AC37494BBF1DB16(uParam0))
	{
		return sLocal_20;
	}
	if (unk_0x4310A0DB886F9FED(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_427(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x45816CECE89B5B19(sParam0);
}

int func_429(int iParam0)
{
	int iVar0;
	
	iVar0 = func_432(iParam0);
	if (iVar0 == -1)
	{
		func_430(iParam0, 1);
		return 0;
	}
	Global_1666668[iVar0 /*5*/].f_4 = 1;
	return Global_1666668[iVar0 /*5*/].f_2;
}

void func_430(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_432(iParam0) != -1)
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
	if (func_431(iParam0))
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

int func_431(int iParam0)
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

int func_432(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
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
			func_433(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_433(int iParam0)
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
	func_434(&(Global_1666668[iVar32 /*5*/]));
	Global_1666829 = (Global_1666829 - 1);
}

void func_434(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA26A9A07F761D8F8())
	{
		uParam0->f_3 = unk_0x0DB7F8294D73598B();
	}
}

void func_435()
{
	Global_1649046.f_40.f_9 = 4;
}

int func_436(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_435();
	bVar0 = false;
	return func_398(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_437(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_438(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_438(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x1D25117F71EE3811(iVar0);
		iVar1 = func_429(iVar0);
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
	sVar4 = func_428(uParam5, bParam6, &iVar3);
	uVar5 = func_426(iParam7, &iVar3);
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
		bVar12 = func_448(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_440(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_401();
	}
	func_439();
	func_400();
	func_399();
	return 1;
}

void func_439()
{
	Global_1649046.f_40.f_9 = 3;
}

int func_440(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_442(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8960 = iParam6;
			Global_8863[3 /*6*/] = { func_441(iParam0) };
			Global_8940 = iParam0;
			unk_0xECDAB41968FF21A8(&Global_8253, true);
			unk_0xECDAB41968FF21A8(&Global_8253, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_441(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_3;
}

int func_442(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x4310A0DB886F9FED(sParam14, sParam15))
	{
	}
	func_418();
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
	if (func_447() == 0)
	{
		func_445();
		return 0;
	}
	func_444(Global_22792);
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
		func_413(0);
		func_413(2);
		func_413(1);
	}
	else
	{
		func_418();
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
					func_413(0);
					Global_8959 = 0;
					break;
				
				case 1:
					func_413(1);
					Global_8959 = 1;
					break;
				
				case 2:
					func_413(2);
					Global_8959 = 2;
					break;
				
				case 3:
					func_413(3);
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
		func_418();
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
			if (!func_412())
			{
				unk_0x531D638530A8DB97(-1, "Text_Arrive_Tone", &Global_20372, 1);
			}
		}
	}
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_411(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_408(1);
			func_411(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1977527 != -1 && iParam0 == Global_1977527)
	{
		bVar1 = true;
	}
	func_443(iParam0, sParam1, bVar1, func_407(unk_0x93E99A2DBCBA9CFA()));
	return 1;
}

void func_443(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_405())
	{
		return;
	}
	unk_0xCC71BAE72F44A029(iParam0, 1654525105, unk_0x14580F20CBCE4FA9(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
	if (bParam2)
	{
		Global_1977527 = -1;
	}
}

void func_444(int iParam0)
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

void func_445()
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
		if (!func_446(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18))
		{
			Global_22792 = iVar2;
		}
		iVar2++;
	}
	Global_113648.f_14143[Global_22792 /*104*/].f_24 = 1;
}

int func_446(struct<6> Param0, struct<6> Param6)
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

int func_447()
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
			if (!func_446(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18))
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

int func_448(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_442(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8960 = iParam10;
			Global_8863[3 /*6*/] = { func_441(iParam0) };
			Global_8940 = iParam0;
			StringCopy(&Global_8941, sParam5, 64);
			unk_0xECDAB41968FF21A8(&Global_8253, true);
			unk_0xECDAB41968FF21A8(&Global_8253, 7);
		}
		return 1;
	}
	return 0;
}

int func_449(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
	}
	if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
	{
		return 0;
	}
	func_439();
	bVar0 = true;
	if (func_438(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_397(120000);
		return 1;
	}
	return 0;
}

int func_450(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
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
		bVar0 = func_467(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_456(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_455(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_454(1);
		}
		func_453();
		func_400();
		func_452();
		func_451();
		return 1;
	}
	return 0;
}

void func_451()
{
	Global_2803162 = 0;
}

void func_452()
{
	Global_1649046.f_57 = 1;
	Global_1649046.f_57.f_1 = 0;
}

void func_453()
{
	Global_1649046.f_40.f_9 = 1;
}

void func_454(int iParam0)
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

void func_455(int iParam0)
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

int func_456(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_466(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_457(sParam3, iParam4, bParam7);
}

int func_457(char* sParam0, int iParam1, bool bParam2)
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
					func_465();
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
		if (func_464(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_463();
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
				func_418();
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
				if (func_462())
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
			if (func_461())
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
			func_460();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_459();
		func_458();
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
		func_465();
	}
	return 0;
}

void func_458()
{
	if (!func_405())
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

void func_459()
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

void func_460()
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

int func_461()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_462()
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

void func_463()
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

bool func_464(int iParam0, int iParam1)
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

void func_465()
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

void func_466(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_467(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_466(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_457(sParam3, iParam4, bParam7);
}

int func_468(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
	}
	if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
	{
		return 0;
	}
	if (func_470(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_469();
		func_453();
		func_400();
		func_452();
		func_451();
		return 1;
	}
	return 0;
}

void func_469()
{
	Global_22743 = 0;
}

bool func_470(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_466(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_457(sParam3, iParam4, bParam8);
}

int func_471(var uParam0, char* sParam1, char* sParam2)
{
	if (func_473(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_472();
		func_400();
		func_452();
		return 1;
	}
	return 0;
}

void func_472()
{
	Global_1649046.f_40.f_9 = 2;
}

bool func_473(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_466(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_457(sParam2, iParam3, 0);
}

void func_474()
{
	Global_1649046.f_55 = Global_1649046.f_40.f_1;
	Global_1649046.f_55.f_1 = Global_1649046.f_40.f_10;
}

void func_475()
{
	Global_1649046.f_40 = 1;
}

bool func_476()
{
	return Global_1649046.f_40 == 1;
}

int func_477(int iParam0, int iParam1, int iParam2)
{
	if (!func_478(iParam0))
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

int func_478(int iParam0)
{
	if (!func_479())
	{
		return 0;
	}
	if (!Global_1649046.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_479()
{
	if (Global_1649046.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_480(var uParam0)
{
	if (func_484())
	{
		return 0;
	}
	if (func_483())
	{
		return 0;
	}
	if (func_386(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1935176 || func_482())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_481())
		{
			return 0;
		}
	}
	return 1;
}

bool func_481()
{
	return unk_0xF8CFDD89447316E5(unk_0x0DB7F8294D73598B(), Global_1665292);
}

int func_482()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_483()
{
	return Global_1649046.f_40 == 3;
}

bool func_484()
{
	return func_461();
}

int func_485(int iParam0, int iParam1, int iParam2)
{
	if (!func_483())
	{
		return 0;
	}
	return func_477(iParam0, iParam1, iParam2);
}

int func_486(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x14580F20CBCE4FA9(&cVar0);
}

bool func_487()
{
	return Global_2800023.f_1;
}

int func_488()
{
	if (Global_1649234.f_2)
	{
		return 1;
	}
	return func_489();
}

bool func_489()
{
	return func_484();
}

void func_490(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_491(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_492(var uParam0)
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

void func_493(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xE85391CF212DE622())
		{
			func_494(uParam0, 0, 0);
		}
	}
}

void func_494(var uParam0, bool bParam1, bool bParam2)
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

void func_495()
{
	if (unk_0x5E6D8811A0BD0954(Local_63.f_10[iLocal_296 /*7*/]) && !unk_0x055111B11E6624FD(unk_0x0DB8386015E986B7(Local_63.f_10[iLocal_296 /*7*/]), 0))
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (func_5(unk_0x30BE8A934C020461(unk_0x0DB8386015E986B7(Local_63.f_10[iLocal_296 /*7*/]), 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 50625f))
			{
				if (!BitTest(iLocal_280, 4))
				{
					unk_0xECDAB41968FF21A8(&iLocal_280, 4);
				}
			}
			else if (!BitTest(iLocal_280, 5))
			{
				if (Local_63.f_42 != -1)
				{
					if (iLocal_296 == Local_63.f_42)
					{
						if (!BitTest(iLocal_280, 5))
						{
							unk_0xECDAB41968FF21A8(&iLocal_280, 5);
						}
					}
				}
			}
		}
	}
	func_496(iLocal_296);
	iLocal_296++;
	if (iLocal_296 >= func_491(bLocal_286))
	{
		if ((!BitTest(iLocal_280, 4) && BitTest(Local_63.f_1, 8)) || BitTest(iLocal_280, 5))
		{
			if (!BitTest(Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_1, 1))
			{
				unk_0xECDAB41968FF21A8(&(Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_1), true);
			}
		}
		else if (BitTest(Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_1, 1))
		{
			unk_0x061B1200C95204CB(&(Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_1), true);
		}
		unk_0x061B1200C95204CB(&iLocal_280, 4);
		unk_0x061B1200C95204CB(&iLocal_280, 5);
		iLocal_296 = 0;
	}
}

void func_496(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar6;
	float fVar7;
	int iVar8;
	var uVar9;
	int iVar10;
	
	iVar2 = 0;
	Var3 = { 0f, 0f, 0f };
	bVar6 = false;
	if (unk_0x7E2E2E8A648611F4(Local_63.f_10[iParam0 /*7*/]))
	{
		iVar0 = unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]);
		if (bLocal_286 == 0)
		{
			if (unk_0x93E99A2DBCBA9CFA() == iLocal_288)
			{
				if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_63.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar6 = true;
					}
				}
			}
		}
		if (unk_0x93E99A2DBCBA9CFA() == iLocal_287)
		{
			if (BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!BitTest(iLocal_281[iParam0], 0))
				{
					unk_0xECDAB41968FF21A8(&Global_1835490, false);
					unk_0xECDAB41968FF21A8(&(iLocal_281[iParam0]), false);
				}
				if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!BitTest(iLocal_281[iParam0], 1))
					{
						bVar6 = true;
					}
				}
				else if (BitTest(iLocal_281[iParam0], 1))
				{
					unk_0x061B1200C95204CB(&(iLocal_281[iParam0]), true);
				}
			}
		}
		if (bVar6)
		{
			if (unk_0x7E2E2E8A648611F4(Local_63.f_10[iParam0 /*7*/]))
			{
				if (!unk_0xFE2AB315FD8C7A6F(Local_63.f_10[iParam0 /*7*/]))
				{
					unk_0xF05A5F7FFA0C5E2D(Local_63.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (unk_0xFE2AB315FD8C7A6F(Local_63.f_10[iParam0 /*7*/]))
		{
			if (unk_0x93E99A2DBCBA9CFA() == iLocal_287)
			{
				if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 9) && !BitTest(iLocal_281[iParam0], 1))
				{
					if (unk_0xF69DB829BDC5D2AC(iVar0, unk_0x93E99A2DBCBA9CFA()))
					{
						switch (Local_63.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_518(iVar0, 3);
								break;
						}
						unk_0xECDAB41968FF21A8(&(iLocal_281[iParam0]), true);
					}
				}
			}
			if (!unk_0x055111B11E6624FD(iVar0, 0) && !unk_0x66599E73DBA5A850(iVar0))
			{
				switch (Local_63.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						unk_0x992BB708B4B7A005(iVar0, 187, 1);
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 3))
								{
									unk_0x9E15499819214624(iVar0, 3f);
									unk_0xC5B2830898581862(iVar0, 1);
									unk_0x598D91BBD045C1F3(iVar0, 118, 0);
								}
							}
						}
						if (unk_0x93E99A2DBCBA9CFA() == iLocal_288 && func_5(unk_0x30BE8A934C020461(iVar0, 1), unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iLocal_288), 1), 25f))
						{
							unk_0xECDAB41968FF21A8(&(Global_2793044.f_4688), false);
						}
						else
						{
							unk_0x061B1200C95204CB(&(Global_2793044.f_4688), false);
						}
						if (!unk_0xC78375EA6037A7DB(iVar0))
						{
							if (!unk_0x9C35BDF0BC8FC4C6(iVar0, 29))
							{
								if (func_6(iLocal_288, 1, 1))
								{
									if (!BitTest(Local_63.f_2, 13))
									{
										if (func_517(iLocal_288) && !unk_0x9C42F9EEAF66B131(unk_0xF2CFBB1105511E1A(iLocal_288)))
										{
											if (!func_516(iVar0, joaat("script_task_enter_vehicle")))
											{
												if (func_515(iVar0))
												{
													uVar1 = unk_0x95DC39736F6748E3(unk_0xF2CFBB1105511E1A(iLocal_288), 0);
													if (unk_0x7DE17ACDD8BA2642(uVar1))
													{
														if (unk_0xFBD273FDBCF0C5BD(iVar1, 0))
														{
														}
														if (!unk_0xA00635D0DD0DE644(iVar1, func_514(unk_0xF2CFBB1105511E1A(iLocal_288), 0)))
														{
															unk_0xD30E9CAE1FEA1C7E(iVar0, iVar1, -1, func_513(unk_0xF2CFBB1105511E1A(iLocal_288), iVar1), func_512(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(unk_0xA6AA485513271FDF(iVar0) && unk_0x3B30C0E6D3B00F6B(iVar0) == unk_0xF2CFBB1105511E1A(iLocal_288)) && !unk_0x3C3D6D026CF7F51B(iVar0, 1))
										{
											if (func_516(iVar0, joaat("script_task_enter_vehicle")))
											{
												unk_0x909F139DC199D8E0(iVar0);
											}
											if (!func_516(iVar0, joaat("script_task_go_to_entity")))
											{
												if (func_515(iVar0))
												{
													unk_0xF41AB1E9C5AC9D70(iVar0, unk_0xF2CFBB1105511E1A(iLocal_288), -1, 0f, func_512(iParam0), 1073741824, 0);
												}
											}
											else
											{
												unk_0x992BB708B4B7A005(iVar0, 151, 1);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x93E99A2DBCBA9CFA() == iLocal_288 && func_5(unk_0x30BE8A934C020461(iVar0, 1), unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iLocal_288), 1), 25f))
						{
							unk_0xECDAB41968FF21A8(&(Global_2793044.f_4688), false);
						}
						else
						{
							unk_0x061B1200C95204CB(&(Global_2793044.f_4688), false);
						}
						if (unk_0x93E99A2DBCBA9CFA() == iLocal_288)
						{
							if (!BitTest(Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_1, 0))
							{
								if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
								{
									if ((func_4(unk_0x30BE8A934C020461(iVar0, 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) && (unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()) || unk_0x9C42F9EEAF66B131(unk_0xC1A5EC5C986B98AD()))) || (unk_0xA6AA485513271FDF(iVar0) && unk_0x3B30C0E6D3B00F6B(iVar0) == unk_0xC1A5EC5C986B98AD()))
									{
										iVar2 = func_510(unk_0x93E99A2DBCBA9CFA());
										fVar7 = (unk_0xBBDA792448DB5A89(Global_262145.f_7110) / 100f);
										iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) * fVar7));
										iVar8 = func_407(unk_0x93E99A2DBCBA9CFA());
										if (iVar8 > 100)
										{
											iVar8 = 100;
										}
										if (iVar2 > (iVar8 * Global_262145.f_7111))
										{
											iVar2 = (iVar8 * Global_262145.f_7111);
										}
										if (iVar2 > 0)
										{
											unk_0xECDAB41968FF21A8(&iLocal_280, 16);
										}
										unk_0x40042E2575B9E9EC(unk_0xC1A5EC5C986B98AD(), 5000, 10000, 4);
										if (!(unk_0xA6AA485513271FDF(iVar0) && unk_0x3B30C0E6D3B00F6B(iVar0) == unk_0xF2CFBB1105511E1A(iLocal_288)))
										{
											Var3 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) - unk_0x30BE8A934C020461(iVar0, 1) };
											Var3 = { func_509(Var3) };
											Var3.f_0 = (Var3.f_0 * 3f);
											Var3.f_1 = (Var3.f_1 * 3f);
											Var3.f_2 = (Var3.f_2 * 3f);
											unk_0x9E1A4BBC2E70DCFB(unk_0xC1A5EC5C986B98AD(), 1, Var3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										unk_0x474AA9EF29305EA8(iVar0, 512, 0);
										unk_0x7FE5E05BE63F6CB8(iVar0, 17, 1);
										if (((unk_0x3C3D6D026CF7F51B(iVar0, 1) || unk_0xA6AA485513271FDF(iVar0)) && func_507(iVar0)) && func_514(iVar0, 0) == -1)
										{
											unk_0x474AA9EF29305EA8(iVar0, 2, 1);
											unk_0x7FE5E05BE63F6CB8(iVar0, 3, 0);
											unk_0x7FE5E05BE63F6CB8(iVar0, 6, 1);
										}
										else
										{
											unk_0x909F139DC199D8E0(iVar0);
											unk_0xC6C9BF71106ABCAC(iVar0, unk_0xC1A5EC5C986B98AD(), 10000f, -1, 1, 0);
										}
										Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_2 = -1;
										}
										unk_0x8386356641D0DED1(iVar0, Global_1837215);
										unk_0xECDAB41968FF21A8(&(Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_1), false);
										unk_0xECDAB41968FF21A8(&(Global_2793044.f_4688), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0xCF41CEFD254F0F1C(iVar0, 187))
						{
							unk_0x992BB708B4B7A005(iVar0, 187, 0);
						}
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 4))
							{
								unk_0xC5B2830898581862(iVar0, 0);
								unk_0x598D91BBD045C1F3(iVar0, 118, 1);
							}
						}
						if (!(unk_0xA6AA485513271FDF(iVar0) && unk_0x3B30C0E6D3B00F6B(iVar0) == unk_0xF2CFBB1105511E1A(iLocal_288)))
						{
							if (!unk_0xC78375EA6037A7DB(iVar0))
							{
								if (func_515(iVar0))
								{
									if ((unk_0x3C3D6D026CF7F51B(iVar0, 1) || unk_0xA6AA485513271FDF(iVar0)) && !BitTest(Local_63.f_2, 10))
									{
										if (!func_516(iVar0, joaat("script_task_vehicle_drive_wander")) && !func_516(iVar0, joaat("script_task_vehicle_mission")))
										{
											if (unk_0xACD39355028D39EF(iVar0))
											{
												uVar9 = unk_0x95DC39736F6748E3(iVar0, 1);
												iVar10 = unk_0x504B9BB48D41C264(uVar9);
												if (BitTest(Local_63.f_2, 13))
												{
													unk_0x7FE5E05BE63F6CB8(iVar0, 17, 1);
													unk_0x7FE5E05BE63F6CB8(iVar0, 6, 0);
													unk_0x7FE5E05BE63F6CB8(iVar0, 1, 0);
												}
												else if (unk_0x2D92D1084D213DC4(iVar10))
												{
													unk_0xDCE9DC9AFF5AA02D(iVar0, iVar9, 0, unk_0xC1A5EC5C986B98AD(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1082130432, 0);
												}
												else if (unk_0xAF4434A9F7368F35(iVar10))
												{
													unk_0x90C54F90572AEB53(iVar0, iVar9, 0, unk_0xC1A5EC5C986B98AD(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80, 1);
												}
												else if (unk_0x504B9BB48D41C264(iVar9) == joaat("taxi"))
												{
													unk_0x474AA9EF29305EA8(iVar0, 2, 0);
													unk_0x7FE5E05BE63F6CB8(iVar0, 3, 1);
													unk_0x7FE5E05BE63F6CB8(iVar0, 6, 0);
													unk_0xC6C9BF71106ABCAC(iVar0, unk_0xF2CFBB1105511E1A(iLocal_288), 10000f, -1, 1, 0);
												}
												else
												{
													unk_0xA6B22576A5268171(iVar0, unk_0x95DC39736F6748E3(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_516(iVar0, joaat("script_task_smart_flee_ped")))
									{
										if (func_6(iLocal_288, 1, 1))
										{
											unk_0xC6C9BF71106ABCAC(iVar0, unk_0xF2CFBB1105511E1A(iLocal_288), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_505(Local_63.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (BitTest(Local_63.f_2, 13))
				{
					unk_0x909F139DC199D8E0(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]));
					unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 17, 1);
					unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 6, 0);
					unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(Local_63.f_10[iParam0 /*7*/]), 1, 0);
				}
				func_497(iVar0);
			}
		}
	}
}

void func_497(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (BitTest(iLocal_280, 16))
	{
		iVar0 = Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_3;
		iVar1 = func_498(iVar0);
		if (iVar1 == 1)
		{
			unk_0x061B1200C95204CB(&iLocal_280, 15);
			unk_0x061B1200C95204CB(&iLocal_280, 16);
			if (!func_51())
			{
				unk_0x38FB1F701131E803(iVar0, 0, 0, 0);
			}
			if (iVar0 > Global_262145.f_8529)
			{
				iVar0 = Global_262145.f_8529;
			}
			unk_0xCFFDA1550DF82B52(iParam0, iVar0);
			unk_0xECDAB41968FF21A8(&(Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			unk_0x061B1200C95204CB(&iLocal_280, 15);
			unk_0x061B1200C95204CB(&iLocal_280, 16);
			unk_0xECDAB41968FF21A8(&(Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_498(int iParam0)
{
	if (func_51())
	{
		if (func_501(uParam0))
		{
			if (func_500(iLocal_489) == 2)
			{
				unk_0x63A4A2A61A346797(func_499(iLocal_489));
				unk_0x38FB1F701131E803(uParam0, 0, 0, 0);
				func_327(iLocal_489);
				return 1;
			}
			else
			{
				func_327(iLocal_489);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_499(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_500(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_501(var uParam0)
{
	if (!BitTest(iLocal_280, 15))
	{
		func_325(&iLocal_489, -1135378931, 537254313, 1474183246, 1839532116, uParam0, 4, 3);
		func_504(&uLocal_490, 0, 0);
		unk_0xECDAB41968FF21A8(&iLocal_280, 15);
	}
	else if (func_503(iLocal_489) || func_502(&uLocal_490, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_502(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_494(uParam0, bParam2, 0);
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

int func_503(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_504(var uParam0, bool bParam1, bool bParam2)
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

void func_505(var uParam0, bool bParam1)
{
	if (unk_0x7E2E2E8A648611F4(uParam0))
	{
		if (unk_0xFE2AB315FD8C7A6F(uParam0))
		{
			if (!func_506(uParam0))
			{
				if (BitTest(Local_63.f_2, 13))
				{
					unk_0x909F139DC199D8E0(unk_0x0DB8386015E986B7(uParam0));
					unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(uParam0), 17, 1);
					unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(uParam0), 6, 0);
					unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(uParam0), 1, 0);
				}
				else
				{
					if (bParam1)
					{
						unk_0x909F139DC199D8E0(unk_0x0DB8386015E986B7(uParam0));
					}
					unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(uParam0), 6, 1);
					unk_0x7FE5E05BE63F6CB8(unk_0x0DB8386015E986B7(uParam0), 1, 1);
				}
			}
		}
		func_249(&uParam0);
	}
}

int func_506(var uParam0)
{
	if (unk_0x7E2E2E8A648611F4(uParam0))
	{
		return unk_0x66599E73DBA5A850(unk_0x0DB8386015E986B7(uParam0));
	}
	return 1;
}

int func_507(int iParam0)
{
	var uVar0;
	
	if (unk_0x3C3D6D026CF7F51B(iParam0, 1))
	{
		uVar0 = unk_0x95DC39736F6748E3(iParam0, 1);
	}
	if (unk_0xA6AA485513271FDF(iParam0))
	{
		uVar0 = unk_0xCE93CAA8D9CF6D36(iParam0);
	}
	if (!unk_0x7DE17ACDD8BA2642(uVar0))
	{
		if (func_517(iLocal_288))
		{
			iVar0 = unk_0x95DC39736F6748E3(unk_0xF2CFBB1105511E1A(iLocal_288), 1);
		}
	}
	if (unk_0x7DE17ACDD8BA2642(iVar0))
	{
		if (func_508(iVar0))
		{
			return 0;
		}
		if (unk_0xB076EA895B1A6BEC(iParam0) || unk_0x6123E78FD4B274FB(unk_0x504B9BB48D41C264(iVar0)))
		{
			if (!unk_0x1589BC95A4C50F21(iVar0))
			{
				return 0;
			}
		}
		if (unk_0x504B9BB48D41C264(iVar0) == joaat("trailersmall2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_508(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		if (unk_0x055111B11E6624FD(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		{
			if (!unk_0x584CD220C093B0B4(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_509(struct<3> Param0)
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

int func_510(int iParam0)
{
	var uVar0;
	
	uVar0 = func_511(iParam0);
	return uVar0;
}

int func_511(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
		{
			return unk_0x6CD066255FC6B2AA(-1);
		}
		else if (func_301(iParam0))
		{
			return Global_1853910[iParam0 /*862*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_512(int iParam0)
{
	if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_513(int iParam0, int iParam1)
{
	if (!unk_0x055111B11E6624FD(iParam0, 0) && !unk_0x055111B11E6624FD(uParam1, 0))
	{
		if (unk_0x44A6C9475C859B45(iParam0, iParam1))
		{
			if (unk_0xA66E176E5772E965(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0xA66E176E5772E965(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xA66E176E5772E965(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0xA66E176E5772E965(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_514(int iParam0, int iParam1)
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

int func_515(int iParam0)
{
	if ((!unk_0x66599E73DBA5A850(iParam0) && !unk_0xED74DF0E946E0A76(iParam0, 0)) && !unk_0x48A4D45B3B4CEFFD(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_516(int iParam0, int iParam1)
{
	if (unk_0xF5F493B789EA063E(iParam0, iParam1) == 1 || unk_0xF5F493B789EA063E(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_517(int iParam0)
{
	if (unk_0x97CFEE336E843D57(iParam0))
	{
		return 0;
	}
	if (unk_0xACD39355028D39EF(unk_0xF2CFBB1105511E1A(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_518(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2B6E67EB7FF3FD10(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0xC2DE378329C46B2E(iParam0, "AttributeDamage");
	}
	unk_0xECDAB41968FF21A8(&iVar0, iParam1);
	unk_0xF7BF5A344214D039(iParam0, "AttributeDamage", iVar0);
}

void func_519()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = BitTest(Local_63.f_2, 6);
	bVar1 = BitTest(Local_63.f_2, 10);
	func_524();
	if (bLocal_286 != 1)
	{
		if (BitTest(Local_63.f_3, 12))
		{
			func_521();
		}
	}
	if (unk_0xCE4AAA035282336C(uLocal_297))
	{
		func_520(&uLocal_297);
	}
	iVar3 = 0;
	while (iVar3 < func_491(bLocal_286))
	{
		iLocal_281[iVar3] = 0;
		iVar3++;
	}
	if (unk_0xE85391CF212DE622())
	{
		Local_63.f_42 = -1;
		Local_63.f_5 = uLocal_293;
		Local_63.f_6 = uLocal_293;
		Local_63.f_7 = uLocal_293;
		Local_63.f_1 = 0;
		Local_63.f_4 = 0;
		Local_63.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_491(bLocal_286))
		{
			bVar2 = BitTest(Local_63.f_10[iVar3 /*7*/].f_2, 6);
			Local_63.f_10[iVar3 /*7*/].f_2 = 0;
			Local_63.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				unk_0xECDAB41968FF21A8(&(Local_63.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_1 = 0;
	Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_2 = -1;
	iLocal_280 = 0;
	if (bVar0)
	{
		unk_0xECDAB41968FF21A8(&(Local_63.f_2), 6);
	}
	if (bVar1)
	{
		unk_0xECDAB41968FF21A8(&(Local_63.f_2), 11);
		unk_0xECDAB41968FF21A8(&iLocal_280, 8);
	}
	unk_0xECDAB41968FF21A8(&iLocal_280, 4);
	unk_0xECDAB41968FF21A8(&iLocal_280, 11);
}

void func_520(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xCE4AAA035282336C(*uParam0))
	{
		unk_0x45533C09A6C9B409(uParam0);
		bVar0 = true;
	}
	if (unk_0xCE4AAA035282336C(uParam0->f_1))
	{
		unk_0x45533C09A6C9B409(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_7))
	{
		if (!unk_0x055111B11E6624FD(uParam0->f_7, 0))
		{
			if (unk_0x265510B0E403B5F6(uParam0->f_7))
			{
				unk_0xDEA765F8C239CEE0(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_521()
{
	switch (bLocal_286)
	{
		case 0:
			func_523(&(Global_1837223[3]));
			break;
		
		case 1:
			func_522();
			break;
	}
}

void func_522()
{
	int iVar0;
	
	if (unk_0xA26A9A07F761D8F8())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0x0133FF6E23A1DCA4(3, Global_1837175[iVar0], -1467815081);
			unk_0x0133FF6E23A1DCA4(3, -1467815081, Global_1837175[iVar0]);
			iVar0++;
		}
	}
}

void func_523(var uParam0)
{
	int iVar0;
	
	if (unk_0xA26A9A07F761D8F8())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0x0133FF6E23A1DCA4(3, Global_1837175[iVar0], *uParam0);
			unk_0x0133FF6E23A1DCA4(3, *uParam0, Global_1837175[iVar0]);
			iVar0++;
		}
	}
}

void func_524()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_491(bLocal_286))
	{
		bVar1 = false;
		if (bLocal_286 == 0)
		{
			if (!BitTest(Local_63.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_505(Local_63.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_525()
{
	func_526();
	if (bLocal_286 != 1)
	{
		func_495();
	}
}

void func_526()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < func_491(bLocal_286))
	{
		if (unk_0x7E2E2E8A648611F4(Local_63.f_10[iVar0 /*7*/]))
		{
			if (unk_0xFE2AB315FD8C7A6F(Local_63.f_10[iVar0 /*7*/]))
			{
				uVar1 = unk_0x0DB8386015E986B7(Local_63.f_10[iVar0 /*7*/]);
				if (!unk_0x055111B11E6624FD(uVar1, 0))
				{
					unk_0x992BB708B4B7A005(iVar1, 151, 1);
				}
			}
		}
		iVar0++;
	}
	if (Global_2793044.f_1796)
	{
	}
	if (bLocal_286 == 1)
	{
		if (unk_0x93E99A2DBCBA9CFA() == iLocal_288)
		{
			if (BitTest(Local_63.f_1, 0))
			{
				if (!unk_0xC1B5FB06637242C9(uLocal_470))
				{
					if (func_6(iLocal_288, 1, 1))
					{
						if (Local_63.f_50)
						{
							unk_0x7AD51726D7DA42BD(15, unk_0xF2CFBB1105511E1A(iLocal_288), 4, 0f, &uLocal_470, -1467815081, 0);
						}
						else if (Local_63.f_52)
						{
							unk_0x7AD51726D7DA42BD(16, unk_0xF2CFBB1105511E1A(iLocal_288), 4, 0f, &uLocal_470, -1467815081, Local_63.f_53);
						}
						else
						{
							unk_0x7AD51726D7DA42BD(14, unk_0xF2CFBB1105511E1A(iLocal_288), 4, 0f, &uLocal_470, 0, 0);
						}
					}
				}
				if (Global_2793044.f_1796)
				{
					if (!BitTest(Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_1, 3))
					{
						unk_0xECDAB41968FF21A8(&(Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (bLocal_286 == 0)
	{
		if (Local_63.f_42 != -1)
		{
			if (unk_0x5E6D8811A0BD0954(Local_63.f_10[Local_63.f_42 /*7*/]))
			{
				if (!unk_0x055111B11E6624FD(unk_0x0DB8386015E986B7(Local_63.f_10[Local_63.f_42 /*7*/]), 0) && !func_530(unk_0x0DB8386015E986B7(Local_63.f_10[Local_63.f_42 /*7*/])))
				{
					if (Local_63.f_10[Local_63.f_42 /*7*/].f_5 == 3)
					{
						func_527(Local_63.f_10[Local_63.f_42 /*7*/], &uLocal_297, -1082130432, 0, 1, 0, 0, -1, -1, 1, 0, 0);
						if (unk_0xCE4AAA035282336C(uLocal_297))
						{
							if (!BitTest(iLocal_280, 6))
							{
								unk_0x4049FDC177C92D4B(uLocal_297, "FM_MGR_BLP");
								unk_0xECDAB41968FF21A8(&iLocal_280, 6);
							}
						}
					}
				}
				else if (unk_0xCE4AAA035282336C(uLocal_297))
				{
					func_520(&uLocal_297);
				}
			}
			if (unk_0x93E99A2DBCBA9CFA() == iLocal_287)
			{
				if (!BitTest(iLocal_280, 14))
				{
					if (func_385("MPCT_mugsuc", "LAMAR", 19))
					{
						unk_0xECDAB41968FF21A8(&iLocal_280, 14);
					}
				}
			}
		}
	}
}

void func_527(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11)
{
	if (unk_0x7E2E2E8A648611F4(uParam0))
	{
		if (func_529(0))
		{
			Global_2672505 = unk_0x93E99A2DBCBA9CFA();
		}
		if (bParam3)
		{
			func_528(unk_0x0DB8386015E986B7(uParam0), uParam1, 1, Global_2672505, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
		else
		{
			func_528(unk_0x0DB8386015E986B7(uParam0), uParam1, -1, Global_2672505, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
	}
	else if (unk_0xCE4AAA035282336C(*uParam1))
	{
		func_520(uParam1);
	}
}

int func_528(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0x5DC3DCA82C806319();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x66599E73DBA5A850(uParam0))
	{
		if (!unk_0x265510B0E403B5F6(iParam0))
		{
			bVar0 = true;
			if (unk_0xA87ECD5E2653C4A9(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0xDEA765F8C239CEE0(iParam0, 1);
				}
				else
				{
					unk_0x2B1A31992FF9D398(iParam0, 1, iParam8);
				}
				uParam1->f_7 = iParam0;
				unk_0x607EC4A77B2772C7(iParam0, iParam2);
				unk_0x046DEADDB786F985(iParam0, fParam6);
				if (unk_0xCE4AAA035282336C(*uParam1))
				{
					unk_0xC2E0B90856D55E49(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xAA33D108CCE097CF(iParam0, iParam9);
		}
		unk_0xA54CF4556CF17D54(iParam0, uParam4);
		unk_0x77C855860D7E0A7F(iParam0, uParam5);
		*uParam1 = unk_0xD9443754E53A6C0D(iParam0);
		if (!iParam9 == -1 || uParam12)
		{
			if (unk_0xCE4AAA035282336C(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x1886753DA39F38F8(*uParam1, iParam8);
				}
				if (!unk_0x2AC37494BBF1DB16(uParam7))
				{
					unk_0x8A2CDF8102455854("STRING");
					if (bParam10)
					{
						unk_0x76B34CBB6F5FA1BB(sParam7);
					}
					else
					{
						unk_0x48849374B34BB7B9(sParam7);
					}
					unk_0x7FA11514CEBC71C3(*uParam1);
				}
				unk_0xC2E0B90856D55E49(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (unk_0xCE4AAA035282336C(*uParam1))
			{
				unk_0xECDAB41968FF21A8(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x3C3D6D026CF7F51B(iParam0, 0))
		{
			uParam1->f_1 = unk_0x339057845A51EA50(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0xCE4AAA035282336C(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x1886753DA39F38F8(uParam1->f_1, iParam8);
					}
					if (!unk_0x2AC37494BBF1DB16(sParam7))
					{
						unk_0x8A2CDF8102455854("STRING");
						if (bParam10)
						{
							unk_0x76B34CBB6F5FA1BB(sParam7);
						}
						else
						{
							unk_0x48849374B34BB7B9(sParam7);
						}
						unk_0x7FA11514CEBC71C3(uParam1->f_1);
					}
					unk_0xC2E0B90856D55E49(uParam1->f_1, 7);
					unk_0xECDAB41968FF21A8(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xCE4AAA035282336C(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x061B1200C95204CB(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xCE4AAA035282336C(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x061B1200C95204CB(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_529(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

int func_530(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x3C3D6D026CF7F51B(uParam0, 0))
	{
		uVar0 = unk_0x95DC39736F6748E3(iParam0, 0);
		if (unk_0xFBD273FDBCF0C5BD(uVar0, 0))
		{
			if (unk_0x19D6457970A9D67E("MPBitset", 3))
			{
				if (unk_0x2B6E67EB7FF3FD10(iVar0, "MPBitset"))
				{
					uVar1 = unk_0xC2DE378329C46B2E(iVar0, "MPBitset");
				}
				if (BitTest(uVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_531()
{
	return Local_63.f_0;
}

int func_532(int iParam0)
{
	return Local_119[iParam0 /*5*/];
}

void func_533()
{
	if (unk_0x93E99A2DBCBA9CFA() == iLocal_288)
	{
		if (Global_32315)
		{
			if (!BitTest(Local_119[bLocal_295 /*5*/].f_1, 4))
			{
				unk_0xECDAB41968FF21A8(&(Local_119[bLocal_295 /*5*/].f_1), 4);
			}
		}
		else
		{
			unk_0x061B1200C95204CB(&(Local_119[bLocal_295 /*5*/].f_1), 4);
		}
	}
}

void func_534()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x93E99A2DBCBA9CFA() == iLocal_287)
	{
		if (BitTest(Global_1835490, 0))
		{
			unk_0x061B1200C95204CB(&Global_1835490, false);
			bVar0 = true;
		}
		if (!BitTest(Local_119[iLocal_287 /*5*/].f_1, 2))
		{
			if (BitTest(Local_63.f_1, 11))
			{
				unk_0xECDAB41968FF21A8(&(Local_119[iLocal_287 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!BitTest(Local_63.f_1, 11))
		{
			unk_0x061B1200C95204CB(&(Local_119[iLocal_287 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_4 = func_538();
			func_535(Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_4);
		}
	}
	else if (Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_4 != Local_63.f_44)
	{
		Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_4 = Local_63.f_44;
		func_535(Local_119[unk_0xD056B8CB0E6A5169() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_535(var uParam0)
{
	switch (bLocal_286)
	{
		case 0:
			func_537(&(Global_1837223[3]), uParam0);
			break;
		
		case 1:
			func_536(uParam0);
			break;
	}
}

void func_536(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam0, bVar0))
		{
			unk_0x0133FF6E23A1DCA4(1, Global_1837175[bVar0], -1467815081);
			unk_0x0133FF6E23A1DCA4(1, -1467815081, Global_1837175[bVar0]);
		}
		else
		{
			unk_0x0133FF6E23A1DCA4(3, Global_1837175[bVar0], -1467815081);
			unk_0x0133FF6E23A1DCA4(3, -1467815081, Global_1837175[bVar0]);
		}
		bVar0++;
	}
}

void func_537(var uParam0, var uParam1)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam1, bVar0))
		{
			unk_0x0133FF6E23A1DCA4(1, Global_1837175[bVar0], *uParam0);
			unk_0x0133FF6E23A1DCA4(1, *uParam0, Global_1837175[bVar0]);
		}
		else
		{
			unk_0x0133FF6E23A1DCA4(3, Global_1837175[bVar0], *uParam0);
			unk_0x0133FF6E23A1DCA4(3, *uParam0, Global_1837175[bVar0]);
		}
		bVar0++;
	}
}

int func_538()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (bLocal_286 == 1 || bLocal_286 == 0)
		{
			if (iLocal_287 == unk_0xADCF72047FEB806E(iVar1))
			{
				unk_0xECDAB41968FF21A8(&iVar0, bVar1);
			}
		}
		else if (unk_0x93E99A2DBCBA9CFA() == unk_0xADCF72047FEB806E(bVar1))
		{
			unk_0xECDAB41968FF21A8(&iVar0, bVar1);
		}
		else if (func_6(unk_0xADCF72047FEB806E(bVar1), 0, 1))
		{
			if (func_52(unk_0xADCF72047FEB806E(bVar1)))
			{
				unk_0xECDAB41968FF21A8(&iVar0, bVar1);
			}
		}
		bVar1++;
	}
	return iVar0;
}

void func_539()
{
	switch (bLocal_286)
	{
		case 0:
			if (!BitTest(iLocal_280, 11))
			{
				if (unk_0x93E99A2DBCBA9CFA() == iLocal_287 && unk_0x93E99A2DBCBA9CFA() != iLocal_288)
				{
					if (func_6(iLocal_288, 1, 1))
					{
						func_346("GC_TCK_60", iLocal_288, 0, 0, 0, 1, 0);
						unk_0xECDAB41968FF21A8(&iLocal_280, 11);
					}
				}
			}
			if (!BitTest(iLocal_280, 12))
			{
				if (BitTest(Local_63.f_1, 8))
				{
					if (unk_0x93E99A2DBCBA9CFA() == iLocal_287 && unk_0x93E99A2DBCBA9CFA() != iLocal_288)
					{
						if (func_6(iLocal_288, 1, 1))
						{
							func_346("GC_TCK_62", iLocal_288, 0, 0, 0, 1, 0);
							unk_0xECDAB41968FF21A8(&iLocal_280, 12);
						}
					}
				}
			}
			if (BitTest(Local_63.f_2, 10))
			{
				if (!BitTest(iLocal_280, 8))
				{
					if (unk_0x93E99A2DBCBA9CFA() == iLocal_287 && unk_0x93E99A2DBCBA9CFA() != iLocal_288)
					{
						if (func_6(iLocal_288, 1, 1))
						{
							func_346("GC_TCK_65", iLocal_288, 0, 0, 0, 1, 0);
							unk_0xECDAB41968FF21A8(&iLocal_280, 8);
						}
					}
				}
			}
			else if (!BitTest(iLocal_280, 13))
			{
				if (!BitTest(Local_63.f_2, 11))
				{
					if (BitTest(Local_63.f_1, 8))
					{
						if (BitTest(Local_63.f_2, 6))
						{
							if (unk_0x93E99A2DBCBA9CFA() == iLocal_287 && unk_0x93E99A2DBCBA9CFA() != iLocal_288)
							{
								if (func_6(iLocal_288, 1, 1))
								{
									func_346("GC_TCK_63", iLocal_288, 0, 0, 0, 1, 0);
									unk_0xECDAB41968FF21A8(&iLocal_280, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!BitTest(iLocal_280, 11))
			{
				if (unk_0x93E99A2DBCBA9CFA() == iLocal_287)
				{
					if (func_6(iLocal_288, 1, 1) && unk_0x93E99A2DBCBA9CFA() != iLocal_288)
					{
						if (Local_63.f_50)
						{
							func_346("HS_SUCC", iLocal_288, 0, 0, 0, 1, 0);
						}
						else if (Local_63.f_52)
						{
							func_346("GO_ASS_SUCC", iLocal_288, 0, 0, 0, 1, 0);
						}
						else
						{
							func_346("GC_TCK_70", iLocal_288, 0, 0, 0, 1, 0);
						}
						unk_0xECDAB41968FF21A8(&iLocal_280, 11);
					}
				}
				else if (unk_0x93E99A2DBCBA9CFA() == iLocal_288)
				{
					if (func_6(iLocal_287, 1, 1))
					{
						if (Local_63.f_50)
						{
							if (Local_63.f_51)
							{
								func_541("HS_A_SUCC", 0);
							}
							else
							{
								func_346("HS_SENT", iLocal_287, 0, 0, 0, 1, 0);
							}
						}
						else if (Local_63.f_52)
						{
							func_346("GO_ASS_SENT", iLocal_287, 0, 0, 0, 1, 0);
						}
						else
						{
							func_346("GC_TCK_71", iLocal_287, 0, 0, 0, 1, 0);
						}
						unk_0xECDAB41968FF21A8(&iLocal_280, 11);
					}
				}
			}
			if (!BitTest(iLocal_280, 10))
			{
				if (BitTest(Local_63.f_1, 0))
				{
					if (BitTest(Local_63.f_3, 6))
					{
						if (unk_0x93E99A2DBCBA9CFA() == iLocal_287 && unk_0x93E99A2DBCBA9CFA() != iLocal_288)
						{
							if (func_6(iLocal_288, 0, 1))
							{
								func_540(-1, 1);
								if (Local_63.f_50)
								{
									if (!Local_63.f_51)
									{
										func_346("HS_KILLED", iLocal_288, 0, 0, 0, 1, 0);
									}
								}
								else if (Local_63.f_52)
								{
									func_346("GO_ASS_KILL", iLocal_288, 0, 0, 0, 1, 0);
								}
								else
								{
									func_346("GC_TCK_73", iLocal_288, 0, 0, 0, 1, 0);
								}
								unk_0xECDAB41968FF21A8(&iLocal_280, 10);
							}
						}
					}
				}
			}
			if (!BitTest(iLocal_280, 9))
			{
				if (BitTest(Local_63.f_1, 0))
				{
					if (BitTest(Local_63.f_3, 7))
					{
						if (unk_0x93E99A2DBCBA9CFA() == iLocal_287 && unk_0x93E99A2DBCBA9CFA() != iLocal_288)
						{
							if (func_6(iLocal_288, 0, 1))
							{
								if (Local_63.f_50)
								{
									func_346("HS_ESCAPED", iLocal_288, 0, 0, 0, 1, 0);
								}
								else if (Local_63.f_52)
								{
									func_346("GO_ASS_ESC", iLocal_288, 0, 0, 0, 1, 0);
								}
								else
								{
									func_346("GC_TCK_75", iLocal_288, 0, 0, 0, 1, 0);
								}
								unk_0xECDAB41968FF21A8(&iLocal_280, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_540(bool bParam0, int iParam1)
{
	if (Global_1836587)
	{
		if (Global_1836591 && Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/] != 148)
		{
			if (Global_1836078.f_14 == unk_0xADCF72047FEB806E(iParam0))
			{
				Global_1889700 = (Global_1889700 + iParam1);
			}
		}
		else
		{
			Global_1889700 = (Global_1889700 + iParam1);
		}
	}
}

int func_541(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	unk_0xD30970E11AD0FF0D(sParam0);
	iVar0 = unk_0xEAFC6135DF75DE92(0, 1);
	func_347(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_542()
{
	if (unk_0x3F6A5B7803413D6A(false, 0) != Local_63.f_45)
	{
		if (func_550(Local_63.f_45, 0, 1))
		{
			if (unk_0x9E6BB98E57150635(0) <= Local_63.f_45)
			{
				unk_0xE5CBFFB5DE87586F(Local_63.f_45);
			}
		}
	}
	if (unk_0x6D465F7CB16AFBB2(false, 0) != Local_63.f_46)
	{
		if (func_549(Local_63.f_45, 0, 1))
		{
			if (unk_0xCACA703588E52B18(0) <= Local_63.f_46)
			{
				unk_0x08914D2D4A110A6F(Local_63.f_46);
			}
		}
	}
	if (unk_0x42AE3F61BF594E6C(false, 0) != Local_63.f_47)
	{
		if (func_543(Local_63.f_45, 0, 1))
		{
			if (unk_0x5348A6BF7D65C51F(0) <= Local_63.f_47)
			{
				unk_0xF759B94A928DAFDC(Local_63.f_47);
			}
		}
	}
}

bool func_543(int iParam0, bool bParam1, bool bParam2)
{
	return func_544(2, iParam0, 1, bParam1, bParam2);
}

int func_544(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666891, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_548(iParam0) - func_547(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_547(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_548(iParam0) - func_546(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_547(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_548(iParam0) - func_547(iParam0, 1));
		}
		if (!bParam4 && Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/] != 3)
		{
			iVar1 = (iVar1 - func_545(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_545(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_546(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1666891.f_1;
			break;
		
		case 1:
			return Global_1666891.f_2;
			break;
		
		case 2:
			return Global_1666891.f_3;
			break;
	}
	return 0;
}

int func_547(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x93E99A2DBCBA9CFA();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x839E00E966CE3F2D())
			{
				return Global_2657589[iVar0 /*466*/].f_219;
			}
			else
			{
				return unk_0x3F6A5B7803413D6A(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x839E00E966CE3F2D())
			{
				return Global_2657589[iVar0 /*466*/].f_220;
			}
			else
			{
				return unk_0x6D465F7CB16AFBB2(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x839E00E966CE3F2D())
			{
				return Global_2657589[iVar0 /*466*/].f_221;
			}
			else
			{
				return unk_0x42AE3F61BF594E6C(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1666899;
			break;
		
		case 1:
			return Global_1666900;
			break;
		
		case 2:
			return Global_1666901;
			break;
	}
	return 0;
}

bool func_549(int iParam0, bool bParam1, bool bParam2)
{
	return func_544(1, iParam0, 1, bParam1, bParam2);
}

bool func_550(int iParam0, bool bParam1, bool bParam2)
{
	return func_544(0, iParam0, 1, bParam1, bParam2);
}

void func_551()
{
	if (Local_63.f_50)
	{
		if (unk_0x93E99A2DBCBA9CFA() == iLocal_287)
		{
			func_553(3);
		}
		else if (unk_0x93E99A2DBCBA9CFA() == iLocal_288)
		{
			func_553(4);
		}
	}
	else if (Local_63.f_52)
	{
	}
	func_552();
}

void func_552()
{
	unk_0x675D9C12C73D3DE7();
}

void func_553(bool bParam0)
{
	unk_0x061B1200C95204CB(&(Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10.f_5), iParam0);
}

int func_554()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 1;
		}
	}
	if (func_560())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_559())
	{
		return 1;
	}
	if (func_558(159))
	{
		if (!func_557())
		{
			return 1;
		}
	}
	if (func_558(157))
	{
		return 1;
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 1;
	}
	if (func_555() != 0)
	{
		if (unk_0x24B651D85CCE5EB4(func_555()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_555()
{
	switch (func_120())
	{
		case 0:
			return func_556();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_556()
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_557()
{
	return Global_2683862.f_698;
}

int func_558(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_559()
{
	return Global_2694524;
}

bool func_560()
{
	return Global_2683862.f_693;
}

void func_561()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_562(struct<21> Param0)
{
	func_568(32, Param0);
	func_567(0, -1, 0);
	unk_0xAC5E62CB7808A363(&Local_63, 56, 0);
	unk_0x10BF12101F9D80A4(&Local_119, 161, 0);
	unk_0xF1440897111F3111(0);
	if (!func_566())
	{
		func_266();
	}
	bLocal_286 = Param0.f_16;
	iLocal_287 = unk_0xADCF72047FEB806E(Param0.f_17);
	if (unk_0xE6DEE82DB0922DF0(iLocal_287))
	{
	}
	iLocal_288 = unk_0xADCF72047FEB806E(Param0.f_18);
	if (unk_0xE6DEE82DB0922DF0(iLocal_288))
	{
		iLocal_289 = unk_0x14580F20CBCE4FA9(unk_0x1D25117F71EE3811(iLocal_288));
	}
	if (func_565(iLocal_287, 3) && bLocal_286 == 1)
	{
		Local_63.f_50 = 1;
		if (func_565(iLocal_288, 4))
		{
			Local_63.f_51 = 1;
		}
	}
	if (bLocal_286 == 1)
	{
		if (func_564(iLocal_287))
		{
			Local_63.f_52 = 1;
			Local_63.f_53 = func_563(iLocal_287);
		}
	}
	Local_290 = { Param0.f_10 };
	if (bLocal_286 == 1)
	{
		if (unk_0x93E99A2DBCBA9CFA() == iLocal_287)
		{
			unk_0xECDAB41968FF21A8(&Global_1835490, false);
		}
	}
	Global_1926701 = 0;
	Global_1926702 = 0;
	if (bLocal_286 == 1)
	{
		Global_2793044.f_1796 = 0;
	}
	Local_119[unk_0xD056B8CB0E6A5169() /*5*/] = 0;
}

var func_563(int iParam0)
{
	return Global_1853910[iParam0 /*862*/].f_180.f_4;
}

bool func_564(int iParam0)
{
	return Global_1853910[iParam0 /*862*/].f_180 != func_13();
}

bool func_565(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_5, iParam1);
}

int func_566()
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
		if (func_560())
		{
			return 0;
		}
		if (func_558(157))
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

int func_567(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xA1089192E8AE61F4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_552();
			}
			else
			{
				return 0;
			}
		}
		if (!func_529(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
				{
					if (!bParam2)
					{
						func_552();
					}
					else
					{
						return 0;
					}
				}
				if (func_560())
				{
					if (!bParam2)
					{
						func_552();
					}
					else
					{
						return 0;
					}
				}
				if (func_558(157))
				{
					if (!bParam2)
					{
						func_552();
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
					func_552();
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
				func_552();
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
			func_552();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_568(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		func_552();
	}
	unk_0xCF50389093DECE87(iParam0, 0, Param1.f_16);
}

