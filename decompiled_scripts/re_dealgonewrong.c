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
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52[9];
	float fLocal_80[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	struct<3> Local_113 = { 0, 0, 0 } ;
	var uLocal_116 = 0;
	struct<3> Local_117 = { 0, 0, 0 } ;
	float fLocal_120 = 0f;
	float fLocal_121 = 0f;
	float fLocal_122 = 0f;
	float fLocal_123 = 0f;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_147[2] = { 0, 0 };
	var uLocal_150[4] = { 0, 0, 0, 0 };
	var uLocal_155[4] = { 0, 0, 0, 0 };
	var uLocal_160[5] = { 0, 0, 0, 0, 0 };
	var uLocal_166[4] = { 0, 0, 0, 0 };
	var uLocal_171[4] = { 0, 0, 0, 0 };
	var uLocal_176[4] = { 0, 0, 0, 0 };
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_194[4] = { 0, 0, 0, 0 };
	var uLocal_199[4] = { 0, 0, 0, 0 };
	var uLocal_204[4] = { 0, 0, 0, 0 };
	var uLocal_209[4] = { 0, 0, 0, 0 };
	var uLocal_214 = 0;
	var uLocal_215[5] = { 0, 0, 0, 0, 0 };
	var uLocal_221[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_234 = { 0, 0, 0 } ;
	struct<3> Local_237 = { 0, 0, 0 } ;
	struct<3> Local_240 = { 0, 0, 0 } ;
	struct<3> Local_243 = { 0, 0, 0 } ;
	struct<3> Local_246[5];
	int iLocal_262 = 0;
	bool bLocal_263 = 0;
	bool bLocal_264 = 0;
	bool bLocal_265 = 0;
	bool bLocal_266 = 0;
	bool bLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	var uLocal_271 = 16;
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
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	struct<3> Local_436 = { 0, 0, 0 } ;
	struct<3> Local_439[4];
	struct<3> Local_452 = { 0, 0, 0 } ;
	int iLocal_455 = 0;
	bool bLocal_456 = 0;
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
	Local_234 = { -1635.648f, 4737.801f, 52.4304f };
	Local_237 = { -1640.745f, 4696.386f, 39.279f };
	Local_49 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x4B34601C5C56F3EE(11))
	{
		func_178();
	}
	if (func_136(Local_49, -1, 0, 0, 0))
	{
		func_133(-1);
	}
	else
	{
		unk_0xAFBDF6A5E54114C1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0xC92F9F18E020B461() || unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -1503.54f, 4934.923f, 114.2284f, 100f, 100f, 100f, 0, 1, 0)) || iLocal_47 == 2)
		{
			if (!func_132())
			{
				if (func_131())
				{
					func_178();
				}
			}
			unk_0x6D3F703013ED87D3("RE_DGW", 0);
			switch (iLocal_47)
			{
				case 0:
					if (iLocal_455)
					{
						iLocal_47 = 1;
					}
					else
					{
						if (func_119())
						{
							func_178();
						}
						func_116();
					}
					break;
				
				case 1:
					func_115();
					func_104();
					break;
				
				case 2:
					switch (iLocal_46)
					{
						case 0:
							func_115();
							iLocal_46 = 1;
							break;
						
						case 1:
							func_115();
							func_79();
							if (iLocal_48 >= 6)
							{
								if (!func_78())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (bLocal_267)
										{
											func_77(&(uLocal_150[iVar0]), &(uLocal_194[iVar0]), &(uLocal_176[iVar0]), &(uLocal_204[iVar0]));
											func_72(uLocal_176[0], unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_72(uLocal_176[1], unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 2f, 0f, 1000, 0f);
											func_67(&(uLocal_150[iVar0]), &(uLocal_194[iVar0]), &(uLocal_176[iVar0]), &(uLocal_204[iVar0]));
										}
										else if (bLocal_264)
										{
											func_77(&(uLocal_150[iVar0]), &(uLocal_194[iVar0]), &(uLocal_166[iVar0]), &(uLocal_204[iVar0]));
											func_72(uLocal_166[0], unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_72(uLocal_166[1], unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 5f, 0f, 1000, 0f);
											func_67(&(uLocal_150[iVar0]), &(uLocal_194[iVar0]), &(uLocal_166[iVar0]), &(uLocal_204[iVar0]));
										}
										else if (bLocal_265)
										{
											func_77(&(uLocal_155[iVar0]), &(uLocal_199[iVar0]), &(uLocal_171[iVar0]), &(uLocal_209[iVar0]));
											func_72(uLocal_171[0], unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 0f, 0f, 1000, 0f);
											func_72(uLocal_171[1], unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A()), &uLocal_108, &uLocal_111, &Local_113, &uLocal_112, &uLocal_116, 0f, 5f, 0f, 1000, 0f);
											func_67(&(uLocal_155[iVar0]), &(uLocal_199[iVar0]), &(uLocal_171[iVar0]), &(uLocal_209[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_44();
								}
							}
							if (((unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()) || unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A())) && !unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_234, 100f, 100f, 100f, 0, 1, 0)) && iLocal_48 < 2)
							{
								func_44();
							}
							break;
					}
					break;
				
				case 3:
					func_1();
					break;
			}
		}
		else
		{
			func_178();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_455 && !iLocal_262)
	{
		unk_0xEC6D4F9C59CDA6F5();
		unk_0x8576657A629C4B0A(1f);
		if (unk_0x12DD4A0B247D9B4D(uLocal_181))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_181);
		}
		if (unk_0x12DD4A0B247D9B4D(uLocal_182))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_182);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_194[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_194[iVar0]));
			}
			if (unk_0x12DD4A0B247D9B4D(uLocal_204[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_204[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					if (!unk_0xF68107C40359970C(uLocal_150[iVar0]))
					{
						if (unk_0x77A43AFA9AAEC041(uLocal_150[iVar0], unk_0xE2D3D51028F0428A(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_199[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_199[iVar0]));
			}
			if (unk_0x12DD4A0B247D9B4D(uLocal_209[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_209[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					if (!unk_0xF68107C40359970C(uLocal_155[iVar0]))
					{
						if (unk_0x77A43AFA9AAEC041(uLocal_155[iVar0], unk_0xE2D3D51028F0428A(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_46 >= 1)
		{
			unk_0x07CECF421D895F3D(5, 1);
			unk_0x07CECF421D895F3D(3, 1);
		}
		if (bLocal_266)
		{
			func_3(func_38(), 1, 25000);
		}
		iLocal_262 = 1;
	}
	if (!unk_0x0318E2EE6FB4563F(Local_234, 30f) && unk_0x2A488C176D52CCA5(func_2(unk_0x9E2D6C50374FCFA9()), Local_234) > 300f)
	{
		func_178();
	}
}

Vector3 func_2(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (func_37(iParam0) == 3)
	{
		return 0;
	}
	if (func_37(iParam0) == 4)
	{
		return 0;
	}
	return func_4(func_37(iParam0), 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_36();
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
					func_35(99, 1);
					func_34(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_34(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_34(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_18(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_15(5))
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
							func_34(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_34(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_34(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_15(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_34(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_34(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_34(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_34(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_34(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_34(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_34(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_34(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_34(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x1307D54181723A6E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_34(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_34(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_34(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_34(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_34(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_34(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_15(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_34(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_34(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_34(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_34(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_34(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_34(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_14(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_35(95, iParam3);
					break;
				
				case 1:
					func_35(97, iParam3);
					break;
				
				case 2:
					func_35(96, iParam3);
					break;
			}
			func_35(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(bVar1);
	}
	iVar5 = (Global_60328[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_34(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_34(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_34(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60328[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - iParam3);
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
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_43052 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)
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
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60336[iVar0 /*3*/][0] = Global_113386.f_20564[iVar0];
		Global_60336.f_31[iVar0 /*3*/][0] = Global_113386.f_20564.f_11[iVar0];
		Global_60336.f_62[iVar0 /*3*/][0] = Global_113386.f_20564.f_22[iVar0];
		Global_60336.f_93[iVar0 /*3*/][0] = Global_113386.f_20564.f_33[iVar0];
		Global_60336.f_124[iVar0 /*3*/][0] = Global_113386.f_20564.f_44[iVar0];
		Global_60336.f_155[iVar0 /*3*/][0] = Global_113386.f_20564.f_55[iVar0];
		Global_60336.f_186[iVar0 /*3*/][0] = Global_113386.f_20564.f_66[iVar0];
		Global_60336.f_217[iVar0 /*3*/][0] = Global_113386.f_20564.f_77[iVar0];
		Global_60336.f_248[iVar0 /*3*/][0] = Global_113386.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_60336[iVar0 /*3*/][1] = Global_113386.f_20564[iVar0];
			Global_60336.f_31[iVar0 /*3*/][1] = Global_113386.f_20564.f_11[iVar0];
			Global_60336.f_62[iVar0 /*3*/][1] = Global_113386.f_20564.f_22[iVar0];
			Global_60336.f_93[iVar0 /*3*/][1] = Global_113386.f_20564.f_33[iVar0];
			Global_60336.f_124[iVar0 /*3*/][1] = Global_113386.f_20564.f_44[iVar0];
			Global_60336.f_155[iVar0 /*3*/][1] = Global_113386.f_20564.f_55[iVar0];
			Global_60336.f_186[iVar0 /*3*/][1] = Global_113386.f_20564.f_66[iVar0];
			Global_60336.f_217[iVar0 /*3*/][1] = Global_113386.f_20564.f_77[iVar0];
			Global_60336.f_248[iVar0 /*3*/][1] = Global_113386.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x076A5661EF5ABEE4(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x076A5661EF5ABEE4(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x076A5661EF5ABEE4(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_7(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_13(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_13(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_13(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_13(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_10(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_10(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_10(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_10(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_10(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_10(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x9315DBF7D972F07A())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			unk_0xB0550BC91B0159D6(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_9() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xB0550BC91B0159D6(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xB0550BC91B0159D6(&(Global_2359296[func_9() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x150D8F58B26E9F70("COUP_RED");
		unk_0x26C23BE14F66F202(func_8(bParam0));
		unk_0x3B81B9627E7885CF(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(bool bParam0)
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

int func_9()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1574918;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_12();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

void func_14(int iParam0)
{
	func_35(93, iParam0);
	func_35(29, iParam0);
	func_35(30, iParam0);
}

int func_15(int iParam0)
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
		return func_17(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_17(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_17(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_17(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x48352343BC5A41AE();
		iVar1 = func_16(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x48352343BC5A41AE();
		iVar3 = func_16(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x48352343BC5A41AE();
		iVar5 = func_16(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x48352343BC5A41AE();
		iVar7 = func_16(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x48352343BC5A41AE();
		iVar9 = func_16(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x48352343BC5A41AE();
		iVar11 = func_16(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_9() /*5567*/].f_681.f_10, iParam0);
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_11(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_17(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_12();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_18(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xDA4421F81DF4B90D(27))
	{
		return 0;
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x61481F9FBB1C7EDD(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x076A5661EF5ABEE4(joaat("num_cash_spent"), iVar1, 1);
		func_33(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_19(27, 1);
	return 1;
}

int func_19(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_20(iParam0, iParam1);
}

int func_20(int iParam0, int iParam1)
{
	if (func_32(14) && !func_31(iParam0))
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
	if (func_30(&Global_4541529))
	{
		if (func_28(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_21(&Global_4541529, iParam0))
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

int func_21(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_31(iParam1))
	{
		return 0;
	}
	if (func_28(uParam0, iParam1))
	{
		return 0;
	}
	if (func_27(uParam0) < 0f)
	{
		func_26(uParam0, 0);
	}
	func_24(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_22(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_22(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_31(iParam1))
	{
		return 0;
	}
	if (func_28(uParam0, iParam1))
	{
		return 0;
	}
	if (func_27(uParam0) < 0f)
	{
		func_26(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_23(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_23(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_24(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_25(uParam0, iVar0);
		iVar0++;
	}
	func_26(uParam0, (Global_4541528 - 0.5f));
}

void func_25(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_26(var uParam0, float fParam1)
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

float func_27(var uParam0)
{
	return uParam0->f_80;
}

bool func_28(var uParam0, int iParam1)
{
	return func_29(uParam0, iParam1) != -1;
}

int func_29(var uParam0, int iParam1)
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

bool func_30(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_31(int iParam0)
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

bool func_32(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_33(int iParam0, int iParam1)
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

void func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x61481F9FBB1C7EDD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x076A5661EF5ABEE4(iParam0, iVar0, 1);
}

void func_35(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		unk_0x61481F9FBB1C7EDD(Global_58896[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x076A5661EF5ABEE4(Global_58896[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_36()
{
	int iVar0;
	
	if (unk_0xAF5DBE95205A49D1())
	{
		unk_0x61481F9FBB1C7EDD(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60328[0] == iVar0)
		{
			Global_60328[0] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60328[1] == iVar0)
		{
			Global_60328[1] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60328[2] == iVar0)
		{
			Global_60328[2] = iVar0;
		}
	}
}

int func_37(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_38()
{
	func_39();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_39()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_42(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_41(unk_0xE2D3D51028F0428A());
			if (func_40(iVar0) && (!func_32(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_40(Global_113386.f_2363.f_539.f_4321))
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

bool func_40(int iParam0)
{
	return iParam0 < 3;
}

int func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_42(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_42(int iParam0)
{
	if (func_40(iParam0))
	{
		return func_43(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_43(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_44()
{
	while (func_66())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_65())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_48(-1, 0);
	func_45();
	iLocal_47 = 3;
}

void func_45()
{
	func_46();
}

int func_46()
{
	if (func_47(0))
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

int func_47(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_48(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_63();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_62(iParam0))
	{
		func_61(iParam0, iParam1);
		if (!func_60(51))
		{
			func_56("RE_REWARD", 1, 0, 4000, 10000, func_59(), 0, 138, 0);
			func_55(51);
		}
		if (func_54(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_53(iParam0, iParam1) != 322)
		{
			func_50(func_53(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_49(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_49(7);
			}
			else
			{
				func_49(1);
			}
		}
	}
}

void func_49(int iParam0)
{
	Global_113372 = iParam0;
}

void func_50(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1);
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
		func_51();
	}
}

void func_51()
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
		func_33(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_78319)
		{
			if (func_52() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_46();
				}
			}
		}
	}
}

int func_52()
{
	return Global_31959;
}

int func_53(int iParam0, int iParam1)
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

int func_54(int iParam0)
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

void func_55(int iParam0)
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

void func_56(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_57(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_57(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_58();
	}
}

void func_58()
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

int func_59()
{
	func_39();
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

int func_60(int iParam0)
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

void func_61(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

int func_62(int iParam0)
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

int func_63()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x05CBA41180F5D521(), 64);
	uVar16 = func_64(Var0);
	return uVar16;
}

int func_64(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_65()
{
	return 1;
}

int func_66()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_67(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (unk_0xE5965CDF24F93A9F(*uParam2))
	{
		if (unk_0x55A0C756C4A8220C(*uParam2, 0))
		{
			if (!unk_0xF68107C40359970C(*uParam0))
			{
				if (unk_0xF6F5D18EF8EAB859(*uParam0, *uParam2, 0))
				{
					if (unk_0x12DD4A0B247D9B4D(*uParam1))
					{
						unk_0xFFD8EB5462B07B59(uParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0x12DD4A0B247D9B4D(*uParam1))
				{
					*uParam1 = func_70(*uParam0, 1, 145);
				}
			}
			if (!unk_0x12DD4A0B247D9B4D(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = func_68(unk_0x6B62510F212526DC(*uParam2, 1), 0);
					unk_0xA582EE8380437B1B(*uParam3, 1);
					unk_0x7A610B2EC5DA34E7(*uParam3, 9);
					unk_0xAF62582F3EA39095(*uParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { unk_0x1A3931A61B3223A2(*uParam3) };
				Var4 = { unk_0x6B62510F212526DC(*uParam2, 1) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * unk_0x0000000050597EE2()));
				unk_0xFB7ACC9D9D6401A8(*uParam3, Var1);
				if (iVar0 == 0)
				{
					unk_0xFFD8EB5462B07B59(uParam3);
				}
			}
		}
		else
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam3))
			{
				unk_0xFFD8EB5462B07B59(uParam3);
			}
			if (!unk_0xF68107C40359970C(*uParam0))
			{
				if (!unk_0x12DD4A0B247D9B4D(*uParam1))
				{
					*uParam1 = func_70(*uParam0, 1, 145);
				}
			}
		}
	}
}

var func_68(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xC5B823372B67998A(Param0);
	unk_0x293A9399E902A33B(uVar0, func_69(unk_0x9315DBF7D972F07A(), 1f, 1f));
	unk_0xAAD76B24A5282FDD(uVar0, iParam3);
	return uVar0;
}

float func_69(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_70(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_71(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(uVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_71(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_69(unk_0x9315DBF7D972F07A(), 1f, 1f));
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
		unk_0x293A9399E902A33B(uVar0, func_69(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_69(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_72(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	struct<3> Var0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (((((((unk_0xE5965CDF24F93A9F(iParam1) && iParam0 != iParam1) && !unk_0xD2B5B1C8FC84FE0F(unk_0x15CAA6D7B11F1A7C(iParam1))) && !unk_0xD6F7D32A98E07F93(unk_0x15CAA6D7B11F1A7C(iParam1))) && !unk_0x4262B4DCEADC2695(unk_0x15CAA6D7B11F1A7C(iParam1))) && !unk_0xF4AD75B2D964D8AB(unk_0x15CAA6D7B11F1A7C(iParam1))) && unk_0x78006D212FD7243E(iParam1)) && func_76(iParam0))
		{
			if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0x6DB7FBD602C51670(*uParam2, *uParam3, Param7) };
				func_75(iParam1, uParam4, uParam5);
			}
			if (!unk_0x4D21C9FB671ED18F(iParam0))
			{
				*uParam6 = unk_0x320D1840B6DAA1CC();
			}
			else if ((unk_0x320D1840B6DAA1CC() - *uParam6) > iParam10)
			{
				if (func_74(iParam0, iParam1, 1) > fParam11 && unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!func_73(*uParam2))
					{
						if (!unk_0x0318E2EE6FB4563F(*uParam2, 3f))
						{
							unk_0xF96094A43D443C41(*uParam2, 1.5f, 0);
							unk_0x02B222EADC9DC566(*uParam2, 3f, 0, 0, 0, 0, 0, 0, 0);
							unk_0xC64B6E13A6A7F517(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0xBBF86885619695CE(iParam0, *uParam3);
							unk_0x9F65B3BAFA302A65(iParam0, 1084227584);
							unk_0xB2D5451CC5606248(iParam0, 10f);
							unk_0x371D594409A68A18(iParam0, 1, 1, 0);
							*uParam6 = unk_0x320D1840B6DAA1CC();
						}
						else
						{
							Var0 = { unk_0x6DB7FBD602C51670(Local_113, uLocal_112, Param7) };
							if (!func_73(Var0))
							{
								if (!unk_0x0318E2EE6FB4563F(Var0, 2f))
								{
									unk_0xF96094A43D443C41(Var0, 1.5f, 0);
									unk_0x02B222EADC9DC566(Var0, 3f, 0, 0, 0, 0, 0, 0, 0);
									unk_0xC64B6E13A6A7F517(iParam0, Var0, 1, 0, 0, 1);
									unk_0xBBF86885619695CE(iParam0, uLocal_112);
									unk_0x9F65B3BAFA302A65(iParam0, 1084227584);
									unk_0xB2D5451CC5606248(iParam0, 10f);
									unk_0x371D594409A68A18(iParam0, 1, 1, 0);
									*uParam6 = unk_0x320D1840B6DAA1CC();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x320D1840B6DAA1CC();
		}
	}
}

int func_73(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_74(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	if (!unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		Var3 = { unk_0x6B62510F212526DC(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x6B62510F212526DC(iParam1, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Var3, iParam2);
}

void func_75(int iParam0, var uParam1, var uParam2)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			*uParam1 = { unk_0x6B62510F212526DC(iParam0, 1) };
			*uParam2 = unk_0x82FE2343F8BDFF0B(iParam0);
		}
	}
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			if (!unk_0x7158135695FAE89D(iParam0, -1, 0))
			{
				iVar0 = unk_0xAB793EA186AB8DAA(iParam0, -1, 0);
				if (unk_0xE5965CDF24F93A9F(iVar0))
				{
					if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_77(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (unk_0xF68107C40359970C(*uParam0))
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				unk_0xFFD8EB5462B07B59(uParam1);
			}
			unk_0xB3822DB3D538C8F3(uParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0xD5C6B5E3B93A5EDC(*uParam0, 0))
			{
			}
			else if (unk_0xE5965CDF24F93A9F(*uParam2))
			{
				if (unk_0x55A0C756C4A8220C(*uParam2, 0))
				{
					if (unk_0xF6F5D18EF8EAB859(*uParam0, *uParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(*uParam2))
	{
		if (unk_0x55A0C756C4A8220C(*uParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0x64859F2B7F1E9459(*uParam2);
				unk_0xF5644C53558C678D(*uParam2);
				unk_0x5545B7D117BB40B4(*uParam2, 0);
				unk_0x3D81769BEC61BFF8(uParam2);
				if (unk_0x12DD4A0B247D9B4D(*uParam3))
				{
					unk_0xFFD8EB5462B07B59(uParam3);
				}
			}
		}
		else
		{
			unk_0x64859F2B7F1E9459(*uParam2);
			unk_0xF5644C53558C678D(*uParam2);
			unk_0x5545B7D117BB40B4(*uParam2, 0);
			unk_0x3D81769BEC61BFF8(uParam2);
			if (unk_0x12DD4A0B247D9B4D(*uParam3))
			{
				unk_0xFFD8EB5462B07B59(uParam3);
			}
		}
	}
}

int func_78()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (!bLocal_456)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_150[iVar1]))
		{
			if (!unk_0xF68107C40359970C(uLocal_150[iVar1]))
			{
				if (unk_0x77A43AFA9AAEC041(uLocal_150[iVar1], unk_0xE2D3D51028F0428A(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_155[iVar1]))
		{
			if (!unk_0xF68107C40359970C(uLocal_155[iVar1]))
			{
				if (unk_0x77A43AFA9AAEC041(uLocal_155[iVar1], unk_0xE2D3D51028F0428A(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_79()
{
	int iVar0;
	
	if (bLocal_456)
	{
		if (bLocal_267)
		{
		}
		else if (bLocal_264)
		{
			if (!unk_0xF68107C40359970C(uLocal_150[0]) && !unk_0x55B23FE400FCEA6B(uLocal_166[0], 0))
			{
			}
			if (!unk_0xF68107C40359970C(uLocal_150[1]) && !unk_0x55B23FE400FCEA6B(uLocal_166[1], 0))
			{
			}
		}
		else
		{
			if (!unk_0xF68107C40359970C(uLocal_155[0]) && !unk_0x55B23FE400FCEA6B(uLocal_171[0], 0))
			{
			}
			if (!unk_0xF68107C40359970C(uLocal_155[1]) && !unk_0x55B23FE400FCEA6B(uLocal_171[1], 0))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x12B2B502C41EF25E(uLocal_221[iVar0]);
			if (unk_0xF68107C40359970C(uLocal_150[iVar0]))
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_194[iVar0]))
				{
					unk_0xFFD8EB5462B07B59(&(uLocal_194[iVar0]));
					iLocal_124++;
				}
			}
			else if (!unk_0xD5C6B5E3B93A5EDC(uLocal_150[iVar0], 0))
			{
				if (!unk_0x12DD4A0B247D9B4D(uLocal_194[iVar0]))
				{
					uLocal_194[iVar0] = func_70(uLocal_150[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x12B2B502C41EF25E(uLocal_221[iVar0]);
			if (unk_0xF68107C40359970C(uLocal_155[iVar0]))
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_199[iVar0]))
				{
					unk_0xFFD8EB5462B07B59(&(uLocal_199[iVar0]));
					iLocal_125++;
				}
			}
			else if (!unk_0xD5C6B5E3B93A5EDC(uLocal_155[iVar0], 0))
			{
				if (!unk_0x12DD4A0B247D9B4D(uLocal_199[iVar0]))
				{
					uLocal_199[iVar0] = func_70(uLocal_155[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_124 >= 4 && iLocal_125 >= 4)
		{
			func_44();
		}
	}
	func_100();
	func_99();
	switch (iLocal_48)
	{
		case 0:
			if (((unk_0xE7CDC562B263CA12(unk_0x9E2D6C50374FCFA9()) || !unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_234 + Vector(0f, 20f, 0f), 170f, 270f, 50f, 0, 1, 0)) || unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, 0, 1, 0)) || unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, 0, 1, 0))
			{
				if (!bLocal_267)
				{
					if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, 0, 1, 0) || unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, 0, 1, 0))
					{
						bLocal_267 = true;
					}
				}
				if (unk_0xDFCBBD9528DC1828(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), &Local_240, 1, 1077936128, 0))
				{
					if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_240, 20f, 20f, 20f, 0, 1, 0))
					{
						unk_0x07CECF421D895F3D(5, 1);
						unk_0x07CECF421D895F3D(3, 1);
						unk_0xC1B1E9A034A63A62(0);
						func_97();
						iLocal_48 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 5000 || bLocal_267)
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_48 = 2;
			}
			break;
		
		case 2:
			if (bLocal_267)
			{
				if (unk_0x83666F9FB8FEBD4B() > 3500)
				{
					if (((!unk_0x55B23FE400FCEA6B(uLocal_176[0], 0) && !unk_0x55B23FE400FCEA6B(uLocal_176[1], 0)) && !unk_0xF68107C40359970C(uLocal_150[0])) && !unk_0xF68107C40359970C(uLocal_150[1]))
					{
						unk_0xA9F390242F9EB2E1(uLocal_150[0], uLocal_176[0], -1);
						unk_0xA9F390242F9EB2E1(uLocal_150[1], uLocal_176[1], -1);
						unk_0xBC12D08EE7559CCD(uLocal_150[0], 3, 0);
						unk_0xBC12D08EE7559CCD(uLocal_150[1], 3, 0);
						unk_0xA84812D8D6EE8D32(uLocal_150[0], 0);
						unk_0xA84812D8D6EE8D32(uLocal_150[1], 0);
						iLocal_48 = 5;
					}
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 10000)
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if (!unk_0xF30A227F7990AE00(unk_0xE2D3D51028F0428A(), joaat("rebel")))
					{
						iLocal_48 = 3;
					}
					else
					{
						iLocal_48 = 4;
					}
				}
				else
				{
					iLocal_48 = 3;
				}
			}
			break;
		
		case 3:
			Local_243 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			uLocal_132 = unk_0x5853B15F78E1A265(10, 15);
			if (!unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, 0, 1, 0))
			{
				if (unk_0x29579BC5971CA4B6(Local_243, uLocal_132, &(Local_439[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_439[1 /*3*/] = { Local_439[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x0318E2EE6FB4563F(Local_439[0 /*3*/], 7f) && !unk_0x0318E2EE6FB4563F(Local_439[1 /*3*/], 7f))
					{
						if (unk_0x55A0C756C4A8220C(uLocal_166[0], 0))
						{
							unk_0xC64B6E13A6A7F517(uLocal_166[0], Local_439[0 /*3*/], 1, 0, 0, 1);
							func_96(uLocal_166[0], uLocal_150[0]);
						}
						if (unk_0x55A0C756C4A8220C(uLocal_166[1], 0))
						{
							unk_0xC64B6E13A6A7F517(uLocal_166[1], Local_439[1 /*3*/], 1, 0, 0, 1);
							func_96(uLocal_166[1], uLocal_150[1]);
						}
						if (func_38() == 0)
						{
							func_80(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_38() == 1)
						{
							func_80(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_38() == 2)
						{
							func_80(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_264 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_48 = 6;
					}
				}
			}
			break;
		
		case 4:
			Local_243 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			uLocal_132 = unk_0x5853B15F78E1A265(30, 35);
			if (!unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, 0, 1, 0))
			{
				if (unk_0x29579BC5971CA4B6(Local_243, uLocal_132, &(Local_439[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_439[1 /*3*/] = { Local_439[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x0318E2EE6FB4563F(Local_439[0 /*3*/], 7f) && !unk_0x0318E2EE6FB4563F(Local_439[1 /*3*/], 7f))
					{
						if (unk_0x55A0C756C4A8220C(uLocal_171[0], 0))
						{
							unk_0xC64B6E13A6A7F517(uLocal_171[0], Local_439[0 /*3*/], 1, 0, 0, 1);
							func_96(uLocal_171[0], uLocal_155[0]);
						}
						if (unk_0x55A0C756C4A8220C(uLocal_171[1], 0))
						{
							unk_0xC64B6E13A6A7F517(uLocal_171[1], Local_439[1 /*3*/], 1, 0, 0, 1);
							func_96(uLocal_171[1], uLocal_155[1]);
						}
						if (func_38() == 0)
						{
							func_80(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_38() == 1)
						{
							func_80(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_38() == 2)
						{
							func_80(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_265 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_48 = 6;
					}
				}
			}
			break;
		
		case 5:
			Local_243 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			uLocal_132 = unk_0x5853B15F78E1A265(5, 10);
			if (unk_0x29579BC5971CA4B6(Local_243, uLocal_132, &(Local_439[0 /*3*/]), 1, 1077936128, 0))
			{
				Local_439[1 /*3*/] = { Local_439[0 /*3*/] + Vector(0f, 5f, 0f) };
				if (!unk_0x0318E2EE6FB4563F(Local_439[0 /*3*/], 7f) && !unk_0x0318E2EE6FB4563F(Local_439[1 /*3*/], 7f))
				{
					if (unk_0x55A0C756C4A8220C(uLocal_176[0], 0))
					{
						unk_0xC64B6E13A6A7F517(uLocal_176[0], Local_439[0 /*3*/], 1, 0, 0, 1);
						func_96(uLocal_176[0], uLocal_150[0]);
					}
					if (unk_0x55A0C756C4A8220C(uLocal_176[1], 0))
					{
						unk_0xC64B6E13A6A7F517(uLocal_176[1], Local_439[1 /*3*/], 1, 0, 0, 1);
						func_96(uLocal_176[1], uLocal_150[1]);
					}
					if (func_38() == 0)
					{
						func_80(&uLocal_271, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_38() == 1)
					{
						func_80(&uLocal_271, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_38() == 2)
					{
						func_80(&uLocal_271, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_264 = true;
					unk_0xC1B1E9A034A63A62(0);
					iLocal_48 = 6;
				}
			}
			break;
		
		case 6:
			if (func_66())
			{
				fLocal_120 = unk_0xC4EAB25A108C2429(1.5f, 2.5f);
				fLocal_121 = unk_0xC4EAB25A108C2429(2f, 4f);
				fLocal_122 = unk_0xC4EAB25A108C2429(0.1f, 2f);
				if (iLocal_134 < 5 && iLocal_135 < unk_0x320D1840B6DAA1CC())
				{
					Local_90 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
					unk_0xDB6AD61CE00E8A46((Local_90.f_0 + fLocal_120), (Local_90.f_1 + fLocal_121), (Local_90.f_2 + fLocal_122), (Local_90.f_0 - fLocal_120), (Local_90.f_1 - fLocal_121), Local_90.f_2, 10, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
					iLocal_135 = (unk_0x320D1840B6DAA1CC() + unk_0x5853B15F78E1A265(200, 500));
					iLocal_134++;
				}
			}
			if (iLocal_134 > 4)
			{
				iLocal_48 = 7;
			}
			break;
	}
}

bool func_80(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_95(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_81(sParam2, iParam3, 0);
}

int func_81(char* sParam0, int iParam1, bool bParam2)
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
					func_94();
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
		if (func_93(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_92();
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
				func_91();
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
				if (func_90())
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
			if (func_89())
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
			func_88();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_87();
		func_82();
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
		func_94();
	}
	return 0;
}

void func_82()
{
	if (!func_83())
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

int func_83()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_86())
	{
		return 0;
	}
	if (func_84(unk_0x9E2D6C50374FCFA9()))
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

bool func_84(int iParam0)
{
	return func_85(iParam0, 20);
}

var func_85(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_86()
{
	return -1;
}

void func_87()
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

void func_88()
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

int func_89()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_90()
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

void func_91()
{
	if (func_32(14))
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
		Global_20266 = func_38();
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

void func_92()
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

bool func_93(int iParam0, int iParam1)
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

void func_94()
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

void func_95(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_96(int iParam0, var uParam1)
{
	unk_0x5C65DDDC219B3AA5(uParam0, 0);
	unk_0x9F65B3BAFA302A65(uParam0, 1084227584);
	Local_436 = { unk_0x6B62510F212526DC(iParam0, 1) };
	Local_452 = { Local_243 - Local_436 };
	unk_0xBBF86885619695CE(iParam0, unk_0xD12EFCAB87804BED(Local_452.f_0, Local_452.f_1));
	if (bLocal_267)
	{
		if (!unk_0xF68107C40359970C(uParam1))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				unk_0x9286A110A3FD81F1(uParam1, unk_0xE2D3D51028F0428A());
				unk_0x4EDE34FBADD967A6(1);
				if (!unk_0xF68107C40359970C(uParam1))
				{
					unk_0xC8D0B0D2CFD76BB5(uParam1, 32, 1);
				}
			}
			else
			{
				unk_0xB69D13E19147910F(uParam1, iParam0, unk_0xE2D3D51028F0428A(), 6, 20f, 786469, -1f, -1f, 1);
			}
			if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
			{
				unk_0xB2D5451CC5606248(iParam0, unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()));
			}
		}
	}
	else if (!unk_0xF68107C40359970C(uParam1))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			unk_0x9286A110A3FD81F1(uParam1, unk_0xE2D3D51028F0428A());
		}
		else
		{
			unk_0xB69D13E19147910F(uParam1, iParam0, unk_0xE2D3D51028F0428A(), 2, 100f, 786469, -1f, -1f, 1);
		}
		unk_0xB2D5451CC5606248(iParam0, unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()));
	}
}

void func_97()
{
	int iVar0;
	
	uLocal_166[0] = unk_0xBA715A7BEBA5A1F9(joaat("rebel"), -1595.964f, 4732.479f, 0f, 305f, 1, 1, 0);
	unk_0x2D58A6131679D82C(uLocal_166[0], 1, 0);
	unk_0x371D594409A68A18(uLocal_166[0], 1, 1, 0);
	unk_0xE5283B3A324D3FB0(uLocal_166[0], 2);
	unk_0x0407CF7EFEE35240(uLocal_166[0], 1);
	unk_0x5C65DDDC219B3AA5(uLocal_166[0], 1);
	unk_0x2C2F2F6BEE7AC7E7(uLocal_166[0], "49GNL112");
	uLocal_166[1] = unk_0xBA715A7BEBA5A1F9(joaat("rebel"), -1570.34f, 4733.755f, 0f, 305f, 1, 1, 0);
	unk_0x2D58A6131679D82C(uLocal_166[1], 1, 0);
	unk_0x371D594409A68A18(uLocal_166[1], 1, 1, 0);
	unk_0xE5283B3A324D3FB0(uLocal_166[1], 2);
	unk_0x0407CF7EFEE35240(uLocal_166[1], 1);
	unk_0x5C65DDDC219B3AA5(uLocal_166[1], 1);
	unk_0x2C2F2F6BEE7AC7E7(uLocal_166[1], "47TMS703");
	uLocal_176[0] = unk_0xBA715A7BEBA5A1F9(joaat("sanchez"), Vector(0f, 4732.479f, -1595.964f) + Vector(10f, 10f, 10f), 305f, 1, 1, 0);
	unk_0x2D58A6131679D82C(uLocal_176[0], 1, 0);
	unk_0x371D594409A68A18(uLocal_176[0], 1, 1, 0);
	unk_0xE5283B3A324D3FB0(uLocal_176[0], 2);
	unk_0x0407CF7EFEE35240(uLocal_176[0], 1);
	unk_0x5C65DDDC219B3AA5(uLocal_176[0], 1);
	unk_0x2C2F2F6BEE7AC7E7(uLocal_176[0], "49GNL112");
	uLocal_176[1] = unk_0xBA715A7BEBA5A1F9(joaat("sanchez"), Vector(0f, 4733.755f, -1570.34f) + Vector(10f, 10f, 10f), 305f, 1, 1, 0);
	unk_0x2D58A6131679D82C(uLocal_176[1], 1, 0);
	unk_0x371D594409A68A18(uLocal_176[1], 1, 1, 0);
	unk_0xE5283B3A324D3FB0(uLocal_176[1], 2);
	unk_0x0407CF7EFEE35240(uLocal_176[1], 1);
	unk_0x5C65DDDC219B3AA5(uLocal_176[1], 1);
	unk_0x2C2F2F6BEE7AC7E7(uLocal_176[1], "47TMS703");
	uLocal_150[0] = unk_0x487C17B41938052C(uLocal_166[0], 26, joaat("g_m_m_chigoon_02"), -1, 1, 1);
	uLocal_150[1] = unk_0x487C17B41938052C(uLocal_166[1], 26, joaat("g_m_m_chigoon_02"), -1, 1, 1);
	if (!bLocal_267)
	{
		uLocal_150[2] = unk_0x487C17B41938052C(uLocal_166[0], 26, joaat("g_m_m_chigoon_02"), 0, 1, 1);
		uLocal_150[3] = unk_0x487C17B41938052C(uLocal_166[1], 26, joaat("g_m_m_chigoon_02"), 0, 1, 1);
	}
	uLocal_171[0] = unk_0xBA715A7BEBA5A1F9(joaat("bobcatxl"), -1356.281f, 5000f, 0f, 125.2811f, 1, 1, 0);
	unk_0x2D58A6131679D82C(uLocal_171[0], 1, 0);
	unk_0x371D594409A68A18(uLocal_171[0], 1, 1, 0);
	unk_0xE5283B3A324D3FB0(uLocal_171[0], 2);
	unk_0x0407CF7EFEE35240(uLocal_171[0], 1);
	unk_0x5C65DDDC219B3AA5(uLocal_171[0], 1);
	unk_0x2C2F2F6BEE7AC7E7(uLocal_171[0], "49GNL112");
	uLocal_171[1] = unk_0xBA715A7BEBA5A1F9(joaat("bobcatxl"), -1373.589f, 5000f, 0f, 125.459f, 1, 1, 0);
	unk_0x2D58A6131679D82C(uLocal_171[1], 1, 0);
	unk_0x371D594409A68A18(uLocal_171[1], 1, 1, 0);
	unk_0xE5283B3A324D3FB0(uLocal_171[1], 2);
	unk_0x0407CF7EFEE35240(uLocal_171[1], 1);
	unk_0x5C65DDDC219B3AA5(uLocal_171[1], 1);
	unk_0x2C2F2F6BEE7AC7E7(uLocal_171[1], "47TMS703");
	uLocal_155[0] = unk_0x487C17B41938052C(uLocal_171[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
	uLocal_155[1] = unk_0x487C17B41938052C(uLocal_171[1], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
	uLocal_155[2] = unk_0x487C17B41938052C(uLocal_171[0], 26, joaat("g_m_y_salvagoon_03"), 0, 1, 1);
	uLocal_155[3] = unk_0x487C17B41938052C(uLocal_171[1], 26, joaat("g_m_y_salvagoon_03"), 0, 1, 1);
	unk_0xD642E010A287ADFD("RE_deal1", &iLocal_268);
	unk_0xD642E010A287ADFD("RE_deal2", &iLocal_269);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xF68107C40359970C(uLocal_150[iVar0]))
		{
			unk_0xFF4BEB6CFF55A013(uLocal_150[iVar0], iLocal_268);
			unk_0x2D58A6131679D82C(uLocal_150[iVar0], 1, 0);
			if (bLocal_267)
			{
				unk_0x9521FB98DB6DDF50(uLocal_150[0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
				if (!unk_0xF68107C40359970C(uLocal_150[1]))
				{
					unk_0x9521FB98DB6DDF50(uLocal_150[1], joaat("weapon_pistol"), -1, 1, 1);
				}
				unk_0x348A212511C78DBF(uLocal_150[iVar0], 15);
				unk_0xBC12D08EE7559CCD(uLocal_150[iVar0], 3, 0);
			}
			else
			{
				unk_0x9521FB98DB6DDF50(uLocal_150[iVar0], joaat("weapon_pistol"), -1, 1, 1);
				unk_0x348A212511C78DBF(uLocal_150[iVar0], 13);
			}
			unk_0xBC12D08EE7559CCD(uLocal_150[iVar0], 13, 1);
			unk_0xBC12D08EE7559CCD(uLocal_150[iVar0], 2, 1);
			unk_0xBC12D08EE7559CCD(uLocal_150[iVar0], 1, 1);
			func_98(&uLocal_271, 4, uLocal_150[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xF68107C40359970C(uLocal_150[iVar0]))
		{
			unk_0xFF4BEB6CFF55A013(uLocal_155[iVar0], iLocal_269);
			unk_0x2D58A6131679D82C(uLocal_155[iVar0], 1, 0);
			if (bLocal_267)
			{
				unk_0x9521FB98DB6DDF50(uLocal_150[0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
				if (!unk_0xF68107C40359970C(uLocal_150[1]))
				{
					unk_0x9521FB98DB6DDF50(uLocal_150[1], joaat("weapon_pistol"), -1, 1, 1);
				}
				unk_0x348A212511C78DBF(uLocal_150[iVar0], 15);
				unk_0xBC12D08EE7559CCD(uLocal_150[iVar0], 3, 0);
				func_98(&uLocal_271, 4, uLocal_150[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				unk_0x9521FB98DB6DDF50(uLocal_155[iVar0], joaat("weapon_pistol"), -1, 1, 1);
				unk_0x348A212511C78DBF(uLocal_155[iVar0], 13);
				func_98(&uLocal_271, 5, uLocal_155[iVar0], "REDGWSalvadoran", 0, 1);
			}
			unk_0xBC12D08EE7559CCD(uLocal_155[iVar0], 13, 1);
			unk_0xBC12D08EE7559CCD(uLocal_155[iVar0], 2, 1);
			unk_0xBC12D08EE7559CCD(uLocal_155[iVar0], 1, 1);
		}
		iVar0++;
	}
	unk_0x9972EFADA7A2A47D(3, iLocal_268, iLocal_269);
	unk_0x9972EFADA7A2A47D(3, iLocal_269, iLocal_268);
	unk_0x9972EFADA7A2A47D(3, iLocal_268, joaat("player"));
	unk_0x9972EFADA7A2A47D(3, iLocal_269, joaat("player"));
	unk_0xF1A23B343DFEDFD0(joaat("g_m_m_chigoon_02"));
	unk_0xF1A23B343DFEDFD0(joaat("g_m_y_salvagoon_03"));
	unk_0xF1A23B343DFEDFD0(joaat("rebel"));
	unk_0xF1A23B343DFEDFD0(joaat("bobcatxl"));
	unk_0xF1A23B343DFEDFD0(joaat("sanchez"));
	unk_0xF1A23B343DFEDFD0(joaat("a_c_rottweiler"));
	bLocal_456 = true;
	iLocal_46 = 1;
}

void func_98(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
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

void func_99()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iLocal_130)
	{
		case 0:
			if (bLocal_264)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (!unk_0xF68107C40359970C(uLocal_150[iVar0]))
					{
						if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), uLocal_150[iVar0], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_130 = 3;
						}
					}
					iVar0++;
				}
			}
			if (bLocal_265)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!unk_0xF68107C40359970C(uLocal_155[iVar1]))
					{
						if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), uLocal_155[iVar1], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_130 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			unk_0x9972EFADA7A2A47D(5, iLocal_268, iLocal_269);
			unk_0x9972EFADA7A2A47D(5, iLocal_269, iLocal_268);
			unk_0x9972EFADA7A2A47D(5, iLocal_268, joaat("player"));
			unk_0x9972EFADA7A2A47D(5, iLocal_269, joaat("player"));
			if (bLocal_264)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0xF68107C40359970C(uLocal_150[iVar2]))
					{
						if ((!unk_0xCED7266BAB0BDC20(uLocal_150[iVar2], 0) && unk_0x174CED88B97C78D9(uLocal_150[iVar2], joaat("script_task_vehicle_chase")) != 1) && unk_0x174CED88B97C78D9(uLocal_150[iVar2], joaat("script_task_vehicle_chase")) != 0)
						{
							unk_0x03A927199A2DFE46(uLocal_150[iVar2]);
							unk_0xC1A74225341AA9FB(uLocal_150[iVar2], unk_0xE2D3D51028F0428A(), 0, 16);
							unk_0xABC2CA6F28903308(uLocal_150[iVar2], 1);
						}
					}
					iVar2++;
				}
				if (func_80(&uLocal_271, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_127 = unk_0x320D1840B6DAA1CC();
					iLocal_130 = 4;
				}
			}
			if (bLocal_265)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!unk_0xF68107C40359970C(uLocal_155[iVar3]))
					{
						if ((!unk_0xCED7266BAB0BDC20(uLocal_155[iVar3], 0) && unk_0x174CED88B97C78D9(uLocal_155[iVar3], joaat("script_task_vehicle_chase")) != 1) && unk_0x174CED88B97C78D9(uLocal_155[iVar3], joaat("script_task_vehicle_chase")) != 0)
						{
							unk_0x03A927199A2DFE46(uLocal_155[iVar3]);
							unk_0xC1A74225341AA9FB(uLocal_155[iVar3], unk_0xE2D3D51028F0428A(), 0, 16);
							unk_0xABC2CA6F28903308(uLocal_155[iVar3], 1);
						}
					}
					iVar3++;
				}
				if (func_80(&uLocal_271, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_127 = unk_0x320D1840B6DAA1CC();
					iLocal_130 = 4;
				}
			}
			break;
	}
}

void func_100()
{
	switch (iLocal_128)
	{
		case 0:
			if (!unk_0xF68107C40359970C(uLocal_136))
			{
				if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_237, 7f, 7f, 10f, 0, 1, 0))
				{
					func_102();
					unk_0x4EDE34FBADD967A6(0);
					func_80(&uLocal_271, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					unk_0xF30F15F203736DE4(uLocal_136, unk_0xE2D3D51028F0428A(), -1, 2048, 2);
					if (!unk_0x12DD4A0B247D9B4D(uLocal_182))
					{
						uLocal_182 = func_101(uLocal_214);
					}
					iLocal_127 = unk_0x320D1840B6DAA1CC();
					iLocal_128++;
				}
			}
			else
			{
				iLocal_128++;
			}
			break;
	}
	switch (iLocal_129)
	{
		case 1:
			if (!unk_0xF68107C40359970C(uLocal_136))
			{
				if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), uLocal_136, 10f, 10f, 6f, 0, 1, 0))
				{
					if (!func_66())
					{
						func_80(&uLocal_271, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!unk_0xF68107C40359970C(uLocal_136))
						{
							unk_0xF30F15F203736DE4(uLocal_136, unk_0xE2D3D51028F0428A(), -1, 2048, 2);
							unk_0x5AE11BC36633DE4E(0);
							iLocal_129++;
						}
					}
				}
			}
			else
			{
				unk_0x5AE11BC36633DE4E(0);
				iLocal_129++;
			}
			break;
		
		case 2:
			if (!func_66() || unk_0xC9D9444186B5A374() > 4000)
			{
				if (!unk_0xF68107C40359970C(uLocal_136))
				{
					unk_0xF160248D9083ED0C(uLocal_136, 0, 0);
					unk_0xFFD8EB5462B07B59(&uLocal_183);
				}
				if (unk_0xC9D9444186B5A374() > 7000)
				{
					if (!unk_0xF68107C40359970C(uLocal_137[6]))
					{
						unk_0xF160248D9083ED0C(uLocal_137[6], 0, 0);
						unk_0xFFD8EB5462B07B59(&(uLocal_184[6]));
					}
				}
				if (unk_0xC9D9444186B5A374() > 9000)
				{
					if (!unk_0xF68107C40359970C(uLocal_137[7]))
					{
						unk_0xF160248D9083ED0C(uLocal_137[7], 0, 0);
						unk_0xFFD8EB5462B07B59(&(uLocal_184[7]));
					}
					iLocal_129++;
				}
			}
			break;
		
		case 3:
			if (!unk_0xF68107C40359970C(uLocal_137[6]))
			{
				unk_0xF160248D9083ED0C(uLocal_137[6], 0, 0);
			}
			if (!unk_0xF68107C40359970C(uLocal_137[7]))
			{
				unk_0xF160248D9083ED0C(uLocal_137[7], 0, 0);
			}
			if (!unk_0xF68107C40359970C(uLocal_136))
			{
				unk_0xF160248D9083ED0C(uLocal_136, 0, 0);
			}
			break;
	}
}

int func_101(var uParam0)
{
	var uVar0;
	
	if (!unk_0x2791155FB0769FE5(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x455B7FFC90053189(uParam0);
	unk_0x293A9399E902A33B(uVar0, func_69(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	return uVar0;
}

void func_102()
{
	Global_20471 = 0;
	func_103();
}

void func_103()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
	}
}

void func_104()
{
	int iVar0;
	
	if (unk_0x803592456AE579B3(uLocal_214))
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_181))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_181);
		}
		if (unk_0x12DD4A0B247D9B4D(uLocal_182))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_182);
		}
		iLocal_129 = 1;
		iLocal_47 = 2;
		iLocal_46 = 0;
	}
	else
	{
		unk_0x8576657A629C4B0A(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xE5965CDF24F93A9F(uLocal_137[iVar0]))
			{
				if (!unk_0xF68107C40359970C(uLocal_137[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (unk_0x12DD4A0B247D9B4D(uLocal_184[iVar0]))
				{
					unk_0xFFD8EB5462B07B59(&(uLocal_184[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_147)
		{
			if (!unk_0xF68107C40359970C(iLocal_147[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_132())
		{
			if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_52[7 /*3*/], 110f, 95f, 40f, 0, 1, 0))
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_181))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_181);
				}
				if ((!unk_0x12DD4A0B247D9B4D(uLocal_183) && !unk_0x12DD4A0B247D9B4D(uLocal_184[6])) && !unk_0x12DD4A0B247D9B4D(uLocal_184[7]))
				{
					uLocal_183 = func_70(uLocal_136, 1, 145);
					uLocal_184[6] = func_70(uLocal_137[6], 1, 145);
					uLocal_184[7] = func_70(uLocal_137[7], 1, 145);
				}
				unk_0x3430966AC4550BB9(uLocal_183, 0);
				unk_0x3430966AC4550BB9(uLocal_184[6], 0);
				unk_0x3430966AC4550BB9(uLocal_184[7], 0);
				func_105(1);
			}
		}
		if (!unk_0xF68107C40359970C(uLocal_137[6]))
		{
			if (((((unk_0x174CED88B97C78D9(uLocal_137[6], joaat("script_task_synchronized_scene")) != 1 && unk_0x174CED88B97C78D9(uLocal_137[6], joaat("script_task_synchronized_scene")) != 0) || unk_0xEF9410C312F2B117(uLocal_137[6])) || unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), uLocal_137[6])) || unk_0xE10B76698E5CF067(uLocal_137[6])) || unk_0x5D5890DBA617ACC7(uLocal_137[6]))
			{
				unk_0xF160248D9083ED0C(uLocal_137[6], 0, 0);
			}
		}
		if (!unk_0xF68107C40359970C(uLocal_137[7]))
		{
			if (((((unk_0x174CED88B97C78D9(uLocal_137[7], joaat("script_task_synchronized_scene")) != 1 && unk_0x174CED88B97C78D9(uLocal_137[7], joaat("script_task_synchronized_scene")) != 0) || unk_0xEF9410C312F2B117(uLocal_137[7])) || unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), uLocal_137[7])) || unk_0xE10B76698E5CF067(uLocal_137[7])) || unk_0x5D5890DBA617ACC7(uLocal_137[7]))
			{
				unk_0xF160248D9083ED0C(uLocal_137[7], 0, 0);
			}
		}
		if (!unk_0xF68107C40359970C(uLocal_136))
		{
			if (((((unk_0x174CED88B97C78D9(uLocal_136, joaat("script_task_synchronized_scene")) != 1 && unk_0x174CED88B97C78D9(uLocal_136, joaat("script_task_synchronized_scene")) != 0) || unk_0xEF9410C312F2B117(uLocal_136)) || unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), uLocal_136)) || unk_0xE10B76698E5CF067(uLocal_136)) || unk_0x5D5890DBA617ACC7(uLocal_136))
			{
				unk_0xF160248D9083ED0C(uLocal_136, 0, 0);
			}
		}
		if (!bLocal_263)
		{
		}
	}
	func_100();
	switch (iLocal_131)
	{
		case 0:
			if (!unk_0xF68107C40359970C(uLocal_137[6]))
			{
				if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), unk_0x6B62510F212526DC(uLocal_137[6], 1) + Vector(0f, 2.5f, 0f), 9f, 5f, 5f, 0, 1, 0) && unk_0xD32EE22119FFF87D(unk_0xE2D3D51028F0428A(), uLocal_137[6]))
				{
					unk_0xF30F15F203736DE4(uLocal_137[6], unk_0xE2D3D51028F0428A(), -1, 2048, 2);
					unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), uLocal_137[6], 4000, 2048, 2);
					func_80(&uLocal_271, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_127 = unk_0x320D1840B6DAA1CC();
					iLocal_131 = 1;
				}
			}
			if (!unk_0xF68107C40359970C(uLocal_137[7]))
			{
				if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), unk_0x6B62510F212526DC(uLocal_137[7], 1) + Vector(0f, 3f, 0f), 9f, 7f, 5f, 0, 1, 0) && unk_0xD32EE22119FFF87D(unk_0xE2D3D51028F0428A(), uLocal_137[7]))
				{
					unk_0xF30F15F203736DE4(uLocal_137[7], unk_0xE2D3D51028F0428A(), -1, 2048, 2);
					unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), uLocal_137[7], 4000, 2048, 2);
					func_80(&uLocal_271, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_127 = unk_0x320D1840B6DAA1CC();
					iLocal_131 = 1;
				}
			}
			if (unk_0xF68107C40359970C(uLocal_137[6]) && unk_0xF68107C40359970C(uLocal_137[7]))
			{
				iLocal_131 = 2;
			}
			break;
		
		case 1:
			if (unk_0x12DD4A0B247D9B4D(uLocal_183))
			{
				unk_0x3430966AC4550BB9(uLocal_183, 1);
			}
			if (unk_0x12DD4A0B247D9B4D(uLocal_184[6]))
			{
				unk_0x3430966AC4550BB9(uLocal_184[6], 1);
			}
			if (unk_0x12DD4A0B247D9B4D(uLocal_184[7]))
			{
				unk_0x3430966AC4550BB9(uLocal_184[7], 1);
			}
			iLocal_126 = unk_0x320D1840B6DAA1CC();
			if ((iLocal_126 - iLocal_127) > 6000 && !func_66())
			{
				if (!unk_0xF68107C40359970C(uLocal_137[6]))
				{
				}
				if (!unk_0xF68107C40359970C(uLocal_137[7]))
				{
				}
				if (!unk_0x12DD4A0B247D9B4D(uLocal_182))
				{
					uLocal_182 = func_101(uLocal_214);
				}
				unk_0x8576657A629C4B0A(0f);
				if (!func_132())
				{
					func_105(1);
				}
				iLocal_131 = 2;
			}
			break;
	}
}

int func_105(int iParam0)
{
	if (func_109())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x320D1840B6DAA1CC();
		if (func_54(Global_113375))
		{
			func_106(0);
		}
		unk_0xEFE837B21D5CF02C(1, "RE_TITLE");
		if (iParam0 && func_54(Global_113375))
		{
			unk_0xC70E97154CC5B243();
		}
		return 1;
	}
	return 0;
}

void func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_107(func_108(iParam0), -1);
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
					func_107(func_108(iParam0), -1);
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
					func_107(func_108(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0xCED9E32812D6C7C7(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_107(var uParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

char* func_108(int iParam0)
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

int func_109()
{
	switch (func_110(&Global_32019, 0, 5, 0, unk_0x69CE66B03B2184EB()))
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

int func_110(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_114(0))
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
		if (!func_112(iParam2))
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
			func_111(uParam0, iParam4);
		}
	}
	return 2;
}

void func_111(var uParam0, int iParam1)
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

bool func_112(int iParam0)
{
	return func_113(iParam0, Global_43052);
}

int func_113(int iParam0, int iParam1)
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

int func_114(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_112(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_115()
{
	int iVar0;
	
	if (!unk_0x55B23FE400FCEA6B(uLocal_160[0], 0))
	{
		if (unk_0xAB793EA186AB8DAA(uLocal_160[0], -1, 0) == uLocal_137[8])
		{
			unk_0x90CC747689895BCA(uLocal_160[0], 60000f);
			unk_0xCFC69C95792129EA(uLocal_160[0]);
		}
	}
	if (!unk_0xF68107C40359970C(uLocal_136))
	{
		if (unk_0x32DCDA1B2F8A0694(uLocal_136))
		{
			unk_0xF160248D9083ED0C(uLocal_136, 0, 0);
		}
	}
	else if (unk_0x12DD4A0B247D9B4D(uLocal_183))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_183);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x0318E2EE6FB4563F(Local_234, 30f) && unk_0x2A488C176D52CCA5(func_2(unk_0x9E2D6C50374FCFA9()), Local_234) > 300f)
		{
			if (unk_0xE5965CDF24F93A9F(uLocal_137[iVar0]))
			{
				unk_0xB3822DB3D538C8F3(&(uLocal_137[iVar0]));
			}
		}
		if (unk_0xF68107C40359970C(uLocal_137[iVar0]))
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_184[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_184[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_116()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	unk_0xD69A0C3662175E68(joaat("g_m_m_chigoon_02"));
	unk_0xD69A0C3662175E68(joaat("g_m_y_salvagoon_03"));
	unk_0xD69A0C3662175E68(joaat("rebel"));
	unk_0xD69A0C3662175E68(joaat("bobcatxl"));
	unk_0xD69A0C3662175E68(joaat("sanchez"));
	unk_0xD69A0C3662175E68(joaat("a_c_rottweiler"));
	unk_0xD69A0C3662175E68(joaat("prop_security_case_01"));
	unk_0x8FB472886552D737("random@dealgonewrong");
	unk_0x8FB472886552D737("random@dealgonewrongdead_peds");
	if ((((((((unk_0x0152AA00FA3130F1(joaat("g_m_m_chigoon_02")) && unk_0x0152AA00FA3130F1(joaat("g_m_y_salvagoon_03"))) && unk_0x0152AA00FA3130F1(joaat("rebel"))) && unk_0x0152AA00FA3130F1(joaat("bobcatxl"))) && unk_0x0152AA00FA3130F1(joaat("sanchez"))) && unk_0x0152AA00FA3130F1(joaat("a_c_rottweiler"))) && unk_0x0152AA00FA3130F1(joaat("prop_security_case_01"))) && unk_0x6F940C2636C076AD("random@dealgonewrong")) && unk_0x6F940C2636C076AD("random@dealgonewrongdead_peds"))
	{
		unk_0x2915D98110F23A29(Local_234 - Vector(150f, 150f, 150f), Local_234 + Vector(150f, 150f, 150f), 0, 1, 1, 1);
		unk_0x7CD708DEB04F8474(joaat("bobcatxl"), 1);
		unk_0x7CD708DEB04F8474(joaat("rebel"), 1);
		unk_0x07CECF421D895F3D(5, 0);
		unk_0x07CECF421D895F3D(3, 0);
		uLocal_160[0] = unk_0xBA715A7BEBA5A1F9(joaat("bobcatxl"), -1626.94f, 4729.889f, 51.3463f, 347.1188f, 1, 1, 0);
		unk_0x2D58A6131679D82C(uLocal_160[0], 1, 0);
		unk_0x9F65B3BAFA302A65(uLocal_160[0], 1084227584);
		unk_0x371D594409A68A18(uLocal_160[0], 1, 1, 0);
		unk_0xE5283B3A324D3FB0(uLocal_160[0], 2);
		unk_0x2EE80CD0EAEB9B5B(uLocal_160[0], 500f);
		unk_0x448AD51B3157C957(uLocal_160[0], 500f);
		unk_0x45A6EA15139A0C54(uLocal_160[0], 1, 1);
		unk_0x7517A117EA38D570(uLocal_160[0], 0, 0, 1148846080);
		unk_0xBDBA586F627A444A(uLocal_160[0], 6);
		unk_0xD501428969A52C0F(uLocal_160[0], "RADIO_06_COUNTRY");
		unk_0x2C2F2F6BEE7AC7E7(uLocal_160[0], "76JON418");
		unk_0xBD10A469F50E1A2A(uLocal_160[0], 1);
		uLocal_160[1] = unk_0xBA715A7BEBA5A1F9(joaat("rebel"), -1619.432f, 4747.792f, 52.7502f, 146.6017f, 1, 1, 0);
		unk_0x2D58A6131679D82C(uLocal_160[1], 1, 0);
		unk_0x9F65B3BAFA302A65(uLocal_160[1], 1084227584);
		unk_0x371D594409A68A18(uLocal_160[1], 1, 1, 0);
		unk_0xE5283B3A324D3FB0(uLocal_160[1], 2);
		unk_0x2EE80CD0EAEB9B5B(uLocal_160[1], 600f);
		unk_0x448AD51B3157C957(uLocal_160[1], 400f);
		unk_0x45A6EA15139A0C54(uLocal_160[1], 1, 1);
		unk_0x45A6EA15139A0C54(uLocal_160[1], 2, 1);
		unk_0x45A6EA15139A0C54(uLocal_160[1], 3, 0);
		unk_0x45A6EA15139A0C54(uLocal_160[1], 4, 0);
		unk_0xBDBA586F627A444A(uLocal_160[1], 6);
		unk_0xD501428969A52C0F(uLocal_160[1], "RADIO_06_COUNTRY");
		unk_0x2C2F2F6BEE7AC7E7(uLocal_160[1], "79ERK121");
		unk_0xBD10A469F50E1A2A(uLocal_160[1], 1);
		unk_0x32CAC81EC8C5BA86(uLocal_160[1], 1);
		uLocal_160[2] = unk_0xBA715A7BEBA5A1F9(joaat("bobcatxl"), -1636.216f, 4748.061f, 51.5484f, 199.3236f, 1, 1, 0);
		unk_0x2C2F2F6BEE7AC7E7(uLocal_160[2], "83JOH802");
		unk_0x2D58A6131679D82C(uLocal_160[2], 1, 0);
		unk_0x9F65B3BAFA302A65(uLocal_160[2], 1084227584);
		unk_0x371D594409A68A18(uLocal_160[2], 1, 1, 0);
		unk_0xE5283B3A324D3FB0(uLocal_160[2], 2);
		unk_0x2EE80CD0EAEB9B5B(uLocal_160[2], 60f);
		unk_0x448AD51B3157C957(uLocal_160[2], 1000f);
		unk_0x45A6EA15139A0C54(uLocal_160[2], 1, 0);
		unk_0x7517A117EA38D570(uLocal_160[2], 1, 0, 1148846080);
		uLocal_160[3] = unk_0xBA715A7BEBA5A1F9(joaat("rebel"), -1641.578f, 4736.783f, 52.5984f, 278.1865f, 1, 1, 0);
		unk_0x2C2F2F6BEE7AC7E7(uLocal_160[3], "85TOR114");
		unk_0x2D58A6131679D82C(uLocal_160[3], 1, 0);
		unk_0x9F65B3BAFA302A65(uLocal_160[3], 1084227584);
		unk_0x371D594409A68A18(uLocal_160[3], 1, 1, 0);
		unk_0xE5283B3A324D3FB0(uLocal_160[3], 2);
		unk_0x2EE80CD0EAEB9B5B(uLocal_160[3], 500f);
		unk_0x448AD51B3157C957(uLocal_160[3], 500f);
		unk_0x45A6EA15139A0C54(uLocal_160[3], 1, 0);
		unk_0x45A6EA15139A0C54(uLocal_160[3], 2, 0);
		unk_0x45A6EA15139A0C54(uLocal_160[3], 3, 0);
		unk_0x45A6EA15139A0C54(uLocal_160[3], 4, 0);
		unk_0x7517A117EA38D570(uLocal_160[3], 0, 0, 1148846080);
		unk_0x7517A117EA38D570(uLocal_160[3], 5, 0, 1148846080);
		if (!unk_0x2791155FB0769FE5(uLocal_214))
		{
			iVar0 = 0;
			unk_0xCED9E32812D6C7C7(&iVar0, 1);
			unk_0xCED9E32812D6C7C7(&iVar0, 3);
			unk_0xCED9E32812D6C7C7(&iVar0, 4);
			uLocal_214 = unk_0x1EE09F99FEF19DAF(joaat("pickup_money_case"), Local_237, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
			unk_0xF1A23B343DFEDFD0(joaat("prop_security_case_01"));
		}
		Local_246[0 /*3*/] = { -1640.411f, 4740.702f, 52.6218f };
		Local_246[1 /*3*/] = { -1624.664f, 4746.569f, 51.541f };
		Local_246[2 /*3*/] = { -1626.339f, 4734.232f, 51.6176f };
		Local_246[3 /*3*/] = { -1634.297f, 4741.213f, 51.9737f };
		Local_246[4 /*3*/] = { -1644.717f, 4736.446f, 52.3014f };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!unk_0x2791155FB0769FE5(uLocal_215[iVar1]))
			{
				iVar2 = 0;
				unk_0xCED9E32812D6C7C7(&iVar2, 3);
				unk_0xCED9E32812D6C7C7(&iVar2, 4);
				if (iVar1 < 2)
				{
					uLocal_215[iVar1] = unk_0x1CD347D2BD906560(joaat("pickup_weapon_sawnoffshotgun"), Local_246[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
				else if (iVar1 == 4)
				{
					uLocal_215[iVar1] = unk_0x1EE09F99FEF19DAF(joaat("pickup_weapon_assaultrifle"), Local_246[iVar1 /*3*/], 90f, 50f, 0f, 0, 50, 2, 1, 0);
				}
				else
				{
					uLocal_215[iVar1] = unk_0x1CD347D2BD906560(joaat("pickup_weapon_pistol"), Local_246[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
			}
			iVar1++;
		}
		Local_52[0 /*3*/] = { -1636.535f, 4708.455f, 46.09f };
		fLocal_80[0] = 177.0024f;
		Local_52[1 /*3*/] = { -1621.19f, 4744.868f, 52.4254f };
		fLocal_80[1] = 146.9645f;
		Local_52[2 /*3*/] = { -1622.795f, 4735.975f, 51.474f };
		fLocal_80[2] = 48.6546f;
		Local_52[3 /*3*/] = { -1632.695f, 4742.906f, 51.8604f };
		fLocal_80[3] = 155.0678f;
		Local_52[4 /*3*/] = { -1629.544f, 4738.6f, 52.1784f };
		fLocal_80[4] = 278.3085f;
		Local_52[5 /*3*/] = { -1634.764f, 4745.188f, 51.3926f };
		fLocal_80[5] = 270.3501f;
		Local_52[7 /*3*/] = { -1628.321f, 4731.502f, 51.7644f };
		fLocal_80[7] = 352.9167f;
		Local_52[6 /*3*/] = { -1640.311f, 4738.4f, 52.2f };
		fLocal_80[6] = 34.1111f;
		Local_117 = { -1641.735f, 4692.13f, 39.394f };
		fLocal_123 = 326.7277f;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (iVar1 <= 3)
			{
				uLocal_137[iVar1] = unk_0xA8D58C3AADA2C41C(22, joaat("g_m_y_salvagoon_03"), Local_52[iVar1 /*3*/], fLocal_80[iVar1], 1, 1);
				unk_0xD6A76BAB45A4B460(uLocal_137[iVar1], 227, 1);
			}
			else
			{
				uLocal_137[iVar1] = unk_0xA8D58C3AADA2C41C(22, joaat("g_m_m_chigoon_02"), Local_52[iVar1 /*3*/], fLocal_80[iVar1], 1, 1);
			}
			iVar1++;
		}
		iLocal_147[0] = unk_0xA8D58C3AADA2C41C(26, joaat("a_c_rottweiler"), -1635.005f, 4737.181f, 53.4995f, 33.4155f, 1, 1);
		iLocal_147[1] = unk_0xA8D58C3AADA2C41C(26, joaat("a_c_rottweiler"), -1625.215f, 4741.119f, 52.5762f, 316.2733f, 1, 1);
		iVar1 = 0;
		while (iVar1 < iLocal_147)
		{
			unk_0xC252F409BDE7A700(iLocal_147[iVar1], 1);
			unk_0x959E1626CBC7D38A(iLocal_147[iVar1], 1, 0);
			unk_0xD6A76BAB45A4B460(iLocal_147[iVar1], 227, 1);
			Local_90 = { unk_0x6B62510F212526DC(iLocal_147[iVar1], 1) };
			Local_93 = { Local_90.f_0, (Local_90.f_1 - 2f), (Local_90.f_2 - 0.5f) };
			Local_96 = { Local_90.f_0, (Local_90.f_1 + 50f), (Local_90.f_2 - 0.5f) };
			unk_0xDB6AD61CE00E8A46(Local_93, Local_96, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iVar1++;
		}
		unk_0x246C656F8E525DC7(uLocal_137[0], "random@dealgonewrongdead_peds", "ped_b", -1635.928f, 4707.941f, 46.383f, -29.25f, 12.25f, 171.75f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x246C656F8E525DC7(uLocal_137[1], "random@dealgonewrongdead_peds", "ped_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x246C656F8E525DC7(uLocal_137[2], "random@dealgonewrongdead_peds", "ped_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x246C656F8E525DC7(uLocal_137[3], "random@dealgonewrongdead_peds", "ped_c", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x246C656F8E525DC7(uLocal_137[4], "random@dealgonewrongdead_peds", "ped_d", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x246C656F8E525DC7(uLocal_137[5], "random@dealgonewrongdead_peds", "ped_e", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x246C656F8E525DC7(iLocal_147[0], "random@dealgonewrongdead_peds", "dog_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x246C656F8E525DC7(iLocal_147[1], "random@dealgonewrongdead_peds", "dog_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0xFB04B0D25EEAB773(50f);
		func_118();
		unk_0xFB04B0D25EEAB773(1f);
		if (unk_0x55A0C756C4A8220C(uLocal_160[0], 0))
		{
			uLocal_137[8] = unk_0x487C17B41938052C(uLocal_160[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
			unk_0x2D58A6131679D82C(uLocal_137[8], 1, 0);
			unk_0xC8882E8058542F83(uLocal_137[8], 1);
			unk_0xF160248D9083ED0C(uLocal_137[8], 0, 0);
		}
		if (!unk_0x12DD4A0B247D9B4D(uLocal_181))
		{
		}
		unk_0xD642E010A287ADFD("re_DealGoneWrong", &uLocal_270);
		uLocal_137[6] = unk_0xA8D58C3AADA2C41C(22, joaat("g_m_m_chigoon_02"), Local_52[6 /*3*/], fLocal_80[6], 1, 1);
		func_98(&uLocal_271, 4, uLocal_137[6], "REDGWChinese", 0, 1);
		unk_0x50274A7EACA3133A(uLocal_137[6], 1);
		unk_0x0407CF7EFEE35240(uLocal_137[6], 1);
		unk_0xFF4BEB6CFF55A013(uLocal_137[6], uLocal_270);
		uVar3 = unk_0x8F5F4164BF5FB513(Local_52[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, 0);
		unk_0x950B26F4C891073F(uLocal_137[6], uVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xFE1CD80C2F7CBCFB(uVar3, 1);
		unk_0xABC2CA6F28903308(uLocal_137[6], 1);
		unk_0xD6A76BAB45A4B460(uLocal_137[6], 227, 1);
		uLocal_137[7] = unk_0xA8D58C3AADA2C41C(22, joaat("g_m_y_salvagoon_03"), -1640.311f, 4738.4f, 50.2f, fLocal_80[7], 1, 1);
		func_98(&uLocal_271, 5, uLocal_137[7], "REDGWSalvadoran", 0, 1);
		unk_0x50274A7EACA3133A(uLocal_137[7], 1);
		unk_0x0407CF7EFEE35240(uLocal_137[7], 1);
		unk_0xFF4BEB6CFF55A013(uLocal_137[7], iLocal_270);
		uVar4 = unk_0x8F5F4164BF5FB513(Local_52[7 /*3*/] + Vector(0.92f, 0.65f, -0.65f), 0f, 0f, 34.1111f, 0);
		unk_0x950B26F4C891073F(uLocal_137[7], uVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xFE1CD80C2F7CBCFB(uVar4, 1);
		unk_0xE0F81EAEB49D39EF(uVar4, 0.5f);
		unk_0xABC2CA6F28903308(uLocal_137[7], 1);
		unk_0xD6A76BAB45A4B460(uLocal_137[7], 227, 1);
		uLocal_136 = unk_0xA8D58C3AADA2C41C(22, joaat("g_m_m_chigoon_02"), Local_117, fLocal_123, 1, 1);
		func_98(&uLocal_271, 4, uLocal_136, "REDGWChinese", 0, 1);
		unk_0x50274A7EACA3133A(uLocal_136, 1);
		unk_0xFF4BEB6CFF55A013(uLocal_136, iLocal_270);
		uVar5 = unk_0x8F5F4164BF5FB513(Local_117, 7.5f, -12.75f, 51.5f, 0);
		unk_0x950B26F4C891073F(uLocal_136, uVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xFE1CD80C2F7CBCFB(uVar5, 1);
		unk_0x8CE3D365F064F69E(uLocal_136, 4f, 18f, 326.7277f, 0, 1);
		unk_0xABC2CA6F28903308(uLocal_136, 1);
		unk_0xD6A76BAB45A4B460(uLocal_136, 227, 1);
		unk_0x9972EFADA7A2A47D(5, iLocal_270, joaat("player"));
		if (func_38() == 0)
		{
			func_98(&uLocal_271, 0, unk_0xE2D3D51028F0428A(), "MICHAEL", 0, 1);
		}
		if (func_38() == 1)
		{
			func_98(&uLocal_271, 1, unk_0xE2D3D51028F0428A(), "FRANKLIN", 0, 1);
		}
		if (func_38() == 2)
		{
			func_98(&uLocal_271, 2, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
		}
		uLocal_221[0] = unk_0x20F895E512EC5DB6(1110, -1632.953f, 4745.359f, 51.7876f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[1] = unk_0x20F895E512EC5DB6(1110, -1634.87f, 4744.458f, 51.8233f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[2] = unk_0x20F895E512EC5DB6(1110, -1636.971f, 4736.595f, 52.2814f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[3] = unk_0x20F895E512EC5DB6(1110, -1625.561f, 4741.241f, 51.7102f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[4] = unk_0x20F895E512EC5DB6(1110, -1621.533f, 4744.576f, 51.9093f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[5] = unk_0x20F895E512EC5DB6(1110, -1621.963f, 4737.039f, 51.4174f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[6] = unk_0x20F895E512EC5DB6(1110, -1628.517f, 4736.906f, 51.8207f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[7] = unk_0x20F895E512EC5DB6(1110, -1629.324f, 4732.146f, 51.6947f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[8] = unk_0x20F895E512EC5DB6(1110, -1640.287f, 4738.437f, 52.1756f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[9] = unk_0x20F895E512EC5DB6(1110, -1640.055f, 4701.995f, 41.2428f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		unk_0x4EDE34FBADD967A6(0);
		uLocal_221[10] = unk_0x20F895E512EC5DB6(1110, -1641.924f, 4692.236f, 38.3762f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!unk_0x55B23FE400FCEA6B(uLocal_137[iVar1], 0))
			{
				unk_0xC252F409BDE7A700(uLocal_137[iVar1], 1);
				unk_0x9777C2BD7F179F2D(uLocal_137[iVar1], 0, 0.3f, 0.6f, 3);
				unk_0x9777C2BD7F179F2D(uLocal_137[iVar1], 0, 0.65f, 0.6f, 3);
				unk_0x4EDE34FBADD967A6(unk_0x5853B15F78E1A265(100, 500));
				if (iVar1 <= 5)
				{
					if (unk_0x12DD4A0B247D9B4D(uLocal_184[iVar1]))
					{
						unk_0xFFD8EB5462B07B59(&(uLocal_184[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (unk_0xE5965CDF24F93A9F(unk_0x9993EF7FDBCDB632()))
		{
			if (!unk_0xA6A089369417736E(unk_0x9993EF7FDBCDB632()))
			{
				unk_0x2D58A6131679D82C(unk_0x9993EF7FDBCDB632(), 1, 0);
			}
		}
		iLocal_455 = 1;
	}
}

Vector3 func_117(struct<3> Param0)
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

void func_118()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xE5965CDF24F93A9F(uLocal_160[iVar0]))
		{
			Local_99 = { unk_0xCACAD935C0BEE14F(uLocal_160[iVar0], 0f, 0f, 0.5f) };
		}
		iLocal_133 = 0;
		while (iLocal_133 < 5)
		{
			fLocal_120 = unk_0xC4EAB25A108C2429(1.5f, 2.5f);
			fLocal_121 = unk_0xC4EAB25A108C2429(2f, 4f);
			fLocal_122 = unk_0xC4EAB25A108C2429(0.1f, 2f);
			unk_0x4EDE34FBADD967A6(0);
			Local_102 = { (Local_99.f_0 - fLocal_120), (Local_99.f_1 - fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { (Local_99.f_0 + fLocal_120), (Local_99.f_1 + fLocal_121), Local_99.f_2 };
			unk_0xDB6AD61CE00E8A46(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_102 = { (Local_99.f_0 + fLocal_120), (Local_99.f_1 + fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { (Local_99.f_0 - fLocal_120), (Local_99.f_1 - fLocal_121), Local_99.f_2 };
			unk_0xDB6AD61CE00E8A46(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_102 = { (Local_99.f_0 + fLocal_120), (Local_99.f_1 - fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { (Local_99.f_0 - fLocal_120), (Local_99.f_1 + fLocal_121), Local_99.f_2 };
			unk_0xDB6AD61CE00E8A46(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_102 = { (Local_99.f_0 - fLocal_120), (Local_99.f_1 + fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { (Local_99.f_0 + fLocal_120), (Local_99.f_1 - fLocal_121), Local_99.f_2 };
			unk_0xDB6AD61CE00E8A46(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_102 = { Local_99.f_0, (Local_99.f_1 + fLocal_121), (Local_99.f_2 + fLocal_122) };
			Local_105 = { Local_99.f_0, (Local_99.f_1 - fLocal_121), Local_99.f_2 };
			unk_0xDB6AD61CE00E8A46(Local_102, Local_105, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iLocal_133++;
		}
		iVar0++;
	}
}

int func_119()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_130())
		{
			return 0;
		}
	}
	if (func_126())
	{
		return 1;
	}
	if (func_120(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_120(float fParam0, bool bParam1)
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
		if (func_40(func_38()))
		{
			iVar36 = func_59();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113386.f_18574[iVar32 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar32 /*6*/], 3))
				{
					func_121(iVar32, &Var0);
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

void func_121(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_122(uParam1, "Abigail1", func_124(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 1:
			func_122(uParam1, "Abigail2", func_124(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 2:
			func_122(uParam1, "Barry1", func_124(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 3:
			func_122(uParam1, "Barry2", func_124(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_123(iParam0), 1, 1);
			break;
		
		case 4:
			func_122(uParam1, "Barry3", func_124(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 5:
			func_122(uParam1, "Barry3A", func_124(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 6:
			func_122(uParam1, "Barry3C", func_124(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 7:
			func_122(uParam1, "Barry4", func_124(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_123(iParam0), 0, 0);
			break;
		
		case 8:
			func_122(uParam1, "Dreyfuss1", func_124(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 9:
			func_122(uParam1, "Epsilon1", func_124(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 10:
			func_122(uParam1, "Epsilon2", func_124(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 11:
			func_122(uParam1, "Epsilon3", func_124(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 12:
			func_122(uParam1, "Epsilon4", func_124(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 13:
			func_122(uParam1, "Epsilon5", func_124(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 14:
			func_122(uParam1, "Epsilon6", func_124(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 15:
			func_122(uParam1, "Epsilon7", func_124(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 16:
			func_122(uParam1, "Epsilon8", func_124(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 17:
			func_122(uParam1, "Extreme1", func_124(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 18:
			func_122(uParam1, "Extreme2", func_124(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 19:
			func_122(uParam1, "Extreme3", func_124(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 20:
			func_122(uParam1, "Extreme4", func_124(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 21:
			func_122(uParam1, "Fanatic1", func_124(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_123(iParam0), 1, 0);
			break;
		
		case 22:
			func_122(uParam1, "Fanatic2", func_124(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_123(iParam0), 1, 0);
			break;
		
		case 23:
			func_122(uParam1, "Fanatic3", func_124(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_123(iParam0), 0, 1);
			break;
		
		case 24:
			func_122(uParam1, "Hao1", func_124(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_123(iParam0), 0, 1);
			break;
		
		case 25:
			func_122(uParam1, "Hunting1", func_124(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 26:
			func_122(uParam1, "Hunting2", func_124(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 27:
			func_122(uParam1, "Josh1", func_124(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 28:
			func_122(uParam1, "Josh2", func_124(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_123(iParam0), 1, 1);
			break;
		
		case 29:
			func_122(uParam1, "Josh3", func_124(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_123(iParam0), 1, 1);
			break;
		
		case 30:
			func_122(uParam1, "Josh4", func_124(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 31:
			func_122(uParam1, "Maude1", func_124(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 32:
			func_122(uParam1, "Minute1", func_124(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 33:
			func_122(uParam1, "Minute2", func_124(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 34:
			func_122(uParam1, "Minute3", func_124(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 35:
			func_122(uParam1, "MrsPhilips1", func_124(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 36:
			func_122(uParam1, "MrsPhilips2", func_124(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 37:
			func_122(uParam1, "Nigel1", func_124(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 38:
			func_122(uParam1, "Nigel1A", func_124(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_123(iParam0), 1, 1);
			break;
		
		case 39:
			func_122(uParam1, "Nigel1B", func_124(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_123(iParam0), 1, 1);
			break;
		
		case 40:
			func_122(uParam1, "Nigel1C", func_124(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_123(iParam0), 1, 1);
			break;
		
		case 41:
			func_122(uParam1, "Nigel1D", func_124(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_123(iParam0), 1, 1);
			break;
		
		case 42:
			func_122(uParam1, "Nigel2", func_124(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_123(iParam0), 1, 1);
			break;
		
		case 43:
			func_122(uParam1, "Nigel3", func_124(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_123(iParam0), 1, 1);
			break;
		
		case 44:
			func_122(uParam1, "Omega1", func_124(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 45:
			func_122(uParam1, "Omega2", func_124(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 46:
			func_122(uParam1, "Paparazzo1", func_124(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 47:
			func_122(uParam1, "Paparazzo2", func_124(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 48:
			func_122(uParam1, "Paparazzo3", func_124(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 49:
			func_122(uParam1, "Paparazzo3A", func_124(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 50:
			func_122(uParam1, "Paparazzo3B", func_124(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 51:
			func_122(uParam1, "Paparazzo4", func_124(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 52:
			func_122(uParam1, "Rampage1", func_124(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 54:
			func_122(uParam1, "Rampage3", func_124(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 55:
			func_122(uParam1, "Rampage4", func_124(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 56:
			func_122(uParam1, "Rampage5", func_124(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 53:
			func_122(uParam1, "Rampage2", func_124(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 57:
			func_122(uParam1, "TheLastOne", func_124(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 58:
			func_122(uParam1, "Tonya1", func_124(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 59:
			func_122(uParam1, "Tonya2", func_124(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 60:
			func_122(uParam1, "Tonya3", func_124(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 61:
			func_122(uParam1, "Tonya4", func_124(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 62:
			func_122(uParam1, "Tonya5", func_124(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_122(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_123(int iParam0)
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

struct<2> func_124(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_125(iParam0) };
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

struct<2> func_125(int iParam0)
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

int func_126()
{
	if (func_129() && !func_130())
	{
		return 1;
	}
	if (func_128() && func_127())
	{
		return 1;
	}
	return 0;
}

bool func_127()
{
	return Global_113104 > 0;
}

int func_128()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_129()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_130()
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

int func_131()
{
	if (!func_112(5))
	{
		return 1;
	}
	if (func_126())
	{
		return 1;
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_130())
		{
			return 0;
		}
	}
	if (func_120(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_132()
{
	if ((Global_113375 == func_63() && unk_0xE3BBDB1C36703410()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_133(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_63();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_135(iParam0);
	unk_0xEEEFCC23227A8148(0);
	unk_0xA560174A439E78F1(1);
	Global_113372 = 0;
	func_134();
}

void func_134()
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

void func_135(int iParam0)
{
	Global_113375 = iParam0;
}

int func_136(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_63();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_177())
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
			if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_130())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_47(0))
		{
			return 0;
		}
		if (func_126())
		{
			return 0;
		}
		if (func_176())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_40(func_38()))
		{
			if (func_120(100f, 1) != -1)
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
		if (!func_175(iParam3))
		{
			return 0;
		}
		if (func_40(func_38()))
		{
			if (func_174(func_38()) == 4 || func_174(func_38()) == 5)
			{
				return 0;
			}
		}
		if (func_40(func_38()))
		{
			if (!func_173(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_172(Global_113386.f_24995.f_43[iParam3]))
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
		if (func_171())
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
		if (!func_162(4))
		{
			return 0;
		}
		if (!func_112(5))
		{
			return 0;
		}
		if (func_161(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_161(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_175(30) && !func_161(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_40(func_38()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113386.f_2363.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113386.f_2363.f_539.f_2296[iVar4];
				if (func_160(iVar8))
				{
					if (func_138(iVar4))
					{
						if (!func_137(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var5) < (210f * 210f))
							{
								if (func_38() != iVar4)
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

bool func_137(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_138(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_139(iVar0);
}

int func_139(int iParam0)
{
	return func_140(iParam0, 1);
}

int func_140(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_160(iParam0))
	{
		return 0;
	}
	func_141(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_141(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_142(func_153(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_142(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_152(iParam0, iParam1))
	{
		iVar0 = func_151(iParam1);
		iVar1 = func_149(iParam0);
		iVar2 = (func_149(iParam0) - func_149(iParam1));
		iVar3 = (func_151(iParam0) - func_151(iParam1));
		iVar4 = (func_148(iParam0) - func_148(iParam1));
		iVar5 = (func_147(iParam0) - func_147(iParam1));
		iVar6 = (func_146(iParam0) - func_146(iParam1));
		iVar7 = (func_145(iParam0) - func_145(iParam1));
	}
	else
	{
		iVar0 = func_151(iParam0);
		iVar1 = func_149(iParam1);
		iVar2 = (func_149(iParam1) - func_149(iParam0));
		iVar3 = (func_151(iParam1) - func_151(iParam0));
		iVar4 = (func_148(iParam1) - func_148(iParam0));
		iVar5 = (func_147(iParam1) - func_147(iParam0));
		iVar6 = (func_146(iParam1) - func_146(iParam0));
		iVar7 = (func_145(iParam1) - func_145(iParam0));
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
		iVar4 = (iVar4 + func_144(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_143(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_143(float fParam0, float fParam1, float fParam2)
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

int func_144(int iParam0, int iParam1)
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

int func_145(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_146(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_147(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_148(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_149(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_150(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_150(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_151(int iParam0)
{
	return iParam0 & 15;
}

int func_152(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_160(iParam1) || !func_160(iParam0))
	{
		return 1;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_153()
{
	var uVar0;
	
	func_159(&uVar0, unk_0xAA2844CAD88768B5());
	func_158(&uVar0, unk_0x80F97D7D29800A1A());
	func_157(&uVar0, unk_0x09FC827691DACE59());
	func_156(&uVar0, unk_0xD52BD97E61483713());
	func_155(&uVar0, unk_0x771485043FDC55DE());
	func_154(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_154(var uParam0, int iParam1)
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

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_156(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_151(*uParam0);
	iVar1 = func_149(*uParam0);
	if (iParam1 < 1 || iParam1 > func_144(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_157(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_158(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_159(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_160(int iParam0)
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
	iVar0 = func_145(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_146(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_147(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_149(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_151(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_148(iParam0);
	if (iVar5 < 1 || iVar5 > func_144(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_161(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_38();
				if (!func_40(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_170()) || Global_112433) || Global_31962) || func_169()) || func_93(8, -1)) || func_168()) || func_167()) || func_166()) || func_165()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_170()) || Global_31962) || func_169()) || func_93(8, -1)) || func_166()) || func_168()) || func_167()) || func_165()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_170()) || Global_112433) || Global_31962) || func_169()) || func_93(8, -1)) || func_166()) || func_168()) || func_167()) || func_165()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_170()) || Global_112433) || Global_31962) || func_169()) || func_93(8, -1)) || func_168()) || func_167()) || func_165()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_170() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_93(8, -1)) || func_165()) || func_164()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_93(8, -1) || func_168()) || func_167()) || func_164()) || func_163())
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
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_170()) || Global_31962) || func_169()) || func_93(8, -1)) || func_167()) || func_166()) || func_165()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_170()) || func_167()) || Global_112433) || Global_31962) || func_169()) || Global_44238) || func_93(8, -1)) || func_166()) || func_164()) || func_165()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_170()) || Global_112433) || Global_31962) || func_169()) || func_93(8, -1)) || func_166()) || func_164()) || func_168()) || func_167()) || func_165())
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

var func_163()
{
	return Global_100480.f_1;
}

int func_164()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_165()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_166()
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

bool func_167()
{
	return Global_100493.f_376 > 0;
}

bool func_168()
{
	return Global_100493.f_375 > 0;
}

var func_169()
{
	return Global_1575058;
}

int func_170()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_171()
{
	func_91();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_172(int iParam0)
{
	return func_152(func_153(), iParam0);
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_38();
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

int func_174(int iParam0)
{
	if (!func_40(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_175(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_177())
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

int func_176()
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

int func_177()
{
	int iVar0;
	
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
				unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xCED9E32812D6C7C7(&iVar0, 2);
				unk_0xCED9E32812D6C7C7(&iVar0, 4);
				unk_0xCED9E32812D6C7C7(&iVar0, 6);
				unk_0xCED9E32812D6C7C7(&Global_25, 2);
				unk_0xCED9E32812D6C7C7(&Global_25, 4);
				unk_0xCED9E32812D6C7C7(&Global_25, 6);
				unk_0x076A5661EF5ABEE4(joaat("sp_unlock_exclus_content"), iVar0, 1);
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

void func_178()
{
	int iVar0;
	
	if (iLocal_455 && !iLocal_262)
	{
		unk_0xEC6D4F9C59CDA6F5();
		unk_0x8576657A629C4B0A(1f);
		if (unk_0x12DD4A0B247D9B4D(uLocal_181))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_181);
		}
		if (unk_0x12DD4A0B247D9B4D(uLocal_182))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_182);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_194[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_194[iVar0]));
			}
			if (unk_0x12DD4A0B247D9B4D(uLocal_204[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_204[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					if (!unk_0xF68107C40359970C(uLocal_150[iVar0]))
					{
						if (unk_0x77A43AFA9AAEC041(uLocal_150[iVar0], unk_0xE2D3D51028F0428A(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_199[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_199[iVar0]));
			}
			if (unk_0x12DD4A0B247D9B4D(uLocal_209[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_209[iVar0]));
			}
			if (iLocal_48 >= 6)
			{
				if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					if (!unk_0xF68107C40359970C(uLocal_155[iVar0]))
					{
						if (unk_0x77A43AFA9AAEC041(uLocal_155[iVar0], unk_0xE2D3D51028F0428A(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_266 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_46 >= 1)
		{
			unk_0x07CECF421D895F3D(5, 1);
			unk_0x07CECF421D895F3D(3, 1);
		}
		if (bLocal_266)
		{
			func_3(func_38(), 1, 25000);
		}
	}
	func_179(-1);
	unk_0xAFBDF6A5E54114C1();
}

void func_179(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_63();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_132())
	{
		func_183(iParam0);
		unk_0xEFE837B21D5CF02C(0, 0);
		Global_113377 = unk_0x320D1840B6DAA1CC();
		func_182(30000);
		StringCopy(&cVar0, func_181(Global_113375, 1), 64);
		if (func_62(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		unk_0x151E30E68B218815(&cVar0, Global_113372, (unk_0x320D1840B6DAA1CC() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		unk_0xB0550BC91B0159D6(&Global_113382, false);
	}
	func_180(&Global_32019);
	Global_113376 = 0;
	func_135(-1);
}

void func_180(var uParam0)
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

char* func_181(int iParam0, bool bParam1)
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

void func_182(int iParam0)
{
	Global_43603 = (unk_0x320D1840B6DAA1CC() + iParam0);
}

void func_183(int iParam0)
{
	func_184(iParam0, 0, func_189(iParam0));
}

void func_184(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_153();
	func_187(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_186(iParam0, &uVar0);
	Var1 = { func_185(&uVar0) };
}

struct<16> func_185(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_147(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_146(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_145(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_148(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_151(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_149(*uParam0), 64);
	return Var0;
}

void func_186(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_187(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_149(*uParam0);
	iVar1 = func_151(*uParam0);
	iVar2 = func_148(*uParam0);
	iVar3 = func_147(*uParam0);
	iVar4 = func_146(*uParam0);
	iVar5 = func_145(*uParam0);
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
	iVar6 = func_144(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_144(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_188(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_188(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_159(uParam0, iParam1);
	func_158(uParam0, iParam2);
	func_157(uParam0, iParam3);
	func_155(uParam0, iParam5);
	func_156(uParam0, iParam4);
	func_154(uParam0, iParam6);
}

int func_189(int iParam0)
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

