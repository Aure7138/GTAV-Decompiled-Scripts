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
	if (unk_0x9315DBF7D972F07A())
	{
		func_560(ScriptParam_0);
	}
	while (true)
	{
		func_559();
		if (func_552())
		{
			func_549();
		}
		uLocal_293 = unk_0x0A89FDFA763DCAED();
		func_540();
		func_537();
		func_532();
		func_531();
		switch (func_530(unk_0xA52C4F51ECAB7E02()))
		{
			case 0:
				if (func_529() == 1)
				{
					Local_119[unk_0xA52C4F51ECAB7E02() /*5*/] = 1;
				}
				else if (func_529() == 4)
				{
					Local_119[unk_0xA52C4F51ECAB7E02() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_529() == 1)
				{
					func_523();
				}
				else if (func_529() == 0)
				{
					func_517();
					Local_119[unk_0xA52C4F51ECAB7E02() /*5*/] = 0;
				}
				else if (func_529() == 4)
				{
					Local_119[unk_0xA52C4F51ECAB7E02() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_493();
				func_491(&(Local_63.f_54));
				if (func_490(&(Local_63.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < func_489(bLocal_286))
					{
						func_493();
						iVar0++;
					}
					Local_119[unk_0xA52C4F51ECAB7E02() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_119[unk_0xA52C4F51ECAB7E02() /*5*/] = 4;
			
			case 4:
				func_263();
				break;
		}
		if (unk_0x54E30A65F4FA4962())
		{
			func_261();
			func_260();
			func_259();
			switch (func_529())
			{
				case 0:
					func_258();
					if (func_254())
					{
						if (!unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iLocal_288), 0))
						{
							func_252(unk_0x407E03586628E458(iLocal_288));
						}
						else
						{
							Local_63.f_36 = { Local_290 };
						}
						unk_0xB0550BC91B0159D6(&(Local_63.f_2), 6);
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
	
	if (func_529() < 4)
	{
		if (func_22())
		{
			iLocal_294 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_489(bLocal_286) - 1))
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
		if (unk_0xCCDCD6672DAE6835(Local_63.f_10[iLocal_294 /*7*/]))
		{
			if (unk_0xE5965CDF24F93A9F(unk_0x8AF984152F749D80(Local_63.f_10[iLocal_294 /*7*/])))
			{
				if (unk_0x55B23FE400FCEA6B(unk_0x8AF984152F749D80(Local_63.f_10[iLocal_294 /*7*/]), 0))
				{
					if (!BitTest(Local_63.f_10[iLocal_294 /*7*/].f_2, 6))
					{
						if (bLocal_286 == 0)
						{
							Local_63.f_48++;
							if (!BitTest(Local_63.f_2, 12))
							{
								if (unk_0x2AA852E1EBB27A57(Local_63.f_10[iLocal_294 /*7*/], &uVar0) == iLocal_288)
								{
									unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 12);
								}
							}
							if ((Local_63.f_42 == iLocal_294 && !BitTest(Local_63.f_2, 5)) || Local_63.f_48 == func_489(bLocal_286))
							{
								Var1.f_2 = 199776836;
								Var1.f_10 = iLocal_288;
								Var1.f_11 = iLocal_287;
								if (func_489(bLocal_286) > 1)
								{
									Var1.f_12 = unk_0xA1087A6350CD9244(true);
								}
								else
								{
									Var1.f_12 = unk_0xA1087A6350CD9244(false);
								}
								Var1.f_3 = Local_63.f_43;
								func_20(Var1, func_21(1));
								if (Local_63.f_42 == iLocal_294)
								{
									unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 5);
								}
							}
							else if (!BitTest(Local_63.f_2, 5))
							{
								Var1.f_2 = 1036580915;
								Var1.f_11 = iLocal_287;
								func_20(Var1, func_21(1));
							}
						}
						unk_0xCED9E32812D6C7C7(&(Local_63.f_10[iLocal_294 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!BitTest(Local_63.f_10[iLocal_294 /*7*/].f_2, 5))
					{
						unk_0xCED9E32812D6C7C7(&iLocal_280, 2);
					}
					unk_0xCED9E32812D6C7C7(&iLocal_280, true);
				}
			}
		}
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&iLocal_280, true);
		unk_0xCED9E32812D6C7C7(&iLocal_280, 2);
	}
	func_3(iLocal_294);
	iLocal_294++;
	if (iLocal_294 >= func_489(bLocal_286))
	{
		iLocal_294 = 0;
		if (BitTest(Local_63.f_1, 0))
		{
			if (!BitTest(iLocal_280, 1))
			{
				if (!BitTest(Local_63.f_1, 1))
				{
					unk_0xCED9E32812D6C7C7(&(Local_63.f_1), true);
				}
			}
			if (!BitTest(iLocal_280, 2))
			{
				if (!BitTest(Local_63.f_1, 9))
				{
					unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 9);
				}
			}
		}
		unk_0xB0550BC91B0159D6(&iLocal_280, true);
		unk_0xB0550BC91B0159D6(&iLocal_280, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (unk_0x54E30A65F4FA4962())
	{
		if (unk_0xCCDCD6672DAE6835(Local_63.f_10[iParam0 /*7*/]))
		{
			iVar0 = unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]);
			if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
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
						unk_0xCED9E32812D6C7C7(&(Local_63.f_10[iParam0 /*7*/].f_2), 9);
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
								if ((((unk_0xB02B2CD950B6BA04(iVar0) == 2 || (Global_2689235[iLocal_288 /*453*/].f_244 != -1 && func_18(Global_2689235[iLocal_288 /*453*/].f_244) == 4)) || BitTest(Global_1853348[iLocal_288 /*834*/].f_833, 14)) || func_16(iLocal_288, 0)) || func_9(iLocal_288))
								{
									Local_63.f_10[iParam0 /*7*/].f_3 = uLocal_293;
									unk_0xCED9E32812D6C7C7(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((unk_0xB02B2CD950B6BA04(iVar0) != 2 && Global_2689235[iLocal_288 /*453*/].f_244 == -1) && !BitTest(Global_1853348[iLocal_288 /*834*/].f_833, 14)) && !func_16(iLocal_288, 0)) && !func_9(iLocal_288))
							{
								unk_0xB0550BC91B0159D6(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (unk_0x780A854E3A976A66(uLocal_293, Local_63.f_10[iParam0 /*7*/].f_3) > 10000 || unk_0xB02B2CD950B6BA04(iVar0) != 2)
							{
								if (!BitTest(Local_63.f_2, 10))
								{
									unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 10);
									Local_63.f_39 = { func_8(iLocal_288) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_489(bLocal_286))
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
									if (unk_0x5E9B3BBF63A5E2F6(iVar0) == 3f && !unk_0x98C2AE9A4C384CBF(iVar0, 118, 1))
									{
										unk_0xCED9E32812D6C7C7(&(Local_63.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (BitTest(Local_63.f_2, 1))
						{
							unk_0xCED9E32812D6C7C7(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_288, 1, 1))
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(unk_0x6B62510F212526DC(iVar0, 1), unk_0x6B62510F212526DC(unk_0x407E03586628E458(iLocal_288), 1), 25f) || !func_5(unk_0x6B62510F212526DC(iVar0, 1), unk_0x6B62510F212526DC(unk_0x407E03586628E458(iLocal_288), 1), 625f))
								{
									unk_0xCED9E32812D6C7C7(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(unk_0x6B62510F212526DC(iVar0, 1), unk_0x6B62510F212526DC(unk_0x407E03586628E458(iLocal_288), 1)) || (unk_0x706E4529F37489DB(iVar0) && unk_0xC5DF16431698B381(iVar0) == unk_0x407E03586628E458(iLocal_288)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (BitTest(Local_63.f_2, 1))
						{
							unk_0xCED9E32812D6C7C7(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_288, 1, 1))
						{
							if (!func_4(unk_0x6B62510F212526DC(iVar0, 1), unk_0x6B62510F212526DC(unk_0x407E03586628E458(iLocal_288), 1)) && !(unk_0x706E4529F37489DB(iVar0) && unk_0xC5DF16431698B381(iVar0) == unk_0x407E03586628E458(iLocal_288)))
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
								if (unk_0x98C2AE9A4C384CBF(iVar0, 118, 1))
								{
									unk_0xCED9E32812D6C7C7(&(Local_63.f_10[iParam0 /*7*/].f_2), 4);
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
	
	if (unk_0x48053974ED6F63CE((Param3.f_2 - Param0.f_2)) < 2f)
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

void func_7(int iParam0, int iParam1)
{
	Local_63.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0D01086B38EC256F(iParam0))
	{
		if (func_14(iParam0, 1))
		{
			iVar0 = unk_0x407E03586628E458(iParam0);
			iVar1 = func_11(iParam0);
			if (unk_0xE5965CDF24F93A9F(iVar1))
			{
				if (unk_0x55A0C756C4A8220C(iVar1, 0))
				{
					if (unk_0xF6F5D18EF8EAB859(iVar0, iVar1, 0))
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
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (unk_0x6BD06F4780EAC5DD("MPBitset", 3) && unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
		{
			iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
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
		return Global_2815059.f_5195.f_226[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
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
	return Global_1892703[iParam0 /*599*/].f_10 != func_13();
}

int func_15(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_13())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = unk_0x407E03586628E458(iParam0);
		if (unk_0xD5C6B5E3B93A5EDC(iVar0, iParam1))
		{
			if (func_17(unk_0xB3FF0049C1FD38EC(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)
{
	if (Global_78319)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && (!bParam1 || unk_0x55A0C756C4A8220C(iParam0, 0)))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "Player_Vehicle"))
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
	}
	return 6;
}

int func_19(int iParam0, bool bParam1)
{
	if (unk_0x6BD06F4780EAC5DD("AttributeDamage", 3))
	{
		if (unk_0xF2549FF74D64B720(iParam0, "AttributeDamage"))
		{
			if (BitTest(unk_0xC3B76795ECBDEF41(iParam0, "AttributeDamage"), bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -1529596656;
	Param0.f_1 = unk_0x9E2D6C50374FCFA9();
	if (!iParam14 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Param0, 14, iParam14);
	}
}

int func_21(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar1)))
		{
			iVar2 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar2);
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
				unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 11);
				return 1;
			}
		}
		else if (BitTest(Local_63.f_1, 1))
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_3), false);
			return 1;
		}
	}
	else if (BitTest(Local_63.f_1, 2))
	{
		unk_0xCED9E32812D6C7C7(&(Local_63.f_3), true);
		unk_0xCED9E32812D6C7C7(&Global_1922952, bLocal_286);
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
			unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 2);
			return 1;
		}
		if (BitTest(Local_63.f_2, 8))
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 8);
			return 1;
		}
		if (BitTest(Local_63.f_2, 5))
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 3);
			return 1;
		}
		if (BitTest(Local_63.f_2, 9))
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 9);
			return 1;
		}
		if (BitTest(Local_63.f_1, 15))
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_288, 0, 1))
	{
		if (bLocal_286 != 0 || !BitTest(Local_63.f_2, 1))
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_43(iLocal_288, 129))
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 13);
			unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 8);
			return 1;
		}
		if (func_43(iLocal_288, 131) || BitTest(Global_1892703[iLocal_288 /*599*/].f_1, 11))
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 13);
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_43(iLocal_288, 136) || (func_42(unk_0x9E2D6C50374FCFA9(), 24) && func_41(iLocal_288)))
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_43(iLocal_288, 146))
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_40(unk_0x9E2D6C50374FCFA9()) && ((func_39(unk_0x9E2D6C50374FCFA9()) == 148 || func_39(unk_0x9E2D6C50374FCFA9()) == 142) || func_39(unk_0x9E2D6C50374FCFA9()) == 164))
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(unk_0x9E2D6C50374FCFA9()) == 153)
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(unk_0x9E2D6C50374FCFA9()) && func_39(unk_0x9E2D6C50374FCFA9()) == 170)
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(unk_0x9E2D6C50374FCFA9()) == 167)
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(unk_0x9E2D6C50374FCFA9()) == 168)
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(unk_0x9E2D6C50374FCFA9()) && func_39(unk_0x9E2D6C50374FCFA9()) == 238)
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(unk_0x9E2D6C50374FCFA9()) && func_39(unk_0x9E2D6C50374FCFA9()) == 249)
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
			return 1;
		}
		switch (func_36(unk_0x9E2D6C50374FCFA9()))
		{
			case 6:
			case 7:
				if (func_35())
				{
					unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
					return 1;
				}
				break;
		}
		if (func_34(iLocal_288))
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_33(iLocal_288))
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(iLocal_288) == 276)
		{
			if (func_31(iLocal_288) == 3)
			{
				unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
				return 1;
			}
		}
		if (unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iLocal_288), 0))
		{
			if (bLocal_286 == 1)
			{
				if (BitTest(Local_63.f_1, 0))
				{
					unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 6);
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
					unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 7);
					return 1;
				}
				if (!BitTest(Local_63.f_1, 16))
				{
					if (unk_0x780A854E3A976A66(uLocal_293, Local_63.f_9) > func_30())
					{
						unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 7);
					return 1;
				}
				if (func_23(iLocal_288, func_12(iLocal_287), 1))
				{
					unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 7);
					return 1;
				}
			}
			if (iLocal_289 != unk_0x2E87280918B16506(unk_0x61042CA2A97BBB69(iLocal_288)))
			{
				unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 5);
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
		if (Global_1892703[iParam0 /*599*/].f_10 != func_13())
		{
			if (iParam1 == Global_1892703[iParam0 /*599*/].f_10)
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
		return Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 != func_13())
			{
				if (Global_1892703[iParam0 /*599*/].f_10 == iParam0)
				{
					if (Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam2)
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
	return Global_1853348[iParam0 /*834*/].f_192 != 0;
}

int func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
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
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_32(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
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
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return 0;
	}
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = unk_0x407E03586628E458(iParam0);
		if (unk_0xE5965CDF24F93A9F(iVar0))
		{
			iVar1 = unk_0x15CAA6D7B11F1A7C(iVar0);
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
	return Global_1835491;
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
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_39(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
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
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 4);
}

var func_42(int iParam0, int iParam1)
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

int func_43(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/] == iParam1)
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
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
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
	
	if (func_6(unk_0xA1087A6350CD9244(iLocal_295), 0, 1))
	{
		if (bLocal_286 == 1)
		{
			if (unk_0xA1087A6350CD9244(bLocal_295) == iLocal_288)
			{
				if (!BitTest(Local_63.f_1, 16))
				{
					if (BitTest(Local_119[bLocal_295 /*5*/].f_1, 3))
					{
						unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!BitTest(Local_63.f_1, 11))
			{
				if (func_52(unk_0xA1087A6350CD9244(bLocal_295)))
				{
					if (!BitTest(Local_63.f_4, bLocal_295))
					{
						unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 11);
						unk_0xCED9E32812D6C7C7(&(Local_63.f_4), bLocal_295);
					}
				}
				else if (BitTest(Local_63.f_4, bLocal_295))
				{
					unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 11);
					unk_0xB0550BC91B0159D6(&(Local_63.f_4), bLocal_295);
				}
			}
			else if (BitTest(Local_119[bLocal_295 /*5*/].f_1, 2))
			{
				unk_0xB0550BC91B0159D6(&(Local_63.f_1), 11);
			}
			if (bLocal_286 == 0)
			{
				if (BitTest(Local_119[bLocal_295 /*5*/].f_1, 0))
				{
					if (Local_119[bLocal_295 /*5*/].f_2 != -1)
					{
						if (!BitTest(Local_63.f_2, 1))
						{
							unk_0xCED9E32812D6C7C7(&(Local_63.f_2), true);
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
						while (iVar0 < func_489(bLocal_286))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 9);
						unk_0xCED9E32812D6C7C7(&(Local_63.f_2), true);
					}
				}
				if (func_51())
				{
					if (!BitTest(iLocal_280, 17))
					{
						if (BitTest(Local_119[bLocal_295 /*5*/].f_1, 5))
						{
							func_50();
							unk_0xCED9E32812D6C7C7(&iLocal_280, 17);
						}
						else if (BitTest(Local_119[bLocal_295 /*5*/].f_1, 6))
						{
							func_49();
							unk_0xCED9E32812D6C7C7(&iLocal_280, 17);
						}
					}
				}
				if (!BitTest(Local_119[bLocal_295 /*5*/].f_1, 1))
				{
					if (!BitTest(iLocal_280, 3))
					{
						unk_0xCED9E32812D6C7C7(&iLocal_280, 3);
					}
				}
				else if (unk_0xA1087A6350CD9244(bLocal_295) == iLocal_288)
				{
					if (bLocal_286 == 0)
					{
						if (!BitTest(Local_63.f_2, 1))
						{
							if (!BitTest(Local_63.f_2, 6))
							{
								unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 6);
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
			unk_0xB0550BC91B0159D6(&iLocal_280, 3);
		}
	}
}

void func_47()
{
	if (BitTest(Local_63.f_2, 3))
	{
		unk_0xB0550BC91B0159D6(&(Local_63.f_2), 3);
	}
}

void func_48()
{
	if (!BitTest(Local_63.f_2, 3))
	{
		Local_63.f_6 = uLocal_293;
		unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 3);
	}
}

void func_49()
{
	struct<14> Var0;
	
	Var0.f_2 = -250941162;
	Var0.f_10 = iLocal_288;
	Var0.f_11 = iLocal_287;
	func_20(Var0, func_21(1));
}

void func_50()
{
	struct<14> Var0;
	
	Var0.f_2 = -1296682161;
	Var0.f_10 = iLocal_288;
	Var0.f_11 = iLocal_287;
	if (func_489(bLocal_286) > 1)
	{
		Var0.f_12 = unk_0xA1087A6350CD9244(true);
	}
	else
	{
		Var0.f_12 = unk_0xA1087A6350CD9244(false);
	}
	Var0.f_3 = Local_63.f_43;
	func_20(Var0, func_21(1));
}

int func_51()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

bool func_52(int iParam0)
{
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return func_55();
	}
	return BitTest(Global_1648034.f_241.f_136[func_54(10) /*33*/][iParam0], func_53(10));
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
			if (unk_0x780A854E3A976A66(uLocal_293, Local_63.f_6) > 10000)
			{
				if (BitTest(Local_63.f_2, 1))
				{
					unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 2);
				}
			}
		}
		if (BitTest(Local_63.f_1, 8))
		{
			if (!BitTest(Local_63.f_2, 1))
			{
				if (func_60())
				{
					unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 6);
					func_59();
				}
			}
		}
		if (!BitTest(Local_63.f_1, 0))
		{
			if (func_6(iLocal_288, 1, 1))
			{
				iVar0 = unk_0x407E03586628E458(iLocal_288);
				if (func_58(iVar0))
				{
					func_252(iVar0);
				}
			}
		}
		if (!BitTest(Local_63.f_2, 1))
		{
			if (!func_6(iLocal_288, 1, 1) || func_28(iLocal_288))
			{
				unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 15);
			}
		}
	}
	if (BitTest(Local_63.f_1, 0))
	{
		if (BitTest(Local_63.f_1, 5))
		{
			if (!BitTest(Local_63.f_1, 4))
			{
				if (unk_0x780A854E3A976A66(uLocal_293, Local_63.f_5) > 600000)
				{
					unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 4);
				}
			}
		}
		if (!BitTest(Local_63.f_3, 12))
		{
			if (func_57())
			{
				unk_0xCED9E32812D6C7C7(&(Local_63.f_3), 12);
			}
		}
	}
}

int func_57()
{
	switch (Local_63.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_773 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_773 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (unk_0xF68107C40359970C(iParam0))
	{
	}
	if (BitTest(Local_63.f_1, 17))
	{
		if (!unk_0xD8F9DF94CD871327(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_63.f_36, unk_0x6B62510F212526DC(iParam0, 1), 625f))
	{
		return 1;
	}
	return 0;
}

void func_59()
{
	func_517();
	Local_63.f_0 = 0;
}

int func_60()
{
	if ((((((((BitTest(Local_63.f_2, 6) || unk_0xE08D4560995E7946(iLocal_288)) || func_29(iLocal_288, 1, 1)) || func_62(iLocal_288)) || func_42(iLocal_288, 0)) || func_42(iLocal_288, 7)) || func_28(iLocal_288)) || Global_2689235[iLocal_288 /*453*/].f_246) || func_61(unk_0x407E03586628E458(iLocal_288), joaat("titan")))
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
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0xF68107C40359970C(iParam0))
		{
			if (unk_0x174B84F6B78D6CA7(iParam0))
			{
				uVar0 = unk_0xB3FF0049C1FD38EC(iParam0, 0);
				if (unk_0xE5965CDF24F93A9F(uVar0))
				{
					if (unk_0x15CAA6D7B11F1A7C(iVar0) == iParam1)
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
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 11))
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
		unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 5);
	}
}

void func_64()
{
	if (BitTest(Local_63.f_1, 5))
	{
		unk_0xB0550BC91B0159D6(&(Local_63.f_1), 5);
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
		if (func_254())
		{
			if (bLocal_286 == 1)
			{
				bVar0 = true;
			}
			else if (func_249())
			{
				if (func_246())
				{
					if (func_245())
					{
						bVar0 = true;
					}
					else if (func_243(func_244(bLocal_286)))
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
	if (unk_0x54E30A65F4FA4962())
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
					while (iVar0 < func_489(bLocal_286))
					{
						if ((!unk_0xCCDCD6672DAE6835(Local_63.f_10[iVar0 /*7*/]) && !BitTest(Local_63.f_10[iVar0 /*7*/].f_2, 1)) && !BitTest(Local_63.f_10[iVar0 /*7*/].f_2, 6))
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
				while (iVar0 < func_489(bLocal_286))
				{
					if (!unk_0xCCDCD6672DAE6835(Local_63.f_10[iVar0 /*7*/]))
					{
						if (!BitTest(Local_63.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			unk_0xCED9E32812D6C7C7(&iLocal_280, true);
			unk_0xCED9E32812D6C7C7(&iLocal_280, 2);
			unk_0xCED9E32812D6C7C7(&iLocal_280, 3);
			unk_0xCED9E32812D6C7C7(&iLocal_280, 4);
			unk_0xCED9E32812D6C7C7(&(Local_63.f_1), false);
			unk_0xCED9E32812D6C7C7(&Global_1922953, bLocal_286);
			return 1;
		}
	}
	return 0;
}

void func_67(int iParam0, var uParam1, struct<3> Param2, var uParam5)
{
	if (unk_0x54E30A65F4FA4962())
	{
		if (!unk_0xCCDCD6672DAE6835(Local_63.f_10[iParam0 /*7*/]))
		{
			if (unk_0xD2A20A5254D61849(0) < unk_0x8736933282D0483C(false, 0))
			{
				if (unk_0xA777DF215CCFCC77(1))
				{
					if (func_243(func_244(bLocal_286)))
					{
						if (func_69(&(Local_63.f_10[iParam0 /*7*/]), 7, func_244(bLocal_286), Param2, uParam5, 1, 1, 1))
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
		if (!unk_0x55B23FE400FCEA6B(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
			{
				unk_0xFF4BEB6CFF55A013(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), Global_1837196);
				unk_0xBE74E997FB714956(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 1);
				unk_0x8BB90EDA0A7B150E(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 0);
			}
			unk_0xBED097BB6359F09C(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 0, 0, 0, 0, 0, 0, 1, 0);
			unk_0x395228F7A14C6543(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 2);
			unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 13, 1);
			unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 41, 1);
			unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 20, 1);
			unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 132, 1);
			unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 118, 0);
			unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 311, 1);
			unk_0x78D13FF59B219912(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 300f, 10);
			unk_0xABC2CA6F28903308(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 1);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			unk_0xD8B630F464FE1D6D(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_63.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 0, 0);
					unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 2, 0);
					unk_0x71B502FC2E129665(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 2);
					unk_0x3DAB02AAC9E9EC02(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 0);
					unk_0xA091C233F9D0AB04(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 0, -1, 0);
					unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 32, 1);
					unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 4, 0);
					unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 1024, 1);
					unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 128, 1);
					unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 32, 0);
					unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 8, 0);
					unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 64, 0);
					unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 256, 1);
					unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 1, 0);
					unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 2, 1);
					unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 16, 1);
					if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 0))
					{
						unk_0xCED9E32812D6C7C7(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
					}
					unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 512, 1);
					unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 17, 0);
					unk_0x9521FB98DB6DDF50(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, 1, 1);
					unk_0x62BDDA84CCCF90A9(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 0);
					unk_0xF30F15F203736DE4(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), unk_0x407E03586628E458(iLocal_288), -1, 0, 2);
					unk_0x3673EB5A3C81BA8A(Local_63.f_10[iParam0 /*7*/], 1);
					break;
			}
			unk_0xF160248D9083ED0C(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), unk_0xF2DB717A73826179((Global_262145.f_164 * IntToFloat(unk_0x0CF63873D754B965(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]))))), 0);
			if (!BitTest(Local_63.f_1, 8))
			{
				unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 8);
			}
			unk_0xCED9E32812D6C7C7(&(Local_63.f_10[iParam0 /*7*/].f_2), true);
		}
	}
}

int func_69(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0xA777DF215CCFCC77(1))
	{
		return 0;
	}
	uVar0 = unk_0xA8D58C3AADA2C41C(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xED28EE4BE581A032(uVar0);
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		unk_0x398C962F550CF3B4(uVar0, iParam9);
		if (unk_0xD64C90C3F536F963(uVar0))
		{
			if (bParam7)
			{
				unk_0x4C6E9D70687FCDCE(*uParam0, 1);
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
				if (unk_0x0D01086B38EC256F(iLocal_288) && func_6(iLocal_288, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_32 = -1082130432;
					Var0.f_34 = 1;
					Var0 = { unk_0x6B62510F212526DC(unk_0x407E03586628E458(iLocal_288), 1) };
					Var0.f_5 = 20f;
					if (func_72(Local_63.f_36, 40f, &(Local_63.f_32), &(Local_63.f_35), &Var0))
					{
						unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 3);
						return 1;
					}
				}
				else
				{
					unk_0x8CAEA922D207D693();
					unk_0x3D9CB48B182F9F3B();
					if (Global_2667225.f_2472)
					{
						unk_0x0F02061F6FAEB6C1();
						Global_2667225.f_2472 = 0;
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
			if (((!Global_2667225.f_2466 == *uParam0 || !Global_2667225.f_2466.f_1 == uParam0->f_1) || !Global_2667225.f_2466.f_2 == uParam0->f_2) || !Global_2667225.f_2469 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2) || !Global_2667225.f_2486 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2667225.f_2487 == uParam0->f_7)
		{
			bVar25 = true;
		}
		if (unk_0x87C0DA419F19FF57(Global_2667225.f_2473) && !Global_2667225.f_2473 == unk_0x69CE66B03B2184EB())
		{
			bVar25 = true;
		}
	}
	if (bVar25)
	{
		if (Global_2667225.f_2464 == 1)
		{
			if (unk_0x87C0DA419F19FF57(Global_2667225.f_2473))
			{
				if (Global_2667225.f_2473 == unk_0x69CE66B03B2184EB())
				{
					if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667225.f_2470) < func_242(0))
					{
						return 0;
					}
				}
				else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667225.f_2470) < func_242(0))
				{
					return 0;
				}
			}
			unk_0x8CAEA922D207D693();
			unk_0x3D9CB48B182F9F3B();
			func_241();
		}
		Global_2667225.f_2464 = 0;
	}
	else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667225.f_2470) > func_242(0))
	{
		Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
		func_235();
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
	unk_0x2EE5FFF3E1E3400D(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2667225.f_2464)
	{
		unk_0x8CAEA922D207D693();
		unk_0x3D9CB48B182F9F3B();
		func_241();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_234(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xCCD530822438FEA4())
		{
			Global_2667225.f_2487 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2667225.f_2466 = { *uParam0 };
					Global_2667225.f_2469 = uParam0->f_4;
					break;
				
				case 1:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = 0f;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = uParam0->f_14;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_233(Var8.f_0, Var8.f_1);
			}
			Global_2667225.f_2465 = 1;
			Global_2667225.f_2464 = 1;
			Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
			Global_2667225.f_2470 = unk_0x0A89FDFA763DCAED();
			Global_2667225.f_2473 = unk_0x69CE66B03B2184EB();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2667225.f_2464)
	{
		if (Global_2667225.f_2465 == 1)
		{
			if (unk_0xF8805443C3DB6256(fVar4, fVar5, fVar6, fVar7) || unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667225.f_2471) > 5000)
			{
				Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
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
					if (func_232(Global_4718592.f_168757))
					{
						Var26.f_9 = 1;
					}
					Var26.f_60 = uParam0->f_30;
					func_205(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_204(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2667225.f_2465 = 9;
				}
				else
				{
					Global_2667225.f_2465 = 2;
				}
			}
		}
		if (Global_2667225.f_2465 == 2)
		{
			if ((unk_0x422C66E6B46D5AEF(Var11, Var14) || unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667225.f_2471) > 15000) || unk_0xE64C2E86EAC945DD(Var11, Var14) == 0)
			{
				Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
				if (uParam0->f_5 && !func_201(unk_0x9E2D6C50374FCFA9(), 0))
				{
					Global_2667225.f_2465 = 3;
				}
				else
				{
					Global_2667225.f_2465 = 4;
				}
			}
			else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667225.f_2475) > 7000)
			{
				func_200(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2667225.f_2465 == 3)
		{
			if (func_199() || unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667225.f_2471) > 10000)
			{
				Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
				Global_2667225.f_2465 = 4;
			}
		}
		if (Global_2667225.f_2465 == 4)
		{
			if (unk_0xCCD530822438FEA4())
			{
				unk_0x8CAEA922D207D693();
				unk_0x3D9CB48B182F9F3B();
			}
			else
			{
				iVar0 = 0;
				func_235();
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
					if (!unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
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
							if (unk_0x93946E27B42AA58E(unk_0x9E2D6C50374FCFA9(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
								Global_2667225.f_2465 = 5;
							}
							break;
						
						case 1:
							func_198(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x20139897F77C3B3F(unk_0x9E2D6C50374FCFA9(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
								Global_2667225.f_2465 = 5;
							}
							break;
						
						case 2:
							if (unk_0x20139897F77C3B3F(unk_0x9E2D6C50374FCFA9(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
								Global_2667225.f_2465 = 5;
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
					Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
					Global_2667225.f_2465 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xC9C2F7B876EE4E15(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_198(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0xC9ACA2E149098784(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xC9ACA2E149098784(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2667225.f_2465 == 5)
		{
			if (func_126(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2667225.f_2491.f_5)
				{
					Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
					Global_2667225.f_2465 = 6;
				}
				else
				{
					Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0xD12EFCAB87804BED(Var1.f_0, Var1.f_1);
						}
					}
					Global_2667225.f_2465 = 9;
				}
			}
			else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667225.f_2471) > 20000)
			{
				unk_0x8CAEA922D207D693();
				unk_0x3D9CB48B182F9F3B();
				Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 6)
		{
			iVar0 = 0;
			Global_2667225.f_2491.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_125(uParam0->f_4))
				{
					if (unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_124(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Var8)))
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
			Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
			Global_2667225.f_2465 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xC9C2F7B876EE4E15(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_198(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0xC9ACA2E149098784(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xC9ACA2E149098784(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2667225.f_2465 == 7)
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
							if (!unk_0x652D2EEEF1D3E62C(Global_2667225.f_2625[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_204(Global_2667225.f_2625[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_122(Global_2667225.f_2625[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x5F8653E60ED2288E(Global_2667225.f_2625[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar17 /*3*/] };
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
				Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = unk_0xD12EFCAB87804BED(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2667225.f_2465 = 9;
			}
			else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667225.f_2471) > 20000)
			{
				Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_75(Global_2667225.f_489))
				{
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				func_74(uParam2, &(Global_2667225.f_2491.f_6));
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
				*(uParam2[0 /*3*/]) = { Global_2667225.f_2466 };
				func_76(uParam2[0 /*3*/], 0, bVar87, 0, 0, uParam0, uParam1);
			}
			Global_2667225.f_2471 = unk_0x0A89FDFA763DCAED();
			Global_2667225.f_2465 = 9;
		}
		if (Global_2667225.f_2465 == 9)
		{
			Global_2667225.f_2464 = 0;
			unk_0x8CAEA922D207D693();
			unk_0x3D9CB48B182F9F3B();
			func_241();
			return 1;
		}
		Global_2667225.f_2470 = unk_0x0A89FDFA763DCAED();
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
						if (func_125(uParam5->f_4) || !unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Var69)))
						{
							iVar68 += 4;
						}
						break;
					
					case 1:
						Var69 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Var69)))
						{
							iVar68 += 4;
						}
						break;
					
					case 2:
						Var69 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Var69)))
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
		if (func_88(unk_0x9E2D6C50374FCFA9(), 0))
		{
			Var4.f_9 = 1;
		}
		Var4.f_60 = uParam5->f_30;
		func_205(&Var0, &uVar3, &Var4);
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
					if (unk_0x9CD4CBF2BBE10F00(Var0, &uVar65, 0, 0))
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
				if (unk_0x9CD4CBF2BBE10F00(Var0, &uVar65, 0, 0))
				{
					Var0.f_2 = uVar65;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2667225.f_667 = 1;
}

int func_77(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (func_86(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_78(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_77(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_78(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
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
				*uParam0 = { func_85(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) };
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
				func_83(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x952F3FA2E7880565(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x952F3FA2E7880565(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
			func_84(&Var0, 0f, 0f, unk_0xC4EAB25A108C2429(0f, 360f));
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
		unk_0x29579BC5971CA4B6(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_204(Var1, Param3, fParam9, 0, 0))
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
				if (!unk_0x5F8653E60ED2288E(Var1, Param3, Param6, fParam9, 0, 1))
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
			return func_204(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2667225.f_2735) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_122(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x5F8653E60ED2288E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x5F8653E60ED2288E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x5F8653E60ED2288E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x5F8653E60ED2288E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
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
			return unk_0x5F8653E60ED2288E(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_13())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_13())
			{
				return func_89(Global_2689235[iParam0 /*453*/].f_318.f_6) == 12;
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
	if (unk_0x1555F0FA7BA4FE0F(Param0, 0, uParam3, iParam4))
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
		if ((iParam4 == 1 && !func_107(Global_2667225.f_512, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
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
	while (iVar0 < Global_2673770[iVar4])
	{
		if (func_93(Var1, &(Global_2672374[iVar4 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&Var1, Global_2672374[iVar4 /*155*/][iVar0 /*7*/], Global_2672374[iVar4 /*155*/][iVar0 /*7*/].f_3, Global_2672374[iVar4 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2673770[8])
	{
		if (func_93(Var1, &(Global_2672374[8 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&Var1, Global_2672374[8 /*155*/][iVar0 /*7*/], Global_2672374[8 /*155*/][iVar0 /*7*/].f_3, Global_2672374[8 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
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
	return unk_0x5F8653E60ED2288E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_94(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2673781[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2673781[1])
	{
		if (Param0.f_0 < Global_2673785[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2673781[2])
	{
		if (Param0.f_0 < Global_2673785[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2673785[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2673785[3])
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
	
	if (func_104(unk_0x9E2D6C50374FCFA9(), 1, 0))
	{
		if (Global_4980736.f_36355 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_36355)
			{
				if (Global_4980736.f_36356[iVar0 /*134*/].f_7 != 0)
				{
					if (func_96(Param0, Global_4980736.f_36356[iVar0 /*134*/], Global_4980736.f_36356[iVar0 /*134*/].f_6, Global_4980736.f_36356[iVar0 /*134*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_5739 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_5739)
			{
				if (Global_4980736.f_5742[iVar0 /*442*/].f_15 != 0)
				{
					if (func_96(Param0, Global_4980736.f_5742[iVar0 /*442*/], Global_4980736.f_5742[iVar0 /*442*/].f_3, Global_4980736.f_5742[iVar0 /*442*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_78574 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_78574)
			{
				if (Global_4980736.f_78578[iVar0 /*450*/].f_12 != 0)
				{
					if (func_96(Param0, Global_4980736.f_78578[iVar0 /*450*/], Global_4980736.f_78578[iVar0 /*450*/].f_3, Global_4980736.f_78578[iVar0 /*450*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058069.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058069.f_268)
			{
				if (unk_0xE5965CDF24F93A9F(Global_1058069.f_233[iVar0]) && !unk_0x55B23FE400FCEA6B(Global_1058069.f_233[iVar0], 0))
				{
					if (func_96(Param0, unk_0x6B62510F212526DC(Global_1058069.f_233[iVar0], 1), unk_0x82FE2343F8BDFF0B(Global_1058069.f_233[iVar0]), unk_0x15CAA6D7B11F1A7C(Global_1058069.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058069.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058069.f_266)
			{
				if (unk_0xE5965CDF24F93A9F(Global_1058069.f_119[iVar0]) && !unk_0x55B23FE400FCEA6B(Global_1058069.f_119[iVar0], 0))
				{
					if (func_96(Param0, unk_0x6B62510F212526DC(Global_1058069.f_119[iVar0], 1), unk_0x82FE2343F8BDFF0B(Global_1058069.f_119[iVar0]), unk_0x15CAA6D7B11F1A7C(Global_1058069.f_119[iVar0]), 0.5f))
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
		if (unk_0x5F8653E60ED2288E(Param0, Var0, Var3, fVar6, 0, 1))
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
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x48053974ED6F63CE((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x48053974ED6F63CE((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x48053974ED6F63CE((Var6.f_0 - Var3.f_0));
}

void func_98(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x61ADF697DF551DA6(iParam0))
	{
		unk_0xB38EF75835FAF667(iParam0, uParam1, uParam2);
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
	
	func_100(iParam0, &Global_1577992);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x61ADF697DF551DA6(Global_1577992[iVar0]))
		{
			unk_0xB38EF75835FAF667(Global_1577992[iVar0], &(Global_1577996[iVar0 /*3*/]), &(Global_1578003[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1577996[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1578003[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1577996[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578003[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578010[iVar0] = (Global_1578003[iVar0 /*3*/] - Global_1577996[iVar0 /*3*/]);
		Global_1578013[iVar0] = (Global_1578003[iVar0 /*3*/].f_1 - Global_1577996[iVar0 /*3*/].f_1);
		Global_1578016[iVar0] = (Global_1578003[iVar0 /*3*/].f_2 - Global_1577996[iVar0 /*3*/].f_2);
		if (Global_1578010[iVar0] > Global_1578019)
		{
			Global_1578019 = Global_1578010[iVar0];
		}
		if (Global_1578016[iVar0] > Global_1578020)
		{
			Global_1578020 = Global_1578016[iVar0];
		}
		iVar0++;
	}
	Global_1578021 = (Global_1578019 * -0.5f);
	Global_1578024 = (Global_1578019 * 0.5f);
	Global_1578021.f_1 = ((((0.5f * Global_1578013[0]) + Global_1578013[1]) + Global_1577992.f_3) * -1f);
	Global_1578024.f_1 = (0.5f * Global_1578013[0]);
	Global_1578021.f_2 = (Global_1578016[0] * -0.5f);
	Global_1578024.f_2 = (Global_1578016[0] * 0.5f);
	*uParam1 = { Global_1578021 };
	*uParam2 = { Global_1578024 };
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
	if (Global_1853348[iParam0 /*834*/] == -1)
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
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
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
		if (unk_0x2A488C176D52CCA5(Param0, Global_2667225.f_2737[iVar0 /*3*/]) < fParam3)
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
			func_78(&Var2, &(Global_2667225.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_111(Var2, &uVar1) || func_110(Var2))
			{
				Var2 = { *uParam0 };
				func_78(&Var2, &(Global_2667225.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
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
	
	if (Global_2667225.f_596 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2667225.f_593);
		if (fVar0 < Global_2667225.f_596)
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
		if (Global_2667225.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_86(Param0, &(Global_2667225.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
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
		if (Global_2667225.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_113()
{
	return Global_1946250.f_519;
}

int func_114(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!func_118(unk_0x9E2D6C50374FCFA9(), 1))
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
					Var1 = { func_115(&(Global_2667225.f_45[iVar0 /*12*/])) };
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
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (func_86(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam3, 0, 0))
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
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (func_86(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam3, 0, 0))
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
		return Global_2689235[iParam0 /*453*/].f_1;
	}
	return 0;
}

int func_120()
{
	return Global_31959;
}

int func_121(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2667225.f_2263[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2667225.f_2263[iVar1 /*4*/] };
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
	
	if (Global_2667225.f_2491.f_1 == 0 && Global_2667225.f_2491 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xFCB1DFEFD6237222(&(Global_2667225.f_2491.f_1)))
			{
				case 0:
					func_196(uParam1, uParam2);
					if (!Global_2667225.f_2491.f_2)
					{
						if (uParam2->f_7 && Global_2667225.f_555.f_7 == 0)
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
								*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
							}
							if (uParam1->f_5 && func_75(Global_2667225.f_489))
							{
								if (!Global_2667225.f_2491.f_5)
								{
									Global_2667225.f_2491.f_5 = 1;
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
							uParam0->f_16[0] = unk_0xC4EAB25A108C2429(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_196(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xCCD530822438FEA4())
		{
			if (!unk_0xD41858BE1441F8A7())
			{
				if (unk_0xF4408128C21A71B1())
				{
					func_196(uParam1, uParam2);
					Global_2667225.f_2491.f_1 = unk_0x040E56A95FCFB423();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x3D9CB48B182F9F3B();
				func_196(uParam1, uParam2);
				if (!Global_2667225.f_2491.f_2)
				{
					Global_2667225.f_2491.f_5 = 1;
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
		func_193(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
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
	if (Global_2667225.f_2491.f_1 > 0 || Global_2667225.f_2491 > 0)
	{
		if (uParam1->f_5 || unk_0xCCD530822438FEA4())
		{
			iVar4 = 0;
			while (iVar4 < Global_2667225.f_2491.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2667225.f_2491.f_3)
					{
						iVar4 = Global_2667225.f_2491.f_3 + 1;
					}
					if (iVar4 > (Global_2667225.f_2491.f_1 - 1))
					{
						iVar4 = (Global_2667225.f_2491.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x95CFC066B227F10D(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x27B82F0C405755B0(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x821CEDAF62C8B557(iVar4);
					}
					else
					{
						unk_0x4ABAF316ADD9B9EA(iVar4, &iVar5);
					}
					func_134(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2667225.f_2491.f_3 = iVar4;
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
			iVar4 = Global_2667225.f_2491.f_1;
		}
		if (Global_2667225.f_2491.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2667225.f_2889)
			{
				func_128(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_75(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					func_74(uParam0, &(Global_2667225.f_2491.f_6));
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xC4EAB25A108C2429(0f, 360f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				func_74(uParam0, &(Global_2667225.f_2491.f_6));
				func_127(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x5853B15F78E1A265(0, Global_2667225.f_2491.f_1);
				unk_0x95CFC066B227F10D(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_92(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xC4EAB25A108C2429(0f, 360f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0xC4EAB25A108C2429(0f, 360f);
				func_127(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && func_75(Global_2667225.f_489))
		{
			if (!Global_2667225.f_2491.f_5)
			{
				Global_2667225.f_2491.f_5 = 1;
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
		uParam0->f_16[0] = unk_0xC4EAB25A108C2429(0f, 360f);
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
			Global_2667225.f_2625[(3 - iVar0) /*3*/] = { Global_2667225.f_2625[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2667225.f_2625[0 /*3*/] = { Param0 };
}

void func_128(var uParam0, var uParam1, var uParam2)
{
	if (func_75(Global_2667225.f_489) && func_133() < 4096)
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
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2670168[iVar0 /*10*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2670168[iVar0 /*10*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2670168[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2670168[iVar0 /*10*/] };
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
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2670168[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2670168[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2670168[iVar0 /*10*/] };
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
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			if (Global_2670168[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2670168[iVar0 /*10*/].f_1;
				Var2 = { Global_2670168[iVar0 /*10*/] };
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
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			if (Global_2670168[iVar0 /*10*/].f_2 < fVar1 && Global_2670168[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2670168[iVar0 /*10*/].f_2;
				Var2 = { Global_2670168[iVar0 /*10*/] };
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
		if (Global_2670168[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2670168[iVar0 /*10*/];
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
		if (Global_2667225.f_489 == 1)
		{
			if (unk_0x48053974ED6F63CE((Global_2667225.f_512.f_2 - Param0.f_2)) < 25f)
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
		if (func_190(unk_0x9E2D6C50374FCFA9()))
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
		if (!func_189(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x3F9CA94B386E2F8C(unk_0xE2D3D51028F0428A(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0x3F9CA94B386E2F8C(unk_0xE2D3D51028F0428A(), Param0, 20f))
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
		if (!func_188(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1, 0))
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
			if (unk_0x5F8653E60ED2288E(Param0, uParam5->f_23, uParam5->f_26, uParam5->f_29, 0, 1))
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
		if (func_182(Param0, fParam3, uParam4->f_15, func_187(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!func_179(Param0, 25f, unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_175(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_175(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2667225.f_701)
		{
			Var12 = { Global_2667225.f_512 };
			if (Global_2667225.f_489 == 26)
			{
				Var12 = { Global_2667225.f_555.f_18 };
			}
			if (!func_108(Param0, 0.5f))
			{
				if (func_114(Var12))
				{
					if (!func_77(&Param0, 0, 0, 0, 1) && !func_174(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_174(&Param0, 0))
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
	else if (!func_173(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_172(unk_0x9E2D6C50374FCFA9()) && func_171(unk_0x9E2D6C50374FCFA9())))
		{
			if (!func_170(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
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
		if (!func_171(unk_0x9E2D6C50374FCFA9()))
		{
			if (!func_169(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
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
	if (func_168(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_75(Global_2667225.f_489))
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
		if (func_167(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2667225.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2667225.f_701)
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
			func_166(Param0, &Var17, &Var20, &fVar23);
			if (!func_161(&(Global_2667225.f_45[iVar16 /*12*/]), Var17, Var20, fVar23))
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
		if (unk_0xAC48FF26FAAA8DD0(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (unk_0x34FAA537D539192C(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_160(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2667225.f_2889 && uParam4->f_5)
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
				fVar0 = func_151(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_151(Param0, Global_2667225.f_2466, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_75(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var25.f_2 = func_149(Param0);
			}
			uVar7 = func_140(Param0, 1, 0, 0, 0, 0);
			Var25.f_4 = { Param0 };
			Var25.f_7 = fParam3;
			Var25.f_0 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_139(Var25);
			Global_2667225.f_2491.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2667225.f_2491.f_6[iVar24 /*10*/])
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
							fVar0 = func_151(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_151(Param0, Global_2667225.f_2466, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_75(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_149(Param0);
							bVar36 = true;
						}
						if (fVar2 < Global_2667225.f_2491.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { Param0 };
							Var25.f_7 = fParam3;
							Var25.f_0 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_138(Var25, iVar24);
							Global_2667225.f_2491.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2667225.f_2491.f_6[iVar24 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar24 /*10*/] && fVar0 > Global_2667225.f_2491.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25.f_0 = iVar8;
						Var25.f_1 = fVar0;
						func_138(Var25, iVar24);
						Global_2667225.f_2491.f_2 = 1;
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
					if (iVar8 > Global_2667225.f_2491.f_6[iVar24 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar24 /*10*/] && fVar3 > Global_2667225.f_2491.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25.f_0 = iVar8;
						Var25.f_3 = fVar3;
						func_138(Var25, iVar24);
						Global_2667225.f_2491.f_2 = 1;
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
		if (func_6(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xA829C9A2767AC8EF())
			{
				if (unk_0x0318E2EE6FB4563F(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0));
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
			if (!func_201(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x9E2D6C50374FCFA9()))
				{
					if (func_137(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x0E40F846A70BA3EC(iVar1) != unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))) || unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x0809D748691DCA79(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x6B62510F212526DC(unk_0x407E03586628E458(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x0E40F846A70BA3EC(iVar1) != iParam7 || unk_0x0E40F846A70BA3EC(iVar1) == -1)
						{
							if (unk_0x0809D748691DCA79(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x6B62510F212526DC(unk_0x407E03586628E458(iVar1), 0));
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
	if (unk_0x4A1EA713628C49D4(unk_0x407E03586628E458(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

void func_138(struct<10> Param0, int iParam10)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam10 /*10*/] };
	Global_2667225.f_2491.f_6[iParam10 /*10*/] = { Param0 };
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
		if (Global_2670168[iVar0 /*10*/] < iVar11)
		{
			Global_2670168[iVar0 /*10*/] = { Var1 };
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
		if (Global_2670168[iVar0 /*10*/] == 0)
		{
			Global_2670168[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			if (Global_2670168[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2670168[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2670168[iVar13 /*10*/] = { Param0 };
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
			if (!iVar11 == unk_0x9E2D6C50374FCFA9() || iParam5 == 1)
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
					if (unk_0x0E40F846A70BA3EC(iVar11) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
					{
						if (!unk_0x0E40F846A70BA3EC(iVar11) == -1 || !func_118(unk_0x9E2D6C50374FCFA9(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar11) || !bParam6)
					{
						if (func_137(iVar11))
						{
							Var5 = { func_8(iVar11) };
							if (!iVar11 == unk_0x9E2D6C50374FCFA9())
							{
								Var8 = { unk_0x5C01EC35A233B127(unk_0x407E03586628E458(iVar11)) };
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
							fVar1 = unk_0x987A5F1E1A67E3C0(Param0, Var5, 1);
							fVar2 = unk_0x987A5F1E1A67E3C0(Param0, Var8, 1);
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
		if (!func_147(iParam0))
		{
			if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iParam0))
			{
				if (!unk_0x0E40F846A70BA3EC(iParam0) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
				{
					if (func_104(unk_0x9E2D6C50374FCFA9(), 1, 0))
					{
						if (!func_146(unk_0x0E40F846A70BA3EC(iParam0), unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
				{
					if (!func_104(unk_0x9E2D6C50374FCFA9(), 1, 0))
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
	if (func_145(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	Global_2787505 = { func_144(iParam0) };
	if (unk_0x106C9EE9D83F20DF(&Global_2787505))
	{
		return 1;
	}
	if (func_143(unk_0x9E2D6C50374FCFA9(), iParam0))
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
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

int func_145(int iParam0, int iParam1)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		Global_2787505 = { func_144(iParam0) };
		Global_2787518 = { func_144(iParam1) };
		if (unk_0x8C992447292D600F(&Global_2787505))
		{
			if (unk_0x8C992447292D600F(&Global_2787518))
			{
				unk_0x4FFBF2C0D8249E45(&Global_2787435, 35, &Global_2787505);
				unk_0x4FFBF2C0D8249E45(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_146(int iParam0, int iParam1, int iParam2)
{
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
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 0);
				
				case 1:
					return BitTest(Global_4718592.f_607, 1);
				
				case 2:
					return BitTest(Global_4718592.f_607, 2);
				
				case 3:
					return BitTest(Global_4718592.f_607, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 4);
				
				case 1:
					return BitTest(Global_4718592.f_607, 5);
				
				case 2:
					return BitTest(Global_4718592.f_607, 6);
				
				case 3:
					return BitTest(Global_4718592.f_607, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 8);
				
				case 1:
					return BitTest(Global_4718592.f_607, 9);
				
				case 2:
					return BitTest(Global_4718592.f_607, 10);
				
				case 3:
					return BitTest(Global_4718592.f_607, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 12);
				
				case 1:
					return BitTest(Global_4718592.f_607, 13);
				
				case 2:
					return BitTest(Global_4718592.f_607, 14);
				
				case 3:
					return BitTest(Global_4718592.f_607, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_147(int iParam0)
{
	if (func_201(iParam0, 0))
	{
		return 1;
	}
	if (func_148())
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

bool func_148()
{
	return BitTest(Global_2621446, 3);
}

float func_149(struct<3> Param0)
{
	var uVar0;
	
	return func_150(Param0, &(Global_2667225.f_45), &uVar0);
}

float func_150(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2667225.f_2735) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_151(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
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
	fVar0 = func_135(fVar4, 0f, func_159(), func_157(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_155(Param0);
	fVar0 = func_135(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && !func_118(unk_0x9E2D6C50374FCFA9(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_153(Param0, unk_0x9E2D6C50374FCFA9(), 0);
	fVar0 = func_135(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_152(Param0, &fVar2, &fVar3))
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
		fVar0 = func_135(unk_0x2A488C176D52CCA5(Global_2667225.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_152(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x67A3682C37778785(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x958AC759881D0B58(uVar3))
	{
		unk_0x1B54427560DFE3C3(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x48053974ED6F63CE((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_153(struct<3> Param0, int iParam3, int iParam4)
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
					if (unk_0x0E40F846A70BA3EC(iVar3) != unk_0x0E40F846A70BA3EC(iParam3) || (unk_0x0E40F846A70BA3EC(iVar3) == -1 && unk_0x0E40F846A70BA3EC(iParam3) == -1))
					{
						if (!func_154(iVar3, iParam3))
						{
							if (Global_2680265.f_261[iVar2])
							{
								fVar1 = unk_0x2A488C176D52CCA5(Global_2680265.f_131[iVar2 /*3*/], Param0);
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

int func_154(int iParam0, int iParam1)
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

float func_155(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x46951D3186547C7A(unk_0xE2D3D51028F0428A(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xE5965CDF24F93A9F(uVar6[iVar2]))
		{
			if (!unk_0x55B23FE400FCEA6B(uVar6[iVar2], 0))
			{
				if (func_156(uVar6[iVar2]))
				{
					Var3 = { unk_0x6B62510F212526DC(uVar6[iVar2], 1) };
					fVar1 = unk_0x987A5F1E1A67E3C0(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2667225.f_2934)
	{
		if (Global_1058069.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1058069.f_267)
			{
				if (unk_0xE5965CDF24F93A9F(Global_1058069.f_152[iVar2]))
				{
					if (!unk_0x55B23FE400FCEA6B(Global_1058069.f_152[iVar2], 0))
					{
						if (func_156(Global_1058069.f_152[iVar2]))
						{
							Var3 = { unk_0x6B62510F212526DC(Global_1058069.f_152[iVar2], 1) };
							fVar1 = unk_0x987A5F1E1A67E3C0(Param0, Var3, 1);
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

int func_156(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x6F8FB52F5D1D0B84(uParam0);
	switch (unk_0x76932AF783B85B6A(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x5B79688A82EAC2F0(Global_1837161[unk_0x9E2D6C50374FCFA9()]))
	{
		switch (unk_0x76932AF783B85B6A(uVar0, Global_1837161[unk_0x9E2D6C50374FCFA9()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/] == 0)
	{
		iVar1 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0x5B79688A82EAC2F0(Global_1836871[iVar1]))
			{
				switch (unk_0x76932AF783B85B6A(uVar0, Global_1836871[iVar1]))
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

float func_157()
{
	if (func_158())
	{
		if ((unk_0xD6F7D32A98E07F93(Global_2667225.f_45.f_67) || unk_0x4262B4DCEADC2695(Global_2667225.f_45.f_67)) || Global_2667225.f_45.f_67 == joaat("rhino"))
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

int func_158()
{
	if (Global_2667225.f_45.f_65 && !Global_2667225.f_45.f_304)
	{
		if (!func_147(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
	}
	return 0;
}

float func_159()
{
	if (func_158())
	{
		if ((unk_0xD6F7D32A98E07F93(Global_2667225.f_45.f_67) || unk_0x4262B4DCEADC2695(Global_2667225.f_45.f_67)) || Global_2667225.f_45.f_67 == joaat("rhino"))
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

int func_160(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x34FAA537D539192C(Param0, fParam7)) || (fVar0 > 0f && unk_0xAC48FF26FAAA8DD0(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x2D3CDDF3FE35FCA6(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x2D3CDDF3FE35FCA6(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_161(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_165(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_164(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_162(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_162(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_163(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x5F8653E60ED2288E(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_163(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
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

int func_164(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
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
		if (!unk_0x5F8653E60ED2288E(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_165(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
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
		if (!unk_0x5F8653E60ED2288E(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_166(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_94(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2673770[iVar4])
	{
		if (func_93(Var1, &(Global_2672374[iVar4 /*155*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2672374[iVar4 /*155*/][iVar0 /*7*/] };
			*uParam4 = { Global_2672374[iVar4 /*155*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2672374[iVar4 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2673770[8])
	{
		if (func_93(Var1, &(Global_2672374[8 /*155*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2672374[8 /*155*/][iVar0 /*7*/] };
			*uParam4 = { Global_2672374[8 /*155*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2672374[8 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_167(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2667225.f_45.f_55)
	{
		if (unk_0xBCC73B466E2B2350(Global_2667225.f_45.f_56))
		{
			if (!unk_0x15616E8442D3D1E8(Param0))
			{
				uVar0 = unk_0xA0F62C1038208492(Param0);
				if (unk_0xBCC73B466E2B2350(uVar0))
				{
					iVar1 = unk_0xA57F6A48F0EB95A0(uVar0);
					if (!iVar1 == Global_2667225.f_45.f_57)
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

int func_168(struct<3> Param0)
{
	switch (Global_2667225.f_2487)
	{
		case 0:
			return func_204(Param0, Global_2667225.f_2466, Global_2667225.f_2469, 0, 0);
			break;
		
		case 1:
			return func_122(Param0, Global_2667225.f_2480, Global_2667225.f_2483, 0, 0);
			break;
		
		case 2:
			return unk_0x5F8653E60ED2288E(Param0, Global_2667225.f_2480, Global_2667225.f_2483, Global_2667225.f_2486, 0, 1);
			break;
	}
	return 0;
}

int func_169(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0x5F8653E60ED2288E(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_170(var uParam0, var uParam1, bool bParam2, float fParam3)
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

int func_171(int iParam0)
{
	switch (func_120())
	{
		case 0:
			if (!func_28(iParam0))
			{
				if (Global_1853348[iParam0 /*834*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_172(int iParam0)
{
	if (func_104(iParam0, 1, 0))
	{
		if (Global_1853348[iParam0 /*834*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_173(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2667225.f_2625[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_174(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_110(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0xC4EAB25A108C2429(0.01f, 360f);
			func_83(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 0, fVar4);
			if (func_111(Var1, &uVar0) || func_110(Var1))
			{
				Var1 = { *uParam0 };
				func_83(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_175(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_6(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xA829C9A2767AC8EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x987A5F1E1A67E3C0(func_176(unk_0x9E2D6C50374FCFA9()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x0318E2EE6FB4563F(Param0, fParam3))
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
			if (!func_201(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x9E2D6C50374FCFA9()))
				{
					if ((func_137(iVar1) || !bParam10) && !Global_2689235[iVar1 /*453*/].f_267)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x0E40F846A70BA3EC(iVar1) != unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))) || unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x987A5F1E1A67E3C0(func_176(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0809D748691DCA79(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x0E40F846A70BA3EC(iVar1) != iParam8 || unk_0x0E40F846A70BA3EC(iVar1) == -1)
						{
							if (unk_0x987A5F1E1A67E3C0(func_176(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0809D748691DCA79(iVar1, Param0, fParam3))
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

Vector3 func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_178() && Global_1853348[iVar0 /*834*/].f_804) && !func_177(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_8(iParam0);
}

int func_177(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_178()
{
	return Global_2714762.f_19;
}

int func_179(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_181(Param0, fParam3, iParam4, iParam5, 0) || func_180(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_180(struct<3> Param0, int iParam3, int iParam4)
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
				if (!Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_96(Param0, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
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

int func_181(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
					if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam4, 0, 1))
				{
					if (Global_2680265.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2680265.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_8(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2680265.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2680265.f_131[iVar0 /*3*/], Param0) < fParam3)
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

int func_182(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2667225.f_3 = 0;
	if (!func_179(Param0, 0.5f, unk_0x9E2D6C50374FCFA9(), 0, 0))
	{
		Global_2667225.f_3++;
		if (bParam5)
		{
			if (func_234(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!func_186(Param0, fParam12))
				{
					Global_2667225.f_3++;
					if (!func_95(Param0, 1056964608))
					{
						Global_2667225.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_234(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!func_186(Param0, fParam12))
				{
					Global_2667225.f_3++;
					if (!func_183(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2667225.f_3++;
						if (!func_95(Param0, 1056964608))
						{
							Global_2667225.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			}
		}
		else if (func_234(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			if (!func_186(Param0, fParam12))
			{
				Global_2667225.f_3++;
				if (!func_183(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2667225.f_3++;
					if (!func_95(Param0, 1056964608))
					{
						Global_2667225.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
		}
	}
	return 0;
}

int func_183(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x9E2D6C50374FCFA9() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_137(iVar1)) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (!func_185(unk_0x9E2D6C50374FCFA9(), iVar1, -2, 0))
				{
					if (func_184(func_8(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_184(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0x5F8653E60ED2288E(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_185(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && unk_0x0E40F846A70BA3EC(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == unk_0x0E40F846A70BA3EC(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
	}
	return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
}

int func_186(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_137(iVar1)) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
		{
			if ((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && unk_0x0E40F846A70BA3EC(iVar1) == -1) && !func_118(unk_0x9E2D6C50374FCFA9(), 1))
			{
				return 0;
			}
			else if ((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && !unk_0x9E2D6C50374FCFA9() == iVar1) || !func_185(unk_0x9E2D6C50374FCFA9(), iVar1, -2, 0))
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

int func_187(int iParam0)
{
	if ((Global_2667225.f_489 == 9 || Global_2667225.f_489 == 9) || (Global_2667225.f_489 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_188(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x9E2D6C50374FCFA9() != iVar1) || iParam8 == 0)
		{
			if (func_6(iVar1, bParam4, bParam5))
			{
				if (iParam10 || unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
				{
					if (!bParam7 || (!unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar1)) && func_137(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) != unk_0x0E40F846A70BA3EC(iVar1))) || unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
						{
							if (((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && iParam9) && bParam6) && func_142(iVar1))
							{
							}
							else if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
							{
								if (unk_0x987A5F1E1A67E3C0(func_8(iVar1), Param0, 1) < fParam3)
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

int func_189(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_201(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1)) && iVar1 != unk_0x9E2D6C50374FCFA9())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x0E40F846A70BA3EC(iVar1) == -1)
						{
							if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x0E40F846A70BA3EC(iVar1) == iVar3)
					{
						if (unk_0x987A5F1E1A67E3C0(func_8(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x0809D748691DCA79(iVar1, Param0, fParam3))
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

int func_190(int iParam0)
{
	if (((func_118(iParam0, 1) || func_192(iParam0)) || func_32(iParam0, 0)) || func_191(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_833, 2);
}

int func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/] != -1;
	}
	return 0;
}

void func_193(struct<3> Param0, var uParam3, var uParam4)
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
			if (!BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2621865[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2621865[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2621865[iVar1 /*26*/].f_6.f_2;
					func_195(&Var3, uParam3, iVar0);
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
			if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_262145.f_6292[iVar1 /*3*/], Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6292[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_195(&Var3, uParam3, iVar0);
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
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/], Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_195(&Var3, uParam3, iVar0);
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
				Var7.f_7 = { Global_2621541[iVar1 /*3*/] };
				func_194(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_194(var uParam0, var uParam1, int iParam2)
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_194(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_195(var uParam0, var uParam1, int iParam2)
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_195(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_196(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			if (func_197(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2667225.f_2263[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2667225.f_2263[iVar0 /*4*/] };
					fVar4 = unk_0xD12EFCAB87804BED(Var1.f_0, Var1.f_1);
				}
				func_134(Global_2667225.f_2263[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, uParam0->f_28);
				Global_2667225.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2667225.f_2889)
	{
		func_128(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
	}
}

int func_197(struct<3> Param0, var uParam3)
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

void func_198(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
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

var func_199()
{
	return Global_1573131.f_4;
}

void func_200(var uParam0, var uParam1)
{
	func_241();
	func_233(uParam0, uParam1);
}

bool func_201(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_202(-1, 0) == 8;
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

int func_202(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_203();
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

int func_203()
{
	return Global_1574918;
}

bool func_204(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_205(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_227(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_206(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_206(var uParam0, var uParam1, var uParam2)
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
		if (func_226(uParam0, 1))
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
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2674786[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar16] = 0f;
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
		iVar8 = unk_0x67A3682C37778785(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x958AC759881D0B58(iVar8))
		{
			unk_0x1B54427560DFE3C3(iVar8, &Var1);
			bVar12 = false;
			if (Global_2674786.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x535E2CA2F0DA34D4(iVar8)) || unk_0xA202F3522092063D(iVar8))
			{
				unk_0x4C1EEF24CF4B2752(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_174(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_225(Var1))
									{
										Var1 = { func_221(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_95(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_220(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_226(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_216(Var1, fVar4, uParam2->f_34, unk_0x9E2D6C50374FCFA9(), 0, uParam2->f_56)) || !uParam2->f_12)
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
																					if (!func_215(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_234(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_234(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_213(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar24 = func_212(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2674786.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2674786[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_211(Var1, fVar4, iVar16);
																													iVar16 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar4;
																									Global_2674786.f_162++;
																									if (func_220(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
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
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_209(0, uParam2);
						}
						iVar26 = unk_0x5853B15F78E1A265(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2674786[0 /*3*/] };
						uVar30 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar26 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar26];
						Global_2674786[iVar26 /*3*/] = { Var27 };
						Global_2674786.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
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
						func_208(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
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
						if (func_107(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_226(&Var31, bVar35))
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
				func_207(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar8;
	}
	return 0;
}

void func_207(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_179(*(uParam0[iVar2 /*4*/]), 5f, unk_0x9E2D6C50374FCFA9(), 0, 0))
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

void func_208(int iParam0, struct<3> Param1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = unk_0x5853B15F78E1A265((1 + iParam0), (40 + iParam0));
		if (unk_0x15CEDAB46D800682(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12))
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam5) > 0f)
			{
				*uParam5 = { func_221(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) };
				if (!func_225(*uParam5))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_209(int iParam0, var uParam1)
{
	if (!func_220(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		func_210(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_209(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_209(iParam0 + 1, uParam1);
	}
}

void func_210(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2674786[iParam0 /*3*/] = { Global_2674786[iParam0 + 1 /*3*/] };
			Global_2674786.f_121[iParam0] = Global_2674786.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_211(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2674786[iParam4 /*3*/] };
	uVar3 = Global_2674786.f_121[iParam4];
	Global_2674786[iParam4 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2674786.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_211(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_212(struct<3> Param0, float fParam3, float fParam4)
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

int func_213(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
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
		if ((iParam9 == 1 && unk_0x9E2D6C50374FCFA9() != iVar1) || iParam9 == 0)
		{
			if (func_6(iVar1, bParam5, bParam6))
			{
				if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
				{
					if (!bParam8 || (!unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar1)) && func_137(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) != unk_0x0E40F846A70BA3EC(iVar1))) || unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
						{
							if (((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && iParam10) && bParam7) && func_142(iVar1))
							{
							}
							else if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iVar1), 0))
								{
									iVar3 = unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iVar1), 0);
									if (unk_0xE5965CDF24F93A9F(iVar3) && !unk_0x55B23FE400FCEA6B(iVar3, 0))
									{
										iVar4 = unk_0x15CAA6D7B11F1A7C(iVar3);
										Var5 = { unk_0x6B62510F212526DC(iVar3, 0) };
										fVar8 = unk_0x82FE2343F8BDFF0B(iVar3);
										if (func_214(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
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

int func_214(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10)
{
	if (func_96(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_97(Param0, fParam3, iParam4, &Global_1976933, &(Global_1976933.f_3), &(Global_1976933.f_6), 1036831949);
	func_97(Param5, fParam8, iParam9, &(Global_1976933.f_7), &(Global_1976933.f_10), &(Global_1976933.f_13), 1036831949);
	if (unk_0xC25227FFC64097FF(Global_1976933, Global_1976933.f_3, Global_1976933.f_6, Global_1976933.f_7, Global_1976933.f_10, Global_1976933.f_13))
	{
		return 1;
	}
	return 0;
}

int func_215(struct<3> Param0, float fParam3, int iParam4)
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
	iVar1 = unk_0xFE15FEB341652241(Param0, 30f, 0, iVar0);
	if (unk_0xE5965CDF24F93A9F(iVar1) && !unk_0x55B23FE400FCEA6B(iVar1, 0))
	{
		iVar2 = unk_0x15CAA6D7B11F1A7C(iVar1);
		Var3 = { unk_0x6B62510F212526DC(iVar1, 0) };
		fVar6 = unk_0x82FE2343F8BDFF0B(iVar1);
		if (func_214(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0xFE15FEB341652241(Param0, 30f, 0, iVar0);
	if (unk_0xE5965CDF24F93A9F(iVar1) && !unk_0x55B23FE400FCEA6B(iVar1, 0))
	{
		iVar2 = unk_0x15CAA6D7B11F1A7C(iVar1);
		Var3 = { unk_0x6B62510F212526DC(iVar1, 0) };
		fVar6 = unk_0x82FE2343F8BDFF0B(iVar1);
		if (func_214(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_216(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_219(Param0, fParam3, iParam4, iParam5, iParam6) || func_217(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_217(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
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
				if (func_218(Param0, iParam4, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_214(Param0, fParam3, iParam4, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
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

int func_218(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
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

int func_219(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
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
				if (Global_2680265.f_261[iVar0])
				{
					if (func_96(Global_2680265.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_96(func_8(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2680265.f_261[iVar0])
			{
				if (func_96(Global_2680265.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
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

int func_220(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_204(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
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
				if (unk_0x5F8653E60ED2288E(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_221(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16)
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
			if (!func_224(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x4C1EEF24CF4B2752(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x13FD00A258A58752(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
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
			if (unk_0x4262B4DCEADC2695(iParam11) && func_223(Param0))
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
					fVar14 = func_222(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_222(iParam11, 1.5f);
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
		if (!func_224(Param0, *uParam3, Param6))
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
	Var0 = { unk_0x6DB7FBD602C51670(Param0, *uParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x3748F54B0AEC5219(Param0, *uParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(unk_0x652D2EEEF1D3E62C(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_222(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_222(iParam11, 1.5f);
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

float func_222(int iParam0, float fParam1)
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

int func_223(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0x9CD4CBF2BBE10F00(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_224(struct<3> Param0, float fParam3, struct<3> Param4)
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

int func_225(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_94(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2674493[iVar1])
	{
		if (func_93(Param0, &(Global_2673790[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2674493[8])
	{
		if (func_93(Param0, &(Global_2673790[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_226(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2667225.f_26.f_18)
	{
		switch (Global_2667225.f_26.f_17)
		{
			case 0:
				if (func_204(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_122(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x5F8653E60ED2288E(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, Global_2667225.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_85(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, Global_2667225.f_26.f_16, Global_2667225.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_227(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2667225.f_1754 > 0)
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
			if (func_226(uParam0, 1))
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
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2674786[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (uParam2->f_30)
		{
			func_230(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_229();
		}
		else
		{
			func_228();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar6 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var3) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_216(Var3, fVar6, uParam2->f_34, unk_0x9E2D6C50374FCFA9(), 0, uParam2->f_56)) || !uParam2->f_12)
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
										if (!func_215(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_234(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_234(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_213(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar13 = func_212(Var3, uParam2->f_54, &fVar14);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar13 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar13 < uParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2674786.f_162)
															{
																Global_2674786[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar13;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2674786.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var3, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2674786[iVar7 /*3*/], uParam2->f_35))
																	{
																		func_211(Var3, fVar6, iVar7);
																		iVar7 = Global_2674786.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar6;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
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
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_209(0, uParam2);
				}
				iVar0 = unk_0x5853B15F78E1A265(0, Global_2674786.f_162);
				Var15 = { Global_2674786[0 /*3*/] };
				uVar18 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var15 };
				Global_2674786.f_121[iVar0] = uVar18;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
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
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = unk_0x5853B15F78E1A265(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
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

void func_228()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		Global_2667225.f_2160[iVar0] = iVar0;
		iVar0++;
	}
}

void func_229()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		Global_2667225.f_2160[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		iVar1 = unk_0x5853B15F78E1A265(0, Global_2667225.f_1754);
		iVar2 = unk_0x5853B15F78E1A265(0, Global_2667225.f_1754);
		uVar3 = Global_2667225.f_2160[iVar1];
		Global_2667225.f_2160[iVar1] = Global_2667225.f_2160[iVar2];
		Global_2667225.f_2160[iVar2] = uVar3;
		iVar0++;
	}
}

void func_230(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2667225.f_1754)
	{
		uVar1 = func_231(Param0, fVar0, &fVar0);
		Global_2667225.f_2160[iVar2] = uVar1;
		iVar2++;
	}
}

int func_231(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2667225.f_1754)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2667225.f_1755[iVar3 /*4*/]);
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

bool func_232(int iParam0)
{
	return iParam0 == 50;
}

void func_233(var uParam0, var uParam1)
{
	unk_0x862852388AE23818(uParam0, uParam1, 0.1f);
	Global_2667225.f_2474 = unk_0x69CE66B03B2184EB();
	Global_2667225.f_2472 = 1;
	Global_2667225.f_2475 = unk_0x0A89FDFA763DCAED();
}

int func_234(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2667225.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x34FAA537D539192C(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xAC48FF26FAAA8DD0(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xAC48FF26FAAA8DD0(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2D3CDDF3FE35FCA6(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam13)
	{
		if (unk_0x3FDE5764A07BA515(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam14 > 0f)
	{
		if (func_188(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_175(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

void func_235()
{
	func_240();
	func_239();
	func_238();
	func_237();
	func_236();
}

void func_236()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2670168[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_237()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2667225.f_2491.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_238()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2667225.f_2491.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_239()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2667225.f_2491.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_240()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2667225.f_2491 = { Var0 };
}

void func_241()
{
	if (Global_2667225.f_2472)
	{
		if (unk_0x69CE66B03B2184EB() == Global_2667225.f_2474)
		{
			unk_0x0F02061F6FAEB6C1();
		}
		else
		{
			unk_0x0F02061F6FAEB6C1();
		}
		Global_2667225.f_2472 = 0;
	}
}

int func_242(bool bParam0)
{
	if (unk_0xA829C9A2767AC8EF())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_243(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_63.f_49;
			break;
	}
	return 0;
}

int func_245()
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

int func_246()
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
		unk_0xCED9E32812D6C7C7(&(Local_63.f_2), false);
		if (bLocal_286 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_288, 1, 1))
		{
			if (unk_0x8736933282D0483C(false, 0) - unk_0xD2A20A5254D61849(0)) >= func_489(bLocal_286)
			{
				if (unk_0xA777DF215CCFCC77(func_489(bLocal_286)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = unk_0x407E03586628E458(iLocal_288);
					iVar3 = unk_0x46951D3186547C7A(iVar2, &uLocal_471, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_489(bLocal_286))
							{
								if (iVar5 == -1)
								{
									if (((!unk_0xCCDCD6672DAE6835(Local_63.f_10[iVar1 /*7*/]) && !BitTest(Local_63.f_10[iVar1 /*7*/].f_2, 1)) && !BitTest(Local_63.f_10[iVar1 /*7*/].f_2, 6)) && !BitTest(Local_63.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (unk_0xE5965CDF24F93A9F(uLocal_471[iVar0]))
								{
									if (!unk_0x55B23FE400FCEA6B(uLocal_471[iVar0], 0))
									{
										if (!unk_0x65FAB09725E2FE75(uLocal_471[iVar0]))
										{
											if (func_248(unk_0x15CAA6D7B11F1A7C(uLocal_471[iVar0])))
											{
												if (!unk_0xA6A089369417736E(uLocal_471[iVar0]))
												{
													if (!unk_0xD5C6B5E3B93A5EDC(uLocal_471[iVar0], 0))
													{
														if (func_5(unk_0x6B62510F212526DC(uLocal_471[iVar0], 1), unk_0x6B62510F212526DC(iVar2, 1), 625f))
														{
															unk_0x2D58A6131679D82C(uLocal_471[iVar0], 1, 0);
															Local_63.f_10[iVar5 /*7*/].f_6 = iVar0;
															unk_0xCED9E32812D6C7C7(&(Local_63.f_10[iVar5 /*7*/].f_2), 8);
															if (!BitTest(Local_63.f_1, 12))
															{
																Local_63.f_8 = uLocal_293;
																unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 12);
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
		while (iVar6 < func_489(bLocal_286))
		{
			if (BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 1) || BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!unk_0x55B23FE400FCEA6B(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (unk_0xA6A089369417736E(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6]))
					{
						if (!unk_0x3A8B0F5B0E3DE13A(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6]))
						{
							unk_0xE7DD33D0E2A313F4(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							unk_0x70D9EC5AF67D79C4(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6], 1);
							Local_63.f_10[iVar6 /*7*/] = unk_0xED28EE4BE581A032(uLocal_471[Local_63.f_10[iVar6 /*7*/].f_6]);
							unk_0x4C6E9D70687FCDCE(Local_63.f_10[iVar6 /*7*/], 1);
							unk_0xCED9E32812D6C7C7(&(Local_63.f_10[iVar6 /*7*/].f_2), false);
							Local_63.f_10[iVar6 /*7*/].f_1 = bLocal_286;
							Local_63.f_10[iVar6 /*7*/].f_4 = func_70(bLocal_286);
							func_68(iVar6);
							unk_0xB0550BC91B0159D6(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
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
		if (!bVar8 || unk_0x780A854E3A976A66(uLocal_293, Local_63.f_8) > 5000)
		{
			if (iVar7 >= func_489(bLocal_286))
			{
				unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_471[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_489(bLocal_286))
			{
				if (BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_247(&(Local_63.f_10[iVar6 /*7*/]));
					unk_0xB0550BC91B0159D6(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			unk_0xB0550BC91B0159D6(&(Local_63.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_247(var uParam0)
{
	var uVar0;
	
	if (unk_0x90F6E2F6488B98BA(*uParam0))
	{
		uVar0 = unk_0xF2D8DACFAEBD9629(*uParam0);
		unk_0xEC548B5E95E61DF6(&uVar0);
	}
}

int func_248(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == joaat("s_m_y_casino_01"))
	{
		return 0;
	}
	return 1;
}

int func_249()
{
	if (BitTest(Local_63.f_1, 6))
	{
		return 1;
	}
	else if (bLocal_286 == 0)
	{
		Local_63.f_49 = func_250(Local_63.f_36, 1);
		unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 6);
		return 1;
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 6);
		return 1;
	}
	return 0;
}

int func_250(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	if (func_251(Param0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_251(Param0, 1100f, -196f, 300f, 350f, 0) || func_251(Param0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_251(Param0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_251(Param0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_251(Param0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_251(Param0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_251(Param0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam3 == 1)
	{
		iVar0 = unk_0x5853B15F78E1A265(0, 100);
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
			iVar0 = unk_0x5853B15F78E1A265(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_251(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	return unk_0x987A5F1E1A67E3C0(Param0, Param3, iParam7) <= fParam6;
}

void func_252(int iParam0)
{
	if (unk_0xF68107C40359970C(iParam0))
	{
	}
	Local_63.f_36 = { unk_0x6B62510F212526DC(iParam0, 1) };
	if (func_253(iParam0, 0))
	{
		unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 17);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Local_63.f_1), 17);
	}
}

int func_253(int iParam0, int iParam1)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0) || iParam1)
		{
			if (unk_0xD8F9DF94CD871327(iParam0))
			{
				if (unk_0x1CC29FEB3B8D48E8(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_254()
{
	bool bVar0;
	
	if (unk_0x54E30A65F4FA4962())
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
								unk_0xB0550BC91B0159D6(&(Local_63.f_2), 11);
								unk_0xB0550BC91B0159D6(&iLocal_280, 8);
							}
						}
					}
					else
					{
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
							if (func_256())
							{
								func_64();
								unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_288, 1, 1))
					{
						bVar0 = true;
						if (func_255())
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
						if (unk_0x780A854E3A976A66(uLocal_293, Local_63.f_5) > 30000)
						{
							func_64();
							unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_255()
{
	int iVar0;
	
	iVar0 = unk_0x407E03586628E458(iLocal_288);
	if (((((unk_0xCE282187B0A6217E(iVar0) || unk_0xD8F9DF94CD871327(iVar0)) || func_29(iLocal_288, 1, 1)) || func_42(iLocal_288, 0)) || func_42(iLocal_288, 7)) || func_28(iLocal_288))
	{
		return 1;
	}
	if (func_118(iLocal_288, 1))
	{
		if (iLocal_288 > -1)
		{
			if (Global_1853348[iLocal_288 /*834*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_256()
{
	if (!BitTest(Local_63.f_1, 18))
	{
		if (unk_0x780A854E3A976A66(uLocal_293, Local_63.f_5) > 5000)
		{
			unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 18);
			return 1;
		}
	}
	else if (unk_0x780A854E3A976A66(uLocal_293, Local_63.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_257()
{
	int iVar0;
	
	iVar0 = unk_0x407E03586628E458(iLocal_288);
	if (((((((((unk_0x207D53F9E0190691(iVar0) > 10f || unk_0xCE282187B0A6217E(iVar0)) || unk_0xD8F9DF94CD871327(iVar0)) || func_29(iLocal_288, 1, 1)) || func_62(iLocal_288)) || func_42(iLocal_288, 0)) || func_42(iLocal_288, 7)) || func_28(iLocal_288)) || Global_2689235[iLocal_288 /*453*/].f_246) || func_61(unk_0x407E03586628E458(iLocal_288), joaat("titan")))
	{
		return 1;
	}
	if (func_118(iLocal_288, 1))
	{
		if (iLocal_288 > -1)
		{
			if (Global_1853348[iLocal_288 /*834*/] != 1)
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

void func_258()
{
	if (!BitTest(Local_63.f_1, 14))
	{
		Local_63.f_9 = uLocal_293;
		unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 14);
	}
}

void func_259()
{
	if (Local_63.f_44 != Local_119[iLocal_287 /*5*/].f_4)
	{
		Local_63.f_44 = Local_119[iLocal_287 /*5*/].f_4;
	}
}

void func_260()
{
	if (!BitTest(Local_63.f_1, 10))
	{
		Local_63.f_45 = func_489(bLocal_286);
		Local_63.f_46 = 0;
		Local_63.f_47 = 0;
		unk_0xCED9E32812D6C7C7(&(Local_63.f_1), 10);
	}
}

void func_261()
{
	func_262();
	if (!BitTest(Local_63.f_1, 8))
	{
		if (BitTest(Local_63.f_2, 7))
		{
			if (unk_0x780A854E3A976A66(uLocal_293, Local_63.f_7) > 300000)
			{
				unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 8);
			}
		}
	}
}

void func_262()
{
	if (!BitTest(Local_63.f_2, 7))
	{
		Local_63.f_7 = uLocal_293;
		unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 7);
	}
}

void func_263()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xCED9E32812D6C7C7(&iLocal_280, 7);
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
		if (unk_0x9E2D6C50374FCFA9() == iLocal_287)
		{
			unk_0xB0550BC91B0159D6(&iLocal_280, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				unk_0xCED9E32812D6C7C7(&iLocal_280, 7);
			}
			else if (func_383("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				unk_0xCED9E32812D6C7C7(&iLocal_280, 7);
			}
		}
	}
	if (BitTest(Local_63.f_3, 6))
	{
		if (unk_0x9E2D6C50374FCFA9() == iLocal_287)
		{
			unk_0xB0550BC91B0159D6(&iLocal_280, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				unk_0xCED9E32812D6C7C7(&iLocal_280, 7);
			}
			else if (func_383("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				unk_0xCED9E32812D6C7C7(&iLocal_280, 7);
			}
		}
	}
	if (BitTest(Local_63.f_3, 7))
	{
		if (unk_0x9E2D6C50374FCFA9() == iLocal_287)
		{
			unk_0xB0550BC91B0159D6(&iLocal_280, 7);
			if (func_343())
			{
				if (!Local_63.f_50)
				{
					if (Local_63.f_52)
					{
						iLocal_488 = func_342(Local_63.f_53);
					}
					else
					{
						iLocal_488 = func_338(12);
					}
					if (iLocal_488 > 0)
					{
						func_336(iLocal_488, 1, 0, 0f);
						func_321(iLocal_488, 4, 1, 1);
					}
					unk_0xCED9E32812D6C7C7(&iLocal_280, 7);
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&iLocal_280, 7);
				}
			}
		}
	}
	if (BitTest(Local_63.f_3, 0))
	{
		if (unk_0x9E2D6C50374FCFA9() == iLocal_287)
		{
			if (!BitTest(Local_63.f_2, 1))
			{
				unk_0xB0550BC91B0159D6(&iLocal_280, 7);
				if (func_383("MPCT_mugfail", "LAMAR", 19))
				{
					unk_0xCED9E32812D6C7C7(&iLocal_280, 7);
				}
			}
		}
		else if (unk_0x9E2D6C50374FCFA9() == iLocal_288)
		{
			if (BitTest(Local_63.f_2, 1))
			{
				if (BitTest(Local_63.f_2, 12))
				{
					iVar0 = unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_7101) * Global_262145.f_4303));
					func_279(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_265(47, 1);
				}
			}
		}
	}
	if (BitTest(Local_63.f_3, 8))
	{
		if (unk_0x9E2D6C50374FCFA9() == iLocal_287)
		{
			unk_0xB0550BC91B0159D6(&iLocal_280, 7);
			if (func_343())
			{
				if (bLocal_286 == 0)
				{
					iLocal_488 = (func_338(2) * func_489(bLocal_286));
					iVar1 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						iLocal_488 = func_342(Local_63.f_53);
					}
					else
					{
						iLocal_488 = func_338(12);
					}
					iVar1 = 4;
				}
				if (!Local_63.f_50)
				{
					if (iLocal_488 > 0)
					{
						func_336(iLocal_488, 1, 0, 0f);
						func_321(iLocal_488, iVar1, 1, 0);
					}
					unk_0xCED9E32812D6C7C7(&iLocal_280, 7);
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&iLocal_280, 7);
				}
			}
		}
	}
	if (BitTest(Local_63.f_3, 10))
	{
		if (unk_0x9E2D6C50374FCFA9() == iLocal_287)
		{
			unk_0xB0550BC91B0159D6(&iLocal_280, 7);
			if (func_343())
			{
				if (bLocal_286 == 0)
				{
					iLocal_488 = (func_338(2) * func_489(bLocal_286));
					iVar2 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						iLocal_488 = func_342(Local_63.f_53);
					}
					else
					{
						iLocal_488 = func_338(12);
					}
					iVar2 = 4;
				}
				if (!Local_63.f_50)
				{
					if (iLocal_488 > 0)
					{
						func_336(iLocal_488, 1, 0, 0f);
						func_321(iLocal_488, iVar2, 1, 0);
					}
					unk_0xCED9E32812D6C7C7(&iLocal_280, 7);
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&iLocal_280, 7);
				}
			}
		}
	}
	if (BitTest(iLocal_280, 7))
	{
		func_264();
	}
}

void func_264()
{
	unk_0xB0550BC91B0159D6(&(Global_1853348[unk_0xA52C4F51ECAB7E02() /*834*/].f_140), bLocal_286);
	Global_1853348[unk_0xA52C4F51ECAB7E02() /*834*/].f_141 = -1;
	if (bLocal_286 == 1)
	{
		if (unk_0x99B99DA99FB0D4EC(uLocal_470))
		{
			unk_0xA4D968C5E2A5D0A0(uLocal_470);
		}
	}
	func_517();
	func_549();
}

int func_265(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_266(iParam0, iParam1);
}

int func_266(int iParam0, int iParam1)
{
	if (func_278(14) && !func_277(iParam0))
	{
		return 0;
	}
	if (unk_0xDA4421F81DF4B90D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_276(&Global_4541529))
	{
		if (func_274(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_267(&Global_4541529, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB8D77780DF8E1242(iParam0))
		{
			return 0;
		}
		if (unk_0xDA4421F81DF4B90D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_267(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_278(14) && !func_277(iParam1))
	{
		return 0;
	}
	if (func_274(uParam0, iParam1))
	{
		return 0;
	}
	if (func_273(uParam0) < 0f)
	{
		func_272(uParam0, 0);
	}
	func_270(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_268(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_268(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_278(14) && !func_277(iParam1))
	{
		return 0;
	}
	if (func_274(uParam0, iParam1))
	{
		return 0;
	}
	if (func_273(uParam0) < 0f)
	{
		func_272(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_269(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_269(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_270(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_271(uParam0, iVar0);
		iVar0++;
	}
	func_272(uParam0, (Global_4541528 - 0.5f));
}

void func_271(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_272(var uParam0, float fParam1)
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

float func_273(var uParam0)
{
	return uParam0->f_80;
}

bool func_274(var uParam0, int iParam1)
{
	return func_275(uParam0, iParam1) != -1;
}

int func_275(var uParam0, int iParam1)
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

bool func_276(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_277(int iParam0)
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

bool func_278(int iParam0)
{
	return Global_43052 == iParam0;
}

var func_279(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_280(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_280(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_281(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_281(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_314();
	if (func_313(uParam2))
	{
	}
	if (func_312())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_310(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_309(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_307(0, &iVar1);
					break;
				
				case 3:
					func_307(1, &iVar1);
					break;
				
				case 1:
					func_305(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957716)
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
			func_302(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_291((func_301(unk_0x9E2D6C50374FCFA9()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5842EA5D6A4620E2(iVar1, iParam8, iParam9);
				if (Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_2 != -1)
				{
					func_302(1166, iVar1, -1);
				}
				func_286(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_282((func_284(unk_0x9E2D6C50374FCFA9()) + iVar1));
			}
			else
			{
				func_282((func_284(unk_0x9E2D6C50374FCFA9()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_282(int iParam0)
{
	if (func_312())
	{
		Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_5 = iParam0;
		func_283(joaat("mpply_globalxp"), iParam0);
	}
}

void func_283(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, 1);
	}
}

int func_284(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return func_285(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_5;
			}
		}
		else
		{
			return func_285(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_285(int iParam0)
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

void func_286(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_144(unk_0x9E2D6C50374FCFA9()) };
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(&Var0))
		{
			iVar13 = func_289(func_290(&Var0));
			if (iVar13 == 0)
			{
				func_288(&Global_1659614, iParam0);
				func_287(joaat("mpply_crew_local_xp_0"), Global_1659614);
			}
			else if (iVar13 == 1)
			{
				func_288(&Global_1659615, iParam0);
				func_287(joaat("mpply_crew_local_xp_1"), Global_1659615);
			}
			else if (iVar13 == 2)
			{
				func_288(&Global_1659616, iParam0);
				func_287(joaat("mpply_crew_local_xp_2"), Global_1659616);
			}
			else if (iVar13 == 3)
			{
				func_288(&Global_1659617, iParam0);
				func_287(joaat("mpply_crew_local_xp_3"), Global_1659617);
			}
			else if (iVar13 == 4)
			{
				func_288(&Global_1659618, iParam0);
				func_287(joaat("mpply_crew_local_xp_4"), Global_1659618);
			}
		}
	}
}

void func_287(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1659609 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1659611 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1659611 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1659612 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1659613 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1659614 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1659615 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1659616 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1659617 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1659618 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1659619 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1659620 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1659621 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1659622 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1659623 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1659624 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1659625 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_288(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_289(int iParam0)
{
	if (iParam0 == Global_1659609)
	{
		return 0;
	}
	else if (iParam0 == Global_1659610)
	{
		return 1;
	}
	else if (iParam0 == Global_1659611)
	{
		return 2;
	}
	else if (iParam0 == Global_1659612)
	{
		return 3;
	}
	else if (iParam0 == Global_1659613)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_290(var uParam0)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(uParam0))
		{
			return Global_2725345;
		}
	}
	return Global_2725345;
}

void func_291(int iParam0, int iParam1, int iParam2)
{
	if (func_312())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10069 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1659759[func_300(-1)])
				{
					unk_0x5842EA5D6A4620E2(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1659759[func_300(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5842EA5D6A4620E2(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5842EA5D6A4620E2(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_299(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_1 = iParam0;
			Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_6 = func_297(iParam0, 1);
		}
		func_296(640, iParam0, -1, 1);
		func_295(641, func_297(iParam0, 1), -1, 1, 0);
		Global_1659759[func_300(-1)] = iParam0;
		func_292(-1109644434, 7, 0);
	}
}

void func_292(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_294(iParam1, iParam2))
	{
		iVar0 = func_293();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_293()
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

int func_294(int iParam0, var uParam1)
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

void func_295(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_300(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

void func_296(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_300(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_300(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1659693[func_300(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1659699[func_300(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1659705[func_300(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1659711[func_300(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1659657[func_300(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1659663[func_300(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1659669[func_300(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1659675[func_300(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1659681[func_300(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1659627[func_300(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1659633[func_300(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1659639[func_300(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1659645[func_300(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1659651[func_300(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1659717[func_300(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1659723[func_300(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1659729[func_300(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1659735[func_300(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1659741[func_300(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1659747[func_300(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1659753[func_300(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1659759[func_300(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1659765[func_300(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 11391:
			Global_2869950[func_300(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1659771[func_300(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1659777[func_300(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1659783[func_300(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1659789[func_300(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1659795[func_300(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1659801[func_300(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2869985[func_300(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2869994[func_300(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2869988[func_300(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2869997[func_300(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2869991[func_300(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2870000[func_300(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2870003[func_300(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2870006[func_300(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2870009[func_300(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2870012[func_300(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2870015[func_300(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2870018[func_300(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2870021[func_300(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2870024[func_300(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2870027[func_300(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2870030[func_300(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2870033[func_300(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2870036[func_300(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2870039[func_300(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2870042[func_300(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2870045[func_300(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_300(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_297(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_298(iParam0, 0);
}

int func_298(int iParam0, int iParam1)
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

int func_299(int iParam0)
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

int func_300(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_203();
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

int func_301(int iParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return Global_1659759[func_300(-1)];
			}
			else if (func_299(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[func_300(-1)];
	}
	return 0;
}

void func_302(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_304(iParam0, func_300(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_303(iParam0))
	{
		func_295(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_296(iParam0, iVar0, iParam2, 1);
	}
}

int func_303(int iParam0)
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

int func_304(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2826809[iParam0 /*3*/][func_300(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_305(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		iVar4 = unk_0x54F800F95142C750(iVar0);
		if (unk_0x81F82FFBED0CACCA(iVar4))
		{
			iVar5 = unk_0x6B01934FA503547F(iVar4);
			if (unk_0x0E40F846A70BA3EC(iVar5) != -1)
			{
				if (unk_0x0E40F846A70BA3EC(iVar5) == iVar1 || func_146(unk_0x0E40F846A70BA3EC(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9E2D6C50374FCFA9())
					{
						if (func_145(unk_0x9E2D6C50374FCFA9(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_306(*iParam0, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_306(*iParam0, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_306(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_307(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x5D79167FED95F0B0())
		{
			iVar3 = iVar0;
			if (unk_0x81F82FFBED0CACCA(iVar3))
			{
				iVar4 = unk_0x6B01934FA503547F(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9E2D6C50374FCFA9())
					{
						iVar1++;
						if (func_145(unk_0x9E2D6C50374FCFA9(), iVar4))
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
				if (iVar4 != unk_0x9E2D6C50374FCFA9())
				{
					if (func_308(unk_0x9E2D6C50374FCFA9(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_145(unk_0x9E2D6C50374FCFA9(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_306(*iParam1, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_306(*iParam1, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_308(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_309(int iParam0)
{
	int iVar0;
	
	if (unk_0x6F8BA9EF200E4310() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_306(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_310(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x07141611FD632B59(iParam0) > func_301(unk_0x9E2D6C50374FCFA9()))
		{
			iParam0 = -func_301(unk_0x9E2D6C50374FCFA9());
		}
	}
	if (func_311(8000, 0, 0) > 0)
	{
		if (func_311(8000, 0, 0) < (iParam0 + func_301(unk_0x9E2D6C50374FCFA9())))
		{
			iParam0 = (func_311(8000, 0, 0) - func_301(unk_0x9E2D6C50374FCFA9()));
		}
	}
	return iParam0;
}

int func_311(int iParam0, bool bParam1, int iParam2)
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
	return Global_295824[iParam0];
}

int func_312()
{
	return 1;
}

int func_313(var uParam0)
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

int func_314()
{
	int iVar0;
	
	if (func_320(unk_0x9E2D6C50374FCFA9()) || func_319(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_262145.f_10101 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10101;
		}
	}
	else if (func_317() || func_315(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_262145.f_23310 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23310;
		}
	}
	else if (Global_262145.f_7094 > 20000)
	{
		iVar0 = 20000;
	}
	else
	{
		iVar0 = Global_262145.f_7094;
	}
	return iVar0;
}

int func_315(int iParam0)
{
	return func_316(func_39(iParam0));
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_317()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_178();
	}
	return func_318(Global_4718592.f_116524);
}

int func_318(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5041[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_319(int iParam0)
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

bool func_320(int iParam0)
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

void func_321(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var4;
	int iVar12;
	int iVar13;
	
	StringCopy(&Var0, func_335(iParam1), 16);
	StringCopy(&Var4, func_334(iParam2), 32);
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
		func_322(iVar12, iParam0, &iVar13, bParam3, bParam3, 0);
		Global_4534105[iVar13 /*85*/].f_14.f_40 = { Var0 };
		Global_4534105[iVar13 /*85*/].f_14.f_44 = { Var4 };
	}
	else
	{
		unk_0xE35A17754E4A9BBB(iParam0, &Var0, &Var4, bParam3);
	}
}

void func_322(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
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
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_323(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_323(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_323(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_323(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_323(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
		if (!unk_0xD487B8E9C523DEFD(func_203()) || unk_0xBA5B5030B7954DAA())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x651232F0FBBD6C7F(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE894C3F21E583743(iVar4))
		{
			*uParam0 = func_330(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_329(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_324(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_324(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xCED9E32812D6C7C7(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_325(iParam0);
	}
}

void func_325(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_328(iParam0))
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
		func_326(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_326(var uParam0)
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
	func_327(&(uParam0->f_14));
	func_327(&(uParam0->f_14.f_13));
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

void func_327(var uParam0)
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

int func_328(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_329(int iParam0, var uParam1)
{
	Global_2727893 = uParam1;
	Global_2727892 = iParam0;
}

int func_330(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_51())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = iParam0;
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
			if (iParam1 == -1135378931 && iParam10)
			{
				func_331(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_331(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_333(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_332();
		unk_0x2700C00F82C16BF0(1, &Var0, 36, iVar36);
	}
}

void func_332()
{
	unk_0xAF76A37C80EFD1D8("AM_ARENA_SHP");
}

var func_333(bool bParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_334(int iParam0)
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

char* func_335(int iParam0)
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

void func_336(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_4 = iVar1;
	Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_3 = (Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_337(iVar1, 0);
	}
}

void func_337(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_338(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_341(iParam0) >= 0)
	{
		iVar0 = func_341(iParam0);
	}
	else
	{
		iVar0 = func_339(iParam0);
	}
	return iVar0;
}

int func_339(int iParam0)
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
			if (func_340())
			{
				return 0;
			}
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 1)
			{
				return 200;
			}
			else if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 2)
			{
				return 400;
			}
			else if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 3)
			{
				return 600;
			}
			else if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 4)
			{
				return 800;
			}
			else if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 5)
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

bool func_340()
{
	return BitTest(func_304(6427, -1, 0), 19);
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_7104;
			break;
		
		case 10:
			return Global_262145.f_4127;
			break;
		
		case 11:
			return Global_262145.f_4128;
			break;
		
		case 8:
			return Global_262145.f_4125;
			break;
		
		case 0:
			return Global_262145.f_4111;
			break;
		
		case 9:
			return Global_262145.f_4126;
			break;
		
		case 13:
			return Global_262145.f_4130;
			break;
		
		case 12:
			return Global_262145.f_4129;
			break;
		
		case 2:
			return Global_262145.f_4121;
			break;
		
		case 14:
			return Global_262145.f_4131;
			break;
		
		case 20:
			if (func_340())
			{
				return 0;
			}
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 1)
			{
				return Global_262145.f_7111;
			}
			else if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 2)
			{
				return Global_262145.f_7112;
			}
			else if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 3)
			{
				return Global_262145.f_7113;
			}
			else if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 4)
			{
				return Global_262145.f_7114;
			}
			else if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 5)
			{
				return Global_262145.f_7115;
			}
			break;
		
		case 6:
			return Global_262145.f_4124;
			break;
		
		case 22:
			return Global_262145.f_4137;
			break;
		
		case 23:
			return Global_262145.f_4138;
			break;
		
		case 24:
			return Global_262145.f_4139;
			break;
		
		case 25:
			return Global_262145.f_4140;
			break;
		
		case 26:
			return Global_262145.f_4141;
			break;
		
		case 35:
			return Global_262145.f_7680;
			break;
		
		case 15:
			return Global_262145.f_7105;
			break;
		
		case 17:
			return Global_262145.f_7105;
			break;
		
		case 18:
			return Global_262145.f_7105;
			break;
		
		case 19:
			return Global_262145.f_7105;
			break;
		
		case 21:
			return Global_262145.f_7105;
			break;
		
		case 36:
			return Global_262145.f_8147;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_13356;
			break;
		
		case 41:
			return Global_262145.f_13357;
			break;
		
		case 42:
			return Global_262145.f_13358;
			break;
		
		case 43:
			return Global_262145.f_15943;
			break;
		
		case 44:
			return Global_262145.f_15945;
			break;
		
		case 57:
			return Global_262145.f_4139;
			break;
		
		case 58:
			return Global_262145.f_25776;
			break;
		
		case 62:
			return Global_262145.f_25777;
			break;
		
		case 63:
			return Global_262145.f_29247;
			break;
		
		case 64:
			return Global_262145.f_7105;
			break;
		
		case 71:
			return Global_262145.f_25777;
			break;
		
		case 72:
			return Global_262145.f_31762;
			break;
		
		case 73:
			return Global_262145.f_31764;
			break;
		
		case 74:
			return Global_262145.f_31766;
			break;
	}
	return 0;
}

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23992;
		
		case 2:
			return Global_262145.f_23993;
		
		case 3:
			return Global_262145.f_23994;
		
		default:
	}
	return 9999999;
}

int func_343()
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
				func_344("HS_UNABLE", iLocal_288, 0, 0, 0, 1, 0);
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
	if (func_383(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_344(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x0E40F846A70BA3EC(iParam1);
	if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x61042CA2A97BBB69(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x61042CA2A97BBB69(iParam1), 64);
		}
		if (unk_0xACC32B78196FBC2A(&Var2))
		{
		}
		unk_0x150D8F58B26E9F70(sParam0);
		if ((iVar1 != -1 && unk_0x44859561F653DD4E()) && iVar1 < 4)
		{
			if (Global_4718592.f_111249[iVar1] != -1)
			{
				unk_0x138506D6C7564EF1(func_381(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x138506D6C7564EF1(func_352(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x138506D6C7564EF1(func_352(iParam1, -2, 1, 0, 0));
		}
		unk_0x76DB21247AE4E4E2(func_350(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x187DF98ED95E5557(0, 1);
		}
		else
		{
			Global_2787505 = { func_144(iParam1) };
			if (unk_0x4FFBF2C0D8249E45(&Global_2787435, 35, &Global_2787505))
			{
				iVar18 = 0;
				if (unk_0x3C57C2F07FEE34D2(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2787435.f_21 > 0)
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
						Var2 = { func_349(&Var2) };
					}
					iVar0 = unk_0x2FE2977F89F2C159(iVar19, unk_0x780A8BCE22FA646B(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, iVar18, 0, Global_2787435, &Var2, Global_1576215, Global_1576216, Global_1576217);
				}
				else
				{
					iVar0 = unk_0xBC04C06C5EBC8BD5(iVar19, unk_0x780A8BCE22FA646B(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, iVar18, 0, Global_2787435, Global_1576215, Global_1576216, Global_1576217);
				}
			}
			else
			{
				iVar0 = unk_0x187DF98ED95E5557(0, 1);
			}
		}
		func_345(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_345(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_348() || !unk_0x44859561F653DD4E()) || !func_201(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return;
	}
	iVar0 = func_346(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1940311.f_5[iVar0 /*53*/] = iParam0;
		Global_1940311.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1940311.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1940311.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1940311.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1940311.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1940311.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_346(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1940311 - 1))
	{
		if (iParam0 > Global_1940311.f_5[iVar0 /*53*/].f_1)
		{
			func_347(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1940311++;
	if (Global_1940311 > 5)
	{
		Global_1940311 = 5;
		return Global_1940311;
	}
	return (Global_1940311 - 1);
}

void func_347(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1940311.f_5[iVar0 /*53*/] = { Global_1940311.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_348()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}

struct<16> func_349(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_350(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_351(&cVar0);
}

var func_351(char[4] cParam0)
{
	return cParam0;
}

int func_352(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_147(iParam0) && !bParam4)
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
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_147(unk_0x9E2D6C50374FCFA9()) || (func_380() && func_379())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		uVar1 = func_378();
		if (unk_0xE5965CDF24F93A9F(uVar1))
		{
			if (unk_0x65FAB09725E2FE75(iVar1))
			{
				if (unk_0xFF65CDB0EB7ACE71(iVar1) != -1)
				{
					if (func_6(unk_0xFF65CDB0EB7ACE71(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return func_381(iParam1, iParam0, 0);
							}
							else
							{
								return func_364(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_364(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return func_381(iParam1, iParam0, 0);
				}
				else
				{
					return func_353(0, -1, 0);
				}
			}
			else
			{
				return func_353(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return func_381(iParam1, iParam0, 0);
		}
		else
		{
			return func_364(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
		}
	}
	return func_364(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
}

int func_353(bool bParam0, int iParam1, bool bParam2)
{
	return func_354(unk_0x9E2D6C50374FCFA9(), bParam0, iParam1, bParam2);
}

int func_354(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x0D01086B38EC256F(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	if ((func_363() || (func_362() && func_360())) && Global_1659814.f_1)
	{
		if (bParam1)
		{
			return func_359(iParam2, iVar0);
		}
		else
		{
			return func_359(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_146(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_358(1);
				}
				else
				{
					return func_358(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_355(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_355(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_358(1);
	}
	return func_358(0);
}

int func_355(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_357(iParam0, iParam1, iParam3);
	if (func_356(Global_4718592.f_116524, 1))
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

int func_356(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_168757 == 65)
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
		if (iParam0 == Global_262145.f_9485[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_357(int iParam0, int iParam1, int iParam2)
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
			if (!func_146(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_358(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_359(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_357(iParam1, iParam0, 4);
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

int func_360()
{
	if (func_361())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_172946, 4);
}

bool func_361()
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_362()
{
	if (unk_0x44859561F653DD4E())
	{
		return BitTest(Global_4718592.f_172946, 0);
	}
	return ((BitTest(Global_4718592.f_172946, 0) || Global_1922895) && unk_0xB4C854DD86E40FDA(joaat("fm_deathmatch_creator")) > 0);
}

int func_363()
{
	if (func_361() && unk_0x44859561F653DD4E())
	{
		return 1;
	}
	return 0;
}

int func_364(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853348[iVar2 /*834*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_369())
			{
				iVar3 = func_368(iParam0);
				if (!iVar3 == -1)
				{
					return func_366(iVar3);
				}
			}
			if ((func_185(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_146(unk_0x0E40F846A70BA3EC(iParam1), unk_0x0E40F846A70BA3EC(iParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_358(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_365(1);
			}
			else
			{
				return func_354(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[iParam0 /*834*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return func_358(1);
			}
			else
			{
				return func_354(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_368(iParam0);
	if (!iVar4 == -1)
	{
		return func_366(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_365(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_366(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_367(iParam0);
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

var func_367(int iParam0)
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_368(int iParam0)
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

int func_369()
{
	if ((((((func_377() || func_376()) || func_178()) || func_375()) || func_374()) || func_372()) || func_370())
	{
		return 1;
	}
	if (unk_0x44859561F653DD4E() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_370()
{
	return func_371(Global_4718592.f_116524);
}

int func_371(int iParam0)
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

int func_372()
{
	return func_373(Global_4718592.f_116524);
}

int func_373(int iParam0)
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

var func_374()
{
	return Global_2714762.f_24;
}

var func_375()
{
	return Global_2714762.f_21;
}

var func_376()
{
	return Global_2714762.f_18;
}

var func_377()
{
	return Global_2714762.f_17;
}

var func_378()
{
	return Global_2621446.f_2;
}

var func_379()
{
	return BitTest(Global_2621446, 4);
}

var func_380()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 14);
}

int func_381(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058069.f_14[iParam0];
	if (func_369())
	{
		iVar2 = func_368(iParam1);
		if (!iVar2 == -1)
		{
			return func_366(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_7911[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_13())
	{
		if (Global_4718592.f_111249[iParam0] != -1 && Global_4718592.f_111249[iParam0] <= 4)
		{
			if (Global_4718592.f_111249[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_111249[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_111249[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_111249[iParam0] == 4)
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
				iVar0 = Global_4718592.f_111249[iParam0];
			}
		}
		else
		{
			iVar0 = func_354(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_382(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_146(iParam0, unk_0x0E40F846A70BA3EC(iParam1), 0))
		{
			iVar0 = func_365(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_382(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_168914;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_168915;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_168916;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_168917;
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

int func_383(char* sParam0, char* sParam1, int iParam2)
{
	if (!unk_0x3C57C2F07FEE34D2(sParam0, "NULL"))
	{
		if (!BitTest(iLocal_285, 0))
		{
			func_488(&uLocal_305, 3, 0, sParam1, 0, 1);
			if (func_385(&uLocal_305, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				unk_0xCED9E32812D6C7C7(&iLocal_285, false);
			}
		}
		else if (!BitTest(iLocal_285, 1))
		{
			if (func_384(0))
			{
				unk_0xCED9E32812D6C7C7(&iLocal_285, true);
			}
		}
		else if (!func_384(0))
		{
			iLocal_285 = 0;
			return 1;
		}
	}
	return 0;
}

int func_384(int iParam0)
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

int func_385(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_486())
	{
		return 0;
	}
	if (func_485())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_386(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_386(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xACC32B78196FBC2A(sParam2))
	{
		return 0;
	}
	if (unk_0x4B83FFC4B00987D9(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam3))
	{
		return 0;
	}
	if (unk_0x4B83FFC4B00987D9(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x2E87280918B16506(unk_0x05CBA41180F5D521());
	iVar1 = func_484(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xACC32B78196FBC2A(iParam7))
	{
		iVar2 = unk_0x2E87280918B16506(iParam7);
	}
	if (func_483(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_478(uParam6))
	{
		return 0;
	}
	if (func_475(iVar0, iVar1, iVar2))
	{
		if (func_474())
		{
			return 0;
		}
		func_473();
		return func_393(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_392(iParam4))
	{
		return 0;
	}
	func_387(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_387(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1641031.f_40.f_1 = iParam0;
	Global_1641031.f_40.f_2 = iParam1;
	Global_1641031.f_40.f_3 = iParam2;
	StringCopy(&(Global_1641031.f_40.f_4), sParam3, 16);
	Global_1641031.f_40.f_8 = iParam4;
	Global_1641031.f_40.f_9 = iParam5;
	Global_1641031.f_40.f_14 = uParam6;
	func_388(iParam4);
	func_473();
	Global_1641031.f_40.f_13 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), 7000);
}

void func_388(int iParam0)
{
	if (func_391(iParam0))
	{
		func_390();
		return;
	}
	func_389();
}

void func_389()
{
	Global_1641031.f_40.f_10 = 0;
}

void func_390()
{
	Global_1641031.f_40.f_10 = 1;
}

int func_391(int iParam0)
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

bool func_392(int iParam0)
{
	return iParam0 > Global_1641031.f_40.f_8;
}

int func_393(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_472();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_469(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_466(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_469(uParam0, sParam3, sParam4);
		}
		return func_448(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_447(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_435(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_434(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_394(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_394(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_433();
	bVar0 = true;
	if (func_396(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_395(120000);
		return 1;
	}
	return 0;
}

void func_395(int iParam0)
{
	Global_1641031.f_40.f_11 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), iParam0);
	Global_1641031.f_40.f_12 = 1;
}

int func_396(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0x61042CA2A97BBB69(iVar0);
		iVar1 = func_427(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Global_1641031.f_40.f_13))
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
	sVar4 = func_426(uParam5, bParam6, &iVar3);
	uVar5 = func_424(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		iVar6++;
		if (!unk_0xACC32B78196FBC2A(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3C57C2F07FEE34D2(sVar4, " "))
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
	if (!iVar3 == 0 || !unk_0xACC32B78196FBC2A(sVar2))
	{
		bVar12 = func_423(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_400(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_399();
	}
	func_433();
	func_398();
	func_397();
	return 1;
}

void func_397()
{
	Global_1641031.f_57 = 0;
	Global_1641031.f_57.f_1 = 0;
}

void func_398()
{
	Global_1641031.f_40 = 3;
}

void func_399()
{
	unk_0xCED9E32812D6C7C7(&Global_8136, 8);
}

int func_400(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_401(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			unk_0xCED9E32812D6C7C7(&Global_4541229, false);
		}
		return 1;
	}
	return 0;
}

int func_401(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3C57C2F07FEE34D2(sParam14, sParam15))
	{
	}
	func_416();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
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
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
			{
				return 0;
			}
		}
		if (Global_4541214 == 1)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_415() == 0)
	{
		func_413();
		return 0;
	}
	func_412(Global_4541213);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/]), sParam1, 64);
	Global_4539964[Global_4541213 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4539964[Global_4541213 /*104*/].f_24 = iParam2;
	}
	Global_4539964[Global_4541213 /*104*/].f_25 = iParam7;
	Global_4539964[Global_4541213 /*104*/].f_26 = uParam8;
	Global_4539964[Global_4541213 /*104*/].f_29 = uParam9;
	Global_4539964[Global_4541213 /*104*/].f_30 = uParam12;
	Global_4539964[Global_4541213 /*104*/].f_31 = uParam11;
	Global_4539964[Global_4541213 /*104*/].f_28 = 0;
	Global_4539964[Global_4541213 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_33), sParam4, 64);
	Global_4539964[Global_4541213 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_50), sParam5, 64);
	Global_4539964[Global_4541213 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_83), sParam15, 64);
	func_416();
	switch (iParam16)
	{
		case 3:
			Global_4539964[Global_4541213 /*104*/].f_99[Global_20266] = 1;
			break;
		
		case 0:
			Global_4539964[Global_4541213 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4539964[Global_4541213 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4539964[Global_4541213 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20266)
		{
			case 0:
				func_411(0);
				break;
			
			case 1:
				func_411(1);
				break;
			
			case 2:
				func_411(2);
				break;
			
			case 3:
				func_411(3);
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
				Global_4541214 = 1;
				break;
			
			case 0:
				Global_4541214 = 1;
				break;
			
			case 2:
				Global_4541214 = 1;
				break;
			
			case 1:
				Global_4541214 = 1;
				break;
			}
	}
	Global_22674[Global_4541213] = 0;
	if (bParam10)
	{
		func_416();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_410())
			{
				unk_0x91DFC8F68F6D9B05(-1, "Text_Arrive_Tone", &Global_20255, 1);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_409(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_406(1);
			func_409(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_402(iParam0, sParam1, bVar1, func_405(unk_0x9E2D6C50374FCFA9()));
	return 1;
}

void func_402(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_403())
	{
		return;
	}
	unk_0xD6CB1A1C9D35D3EF(iParam0, -1180597171, unk_0x2E87280918B16506(sParam1), 0, bParam2, uParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

int func_403()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_13())
	{
		return 0;
	}
	if (func_404(unk_0x9E2D6C50374FCFA9()))
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

bool func_404(int iParam0)
{
	return func_38(iParam0, 20);
}

var func_405(int iParam0)
{
	return Global_1853348[iParam0 /*834*/].f_205.f_6;
}

void func_406(int iParam0)
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
		if (func_278(14))
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
								func_408(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar2);
								unk_0x6F06CF0E9AB02847();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_408(&(Global_8143[iVar1 /*15*/]));
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
								func_408(&(Global_8143[iVar1 /*15*/]));
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
								func_408(&(Global_8143[iVar1 /*15*/]));
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
								func_408(&(Global_8143[iVar1 /*15*/]));
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
								func_408(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_407(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_408(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		func_408(sParam8);
	}
	if (!unk_0xACC32B78196FBC2A(sParam9))
	{
		func_408(sParam9);
	}
	if (!unk_0xACC32B78196FBC2A(sParam10))
	{
		func_408(sParam10);
	}
	if (!unk_0xACC32B78196FBC2A(sParam11))
	{
		func_408(sParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_408(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_409(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_410()
{
	return Global_1575058;
}

void func_411(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113386.f_14051[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_412(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xAA2844CAD88768B5();
	uVar1 = unk_0x80F97D7D29800A1A();
	uVar2 = unk_0x09FC827691DACE59();
	uVar3 = unk_0xD52BD97E61483713();
	uVar4 = unk_0x771485043FDC55DE() + 1;
	uVar5 = unk_0x1137FD08B8D3F874();
	Global_4539964[iParam0 /*104*/].f_18 = uVar0;
	Global_4539964[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4539964[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4539964[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4539964[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4539964[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_413()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_414(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
		{
			Global_4541213 = iVar2;
		}
		iVar2++;
	}
	Global_4539964[Global_4541213 /*104*/].f_24 = 1;
}

int func_414(struct<6> Param0, struct<6> Param6)
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

int func_415()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0)
		{
			Global_4541213 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0 || Global_4539964[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_414(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
			{
				Global_4541213 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4541213 == 11)
	{
		return 0;
	}
	Global_4539964[Global_4541213 /*104*/].f_99[0] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[1] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[2] = 0;
	return 1;
}

void func_416()
{
	if (func_278(14))
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
		Global_20266 = func_417();
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

var func_417()
{
	func_418();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_418()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_421(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_420(unk_0xE2D3D51028F0428A());
			if (func_419(iVar0) && (!func_278(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_419(Global_113386.f_2363.f_539.f_4321))
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

bool func_419(int iParam0)
{
	return iParam0 < 3;
}

int func_420(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_421(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_421(int iParam0)
{
	if (func_419(iParam0))
	{
		return func_422(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_422(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_423(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_401(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			unk_0xCED9E32812D6C7C7(&Global_4541229, false);
		}
		return 1;
	}
	return 0;
}

int func_424(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_425(2, iParam1);
	return iParam0;
}

void func_425(int iParam0, var uParam1)
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

var func_426(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xACC32B78196FBC2A(uParam0))
	{
		return sLocal_20;
	}
	if (unk_0x3C57C2F07FEE34D2(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_425(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xAEF70623D03F7B02(sParam0);
}

int func_427(int iParam0)
{
	int iVar0;
	
	iVar0 = func_430(iParam0);
	if (iVar0 == -1)
	{
		func_428(iParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_428(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_430(iParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (iParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (func_429(iParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = iParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_429(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660984)
	{
		if (Global_1660951[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_430(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1660944 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660944)
	{
		if (Global_1660783[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x87AF9112820EEC25(Global_1660783[iVar0 /*5*/].f_2) && unk_0x1B28B340344BA310(Global_1660783[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_431(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_431(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1660944)
	{
		return;
	}
	if (unk_0x87AF9112820EEC25(Global_1660783[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1660783[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xE1AFE5E1E834BBF0(Global_1660783[iParam0 /*5*/].f_2), 64);
			unk_0x8BC4D76163FA9E13(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x326ED9DD64134D76(Global_1660783[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1660944)
	{
		Global_1660783[iVar32 /*5*/] = { Global_1660783[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_432(&(Global_1660783[iVar32 /*5*/]));
	Global_1660944 = (Global_1660944 - 1);
}

void func_432(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x9315DBF7D972F07A())
	{
		uParam0->f_3 = unk_0x0A89FDFA763DCAED();
	}
}

void func_433()
{
	Global_1641031.f_40.f_9 = 4;
}

int func_434(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_433();
	bVar0 = false;
	return func_396(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_435(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_436(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_436(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0x61042CA2A97BBB69(iVar0);
		iVar1 = func_427(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22666 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_426(uParam5, bParam6, &iVar3);
	uVar5 = func_424(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		iVar6++;
		if (!unk_0xACC32B78196FBC2A(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3C57C2F07FEE34D2(sVar4, " "))
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
	if (!iVar3 == 0 || !unk_0xACC32B78196FBC2A(sVar2))
	{
		bVar12 = func_446(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_438(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_399();
	}
	func_437();
	func_398();
	func_397();
	return 1;
}

void func_437()
{
	Global_1641031.f_40.f_9 = 3;
}

int func_438(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xB0550BC91B0159D6(&Global_8136, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_440(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			Global_8746[3 /*6*/] = { func_439(iParam0) };
			Global_8823 = iParam0;
			unk_0xCED9E32812D6C7C7(&Global_8136, true);
			unk_0xCED9E32812D6C7C7(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_439(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_3;
}

int func_440(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3C57C2F07FEE34D2(sParam14, sParam15))
	{
	}
	func_416();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
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
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
			{
				return 0;
			}
		}
		if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_445() == 0)
	{
		func_443();
		return 0;
	}
	func_442(Global_22672);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/]), sParam1, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_24 = iParam2;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_25 = iParam7;
	Global_113386.f_14141[Global_22672 /*104*/].f_26 = uParam8;
	Global_113386.f_14141[Global_22672 /*104*/].f_29 = uParam9;
	Global_113386.f_14141[Global_22672 /*104*/].f_30 = uParam12;
	Global_113386.f_14141[Global_22672 /*104*/].f_31 = uParam11;
	Global_113386.f_14141[Global_22672 /*104*/].f_28 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_33), sParam4, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_50), sParam5, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8136, 10))
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
		Global_8842 = 4;
		func_411(0);
		func_411(2);
		func_411(1);
	}
	else
	{
		func_416();
		switch (iParam16)
		{
			case 3:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[Global_20266] = 1;
				break;
			
			case 0:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20266)
			{
				case 0:
					func_411(0);
					Global_8842 = 0;
					break;
				
				case 1:
					func_411(1);
					Global_8842 = 1;
					break;
				
				case 2:
					func_411(2);
					Global_8842 = 2;
					break;
				
				case 3:
					func_411(3);
					Global_8842 = 3;
					break;
				
				default:
					Global_8842 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8136, 10))
		{
			Global_113386.f_14051[0 /*20*/].f_17 = 1;
			Global_113386.f_14051[1 /*20*/].f_17 = 1;
			Global_113386.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113386.f_14051[Global_20266 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113386.f_14051[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113386.f_14051[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113386.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22674[Global_22672] = 0;
	if (bParam10)
	{
		func_416();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_410())
			{
				unk_0x91DFC8F68F6D9B05(-1, "Text_Arrive_Tone", &Global_20255, 1);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_409(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_406(1);
			func_409(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_441(iParam0, sParam1, bVar1, func_405(unk_0x9E2D6C50374FCFA9()));
	return 1;
}

void func_441(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_403())
	{
		return;
	}
	unk_0xD6CB1A1C9D35D3EF(iParam0, 1654525105, unk_0x2E87280918B16506(sParam1), 0, bParam2, uParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

void func_442(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xAA2844CAD88768B5();
	uVar1 = unk_0x80F97D7D29800A1A();
	uVar2 = unk_0x09FC827691DACE59();
	uVar3 = unk_0xD52BD97E61483713();
	uVar4 = unk_0x771485043FDC55DE() + 1;
	uVar5 = unk_0x1137FD08B8D3F874();
	Global_113386.f_14141[iParam0 /*104*/].f_18 = uVar0;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_443()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
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
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_444(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
		{
			Global_22672 = iVar2;
		}
		iVar2++;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_24 = 1;
}

int func_444(struct<6> Param0, struct<6> Param6)
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

int func_445()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
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
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22672 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0 || Global_113386.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_444(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
			{
				Global_22672 = iVar2;
			}
		}
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22672 == 34)
	{
		return 0;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 0;
	return 1;
}

int func_446(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0xB0550BC91B0159D6(&Global_8136, 10);
	iVar0 = 3;
	if (func_440(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			Global_8746[3 /*6*/] = { func_439(iParam0) };
			Global_8823 = iParam0;
			StringCopy(&Global_8824, sParam5, 64);
			unk_0xCED9E32812D6C7C7(&Global_8136, true);
			unk_0xCED9E32812D6C7C7(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

int func_447(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
	}
	if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	func_437();
	bVar0 = true;
	if (func_436(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_395(120000);
		return 1;
	}
	return 0;
}

int func_448(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
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
		bVar0 = func_465(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_454(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_453(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_452(1);
		}
		func_451();
		func_398();
		func_450();
		func_449();
		return 1;
	}
	return 0;
}

void func_449()
{
	Global_2824944 = 0;
}

void func_450()
{
	Global_1641031.f_57 = 1;
	Global_1641031.f_57.f_1 = 0;
}

void func_451()
{
	Global_1641031.f_40.f_9 = 1;
}

void func_452(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8138, false);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8138, false);
	}
}

void func_453(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 20);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 20);
	}
}

int func_454(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_464(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return func_455(sParam3, iParam4, bParam7);
}

int func_455(char* sParam0, int iParam1, bool bParam2)
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
					func_463();
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
		if (func_462(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_461();
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
				func_416();
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
				if (func_460())
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
			if (func_459())
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
			func_458();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_457();
		func_456();
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
		func_463();
	}
	return 0;
}

void func_456()
{
	if (!func_403())
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

void func_457()
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

void func_458()
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

int func_459()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_460()
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

void func_461()
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

bool func_462(int iParam0, int iParam1)
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

void func_463()
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

void func_464(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
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

int func_465(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_464(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 1;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return func_455(sParam3, iParam4, bParam7);
}

int func_466(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
	}
	if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	if (func_468(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_467();
		func_451();
		func_398();
		func_450();
		func_449();
		return 1;
	}
	return 0;
}

void func_467()
{
	Global_22623 = 0;
}

bool func_468(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_464(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 1;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 1;
	Global_21659 = 0;
	StringCopy(&Global_21753, sParam5, 24);
	Global_2883585 = 0;
	return func_455(sParam3, iParam4, bParam8);
}

int func_469(var uParam0, char* sParam1, char* sParam2)
{
	if (func_471(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_470();
		func_398();
		func_450();
		return 1;
	}
	return 0;
}

void func_470()
{
	Global_1641031.f_40.f_9 = 2;
}

bool func_471(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_464(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_455(sParam2, iParam3, 0);
}

void func_472()
{
	Global_1641031.f_55 = Global_1641031.f_40.f_1;
	Global_1641031.f_55.f_1 = Global_1641031.f_40.f_10;
}

void func_473()
{
	Global_1641031.f_40 = 1;
}

bool func_474()
{
	return Global_1641031.f_40 == 1;
}

int func_475(int iParam0, int iParam1, int iParam2)
{
	if (!func_476(iParam0))
	{
		return 0;
	}
	if (Global_1641031.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1641031.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_476(int iParam0)
{
	if (!func_477())
	{
		return 0;
	}
	if (!Global_1641031.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_477()
{
	if (Global_1641031.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_478(var uParam0)
{
	if (func_482())
	{
		return 0;
	}
	if (func_481())
	{
		return 0;
	}
	if (func_384(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1931426 || func_480())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_479())
		{
			return 0;
		}
	}
	return 1;
}

bool func_479()
{
	return unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Global_1659413);
}

int func_480()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_481()
{
	return Global_1641031.f_40 == 3;
}

bool func_482()
{
	return func_459();
}

int func_483(int iParam0, int iParam1, int iParam2)
{
	if (!func_481())
	{
		return 0;
	}
	return func_475(iParam0, iParam1, iParam2);
}

int func_484(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x2E87280918B16506(&cVar0);
}

bool func_485()
{
	return Global_2821909.f_1;
}

int func_486()
{
	if (Global_1641219.f_2)
	{
		return 1;
	}
	return func_487();
}

bool func_487()
{
	return func_482();
}

void func_488(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0xF68107C40359970C(iParam2))
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

int func_489(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_490(var uParam0)
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

void func_491(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x54E30A65F4FA4962())
		{
			func_492(uParam0, 0, 0);
		}
	}
}

void func_492(var uParam0, bool bParam1, bool bParam2)
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

void func_493()
{
	if (unk_0x90F6E2F6488B98BA(Local_63.f_10[iLocal_296 /*7*/]) && !unk_0x55B23FE400FCEA6B(unk_0x8AF984152F749D80(Local_63.f_10[iLocal_296 /*7*/]), 0))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (func_5(unk_0x6B62510F212526DC(unk_0x8AF984152F749D80(Local_63.f_10[iLocal_296 /*7*/]), 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 50625f))
			{
				if (!BitTest(iLocal_280, 4))
				{
					unk_0xCED9E32812D6C7C7(&iLocal_280, 4);
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
							unk_0xCED9E32812D6C7C7(&iLocal_280, 5);
						}
					}
				}
			}
		}
	}
	func_494(iLocal_296);
	iLocal_296++;
	if (iLocal_296 >= func_489(bLocal_286))
	{
		if ((!BitTest(iLocal_280, 4) && BitTest(Local_63.f_1, 8)) || BitTest(iLocal_280, 5))
		{
			if (!BitTest(Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_1, 1))
			{
				unk_0xCED9E32812D6C7C7(&(Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_1), true);
			}
		}
		else if (BitTest(Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_1, 1))
		{
			unk_0xB0550BC91B0159D6(&(Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_1), true);
		}
		unk_0xB0550BC91B0159D6(&iLocal_280, 4);
		unk_0xB0550BC91B0159D6(&iLocal_280, 5);
		iLocal_296 = 0;
	}
}

void func_494(int iParam0)
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
	if (unk_0xCCDCD6672DAE6835(Local_63.f_10[iParam0 /*7*/]))
	{
		iVar0 = unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]);
		if (bLocal_286 == 0)
		{
			if (unk_0x9E2D6C50374FCFA9() == iLocal_288)
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
		if (unk_0x9E2D6C50374FCFA9() == iLocal_287)
		{
			if (BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!BitTest(iLocal_281[iParam0], 0))
				{
					unk_0xCED9E32812D6C7C7(&Global_1835488, false);
					unk_0xCED9E32812D6C7C7(&(iLocal_281[iParam0]), false);
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
					unk_0xB0550BC91B0159D6(&(iLocal_281[iParam0]), true);
				}
			}
		}
		if (bVar6)
		{
			if (unk_0xCCDCD6672DAE6835(Local_63.f_10[iParam0 /*7*/]))
			{
				if (!unk_0x07B2F8356DC13CF4(Local_63.f_10[iParam0 /*7*/]))
				{
					unk_0xC31EECA11005273C(Local_63.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (unk_0x07B2F8356DC13CF4(Local_63.f_10[iParam0 /*7*/]))
		{
			if (unk_0x9E2D6C50374FCFA9() == iLocal_287)
			{
				if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 9) && !BitTest(iLocal_281[iParam0], 1))
				{
					if (unk_0x0F1F0C82FA94500F(iVar0, unk_0x9E2D6C50374FCFA9()))
					{
						switch (Local_63.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_516(iVar0, 3);
								break;
						}
						unk_0xCED9E32812D6C7C7(&(iLocal_281[iParam0]), true);
					}
				}
			}
			if (!unk_0x55B23FE400FCEA6B(iVar0, 0) && !unk_0xF68107C40359970C(iVar0))
			{
				switch (Local_63.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						unk_0x3E3D339BAD67F6F2(iVar0, 187, 1);
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 3))
								{
									unk_0x98F7E0916B6B5A0B(iVar0, 3f);
									unk_0x50274A7EACA3133A(iVar0, 1);
									unk_0xD6A76BAB45A4B460(iVar0, 118, 0);
								}
							}
						}
						if (unk_0x9E2D6C50374FCFA9() == iLocal_288 && func_5(unk_0x6B62510F212526DC(iVar0, 1), unk_0x6B62510F212526DC(unk_0x407E03586628E458(iLocal_288), 1), 25f))
						{
							unk_0xCED9E32812D6C7C7(&(Global_2815059.f_4658), false);
						}
						else
						{
							unk_0xB0550BC91B0159D6(&(Global_2815059.f_4658), false);
						}
						if (!unk_0x51B334B227EC8042(iVar0))
						{
							if (!unk_0x1A3B69366FD32D14(iVar0, 29))
							{
								if (func_6(iLocal_288, 1, 1))
								{
									if (!BitTest(Local_63.f_2, 13))
									{
										if (func_515(iLocal_288) && !unk_0xED99779C40AEE6C4(unk_0x407E03586628E458(iLocal_288)))
										{
											if (!func_514(iVar0, joaat("script_task_enter_vehicle")))
											{
												if (func_513(iVar0))
												{
													uVar1 = unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iLocal_288), 0);
													if (unk_0xE5965CDF24F93A9F(uVar1))
													{
														if (unk_0x55A0C756C4A8220C(iVar1, 0))
														{
														}
														if (!unk_0xE632C45F7E4013B9(iVar1, func_512(unk_0x407E03586628E458(iLocal_288), 0)))
														{
															unk_0xB486640392EC50BB(iVar0, iVar1, -1, func_511(unk_0x407E03586628E458(iLocal_288), iVar1), func_510(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(unk_0x706E4529F37489DB(iVar0) && unk_0xC5DF16431698B381(iVar0) == unk_0x407E03586628E458(iLocal_288)) && !unk_0xD5C6B5E3B93A5EDC(iVar0, 1))
										{
											if (func_514(iVar0, joaat("script_task_enter_vehicle")))
											{
												unk_0x03A927199A2DFE46(iVar0);
											}
											if (!func_514(iVar0, joaat("script_task_go_to_entity")))
											{
												if (func_513(iVar0))
												{
													unk_0xC149E50FBB27DD70(iVar0, unk_0x407E03586628E458(iLocal_288), -1, 0f, func_510(iParam0), 1073741824, 0);
												}
											}
											else
											{
												unk_0x3E3D339BAD67F6F2(iVar0, 151, 1);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x9E2D6C50374FCFA9() == iLocal_288 && func_5(unk_0x6B62510F212526DC(iVar0, 1), unk_0x6B62510F212526DC(unk_0x407E03586628E458(iLocal_288), 1), 25f))
						{
							unk_0xCED9E32812D6C7C7(&(Global_2815059.f_4658), false);
						}
						else
						{
							unk_0xB0550BC91B0159D6(&(Global_2815059.f_4658), false);
						}
						if (unk_0x9E2D6C50374FCFA9() == iLocal_288)
						{
							if (!BitTest(Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_1, 0))
							{
								if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
								{
									if ((func_4(unk_0x6B62510F212526DC(iVar0, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) && (unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()) || unk_0xED99779C40AEE6C4(unk_0xE2D3D51028F0428A()))) || (unk_0x706E4529F37489DB(iVar0) && unk_0xC5DF16431698B381(iVar0) == unk_0xE2D3D51028F0428A()))
									{
										iVar2 = func_508(unk_0x9E2D6C50374FCFA9());
										fVar7 = (unk_0xBBDA792448DB5A89(Global_262145.f_7109) / 100f);
										iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) * fVar7));
										iVar8 = func_405(unk_0x9E2D6C50374FCFA9());
										if (iVar8 > 100)
										{
											iVar8 = 100;
										}
										if (iVar2 > (iVar8 * Global_262145.f_7110))
										{
											iVar2 = (iVar8 * Global_262145.f_7110);
										}
										if (iVar2 > 0)
										{
											unk_0xCED9E32812D6C7C7(&iLocal_280, 16);
										}
										unk_0xDB1174C6546AFC65(unk_0xE2D3D51028F0428A(), 5000, 10000, 4);
										if (!(unk_0x706E4529F37489DB(iVar0) && unk_0xC5DF16431698B381(iVar0) == unk_0x407E03586628E458(iLocal_288)))
										{
											Var3 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) - unk_0x6B62510F212526DC(iVar0, 1) };
											Var3 = { func_507(Var3) };
											Var3.f_0 = (Var3.f_0 * 3f);
											Var3.f_1 = (Var3.f_1 * 3f);
											Var3.f_2 = (Var3.f_2 * 3f);
											unk_0x3F6DE6DBA9A99FEA(unk_0xE2D3D51028F0428A(), 1, Var3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										unk_0xDC6110E0F8FF9DA0(iVar0, 512, 0);
										unk_0xBC12D08EE7559CCD(iVar0, 17, 1);
										if (((unk_0xD5C6B5E3B93A5EDC(iVar0, 1) || unk_0x706E4529F37489DB(iVar0)) && func_505(iVar0)) && func_512(iVar0, 0) == -1)
										{
											unk_0xDC6110E0F8FF9DA0(iVar0, 2, 1);
											unk_0xBC12D08EE7559CCD(iVar0, 3, 0);
											unk_0xBC12D08EE7559CCD(iVar0, 6, 1);
										}
										else
										{
											unk_0x03A927199A2DFE46(iVar0);
											unk_0x7734082B0EDB0BE0(iVar0, unk_0xE2D3D51028F0428A(), 10000f, -1, 1, 0);
										}
										Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_2 = -1;
										}
										unk_0xFF4BEB6CFF55A013(iVar0, Global_1837201);
										unk_0xCED9E32812D6C7C7(&(Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_1), false);
										unk_0xCED9E32812D6C7C7(&(Global_2815059.f_4658), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x77850B1D48AE14AD(iVar0, 187))
						{
							unk_0x3E3D339BAD67F6F2(iVar0, 187, 0);
						}
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 4))
							{
								unk_0x50274A7EACA3133A(iVar0, 0);
								unk_0xD6A76BAB45A4B460(iVar0, 118, 1);
							}
						}
						if (!(unk_0x706E4529F37489DB(iVar0) && unk_0xC5DF16431698B381(iVar0) == unk_0x407E03586628E458(iLocal_288)))
						{
							if (!unk_0x51B334B227EC8042(iVar0))
							{
								if (func_513(iVar0))
								{
									if ((unk_0xD5C6B5E3B93A5EDC(iVar0, 1) || unk_0x706E4529F37489DB(iVar0)) && !BitTest(Local_63.f_2, 10))
									{
										if (!func_514(iVar0, joaat("script_task_vehicle_drive_wander")) && !func_514(iVar0, joaat("script_task_vehicle_mission")))
										{
											if (unk_0x174B84F6B78D6CA7(iVar0))
											{
												uVar9 = unk_0xB3FF0049C1FD38EC(iVar0, 1);
												iVar10 = unk_0x15CAA6D7B11F1A7C(uVar9);
												if (BitTest(Local_63.f_2, 13))
												{
													unk_0xBC12D08EE7559CCD(iVar0, 17, 1);
													unk_0xBC12D08EE7559CCD(iVar0, 6, 0);
													unk_0xBC12D08EE7559CCD(iVar0, 1, 0);
												}
												else if (unk_0x4262B4DCEADC2695(iVar10))
												{
													unk_0x545C59578966D5B8(iVar0, iVar9, 0, unk_0xE2D3D51028F0428A(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1082130432, 0);
												}
												else if (unk_0xD6F7D32A98E07F93(iVar10))
												{
													unk_0xCDAACB23D43F080D(iVar0, iVar9, 0, unk_0xE2D3D51028F0428A(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80, 1);
												}
												else if (unk_0x15CAA6D7B11F1A7C(iVar9) == joaat("taxi"))
												{
													unk_0xDC6110E0F8FF9DA0(iVar0, 2, 0);
													unk_0xBC12D08EE7559CCD(iVar0, 3, 1);
													unk_0xBC12D08EE7559CCD(iVar0, 6, 0);
													unk_0x7734082B0EDB0BE0(iVar0, unk_0x407E03586628E458(iLocal_288), 10000f, -1, 1, 0);
												}
												else
												{
													unk_0xAD6CDBCDA713560A(iVar0, unk_0xB3FF0049C1FD38EC(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_514(iVar0, joaat("script_task_smart_flee_ped")))
									{
										if (func_6(iLocal_288, 1, 1))
										{
											unk_0x7734082B0EDB0BE0(iVar0, unk_0x407E03586628E458(iLocal_288), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_503(Local_63.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (BitTest(Local_63.f_2, 13))
				{
					unk_0x03A927199A2DFE46(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]));
					unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 17, 1);
					unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 6, 0);
					unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_63.f_10[iParam0 /*7*/]), 1, 0);
				}
				func_495(iVar0);
			}
		}
	}
}

void func_495(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (BitTest(iLocal_280, 16))
	{
		iVar0 = Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_3;
		iVar1 = func_496(iVar0);
		if (iVar1 == 1)
		{
			unk_0xB0550BC91B0159D6(&iLocal_280, 15);
			unk_0xB0550BC91B0159D6(&iLocal_280, 16);
			if (!func_51())
			{
				unk_0xFD06E55DAF765B32(iVar0, 0, 0, 0);
			}
			if (iVar0 > Global_262145.f_8528)
			{
				iVar0 = Global_262145.f_8528;
			}
			unk_0x62BDDA84CCCF90A9(iParam0, iVar0);
			unk_0xCED9E32812D6C7C7(&(Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			unk_0xB0550BC91B0159D6(&iLocal_280, 15);
			unk_0xB0550BC91B0159D6(&iLocal_280, 16);
			unk_0xCED9E32812D6C7C7(&(Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_496(int iParam0)
{
	if (func_51())
	{
		if (func_499(uParam0))
		{
			if (func_498(iLocal_489) == 2)
			{
				unk_0xCDE1C8CEF9603C08(func_497(iLocal_489));
				unk_0xFD06E55DAF765B32(uParam0, 0, 0, 0);
				func_325(iLocal_489);
				return 1;
			}
			else
			{
				func_325(iLocal_489);
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

int func_497(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_498(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_499(var uParam0)
{
	if (!BitTest(iLocal_280, 15))
	{
		func_323(&iLocal_489, -1135378931, 537254313, 1474183246, 1839532116, uParam0, 4, 3);
		func_502(&uLocal_490, 0, 0);
		unk_0xCED9E32812D6C7C7(&iLocal_280, 15);
	}
	else if (func_501(iLocal_489) || func_500(&uLocal_490, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_500(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_492(uParam0, bParam2, 0);
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

int func_501(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_502(var uParam0, bool bParam1, bool bParam2)
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

void func_503(var uParam0, bool bParam1)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		if (unk_0x07B2F8356DC13CF4(uParam0))
		{
			if (!func_504(uParam0))
			{
				if (BitTest(Local_63.f_2, 13))
				{
					unk_0x03A927199A2DFE46(unk_0x8AF984152F749D80(uParam0));
					unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(uParam0), 17, 1);
					unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(uParam0), 6, 0);
					unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(uParam0), 1, 0);
				}
				else
				{
					if (bParam1)
					{
						unk_0x03A927199A2DFE46(unk_0x8AF984152F749D80(uParam0));
					}
					unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(uParam0), 6, 1);
					unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(uParam0), 1, 1);
				}
			}
		}
		func_247(&uParam0);
	}
}

int func_504(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return unk_0xF68107C40359970C(unk_0x8AF984152F749D80(uParam0));
	}
	return 1;
}

int func_505(int iParam0)
{
	var uVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(iParam0, 1))
	{
		uVar0 = unk_0xB3FF0049C1FD38EC(iParam0, 1);
	}
	if (unk_0x706E4529F37489DB(iParam0))
	{
		uVar0 = unk_0x8DB5C2D06228DF32(iParam0);
	}
	if (!unk_0xE5965CDF24F93A9F(uVar0))
	{
		if (func_515(iLocal_288))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iLocal_288), 1);
		}
	}
	if (unk_0xE5965CDF24F93A9F(iVar0))
	{
		if (func_506(iVar0))
		{
			return 0;
		}
		if (unk_0xEC6430115D7DD916(iParam0) || unk_0xD2B5B1C8FC84FE0F(unk_0x15CAA6D7B11F1A7C(iVar0)))
		{
			if (!unk_0xD8F9DF94CD871327(iVar0))
			{
				return 0;
			}
		}
		if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("trailersmall2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_506(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (!unk_0xEF9410C312F2B117(iParam0))
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

Vector3 func_507(struct<3> Param0)
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

int func_508(int iParam0)
{
	var uVar0;
	
	uVar0 = func_509(iParam0);
	return uVar0;
}

int func_509(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return unk_0xEEE6DAFBF451B942(-1);
		}
		else if (func_299(iParam0))
		{
			return Global_1853348[iParam0 /*834*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_510(int iParam0)
{
	if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_511(int iParam0, int iParam1)
{
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0) && !unk_0x55B23FE400FCEA6B(uParam1, 0))
	{
		if (unk_0x87B449F4C26E764A(iParam0, iParam1))
		{
			if (unk_0xAB793EA186AB8DAA(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0xAB793EA186AB8DAA(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xAB793EA186AB8DAA(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0xAB793EA186AB8DAA(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_512(int iParam0, int iParam1)
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

int func_513(int iParam0)
{
	if ((!unk_0xF68107C40359970C(iParam0) && !unk_0x7114C4D8AC9360FE(iParam0, 0)) && !unk_0x32DCDA1B2F8A0694(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_514(int iParam0, int iParam1)
{
	if (unk_0x174CED88B97C78D9(iParam0, iParam1) == 1 || unk_0x174CED88B97C78D9(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_515(int iParam0)
{
	if (unk_0xE1E3700D85B26C1B(iParam0))
	{
		return 0;
	}
	if (unk_0x174B84F6B78D6CA7(unk_0x407E03586628E458(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_516(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF2549FF74D64B720(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "AttributeDamage");
	}
	unk_0xCED9E32812D6C7C7(&iVar0, iParam1);
	unk_0x05B874E9ABFF72B4(iParam0, "AttributeDamage", iVar0);
}

void func_517()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = BitTest(Local_63.f_2, 6);
	bVar1 = BitTest(Local_63.f_2, 10);
	func_522();
	if (bLocal_286 != 1)
	{
		if (BitTest(Local_63.f_3, 12))
		{
			func_519();
		}
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_297))
	{
		func_518(&uLocal_297);
	}
	iVar3 = 0;
	while (iVar3 < func_489(bLocal_286))
	{
		iLocal_281[iVar3] = 0;
		iVar3++;
	}
	if (unk_0x54E30A65F4FA4962())
	{
		Local_63.f_42 = -1;
		Local_63.f_5 = uLocal_293;
		Local_63.f_6 = uLocal_293;
		Local_63.f_7 = uLocal_293;
		Local_63.f_1 = 0;
		Local_63.f_4 = 0;
		Local_63.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_489(bLocal_286))
		{
			bVar2 = BitTest(Local_63.f_10[iVar3 /*7*/].f_2, 6);
			Local_63.f_10[iVar3 /*7*/].f_2 = 0;
			Local_63.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				unk_0xCED9E32812D6C7C7(&(Local_63.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_1 = 0;
	Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_2 = -1;
	iLocal_280 = 0;
	if (bVar0)
	{
		unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 6);
	}
	if (bVar1)
	{
		unk_0xCED9E32812D6C7C7(&(Local_63.f_2), 11);
		unk_0xCED9E32812D6C7C7(&iLocal_280, 8);
	}
	unk_0xCED9E32812D6C7C7(&iLocal_280, 4);
	unk_0xCED9E32812D6C7C7(&iLocal_280, 11);
}

void func_518(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		unk_0xFFD8EB5462B07B59(uParam0);
		bVar0 = true;
	}
	if (unk_0x12DD4A0B247D9B4D(uParam0->f_1))
	{
		unk_0xFFD8EB5462B07B59(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xE5965CDF24F93A9F(uParam0->f_7))
	{
		if (!unk_0x55B23FE400FCEA6B(uParam0->f_7, 0))
		{
			if (unk_0x227D9DCE160DDA9D(uParam0->f_7))
			{
				unk_0x0B69DCF6FE80E8EB(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_519()
{
	switch (bLocal_286)
	{
		case 0:
			func_521(&(Global_1837209[3]));
			break;
		
		case 1:
			func_520();
			break;
	}
}

void func_520()
{
	int iVar0;
	
	if (unk_0x9315DBF7D972F07A())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0x9972EFADA7A2A47D(3, Global_1837161[iVar0], -1467815081);
			unk_0x9972EFADA7A2A47D(3, -1467815081, Global_1837161[iVar0]);
			iVar0++;
		}
	}
}

void func_521(var uParam0)
{
	int iVar0;
	
	if (unk_0x9315DBF7D972F07A())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0x9972EFADA7A2A47D(3, Global_1837161[iVar0], *uParam0);
			unk_0x9972EFADA7A2A47D(3, *uParam0, Global_1837161[iVar0]);
			iVar0++;
		}
	}
}

void func_522()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_489(bLocal_286))
	{
		bVar1 = false;
		if (bLocal_286 == 0)
		{
			if (!BitTest(Local_63.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_503(Local_63.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_523()
{
	func_524();
	if (bLocal_286 != 1)
	{
		func_493();
	}
}

void func_524()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < func_489(bLocal_286))
	{
		if (unk_0xCCDCD6672DAE6835(Local_63.f_10[iVar0 /*7*/]))
		{
			if (unk_0x07B2F8356DC13CF4(Local_63.f_10[iVar0 /*7*/]))
			{
				uVar1 = unk_0x8AF984152F749D80(Local_63.f_10[iVar0 /*7*/]);
				if (!unk_0x55B23FE400FCEA6B(uVar1, 0))
				{
					unk_0x3E3D339BAD67F6F2(iVar1, 151, 1);
				}
			}
		}
		iVar0++;
	}
	if (Global_2815059.f_1766)
	{
	}
	if (bLocal_286 == 1)
	{
		if (unk_0x9E2D6C50374FCFA9() == iLocal_288)
		{
			if (BitTest(Local_63.f_1, 0))
			{
				if (!unk_0x99B99DA99FB0D4EC(uLocal_470))
				{
					if (func_6(iLocal_288, 1, 1))
					{
						if (Local_63.f_50)
						{
							unk_0x5D5732191056751C(15, unk_0x407E03586628E458(iLocal_288), 4, 0f, &uLocal_470, -1467815081, 0);
						}
						else if (Local_63.f_52)
						{
							unk_0x5D5732191056751C(16, unk_0x407E03586628E458(iLocal_288), 4, 0f, &uLocal_470, -1467815081, Local_63.f_53);
						}
						else
						{
							unk_0x5D5732191056751C(14, unk_0x407E03586628E458(iLocal_288), 4, 0f, &uLocal_470, 0, 0);
						}
					}
				}
				if (Global_2815059.f_1766)
				{
					if (!BitTest(Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_1, 3))
					{
						unk_0xCED9E32812D6C7C7(&(Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (bLocal_286 == 0)
	{
		if (Local_63.f_42 != -1)
		{
			if (unk_0x90F6E2F6488B98BA(Local_63.f_10[Local_63.f_42 /*7*/]))
			{
				if (!unk_0x55B23FE400FCEA6B(unk_0x8AF984152F749D80(Local_63.f_10[Local_63.f_42 /*7*/]), 0) && !func_528(unk_0x8AF984152F749D80(Local_63.f_10[Local_63.f_42 /*7*/])))
				{
					if (Local_63.f_10[Local_63.f_42 /*7*/].f_5 == 3)
					{
						func_525(Local_63.f_10[Local_63.f_42 /*7*/], &uLocal_297, -1082130432, 0, 1, 0, 0, -1, -1, 1, 0);
						if (unk_0x12DD4A0B247D9B4D(uLocal_297))
						{
							if (!BitTest(iLocal_280, 6))
							{
								unk_0xAF62582F3EA39095(uLocal_297, "FM_MGR_BLP");
								unk_0xCED9E32812D6C7C7(&iLocal_280, 6);
							}
						}
					}
				}
				else if (unk_0x12DD4A0B247D9B4D(uLocal_297))
				{
					func_518(&uLocal_297);
				}
			}
			if (unk_0x9E2D6C50374FCFA9() == iLocal_287)
			{
				if (!BitTest(iLocal_280, 14))
				{
					if (func_383("MPCT_mugsuc", "LAMAR", 19))
					{
						unk_0xCED9E32812D6C7C7(&iLocal_280, 14);
					}
				}
			}
		}
	}
}

void func_525(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		if (func_527(0))
		{
			Global_2703735 = unk_0x9E2D6C50374FCFA9();
		}
		if (bParam3)
		{
			func_526(unk_0x8AF984152F749D80(uParam0), uParam1, 1, Global_2703735, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10);
		}
		else
		{
			func_526(unk_0x8AF984152F749D80(uParam0), uParam1, -1, Global_2703735, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10);
		}
	}
	else if (unk_0x12DD4A0B247D9B4D(*uParam1))
	{
		func_518(uParam1);
	}
}

int func_526(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0xB6BA8B8E3D0B41C6();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xF68107C40359970C(uParam0))
	{
		if (!unk_0x227D9DCE160DDA9D(iParam0))
		{
			bVar0 = true;
			if (unk_0x17FE501894ED2713(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0x0B69DCF6FE80E8EB(iParam0, 1);
				}
				else
				{
					unk_0xBFD785B1D608BC11(iParam0, 1, iParam8);
				}
				uParam1->f_7 = iParam0;
				unk_0xEEC8A34FF9213FE4(iParam0, iParam2);
				unk_0x7C87F71C68A9AF0B(iParam0, fParam6);
				if (unk_0x12DD4A0B247D9B4D(*uParam1))
				{
					unk_0x7A610B2EC5DA34E7(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x21D1ACE7CE56627C(iParam0, iParam9);
		}
		unk_0x0FB9B56364B11BC9(iParam0, uParam4);
		unk_0x922263C0FEA956C8(iParam0, uParam5);
		*uParam1 = unk_0xC6CEFB49E88BDD9B(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xA582EE8380437B1B(*uParam1, iParam8);
				}
				if (!unk_0xACC32B78196FBC2A(uParam7))
				{
					unk_0xB6AD9F9931D821CA("STRING");
					if (bParam10)
					{
						unk_0x76DB21247AE4E4E2(sParam7);
					}
					else
					{
						unk_0x26C23BE14F66F202(sParam7);
					}
					unk_0xA630BF119308F2F4(*uParam1);
				}
				unk_0x7A610B2EC5DA34E7(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, 0))
		{
			uParam1->f_1 = unk_0xFEB99716362809A3(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0x12DD4A0B247D9B4D(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xA582EE8380437B1B(uParam1->f_1, iParam8);
					}
					if (!unk_0xACC32B78196FBC2A(sParam7))
					{
						unk_0xB6AD9F9931D821CA("STRING");
						if (bParam10)
						{
							unk_0x76DB21247AE4E4E2(sParam7);
						}
						else
						{
							unk_0x26C23BE14F66F202(sParam7);
						}
						unk_0xA630BF119308F2F4(uParam1->f_1);
					}
					unk_0x7A610B2EC5DA34E7(uParam1->f_1, 7);
					unk_0xCED9E32812D6C7C7(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x12DD4A0B247D9B4D(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xB0550BC91B0159D6(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x12DD4A0B247D9B4D(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xB0550BC91B0159D6(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_527(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

int func_528(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0xD5C6B5E3B93A5EDC(uParam0, 0))
	{
		uVar0 = unk_0xB3FF0049C1FD38EC(iParam0, 0);
		if (unk_0x55A0C756C4A8220C(uVar0, 0))
		{
			if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
			{
				if (unk_0xF2549FF74D64B720(iVar0, "MPBitset"))
				{
					uVar1 = unk_0xC3B76795ECBDEF41(iVar0, "MPBitset");
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

int func_529()
{
	return Local_63.f_0;
}

int func_530(int iParam0)
{
	return Local_119[iParam0 /*5*/];
}

void func_531()
{
	if (unk_0x9E2D6C50374FCFA9() == iLocal_288)
	{
		if (Global_32110)
		{
			if (!BitTest(Local_119[bLocal_295 /*5*/].f_1, 4))
			{
				unk_0xCED9E32812D6C7C7(&(Local_119[bLocal_295 /*5*/].f_1), 4);
			}
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Local_119[bLocal_295 /*5*/].f_1), 4);
		}
	}
}

void func_532()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x9E2D6C50374FCFA9() == iLocal_287)
	{
		if (BitTest(Global_1835488, 0))
		{
			unk_0xB0550BC91B0159D6(&Global_1835488, false);
			bVar0 = true;
		}
		if (!BitTest(Local_119[iLocal_287 /*5*/].f_1, 2))
		{
			if (BitTest(Local_63.f_1, 11))
			{
				unk_0xCED9E32812D6C7C7(&(Local_119[iLocal_287 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!BitTest(Local_63.f_1, 11))
		{
			unk_0xB0550BC91B0159D6(&(Local_119[iLocal_287 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_4 = func_536();
			func_533(Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_4);
		}
	}
	else if (Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_4 != Local_63.f_44)
	{
		Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_4 = Local_63.f_44;
		func_533(Local_119[unk_0xA52C4F51ECAB7E02() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_533(var uParam0)
{
	switch (bLocal_286)
	{
		case 0:
			func_535(&(Global_1837209[3]), uParam0);
			break;
		
		case 1:
			func_534(uParam0);
			break;
	}
}

void func_534(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam0, bVar0))
		{
			unk_0x9972EFADA7A2A47D(1, Global_1837161[bVar0], -1467815081);
			unk_0x9972EFADA7A2A47D(1, -1467815081, Global_1837161[bVar0]);
		}
		else
		{
			unk_0x9972EFADA7A2A47D(3, Global_1837161[bVar0], -1467815081);
			unk_0x9972EFADA7A2A47D(3, -1467815081, Global_1837161[bVar0]);
		}
		bVar0++;
	}
}

void func_535(var uParam0, var uParam1)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam1, bVar0))
		{
			unk_0x9972EFADA7A2A47D(1, Global_1837161[bVar0], *uParam0);
			unk_0x9972EFADA7A2A47D(1, *uParam0, Global_1837161[bVar0]);
		}
		else
		{
			unk_0x9972EFADA7A2A47D(3, Global_1837161[bVar0], *uParam0);
			unk_0x9972EFADA7A2A47D(3, *uParam0, Global_1837161[bVar0]);
		}
		bVar0++;
	}
}

int func_536()
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
			if (iLocal_287 == unk_0xA1087A6350CD9244(iVar1))
			{
				unk_0xCED9E32812D6C7C7(&iVar0, bVar1);
			}
		}
		else if (unk_0x9E2D6C50374FCFA9() == unk_0xA1087A6350CD9244(bVar1))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, bVar1);
		}
		else if (func_6(unk_0xA1087A6350CD9244(bVar1), 0, 1))
		{
			if (func_52(unk_0xA1087A6350CD9244(bVar1)))
			{
				unk_0xCED9E32812D6C7C7(&iVar0, bVar1);
			}
		}
		bVar1++;
	}
	return iVar0;
}

void func_537()
{
	switch (bLocal_286)
	{
		case 0:
			if (!BitTest(iLocal_280, 11))
			{
				if (unk_0x9E2D6C50374FCFA9() == iLocal_287 && unk_0x9E2D6C50374FCFA9() != iLocal_288)
				{
					if (func_6(iLocal_288, 1, 1))
					{
						func_344("GC_TCK_60", iLocal_288, 0, 0, 0, 1, 0);
						unk_0xCED9E32812D6C7C7(&iLocal_280, 11);
					}
				}
			}
			if (!BitTest(iLocal_280, 12))
			{
				if (BitTest(Local_63.f_1, 8))
				{
					if (unk_0x9E2D6C50374FCFA9() == iLocal_287 && unk_0x9E2D6C50374FCFA9() != iLocal_288)
					{
						if (func_6(iLocal_288, 1, 1))
						{
							func_344("GC_TCK_62", iLocal_288, 0, 0, 0, 1, 0);
							unk_0xCED9E32812D6C7C7(&iLocal_280, 12);
						}
					}
				}
			}
			if (BitTest(Local_63.f_2, 10))
			{
				if (!BitTest(iLocal_280, 8))
				{
					if (unk_0x9E2D6C50374FCFA9() == iLocal_287 && unk_0x9E2D6C50374FCFA9() != iLocal_288)
					{
						if (func_6(iLocal_288, 1, 1))
						{
							func_344("GC_TCK_65", iLocal_288, 0, 0, 0, 1, 0);
							unk_0xCED9E32812D6C7C7(&iLocal_280, 8);
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
							if (unk_0x9E2D6C50374FCFA9() == iLocal_287 && unk_0x9E2D6C50374FCFA9() != iLocal_288)
							{
								if (func_6(iLocal_288, 1, 1))
								{
									func_344("GC_TCK_63", iLocal_288, 0, 0, 0, 1, 0);
									unk_0xCED9E32812D6C7C7(&iLocal_280, 13);
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
				if (unk_0x9E2D6C50374FCFA9() == iLocal_287)
				{
					if (func_6(iLocal_288, 1, 1) && unk_0x9E2D6C50374FCFA9() != iLocal_288)
					{
						if (Local_63.f_50)
						{
							func_344("HS_SUCC", iLocal_288, 0, 0, 0, 1, 0);
						}
						else if (Local_63.f_52)
						{
							func_344("GO_ASS_SUCC", iLocal_288, 0, 0, 0, 1, 0);
						}
						else
						{
							func_344("GC_TCK_70", iLocal_288, 0, 0, 0, 1, 0);
						}
						unk_0xCED9E32812D6C7C7(&iLocal_280, 11);
					}
				}
				else if (unk_0x9E2D6C50374FCFA9() == iLocal_288)
				{
					if (func_6(iLocal_287, 1, 1))
					{
						if (Local_63.f_50)
						{
							if (Local_63.f_51)
							{
								func_539("HS_A_SUCC", 0);
							}
							else
							{
								func_344("HS_SENT", iLocal_287, 0, 0, 0, 1, 0);
							}
						}
						else if (Local_63.f_52)
						{
							func_344("GO_ASS_SENT", iLocal_287, 0, 0, 0, 1, 0);
						}
						else
						{
							func_344("GC_TCK_71", iLocal_287, 0, 0, 0, 1, 0);
						}
						unk_0xCED9E32812D6C7C7(&iLocal_280, 11);
					}
				}
			}
			if (!BitTest(iLocal_280, 10))
			{
				if (BitTest(Local_63.f_1, 0))
				{
					if (BitTest(Local_63.f_3, 6))
					{
						if (unk_0x9E2D6C50374FCFA9() == iLocal_287 && unk_0x9E2D6C50374FCFA9() != iLocal_288)
						{
							if (func_6(iLocal_288, 0, 1))
							{
								func_538(-1, 1);
								if (Local_63.f_50)
								{
									if (!Local_63.f_51)
									{
										func_344("HS_KILLED", iLocal_288, 0, 0, 0, 1, 0);
									}
								}
								else if (Local_63.f_52)
								{
									func_344("GO_ASS_KILL", iLocal_288, 0, 0, 0, 1, 0);
								}
								else
								{
									func_344("GC_TCK_73", iLocal_288, 0, 0, 0, 1, 0);
								}
								unk_0xCED9E32812D6C7C7(&iLocal_280, 10);
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
						if (unk_0x9E2D6C50374FCFA9() == iLocal_287 && unk_0x9E2D6C50374FCFA9() != iLocal_288)
						{
							if (func_6(iLocal_288, 0, 1))
							{
								if (Local_63.f_50)
								{
									func_344("HS_ESCAPED", iLocal_288, 0, 0, 0, 1, 0);
								}
								else if (Local_63.f_52)
								{
									func_344("GO_ASS_ESC", iLocal_288, 0, 0, 0, 1, 0);
								}
								else
								{
									func_344("GC_TCK_75", iLocal_288, 0, 0, 0, 1, 0);
								}
								unk_0xCED9E32812D6C7C7(&iLocal_280, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_538(bool bParam0, int iParam1)
{
	if (Global_1836575)
	{
		if (Global_1836579 && Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/] != 148)
		{
			if (Global_1836068.f_14 == unk_0xA1087A6350CD9244(iParam0))
			{
				Global_1888178 = (Global_1888178 + iParam1);
			}
		}
		else
		{
			Global_1888178 = (Global_1888178 + iParam1);
		}
	}
}

int func_539(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	unk_0x150D8F58B26E9F70(sParam0);
	iVar0 = unk_0x187DF98ED95E5557(0, 1);
	func_345(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_540()
{
	if (unk_0x8736933282D0483C(false, 0) != Local_63.f_45)
	{
		if (func_548(Local_63.f_45, 0, 1))
		{
			if (unk_0xD2A20A5254D61849(0) <= Local_63.f_45)
			{
				unk_0xF8B8A6EDAA31F196(Local_63.f_45);
			}
		}
	}
	if (unk_0xBD7B8099C8298D2F(false, 0) != Local_63.f_46)
	{
		if (func_547(Local_63.f_45, 0, 1))
		{
			if (unk_0x0659DFD69713128D(0) <= Local_63.f_46)
			{
				unk_0xC1F83F3B5F8E7D3B(Local_63.f_46);
			}
		}
	}
	if (unk_0xC162EEC794CBB80B(false, 0) != Local_63.f_47)
	{
		if (func_541(Local_63.f_45, 0, 1))
		{
			if (unk_0xD768F3D3E0B175BA(0) <= Local_63.f_47)
			{
				unk_0x6F2E4667A6039155(Local_63.f_47);
			}
		}
	}
}

bool func_541(int iParam0, bool bParam1, bool bParam2)
{
	return func_542(2, iParam0, 1, bParam1, bParam2);
}

int func_542(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_546(iParam0) - func_545(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_545(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_546(iParam0) - func_544(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_545(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_546(iParam0) - func_545(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_543(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_543(int iParam0)
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

int func_544(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_545(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_217;
			}
			else
			{
				return unk_0x8736933282D0483C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_218;
			}
			else
			{
				return unk_0xBD7B8099C8298D2F(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_219;
			}
			else
			{
				return unk_0xC162EEC794CBB80B(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_546(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

bool func_547(int iParam0, bool bParam1, bool bParam2)
{
	return func_542(1, iParam0, 1, bParam1, bParam2);
}

bool func_548(int iParam0, bool bParam1, bool bParam2)
{
	return func_542(0, iParam0, 1, bParam1, bParam2);
}

void func_549()
{
	if (Local_63.f_50)
	{
		if (unk_0x9E2D6C50374FCFA9() == iLocal_287)
		{
			func_551(3);
		}
		else if (unk_0x9E2D6C50374FCFA9() == iLocal_288)
		{
			func_551(4);
		}
	}
	else if (Local_63.f_52)
	{
	}
	func_550();
}

void func_550()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_551(bool bParam0)
{
	unk_0xB0550BC91B0159D6(&(Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_10.f_5), iParam0);
}

int func_552()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_558())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_557())
	{
		return 1;
	}
	if (func_556(159))
	{
		if (!func_555())
		{
			return 1;
		}
	}
	if (func_556(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_553() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_553()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_553()
{
	switch (func_120())
	{
		case 0:
			return func_554();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_554()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_555()
{
	return Global_2714762.f_698;
}

int func_556(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_557()
{
	return Global_2725403;
}

bool func_558()
{
	return Global_2714762.f_693;
}

void func_559()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_560(struct<21> Param0)
{
	func_566(32, Param0);
	func_565(0, -1, 0);
	unk_0x21F2B09183F31D02(&Local_63, 56, 0);
	unk_0x7157B1051528D729(&Local_119, 161, 0);
	unk_0x2C07CBAFAC54A645(0);
	if (!func_564())
	{
		func_264();
	}
	bLocal_286 = Param0.f_16;
	iLocal_287 = unk_0xA1087A6350CD9244(Param0.f_17);
	if (unk_0x0D01086B38EC256F(iLocal_287))
	{
	}
	iLocal_288 = unk_0xA1087A6350CD9244(Param0.f_18);
	if (unk_0x0D01086B38EC256F(iLocal_288))
	{
		iLocal_289 = unk_0x2E87280918B16506(unk_0x61042CA2A97BBB69(iLocal_288));
	}
	if (func_563(iLocal_287, 3) && bLocal_286 == 1)
	{
		Local_63.f_50 = 1;
		if (func_563(iLocal_288, 4))
		{
			Local_63.f_51 = 1;
		}
	}
	if (bLocal_286 == 1)
	{
		if (func_562(iLocal_287))
		{
			Local_63.f_52 = 1;
			Local_63.f_53 = func_561(iLocal_287);
		}
	}
	Local_290 = { Param0.f_10 };
	if (bLocal_286 == 1)
	{
		if (unk_0x9E2D6C50374FCFA9() == iLocal_287)
		{
			unk_0xCED9E32812D6C7C7(&Global_1835488, false);
		}
	}
	Global_1922952 = 0;
	Global_1922953 = 0;
	if (bLocal_286 == 1)
	{
		Global_2815059.f_1766 = 0;
	}
	Local_119[unk_0xA52C4F51ECAB7E02() /*5*/] = 0;
}

var func_561(int iParam0)
{
	return Global_1853348[iParam0 /*834*/].f_180.f_4;
}

bool func_562(int iParam0)
{
	return Global_1853348[iParam0 /*834*/].f_180 != func_13();
}

bool func_563(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_5, iParam1);
}

int func_564()
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
		if (func_558())
		{
			return 0;
		}
		if (func_556(157))
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

int func_565(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_550();
			}
			else
			{
				return 0;
			}
		}
		if (!func_527(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_550();
					}
					else
					{
						return 0;
					}
				}
				if (func_558())
				{
					if (!bParam2)
					{
						func_550();
					}
					else
					{
						return 0;
					}
				}
				if (func_556(157))
				{
					if (!bParam2)
					{
						func_550();
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
					func_550();
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
				func_550();
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
			func_550();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_566(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		func_550();
	}
	unk_0xD9B114A8D3A8319F(iParam0, 0, Param1.f_16);
}

