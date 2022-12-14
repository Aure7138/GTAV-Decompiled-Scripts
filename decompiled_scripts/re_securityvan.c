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
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51[2] = { 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60[2] = { 0, 0 };
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67[2];
	float fLocal_74[2] = { 0f, 0f };
	struct<3> Local_77 = { 0, 0, 0 } ;
	float fLocal_80 = 0f;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	bool bLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118[2] = { 0, 0 };
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123[2] = { 0, 0 };
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	char[] cLocal_139[8] = 0;
	struct<10> Local_140[16];
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = -1;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 1000;
	var uLocal_315 = 1000;
	var uLocal_316 = 0;
	var uLocal_317 = 8;
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
	var uLocal_464 = 1;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	float fLocal_469 = 0f;
	struct<3> Local_470 = { 0, 0, 0 } ;
	struct<3> Local_473 = { 0, 0, 0 } ;
	int iLocal_476 = 0;
	struct<3> Local_477 = { 0, 0, 0 } ;
	float fLocal_480 = 0f;
	int iLocal_481[2] = { 0, 0 };
	int iLocal_484 = 0;
	struct<3> Local_485 = { 0, 0, 0 } ;
	struct<3> Local_488 = { 0, 0, 0 } ;
	struct<3> Local_491 = { 0, 0, 0 } ;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	bool bLocal_496 = 0;
	int iLocal_497 = 0;
	float fLocal_498 = 0f;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	struct<3> Local_501 = { 0, 0, 0 } ;
	int iLocal_504[2] = { 0, 0 };
	int iLocal_507 = 0;
	float fLocal_508 = 0f;
	float fLocal_509 = 0f;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512[2] = { 0, 0 };
	int iLocal_515[2] = { 0, 0 };
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
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	iLocal_18 = 3;
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
	Local_81 = { 0.0203f, -3.1441f, 0.5027f };
	Local_84 = { 90f, 0f, 0f };
	Local_90 = { 0f, 0f, 0f };
	Local_93 = { 0f, 0f, 0f };
	iLocal_129 = 1;
	iLocal_130 = 1;
	cLocal_139 = "RESECAU";
	iLocal_465 = -1;
	fLocal_469 = -3.55f;
	Local_470 = { 0.014f, -0.9111f, 1.2317f };
	Local_473 = { 0f, -3.4368f, 1.2317f };
	iLocal_494 = -1;
	iLocal_495 = -1;
	iLocal_507 = -1;
	Local_87 = { Local_87 };
	Local_87 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x2A488C176D52CCA5(Local_87, -337.3338f, -1460.373f, 29.5668f) < 5f)
	{
		bLocal_47 = true;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, -588.4711f, -866.9462f, 25.3292f) < 5f)
	{
		bLocal_47 = 2;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, -389f, 6061f, 31f) < 5f)
	{
		bLocal_47 = 3;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, -600f, -1094f, 22.76f) < 5f)
	{
		bLocal_47 = 4;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, -1025f, -1086f, 2f) < 5f)
	{
		bLocal_47 = 5;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, -595.5618f, -667.7235f, 31.0544f) < 5f)
	{
		bLocal_47 = 6;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, 3018.384f, 3634.017f, 70.4076f) < 5f)
	{
		bLocal_47 = 7;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, -2815.661f, 2208.171f, 27.8382f) < 5f)
	{
		bLocal_47 = 8;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, 856.7742f, -2067.845f, 29.0704f) < 5f)
	{
		bLocal_47 = 9;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, 805.1932f, -703.1327f, 28.1632f) < 5f)
	{
		bLocal_47 = 10;
	}
	else
	{
		unk_0xAFBDF6A5E54114C1();
	}
	if (Global_3)
	{
		if (bLocal_47 != 2)
		{
			unk_0xAFBDF6A5E54114C1();
		}
	}
	else
	{
		if (unk_0x4B34601C5C56F3EE(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0xF68107C40359970C(iLocal_51[iVar0]))
				{
					if (unk_0x55A0C756C4A8220C(iLocal_54, 0))
					{
						if (!unk_0xF6F5D18EF8EAB859(iLocal_51[iVar0], iLocal_54, 0))
						{
							unk_0xB486640392EC50BB(iLocal_51[iVar0], iLocal_54, -1, func_248(iLocal_54), 1073741824, 1, 0);
						}
					}
					else
					{
						unk_0x83F5BCFFFBA26699(iLocal_51[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_231();
		}
		if (!func_191(Local_87, 9, bLocal_47, 1, 0))
		{
			unk_0xAFBDF6A5E54114C1();
		}
		else
		{
			func_188(-1);
		}
	}
	func_187();
	uLocal_65 = unk_0x2915D98110F23A29(Local_77 + Vector(30f, 30f, 30f), Local_77 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_184(&uLocal_317);
		if (!func_183())
		{
			if (func_182())
			{
				func_231();
			}
			unk_0x6D3F703013ED87D3("RE_SV", 0);
			switch (iLocal_510)
			{
				case 0:
					if (unk_0xC92F9F18E020B461() && !func_170())
					{
						if (func_161())
						{
							if ((iLocal_46 == 3 && !(unk_0x0318E2EE6FB4563F(Local_77, 3f) && func_160(unk_0xE2D3D51028F0428A(), Local_77, 1) < 150f)) || iLocal_46 != 3)
							{
								if (iLocal_46 == 3)
								{
									if (!unk_0x0318E2EE6FB4563F(Local_77, 8f))
									{
										unk_0x7A997A0A971D305F(Local_77, 4f, 1, 0, 0, 0);
									}
									iLocal_48 = 4;
									bLocal_109 = true;
								}
								else
								{
									iLocal_48 = 1;
								}
								func_159();
								if (unk_0x55A0C756C4A8220C(iLocal_54, 0) && iLocal_46 == 3)
								{
									unk_0xB2D5451CC5606248(iLocal_54, 5f);
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_510++;
							}
						}
					}
					else
					{
						func_231();
					}
					break;
				
				case 1:
					if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && unk_0x55A0C756C4A8220C(iLocal_54, 0))
					{
						if (((unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_54, 1)) < 10000f || !unk_0x4D21C9FB671ED18F(iLocal_54)) || (!unk_0xF68107C40359970C(iLocal_51[0]) && !unk_0x4D21C9FB671ED18F(iLocal_51[0]))) || (!unk_0xF68107C40359970C(iLocal_51[1]) && !unk_0x4D21C9FB671ED18F(iLocal_51[1])))
						{
							iLocal_510++;
						}
					}
					if (func_158())
					{
						iLocal_510++;
					}
					if (iLocal_510 != 1)
					{
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 2:
					if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						if (iLocal_46 != 3)
						{
							func_153();
						}
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_54) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
					{
						if (iLocal_46 == 3)
						{
							func_148();
							if (!unk_0x4D21C9FB671ED18F(iLocal_54) && (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(iLocal_54, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 100f || func_158()))
							{
								func_139(1);
							}
						}
						else if (((!unk_0x4D21C9FB671ED18F(iLocal_54) && iLocal_48 == 4) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_96, Local_99, fLocal_102, 0, 1, 0)) || func_158())
						{
							func_139(1);
						}
						if ((iLocal_48 == 4 && unk_0x4D21C9FB671ED18F(iLocal_54)) && iLocal_46 != 3)
						{
							if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_54, 1)) > 100f)
							{
								func_231();
							}
							else
							{
								func_139(1);
							}
						}
					}
					break;
			}
			if (iLocal_510 > 0)
			{
				if (unk_0x55A0C756C4A8220C(iLocal_54, 0) && unk_0x4D21C9FB671ED18F(iLocal_54))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_54, 1)) > 62500f)
					{
						func_231();
					}
					if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_54, 1)) > 10000f && !unk_0xC92F9F18E020B461())
					{
						func_231();
					}
				}
			}
		}
		else
		{
			unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
			if (!unk_0x12DD4A0B247D9B4D(uLocal_63))
			{
				if (!func_138(2) && !bLocal_114)
				{
					if (!unk_0xF847447D4467709D())
					{
						func_137("SV_VANHELP1", 15000);
						func_136(2);
					}
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_56))
				{
					if (iLocal_511 != 0)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(iLocal_56, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 0;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				else if (((bLocal_109 && !unk_0x2791155FB0769FE5(uLocal_137)) && unk_0x55A0C756C4A8220C(iLocal_54, 0)) && !bLocal_121)
				{
					if (iLocal_511 != 1)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(iLocal_54, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 1;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				else if (unk_0x2791155FB0769FE5(uLocal_137))
				{
					if (iLocal_511 != 2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x70453F7DF40780A5(uLocal_137), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 2;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				if (iLocal_511 == 0)
				{
					if (unk_0xE5965CDF24F93A9F(iLocal_56))
					{
						func_128(&uLocal_305, iLocal_56, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(iLocal_56, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 1)
				{
					if (unk_0x55A0C756C4A8220C(iLocal_54, 0) && !unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_54, 1))
					{
						func_128(&uLocal_305, iLocal_54, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(iLocal_54, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 2)
				{
					if (unk_0x2791155FB0769FE5(uLocal_137))
					{
						func_105(&uLocal_305, unk_0x70453F7DF40780A5(uLocal_137), 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x70453F7DF40780A5(uLocal_137), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				if (((!unk_0x55B23FE400FCEA6B(iLocal_54, 0) && bLocal_109) && !bLocal_111) && (!func_138(0) || (unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_stickybomb"), 0) && !func_138(1))))
				{
					switch (iLocal_134)
					{
						case 0:
							if (!unk_0xF847447D4467709D() && unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(iLocal_54, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 225f)
							{
								func_137("SV_DOORHELP1", 15000);
								func_136(0);
								iLocal_134++;
							}
							break;
						
						case 1:
							if (!unk_0xF847447D4467709D())
							{
								iLocal_135 = unk_0x320D1840B6DAA1CC();
								iLocal_134++;
							}
							break;
						
						case 2:
							if ((unk_0x320D1840B6DAA1CC() - iLocal_135) > 2000 && unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_stickybomb"), 0))
							{
								func_137("SV_DOORHELP2", 15000);
								func_136(1);
								iLocal_134++;
							}
							break;
						}
				}
				if (bLocal_111 || bLocal_121)
				{
					if (func_104("SV_DOORHELP1") || func_104("SV_DOORHELP2"))
					{
						unk_0x3410421C60BF7143(1);
					}
				}
			}
			switch (iLocal_48)
			{
				case 1:
					func_153();
					break;
				
				case 2:
					func_96();
					break;
				
				case 3:
					func_94();
					break;
				
				case 4:
					func_148();
					break;
				
				case 5:
					func_90();
					break;
				
				case 6:
					func_86();
					break;
				
				case 7:
					if (!unk_0xF68107C40359970C(iLocal_51[0]))
					{
						if (unk_0x44C2858965E93D87(iLocal_51[0]) != 3)
						{
							unk_0x0AEBDB297E8270B8(iLocal_51[0], 3);
						}
					}
					if (!unk_0xF68107C40359970C(iLocal_51[1]))
					{
						if (unk_0x44C2858965E93D87(iLocal_51[1]) != 3)
						{
							unk_0x0AEBDB297E8270B8(iLocal_51[1], 3);
						}
					}
					if (((!unk_0xF68107C40359970C(iLocal_51[0]) && !unk_0x55B23FE400FCEA6B(iLocal_51[0], 0)) && !unk_0xF68107C40359970C(iLocal_51[1])) && !unk_0x55B23FE400FCEA6B(iLocal_51[1], 0))
					{
						iLocal_129 = 1;
						func_79(iLocal_51[1]);
						func_77(0, 1);
					}
					else if (iLocal_129 == 1)
					{
						if (unk_0xF68107C40359970C(iLocal_51[1]) || unk_0x55B23FE400FCEA6B(iLocal_51[1], 0))
						{
							iLocal_50 = 0;
							iLocal_129 = 0;
						}
						else
						{
							func_79(iLocal_51[1]);
						}
					}
					else if (iLocal_129 == 0)
					{
						if (unk_0xF68107C40359970C(iLocal_51[0]) || unk_0x55B23FE400FCEA6B(iLocal_51[0], 0))
						{
							iLocal_129 = -1;
						}
						else
						{
							func_79(iLocal_51[0]);
						}
					}
					break;
				
				case 8:
					func_71();
					break;
				
				case 9:
					func_231();
					break;
			}
			if (func_69())
			{
				func_68(9);
			}
			if ((((unk_0x55A0C756C4A8220C(iLocal_54, 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A())) && unk_0xAB793EA186AB8DAA(iLocal_54, -1, 0) == unk_0xE2D3D51028F0428A()) && !bLocal_113) && iLocal_48 != 8)
			{
				if (bLocal_109)
				{
					func_68(8);
				}
				else
				{
					func_68(5);
				}
			}
			if (bLocal_110)
			{
				if (unk_0x76932AF783B85B6A(iLocal_66, joaat("player")) != 5)
				{
					unk_0x9972EFADA7A2A47D(5, iLocal_66, joaat("player"));
					unk_0x9972EFADA7A2A47D(5, joaat("player"), iLocal_66);
				}
			}
			if (bLocal_111)
			{
				if ((unk_0x2791155FB0769FE5(uLocal_137) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A())) && unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x70453F7DF40780A5(uLocal_137)) > 250f)
				{
					func_68(9);
				}
			}
			if (!bLocal_121)
			{
				if (func_67())
				{
					bLocal_121 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (unk_0xE5965CDF24F93A9F(iLocal_51[iVar2]))
				{
					if ((!unk_0x55B23FE400FCEA6B(iLocal_51[iVar2], 0) && !unk_0xF68107C40359970C(iLocal_51[iVar2])) && unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(iLocal_51[0], 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_54))
				{
					if (unk_0x55A0C756C4A8220C(iLocal_54, 0))
					{
						if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_54, 0))
						{
							iVar3 = 1;
						}
					}
					if ((unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(iLocal_54, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 10000f && unk_0x4D21C9FB671ED18F(iLocal_54)) || unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(iLocal_54, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_43();
				}
			}
			func_39();
			func_34();
			func_29();
		}
		if (!bLocal_107)
		{
			if (func_28())
			{
				iLocal_127 = unk_0x320D1840B6DAA1CC();
				bLocal_107 = true;
			}
		}
		if (bLocal_107)
		{
			if (!bLocal_108)
			{
				if ((unk_0x320D1840B6DAA1CC() - iLocal_127) > 5000)
				{
					unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 2, 0);
					if (func_27() < 30f)
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_108 = true;
						}
					}
					else
					{
						bLocal_108 = true;
					}
				}
			}
		}
		if (((unk_0x320D1840B6DAA1CC() - iLocal_127) > 10000 && unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) && !iLocal_126)
		{
			iVar4 = unk_0x5853B15F78E1A265(0, 3);
			if (iVar4 == 0)
			{
				unk_0x8BAE3B6695282DC0("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0x8BAE3B6695282DC0("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0x8BAE3B6695282DC0("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_126 = 1;
		}
		if (bLocal_108)
		{
			if ((!unk_0xF68107C40359970C(iLocal_51[0]) || !unk_0xF68107C40359970C(iLocal_51[1])) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(func_3(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
				{
					if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
					{
						unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 2, 0);
						unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
					}
					unk_0x1EAE781EAA7F5613(unk_0x9E2D6C50374FCFA9(), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1));
				}
			}
		}
		if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0 && func_2())
		{
			unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 2, 0);
			unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
		}
		if (func_1())
		{
			func_68(9);
		}
		if (unk_0x55A0C756C4A8220C(iLocal_54, 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0x7DF569D9E616D55E(iLocal_54, 0) > 0f || unk_0x7DF569D9E616D55E(iLocal_54, 1) > 0f)
			{
				if (unk_0xA09765D2ADE13CAE(iLocal_54) == 3)
				{
					unk_0x3B2646B62E7BBE11(iLocal_54, 1);
				}
			}
			if (!bLocal_112)
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_54, 0))
				{
					bLocal_112 = true;
				}
			}
			if (!bLocal_112)
			{
				if (unk_0x7DF569D9E616D55E(iLocal_54, 0) == 0f && unk_0x7DF569D9E616D55E(iLocal_54, 1) == 0f)
				{
					if (unk_0xA09765D2ADE13CAE(iLocal_54) == 1)
					{
						unk_0x3B2646B62E7BBE11(iLocal_54, 3);
					}
				}
			}
		}
		if (iLocal_131 != 0)
		{
			if ((iLocal_48 == 8 || iLocal_48 == 6) || iLocal_48 == 4)
			{
				unk_0x527AAB28DB255A95(iLocal_131);
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_56))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_51)
			{
				if (!unk_0xF68107C40359970C(iLocal_51[iVar5]) && !unk_0x55B23FE400FCEA6B(iLocal_51[iVar5], 0))
				{
					if (unk_0x099CAD293190F449(iLocal_56, iLocal_51[iVar5]))
					{
						if (iLocal_48 == 1)
						{
							if (!iLocal_512[iVar5])
							{
								unk_0x1506C7782F807090(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x1506C7782F807090(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
								iLocal_512[iVar5] = 1;
							}
						}
						if (iLocal_48 == 7)
						{
							if (!iLocal_515[iVar5])
							{
								unk_0x1506C7782F807090(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x1506C7782F807090(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_panic", 1090519040, 1);
								iLocal_515[iVar5] = 1;
							}
						}
						if (unk_0x5007A91D57C39FFC(iLocal_51[iVar5], 4) && !iLocal_115)
						{
							unk_0x4F1E6A84BC157FA0(iLocal_51[iVar5], 1);
							iLocal_115 = 1;
						}
					}
					else
					{
						if (iLocal_512[iVar5])
						{
							unk_0xD14025FD10232A78(iLocal_51[iVar5], 0, -1056964608);
							unk_0xD14025FD10232A78(iLocal_51[iVar5], 1, -1056964608);
							iLocal_512[iVar5] = 0;
						}
						if (iLocal_515[iVar5])
						{
							unk_0xD14025FD10232A78(iLocal_51[iVar5], 0, -1056964608);
							unk_0xD14025FD10232A78(iLocal_51[iVar5], 1, -1056964608);
							iLocal_515[iVar5] = 0;
						}
						if (iLocal_512[iVar5] || iLocal_515[iVar5])
						{
							iLocal_512[iVar5] = 0;
							iLocal_515[iVar5] = 0;
							unk_0xD14025FD10232A78(iLocal_51[iVar5], 0, -1056964608);
							unk_0xD14025FD10232A78(iLocal_51[iVar5], 1, -1056964608);
						}
						if (unk_0x5007A91D57C39FFC(iLocal_51[iVar5], 4) && iLocal_115)
						{
							unk_0x4F1E6A84BC157FA0(iLocal_51[iVar5], 1);
							iLocal_115 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_51)
			{
				if (!unk_0xF68107C40359970C(iLocal_51[iVar5]))
				{
					if (iLocal_512[iVar5] || iLocal_515[iVar5])
					{
						iLocal_512[iVar5] = 0;
						iLocal_515[iVar5] = 0;
						unk_0xD14025FD10232A78(iLocal_51[iVar5], 0, -1056964608);
						unk_0xD14025FD10232A78(iLocal_51[iVar5], 1, -1056964608);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_109 && !bLocal_496)
		{
			if (((((unk_0xE5965CDF24F93A9F(iLocal_56) && unk_0xE85F749F6D5C809E(iLocal_56)) && !unk_0xF68107C40359970C(iLocal_51[iLocal_130])) && !unk_0xFCF559C8631ABED7(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 3)) && !unk_0xFCF559C8631ABED7(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0xFCF559C8631ABED7(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0x49D97B076E3590AC(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_116)
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_54))
			{
				if (unk_0x0747E45CFF1F74AA(iLocal_54, unk_0xE2D3D51028F0428A(), 1))
				{
					iLocal_116 = 1;
				}
				unk_0xE68645525D451A8B(iLocal_54);
			}
		}
	}
}

int func_1()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && (((unk_0x55A0C756C4A8220C(iLocal_54, 0) && bLocal_114) && unk_0x2791155FB0769FE5(uLocal_137)) || (!unk_0x55A0C756C4A8220C(iLocal_54, 0) && unk_0x2791155FB0769FE5(uLocal_137)))) && unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_54, 1)) < 20f) && unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x70453F7DF40780A5(uLocal_137)) < 20f)
	{
		iVar1 = unk_0xE66E6FDCD35AFAFE(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0xF68107C40359970C(iVar1))
		{
			if (unk_0x15CAA6D7B11F1A7C(iVar1) == joaat("s_m_y_cop_01") || unk_0x15CAA6D7B11F1A7C(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = unk_0xE66E6FDCD35AFAFE(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0xF68107C40359970C(iVar1))
		{
			if (unk_0x15CAA6D7B11F1A7C(iVar1) == joaat("s_m_y_cop_01") || unk_0x15CAA6D7B11F1A7C(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = unk_0x8AA54390E994CE1B(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), fVar0, 0, 1024);
		if (unk_0x55A0C756C4A8220C(iVar2, 0))
		{
			return 1;
		}
		iVar2 = unk_0x8AA54390E994CE1B(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), fVar0, 0, 1024);
		if (unk_0x55A0C756C4A8220C(iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_3()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 999999f;
	iVar1 = 0;
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (!unk_0xF68107C40359970C(iLocal_51[0]))
		{
			fVar0 = unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_51[0], 1));
			iVar1 = 0;
		}
		if (!unk_0xF68107C40359970C(iLocal_51[1]))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_51[1], 1));
				iVar1 = 1;
			}
		}
	}
	return iLocal_51[iVar1];
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

int func_16()
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

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
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

float func_27()
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (!unk_0xF68107C40359970C(iLocal_51[0]))
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_51[0], 1));
		}
		if (!unk_0xF68107C40359970C(iLocal_51[1]))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_51[1], 1));
			}
		}
	}
	return unk_0x71D93B57D07F9804(fVar0);
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_51)
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_51[iVar1]))
			{
				if (((!unk_0xF68107C40359970C(iLocal_51[iVar1]) && unk_0x0747E45CFF1F74AA(iLocal_51[iVar1], unk_0xE2D3D51028F0428A(), 1)) || unk_0xF68107C40359970C(iLocal_51[iVar1])) || unk_0x55B23FE400FCEA6B(iLocal_51[iVar1], 0))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0xF68107C40359970C(iLocal_51[0]) && !unk_0xF68107C40359970C(iLocal_51[1])) && iLocal_116)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_29()
{
	if (!bLocal_121)
	{
		if (!bLocal_109)
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_56))
			{
				if (!unk_0xE85F749F6D5C809E(iLocal_56))
				{
					unk_0x4BDA5AFD88C085EB(&iLocal_56);
					if (!unk_0x2791155FB0769FE5(uLocal_137) && !bLocal_111)
					{
						func_30(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0x320D1840B6DAA1CC() - iLocal_136) > 3000)
				{
					if (unk_0xF68107C40359970C(iLocal_51[iLocal_130]) || unk_0x32DCDA1B2F8A0694(iLocal_51[iLocal_130]))
					{
						unk_0xE6451C2F193342C7(iLocal_56, 1, 1);
						iLocal_136 = unk_0x320D1840B6DAA1CC();
					}
				}
			}
			else if (!unk_0x2791155FB0769FE5(uLocal_137))
			{
				if (unk_0xF68107C40359970C(iLocal_51[iLocal_130]) || ((!unk_0xF68107C40359970C(iLocal_51[iLocal_130]) && unk_0x32DCDA1B2F8A0694(iLocal_51[iLocal_130])) && !bLocal_111))
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_56))
		{
			unk_0x4BDA5AFD88C085EB(&iLocal_56);
		}
		if (unk_0x2791155FB0769FE5(uLocal_137))
		{
			unk_0x451F33099166532A(uLocal_137);
		}
	}
}

void func_30(struct<3> Param0, bool bParam3)
{
	if (!bLocal_121 && !bLocal_111)
	{
		if (!bParam3)
		{
			if (bLocal_109)
			{
				Param0 = { unk_0x7F65C587E17DEF5D(unk_0xCACAD935C0BEE14F(iLocal_54, 0f, -3.3f, 0f), 1067030938, 1069547520) };
			}
			else
			{
				Param0 = { unk_0x7F65C587E17DEF5D(unk_0x6B62510F212526DC(iLocal_51[iLocal_130], 0), 1067030938, 1069547520) };
			}
		}
		unk_0xCED9E32812D6C7C7(&uLocal_138, 3);
		unk_0xCED9E32812D6C7C7(&uLocal_138, 4);
		unk_0xCED9E32812D6C7C7(&uLocal_138, true);
		if (bParam3)
		{
			uLocal_137 = unk_0x1EE09F99FEF19DAF(joaat("pickup_money_security_case"), Param0, unk_0x63A8BF5E6C2BF85C(iLocal_56, 2), 0, uLocal_128, 2, 1, 0);
		}
		else
		{
			uLocal_137 = unk_0x1CD347D2BD906560(joaat("pickup_money_security_case"), Param0, uLocal_138, uLocal_128, 1, 0);
		}
		if (!unk_0x12DD4A0B247D9B4D(uLocal_64))
		{
			uLocal_64 = func_31(uLocal_137);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_56))
		{
			unk_0x4BDA5AFD88C085EB(&iLocal_56);
		}
		bLocal_111 = true;
	}
}

int func_31(var uParam0)
{
	return func_32(uParam0);
}

int func_32(var uParam0)
{
	var uVar0;
	
	if (!unk_0x2791155FB0769FE5(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x455B7FFC90053189(uParam0);
	unk_0x293A9399E902A33B(uVar0, func_33(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	return uVar0;
}

float func_33(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_34()
{
	if (func_36())
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_57))
		{
			unk_0x2476BE9932670CAD(iLocal_54, 2, 0, 0);
			unk_0x2476BE9932670CAD(iLocal_54, 3, 0, 0);
			if (unk_0xE5965CDF24F93A9F(iLocal_57))
			{
				unk_0x4BDA5AFD88C085EB(&iLocal_57);
			}
		}
	}
	switch (iLocal_49)
	{
		case 0:
			if (bLocal_109)
			{
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			if (unk_0x7DF569D9E616D55E(iLocal_54, 2) == 0f && unk_0x7DF569D9E616D55E(iLocal_54, 3) == 0f)
			{
				if (unk_0xE5965CDF24F93A9F(iLocal_56))
				{
					if (unk_0xE85F749F6D5C809E(iLocal_56))
					{
						unk_0xE6451C2F193342C7(iLocal_56, 1, 1);
					}
					unk_0x9A97DC6DBC7B223D(iLocal_56, iLocal_54, 0, Local_81, Local_84, 0, 0, 0, 0, 2, 1, 0);
					iLocal_49 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_111 && !bLocal_121)
			{
				if (!unk_0x55B23FE400FCEA6B(iLocal_54, 0))
				{
					if (((unk_0x55A0C756C4A8220C(iLocal_54, 0) && unk_0x7DF569D9E616D55E(iLocal_54, 2) > 0.25f) && unk_0x7DF569D9E616D55E(iLocal_54, 3) > 0.25f) || !unk_0x55A0C756C4A8220C(iLocal_54, 0))
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_56))
						{
							if (unk_0xE85F749F6D5C809E(iLocal_56))
							{
								unk_0xD336F8D9637B963F(unk_0xA9ADCC8D104AA552(), "DOORS_BLOWN", unk_0x96EDA732FD9DC0AF(iLocal_54, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								unk_0xE6451C2F193342C7(iLocal_56, 1, 0);
								unk_0x959E1626CBC7D38A(iLocal_56, 1, 0);
								unk_0xAA8C46C452582702(iLocal_56);
								unk_0xE987EFB3B3FAB187(iLocal_56, 1);
								Local_477 = { unk_0x6B62510F212526DC(iLocal_56, 1) - unk_0x6B62510F212526DC(iLocal_54, 1) * Vector(1.5f, 1.5f, 1.5f) };
								if (unk_0x652D2EEEF1D3E62C(Local_477) > 10f)
								{
									Local_477 = { func_35(Local_477) };
									Local_477 = { Local_477 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_133 < 100)
								{
									iLocal_117 = 1;
								}
								unk_0x3F6DE6DBA9A99FEA(iLocal_56, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_476 = unk_0x320D1840B6DAA1CC();
							}
							else if (unk_0xD7500BC8646DAB0D(unk_0x6B62510F212526DC(iLocal_56, 1), unk_0xCACAD935C0BEE14F(iLocal_54, Local_470), unk_0xCACAD935C0BEE14F(iLocal_54, Local_473), 0) >= 1f)
							{
								iLocal_49 = 3;
								iLocal_123[0] = 0;
								iLocal_123[1] = 0;
							}
							else if ((unk_0x320D1840B6DAA1CC() - iLocal_476) > 5000)
							{
								func_30(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0xE5965CDF24F93A9F(iLocal_54))
				{
					unk_0x2476BE9932670CAD(iLocal_54, 2, 0, 0);
					unk_0x2476BE9932670CAD(iLocal_54, 3, 0, 0);
					func_30(unk_0xCACAD935C0BEE14F(iLocal_54, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_48 != 8)
			{
				func_68(8);
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_56) && !unk_0x2791155FB0769FE5(uLocal_137))
			{
				if (unk_0x207D53F9E0190691(iLocal_56) == 0f && (unk_0x320D1840B6DAA1CC() - iLocal_476) > 1000)
				{
					func_30(unk_0x6B62510F212526DC(iLocal_56, 1), 1);
					unk_0x4BDA5AFD88C085EB(&iLocal_56);
				}
				else if ((unk_0x320D1840B6DAA1CC() - iLocal_476) > 5000)
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}

Vector3 func_35(struct<3> Param0)
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

int func_36()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(iLocal_57) && unk_0xE85F749F6D5C809E(iLocal_57))
	{
		if (!iLocal_466)
		{
			if (unk_0xEDF30C9168B336D8(unk_0x6B62510F212526DC(iLocal_57, 1), joaat("weapon_stickybomb"), 0.25f, 0) || unk_0x574E2A23F0F76E35(unk_0x6B62510F212526DC(iLocal_57, 1), 0.3f, unk_0xB8DEE91181C30E65(joaat("weapon_stickybomb")), 0))
			{
				iLocal_466 = 1;
			}
		}
		iVar0 = 0;
		unk_0xB00FC865B64B72B8(unk_0x6B62510F212526DC(iLocal_57, 1), 0.1f, 255, 0, 0, 255);
		if (func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x6B62510F212526DC(iLocal_57, 1), 1f, 1) || (unk_0x89D0E0233F6E59A7(2, unk_0x6B62510F212526DC(iLocal_57, 1), 0.3f) && iLocal_466))
		{
			iLocal_117 = 1;
			iVar0 = 1;
		}
		if (unk_0x0CF63873D754B965(iLocal_57) < iLocal_132 && unk_0x0747E45CFF1F74AA(iLocal_57, unk_0xE2D3D51028F0428A(), 0))
		{
			iLocal_133 = (iLocal_133 + (iLocal_132 - unk_0x0CF63873D754B965(iLocal_57)));
			unk_0xE68645525D451A8B(iLocal_57);
		}
		if ((unk_0x320D1840B6DAA1CC() - iLocal_467) > 200 && unk_0xE5965CDF24F93A9F(iLocal_54))
		{
			if (unk_0x42D790A6634DC8DC(unk_0xCACAD935C0BEE14F(iLocal_54, 0f, 0f, (1.2195f - 0.27f)), unk_0xCACAD935C0BEE14F(iLocal_54, 0f, fLocal_469, (1.2195f + 0.09f)), 0.45f, 1))
			{
				iLocal_467 = unk_0x320D1840B6DAA1CC();
				iLocal_468++;
			}
		}
		if (iLocal_468 > 5)
		{
			return 1;
		}
		if (iLocal_133 > 100 || iVar0)
		{
			return 1;
		}
		iLocal_132 = unk_0x0CF63873D754B965(iLocal_57);
	}
	return 0;
}

int func_37(struct<3> Param0, struct<3> Param3, struct<3> Param6, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_38(Param0 + Param3))
	{
		if ((((((((((((((((((((((unk_0x8FE34BF4165F5104(5, Param3, Param0) || (unk_0x8FE34BF4165F5104(2, Param3, Param0) && !bParam10)) || (unk_0x8FE34BF4165F5104(20, Param3, Param0) && !bParam10)) || unk_0x8FE34BF4165F5104(4, Param3, Param0)) || (unk_0x8FE34BF4165F5104(28, Param3, Param0) && !bParam10)) || unk_0x8FE34BF4165F5104(32, Param3, Param0)) || unk_0x8FE34BF4165F5104(25, Param3, Param0)) || unk_0x8FE34BF4165F5104(9, Param3, Param0)) || (unk_0x8FE34BF4165F5104(3, Param3, Param0) && !bParam10)) || (unk_0x8FE34BF4165F5104(6, Param3, Param0) && !bParam10)) || unk_0x8FE34BF4165F5104(0, Param3, Param0)) || unk_0x8FE34BF4165F5104(1, Param3, Param0)) || unk_0x8FE34BF4165F5104(23, Param3, Param0)) || unk_0x8FE34BF4165F5104(34, Param3, Param0)) || unk_0x8FE34BF4165F5104(14, Param3, Param0)) || (unk_0x8FE34BF4165F5104(30, Param3, Param0) && !bParam10)) || (unk_0x8FE34BF4165F5104(12, Param3, Param0) && !bParam10)) || unk_0x8FE34BF4165F5104(7, Param3, Param0)) || (unk_0x8FE34BF4165F5104(21, Param3, Param0) && !bParam10)) || (unk_0x8FE34BF4165F5104(18, Param3, Param0) && !bParam10)) || unk_0x8FE34BF4165F5104(15, Param3, Param0)) || unk_0x8FE34BF4165F5104(10, Param3, Param0)) || unk_0x8FE34BF4165F5104(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0x89D0E0233F6E59A7(5, Param6, iParam9) || (unk_0x89D0E0233F6E59A7(2, Param6, iParam9) && !bParam10)) || (unk_0x89D0E0233F6E59A7(20, Param6, iParam9) && !bParam10)) || unk_0x89D0E0233F6E59A7(4, Param6, iParam9)) || (unk_0x89D0E0233F6E59A7(28, Param6, iParam9) && !bParam10)) || unk_0x89D0E0233F6E59A7(32, Param6, iParam9)) || unk_0x89D0E0233F6E59A7(25, Param6, iParam9)) || unk_0x89D0E0233F6E59A7(9, Param6, iParam9)) || (unk_0x89D0E0233F6E59A7(3, Param6, iParam9) && !bParam10)) || (unk_0x89D0E0233F6E59A7(6, Param6, iParam9) && !bParam10)) || unk_0x89D0E0233F6E59A7(0, Param6, iParam9)) || unk_0x89D0E0233F6E59A7(1, Param6, iParam9)) || unk_0x89D0E0233F6E59A7(23, Param6, iParam9)) || unk_0x89D0E0233F6E59A7(34, Param6, iParam9)) || unk_0x89D0E0233F6E59A7(14, Param6, iParam9)) || (unk_0x89D0E0233F6E59A7(30, Param6, iParam9) && !bParam10)) || (unk_0x89D0E0233F6E59A7(12, Param6, iParam9) && !bParam10)) || unk_0x89D0E0233F6E59A7(7, Param6, iParam9)) || (unk_0x89D0E0233F6E59A7(21, Param6, iParam9) && !bParam10)) || (unk_0x89D0E0233F6E59A7(18, Param6, iParam9) && !bParam10)) || unk_0x89D0E0233F6E59A7(15, Param6, iParam9)) || unk_0x89D0E0233F6E59A7(10, Param6, iParam9)) || unk_0x89D0E0233F6E59A7(27, Param6, iParam9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_38(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	int iVar0;
	bool bVar1;
	int iVar2[2];
	
	if (!unk_0x12DD4A0B247D9B4D(uLocal_63))
	{
		if (!bLocal_110)
		{
			if ((!unk_0xF68107C40359970C(iLocal_51[1]) && unk_0x55A0C756C4A8220C(iLocal_54, 0)) && !bLocal_121)
			{
				if (!bLocal_109)
				{
					if (!unk_0x12DD4A0B247D9B4D(uLocal_60[1]))
					{
						uLocal_60[1] = func_42(iLocal_51[1], 0, 145);
					}
				}
				else
				{
					if (unk_0x12DD4A0B247D9B4D(uLocal_60[1]))
					{
						unk_0xFFD8EB5462B07B59(&(uLocal_60[1]));
					}
					if (!unk_0x12DD4A0B247D9B4D(uLocal_59))
					{
						uLocal_59 = func_40(iLocal_54, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_60[1]))
				{
					unk_0xFFD8EB5462B07B59(&(uLocal_60[1]));
				}
				if (unk_0x12DD4A0B247D9B4D(uLocal_59))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_59);
				}
			}
		}
		else
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_60[0]) && unk_0xE8FCD9A6754A5FB2(uLocal_60[0]) != 119)
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_60[0]));
			}
			if (unk_0x12DD4A0B247D9B4D(uLocal_60[1]) && unk_0xE8FCD9A6754A5FB2(uLocal_60[1]) != 119)
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_60[1]));
			}
			if (unk_0x12DD4A0B247D9B4D(uLocal_59) && unk_0xE8FCD9A6754A5FB2(uLocal_59) != 119)
			{
				unk_0xFFD8EB5462B07B59(&uLocal_59);
			}
			if (unk_0x55A0C756C4A8220C(iLocal_54, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0xF68107C40359970C(iLocal_51[iVar0]))
					{
						if (unk_0xF6F5D18EF8EAB859(iLocal_51[iVar0], iLocal_54, 0))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0x12DD4A0B247D9B4D(uLocal_59))
				{
					uLocal_59 = func_40(iLocal_54, 1, 0);
				}
			}
			else if (unk_0x12DD4A0B247D9B4D(uLocal_59))
			{
				unk_0xFFD8EB5462B07B59(&uLocal_59);
			}
			if ((unk_0x55A0C756C4A8220C(iLocal_54, 0) && unk_0x12DD4A0B247D9B4D(uLocal_59)) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_54, 0))
				{
					if (unk_0x6BABDF7A460158CE(uLocal_59) != 0)
					{
						unk_0xFBBD8F124403B0F5(uLocal_59, 0);
					}
				}
				else if (unk_0x6BABDF7A460158CE(uLocal_59) != 255)
				{
					unk_0xFBBD8F124403B0F5(uLocal_59, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0xF68107C40359970C(iLocal_51[iVar0]) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					if (!unk_0x2791155FB0769FE5(uLocal_137) && !unk_0xD5C6B5E3B93A5EDC(iLocal_51[iVar0], 0))
					{
						if (!unk_0x51B334B227EC8042(iLocal_51[iVar0]) || unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(iLocal_51[iVar0], 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_48 == 8 && !unk_0xD5C6B5E3B93A5EDC(iLocal_51[iVar0], 0))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_48 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!unk_0x12DD4A0B247D9B4D(uLocal_60[iVar0]))
					{
						uLocal_60[iVar0] = func_42(iLocal_51[iVar0], 1, 145);
					}
				}
				else if (unk_0x12DD4A0B247D9B4D(uLocal_60[iVar0]))
				{
					unk_0xFFD8EB5462B07B59(&(uLocal_60[iVar0]));
				}
				iVar0++;
			}
			if (unk_0x2791155FB0769FE5(uLocal_137) && !bLocal_121)
			{
				if (!unk_0x12DD4A0B247D9B4D(uLocal_64))
				{
					uLocal_64 = func_32(uLocal_137);
				}
			}
			else if (unk_0x12DD4A0B247D9B4D(uLocal_64))
			{
				unk_0xFFD8EB5462B07B59(&uLocal_64);
			}
		}
	}
	else if ((unk_0xE5965CDF24F93A9F(iLocal_54) && unk_0xE5965CDF24F93A9F(iLocal_51[0])) && unk_0xE5965CDF24F93A9F(iLocal_51[1]))
	{
		if ((((((!unk_0x4D21C9FB671ED18F(iLocal_54) && unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_54, 100f, 100f, 30f, 0, 1, 0)) || (!unk_0x4D21C9FB671ED18F(iLocal_51[0]) && unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_51[0], 100f, 100f, 30f, 0, 1, 0))) || (!unk_0x4D21C9FB671ED18F(iLocal_51[1]) && unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_51[1], 100f, 100f, 30f, 0, 1, 0))) || unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_54, 50f, 50f, 20f, 0, 1, 0)) || unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_51[0], 50f, 50f, 20f, 0, 1, 0)) || unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_51[1], 50f, 50f, 20f, 0, 1, 0))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_63);
		}
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_60[0]))
	{
		unk_0x3430966AC4550BB9(uLocal_60[0], iLocal_122);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_60[1]))
	{
		unk_0x3430966AC4550BB9(uLocal_60[1], iLocal_122);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_59))
	{
		unk_0x3430966AC4550BB9(uLocal_59, iLocal_122);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_64))
	{
		unk_0x3430966AC4550BB9(uLocal_64, iLocal_122);
	}
	if (!iLocal_122)
	{
		if (bLocal_110 || iLocal_49 == 3)
		{
			iLocal_122 = 0;
		}
	}
}

int func_40(int iParam0, bool bParam1, bool bParam2)
{
	return func_41(iParam0, !bParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_33(unk_0x9315DBF7D972F07A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD809204F14EF9B68(uVar0, bParam1);
		}
		else
		{
			unk_0xA582EE8380437B1B(uVar0, 2);
		}
	}
	else if (unk_0x9044EDB8A7BF67B4(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_33(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_33(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_42(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_41(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(uVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

void func_43()
{
	func_45(9, bLocal_47);
	while (!func_44())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_231();
}

int func_44()
{
	return 1;
}

void func_45(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_64(iParam0))
	{
		func_63(iParam0, bParam1);
		if (!func_62(51))
		{
			func_58("RE_REWARD", 1, 0, 4000, 10000, func_61(), 0, 138, 0);
			func_57(51);
		}
		if (func_56(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_55(iParam0, bParam1) != 322)
		{
			func_47(func_55(iParam0, bParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_46(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_46(7);
			}
			else
			{
				func_46(1);
			}
		}
	}
}

void func_46(int iParam0)
{
	Global_113372 = iParam0;
}

void func_47(int iParam0, var uParam1, var uParam2)
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
		func_53((891 + iParam0), 1, -1);
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
		func_48();
	}
}

void func_48()
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
		func_52(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_78319)
		{
			if (func_51() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_49();
				}
			}
		}
	}
}

int func_49()
{
	if (func_50(0))
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

int func_50(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_51()
{
	return Global_31959;
}

int func_52(int iParam0, int iParam1)
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

void func_53(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_54();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

int func_54()
{
	return Global_1574918;
}

int func_55(int iParam0, bool bParam1)
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
			if (bParam1 == 1)
			{
				return 281;
			}
			if (bParam1 == 2)
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
			if (bParam1 == 1)
			{
				return 271;
			}
			if (bParam1 == 2)
			{
				return 272;
			}
			if (bParam1 == 3)
			{
				return 273;
			}
			if (bParam1 == 4)
			{
				return 274;
			}
			if (bParam1 == 5)
			{
				return 275;
			}
			if (bParam1 == 6)
			{
				return 276;
			}
			if (bParam1 == 7)
			{
				return 277;
			}
			if (bParam1 == 8)
			{
				return 278;
			}
			if (bParam1 == 9)
			{
				return 279;
			}
			if (bParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 246;
			}
			if (bParam1 == 2)
			{
				return 247;
			}
			if (bParam1 == 3)
			{
				return 248;
			}
			if (bParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return 260;
			}
			if (bParam1 == 2)
			{
				return 261;
			}
			if (bParam1 == 3)
			{
				return 262;
			}
			if (bParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 224;
			}
			if (bParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 244;
			}
			if (bParam1 == 2)
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
			if (bParam1 == 1)
			{
				return 221;
			}
			if (bParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return 213;
			}
			if (bParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 267;
			}
			if (bParam1 == 2)
			{
				return 268;
			}
			if (bParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 227;
			}
			if (bParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 257;
			}
			if (bParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 229;
			}
			if (bParam1 == 2)
			{
				return 230;
			}
			if (bParam1 == 3)
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

int func_56(int iParam0)
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

void func_57(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xCED9E32812D6C7C7(&(Global_113386.f_20410.f_150[iVar1]), bVar0);
	}
}

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_59(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_59(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_60();
	}
}

void func_60()
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

int func_61()
{
	func_17();
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

int func_62(int iParam0)
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

void func_63(int iParam0, bool bParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_113386.f_24995.f_8[iParam0]), bParam1);
}

int func_64(int iParam0)
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

int func_65()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x05CBA41180F5D521(), 64);
	uVar16 = func_66(Var0);
	return uVar16;
}

int func_66(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_67()
{
	if (bLocal_111)
	{
		if (unk_0x803592456AE579B3(uLocal_137))
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0)
{
	iLocal_48 = iParam0;
	iLocal_50 = 0;
}

int func_69()
{
	if (!unk_0x2791155FB0769FE5(uLocal_137))
	{
		if (bLocal_109)
		{
			if (unk_0x55A0C756C4A8220C(iLocal_54, 0))
			{
				if (!func_70(iLocal_54))
				{
					if (iLocal_465 == -1)
					{
						iLocal_465 = unk_0x320D1840B6DAA1CC();
					}
				}
				else if (iLocal_465 != -1)
				{
					iLocal_465 = -1;
				}
			}
		}
		if (!bLocal_109)
		{
			if (iLocal_130 != -1)
			{
				if (!unk_0xF68107C40359970C(iLocal_51[iLocal_130]))
				{
					if (!func_70(iLocal_54))
					{
						if (iLocal_465 == -1)
						{
							iLocal_465 = unk_0x320D1840B6DAA1CC();
						}
					}
					else if (iLocal_465 != -1)
					{
						iLocal_465 = -1;
					}
				}
			}
		}
		if (iLocal_465 != -1)
		{
			if ((unk_0x320D1840B6DAA1CC() - iLocal_465) > 3000)
			{
				unk_0xB3822DB3D538C8F3(&(iLocal_51[0]));
				unk_0xB3822DB3D538C8F3(&(iLocal_51[1]));
				unk_0xA5D8BA53953077C8(iLocal_54, -1000f, 1);
				unk_0x959E1626CBC7D38A(iLocal_54, 1, 0);
				unk_0x3D81769BEC61BFF8(&iLocal_54);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_465 != -1)
		{
			iLocal_465 = -1;
		}
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && unk_0x2A488C176D52CCA5(unk_0x70453F7DF40780A5(uLocal_137), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) < 150f)
		{
			return 1;
		}
		else if (!unk_0x4D21C9FB671ED18F(iParam0) && unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) < 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_507 == -1)
	{
		iLocal_507 = unk_0x320D1840B6DAA1CC();
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		switch (iLocal_50)
		{
			case 0:
				bLocal_110 = true;
				if (!unk_0xF68107C40359970C(iLocal_51[0]) || !unk_0xF68107C40359970C(iLocal_51[1]))
				{
					if (func_27() < 30f && !unk_0xF68107C40359970C(Local_140[3 /*10*/]))
					{
						func_4(&Local_140, cLocal_139, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0xF68107C40359970C(iLocal_51[iVar0]) && unk_0xE5965CDF24F93A9F(iLocal_56))
					{
						if ((iVar0 != iLocal_130 || bLocal_109) || !unk_0x099CAD293190F449(iLocal_56, iLocal_51[iVar0]))
						{
							unk_0x03A927199A2DFE46(iLocal_51[iVar0]);
							unk_0xA888F8CC04F25CC8(&uLocal_58);
							if (unk_0xD5C6B5E3B93A5EDC(iLocal_51[iVar0], 0))
							{
								if (iLocal_117)
								{
									if (unk_0xA7A5D14F877C9047("move_injured_generic"))
									{
										unk_0xABFC84F5C4943D7B(iLocal_51[iVar0], "move_injured_generic", 1048576000);
										iLocal_118[iVar0] = 1;
									}
								}
								unk_0xAB7639D658BBCCEE(0, 0, 256);
							}
							unk_0xC89EA639A6F338A6(0);
							if (iLocal_118[iVar0])
							{
								unk_0x83F5BCFFFBA26699(0, unk_0x5853B15F78E1A265(1000, 3000));
							}
							unk_0xC1A74225341AA9FB(0, unk_0xE2D3D51028F0428A(), 0, 16);
							unk_0xC963A45B50851768(uLocal_58);
							unk_0x8ACADA903FCAA42F(iLocal_51[iVar0], uLocal_58);
							unk_0x7461D7C5BA953BC7(&uLocal_58);
						}
						unk_0xBC12D08EE7559CCD(iLocal_51[iVar0], 6, 0);
						unk_0xBC12D08EE7559CCD(iLocal_51[iVar0], 0, 1);
						unk_0xBC12D08EE7559CCD(iLocal_51[iVar0], 1, 0);
						unk_0x71B502FC2E129665(iLocal_51[iVar0], 1);
						unk_0x7DCB4594ACF18DA7(iLocal_51[iVar0], 1);
						unk_0x50274A7EACA3133A(iLocal_51[iVar0], 1);
					}
					iVar0++;
				}
				if ((unk_0xE5965CDF24F93A9F(iLocal_56) && unk_0xE85F749F6D5C809E(iLocal_56)) && !unk_0xF68107C40359970C(iLocal_51[iLocal_130]))
				{
					unk_0x03A927199A2DFE46(iLocal_51[iLocal_130]);
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_50++;
				break;
			
			case 1:
				if (func_76(iLocal_130))
				{
					if (!unk_0xF68107C40359970C(iLocal_51[iLocal_130]))
					{
						unk_0x03A927199A2DFE46(iLocal_51[iLocal_130]);
						unk_0xA888F8CC04F25CC8(&uLocal_58);
						if (unk_0xD5C6B5E3B93A5EDC(iLocal_51[iLocal_130], 0))
						{
							unk_0xAB7639D658BBCCEE(0, 0, 256);
						}
						unk_0xC89EA639A6F338A6(0);
						unk_0xC1A74225341AA9FB(0, unk_0xE2D3D51028F0428A(), 0, 16);
						unk_0xC963A45B50851768(uLocal_58);
						unk_0x8ACADA903FCAA42F(iLocal_51[iLocal_130], uLocal_58);
						unk_0x7461D7C5BA953BC7(&uLocal_58);
					}
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!unk_0xF68107C40359970C(iLocal_51[0]) || !unk_0xF68107C40359970C(iLocal_51[1]))
				{
					if (unk_0xF68107C40359970C(iLocal_51[0]) && !unk_0xF68107C40359970C(iLocal_51[1]))
					{
						if (Local_140[3 /*10*/] != iLocal_51[1])
						{
							func_75(&Local_140, 3);
							func_75(&Local_140, 4);
							func_74(&Local_140, 3, iLocal_51[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_51)
					{
						if (!unk_0xF68107C40359970C(iLocal_51[iVar0]))
						{
							if ((iLocal_49 == 2 && !iLocal_123[iVar0]) && !unk_0x55B23FE400FCEA6B(iLocal_54, 0))
							{
								unk_0x776D1ABB5A5CC181(iLocal_51[iVar0], iLocal_54, unk_0xCACAD935C0BEE14F(iLocal_54, 0f, -4f, 0f), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (((unk_0x2791155FB0769FE5(uLocal_137) && !iLocal_123[iVar0]) && iLocal_49 == 3) && !bLocal_121)
							{
								unk_0x776D1ABB5A5CC181(iLocal_51[iVar0], iLocal_54, unk_0x70453F7DF40780A5(uLocal_137), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (bLocal_121)
							{
								if (iLocal_123[iVar0])
								{
									unk_0x5174A997F4970AE4(iLocal_51[iVar0], 0);
									iLocal_123[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x320D1840B6DAA1CC() - iLocal_500)) > unk_0xC4EAB25A108C2429(10000f, 15000f))
					{
						if (!func_73() && func_27() < 30f)
						{
							if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 4))
							{
								if (func_4(&Local_140, cLocal_139, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_500 = unk_0x320D1840B6DAA1CC();
								}
							}
						}
					}
					if (unk_0x55A0C756C4A8220C(iLocal_54, 0))
					{
						if (!bLocal_109)
						{
							if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_54, 0) && (unk_0x320D1840B6DAA1CC() - iLocal_507) > 5000)
							{
								if (func_27() > (30f + (30f / 10f)))
								{
									func_68(7);
								}
								if (func_27() > (30f / 2f) && !func_72())
								{
									if (!bLocal_109)
									{
										func_68(7);
									}
									else
									{
										func_68(6);
									}
								}
								if (iLocal_48 != 8)
								{
									iLocal_123[0] = 0;
									iLocal_123[1] = 0;
									iLocal_507 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0xF68107C40359970C(iLocal_51[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (unk_0x83666F9FB8FEBD4B() > iVar1 && iLocal_118[iVar0])
				{
					unk_0x03DD3DA99C7ED7D1(iLocal_51[iVar0], 1048576000);
					iLocal_118[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_72()
{
	int iVar0;
	
	if ((unk_0x320D1840B6DAA1CC() - iLocal_484) > 250)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0xF68107C40359970C(iLocal_51[iVar0]))
				{
					if (unk_0xD936DBC1D824A1BE(iLocal_51[iVar0], unk_0xE2D3D51028F0428A(), 19) && unk_0xD32EE22119FFF87D(iLocal_51[iVar0], unk_0xE2D3D51028F0428A()))
					{
						iLocal_481[iVar0] = 1;
					}
					else
					{
						iLocal_481[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_481[0] || iLocal_481[1]);
}

int func_73()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_74(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_75(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_76(int iParam0)
{
	bool bVar0;
	
	if (unk_0xE5965CDF24F93A9F(iLocal_56))
	{
		if (!unk_0xF68107C40359970C(iLocal_51[iParam0]))
		{
			if (unk_0x099CAD293190F449(iLocal_56, iLocal_51[iParam0]))
			{
				if (unk_0xFCF559C8631ABED7(iLocal_51[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0xD01FAFCE275C94F3(iLocal_51[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						unk_0xE6451C2F193342C7(iLocal_56, 1, 1);
						unk_0x4BDA5AFD88C085EB(&iLocal_56);
					}
				}
				else
				{
					unk_0x50274A7EACA3133A(iLocal_51[iParam0], 1);
					unk_0x49D97B076E3590AC(iLocal_51[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!unk_0xE5965CDF24F93A9F(iLocal_56) || (unk_0xE5965CDF24F93A9F(iLocal_56) && !unk_0x099CAD293190F449(iLocal_56, iLocal_51[iParam0])));
	if (bVar0)
	{
		if (!unk_0xF68107C40359970C(iLocal_51[iParam0]))
		{
			unk_0x50274A7EACA3133A(iLocal_51[iParam0], 0);
		}
	}
	return bVar0;
}

void func_77(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	struct<3> Var5[2];
	int iVar12;
	bool bVar13;
	var uVar14;
	
	if (unk_0x55A0C756C4A8220C(iLocal_54, 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		Var0 = { func_35(unk_0x37B78BEF7C4625D4(iLocal_54, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1))) };
		fVar3 = ((unk_0x82FE2343F8BDFF0B(iLocal_54) + unk_0xD12EFCAB87804BED(Var0.f_0, Var0.f_1)) + 45f);
		fVar4 = ((unk_0x82FE2343F8BDFF0B(iLocal_54) + unk_0xD12EFCAB87804BED(Var0.f_0, Var0.f_1)) - 45f);
		Var5[0 /*3*/] = { unk_0x6DB7FBD602C51670(unk_0x6B62510F212526DC(iLocal_54, 1), fVar3, 0f, 4.5f, 0f) };
		Var5[1 /*3*/] = { unk_0x6DB7FBD602C51670(unk_0x6B62510F212526DC(iLocal_54, 1), fVar4, 0f, 4.5f, 0f) };
		func_78(&fVar3);
		func_78(&fVar4);
		if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_501) > 2f)
		{
			bVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_51)
		{
			if (!unk_0xF68107C40359970C(iLocal_51[iVar12]))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(iLocal_51[iVar12], 1), Var5[iVar12 /*3*/]) > 2f)
				{
					bVar13 = true;
				}
			}
			iVar12++;
		}
		if (bVar13)
		{
			iVar12 = 0;
			while (iVar12 < iLocal_51)
			{
				if ((((((!unk_0xF68107C40359970C(iLocal_51[iVar12]) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A())) && unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(iLocal_51[iVar12], 1), Var5[iVar12 /*3*/]) > 2f) && (unk_0x320D1840B6DAA1CC() - iLocal_504[iVar12]) > 1000) && !unk_0xD5C6B5E3B93A5EDC(iLocal_51[iVar12], 0)) && !iLocal_481[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (bParam1)
					{
						if (func_72())
						{
							Local_501 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
						}
						unk_0xA888F8CC04F25CC8(&uVar14);
						if (func_72() || func_38(Local_501))
						{
							unk_0x98DB2ABD53B8D70B(0, Var5[iVar12 /*3*/], unk_0xE2D3D51028F0428A(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), -1, 1);
						}
						else
						{
							unk_0x642C58F4CA259448(0, Var5[iVar12 /*3*/], Local_501, 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
							unk_0x2EA72CDBFACD9E92(0, Local_501, -1, 1, 0);
						}
						unk_0xC963A45B50851768(uVar14);
						unk_0x8ACADA903FCAA42F(iLocal_51[iVar12], uVar14);
						unk_0x7461D7C5BA953BC7(&uVar14);
					}
					iLocal_504[iVar12] = unk_0x320D1840B6DAA1CC();
				}
				iVar12++;
			}
		}
	}
}

void func_78(float fParam0)
{
	if (*fParam0 > 180f)
	{
		*fParam0 = (*fParam0 - 360f);
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 = (*fParam0 + 360f);
	}
}

void func_79(int iParam0)
{
	float fVar0;
	
	if (unk_0x55A0C756C4A8220C(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				if (!bLocal_109)
				{
					unk_0x50274A7EACA3133A(iParam0, 1);
					unk_0x03A927199A2DFE46(iParam0);
					Local_485 = { unk_0x96EDA732FD9DC0AF(iLocal_54, 0) };
					Local_488 = { unk_0x63A8BF5E6C2BF85C(iLocal_54, 2) };
					Local_491 = { unk_0x3DBAB8E11699EAEE("random@security_van", "sec_case_into_van_panic", Local_485, Local_488, 0, 2) };
					if (((!unk_0xF68107C40359970C(iLocal_51[1]) && !unk_0x55B23FE400FCEA6B(iLocal_51[1], 0)) && !unk_0xF68107C40359970C(iLocal_51[0])) && !unk_0x55B23FE400FCEA6B(iLocal_51[0], 0))
					{
						if (func_27() < 20f)
						{
							if (bLocal_110)
							{
								func_4(&Local_140, cLocal_139, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0x2791155FB0769FE5(uLocal_137))
						{
							if (bLocal_110)
							{
								unk_0x7D1424753688EE7A(iParam0, unk_0x70453F7DF40780A5(uLocal_137), 2f, -1, 0.25f, 0, 1193033728);
							}
							else
							{
								unk_0x7D1424753688EE7A(iParam0, unk_0x70453F7DF40780A5(uLocal_137), 1f, -1, 0.25f, 0, 1193033728);
							}
							iLocal_50++;
						}
						else
						{
							func_85(iParam0);
							iLocal_50 = 2;
						}
					}
					else if (!unk_0xF68107C40359970C(iParam0))
					{
						if (unk_0x2791155FB0769FE5(uLocal_137))
						{
							unk_0x7D1424753688EE7A(iParam0, unk_0x70453F7DF40780A5(uLocal_137), 2f, -1, 0.25f, 0, 1193033728);
							iLocal_50++;
						}
						else
						{
							func_85(iParam0);
							iLocal_50 = 2;
						}
					}
				}
				else
				{
					iLocal_50 = 4;
				}
				break;
			
			case 1:
				if (!unk_0xF68107C40359970C(iParam0) && unk_0x2791155FB0769FE5(uLocal_137))
				{
					if ((unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iParam0, 1), unk_0x70453F7DF40780A5(uLocal_137), 1) < 2f && !unk_0x32DCDA1B2F8A0694(iParam0)) && (unk_0x320D1840B6DAA1CC() - iLocal_136) > 3000)
					{
						if (unk_0x5007A91D57C39FFC(iParam0, 4))
						{
							unk_0x202B28FEABEC4034(iParam0, joaat("weapon_unarmed"), 1);
						}
						unk_0x451F33099166532A(uLocal_137);
						func_85(iParam0);
						unk_0x202B28FEABEC4034(iParam0, joaat("weapon_unarmed"), 1);
						bLocal_111 = false;
						iLocal_130 = iLocal_129;
						iLocal_50++;
					}
				}
				break;
			
			case 2:
				if (!unk_0xF68107C40359970C(iParam0) && unk_0x55A0C756C4A8220C(iLocal_54, 0))
				{
					if (unk_0x174CED88B97C78D9(iParam0, joaat("script_task_follow_nav_mesh_to_coord")) != 1)
					{
						if (bLocal_110)
						{
							unk_0x7D1424753688EE7A(iParam0, Local_491, 2f, -1, 0.1f, 512, Local_488.f_2);
						}
						else
						{
							unk_0x7D1424753688EE7A(iParam0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
						}
						iLocal_50++;
					}
				}
				break;
			
			case 3:
				if (!unk_0xF68107C40359970C(iParam0))
				{
					if (unk_0x2791155FB0769FE5(uLocal_137))
					{
						iLocal_50 = 0;
					}
					else
					{
						fVar0 = unk_0x82FE2343F8BDFF0B(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (Local_488.f_2 > 180f)
						{
							Local_488.f_2 = (Local_488.f_2 - 360f);
						}
						if (Local_488.f_2 <= -180f)
						{
							Local_488.f_2 = (Local_488.f_2 + 360f);
						}
						if (unk_0x2A488C176D52CCA5(Local_491, unk_0x6B62510F212526DC(iParam0, 1)) < 0.3f)
						{
							if (unk_0x48053974ED6F63CE((fVar0 - Local_488.f_2)) < 15f)
							{
								unk_0xBA002E17C13F9DD5(iParam0, -1056964608);
								unk_0x03A927199A2DFE46(iParam0);
								bLocal_496 = true;
								iLocal_494 = unk_0x8F5F4164BF5FB513(Local_485, Local_488, 2);
								if (bLocal_110)
								{
									unk_0x950B26F4C891073F(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0xAA8557AFE4A4A184(iLocal_54, iLocal_494, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0x950B26F4C891073F(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0xAA8557AFE4A4A184(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0xEB087B19F63AB053(iParam0, 0, 0);
								iLocal_50++;
							}
						}
						else if (unk_0x4D21C9FB671ED18F(iParam0) && !unk_0x0318E2EE6FB4563F(Local_485, 2f))
						{
							unk_0xC64B6E13A6A7F517(iParam0, Local_485, 1, 0, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0xCE2C78E9FC0B01E3(iLocal_494))
				{
					if (bLocal_110)
					{
						fLocal_508 = 0.42f;
					}
					else
					{
						fLocal_508 = 0.3893f;
					}
					if (bLocal_110)
					{
						fLocal_509 = 0.52f;
					}
					else
					{
						fLocal_509 = 0.546243f;
					}
					if (!bLocal_109)
					{
						if ((unk_0xE5965CDF24F93A9F(iLocal_56) && unk_0x099CAD293190F449(iLocal_56, iParam0)) && unk_0x54DE1614490C2A83(iLocal_494) > fLocal_508)
						{
							if (!unk_0x099CAD293190F449(iLocal_56, iLocal_54))
							{
								unk_0xE6451C2F193342C7(iLocal_56, 1, 1);
								unk_0x959E1626CBC7D38A(iLocal_56, 0, 0);
								unk_0x9A97DC6DBC7B223D(iLocal_56, iLocal_54, 0, unk_0x37B78BEF7C4625D4(iLocal_54, unk_0x6B62510F212526DC(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0x54DE1614490C2A83(iLocal_494) > fLocal_509)
					{
						unk_0xA5D8BA53953077C8(iLocal_54, -4f, 1);
						unk_0x03A927199A2DFE46(iParam0);
						if (unk_0xE5965CDF24F93A9F(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0xCAA02C32EC0C2462(iLocal_54, 2, 1);
							unk_0xCAA02C32EC0C2462(iLocal_54, 3, 1);
							unk_0x50274A7EACA3133A(iParam0, 0);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0xCE2C78E9FC0B01E3(iLocal_494) && unk_0x54DE1614490C2A83(iLocal_494) > fLocal_509) || !unk_0xCE2C78E9FC0B01E3(iLocal_494))
				{
					if (!bLocal_110)
					{
						if (!unk_0xF68107C40359970C(iLocal_51[0]))
						{
							unk_0xB486640392EC50BB(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_50++;
				}
				break;
			
			case 6:
				if (unk_0x55A0C756C4A8220C(iLocal_54, 0))
				{
					if (bLocal_110)
					{
						func_68(6);
					}
					else
					{
						func_68(4);
					}
				}
				else
				{
					func_68(8);
				}
				break;
			}
	}
	if (!unk_0x55A0C756C4A8220C(iLocal_54, 0))
	{
		if (!unk_0xF68107C40359970C(iLocal_51[0]) || !unk_0xF68107C40359970C(iLocal_51[1]))
		{
			func_68(8);
		}
	}
	if ((!unk_0xF68107C40359970C(iLocal_51[0]) || !unk_0xF68107C40359970C(iLocal_51[1])) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (!bLocal_109)
		{
			if ((((((func_27() < 10f && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6)) && func_72()) || ((func_27() < 20f && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6)) && unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))) || (func_27() < 5f && bLocal_110)) || (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && func_80(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))) || ((!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0xE5965CDF24F93A9F(unk_0x9993EF7FDBCDB632())) && func_80(unk_0x9993EF7FDBCDB632())))
			{
				func_68(8);
			}
		}
	}
	if (iLocal_48 != 7)
	{
		if (bLocal_109)
		{
			if (unk_0xCE2C78E9FC0B01E3(iLocal_494))
			{
				unk_0xA5D8BA53953077C8(iLocal_54, -8f, 1);
			}
		}
		if (!unk_0xF68107C40359970C(iParam0))
		{
			unk_0x50274A7EACA3133A(iParam0, 0);
		}
	}
	if ((unk_0x55A0C756C4A8220C(iLocal_54, 0) && iLocal_48 != 7) && unk_0xCE2C78E9FC0B01E3(iLocal_494))
	{
		unk_0xA5D8BA53953077C8(iLocal_54, -8f, 1);
	}
}

int func_80(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var4;
	struct<3> Var7[4];
	struct<3> Var20[4];
	struct<3> Var33[4];
	struct<3> Var46[4];
	var uVar59;
	float fVar72;
	float fVar73;
	
	iVar0 = 0;
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0xE5965CDF24F93A9F(iLocal_54))
	{
		uVar59 = 4;
		unk_0xB38EF75835FAF667(unk_0x15CAA6D7B11F1A7C(iParam0), &Var1, &Var4);
		Var7[0 /*3*/] = { unk_0xCACAD935C0BEE14F(iParam0, Var1.f_0, Var4.f_1, 0f) };
		Var7[1 /*3*/] = { unk_0xCACAD935C0BEE14F(iParam0, Var4.f_0, Var4.f_1, 0f) };
		Var7[2 /*3*/] = { unk_0xCACAD935C0BEE14F(iParam0, Var4.f_0, Var1.f_1, 0f) };
		Var7[3 /*3*/] = { unk_0xCACAD935C0BEE14F(iParam0, Var1.f_0, Var1.f_1, 0f) };
		fVar72 = -3.7f;
		fVar73 = 1.35f;
		Var20[0 /*3*/] = { unk_0xCACAD935C0BEE14F(iLocal_54, (-fVar73 - 0.25f), fVar72, 0f) };
		Var20[1 /*3*/] = { unk_0xCACAD935C0BEE14F(iLocal_54, (fVar73 + 0.25f), fVar72, 0f) };
		Var20[2 /*3*/] = { unk_0xCACAD935C0BEE14F(iLocal_54, (fVar73 - 0.25f), (fVar72 - 1.55f), 0f) };
		Var20[3 /*3*/] = { unk_0xCACAD935C0BEE14F(iLocal_54, (-fVar73 + 0.25f), (fVar72 - 1.55f), 0f) };
		Var33[0 /*3*/] = { unk_0xCACAD935C0BEE14F(iLocal_54, -fVar73, 0.5f, 0f) };
		Var33[1 /*3*/] = { unk_0xCACAD935C0BEE14F(iLocal_54, (-fVar73 - 0.75f), 0.5f, 0f) };
		Var33[2 /*3*/] = { unk_0xCACAD935C0BEE14F(iLocal_54, (-fVar73 - 0.75f), 1.5f, 0f) };
		Var33[3 /*3*/] = { unk_0xCACAD935C0BEE14F(iLocal_54, -fVar73, 1.5f, 0f) };
		Var46[0 /*3*/] = { unk_0xCACAD935C0BEE14F(iLocal_54, fVar73, 0.5f, 0f) };
		Var46[1 /*3*/] = { unk_0xCACAD935C0BEE14F(iLocal_54, (fVar73 + 0.75f), 0.5f, 0f) };
		Var46[2 /*3*/] = { unk_0xCACAD935C0BEE14F(iLocal_54, (fVar73 + 0.75f), 1.5f, 0f) };
		Var46[3 /*3*/] = { unk_0xCACAD935C0BEE14F(iLocal_54, fVar73, 1.5f, 0f) };
		if (!bLocal_109)
		{
			if (func_81(&Var20, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0xF68107C40359970C(iLocal_51[0]) && !unk_0xF6F5D18EF8EAB859(iLocal_51[0], iLocal_54, 1))
		{
			if (func_81(&Var33, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0xF68107C40359970C(iLocal_51[1]) && !unk_0xF6F5D18EF8EAB859(iLocal_51[1], iLocal_54, 1))
		{
			if (func_81(&Var46, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_81(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (func_82(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_82(struct<3> Param0, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11, var uParam12)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = Param0.f_0;
	fVar1 = Param3.f_0;
	fVar2 = Param6.f_0;
	fVar3 = Param9.f_0;
	fVar4 = Param0.f_1;
	fVar5 = Param3.f_1;
	fVar6 = Param6.f_1;
	fVar7 = Param9.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_84(fVar0, fVar1) || fVar11 > func_83(fVar0, fVar1)) || fVar11 < func_84(fVar2, fVar3)) || fVar11 > func_83(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_84(fVar4, fVar5) || fVar12 > func_83(fVar4, fVar5)) || fVar12 < func_84(fVar6, fVar7)) || fVar12 > func_83(fVar6, fVar7))
	{
		return 0;
	}
	*uParam12 = fVar11;
	uParam12->f_1 = fVar12;
	uParam12->f_2 = Param0.f_2;
	return 1;
}

float func_83(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_84(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_85(int iParam0)
{
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (!unk_0xE5965CDF24F93A9F(iLocal_56))
		{
			iLocal_56 = unk_0x0E536D72AB30F4C8(iLocal_105, Local_77, 1, 1, 0);
			unk_0xFEF687AF74EEDCC2(iLocal_56, 0);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_56))
		{
			unk_0x9A97DC6DBC7B223D(iLocal_56, iParam0, unk_0xB897FCFCFA664B38(iParam0, 28422), Local_90, Local_93, 1, 0, 0, 0, 2, 1, 0);
		}
	}
}

void func_86()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	switch (iLocal_50)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0xF68107C40359970C(iLocal_51[iVar0]))
				{
					unk_0x50274A7EACA3133A(iLocal_51[iVar0], 1);
				}
				iVar0++;
			}
			bLocal_110 = true;
			if (unk_0x55A0C756C4A8220C(iLocal_54, 0))
			{
				if (unk_0xE5965CDF24F93A9F(func_89()))
				{
					if (!unk_0xF68107C40359970C(func_89()))
					{
						if (unk_0xAB793EA186AB8DAA(iLocal_54, -1, 0) != func_89() && unk_0x7158135695FAE89D(iLocal_54, -1, 0))
						{
							unk_0xB486640392EC50BB(func_89(), iLocal_54, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0xF68107C40359970C(iLocal_51[1]) && func_89() != iLocal_51[1])
				{
					if (unk_0xAB793EA186AB8DAA(iLocal_54, 0, 0) != iLocal_51[1] && unk_0x7158135695FAE89D(iLocal_54, 0, 0))
					{
						unk_0xB486640392EC50BB(iLocal_51[1], iLocal_54, -1, 0, 1073741824, 1, 0);
					}
				}
				iLocal_50++;
			}
			else
			{
				func_68(8);
			}
			break;
		
		case 1:
			if (func_88())
			{
				if (unk_0xE5965CDF24F93A9F(func_89()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					unk_0xB69D13E19147910F(func_89(), iLocal_54, unk_0xE2D3D51028F0428A(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 2:
			if (func_87())
			{
				if (unk_0xE5965CDF24F93A9F(func_89()))
				{
					unk_0xFE5A02CF2178B6A8(func_89(), iLocal_54, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 3:
			if (unk_0x55A0C756C4A8220C(iLocal_54, 0))
			{
				if (unk_0x207D53F9E0190691(iLocal_54) < 2f)
				{
					func_68(8);
				}
			}
			break;
	}
	if ((unk_0xE5965CDF24F93A9F(iLocal_54) && unk_0xE5965CDF24F93A9F(unk_0xAB793EA186AB8DAA(iLocal_54, -1, 0))) && (unk_0x55B23FE400FCEA6B(unk_0xAB793EA186AB8DAA(iLocal_54, -1, 0), 0) || unk_0xF68107C40359970C(unk_0xAB793EA186AB8DAA(iLocal_54, -1, 0))))
	{
		iVar1 = 0;
		if (unk_0xAB793EA186AB8DAA(iLocal_54, -1, 0) == iLocal_51[0])
		{
			iVar1 = 1;
		}
		if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(iLocal_54, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 100f)
		{
			if (!unk_0xF68107C40359970C(iLocal_51[iVar1]) && unk_0x174CED88B97C78D9(iLocal_51[iVar1], joaat("script_task_perform_sequence")) != 1)
			{
				unk_0xDC6110E0F8FF9DA0(iLocal_51[iVar1], 2, 1);
				unk_0xA888F8CC04F25CC8(&uVar2);
				unk_0x8625186D3A8DDD7A(0, iLocal_54, 0);
				unk_0xB69D13E19147910F(0, iLocal_54, unk_0xE2D3D51028F0428A(), 8, 50f, 786484, 100f, 5f, 1);
				unk_0xC963A45B50851768(uVar2);
				unk_0x8ACADA903FCAA42F(iLocal_51[iVar1], uVar2);
				unk_0x7461D7C5BA953BC7(&uVar2);
			}
		}
		else
		{
			func_68(8);
		}
	}
	if (((((((!unk_0x55A0C756C4A8220C(iLocal_54, 0) || unk_0x2791155FB0769FE5(uLocal_137)) || iLocal_49 == 3) || unk_0xF798DCF92C74B531(iLocal_54, 0, 7000)) || unk_0xF798DCF92C74B531(iLocal_54, 3, 30000)) || unk_0xF798DCF92C74B531(iLocal_54, 2, 30000)) || unk_0xF798DCF92C74B531(iLocal_54, 1, 40000)) || (iLocal_50 > 1 && !func_88()))
	{
		if (!func_88())
		{
		}
		func_68(8);
	}
}

int func_87()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_54))
	{
		if (!unk_0x55B23FE400FCEA6B(iLocal_54, 0))
		{
			if (((((unk_0x0CF63873D754B965(iLocal_54) < 300 || unk_0x20E1198E4672F72D(iLocal_54) < 200f) || (unk_0xB4C63F21D1DC6C23(iLocal_54, 0, 0) && unk_0xB4C63F21D1DC6C23(iLocal_54, 1, 0))) || (unk_0xB4C63F21D1DC6C23(iLocal_54, 4, 0) && unk_0xB4C63F21D1DC6C23(iLocal_54, 5, 0))) || (unk_0xB4C63F21D1DC6C23(iLocal_54, 0, 0) && unk_0xB4C63F21D1DC6C23(iLocal_54, 4, 0))) || (unk_0xB4C63F21D1DC6C23(iLocal_54, 1, 0) && unk_0xB4C63F21D1DC6C23(iLocal_54, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88()
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x55A0C756C4A8220C(iLocal_54, 0))
	{
		if (!unk_0xF68107C40359970C(iLocal_51[0]) && !unk_0x55B23FE400FCEA6B(iLocal_51[0], 0))
		{
			if (!unk_0xF6F5D18EF8EAB859(iLocal_51[0], iLocal_54, 0))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0xF68107C40359970C(iLocal_51[1]) && !unk_0x55B23FE400FCEA6B(iLocal_51[1], 0))
		{
			if (!unk_0xF6F5D18EF8EAB859(iLocal_51[1], iLocal_54, 0))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_89()
{
	if (!unk_0xF68107C40359970C(iLocal_51[0]) && !unk_0x55B23FE400FCEA6B(iLocal_51[0], 0))
	{
		return iLocal_51[0];
	}
	if (!unk_0xF68107C40359970C(iLocal_51[1]) && !unk_0x55B23FE400FCEA6B(iLocal_51[1], 0))
	{
		return iLocal_51[1];
	}
	return 0;
}

void func_90()
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_50)
	{
		case 0:
			if (!bLocal_109)
			{
				if (unk_0xE5965CDF24F93A9F(iLocal_56) && unk_0xE85F749F6D5C809E(iLocal_56))
				{
					unk_0xE6451C2F193342C7(iLocal_56, 1, 1);
				}
			}
			if ((!unk_0xF68107C40359970C(iLocal_51[0]) || !unk_0xF68107C40359970C(iLocal_51[1])) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (func_27() < 20f)
				{
					func_4(&Local_140, cLocal_139, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0xF68107C40359970C(iLocal_51[iVar0]))
					{
						unk_0xBC12D08EE7559CCD(iLocal_51[iVar0], 17, 1);
						unk_0xDC6110E0F8FF9DA0(iLocal_51[iVar0], 128, 1);
						unk_0xDC6110E0F8FF9DA0(iLocal_51[iVar0], 16, 1);
						unk_0xBC12D08EE7559CCD(iLocal_51[iVar0], 1, 0);
						unk_0xA888F8CC04F25CC8(&uVar1);
						if (unk_0xD5C6B5E3B93A5EDC(iLocal_51[iVar0], 1))
						{
							unk_0xAB7639D658BBCCEE(iLocal_51[iVar0], 0, 256);
						}
						unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
						unk_0xC963A45B50851768(uVar1);
						unk_0x8ACADA903FCAA42F(iLocal_51[iVar0], uVar1);
						unk_0x7461D7C5BA953BC7(&uVar1);
					}
					iVar0++;
				}
			}
			bLocal_113 = true;
			iLocal_50++;
			break;
		
		case 1:
			if (unk_0x55A0C756C4A8220C(iLocal_54, 0))
			{
				if (func_91(iLocal_54, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					iLocal_50++;
				}
			}
			break;
	}
}

int func_91(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xADD893BD545BE5FC(iParam0) + 1;
	if (iParam4 || !unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_93(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xE5965CDF24F93A9F(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xE2D3D51028F0428A())
				{
				}
				else if (bParam2)
				{
					if (unk_0x65FAB09725E2FE75(iVar2))
					{
						iVar3 = unk_0xFF65CDB0EB7ACE71(iVar2);
						if (((!unk_0xF68107C40359970C(iVar2) && iVar3 != func_10()) && func_92(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0xC378B7F0D175A5B0(unk_0xFF65CDB0EB7ACE71(iVar2)) == 0)
							{
								if (!bParam5)
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
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xF68107C40359970C(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_92(int iParam0, bool bParam1, bool bParam2)
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

int func_93(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x7158135695FAE89D(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xAB793EA186AB8DAA(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xE5965CDF24F93A9F(iVar0) && !unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			iVar0 = unk_0x48512AC2C4218836(iParam0, iParam1);
			if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				if (unk_0x174CED88B97C78D9(iVar0, joaat("script_task_leave_vehicle")) == 1 || unk_0x174CED88B97C78D9(iVar0, joaat("script_task_leave_any_vehicle")) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(iParam0, 0), unk_0x6B62510F212526DC(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_94()
{
	if (!unk_0xF68107C40359970C(iLocal_51[0]) && !unk_0xF68107C40359970C(iLocal_51[1]))
	{
		switch (iLocal_50)
		{
			case 0:
				if (func_4(&Local_140, cLocal_139, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0xE5965CDF24F93A9F(iLocal_56) && unk_0xE85F749F6D5C809E(iLocal_56))
					{
						if (!unk_0x099CAD293190F449(iLocal_56, iLocal_51[0]))
						{
							func_95(0);
						}
						else
						{
							unk_0x03A927199A2DFE46(iLocal_51[0]);
						}
						if (!unk_0x099CAD293190F449(iLocal_56, iLocal_51[1]))
						{
							func_95(1);
						}
						else
						{
							unk_0x03A927199A2DFE46(iLocal_51[1]);
						}
						iLocal_50++;
					}
					else
					{
						func_95(0);
						func_95(1);
						iLocal_50 = 2;
					}
				}
				break;
			
			case 1:
				if (func_76(iLocal_130))
				{
					if (!unk_0xF68107C40359970C(iLocal_51[iLocal_130]))
					{
						func_95(iLocal_130);
					}
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!func_73())
				{
					if (func_4(&Local_140, cLocal_139, "RESEC_CAR2", 8, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_50++;
					}
				}
				break;
			
			case 3:
				if ((unk_0x83666F9FB8FEBD4B() > 12000 && !func_73()) && func_4(&Local_140, cLocal_139, "RESEC_CAR3", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_50++;
				}
				break;
			
			case 4:
				if ((unk_0x83666F9FB8FEBD4B() > 7000 && !func_73()) && func_4(&Local_140, cLocal_139, "RESEC_CAR4", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_68(8);
				}
				break;
			}
	}
	if (iLocal_50 > 0)
	{
		func_77(-1, 1);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_55))
	{
		if (!unk_0x55B23FE400FCEA6B(iLocal_55, 0) && unk_0x55A0C756C4A8220C(iLocal_54, 0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(iLocal_55, 1), unk_0x6B62510F212526DC(iLocal_54, 1)) > 10f)
			{
				func_68(7);
			}
		}
		if ((unk_0x55B23FE400FCEA6B(iLocal_55, 0) || !unk_0x55A0C756C4A8220C(iLocal_55, 0)) || (!unk_0xEFD1745E9D77E91C(iLocal_55, 1119092736) && !unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_55, 1)))
		{
			if (!func_80(iLocal_55))
			{
				func_68(7);
			}
			else
			{
				func_68(8);
			}
		}
	}
	if (!unk_0xF68107C40359970C(iLocal_51[0]) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x0747E45CFF1F74AA(iLocal_51[0], unk_0xE2D3D51028F0428A(), 1))
		{
			func_68(8);
		}
	}
	if (!unk_0xF68107C40359970C(iLocal_51[1]) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x0747E45CFF1F74AA(iLocal_51[1], unk_0xE2D3D51028F0428A(), 1))
		{
			func_68(8);
		}
	}
	if (unk_0x55A0C756C4A8220C(iLocal_54, 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (iLocal_116)
		{
			func_68(8);
		}
	}
	if (bLocal_121)
	{
		func_68(8);
	}
	if ((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && func_72()) && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 7))
	{
		func_68(2);
	}
	if (!unk_0x55A0C756C4A8220C(iLocal_54, 0))
	{
		func_68(5);
	}
}

void func_95(int iParam0)
{
	if (!unk_0xF68107C40359970C(iLocal_51[iParam0]) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0x03A927199A2DFE46(iLocal_51[iParam0]);
		unk_0xA888F8CC04F25CC8(&uLocal_58);
		if (unk_0xD5C6B5E3B93A5EDC(iLocal_51[iParam0], 0))
		{
			unk_0xAB7639D658BBCCEE(0, 0, 256);
		}
		unk_0xC89EA639A6F338A6(0);
		unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 0, 2);
		unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), -1, 0);
		unk_0xC963A45B50851768(uLocal_58);
		unk_0x8ACADA903FCAA42F(iLocal_51[iParam0], uLocal_58);
		unk_0x7461D7C5BA953BC7(&uLocal_58);
		if (iLocal_131 == 0)
		{
			iLocal_131 = unk_0xAA8EA67D77D37C61(118, unk_0x6B62510F212526DC(iLocal_51[iParam0], 1), -1082130432);
		}
	}
}

void func_96()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_50)
	{
		case 0:
			if (!unk_0xF68107C40359970C(iLocal_51[0]))
			{
				unk_0x50274A7EACA3133A(iLocal_51[0], 1);
			}
			if (!unk_0xF68107C40359970C(iLocal_51[1]))
			{
				unk_0x50274A7EACA3133A(iLocal_51[1], 1);
			}
			if (func_103())
			{
				if (func_4(&Local_140, cLocal_139, "RESEC_ATT1", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_68(8);
				}
			}
			else if ((!unk_0xF68107C40359970C(iLocal_51[0]) && !unk_0xF68107C40359970C(iLocal_51[1])) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (func_102() || func_101())
				{
					func_4(&Local_140, cLocal_139, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 4))
				{
					func_4(&Local_140, cLocal_139, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0);
				}
				unk_0xC1B1E9A034A63A62(0);
				if (unk_0xE5965CDF24F93A9F(iLocal_56) && unk_0xE85F749F6D5C809E(iLocal_56))
				{
					if (!unk_0x099CAD293190F449(iLocal_56, iLocal_51[0]))
					{
						func_95(0);
					}
					else
					{
						unk_0x03A927199A2DFE46(iLocal_51[0]);
					}
					if (!unk_0x099CAD293190F449(iLocal_56, iLocal_51[1]))
					{
						func_95(1);
					}
					else
					{
						unk_0x03A927199A2DFE46(iLocal_51[1]);
					}
					iLocal_50++;
				}
				else
				{
					func_95(0);
					func_95(1);
					iLocal_50 = 2;
				}
			}
			break;
		
		case 1:
			if (func_76(iLocal_130))
			{
				if (!unk_0xF68107C40359970C(iLocal_51[iLocal_130]))
				{
					func_95(iLocal_130);
				}
				iLocal_50++;
			}
			break;
		
		case 2:
			if (!func_100())
			{
				if (!func_99(iLocal_54, 1000) && unk_0x83666F9FB8FEBD4B() > 10000)
				{
					bVar0 = true;
				}
				else if (unk_0x83666F9FB8FEBD4B() > 7000)
				{
					unk_0xC1B1E9A034A63A62(7000);
				}
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (func_102())
					{
						bVar0 = true;
					}
				}
				if (unk_0x83666F9FB8FEBD4B() > 10000)
				{
					if (func_101())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_51)
				{
					if (!func_99(iLocal_51[iVar1], 1000) && (func_27() < 2f && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0x55B23FE400FCEA6B(iLocal_51[iVar1], 0))
					{
						if (unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_51[iVar1]) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_51[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_77(-1, 1);
				if (IntToFloat((unk_0x320D1840B6DAA1CC() - iLocal_500)) > unk_0xC4EAB25A108C2429(5000f, 7500f))
				{
					if (!func_73())
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_500 = unk_0x320D1840B6DAA1CC();
						}
					}
				}
				if (bVar0)
				{
					func_97();
					func_68(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_51)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && unk_0xE5965CDF24F93A9F(iLocal_51[iVar2]))
		{
			if ((unk_0xF68107C40359970C(iLocal_51[iVar2]) || unk_0x55B23FE400FCEA6B(iLocal_51[iVar2], 0)) && unk_0x0747E45CFF1F74AA(iLocal_51[iVar2], unk_0xE2D3D51028F0428A(), 0))
			{
				func_68(8);
			}
		}
		iVar2++;
	}
	if ((unk_0xF68107C40359970C(iLocal_51[0]) || unk_0xF68107C40359970C(iLocal_51[1])) || bLocal_121)
	{
		func_68(8);
	}
	if ((unk_0x55A0C756C4A8220C(iLocal_54, 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A())) && func_72())
	{
		if (unk_0x0747E45CFF1F74AA(iLocal_54, unk_0xE2D3D51028F0428A(), 1))
		{
			func_68(8);
		}
	}
	if (!unk_0x55A0C756C4A8220C(iLocal_54, 0))
	{
		func_68(5);
	}
	if ((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6)) && unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
	{
		func_68(8);
	}
	if (func_27() > 20f || ((!iLocal_481[0] && !iLocal_481[1]) && func_27() > 5f))
	{
		func_68(7);
	}
}

void func_97()
{
	Global_20471 = 0;
	func_98();
}

void func_98()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
	}
}

int func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xE5965CDF24F93A9F(iParam0))
		{
			if ((unk_0x9044EDB8A7BF67B4(iParam0) && !unk_0xF68107C40359970C(unk_0x28AA31872A651BC7(iParam0))) || (unk_0x04D9F44466CBF3CA(iParam0) && unk_0x55A0C756C4A8220C(unk_0x31EB55FAEEE9C0F5(iParam0), 0)))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) > fLocal_498)
				{
					iVar0 = 1;
				}
				if ((unk_0x320D1840B6DAA1CC() - iLocal_499) > iParam1)
				{
					fLocal_498 = unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1));
					iLocal_499 = unk_0x320D1840B6DAA1CC();
				}
			}
		}
	}
	return iVar0;
}

int func_100()
{
	if (unk_0x55A0C756C4A8220C(iLocal_54, 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (!unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_54, 20f, 20f, 5f, 0, 1, 0) && !unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101()
{
	int iVar0;
	
	if (unk_0x55A0C756C4A8220C(iLocal_54, 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), unk_0xCACAD935C0BEE14F(iLocal_54, 0f, 1.7532f, 0.5984f), unk_0xCACAD935C0BEE14F(iLocal_54, 0f, 3.3477f, 3.5984f), 2.8f, 0, 1, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0xF68107C40359970C(iLocal_51[iVar0]))
			{
				if ((!unk_0xF6F5D18EF8EAB859(iLocal_51[iVar0], iLocal_54, 0) && unk_0x8465E2AB4423B436(unk_0xE2D3D51028F0428A(), iLocal_54)) && unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_51[iVar0], 1)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_102()
{
	if (unk_0x55A0C756C4A8220C(iLocal_54, 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A()) == iLocal_54)
		{
			if (unk_0x65AFECBE42149B44(unk_0xE2D3D51028F0428A()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_103()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if ((!unk_0xF68107C40359970C(iLocal_51[0]) && unk_0x77A43AFA9AAEC041(iLocal_51[0], unk_0xE2D3D51028F0428A(), 20f, 20f, 5f, 0, 1, 0)) || (!unk_0xF68107C40359970C(iLocal_51[1]) && unk_0x77A43AFA9AAEC041(iLocal_51[1], unk_0xE2D3D51028F0428A(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 4) && unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_104(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_105(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_106(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_106(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x4131052989DE1278())
	{
		if (unk_0x320D1840B6DAA1CC() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (unk_0xE8F6C1F695B25B91(iVar0))
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_104(iVar0))
	{
		func_127();
	}
	if (!unk_0x4131052989DE1278())
	{
		if (func_122(uParam0, bParam6, bParam8, 0))
		{
			func_121(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_111(iVar0))
			{
				if ((unk_0xE8F6C1F695B25B91(uParam0->f_3) && !unk_0xE8F6C1F695B25B91(iVar0)) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if ((unk_0x0318E2EE6FB4563F(Param1, 1f) && !unk_0xF847447D4467709D()) && uParam7)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3C57C2F07FEE34D2("CMN_HINT", iVar0))
							{
								func_110(1);
							}
						}
					}
				}
			}
		}
		else if (func_111(iVar0))
		{
			if (unk_0xE8F6C1F695B25B91(uParam0->f_3) && !unk_0xE8F6C1F695B25B91(iVar0))
			{
				if ((unk_0x0318E2EE6FB4563F(Param1, 1f) && !unk_0xF847447D4467709D()) && uParam7)
				{
					if (!func_104(iVar0))
					{
						func_137(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x3C57C2F07FEE34D2("CMN_HINT", iVar0))
						{
							func_110(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0xE8F6C1F695B25B91(iVar0))
		{
			if (func_104(iVar0) && unk_0xF847447D4467709D())
			{
				unk_0x3410421C60BF7143(1);
			}
		}
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
		{
			if (unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(3) == 3 || unk_0x4DE6A646AFB7CF5C(3) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(6) == 3 || unk_0x4DE6A646AFB7CF5C(6) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(4) == 3 || unk_0x4DE6A646AFB7CF5C(4) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(5) == 3 || unk_0x4DE6A646AFB7CF5C(5) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(2) == 3 || unk_0x4DE6A646AFB7CF5C(2) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x5E29B0CF10CECB34() == 3 || unk_0x5E29B0CF10CECB34() == 4)
			{
				func_135(uParam0, iVar0, 1);
			}
		}
		if (!func_122(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
			{
				func_107(uParam0);
			}
		}
	}
}

void func_107(var uParam0)
{
	if (func_108(unk_0xE2D3D51028F0428A()))
	{
		unk_0xC89EA639A6F338A6(unk_0xE2D3D51028F0428A());
	}
	if (unk_0x4131052989DE1278())
	{
		unk_0xE4FA4FBF0BAFD2A8(1);
		unk_0xBD1E8007D7DFA747(0);
		unk_0x0AF8D3A06BB92903("HINT_CAM_SCENE");
		unk_0x06A78BA0B756C754("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9DCF157443EA30D6("FocusOut", 0, 0);
			unk_0x91DFC8F68F6D9B05(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_108(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x04D9F44466CBF3CA(iParam0))
		{
			if (unk_0x55A0C756C4A8220C(unk_0x31EB55FAEEE9C0F5(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x9044EDB8A7BF67B4(iParam0))
		{
			if (!unk_0xF68107C40359970C(unk_0x28AA31872A651BC7(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0086095F1731DE17(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_109(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x320D1840B6DAA1CC()
		{
			return 1;
		}
	}
	return 0;
}

int func_110(bool bParam0)
{
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113386.f_10049.f_100++;
			}
			return Global_113386.f_10049.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113386.f_10049.f_101++;
			}
			return Global_113386.f_10049.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113386.f_10049.f_102++;
			}
			return Global_113386.f_10049.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_111(char* sParam0)
{
	if (!func_112(1, 1, 0))
	{
		if ((!unk_0xACC32B78196FBC2A(sParam0) && func_104(sParam0)) || func_104("CMN_HINT"))
		{
			unk_0x3410421C60BF7143(1);
		}
		return 0;
	}
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (func_110(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x04458B4E5D9E466A())
	{
		return 0;
	}
	if (func_120(0))
	{
		return 0;
	}
	if (func_119())
	{
		return 0;
	}
	if (unk_0xD199EE48D2842EB1())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (unk_0xB4C854DD86E40FDA(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60335)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
		{
			if (unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(3) == 3 || unk_0x4DE6A646AFB7CF5C(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(6) == 3 || unk_0x4DE6A646AFB7CF5C(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(4) == 3 || unk_0x4DE6A646AFB7CF5C(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(5) == 3 || unk_0x4DE6A646AFB7CF5C(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(2) == 3 || unk_0x4DE6A646AFB7CF5C(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5E29B0CF10CECB34() == 3 || unk_0x5E29B0CF10CECB34() == 4)
			{
				return 0;
			}
			if (unk_0x594CC97203485127())
			{
				return 0;
			}
		}
	}
	if ((func_118() || func_117(Global_4718592.f_168757)) || func_116())
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			iVar1 = func_115(unk_0xE2D3D51028F0428A(), 0);
			if (((unk_0x38B74904557F43CC(iVar0, iVar1) || (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("riot2") && iVar1 == 0) && func_114(iVar0, 10)) && unk_0x0DD0BC46C4CFD6AD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957727)
	{
		return 0;
	}
	if (func_113(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	return 1;
}

int func_113(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_92(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_92(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (unk_0x03AC3319D1B50189(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x6B83F5AE0478286F(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_115(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, iParam1))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(iParam0, iParam1);
			if (unk_0xE5965CDF24F93A9F(iVar0))
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

var func_116()
{
	return Global_2714762.f_19;
}

bool func_117(int iParam0)
{
	return iParam0 == 51;
}

var func_118()
{
	return Global_2714762.f_18;
}

bool func_119()
{
	return unk_0x320D1840B6DAA1CC() <= Global_23150.f_6269 + 100;
}

int func_120(int iParam0)
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

void func_121(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE4FA4FBF0BAFD2A8(0);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0xDBFEE73A55300843(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0xE1E1AF00CA06A2B7(unk_0xE2D3D51028F0428A(), Param1, -1, iVar2, iVar3);
	unk_0x9DCF157443EA30D6("FocusIn", 0, 0);
	unk_0x66B27A59829491D3("HINT_CAM_SCENE");
	unk_0x91DFC8F68F6D9B05(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x320D1840B6DAA1CC();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x320D1840B6DAA1CC() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
				{
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x320D1840B6DAA1CC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x320D1840B6DAA1CC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x320D1840B6DAA1CC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_109(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x320D1840B6DAA1CC() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
					{
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x320D1840B6DAA1CC();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_125(bParam1, bParam2, bParam3) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) || unk_0x7F528E84564C4D10(unk_0xE2D3D51028F0428A(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x320D1840B6DAA1CC() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
					{
						if (func_124(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) || func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) || unk_0x7F528E84564C4D10(unk_0xE2D3D51028F0428A(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_109(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_112(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_127();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x7653D561C9574763(0, 140, 1);
			unk_0x7653D561C9574763(0, 80, 1);
			if (unk_0x51844F589D928A86(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_124(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7653D561C9574763(0, 80, 1);
		if (unk_0xFE62696F731C151B())
		{
			if (unk_0x51844F589D928A86(0, 80))
			{
				unk_0xE4FA4FBF0BAFD2A8(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_125(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x7653D561C9574763(0, 140, 1);
			unk_0x7653D561C9574763(0, 80, 1);
			if (unk_0x0DBA73788F6E3C5F(0, 80) && unk_0x320D1840B6DAA1CC() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7653D561C9574763(0, 80, 1);
		if (unk_0xFE62696F731C151B())
		{
			if (unk_0x0DBA73788F6E3C5F(0, 80) && unk_0x320D1840B6DAA1CC() > Global_116)
			{
				unk_0xE4FA4FBF0BAFD2A8(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_127()
{
	unk_0xCED9E32812D6C7C7(&Global_8137, 4);
}

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_129(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_129(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_130(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_130(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x4131052989DE1278())
	{
		if (unk_0x320D1840B6DAA1CC() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xE8F6C1F695B25B91(iVar0))
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_104(iVar0))
	{
		func_127();
	}
	if (func_108(iParam1) && unk_0x2B5F4FBAF644BEC8(iParam1))
	{
		iVar1 = 0;
		if (unk_0x9044EDB8A7BF67B4(iParam1))
		{
			unk_0xAD3E09D1957BB0DE(unk_0x28AA31872A651BC7(iParam1));
			unk_0x757E8ACDD0FCB0CA(unk_0x28AA31872A651BC7(iParam1), 1);
			if (unk_0x2CF76E57D8E46C1F(unk_0x28AA31872A651BC7(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x04D9F44466CBF3CA(iParam1))
		{
			unk_0xE0A93E5ADBED87DE(unk_0x31EB55FAEEE9C0F5(iParam1));
			if (unk_0xE390839FC176621D(unk_0x31EB55FAEEE9C0F5(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0086095F1731DE17(iParam1))
		{
			unk_0x6E740265DB1F6EA1(unk_0x1AA24836EA881D77(iParam1));
			if (unk_0x3E04DE565F9095B8(unk_0x1AA24836EA881D77(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x4131052989DE1278())
		{
			if (func_122(uParam0, bParam7, bParam9, 0))
			{
				func_131(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_111(iVar0))
				{
					if ((unk_0xE8F6C1F695B25B91(uParam0->f_3) && !unk_0xE8F6C1F695B25B91(iVar0)) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if ((iVar1 && !unk_0xF847447D4467709D()) && uParam8)
						{
							if (!func_104(iVar0))
							{
								func_137(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3C57C2F07FEE34D2("CMN_HINT", iVar0))
								{
									func_110(1);
								}
							}
						}
					}
				}
			}
			else if (func_111(iVar0))
			{
				if (unk_0xE8F6C1F695B25B91(uParam0->f_3) && !unk_0xE8F6C1F695B25B91(iVar0))
				{
					if (((unk_0xBC7D3EDF3455BC35(iParam1) && iVar1) && !unk_0xF847447D4467709D()) && uParam8)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3C57C2F07FEE34D2("CMN_HINT", iVar0))
							{
								func_110(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xE8F6C1F695B25B91(sParam5))
			{
				if (func_104(sParam5))
				{
					unk_0x3410421C60BF7143(1);
				}
			}
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
			{
				if (unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(3) == 3 || unk_0x4DE6A646AFB7CF5C(3) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(6) == 3 || unk_0x4DE6A646AFB7CF5C(6) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(4) == 3 || unk_0x4DE6A646AFB7CF5C(4) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(5) == 3 || unk_0x4DE6A646AFB7CF5C(5) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(2) == 3 || unk_0x4DE6A646AFB7CF5C(2) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5E29B0CF10CECB34() == 3 || unk_0x5E29B0CF10CECB34() == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			if (!func_122(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
				{
					func_107(uParam0);
				}
			}
		}
	}
	else
	{
		func_135(uParam0, iVar0, 0);
	}
}

void func_131(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581357 == 1)
	{
		return;
	}
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		func_135(uParam0, 0, 0);
	}
	if (func_134(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x9044EDB8A7BF67B4(iParam1))
		{
			iVar0 = unk_0x28AA31872A651BC7(iParam1);
			if (!unk_0xD5C6B5E3B93A5EDC(iVar0, 0))
			{
				if (unk_0x65FAB09725E2FE75(iVar0))
				{
					if (!func_132())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xECF091D7E67FF7F2(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xE4FA4FBF0BAFD2A8(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x56593357686570F4(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iParam1, -1, iVar3, iVar4);
	unk_0x9DCF157443EA30D6("FocusIn", 0, 0);
	unk_0x66B27A59829491D3("HINT_CAM_SCENE");
	unk_0x91DFC8F68F6D9B05(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x320D1840B6DAA1CC();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_132()
{
	return func_133(unk_0x9E2D6C50374FCFA9());
}

int func_133(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(unk_0x407E03586628E458(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_134(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_135(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x9315DBF7D972F07A())
	{
		if (BitTest(Global_2815059.f_4660, 26))
		{
			return;
		}
	}
	if (unk_0x4131052989DE1278())
	{
		unk_0xBD1E8007D7DFA747(iParam2);
		unk_0x06A78BA0B756C754("FocusIn");
		unk_0x0AF8D3A06BB92903("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9DCF157443EA30D6("FocusOut", 0, 0);
			unk_0x91DFC8F68F6D9B05(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xE4FA4FBF0BAFD2A8(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xE8F6C1F695B25B91(sVar0))
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xE8F6C1F695B25B91(uParam0->f_3))
	{
		if (func_104(uParam0->f_3))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
	if (!unk_0xE8F6C1F695B25B91(sVar0))
	{
		if (func_104(sVar0))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
}

void func_136(bool bParam0)
{
	unk_0xCED9E32812D6C7C7(&(Global_113386.f_24995.f_6), bParam0);
}

void func_137(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

bool func_138(int iParam0)
{
	return BitTest(Global_113386.f_24995.f_6, iParam0);
}

int func_139(int iParam0)
{
	if (func_142())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x320D1840B6DAA1CC();
		if (func_56(Global_113375))
		{
			func_140(0);
		}
		unk_0xEFE837B21D5CF02C(1, "RE_TITLE");
		if (iParam0 && func_56(Global_113375))
		{
			unk_0xC70E97154CC5B243();
		}
		return 1;
	}
	return 0;
}

void func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_137(func_141(iParam0), -1);
					Global_113386.f_24995.f_2++;
					unk_0xCED9E32812D6C7C7(&Global_113382, false);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_137(func_141(iParam0), -1);
					Global_113386.f_24995.f_3++;
					unk_0xCED9E32812D6C7C7(&Global_113382, true);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_137(func_141(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0xCED9E32812D6C7C7(&Global_113382, 2);
				}
			}
			break;
	}
}

char* func_141(int iParam0)
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

int func_142()
{
	switch (func_143(&Global_32019, 0, 5, 0, unk_0x69CE66B03B2184EB()))
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

int func_143(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_147(0))
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
		if (!func_145(iParam2))
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
			func_144(uParam0, iParam4);
		}
	}
	return 2;
}

void func_144(var uParam0, int iParam1)
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

bool func_145(int iParam0)
{
	return func_146(iParam0, Global_43052);
}

int func_146(int iParam0, int iParam1)
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

int func_147(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_145(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_148()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_50)
	{
		case 0:
			if (unk_0x55A0C756C4A8220C(iLocal_54, 0))
			{
				if (!unk_0xF68107C40359970C(iLocal_51[0]) && !unk_0xF68107C40359970C(iLocal_51[1]))
				{
					unk_0xBC12D08EE7559CCD(iLocal_51[0], 6, 1);
					unk_0xBC12D08EE7559CCD(iLocal_51[1], 6, 1);
					unk_0x50274A7EACA3133A(iLocal_51[0], 1);
					unk_0x50274A7EACA3133A(iLocal_51[1], 1);
					if (unk_0xF6F5D18EF8EAB859(iLocal_51[0], iLocal_54, 0) && unk_0xF6F5D18EF8EAB859(iLocal_51[1], iLocal_54, 0))
					{
						if (bLocal_47 == 2)
						{
							unk_0xA888F8CC04F25CC8(&uVar0);
							unk_0x3B8F94419979A0B1(0, iLocal_54, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0xAD6CDBCDA713560A(0, iLocal_54, 10f, 786603);
							unk_0xC963A45B50851768(uVar0);
							unk_0x8ACADA903FCAA42F(iLocal_51[0], uVar0);
							unk_0x7461D7C5BA953BC7(&uVar0);
							iLocal_50++;
						}
						else if (bLocal_47 == 4)
						{
							unk_0xA888F8CC04F25CC8(&uVar1);
							unk_0x3B8F94419979A0B1(0, iLocal_54, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0xAD6CDBCDA713560A(0, iLocal_54, 10f, 786603);
							unk_0xC963A45B50851768(uVar1);
							unk_0x8ACADA903FCAA42F(iLocal_51[0], uVar1);
							unk_0x7461D7C5BA953BC7(&uVar1);
							iLocal_50++;
						}
						else if (bLocal_47 == 7)
						{
							unk_0xA888F8CC04F25CC8(&uVar2);
							unk_0x3B8F94419979A0B1(0, iLocal_54, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0xAD6CDBCDA713560A(0, iLocal_54, 10f, 786603);
							unk_0xC963A45B50851768(uVar2);
							unk_0x8ACADA903FCAA42F(iLocal_51[0], uVar2);
							unk_0x7461D7C5BA953BC7(&uVar2);
							iLocal_50++;
						}
						else
						{
							unk_0xAD6CDBCDA713560A(iLocal_51[0], iLocal_54, 10f, 786603);
							iLocal_50++;
						}
					}
					else
					{
						if (!unk_0xF6F5D18EF8EAB859(iLocal_51[0], iLocal_54, 0) && unk_0x174CED88B97C78D9(iLocal_51[0], joaat("script_task_enter_vehicle")) != 1)
						{
							unk_0xB486640392EC50BB(iLocal_51[0], iLocal_54, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0xF6F5D18EF8EAB859(iLocal_51[1], iLocal_54, 0) && unk_0x174CED88B97C78D9(iLocal_51[1], joaat("script_task_enter_vehicle")) != 1)
						{
							unk_0xB486640392EC50BB(iLocal_51[1], iLocal_54, -1, 0, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_152() || func_151()) || func_102()) || func_101()) || func_150()) || func_149())
			{
				if (func_27() < 20f)
				{
					func_97();
					func_4(&Local_140, cLocal_139, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_68(6);
			}
			if (unk_0x55A0C756C4A8220C(iLocal_54, 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_51)
				{
					if (!unk_0xF68107C40359970C(iLocal_51[iVar3]) && !unk_0x55B23FE400FCEA6B(iLocal_51[iVar3], 0))
					{
						if (unk_0x706E4529F37489DB(unk_0xE2D3D51028F0428A()) && unk_0x177106D5E97D1958(iLocal_51[iVar3]))
						{
							func_68(8);
						}
					}
					else
					{
						func_68(6);
					}
					iVar3++;
				}
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_54, 1))
				{
					func_68(8);
				}
			}
			break;
	}
	if (iLocal_48 == 4)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0x906F6137D122D88C("PLAYER HAS PROJECTILE WEAPON", unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 0, 0, 255, 255);
				if ((unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), unk_0xCACAD935C0BEE14F(iLocal_54, 0f, -3.44f, -3f), unk_0xCACAD935C0BEE14F(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, 1, 0)) && unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_54, 1)) < 225f)
				{
					func_68(6);
				}
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), unk_0xCACAD935C0BEE14F(iLocal_54, 0f, -3.44f, -3f), unk_0xCACAD935C0BEE14F(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, 1, 0))
				{
					unk_0x963A57DF8530029D("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_54, 1)) < 225f)
				{
					unk_0x963A57DF8530029D("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
				{
				}
			}
		}
		if (((unk_0x55A0C756C4A8220C(iLocal_54, 0) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x6B62510F212526DC(iLocal_54, 1), 25f, 0)) || (!unk_0xF68107C40359970C(iLocal_51[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x6B62510F212526DC(iLocal_51[0], 1), 20f, 0))) || (!unk_0xF68107C40359970C(iLocal_51[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x6B62510F212526DC(iLocal_51[1], 1), 20f, 0)))
		{
			func_68(6);
		}
		if (iLocal_48 != 4)
		{
			if (!unk_0xF68107C40359970C(iLocal_51[0]))
			{
				unk_0xBC12D08EE7559CCD(iLocal_51[0], 6, 0);
				unk_0x50274A7EACA3133A(iLocal_51[0], 0);
			}
			if (!unk_0xF68107C40359970C(iLocal_51[1]))
			{
				unk_0xBC12D08EE7559CCD(iLocal_51[1], 6, 0);
				unk_0x50274A7EACA3133A(iLocal_51[1], 0);
			}
		}
	}
}

int func_149()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((unk_0x55A0C756C4A8220C(iLocal_54, 0) && unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9())) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) - unk_0x6B62510F212526DC(iLocal_54, 1) };
		Var3 = { unk_0x63BEA94AB58D4E6D(iLocal_54) };
		Var6 = { unk_0x37B78BEF7C4625D4(iLocal_54, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) };
		if (((Var6.f_1 > 1f && (((unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_54) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_54)) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_51[0])) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_51[1]))) && unk_0x48053974ED6F63CE(unk_0x952F3FA2E7880565(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1)) < 60f) && unk_0x952F3FA2E7880565(Var3.f_2, Var3.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_150()
{
	if (unk_0x55A0C756C4A8220C(iLocal_54, 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if ((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), unk_0xCACAD935C0BEE14F(iLocal_54, 2.7f, 7f, -2f), unk_0xCACAD935C0BEE14F(iLocal_54, 2.7f, -3.25f, 3f), 3f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), unk_0xCACAD935C0BEE14F(iLocal_54, -2.7f, 7f, -2f), unk_0xCACAD935C0BEE14F(iLocal_54, -2.7f, -3.25f, 3f), 3f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), unk_0xCACAD935C0BEE14F(iLocal_54, 0f, 7f, -2f), unk_0xCACAD935C0BEE14F(iLocal_54, 0f, 0f, 3f), 2.4f, 0, 1, 0))
		{
			if (unk_0x3DA4842FA4407BE2(unk_0xE2D3D51028F0428A()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_151()
{
	int iVar0;
	
	if (unk_0x55A0C756C4A8220C(iLocal_54, 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
			{
				iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (unk_0xE5965CDF24F93A9F(unk_0x9993EF7FDBCDB632()))
		{
			iVar0 = unk_0x9993EF7FDBCDB632();
		}
		if (unk_0xE5965CDF24F93A9F(iVar0) && unk_0xE5965CDF24F93A9F(iLocal_54))
		{
			return ((unk_0x55A0C756C4A8220C(iVar0, 0) && unk_0x72F6AE51B7E34865(iVar0, iLocal_54)) && unk_0x207D53F9E0190691(iVar0) > 10f);
		}
	}
	return 0;
}

int func_152()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (iLocal_116)
		{
			return 1;
		}
		if (!unk_0xF68107C40359970C(iLocal_51[0]) || unk_0x55B23FE400FCEA6B(iLocal_51[0], 0))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_51[0], unk_0xE2D3D51028F0428A(), 1))
			{
				return 1;
			}
		}
		if (!unk_0xF68107C40359970C(iLocal_51[1]) || unk_0x55B23FE400FCEA6B(iLocal_51[1], 0))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_51[1], unk_0xE2D3D51028F0428A(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_153()
{
	float fVar0;
	
	if ((!unk_0xF68107C40359970C(iLocal_51[0]) && !unk_0xF68107C40359970C(iLocal_51[1])) && unk_0x55A0C756C4A8220C(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				Local_485 = { unk_0x96EDA732FD9DC0AF(iLocal_54, 0) };
				Local_488 = { unk_0x63A8BF5E6C2BF85C(iLocal_54, 2) };
				Local_491 = { unk_0x3DBAB8E11699EAEE("random@security_van", "sec_case_into_van_calm", Local_485, Local_488, 0, 2) };
				bLocal_496 = false;
				iLocal_497 = 0;
				unk_0x9F65B3BAFA302A65(iLocal_54, 1084227584);
				unk_0xA888F8CC04F25CC8(&uLocal_58);
				unk_0x83F5BCFFFBA26699(0, 5000);
				unk_0x7D1424753688EE7A(0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
				unk_0x30E00B59448AB97E(0, Local_488.f_2, 0);
				unk_0xC963A45B50851768(uLocal_58);
				unk_0x8ACADA903FCAA42F(iLocal_51[1], uLocal_58);
				unk_0x7461D7C5BA953BC7(&uLocal_58);
				iLocal_50++;
				break;
			
			case 1:
				Local_485 = { unk_0x96EDA732FD9DC0AF(iLocal_54, 0) };
				Local_488 = { unk_0x63A8BF5E6C2BF85C(iLocal_54, 2) };
				Local_491 = { unk_0x3DBAB8E11699EAEE("random@security_van", "sec_case_into_van_calm", Local_485, Local_488, 0, 2) };
				if (!unk_0xCE2C78E9FC0B01E3(iLocal_495))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_77) < 22500f && unk_0xF1E076F6CC1695AA(iLocal_54))
					{
						iLocal_495 = unk_0x8F5F4164BF5FB513(Local_485, Local_488, 2);
						unk_0x950B26F4C891073F(iLocal_51[0], iLocal_495, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						unk_0xFE1CD80C2F7CBCFB(iLocal_495, 1);
					}
				}
				if (unk_0x174CED88B97C78D9(iLocal_51[1], joaat("script_task_perform_sequence")) != 1)
				{
					unk_0xA888F8CC04F25CC8(&uLocal_58);
					unk_0x7D1424753688EE7A(0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
					unk_0x30E00B59448AB97E(0, Local_488.f_2, 0);
					unk_0xC963A45B50851768(uLocal_58);
					unk_0x8ACADA903FCAA42F(iLocal_51[1], uLocal_58);
					unk_0x7461D7C5BA953BC7(&uLocal_58);
				}
				fVar0 = unk_0x82FE2343F8BDFF0B(iLocal_51[1]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (Local_488.f_2 > 180f)
				{
					Local_488.f_2 = (Local_488.f_2 - 360f);
				}
				if (Local_488.f_2 <= -180f)
				{
					Local_488.f_2 = (Local_488.f_2 + 360f);
				}
				if (unk_0x48053974ED6F63CE((fVar0 - Local_488.f_2)) < 15f && unk_0x2A488C176D52CCA5(Local_491, unk_0x6B62510F212526DC(iLocal_51[1], 1)) < 0.2f)
				{
					unk_0xBA002E17C13F9DD5(iLocal_51[1], -1056964608);
					unk_0x03A927199A2DFE46(iLocal_51[1]);
					bLocal_496 = true;
					iLocal_494 = unk_0x8F5F4164BF5FB513(Local_485, Local_488, 2);
					unk_0x950B26F4C891073F(iLocal_51[1], iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0xAA8557AFE4A4A184(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!iLocal_106)
				{
					if (((unk_0xCE2C78E9FC0B01E3(iLocal_494) && unk_0x54DE1614490C2A83(iLocal_494) > 0.09f) && unk_0x54DE1614490C2A83(iLocal_494) < 0.11f) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
					{
						if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_140, cLocal_139, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_106 = 1;
							}
						}
					}
				}
				if (unk_0xCE2C78E9FC0B01E3(iLocal_494))
				{
					if (!bLocal_109)
					{
						if ((unk_0xE5965CDF24F93A9F(iLocal_56) && unk_0x099CAD293190F449(iLocal_56, iLocal_51[1])) && unk_0x54DE1614490C2A83(iLocal_494) > 0.3793f)
						{
							if (!unk_0x099CAD293190F449(iLocal_56, iLocal_54))
							{
								unk_0xE6451C2F193342C7(iLocal_56, 1, 1);
								unk_0x959E1626CBC7D38A(iLocal_56, 0, 0);
								unk_0x9A97DC6DBC7B223D(iLocal_56, iLocal_54, 0, unk_0x37B78BEF7C4625D4(iLocal_54, unk_0x6B62510F212526DC(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0x54DE1614490C2A83(iLocal_494) > 0.546243f)
					{
						unk_0xA5D8BA53953077C8(iLocal_54, -4f, 1);
						if (unk_0xE5965CDF24F93A9F(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0xCAA02C32EC0C2462(iLocal_54, 2, 1);
							unk_0xCAA02C32EC0C2462(iLocal_54, 3, 1);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_106)
				{
					if (((unk_0xCE2C78E9FC0B01E3(iLocal_494) && unk_0x54DE1614490C2A83(iLocal_494) > 0.56f) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A())) && unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_106 = 1;
						}
					}
				}
				if (!iLocal_497)
				{
					if ((unk_0xCE2C78E9FC0B01E3(iLocal_494) && unk_0x54DE1614490C2A83(iLocal_494) > 0.6f) || !unk_0xCE2C78E9FC0B01E3(iLocal_494))
					{
						if (unk_0xCE2C78E9FC0B01E3(iLocal_495))
						{
							unk_0x03A927199A2DFE46(iLocal_51[0]);
							iLocal_495 = unk_0x8F5F4164BF5FB513(Local_485, Local_488, 2);
							unk_0x950B26F4C891073F(iLocal_51[0], iLocal_495, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_497 = 1;
					}
				}
				else if ((unk_0xCE2C78E9FC0B01E3(iLocal_495) && unk_0x54DE1614490C2A83(iLocal_495) >= 0.92f) || !unk_0xCE2C78E9FC0B01E3(iLocal_495))
				{
					if (!unk_0xF6F5D18EF8EAB859(iLocal_51[0], iLocal_54, 0) && unk_0x174CED88B97C78D9(iLocal_51[0], joaat("script_task_enter_vehicle")) != 1)
					{
						unk_0x03A927199A2DFE46(iLocal_51[0]);
						unk_0xB486640392EC50BB(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0xCE2C78E9FC0B01E3(iLocal_494) && unk_0xD9E56EC8ED04E45E(iLocal_51[1], unk_0x2E87280918B16506("ENDS_IN_WALK")))
				{
					unk_0x03A927199A2DFE46(iLocal_51[1]);
					unk_0xB486640392EC50BB(iLocal_51[1], iLocal_54, -1, 0, 1f, 1, 0);
					unk_0xC1B1E9A034A63A62(0);
				}
				if ((func_88() && unk_0x7DF569D9E616D55E(iLocal_54, 0) == 0f) && unk_0x7DF569D9E616D55E(iLocal_54, 1) == 0f)
				{
					func_68(4);
				}
				break;
			
			case 4:
				if (unk_0x83666F9FB8FEBD4B() > 15000)
				{
					unk_0xCAA02C32EC0C2462(iLocal_54, 0, 1);
					unk_0xCAA02C32EC0C2462(iLocal_54, 1, 1);
				}
				break;
		}
		if (((!unk_0xF68107C40359970C(func_3()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A())) && unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(func_3(), 1)) < 30f) && unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) != 0)
		{
			func_68(8);
		}
	}
	if (!unk_0xF68107C40359970C(iLocal_51[1]))
	{
		if (unk_0x2791155FB0769FE5(uLocal_137))
		{
			func_68(7);
		}
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (func_157())
		{
			if (func_88())
			{
				func_68(6);
			}
			else
			{
				func_68(8);
			}
		}
		else if (func_155())
		{
			func_68(2);
		}
		else if (func_154())
		{
			func_68(3);
		}
	}
	if (iLocal_48 != 1)
	{
		if (iLocal_48 != 4)
		{
			func_97();
			if (!unk_0xF68107C40359970C(iLocal_51[0]))
			{
				if (unk_0xFCF559C8631ABED7(iLocal_51[0], "random@security_van", "driver_idle", 3))
				{
					if (bLocal_47 != 2)
					{
						unk_0x246C656F8E525DC7(iLocal_51[0], "random@security_van", "driver_exit_panic", Local_485, Local_488, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0x03A927199A2DFE46(iLocal_51[0]);
						unk_0x49D97B076E3590AC(iLocal_51[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((unk_0x55A0C756C4A8220C(iLocal_54, 0) && unk_0xCE2C78E9FC0B01E3(iLocal_494)) && !unk_0xF68107C40359970C(iLocal_51[1]))
			{
				unk_0xA5D8BA53953077C8(iLocal_54, -1000f, 1);
				unk_0x03A927199A2DFE46(iLocal_51[1]);
			}
		}
		if (bLocal_109 && !unk_0x2791155FB0769FE5(uLocal_137))
		{
			unk_0xCAA02C32EC0C2462(iLocal_54, 2, 1);
			unk_0xCAA02C32EC0C2462(iLocal_54, 3, 1);
		}
	}
}

int func_154()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0x9993EF7FDBCDB632(), 0))
			{
				if (func_80(unk_0x9993EF7FDBCDB632()))
				{
					iLocal_55 = unk_0x9993EF7FDBCDB632();
					return 1;
				}
			}
		}
		else if (!unk_0x55B23FE400FCEA6B(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
		{
			if (func_80(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
			{
				fLocal_480 = (fLocal_480 + unk_0x51109C28352EC9A3());
			}
			else if (fLocal_480 > 0f)
			{
				fLocal_480 = (fLocal_480 - (unk_0x51109C28352EC9A3() * 10f));
			}
			else if (fLocal_480 < 0f)
			{
				fLocal_480 = 0f;
			}
			if (fLocal_480 > 3f)
			{
				iLocal_55 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_155()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0xF68107C40359970C(iLocal_51[iVar0]) && unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9())) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A())) && (unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_51[iVar0]) || unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))) && unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_51[iVar0], 1)) < 9f) && !unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 7)) && func_72())
		{
			return 1;
		}
		if (unk_0x32DCDA1B2F8A0694(iLocal_51[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_101())
	{
		return 1;
	}
	if ((func_156() || func_102()) && func_72())
	{
		if (!unk_0xF6F5D18EF8EAB859(iLocal_51[0], iLocal_54, 0) || !unk_0xF6F5D18EF8EAB859(iLocal_51[1], iLocal_54, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156()
{
	int iVar0;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1);
		if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A())))
		{
			if (unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()))
			{
				if (!unk_0xF68107C40359970C(iLocal_51[0]))
				{
					if (unk_0x77A43AFA9AAEC041(iLocal_51[0], unk_0xE2D3D51028F0428A(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!unk_0xF68107C40359970C(iLocal_51[1]))
				{
					if (unk_0x77A43AFA9AAEC041(iLocal_51[1], unk_0xE2D3D51028F0428A(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_157()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0xF68107C40359970C(iLocal_51[iVar0]) && unk_0x0747E45CFF1F74AA(iLocal_51[iVar0], unk_0xE2D3D51028F0428A(), 1)) || (!unk_0xF68107C40359970C(iLocal_51[iVar0]) && unk_0xCED7266BAB0BDC20(iLocal_51[iVar0], unk_0xE2D3D51028F0428A()))) || unk_0x0747E45CFF1F74AA(iLocal_51[iVar0], unk_0xE2D3D51028F0428A(), 1)) || (unk_0x0747E45CFF1F74AA(iLocal_54, unk_0xE2D3D51028F0428A(), 1) && func_72())) || unk_0xF68107C40359970C(iLocal_51[iVar0])) || unk_0x55B23FE400FCEA6B(iLocal_51[iVar0], 0))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_150() || func_103())
	{
		return 1;
	}
	if (unk_0x55A0C756C4A8220C(iLocal_54, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0xF68107C40359970C(iLocal_51[iVar0]))
			{
				if (unk_0x706E4529F37489DB(unk_0xE2D3D51028F0428A()) && unk_0x177106D5E97D1958(iLocal_51[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_54, 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()) || unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_77, 25f, 25f, 20f, 0, 1, 0))
		{
			return 1;
		}
	}
	if (((unk_0x55A0C756C4A8220C(iLocal_54, 0) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x6B62510F212526DC(iLocal_54, 1), 25f, 0)) || (!unk_0xF68107C40359970C(iLocal_51[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x6B62510F212526DC(iLocal_51[0], 1), 20f, 0))) || (!unk_0xF68107C40359970C(iLocal_51[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x6B62510F212526DC(iLocal_51[1], 1), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_51[iVar0]))
		{
			if ((!unk_0xF68107C40359970C(iLocal_51[iVar0]) && !unk_0x55B23FE400FCEA6B(iLocal_51[iVar0], 0)) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if ((unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(iLocal_51[iVar0], 1), 5f, 1) || func_37(unk_0x6B62510F212526DC(iLocal_51[iVar0], 1) + Vector(5f, 10f, 10f), unk_0x6B62510F212526DC(iLocal_51[iVar0], 1) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0x0747E45CFF1F74AA(iLocal_51[iVar0], unk_0xE2D3D51028F0428A(), 1))
				{
					bLocal_110 = true;
					return 1;
				}
			}
			else
			{
				bLocal_110 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_159()
{
	int iVar0;
	
	iLocal_54 = unk_0xBA715A7BEBA5A1F9(iLocal_104, Local_77, fLocal_80, 1, 1, 0);
	iLocal_57 = unk_0x0E536D72AB30F4C8(joaat("prop_security_case_01"), Local_77, 1, 1, 0);
	unk_0x9A97DC6DBC7B223D(iLocal_57, iLocal_54, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
	unk_0x1C2ED929474DC6FE(iLocal_57, 0, 0);
	unk_0x14AD86219FE1AC08(iLocal_57, iLocal_54, 0);
	unk_0x9F65B3BAFA302A65(iLocal_54, 1084227584);
	unk_0x3B2646B62E7BBE11(iLocal_54, 3);
	unk_0xBED097BB6359F09C(iLocal_57, 0, 1, 1, 1, 1, 1, 0, 0);
	unk_0x06AF73D7E3DF7782(iLocal_54, 1, 0);
	unk_0xF160248D9083ED0C(iLocal_54, 700, 0);
	unk_0x2EABFF5EFCB7E6CF(iLocal_54, 0, 0);
	unk_0x006574E87E6F1942(iLocal_54, 1, 1);
	unk_0xA2B9AE794C45034B(iLocal_54, 0);
	unk_0xAA207A327A73D480(iLocal_54, 1);
	unk_0x2EE5FFF3E1E3400D((Local_77.f_0 - 200f), (Local_77.f_1 - 200f), (Local_77.f_0 + 200f), (Local_77.f_1 + 200f));
	if (iLocal_46 == 3)
	{
		iLocal_51[0] = unk_0x487C17B41938052C(iLocal_54, 26, iLocal_103, -1, 1, 1);
		iLocal_51[1] = unk_0x487C17B41938052C(iLocal_54, 26, iLocal_103, 0, 1, 1);
		unk_0x371D594409A68A18(iLocal_54, 1, 1, 0);
		unk_0x006574E87E6F1942(iLocal_54, 1, 1);
	}
	else
	{
		iLocal_51[1] = unk_0xA8D58C3AADA2C41C(26, iLocal_103, Local_67[1 /*3*/], fLocal_74[1], 1, 1);
		iLocal_51[0] = unk_0xA8D58C3AADA2C41C(26, iLocal_103, Local_67[0 /*3*/], fLocal_74[0], 1, 1);
		unk_0xF30F15F203736DE4(iLocal_51[1], iLocal_51[0], -1, 0, 2);
	}
	func_85(iLocal_51[1]);
	unk_0xD642E010A287ADFD("Security_guards", &iLocal_66);
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		unk_0x62BDDA84CCCF90A9(iLocal_51[iVar0], 0);
		unk_0xBC12D08EE7559CCD(iLocal_51[iVar0], 1, 0);
		unk_0xBC12D08EE7559CCD(iLocal_51[iVar0], 13, 0);
		unk_0xBC12D08EE7559CCD(iLocal_51[iVar0], 6, 1);
		unk_0xBC12D08EE7559CCD(iLocal_51[iVar0], 8, 0);
		unk_0xBC12D08EE7559CCD(iLocal_51[iVar0], 10, 1);
		unk_0xDC6110E0F8FF9DA0(iLocal_51[iVar0], 512, 1);
		unk_0xD6A76BAB45A4B460(iLocal_51[iVar0], 118, 0);
		unk_0xDC6110E0F8FF9DA0(iLocal_51[iVar0], 128, 1);
		unk_0x3F990964E4A5669A(iLocal_51[iVar0], 0);
		unk_0x06AF73D7E3DF7782(iLocal_51[iVar0], 1, 0);
		unk_0x5D1D64E01B76705C(iLocal_51[iVar0], 1);
		unk_0xC8882E8058542F83(iLocal_51[iVar0], 1);
		unk_0x9521FB98DB6DDF50(iLocal_51[iVar0], joaat("weapon_pistol"), -1, 0, 1);
		unk_0xFF4BEB6CFF55A013(iLocal_51[iVar0], iLocal_66);
		unk_0xABC2CA6F28903308(iLocal_51[iVar0], 1);
		unk_0x7A93DEA53EFC3CF2(iLocal_51[iVar0], 250);
		iVar0++;
	}
	unk_0x006574E87E6F1942(iLocal_51[1], 1, 1);
	unk_0x9972EFADA7A2A47D(1, joaat("COP"), iLocal_66);
	unk_0x9972EFADA7A2A47D(1, iLocal_66, joaat("COP"));
	unk_0x9972EFADA7A2A47D(2, iLocal_66, joaat("player"));
	unk_0x9972EFADA7A2A47D(2, joaat("player"), iLocal_66);
	if (iLocal_46 == 1)
	{
		unk_0xD9D122A54FFE62B8(iLocal_51[0], 0, 1, 0, 0);
		unk_0x40A4FA5C4B5DA318(iLocal_51[0], 0);
		unk_0xD9D122A54FFE62B8(iLocal_51[1], 0, 1, 0, 0);
		unk_0x40A4FA5C4B5DA318(iLocal_51[1], 0);
	}
	if (func_16() == 0 && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		func_74(&Local_140, 0, unk_0xE2D3D51028F0428A(), "MICHAEL", 0, 1);
	}
	if (func_16() == 1 && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		func_74(&Local_140, 1, unk_0xE2D3D51028F0428A(), "FRANKLIN", 0, 1);
	}
	if (func_16() == 2 && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		func_74(&Local_140, 2, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
	}
	func_74(&Local_140, 3, iLocal_51[0], "SECVANGUY1", 0, 1);
	func_74(&Local_140, 4, iLocal_51[1], "SECVANGUY2", 0, 1);
	unk_0x7CD708DEB04F8474(iLocal_104, 1);
	unk_0x269268AD5D4CA266(iLocal_103, 1);
	if (iLocal_46 != 3)
	{
	}
}

float func_160(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam4);
}

bool func_161()
{
	func_169(&uLocal_317, iLocal_103);
	func_169(&uLocal_317, iLocal_104);
	func_169(&uLocal_317, iLocal_105);
	func_167(&uLocal_317, "random@security_van");
	func_167(&uLocal_317, "weapons@holster_1h");
	func_167(&uLocal_317, "move_injured_generic");
	func_166(&uLocal_317, 3);
	return func_162(&uLocal_317);
}

int func_162(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_163(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_163(var uParam0)
{
	return func_164(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_164(var uParam0, char* sParam1, var uParam2)
{
	if (BitTest(uParam0, 30))
	{
		if (BitTest(uParam0, 29))
		{
			switch (func_165(uParam0))
			{
				case 0:
					return unk_0x0152AA00FA3130F1(uParam2);
					break;
				
				case 1:
					return unk_0x6F940C2636C076AD(uParam1);
					break;
				
				case 2:
					return unk_0xA7A5D14F877C9047(uParam1);
					break;
				
				case 3:
					return unk_0x9D4AFED2949F7082(sParam1);
					break;
				
				case 4:
					return unk_0xF777CAA43F4B281A(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0xBD3CEA9CD36E271E(sParam1);
					break;
				
				case 6:
					return unk_0x70F555A7CCF10659(sParam1, BitTest(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x095032C22DEE1587(uParam2);
					break;
				
				case 8:
					return unk_0x01896B71C5AC966E(uParam2);
					break;
				
				case 9:
					return unk_0x51B6C2EF8DBE2E1A();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_165(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_166(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_167(var uParam0, char* sParam1)
{
	func_168(uParam0, 1, -1, sParam1, 0);
}

void func_168(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!unk_0x3C57C2F07FEE34D2(sParam3, "NULL"))
					{
						if (unk_0x3C57C2F07FEE34D2(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xCED9E32812D6C7C7(uParam0[iVar0 /*18*/], bParam1);
			unk_0xCED9E32812D6C7C7(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_169(var uParam0, int iParam1)
{
	func_168(uParam0, 0, iParam1, "NULL", 0);
}

int func_170()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_171(float fParam0, bool bParam1)
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
		if (func_18(func_16()))
		{
			iVar36 = func_61();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113386.f_18574[iVar32 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar32 /*6*/], 3))
				{
					func_172(iVar32, &Var0);
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

void func_172(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 1:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 2:
			func_173(uParam1, "Barry1", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 3:
			func_173(uParam1, "Barry2", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 4:
			func_173(uParam1, "Barry3", func_175(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 5:
			func_173(uParam1, "Barry3A", func_175(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 6:
			func_173(uParam1, "Barry3C", func_175(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 7:
			func_173(uParam1, "Barry4", func_175(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_174(iParam0), 0, 0);
			break;
		
		case 8:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 9:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 10:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 11:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 12:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 13:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 14:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 15:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 16:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 17:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 18:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 19:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 20:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 21:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 22:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 23:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_174(iParam0), 0, 1);
			break;
		
		case 24:
			func_173(uParam1, "Hao1", func_175(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_174(iParam0), 0, 1);
			break;
		
		case 25:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 26:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 27:
			func_173(uParam1, "Josh1", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 28:
			func_173(uParam1, "Josh2", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 29:
			func_173(uParam1, "Josh3", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 30:
			func_173(uParam1, "Josh4", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 31:
			func_173(uParam1, "Maude1", func_175(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 32:
			func_173(uParam1, "Minute1", func_175(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 33:
			func_173(uParam1, "Minute2", func_175(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 34:
			func_173(uParam1, "Minute3", func_175(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 35:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 36:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 37:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 38:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 39:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 40:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 41:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 42:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 43:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 44:
			func_173(uParam1, "Omega1", func_175(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 45:
			func_173(uParam1, "Omega2", func_175(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 46:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 47:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 48:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 49:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 50:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 51:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 52:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 54:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 55:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 56:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 53:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 57:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 58:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 59:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 60:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 61:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 62:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_173(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_174(int iParam0)
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

struct<2> func_175(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_176(iParam0) };
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

struct<2> func_176(int iParam0)
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

int func_177()
{
	if (func_180() && !func_181())
	{
		return 1;
	}
	if (func_179() && func_178())
	{
		return 1;
	}
	return 0;
}

bool func_178()
{
	return Global_113104 > 0;
}

int func_179()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_181()
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

int func_182()
{
	if (!func_145(5))
	{
		return 1;
	}
	if (func_177())
	{
		return 1;
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	if ((Global_113375 == func_65() && unk_0xE3BBDB1C36703410()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_184(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x8142A6539DDC180F() >= (uParam0->f_146 + uParam0->f_147) || BitTest(Global_100441.f_20, 2)) || BitTest(Global_100441.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_185(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x8142A6539DDC180F();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_185(var uParam0)
{
	func_186(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_186(var uParam0, char* sParam1, var uParam2)
{
	if (BitTest(*uParam0, 30))
	{
		switch (func_165(*uParam0))
		{
			case 0:
				unk_0xD69A0C3662175E68(uParam2);
				break;
			
			case 1:
				unk_0x8FB472886552D737(uParam1);
				break;
			
			case 2:
				unk_0x511A0AF0E8B0BF9A(uParam1);
				break;
			
			case 3:
				unk_0xA9911C122B3210B5(uParam1, BitTest(*uParam0, 28));
				break;
			
			case 4:
				unk_0xB018BAA4ED9AA217(uParam2, uParam1);
				break;
			
			case 5:
				unk_0x70F260358D1A42C4(uParam1);
				break;
			
			case 6:
				unk_0x70F555A7CCF10659(uParam1, BitTest(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x251C5C1DDC74D01D(uParam2);
				break;
			
			case 8:
				unk_0x249A0D3C5714BCF4(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x9E63031C188793E1();
				break;
			
			default:
				break;
		}
		unk_0xCED9E32812D6C7C7(uParam0, 29);
	}
}

void func_187()
{
	iLocal_105 = joaat("prop_security_case_01");
	iLocal_104 = joaat("stockade");
	iLocal_103 = joaat("s_m_m_armoured_01");
	uLocal_128 = unk_0x5853B15F78E1A265(3000, 8000);
	switch (bLocal_47)
	{
		case 1:
			Local_96 = { -315.889f, -1550.554f, 7.233013f };
			Local_99 = { -315.2352f, -1366.581f, 45.29617f };
			fLocal_102 = 180f;
			Local_77 = { -331.8429f, -1461.042f, 30.153f };
			fLocal_80 = -64.3539f;
			Local_67[0 /*3*/] = { -335.564f, -1462.237f, 29.5452f };
			fLocal_74[0] = 158.3857f;
			Local_67[1 /*3*/] = { -342.7024f, -1475.043f, 29.6004f };
			fLocal_74[1] = 290.3041f;
			iLocal_46 = 1;
			break;
		
		case 2:
			Local_96 = { -538.2149f, -868.7426f, 17.96054f };
			Local_99 = { -663.8162f, -867.9987f, 53.66249f };
			fLocal_102 = 121.5f;
			Local_77 = { -588.5128f, -866.9584f, 25.32786f };
			fLocal_80 = -89.02679f;
			Local_67[0 /*3*/] = { -589.4673f, -865.4055f, 24.7622f };
			fLocal_74[0] = 12.5464f;
			Local_67[1 /*3*/] = { -578.4414f, -874.5964f, 24.9183f };
			fLocal_74[1] = 352.4951f;
			iLocal_46 = 1;
			break;
		
		case 3:
			Local_96 = { -468.6309f, 6101.907f, 14.8912f };
			Local_99 = { -359.9734f, 5994.152f, 50.36843f };
			fLocal_102 = 152.25f;
			Local_77 = { -395.6852f, 6056.967f, 30.5001f };
			fLocal_80 = 188.9862f;
			Local_67[0 /*3*/] = { -398.4612f, 6051.296f, 30.5003f };
			fLocal_74[0] = 251.7138f;
			Local_67[1 /*3*/] = { -378.408f, 6035.689f, 30.498f };
			fLocal_74[1] = 154.0836f;
			iLocal_46 = 2;
			break;
		
		case 4:
			Local_96 = { -631.3408f, -1105.581f, 7.220509f };
			Local_99 = { -462.1721f, -1103.597f, 62.53583f };
			fLocal_102 = 177.25f;
			Local_77 = { -595.7766f, -1094.089f, 21.1785f };
			fLocal_80 = 263.4662f;
			Local_67[0 /*3*/] = { -600.8182f, -1103.778f, 21.3292f };
			fLocal_74[0] = 338.8304f;
			Local_67[1 /*3*/] = { -595.3461f, -1096.054f, 21.1785f };
			fLocal_74[1] = 151.297f;
			iLocal_46 = 1;
			break;
		
		case 5:
			Local_77 = { -1042.768f, -1049.296f, 1.0825f };
			fLocal_80 = 26.9919f;
			iLocal_46 = 3;
			break;
		
		case 6:
			Local_77 = { -595.5618f, -667.7325f, 31.0544f };
			fLocal_80 = 271.1543f;
			iLocal_46 = 3;
			break;
		
		case 7:
			Local_77 = { 3018.384f, 3634.017f, 70.4076f };
			fLocal_80 = 335.9052f;
			iLocal_46 = 3;
			break;
		
		case 8:
			Local_77 = { -2815.661f, 2208.171f, 27.8382f };
			fLocal_80 = 119.1519f;
			iLocal_46 = 3;
			break;
		
		case 9:
			Local_77 = { 856.7742f, -2067.845f, 29.0704f };
			fLocal_80 = 83.1204f;
			iLocal_46 = 3;
			break;
		
		case 10:
			Local_77 = { 805.1932f, -703.1327f, 28.1632f };
			fLocal_80 = 248.8625f;
			iLocal_46 = 3;
			break;
		
		default:
			break;
	}
}

void func_188(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_190(iParam0);
	unk_0xEEEFCC23227A8148(0);
	unk_0xA560174A439E78F1(1);
	Global_113372 = 0;
	func_189();
}

void func_189()
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

void func_190(int iParam0)
{
	Global_113375 = iParam0;
}

int func_191(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_65();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_230())
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
			if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_181())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_50(0))
		{
			return 0;
		}
		if (func_177())
		{
			return 0;
		}
		if (func_229())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_171(100f, 1) != -1)
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
		if (!func_228(iParam3))
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_227(func_16()) == 4 || func_227(func_16()) == 5)
			{
				return 0;
			}
		}
		if (func_18(func_16()))
		{
			if (!func_226(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_225(Global_113386.f_24995.f_43[iParam3]))
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
		if (func_224())
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
		if (!func_216(4))
		{
			return 0;
		}
		if (!func_145(5))
		{
			return 0;
		}
		if (func_215(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_215(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_228(30) && !func_215(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_18(func_16()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113386.f_2363.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113386.f_2363.f_539.f_2296[iVar4];
				if (func_214(iVar8))
				{
					if (func_192(iVar4))
					{
						if (!func_134(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var5) < (210f * 210f))
							{
								if (func_16() != iVar4)
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

bool func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_193(iVar0);
}

int func_193(int iParam0)
{
	return func_194(iParam0, 1);
}

int func_194(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_214(iParam0))
	{
		return 0;
	}
	func_195(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_195(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_196(func_207(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_196(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_206(iParam0, iParam1))
	{
		iVar0 = func_205(iParam1);
		iVar1 = func_203(iParam0);
		iVar2 = (func_203(iParam0) - func_203(iParam1));
		iVar3 = (func_205(iParam0) - func_205(iParam1));
		iVar4 = (func_202(iParam0) - func_202(iParam1));
		iVar5 = (func_201(iParam0) - func_201(iParam1));
		iVar6 = (func_200(iParam0) - func_200(iParam1));
		iVar7 = (func_199(iParam0) - func_199(iParam1));
	}
	else
	{
		iVar0 = func_205(iParam0);
		iVar1 = func_203(iParam1);
		iVar2 = (func_203(iParam1) - func_203(iParam0));
		iVar3 = (func_205(iParam1) - func_205(iParam0));
		iVar4 = (func_202(iParam1) - func_202(iParam0));
		iVar5 = (func_201(iParam1) - func_201(iParam0));
		iVar6 = (func_200(iParam1) - func_200(iParam0));
		iVar7 = (func_199(iParam1) - func_199(iParam0));
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
		iVar4 = (iVar4 + func_198(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_197(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_197(float fParam0, float fParam1, float fParam2)
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

int func_198(int iParam0, int iParam1)
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

int func_199(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_200(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_201(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_202(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_203(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_204(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_204(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_205(int iParam0)
{
	return iParam0 & 15;
}

int func_206(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_214(iParam1) || !func_214(iParam0))
	{
		return 1;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	var uVar0;
	
	func_213(&uVar0, unk_0xAA2844CAD88768B5());
	func_212(&uVar0, unk_0x80F97D7D29800A1A());
	func_211(&uVar0, unk_0x09FC827691DACE59());
	func_210(&uVar0, unk_0xD52BD97E61483713());
	func_209(&uVar0, unk_0x771485043FDC55DE());
	func_208(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_208(var uParam0, int iParam1)
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

void func_209(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_210(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_205(*uParam0);
	iVar1 = func_203(*uParam0);
	if (iParam1 < 1 || iParam1 > func_198(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_214(int iParam0)
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
	iVar0 = func_199(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_200(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_201(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_203(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_205(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_202(iParam0);
	if (iVar5 < 1 || iVar5 > func_198(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_215(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_16();
				if (!func_18(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_1()) || Global_112433) || Global_31962) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_220()) || func_219()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_1()) || Global_31962) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_1()) || Global_112433) || Global_31962) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_1()) || Global_112433) || Global_31962) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_219()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_24(8, -1)) || func_219()) || func_218()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_222()) || func_221()) || func_218()) || func_217())
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
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_1()) || Global_31962) || func_223()) || func_24(8, -1)) || func_221()) || func_220()) || func_219()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_1()) || func_221()) || Global_112433) || Global_31962) || func_223()) || Global_44238) || func_24(8, -1)) || func_220()) || func_218()) || func_219()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_1()) || Global_112433) || Global_31962) || func_223()) || func_24(8, -1)) || func_220()) || func_218()) || func_222()) || func_221()) || func_219())
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

var func_217()
{
	return Global_100480.f_1;
}

int func_218()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_219()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_220()
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

bool func_221()
{
	return Global_100493.f_376 > 0;
}

bool func_222()
{
	return Global_100493.f_375 > 0;
}

var func_223()
{
	return Global_1575058;
}

int func_224()
{
	func_15();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_225(int iParam0)
{
	return func_206(func_207(), iParam0);
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_16();
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

int func_227(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_230())
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

int func_229()
{
	var uVar0;
	
	if (Global_32110)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x55A0C756C4A8220C(uVar0, 0))
			{
				if (!unk_0xF68107C40359970C(unk_0xAB793EA186AB8DAA(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_230()
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
					unk_0xCED9E32812D6C7C7(&iVar0, false);
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

void func_231()
{
	if (func_183())
	{
		if (unk_0x2791155FB0769FE5(uLocal_137))
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_64))
			{
				unk_0xFFD8EB5462B07B59(&uLocal_64);
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_57))
		{
			unk_0x4BDA5AFD88C085EB(&iLocal_57);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_56))
		{
			if (unk_0x4D21C9FB671ED18F(iLocal_56))
			{
				unk_0x4BDA5AFD88C085EB(&iLocal_56);
			}
			else
			{
				unk_0x59E393B344098656(&iLocal_56);
			}
		}
		unk_0xF1A23B343DFEDFD0(iLocal_104);
		unk_0xF1A23B343DFEDFD0(iLocal_103);
		unk_0xF1A23B343DFEDFD0(iLocal_105);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x269268AD5D4CA266(iLocal_103, 0);
		unk_0x7CD708DEB04F8474(iLocal_104, 0);
	}
	if (iLocal_131 != 0)
	{
		unk_0x527AAB28DB255A95(iLocal_131);
	}
	unk_0x7BACBB4C6A7B18B7(uLocal_65, 0);
	func_135(&uLocal_305, 0, 0);
	func_237(-1);
	func_232(&uLocal_317, 0);
	unk_0xAFBDF6A5E54114C1();
}

void func_232(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_234(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_233(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_233(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_234(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_235(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_235(var uParam0)
{
	func_236(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_236(var uParam0, var uParam1, int iParam2)
{
	if (BitTest(uParam0, 30))
	{
		switch (func_165(uParam0))
		{
			case 0:
				unk_0xF1A23B343DFEDFD0(uParam2);
				break;
			
			case 1:
				unk_0xAFC1FBF3F6AE7B9A(uParam1);
				break;
			
			case 2:
				unk_0x840DCE5F5F53D8E0(uParam1);
				break;
			
			case 3:
				unk_0x861D35D42CFD2991(uParam1);
				break;
			
			case 4:
				unk_0xA72858C94E70296C(iParam2, uParam1);
				break;
			
			case 5:
				unk_0x10F7BFE3A88CB99B(uParam1);
				break;
			
			case 6:
				unk_0xECCDAE4E977BDA96();
				break;
			
			case 7:
				unk_0xD48AC12D763BBE7F(iParam2);
				break;
			
			case 8:
				unk_0xC511E7C272201CF7(iParam2, BitTest(uParam0, 26));
				break;
			
			case 9:
				unk_0xE6239CCB98B8AB66();
				break;
			
			default:
				break;
		}
	}
}

void func_237(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_183())
	{
		func_241(iParam0);
		unk_0xEFE837B21D5CF02C(0, 0);
		Global_113377 = unk_0x320D1840B6DAA1CC();
		func_240(30000);
		StringCopy(&cVar0, func_239(Global_113375, 1), 64);
		if (func_64(Global_113375) > 0)
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
	func_238(&Global_32019);
	Global_113376 = 0;
	func_190(-1);
}

void func_238(var uParam0)
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

char* func_239(int iParam0, bool bParam1)
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

void func_240(int iParam0)
{
	Global_43603 = (unk_0x320D1840B6DAA1CC() + iParam0);
}

void func_241(int iParam0)
{
	func_242(iParam0, 0, func_247(iParam0));
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_207();
	func_245(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_244(iParam0, &uVar0);
	Var1 = { func_243(&uVar0) };
}

struct<16> func_243(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_201(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_200(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_199(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_202(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_205(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_203(*uParam0), 64);
	return Var0;
}

void func_244(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_203(*uParam0);
	iVar1 = func_205(*uParam0);
	iVar2 = func_202(*uParam0);
	iVar3 = func_201(*uParam0);
	iVar4 = func_200(*uParam0);
	iVar5 = func_199(*uParam0);
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
	iVar6 = func_198(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_198(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_246(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_213(uParam0, iParam1);
	func_212(uParam0, iParam2);
	func_211(uParam0, iParam3);
	func_209(uParam0, iParam5);
	func_210(uParam0, iParam4);
	func_208(uParam0, iParam6);
}

int func_247(int iParam0)
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

int func_248(int iParam0)
{
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
		if (unk_0x7158135695FAE89D(iParam0, -1, 0))
		{
			return -1;
		}
		if (unk_0x7158135695FAE89D(iParam0, 0, 0))
		{
			return 0;
		}
		if (unk_0x7158135695FAE89D(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x7158135695FAE89D(iParam0, 2, 0))
		{
			return 2;
		}
		if (unk_0x7158135695FAE89D(iParam0, 3, 0))
		{
			return 3;
		}
		if (unk_0x7158135695FAE89D(iParam0, 4, 0))
		{
			return 4;
		}
		if (unk_0x7158135695FAE89D(iParam0, 5, 0))
		{
			return 5;
		}
		if (unk_0x7158135695FAE89D(iParam0, 6, 0))
		{
			return 6;
		}
		if (unk_0x7158135695FAE89D(iParam0, 7, 0))
		{
			return 7;
		}
		if (unk_0x7158135695FAE89D(iParam0, 8, 0))
		{
			return 8;
		}
	}
	return -2;
}

