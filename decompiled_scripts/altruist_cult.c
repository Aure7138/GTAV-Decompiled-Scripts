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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<3> Local_51[16];
	float fLocal_100[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_117 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	struct<3> Local_123 = { 0, 0, 0 } ;
	struct<3> Local_126 = { 0, 0, 0 } ;
	float fLocal_129 = 0f;
	struct<3> Local_130 = { 0, 0, 0 } ;
	struct<3> Local_133 = { 0, 0, 0 } ;
	float fLocal_136 = 0f;
	struct<3> Local_137 = { 0, 0, 0 } ;
	struct<3> Local_140 = { 0, 0, 0 } ;
	float fLocal_143 = 0f;
	struct<3> Local_144 = { 0, 0, 0 } ;
	struct<3> Local_147 = { 0, 0, 0 } ;
	float fLocal_150 = 0f;
	struct<3> Local_151 = { 0, 0, 0 } ;
	struct<3> Local_154 = { 0, 0, 0 } ;
	float fLocal_157 = 0f;
	struct<3> Local_158 = { 0, 0, 0 } ;
	struct<3> Local_161 = { 0, 0, 0 } ;
	float fLocal_164 = 0f;
	struct<3> Local_165 = { 0, 0, 0 } ;
	struct<3> Local_168 = { 0, 0, 0 } ;
	float fLocal_171 = 0f;
	bool bLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	bool bLocal_175 = 0;
	int iLocal_176 = 0;
	bool bLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	float fLocal_182 = 0f;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	var uLocal_186 = 0;
	int iLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	var uLocal_193[2] = { 0, 0 };
	int iLocal_196[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	var uLocal_216[4] = { 0, 0, 0, 0 };
	int iLocal_221[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_228 = 0;
	var uLocal_229[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_272 = 8;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 4;
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
	var uLocal_291 = 4;
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
	var uLocal_306 = 4;
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
	var uLocal_321 = 4;
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
	var uLocal_336 = 4;
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
	var uLocal_351 = 4;
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
	var uLocal_366 = 4;
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
	var uLocal_381 = 4;
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
	int iLocal_400 = 0;
	char[] cLocal_401[8] = 0;
	char* sLocal_402 = NULL;
	char* sLocal_403 = NULL;
	char* sLocal_404 = NULL;
	char* sLocal_405 = NULL;
	char* sLocal_406 = NULL;
	char* sLocal_407 = NULL;
	char* sLocal_408 = NULL;
	char* sLocal_409 = NULL;
	var uLocal_410 = 0;
	var uLocal_411 = 16;
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
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	int iLocal_576 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	Local_117 = { -1109.213f, 4914.744f, 216.101f };
	Local_120 = { -1034.6f, 4918.6f, 205.9f };
	Local_123 = { -1066.963f, 4873.13f, 207.3281f };
	Local_126 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_129 = 72.3125f;
	Local_130 = { -1138.386f, 4872.04f, 207.5488f };
	Local_133 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_136 = 57.8125f;
	Local_137 = { -1171.648f, 4888.658f, 211.0756f };
	Local_140 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_143 = 17.9375f;
	Local_144 = { -1177.981f, 4903.231f, 212.477f };
	Local_147 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_150 = 17.9375f;
	Local_151 = { -1175.693f, 4904.839f, 207.5207f };
	Local_154 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_157 = 36.375f;
	Local_158 = { -1106.212f, 4860.086f, 206.1207f };
	Local_161 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_164 = 11.5625f;
	Local_165 = { -1044.268f, 4916.587f, 209.8365f };
	Local_168 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_171 = 12.875f;
	iLocal_192 = 4;
	cLocal_401 = "REPLAY_TMG";
	sLocal_402 = "CMN_TDIED";
	if (unk_0x55EEDBBFDC6E810F(26))
	{
		func_194();
	}
	if (unk_0xFD930C28DCEED99B())
	{
		unk_0x675D9C12C73D3DE7();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xCBE2EC2868A6C438() || iLocal_173)
		{
			unk_0xFF2AF80F9EC7704C(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						if (Global_113648.f_24997.f_5 >= iLocal_192 && !func_193())
						{
							iLocal_50 = 2;
						}
						func_190();
						func_187();
					}
					break;
				
				case 1:
					unk_0x6352F03F31CA0713(unk_0x93E99A2DBCBA9CFA());
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						if (unk_0x83666F9FB8FEBD4B() > 2000)
						{
							if (iLocal_187 == 1)
							{
								func_186();
							}
							else if (iLocal_187 == 2)
							{
								func_159();
							}
						}
						if (unk_0x83666F9FB8FEBD4B() > 1300)
						{
							if (iLocal_189 < 3)
							{
								func_158();
							}
							else
							{
								func_157();
							}
						}
						if (iLocal_174)
						{
							func_144(26, 1);
							iLocal_174 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					unk_0x6352F03F31CA0713(unk_0x93E99A2DBCBA9CFA());
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						func_116();
					}
					unk_0x289D605FFACC399B(Global_41953[9 /*31*/], 0, 0, 1);
					unk_0x289D605FFACC399B(Global_41953[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_175 = false;
					unk_0xFF2AF80F9EC7704C(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_196)
					{
						if (unk_0x66599E73DBA5A850(iLocal_196[iVar0]))
						{
							if (unk_0xCE4AAA035282336C(uLocal_229[iVar0]))
							{
								unk_0x45533C09A6C9B409(&(uLocal_229[iVar0]));
							}
						}
						else
						{
							if (unk_0x7B5C0F0BBFDEA237(iLocal_196[iVar0]))
							{
								if (unk_0xCE4AAA035282336C(uLocal_229[iVar0]))
								{
									unk_0x45533C09A6C9B409(&(uLocal_229[iVar0]));
								}
							}
							else if (unk_0xEAEF747543427AC5(iLocal_196[iVar0], unk_0xC1A5EC5C986B98AD(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_115())
								{
									if (iLocal_191 < unk_0xA5E11AF0A2B928C1())
									{
										iVar1 = unk_0x15A88CFAAFFC6C4B(0, 3);
										if (iVar1 == 0)
										{
											func_100(&uLocal_411, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_99(&uLocal_411, 1, iLocal_196[iVar0], "ACULTMember1", 0, 1);
											func_100(&uLocal_411, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_99(&uLocal_411, 2, iLocal_196[iVar0], "ACULTMember2", 0, 1);
											func_100(&uLocal_411, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_191 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(4500, 6000));
									}
								}
							}
							bLocal_175 = true;
						}
						iVar0++;
					}
					if (!bLocal_175)
					{
						func_63();
					}
					break;
				
				case 3:
					if (!iLocal_173)
					{
						uLocal_249 = func_62();
						if (!unk_0x5FAF55B1F052A2E6(uLocal_249))
						{
							break;
						}
						func_61(&uLocal_254, 0);
						iLocal_173 = 1;
					}
					if (func_32(&uLocal_254, &uLocal_260, &uLocal_249, cLocal_401, sLocal_402, &bLocal_172, 78))
					{
						iLocal_190 = 0;
						unk_0x28F88BFAD6397895(uLocal_410);
						unk_0x4744746732B84CB0(uLocal_248);
						iVar0 = 0;
						while (iVar0 < iLocal_196)
						{
							if (unk_0x7DE17ACDD8BA2642(iLocal_196[iVar0]))
							{
								unk_0xE9C250FA35A936C8(&(iLocal_196[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_221)
						{
							if (unk_0x7DE17ACDD8BA2642(iLocal_221[iVar0]))
							{
								unk_0xEF078F1FEE785D3E(&(iLocal_221[iVar0]));
							}
							iVar0++;
						}
						if (unk_0xF57C1326FD40C8A7(uLocal_246))
						{
							unk_0xEEF11E0DB5769366(uLocal_246, 0);
						}
						if (unk_0x7DE17ACDD8BA2642(uLocal_215))
						{
							unk_0xEF078F1FEE785D3E(&uLocal_215);
						}
						if (unk_0x7DE17ACDD8BA2642(uLocal_215))
						{
							unk_0xEF078F1FEE785D3E(&uLocal_215);
						}
						if (bLocal_172)
						{
							func_11();
							func_3(0);
							func_1(1);
							iLocal_173 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_173 = 0;
							func_194();
						}
					}
					break;
			}
		}
		else if (bLocal_177)
		{
		}
		else
		{
			func_194();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0135E51BAD56ED58(0);
		unk_0x989D8D7F85192C52(1);
		unk_0x6E218C4AE00BB45A(0);
		func_2(1);
		Global_95939 = 1;
	}
	else
	{
		unk_0x0135E51BAD56ED58(1);
		unk_0x989D8D7F85192C52(0);
		unk_0x6E218C4AE00BB45A(1);
		func_2(0);
		Global_95939 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_43257 == 9 || Global_43257 == 10) || Global_43257 == 5)
	{
		Global_112297 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_112297 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			unk_0xECDAB41968FF21A8(&Global_8254, 16);
		}
		Global_20383.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_20383.f_1 = 3;
	}
}

int func_5()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return BitTest(Global_1962996, 5);
}

bool func_8()
{
	return BitTest(Global_1962996, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}
}

void func_11()
{
	func_22();
	func_14(0, 1);
	func_12(0, 1);
}

void func_12(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_14(0, 0);
		unk_0x451128B7D435FBF2("DeathFailOut", 0, 0);
		unk_0xECDAB41968FF21A8(&iLocal_48, 1);
		func_13(1, 2, 0);
		unk_0x01B9DC5A18DE29B3(2);
	}
	else
	{
		if (BitTest(iLocal_48, 1) || iParam1)
		{
			unk_0x29978E5D6F8BB77E("DeathFailOut");
			func_13(0, 2, 1);
			unk_0x01B9DC5A18DE29B3(0);
		}
		unk_0x061B1200C95204CB(&iLocal_48, true);
	}
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&iLocal_48, 2);
		if (!unk_0xA26A9A07F761D8F8())
		{
			if (iParam1 == 1)
			{
				unk_0x6F5281F7042DC893(0.2f);
			}
			else
			{
				unk_0x6F5281F7042DC893(0.075f);
			}
		}
	}
	else
	{
		if (BitTest(iLocal_48, 2) || iParam2)
		{
			if (!unk_0xA26A9A07F761D8F8())
			{
				unk_0x6F5281F7042DC893(1f);
			}
		}
		unk_0x061B1200C95204CB(&iLocal_48, 2);
	}
}

void func_14(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_15())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(iLocal_48, 0) || iParam1)
		{
			unk_0x451128B7D435FBF2(sVar0, 0, 0);
			unk_0xECDAB41968FF21A8(&iLocal_48, 0);
			func_13(1, 1, 0);
			unk_0x01B9DC5A18DE29B3(1);
		}
	}
	else
	{
		if (BitTest(iLocal_48, 0) || iParam1)
		{
			unk_0x29978E5D6F8BB77E(sVar0);
			func_13(0, 1, 1);
			unk_0x01B9DC5A18DE29B3(0);
		}
		unk_0x061B1200C95204CB(&iLocal_48, false);
	}
}

int func_15()
{
	func_16();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_16()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_20(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_19(unk_0xC1A5EC5C986B98AD());
			if (func_18(iVar0) && (!func_17(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_18(Global_113648.f_2365.f_539.f_4321))
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

bool func_17(int iParam0)
{
	return Global_43257 == iParam0;
}

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
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
	return Global_2028[iParam0 /*29*/];
}

void func_22()
{
	iLocal_48 = 0;
	iLocal_49 = 0;
	func_23(0, 1, 1, 0, 0, 0, 0);
	func_3(1);
}

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_31(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
			{
				unk_0xD6625E11483B2324(0);
			}
			if (!func_5())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_30(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_31(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0xDB4D82037BD5A339();
		}
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_30(0, iParam3, iParam2, 0);
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((((((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_28(unk_0x93E99A2DBCBA9CFA())) && !func_25(unk_0x93E99A2DBCBA9CFA(), 0)) && !func_24()) && !bParam4) && !bParam5) && !unk_0x8253CEEA17ED481B())
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_28(unk_0x93E99A2DBCBA9CFA())) && !bParam4) && !bParam5)
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_24()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1574918;
}

int func_28(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
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

bool func_29()
{
	return BitTest(Global_2621446, 3);
}

int func_30(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_31(int iParam0)
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

int func_32(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0xAEA29937C5240DA0("DEATH_SCENE");
			unk_0x531D638530A8DB97(-1, "ScreenFlash", "WastedSounds", 1);
			func_60(&(uParam0->f_1));
			func_22();
			func_59(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0xD111D6644D1D5BD5(1);
			break;
		
		case 1:
			if (func_57() || unk_0x72474BA05A104E1E())
			{
				*uParam0 = 2;
			}
			if (!func_56(uParam0->f_4, 4))
			{
				if (unk_0xF6AFEDAAE44A2159("OFFMISSION_WASTED", 0, -1))
				{
					unk_0x531D638530A8DB97(-1, "Bed", "WastedSounds", 1);
					func_54(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
			{
				if (!func_56(uParam0->f_4, 2))
				{
					unk_0x531D638530A8DB97(-1, "TextHit", "WastedSounds", 1);
					func_54(&(uParam0->f_4), 2);
				}
				func_33(uParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_33(uParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_14(0, 1);
				func_12(0, 1);
				func_22();
				if (*iParam5)
				{
					unk_0x89851798C163AECE(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0xD111D6644D1D5BD5(0);
				unk_0x989D8D7F85192C52(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			{
				unk_0x0135E51BAD56ED58(1);
				func_14(0, 1);
				func_12(0, 1);
				unk_0x3FA8C73B5856A3E4("DEATH_SCENE");
				unk_0xD111D6644D1D5BD5(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0xD111D6644D1D5BD5(0);
			return 1;
			break;
	}
	return 0;
}

int func_33(var uParam0, var uParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x72474BA05A104E1E() || unk_0x984CA71F26DF483C())
			{
				unk_0x6D5ACBBD4CE34249(2500);
				unk_0x063E0F2515867ED4();
			}
			if (bParam9)
			{
				unk_0xD111D6644D1D5BD5(1);
			}
			unk_0x6F5281F7042DC893(0.2f);
			if (func_53(iParam5, 4))
			{
				if (unk_0xF6AFEDAAE44A2159("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0x9FD96C5DE6EDFC15(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x2AF11E92DE43CDE3("STRING");
			unk_0x35451336B8B420D6(6);
			unk_0x48849374B34BB7B9(uParam2);
			unk_0xF8FCA9E7130CE1C8();
			func_52(sParam3);
			unk_0xC6A3EF6C4A3412C1(100);
			unk_0xD546F85F5AF0F231(true);
			unk_0x08320883763BEFA3();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x9FD96C5DE6EDFC15(*uParam0, "TRANSITION_UP");
					unk_0xC49D258FBF3BF214(uParam1->f_134);
					unk_0xAE3413B0654A0035();
					uParam1->f_136 = 1;
				}
			}
			if (!func_53(iParam5, 1))
			{
				unk_0x3DD43825AB0EEF61(0);
			}
			func_51(&(uParam1->f_10), 0, 1, 1, 1);
			func_50(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_50(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_53(iParam5, 4))
			{
				unk_0x531D638530A8DB97(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_53(iParam5, 8))
			{
				switch (func_15())
				{
					case 0:
						unk_0x451128B7D435FBF2("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x451128B7D435FBF2("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x451128B7D435FBF2("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_49(&(uParam1->f_1)))
			{
				func_48(&(uParam1->f_1));
			}
			if (func_53(iParam5, 2))
			{
				if (!func_49(&(uParam1->f_4)))
				{
					func_48(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0xAD8D6CE83138FEB5();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x9FD96C5DE6EDFC15(*uParam0, "TRANSITION_UP");
					unk_0xC49D258FBF3BF214(uParam1->f_134);
					unk_0xAE3413B0654A0035();
					uParam1->f_136 = 1;
				}
			}
			unk_0xCA0440712A8201E9(iParam6);
			func_46(uParam0, 0, 0);
			if (!func_53(iParam5, 16) && (func_44(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x72474BA05A104E1E()))
			{
				func_38(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x90B3C4F0C0772F5A();
				if (unk_0x6BD2D66249562506(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x531D638530A8DB97(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						unk_0x57104FCE0696BD09(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x6BD2D66249562506(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x531D638530A8DB97(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						unk_0x57104FCE0696BD09(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_53(iParam5, 2))
			{
				if (func_44(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0x531D638530A8DB97(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						unk_0x57104FCE0696BD09(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_46(uParam0, 0, 0);
			unk_0x6F5281F7042DC893(1f);
			if (uParam1->f_138 || !((unk_0x4310A0DB886F9FED("stunt_plane_races", unk_0x688846D56810779A()) || unk_0x4310A0DB886F9FED("pilot_school", unk_0x688846D56810779A())) || (unk_0x4310A0DB886F9FED("bj", unk_0x688846D56810779A()) && unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))))
			{
				unk_0x78DD793477D04C42(2500);
			}
			if (func_53(iParam5, 64) && uParam1->f_138)
			{
				unk_0x6D5ACBBD4CE34249(500);
			}
			func_34(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0xD111D6644D1D5BD5(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_44(&(uParam1->f_4)) <= 0.1f)
			{
				func_46(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_34(var uParam0)
{
	func_35(uParam0, 0f);
}

void func_35(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_36(BitTest(*uParam0, 4)) - fParam1);
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_36(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xA5E11AF0A2B928C1());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		iVar2 = unk_0x0DB7F8294D73598B();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xA5E11AF0A2B928C1()) / 1000f);
}

void func_37(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0xD0AE101DBAA43C98(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_38(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	
	if (((unk_0x984CA71F26DF483C() || unk_0x6C9BA681FB2251B6()) || unk_0x72474BA05A104E1E()) || unk_0x9FE90F1726C3B6BA())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_43(uParam0))
	{
		return;
	}
	unk_0xAD8D6CE83138FEB5();
	unk_0xCA0440712A8201E9(uParam2);
	if (!func_53(uParam0->f_1, 256) || (func_53(uParam0->f_1, 8192) && unk_0x6163ED6C61AD64FC(2)))
	{
		unk_0x9FD96C5DE6EDFC15(*uParam0, "SET_CLEAR_SPACE");
		unk_0xC49D258FBF3BF214(fParam1);
		unk_0xAE3413B0654A0035();
		unk_0x9FD96C5DE6EDFC15(*uParam0, "SET_MAX_WIDTH");
		unk_0xC49D258FBF3BF214(fParam5);
		unk_0xAE3413B0654A0035();
		unk_0x9FD96C5DE6EDFC15(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xAE3413B0654A0035();
		if (unk_0xCC17806DB0C41C19())
		{
			unk_0x9FD96C5DE6EDFC15(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD546F85F5AF0F231(func_53(uParam0->f_1, 4096));
			unk_0xAE3413B0654A0035();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x42AAFCB5B7854AA9(2);
					break;
				
				case 2:
					bVar4 = !unk_0x42AAFCB5B7854AA9(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x9FD96C5DE6EDFC15(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0xC6A3EF6C4A3412C1(iVar5);
					iVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						iVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							uVar3 = unk_0x28AEB293270C3DDA(uVar0, uVar1, iVar2);
						}
						else
						{
							uVar3 = unk_0xB49FF1EF1051E9DA(uVar0, uVar1, iVar2);
						}
						if (!unk_0x2AC37494BBF1DB16(uVar3))
						{
							func_42(uVar3);
						}
						bVar7++;
					}
					if (!unk_0x2AC37494BBF1DB16(uParam0->f_2[iVar6 /*15*/]))
					{
						func_52(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xCC17806DB0C41C19())
					{
						if (func_53(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xD546F85F5AF0F231(true);
								unk_0xC6A3EF6C4A3412C1(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xD546F85F5AF0F231(false);
								unk_0xC6A3EF6C4A3412C1(-1);
							}
						}
					}
					unk_0xAE3413B0654A0035();
				}
			}
			iVar6++;
		}
		fVar8 = func_41(bParam4, func_41(func_53(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x9FD96C5DE6EDFC15(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xC49D258FBF3BF214(fVar8);
		unk_0xAE3413B0654A0035();
		unk_0x9FD96C5DE6EDFC15(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xC49D258FBF3BF214(0f);
		unk_0xC49D258FBF3BF214(0f);
		unk_0xC49D258FBF3BF214(0f);
		unk_0xC49D258FBF3BF214(80f);
		unk_0xAE3413B0654A0035();
		func_40(&(uParam0->f_1), 256);
		func_39(&(uParam0->f_1), 128);
	}
	unk_0x55CCA1B8F633F628(*uParam0, 255, 255, 255, 0, 0);
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_41(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_42(var uParam0)
{
	unk_0x7DDE71A42D80E8FA(uParam0);
}

int func_43(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x5FAF55B1F052A2E6(*uParam0))
		{
			func_40(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_44(var uParam0)
{
	if (func_49(uParam0))
	{
		if (func_45(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_36(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_45(var uParam0)
{
	return BitTest(*uParam0, 2);
}

int func_46(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_49(&(uParam0->f_2)))
	{
		func_34(&(uParam0->f_2));
	}
	unk_0xEDECDDE17C1E41F5(14);
	if (!bParam2)
	{
		unk_0x55CCA1B8F633F628(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x55CCA1B8F633F628(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x51EB177CA0562B62(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_44(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		func_47(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_47(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_48(var uParam0)
{
	if (!func_49(uParam0))
	{
		func_34(uParam0);
	}
}

bool func_49(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_50(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0xECDAB41968FF21A8(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xC138749F62A9B13E("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_40(&(uParam0->f_1), 32);
	}
	if (unk_0x5FAF55B1F052A2E6(*uParam0))
	{
		func_40(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xE482CE60D0CA2FD4(*uParam0, 1);
		}
	}
	if (unk_0xCC17806DB0C41C19())
	{
		if (bParam3)
		{
			func_40(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_40(&(uParam0->f_1), 8192);
	}
}

void func_52(char* sParam0)
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_54(var uParam0, int iParam1)
{
	func_55(uParam0, iParam1);
}

void func_55(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_56(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_57()
{
	if (!BitTest(iLocal_48, 0) && !BitTest(iLocal_48, 1))
	{
		unk_0xC1B1E9A034A63A62(0);
		func_14(1, 0);
	}
	if (!unk_0x2FECE8D166B3056B())
	{
		unk_0x8581263F2F024518();
	}
	unk_0x8B438725D591ED78(2, 199, 1);
	unk_0x8B438725D591ED78(0, 59, 1);
	unk_0x8B438725D591ED78(0, 60, 1);
	unk_0x8B438725D591ED78(0, 37, 1);
	unk_0x8B438725D591ED78(0, 25, 1);
	unk_0xF8D5374FFFDBA719();
	if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
	{
		if (!BitTest(iLocal_48, 1))
		{
			func_12(1, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if (IntToFloat(unk_0xC9D9444186B5A374()) > (1500f * 0.075f) || unk_0x72474BA05A104E1E())
		{
			if (!unk_0x72474BA05A104E1E())
			{
				if (!unk_0x984CA71F26DF483C())
				{
					unk_0x6D5ACBBD4CE34249(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = unk_0xA5E11AF0A2B928C1() + 1000;
				if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
				{
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
				}
				func_13(0, 2, 1);
				func_23(1, 1, 1, 0, 0, 0, 0);
				func_3(1);
				unk_0x5D431973D33AF452(0);
				unk_0x72316F178C953A18(0);
				unk_0xCD3C8E1022864F65(1);
				unk_0x8581263F2F024518();
				if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
				{
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
				}
				func_14(0, 0);
				func_58(0);
			}
			else if (unk_0xA5E11AF0A2B928C1() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(iLocal_48, 3))
			{
				unk_0x577AE0048ADA90C8(1);
				unk_0xECDAB41968FF21A8(&iLocal_48, 3);
			}
		}
		else if (BitTest(iLocal_48, 3))
		{
			unk_0x577AE0048ADA90C8(0);
			unk_0x061B1200C95204CB(&iLocal_48, 3);
		}
	}
}

void func_59(var uParam0, float fParam1, float fParam2)
{
	if (func_49(&(uParam0->f_1)))
	{
		func_47(&(uParam0->f_1));
	}
	if (func_49(&(uParam0->f_4)))
	{
		func_47(&(uParam0->f_4));
	}
	func_37(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_60(var uParam0)
{
	if (!func_49(uParam0))
	{
		func_48(uParam0);
	}
	else
	{
		func_34(uParam0);
	}
}

void func_61(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0xF6AFEDAAE44A2159("OFFMISSION_WASTED", 0, -1);
}

var func_62()
{
	return unk_0x2B4645565204EA06("MP_BIG_MESSAGE_FREEMODE");
}

void func_63()
{
	if (!iLocal_176)
	{
		unk_0x72B586B6D6948F3C("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_113648.f_24997.f_5 = 1000;
		unk_0x82C56613DF341B0D(64);
		Global_113648.f_20566.f_472 = 54;
		uLocal_399 = unk_0x2B4645565204EA06("MIDSIZED_MESSAGE");
		func_98(1);
		while (!unk_0x5FAF55B1F052A2E6(uLocal_399))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x9FD96C5DE6EDFC15(uLocal_399, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_52("CULT_PASS");
		unk_0x08320883763BEFA3();
		while (!func_97())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_96();
		unk_0xC1B1E9A034A63A62(0);
		unk_0x531D638530A8DB97(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_176 = 1;
	}
	unk_0x55CCA1B8F633F628(uLocal_399, 255, 255, 255, 255, 0);
	if (!iLocal_178)
	{
		if (unk_0x83666F9FB8FEBD4B() > 9500)
		{
			unk_0x9FD96C5DE6EDFC15(uLocal_399, "SHARD_ANIM_OUT");
			unk_0xC6A3EF6C4A3412C1(1);
			unk_0xC49D258FBF3BF214(0.33f);
			unk_0xAE3413B0654A0035();
			iLocal_178 = 1;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() > 10000)
	{
		if (unk_0x5FAF55B1F052A2E6(uLocal_399))
		{
			unk_0xD0AE101DBAA43C98(&uLocal_399);
			func_98(0);
		}
		while (unk_0x2E496FE654DA4166(func_95(unk_0x93E99A2DBCBA9CFA()), Local_117, 1) < 209f && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_64(18);
		func_194();
	}
}

void func_64(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_93();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_92())
	{
		func_70(iParam0);
		unk_0x97DBA2AA6C70AFC7(0, 0);
		Global_113639 = unk_0xA5E11AF0A2B928C1();
		func_69(30000);
		StringCopy(&cVar0, func_68(Global_113637, 1), 64);
		if (func_67(Global_113637) > 0)
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
	func_66(&Global_32223);
	Global_113638 = 0;
	func_65(-1);
}

void func_65(int iParam0)
{
	Global_113637 = iParam0;
}

void func_66(var uParam0)
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

int func_67(int iParam0)
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

char* func_68(int iParam0, bool bParam1)
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

void func_69(int iParam0)
{
	Global_43808 = (unk_0xA5E11AF0A2B928C1() + iParam0);
}

void func_70(int iParam0)
{
	func_71(iParam0, 0, func_91(iParam0));
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_90();
	func_81(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_80(iParam0, &uVar0);
	Var1 = { func_72(&uVar0) };
}

struct<16> func_72(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_79(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_78(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_77(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_76(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_75(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_73(*uParam0), 64);
	return Var0;
}

int func_73(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_74(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_74(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_75(var uParam0)
{
	return uParam0 & 15;
}

int func_76(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_77(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_78(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_79(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

void func_80(int iParam0, var uParam1)
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
}

void func_81(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_73(*uParam0);
	iVar1 = func_75(*uParam0);
	iVar2 = func_76(*uParam0);
	iVar3 = func_79(*uParam0);
	iVar4 = func_78(*uParam0);
	iVar5 = func_77(*uParam0);
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
	iVar6 = func_89(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_89(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_82(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, iParam1);
	func_87(uParam0, iParam2);
	func_86(uParam0, iParam3);
	func_85(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_83(uParam0, iParam6);
}

void func_83(var uParam0, int iParam1)
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

void func_84(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(*uParam0);
	iVar1 = func_73(*uParam0);
	if (iParam1 < 1 || iParam1 > func_89(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_85(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_87(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_89(int iParam0, int iParam1)
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

var func_90()
{
	var uVar0;
	
	func_88(&uVar0, unk_0x731F95B6458DCF80());
	func_87(&uVar0, unk_0x77BBAAED3E25322C());
	func_86(&uVar0, unk_0x30DFE1FFD2CC7420());
	func_84(&uVar0, unk_0x8C0F17CAC308A14B());
	func_85(&uVar0, unk_0x61117764C67882B7());
	func_83(&uVar0, unk_0x367F557725B53815());
	return uVar0;
}

int func_91(int iParam0)
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

int func_92()
{
	if ((Global_113637 == func_93() && unk_0xA847A0F368810680()) && Global_113638)
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x688846D56810779A(), 64);
	uVar16 = func_94(Var0);
	return uVar16;
}

int func_94(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

Vector3 func_95(int iParam0)
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iParam0), 0);
}

void func_96()
{
	Global_32402 = 0;
	Global_32403 = 0;
	Global_32405 = 0;
	Global_32406 = 0;
	Global_32407 = 0;
}

int func_97()
{
	return 1;
}

void func_98(int iParam0)
{
	Global_78819 = iParam0;
	Global_78820 = iParam0;
}

void func_99(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_100(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_114(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_101(sParam2, iParam3, 0);
}

int func_101(char* sParam0, int iParam1, bool bParam2)
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
					func_113();
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
		if (func_112(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_111();
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
				func_110();
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
				if (func_109())
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
			if (func_5())
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
			func_108();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_107();
		func_102();
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
		func_113();
	}
	return 0;
}

void func_102()
{
	if (!func_103())
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

int func_103()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_106())
	{
		return 0;
	}
	if (func_104(unk_0x93E99A2DBCBA9CFA()))
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

bool func_104(int iParam0)
{
	return func_105(iParam0, 20);
}

var func_105(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_106()
{
	return -1;
}

void func_107()
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

void func_108()
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

int func_109()
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

void func_110()
{
	if (func_17(14))
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
		Global_20383 = func_15();
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

void func_111()
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

bool func_112(int iParam0, int iParam1)
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

void func_113()
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

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_115()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

void func_116()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_190)
	{
		case 0:
			unk_0xAEBC7005B2AE2564("THUNDER", 20f);
			if (!unk_0x34641C4C8576592F())
			{
				unk_0x2A3302E8B9D69CC9("ac_ig_3_p3_b", 8);
			}
			unk_0x852EC2A7DE66202D(joaat("a_m_o_acult_02"));
			unk_0x852EC2A7DE66202D(joaat("a_m_y_acult_02"));
			unk_0x852EC2A7DE66202D(joaat("prop_box_wood03a"));
			unk_0x852EC2A7DE66202D(joaat("prop_box_wood04a"));
			unk_0x852EC2A7DE66202D(joaat("prop_box_wood05a"));
			unk_0x852EC2A7DE66202D(joaat("prop_security_case_01"));
			while ((((((!func_143() || !unk_0x0CBB7C273DED26E7(joaat("a_m_o_acult_02"))) || !unk_0x0CBB7C273DED26E7(joaat("a_m_y_acult_02"))) || !unk_0x0CBB7C273DED26E7(joaat("prop_box_wood03a"))) || !unk_0x0CBB7C273DED26E7(joaat("prop_box_wood04a"))) || !unk_0x0CBB7C273DED26E7(joaat("prop_box_wood05a"))) || !unk_0x0CBB7C273DED26E7(joaat("prop_security_case_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			uLocal_576 = func_136(unk_0xC1A5EC5C986B98AD(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (unk_0x7DE17ACDD8BA2642(uLocal_576))
			{
				unk_0x970443E58680427C(iLocal_576, "Trevors_weapon", 0, 0, 0);
			}
			unk_0x970443E58680427C(0, "Rifle_Mag1^1", 3, unk_0x1BF6E110CDFA29AD(joaat("component_assaultrifle_clip_01")), 0);
			if (func_143() && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0x970443E58680427C(unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 0, 0);
				unk_0x970443E58680427C(iLocal_196[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x970443E58680427C(iLocal_196[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x970443E58680427C(iLocal_196[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x970443E58680427C(iLocal_196[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x970443E58680427C(iLocal_196[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x2C3ECEEB3179ED02(0);
			}
			unk_0x4EDE34FBADD967A6(0);
			if (!bLocal_172 && Global_113648.f_24997.f_5 != 1000)
			{
				func_135();
			}
			if (unk_0x7DE17ACDD8BA2642(iLocal_196[0]))
			{
				unk_0xE9C250FA35A936C8(&(iLocal_196[0]));
			}
			if (unk_0x7DE17ACDD8BA2642(iLocal_196[1]))
			{
				unk_0xE9C250FA35A936C8(&(iLocal_196[1]));
			}
			if (unk_0xF57C1326FD40C8A7(uLocal_246))
			{
				unk_0xEEF11E0DB5769366(uLocal_246, 0);
			}
			if (unk_0x7DE17ACDD8BA2642(uLocal_215))
			{
				unk_0xEF078F1FEE785D3E(&iLocal_215);
			}
			if (unk_0x7DE17ACDD8BA2642(iLocal_215))
			{
				unk_0xEF078F1FEE785D3E(&iLocal_215);
			}
			unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
			if (unk_0xCE4AAA035282336C(uLocal_228))
			{
				unk_0x45533C09A6C9B409(&uLocal_228);
			}
			func_23(1, 1, 1, 0, 0, 0, 0);
			unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
			unk_0xCD3C8E1022864F65(1);
			unk_0xB1A691274215E4CE(0);
			unk_0x61F7D56FFAFBF706(0);
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0xCB21E46FFA9189A0(unk_0xC1A5EC5C986B98AD(), 1);
			}
			unk_0xF82BC5193AF62796(Local_117, 100f, 1, 0, 0, 0);
			unk_0x54ECDA2DAB9CFB10(Local_117 - Vector(100f, 60f, 80f), Local_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			unk_0xFF2AF80F9EC7704C(0f);
			unk_0x436EC806292A3DB8(3, 0);
			unk_0x436EC806292A3DB8(5, 0);
			uLocal_248 = unk_0x31328DD68CE2B167(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			unk_0x852EC2A7DE66202D(joaat("a_m_o_acult_01"));
			while (!unk_0x0CBB7C273DED26E7(joaat("a_m_o_acult_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_190 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (unk_0xD73EA79D6A369031(0))
			{
				if (unk_0x42C63C7AA899C5C8("CULT_MASTER", 0))
				{
					if (!unk_0x7DE17ACDD8BA2642(iLocal_196[11]))
					{
						iLocal_196[11] = unk_0x9C8D7679C15E75FF(unk_0x469E7057A437B05B("CULT_MASTER", 0));
					}
				}
				if (unk_0x42C63C7AA899C5C8("REAR_CULT", 0))
				{
					if (!unk_0x7DE17ACDD8BA2642(iLocal_196[12]))
					{
						iLocal_196[12] = unk_0x9C8D7679C15E75FF(unk_0x469E7057A437B05B("REAR_CULT", 0));
					}
				}
				if (unk_0x42C63C7AA899C5C8("LEFT_OLD_CULT", 0))
				{
					if (!unk_0x7DE17ACDD8BA2642(iLocal_196[13]))
					{
						iLocal_196[13] = unk_0x9C8D7679C15E75FF(unk_0x469E7057A437B05B("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0x42C63C7AA899C5C8("CARBINE_CULT", 0))
				{
					if (!unk_0x7DE17ACDD8BA2642(iLocal_196[14]))
					{
						iLocal_196[14] = unk_0x9C8D7679C15E75FF(unk_0x469E7057A437B05B("CARBINE_CULT", 0));
					}
				}
				if (unk_0x42C63C7AA899C5C8("SHOTGUN_CULT", 0))
				{
					if (!unk_0x7DE17ACDD8BA2642(iLocal_196[15]))
					{
						iLocal_196[15] = unk_0x9C8D7679C15E75FF(unk_0x469E7057A437B05B("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0x42C63C7AA899C5C8("TREVOR", 0))
				{
					unk_0xCB21E46FFA9189A0(unk_0xC1A5EC5C986B98AD(), 0);
					unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), 188.9369f);
					unk_0x24698A8DD201FA31(unk_0xC1A5EC5C986B98AD(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, uLocal_248, 0);
					unk_0xBB6027D1D193CBA6(unk_0xC1A5EC5C986B98AD(), 1, 0);
				}
				if (unk_0x42C63C7AA899C5C8("Trevors_weapon", 0))
				{
					unk_0x527918A11B3A1D0C(iLocal_576, unk_0xC1A5EC5C986B98AD());
				}
				unk_0xAABD7B0753C5C286(91.3878f);
				unk_0xEAB390443C680F72(4.4337f, 1065353216);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				unk_0xB1A691274215E4CE(1);
				unk_0x61F7D56FFAFBF706(1);
				Local_51[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_100[0] = 254.8275f;
				Local_51[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_100[1] = 270.2025f;
				Local_51[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_100[2] = 299.8404f;
				Local_51[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_100[3] = 298.4257f;
				Local_51[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_100[4] = 283.5311f;
				Local_51[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_100[5] = 87.5233f;
				Local_51[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_100[6] = 109.6546f;
				Local_51[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_100[7] = 210.2433f;
				Local_51[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_100[8] = 203.732f;
				Local_51[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_100[9] = 39.1109f;
				Local_51[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_100[10] = 25.8472f;
				unk_0xDA95D0C19E737224("rghCult", &uLocal_410);
				iVar1 = 0;
				while (iVar1 < iLocal_196)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_196[iVar1] = unk_0x69FDD9508259E5B5(26, joaat("a_m_o_acult_01"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x90FF6DBE9D84E401(iLocal_196[iVar1], 0);
						unk_0xCBDC2B59922F92C3(iLocal_196[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						unk_0x8F758E95FCF28E36(iLocal_196[iVar1], 0);
						unk_0xE5069E489A2DE9E5(iLocal_196[iVar1], 2);
						unk_0x5D9BB2F6626AA730(iLocal_196[iVar1], 50f, 20);
						unk_0x55B25C3B4CEEEF4B(iLocal_196[iVar1], 5);
						unk_0xF70E5B487D125DA0(iLocal_196[iVar1], 100f);
						unk_0xEA1F0CBFFACFA528(iLocal_196[iVar1], 100f);
						unk_0xED2BD879E739E86B(iLocal_196[iVar1], 150, 0);
						unk_0x5DDC305DCF8431AC(iLocal_196[iVar1], unk_0x15A88CFAAFFC6C4B(40, 60));
						unk_0xCAC2B0C65B18E755(iLocal_196[iVar1], unk_0xC1A5EC5C986B98AD(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_196[iVar1] = unk_0x69FDD9508259E5B5(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x90FF6DBE9D84E401(iLocal_196[iVar1], 0);
						unk_0xCBDC2B59922F92C3(iLocal_196[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						unk_0x7FE5E05BE63F6CB8(iLocal_196[iVar1], 50, 1);
						unk_0x8F758E95FCF28E36(iLocal_196[iVar1], 2);
						unk_0xE5069E489A2DE9E5(iLocal_196[iVar1], 1);
						unk_0x5D9BB2F6626AA730(iLocal_196[iVar1], 50f, 20);
						unk_0x55B25C3B4CEEEF4B(iLocal_196[iVar1], 5);
						unk_0xF70E5B487D125DA0(iLocal_196[iVar1], 100f);
						unk_0xEA1F0CBFFACFA528(iLocal_196[iVar1], 100f);
						unk_0x5DDC305DCF8431AC(iLocal_196[iVar1], unk_0x15A88CFAAFFC6C4B(40, 60));
						unk_0xCAC2B0C65B18E755(iLocal_196[iVar1], unk_0xC1A5EC5C986B98AD(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0x66599E73DBA5A850(iLocal_196[iVar1]) && !unk_0x66599E73DBA5A850(iLocal_196[11])) && !unk_0x66599E73DBA5A850(iLocal_196[12])) && !unk_0x66599E73DBA5A850(iLocal_196[13])) && !unk_0x66599E73DBA5A850(iLocal_196[14])) && !unk_0x66599E73DBA5A850(iLocal_196[15]))
						{
							unk_0xCBDC2B59922F92C3(iLocal_196[11], joaat("weapon_pistol"), -1, 1, 1);
							unk_0xCBDC2B59922F92C3(iLocal_196[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0xCBDC2B59922F92C3(iLocal_196[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0xCBDC2B59922F92C3(iLocal_196[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							unk_0xCBDC2B59922F92C3(iLocal_196[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							unk_0x7FE5E05BE63F6CB8(iLocal_196[iVar1], 0, 1);
							unk_0x8F758E95FCF28E36(iLocal_196[iVar1], 3);
							unk_0xE5069E489A2DE9E5(iLocal_196[iVar1], 0);
							unk_0x55B25C3B4CEEEF4B(iLocal_196[iVar1], 0);
							unk_0xBE7D19843CA56CAA(iLocal_196[iVar1], 1f, 1f);
							unk_0xDBC7406226B5540E(&uLocal_247);
							unk_0xA930436FB34B9690(0, -1159.33f, 4924.412f, 221.6576f, unk_0xC1A5EC5C986B98AD(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 6000, 0);
							unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 4500, 0);
							unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
							unk_0xF2CFC6EC8C85FA78(uLocal_247);
							unk_0x3D7110D966B0CEA2(iLocal_196[15], uLocal_247);
							unk_0x63EF69C6969A3D26(&uLocal_247);
							unk_0xDBC7406226B5540E(&uLocal_247);
							unk_0xA930436FB34B9690(0, -1163.279f, 4932.933f, 222.541f, unk_0xC1A5EC5C986B98AD(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xE191A72DAEA0BF3B(0, unk_0xC1A5EC5C986B98AD(), 5000, 0);
							unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 7500, 0);
							unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 4500, 0);
							unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
							unk_0xF2CFC6EC8C85FA78(uLocal_247);
							unk_0x3D7110D966B0CEA2(iLocal_196[14], uLocal_247);
							unk_0x63EF69C6969A3D26(&uLocal_247);
							unk_0xDBC7406226B5540E(&uLocal_247);
							unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 2500, 0);
							unk_0xE191A72DAEA0BF3B(0, unk_0xC1A5EC5C986B98AD(), 5000, 0);
							unk_0xA930436FB34B9690(0, -1156.175f, 4926.073f, 221.3447f, unk_0xC1A5EC5C986B98AD(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 6500, 0);
							unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 4500, 0);
							unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
							unk_0xF2CFC6EC8C85FA78(uLocal_247);
							unk_0x3D7110D966B0CEA2(iLocal_196[13], uLocal_247);
							unk_0x63EF69C6969A3D26(&uLocal_247);
							unk_0xDBC7406226B5540E(&uLocal_247);
							unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 3000, 0);
							unk_0xA930436FB34B9690(0, -1157.962f, 4922.196f, 221.309f, unk_0xC1A5EC5C986B98AD(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 5500, 0);
							unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 4500, 0);
							unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
							unk_0xF2CFC6EC8C85FA78(uLocal_247);
							unk_0x3D7110D966B0CEA2(iLocal_196[12], uLocal_247);
							unk_0x63EF69C6969A3D26(&uLocal_247);
							unk_0xDBC7406226B5540E(&uLocal_247);
							unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 4500, 0);
							unk_0xE191A72DAEA0BF3B(0, unk_0xC1A5EC5C986B98AD(), 10000, 0);
							unk_0xA930436FB34B9690(0, -1161.475f, 4916.061f, 220.5658f, unk_0xC1A5EC5C986B98AD(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 4500, 0);
							unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 4500, 0);
							unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
							unk_0xF2CFC6EC8C85FA78(uLocal_247);
							unk_0x3D7110D966B0CEA2(iLocal_196[11], uLocal_247);
							unk_0x63EF69C6969A3D26(&uLocal_247);
							unk_0x71A535529C1CA5DF(iLocal_196[iVar1], 1);
							unk_0x992BB708B4B7A005(iLocal_196[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_196[iVar1] = unk_0x69FDD9508259E5B5(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x90FF6DBE9D84E401(iLocal_196[iVar1], 0);
						unk_0xCBDC2B59922F92C3(iLocal_196[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x7FE5E05BE63F6CB8(iLocal_196[iVar1], 50, 1);
						unk_0x8F758E95FCF28E36(iLocal_196[iVar1], 2);
						unk_0xE5069E489A2DE9E5(iLocal_196[iVar1], 0);
						unk_0x5D9BB2F6626AA730(iLocal_196[iVar1], 50f, 20);
						unk_0x857E9EFB607AD64E(iLocal_196[iVar1], 1);
						unk_0x55B25C3B4CEEEF4B(iLocal_196[iVar1], 5);
						unk_0xF70E5B487D125DA0(iLocal_196[iVar1], 100f);
						unk_0xEA1F0CBFFACFA528(iLocal_196[iVar1], 100f);
						unk_0x5DDC305DCF8431AC(iLocal_196[iVar1], unk_0x15A88CFAAFFC6C4B(40, 60));
						unk_0xCAC2B0C65B18E755(iLocal_196[iVar1], unk_0xC1A5EC5C986B98AD(), 0, 16);
					}
					unk_0x8386356641D0DED1(iLocal_196[iVar1], uLocal_410);
					unk_0x692C3FDAD7DB53CC(iLocal_196[iVar1], func_134(unk_0x30BE8A934C020461(iLocal_196[iVar1], 1), func_95(unk_0x93E99A2DBCBA9CFA())));
					unk_0xC5B2830898581862(iLocal_196[iVar1], 1);
					unk_0x598D91BBD045C1F3(iLocal_196[iVar1], 42, 1);
					uLocal_229[iVar1] = func_132(iLocal_196[iVar1], 1, 145);
					iVar1++;
				}
				func_99(&uLocal_411, 0, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
				func_99(&uLocal_411, 3, iLocal_196[11], "ACULTMaster", 0, 1);
				func_99(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
				unk_0xECDAB41968FF21A8(&iVar0, 1);
				unk_0xECDAB41968FF21A8(&iVar0, 3);
				unk_0xECDAB41968FF21A8(&iVar0, 4);
				if (!bLocal_172)
				{
					uLocal_216[0] = unk_0x9D4156571988E1D4(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[1] = unk_0x9D4156571988E1D4(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[2] = unk_0x9D4156571988E1D4(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[3] = unk_0x9D4156571988E1D4(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_216[0] = uLocal_216[0];
				uLocal_216[1] = uLocal_216[1];
				uLocal_216[2] = uLocal_216[2];
				uLocal_216[3] = uLocal_216[3];
				iLocal_221[0] = unk_0xF19D6C0E8B56BE23(joaat("prop_box_wood04a"), -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
				iLocal_221[1] = unk_0xF19D6C0E8B56BE23(joaat("prop_box_wood03a"), -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
				iLocal_221[2] = unk_0xF19D6C0E8B56BE23(joaat("prop_box_wood04a"), -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
				iLocal_221[3] = unk_0xF19D6C0E8B56BE23(joaat("prop_box_wood04a"), -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
				iLocal_221[4] = unk_0xF19D6C0E8B56BE23(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
				iLocal_221[5] = unk_0xF19D6C0E8B56BE23(joaat("prop_box_wood03a"), -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
				unk_0x464B5B0F22497FC5(iLocal_221[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				unk_0x464B5B0F22497FC5(iLocal_221[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				unk_0x464B5B0F22497FC5(iLocal_221[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				unk_0x464B5B0F22497FC5(iLocal_221[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				unk_0x464B5B0F22497FC5(iLocal_221[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				unk_0x464B5B0F22497FC5(iLocal_221[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_131() < 50)
				{
					unk_0x7F07CC39C7C410C2(unk_0x93E99A2DBCBA9CFA(), 0.5f, 1, 0);
				}
				if (func_130() != 18)
				{
					func_128(18);
				}
				if (!func_92())
				{
					func_117(0);
				}
				func_1(1);
				bLocal_172 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_117(int iParam0)
{
	if (func_122())
	{
		Global_113638 = 1;
		Global_113635 = unk_0xA5E11AF0A2B928C1();
		if (func_121(Global_113637))
		{
			func_118(0);
		}
		unk_0x97DBA2AA6C70AFC7(1, "RE_TITLE");
		if (iParam0 && func_121(Global_113637))
		{
			unk_0x01680CFD15C1C85D();
		}
		return 1;
	}
	return 0;
}

void func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_119(func_120(iParam0), -1);
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
					func_119(func_120(iParam0), -1);
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
					func_119(func_120(iParam0), -1);
					Global_113648.f_24997.f_4++;
					unk_0xECDAB41968FF21A8(&Global_113644, 2);
				}
			}
			break;
	}
}

void func_119(var uParam0, int iParam1)
{
	unk_0x476CC3711883B966(uParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

char* func_120(int iParam0)
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

int func_121(int iParam0)
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

int func_122()
{
	switch (func_123(&Global_32223, 0, 5, 0, unk_0xAF908D5E2416DA93()))
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

int func_123(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_127(0))
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
		if (!func_125(iParam2))
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
			func_124(uParam0, iParam4);
		}
	}
	return 2;
}

void func_124(var uParam0, int iParam1)
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

bool func_125(int iParam0)
{
	return func_126(iParam0, Global_43257);
}

int func_126(int iParam0, int iParam1)
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

int func_127(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_93();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_65(iParam0);
	unk_0x1A59C174B4130991(0);
	unk_0xB1BC77E1EAD07BAE(1);
	Global_113634 = 0;
	func_129();
}

void func_129()
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

int func_130()
{
	return Global_113637;
}

int func_131()
{
	var uVar0;
	
	switch (func_15())
	{
		case 0:
			unk_0xDD7756E2742E0F6D(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			unk_0xDD7756E2742E0F6D(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			unk_0xDD7756E2742E0F6D(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

var func_132(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_133(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE4AAA035282336C(uVar0)) && unk_0x42FA33BDEDF21186(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x4049FDC177C92D4B(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_133(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x53B496178AE44636(iParam0);
	if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_41(unk_0xA26A9A07F761D8F8(), 1f, 1f));
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
		unk_0x225EB85DBC38E707(uVar0, func_41(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
		unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_41(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_134(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x06A2A02CDC68090B((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_135()
{
	Global_32403 = 1;
}

int func_136(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!unk_0xED31EFCAA05B93ED(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0))
		{
			iVar3 = unk_0x18974B8F28F70FE4(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0xB2978D41F2B21113(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0xB2BC9E9923E2546A(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { unk_0x30BE8A934C020461(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	while (func_140(iVar2, iVar8) != 0)
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0))
		{
			if (unk_0x1A7C88BD7ADA98BE(iParam0, iVar2, func_140(iVar2, iVar8)))
			{
				if (func_139(func_140(iVar2, iVar8)))
				{
					iVar9 = unk_0x1BF6E110CDFA29AD(func_140(iVar2, iVar8));
				}
			}
		}
		iVar8++;
	}
	uVar1 = unk_0x9A27CA9A0DA58E5D(iVar2, iVar3, Var5, iVar0, 1065353216, iVar9, iParam7, iParam8);
	while (func_140(iVar2, iVar10) != 0)
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0))
		{
			if (unk_0x1A7C88BD7ADA98BE(iParam0, iVar2, func_140(iVar2, iVar10)))
			{
				unk_0xDAE94EB7AAFB39B9(uVar1, func_140(iVar2, iVar10));
				func_137(uVar1, func_140(iVar2, iVar10));
			}
		}
		iVar10++;
	}
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (unk_0xED31EFCAA05B93ED(iParam0, iVar2, 0))
		{
			unk_0x3C3807FE5776E8BB(uVar1, unk_0x60B2BAFA7F1A9CDF(iParam0, iVar2));
		}
	}
	return uVar1;
}

void func_137(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_138(iParam1);
	if (iVar0 != 0)
	{
		unk_0xDAE94EB7AAFB39B9(uParam0, iVar0);
	}
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE");
			break;
		
		case joaat("component_pistol_mk2_camo_02"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE");
			break;
		
		case joaat("component_pistol_mk2_camo_03"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE");
			break;
		
		case joaat("component_pistol_mk2_camo_04"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE");
			break;
		
		case joaat("component_pistol_mk2_camo_05"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE");
			break;
		
		case joaat("component_pistol_mk2_camo_06"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE");
			break;
		
		case joaat("component_pistol_mk2_camo_07"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE");
			break;
		
		case joaat("component_pistol_mk2_camo_08"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE");
			break;
		
		case joaat("component_pistol_mk2_camo_09"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE");
			break;
		
		case joaat("component_pistol_mk2_camo_10"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE");
			break;
		
		case joaat("component_pistol_mk2_camo_ind_01"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
		
		case joaat("component_snspistol_mk2_camo"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE");
			break;
		
		case joaat("component_snspistol_mk2_camo_02"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE");
			break;
		
		case joaat("component_snspistol_mk2_camo_03"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE");
			break;
		
		case joaat("component_snspistol_mk2_camo_04"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE");
			break;
		
		case joaat("component_snspistol_mk2_camo_05"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE");
			break;
		
		case joaat("component_snspistol_mk2_camo_06"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE");
			break;
		
		case joaat("component_snspistol_mk2_camo_07"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE");
			break;
		
		case joaat("component_snspistol_mk2_camo_08"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE");
			break;
		
		case joaat("component_snspistol_mk2_camo_09"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE");
			break;
		
		case joaat("component_snspistol_mk2_camo_10"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE");
			break;
		
		case joaat("component_snspistol_mk2_camo_ind_01"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
		
		case 1141184690:
			return 1011473080;
			break;
	}
	return 0;
}

int func_139(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == joaat("component_gunrun_mk2_upgrade")) || iParam0 == joaat("component_appistol_varmod_security")) || iParam0 == joaat("component_pumpshotgun_varmod_security")) || iParam0 == joaat("component_microsmg_varmod_security")) || iParam0 == 330905451)
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
				
				case 4:
					iVar0 = 330905451;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		case joaat("weapon_bat"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 716207715;
					break;
				
				case 1:
					iVar0 = 446271089;
					break;
				
				case 2:
					iVar0 = 1045616099;
					break;
				
				case 3:
					iVar0 = 1336277129;
					break;
				
				case 4:
					iVar0 = -513369076;
					break;
				
				case 5:
					iVar0 = -447700000;
					break;
				
				case 6:
					iVar0 = -149207179;
					break;
				
				case 7:
					iVar0 = 166784288;
					break;
				
				case 8:
					iVar0 = 2068729789;
					break;
				
				case 9:
					iVar0 = 1761389338;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_142(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x99844FCFECAC01A5(iVar1))
					{
						if (unk_0xDDBECC1D7EC5DB2B(iVar1, iVar2, &Var43))
						{
							if (!func_141(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case 1011473080:
			return 1;
			break;
	}
	return 0;
}

int func_142(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xDF411E9128FAD473();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xF65F6F7A093E58A1(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_143()
{
	bool bVar0;
	
	bVar0 = unk_0xFD017BA8C1B2996F();
	if (!Global_78557)
	{
		if (!bVar0)
		{
			Global_78557 = 1;
		}
	}
	return bVar0;
}

int func_144(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_145(iParam0, iParam1);
}

int func_145(int iParam0, int iParam1)
{
	if (func_17(14) && !func_156(iParam0))
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
	if (func_155(&Global_4542597))
	{
		if (func_153(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_146(&Global_4542597, iParam0))
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

int func_146(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_156(iParam1))
	{
		return 0;
	}
	if (func_153(uParam0, iParam1))
	{
		return 0;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0);
	}
	func_149(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_147(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_147(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_156(iParam1))
	{
		return 0;
	}
	if (func_153(uParam0, iParam1))
	{
		return 0;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_148(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_148(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_149(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_150(uParam0, iVar0);
		iVar0++;
	}
	func_151(uParam0, (Global_4542596 - 0.5f));
}

void func_150(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_151(var uParam0, float fParam1)
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

float func_152(var uParam0)
{
	return uParam0->f_80;
}

bool func_153(var uParam0, int iParam1)
{
	return func_154(uParam0, iParam1) != -1;
}

int func_154(var uParam0, int iParam1)
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

bool func_155(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_156(int iParam0)
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

void func_157()
{
	if (fLocal_183 > 0f)
	{
		fLocal_183 = (fLocal_183 - (0.6f / (1f / unk_0x290D4E218346D595())));
	}
	else
	{
		fLocal_183 = 0f;
	}
	if (fLocal_183 >= 0f)
	{
		unk_0xE34512C3600D64F2(Global_41953[10 /*31*/], fLocal_183, 0, 1);
		unk_0x289D605FFACC399B(Global_41953[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 < 0f)
	{
		fLocal_182 = (fLocal_182 + (0.6f / (1f / unk_0x290D4E218346D595())));
	}
	else
	{
		fLocal_182 = 0f;
	}
	if (fLocal_182 <= 0f)
	{
		unk_0xE34512C3600D64F2(Global_41953[9 /*31*/], fLocal_182, 0, 1);
		unk_0x289D605FFACC399B(Global_41953[9 /*31*/], 4, 0, 1);
	}
}

void func_158()
{
	if (fLocal_183 < 1f)
	{
		fLocal_183 = (fLocal_183 + (0.6f / (1f / unk_0x290D4E218346D595())));
	}
	else
	{
		fLocal_183 = 1f;
	}
	if (fLocal_183 <= 1f)
	{
		unk_0xE34512C3600D64F2(Global_41953[10 /*31*/], fLocal_183, 0, 1);
		unk_0x289D605FFACC399B(Global_41953[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 > -1f)
	{
		fLocal_182 = (fLocal_182 - (0.6f / (1f / unk_0x290D4E218346D595())));
	}
	else
	{
		fLocal_182 = -1f;
	}
	if (fLocal_182 >= -1f)
	{
		unk_0xE34512C3600D64F2(Global_41953[9 /*31*/], fLocal_182, 0, 1);
		unk_0x289D605FFACC399B(Global_41953[9 /*31*/], 4, 0, 1);
	}
}

void func_159()
{
	switch (iLocal_189)
	{
		case 0:
			unk_0x852EC2A7DE66202D(joaat("a_m_o_acult_02"));
			unk_0x852EC2A7DE66202D(joaat("prop_anim_cash_pile_02"));
			unk_0x28818732C8F0F80E("random@altruist_cult");
			unk_0x173922034C9CB651("AC_DELIVERED");
			unk_0xEF8BC9C45E60F0D1(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x0CBB7C273DED26E7(joaat("a_m_o_acult_02")) && unk_0x0CBB7C273DED26E7(joaat("prop_anim_cash_pile_02"))) && unk_0x2BBF749E555360DC("random@altruist_cult")) && unk_0x173922034C9CB651("AC_DELIVERED")) && unk_0x4ACA2D82C1D0DB4F(joaat("weapon_assaultrifle")))
			{
				if (Global_113648.f_24997.f_5 < 2)
				{
					if (Global_113648.f_24997.f_5 == 0)
					{
						sLocal_409 = "ACULT_HI";
					}
					else
					{
						sLocal_409 = "ACULT_LEAVE5";
					}
					sLocal_403 = "cult_p5_guard";
					sLocal_405 = "cult_p5_trv";
					sLocal_406 = "cult_p5_victim_01";
					sLocal_407 = "cult_p5_victim_02";
					sLocal_408 = "cult_p5_cam";
					fLocal_185 = 0.75f;
					fLocal_184 = 0.999f;
				}
				else if (Global_113648.f_24997.f_5 >= 2)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_407 = "cult_p7_victim_02";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					unk_0x852EC2A7DE66202D(joaat("prop_box_wood03a"));
					unk_0x852EC2A7DE66202D(joaat("prop_box_wood04a"));
					unk_0x852EC2A7DE66202D(joaat("prop_box_wood05a"));
					unk_0x852EC2A7DE66202D(joaat("prop_security_case_01"));
					if (!unk_0x34641C4C8576592F())
					{
						unk_0x2A3302E8B9D69CC9("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xCE4AAA035282336C(uLocal_228))
				{
					unk_0x45533C09A6C9B409(&uLocal_228);
				}
				func_23(1, 1, 1, 0, 0, 0, 0);
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
				unk_0xCD3C8E1022864F65(1);
				unk_0xB1A691274215E4CE(0);
				unk_0x61F7D56FFAFBF706(0);
				unk_0xCB21E46FFA9189A0(unk_0xC1A5EC5C986B98AD(), 1);
				unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
				unk_0x5C37F509B0398DFA("AC_DELIVERED");
				if (func_185())
				{
					func_184(0);
				}
				func_182();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					uLocal_213 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
					if (unk_0xFBD273FDBCF0C5BD(uLocal_213, 0))
					{
						if (unk_0xF193A4B306E6BF93(uLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					uLocal_213 = unk_0xE475C458F52F1781();
					if (!unk_0x66599E73DBA5A850(uLocal_193[0]) && !unk_0x66599E73DBA5A850(uLocal_193[1]))
					{
						unk_0x909F139DC199D8E0(uLocal_193[0]);
						unk_0xDC21E058EE11964C(uLocal_193[0]);
						unk_0x909F139DC199D8E0(uLocal_193[1]);
						unk_0xDC21E058EE11964C(uLocal_193[1]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (unk_0x7DE17ACDD8BA2642(uLocal_213))
			{
				if (!unk_0x1AFE963DA61006ED(iLocal_213))
				{
					unk_0x85BAE84748AD1A23(iLocal_213, 1, 0);
				}
				if (unk_0x1C4E4DC1EFE24DF1(iLocal_213, Local_120, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0xC2E3C377D893C17A(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x055111B11E6624FD(iLocal_213, 0))
					{
						unk_0x692C3FDAD7DB53CC(iLocal_213, 149.8882f);
						unk_0xCB8DD5B44DBC2DEB(iLocal_213, 1084227584);
					}
				}
			}
			unk_0xF82BC5193AF62796(Local_120, 12f, 1, 0, 0, 0);
			unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), 128.2065f);
			if (!unk_0x66599E73DBA5A850(uLocal_193[0]) && !unk_0x66599E73DBA5A850(uLocal_193[1]))
			{
				unk_0xC2E3C377D893C17A(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(uLocal_193[0], 128.2065f);
				unk_0xC2E3C377D893C17A(uLocal_193[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(uLocal_193[1], 128.2065f);
			}
			iLocal_196[0] = unk_0x69FDD9508259E5B5(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_99(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_113648.f_24997.f_5 >= 2)
			{
				iLocal_196[1] = unk_0x69FDD9508259E5B5(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_99(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_411, 0, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
			func_99(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			func_100(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			unk_0xC5B2830898581862(iLocal_196[0], 1);
			iLocal_215 = unk_0x9A27CA9A0DA58E5D(joaat("weapon_assaultrifle"), -1, unk_0x30BE8A934C020461(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0xBD02C9D4D7076ECC(iLocal_215, iLocal_196[0], unk_0xCF99BEF1317B66DA(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1, 0);
			if (Global_113648.f_24997.f_5 < 2)
			{
				uLocal_214 = unk_0xF19D6C0E8B56BE23(joaat("prop_anim_cash_pile_02"), Local_117, 1, 1, 0);
				unk_0xBD02C9D4D7076ECC(uLocal_214, unk_0xC1A5EC5C986B98AD(), unk_0xCF99BEF1317B66DA(unk_0xC1A5EC5C986B98AD(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
			}
			else if (Global_113648.f_24997.f_5 >= 2)
			{
				unk_0xCBDC2B59922F92C3(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_246 = unk_0xDEE46CEB08617ECA("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_188 = unk_0x191673E3F99212B2(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x468D976993BF7FE1(unk_0xC1A5EC5C986B98AD(), uLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x468D976993BF7FE1(iLocal_196[0], uLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_113648.f_24997.f_5 >= 2)
			{
				unk_0x468D976993BF7FE1(iLocal_196[1], uLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x5950D902D5442CB4(uLocal_246, uLocal_188, sLocal_408, "random@altruist_cult");
			unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
			if (!unk_0x66599E73DBA5A850(uLocal_193[0]) && !unk_0x66599E73DBA5A850(uLocal_193[1]))
			{
				unk_0x468D976993BF7FE1(uLocal_193[0], uLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0x468D976993BF7FE1(uLocal_193[1], uLocal_188, "random@altruist_cult", sLocal_407, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!unk_0x66599E73DBA5A850(uLocal_193[0]))
			{
				if (unk_0xE07B92C7EA4970AA(uLocal_193[0]))
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x66599E73DBA5A850(uLocal_193[1]))
			{
				if (unk_0xE07B92C7EA4970AA(uLocal_193[1]))
				{
					func_180(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xABF98B1999FE64CA(uLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!unk_0x66599E73DBA5A850(uLocal_193[0]))
			{
				if (unk_0xE07B92C7EA4970AA(uLocal_193[0]))
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x66599E73DBA5A850(uLocal_193[1]))
			{
				if (unk_0xE07B92C7EA4970AA(uLocal_193[1]))
				{
					func_180(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xABF98B1999FE64CA(uLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_113648.f_24997.f_5 < 2)
			{
				func_135();
				if (unk_0x7DE17ACDD8BA2642(iLocal_196[0]))
				{
					unk_0xE9C250FA35A936C8(&(iLocal_196[0]));
				}
				if (unk_0x7DE17ACDD8BA2642(iLocal_196[1]))
				{
					unk_0xE9C250FA35A936C8(&(iLocal_196[1]));
				}
				if (unk_0x7DE17ACDD8BA2642(iLocal_214))
				{
					unk_0xEF078F1FEE785D3E(&iLocal_214);
				}
				if (unk_0x7DE17ACDD8BA2642(iLocal_215))
				{
					unk_0xEF078F1FEE785D3E(&iLocal_215);
				}
				unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
				unk_0x4A954DC99388FAC2(0, 0, 3, 0);
				unk_0xEEF11E0DB5769366(uLocal_246, 0);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				unk_0xB1A691274215E4CE(1);
				unk_0x61F7D56FFAFBF706(1);
				unk_0xCB21E46FFA9189A0(unk_0xC1A5EC5C986B98AD(), 0);
				unk_0xAABD7B0753C5C286(0);
				func_160(func_15(), 1, 2000, 0, 0);
			}
			unk_0x5C37F509B0398DFA("AC_DONE");
			Global_113648.f_24997.f_5 += 2;
			iLocal_174 = 1;
			break;
	}
}

void func_160(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_179(iParam0) == 3)
	{
		return;
	}
	if (func_179(iParam0) == 4)
	{
		return;
	}
	func_161(func_179(iParam0), 1, iParam1, iParam2, 0);
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

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_178();
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
					func_177(99, 1);
					func_176(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_176(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_176(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_174(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_171(5))
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
							func_176(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_176(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_176(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_171(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_176(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_176(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_176(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_176(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_176(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_176(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_176(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_176(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_176(joaat("sp2_money_spent_property"), iParam3);
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
									func_176(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_176(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_176(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_176(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_176(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_176(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_171(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_176(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_176(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_176(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_176(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_176(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_176(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_170(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_177(95, iParam3);
					break;
				
				case 1:
					func_177(97, iParam3);
					break;
				
				case 2:
					func_177(96, iParam3);
					break;
			}
			func_177(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_164(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_164(bVar1);
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
					func_176(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_176(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_176(joaat("sp2_total_cash_earned"), iParam3);
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
	func_163(iParam0);
	if (Global_43257 == 15)
	{
		func_162(0);
	}
	return 1;
}

void func_162(bool bParam0)
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

void func_163(int iParam0)
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

void func_164(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_169(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_169(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_169(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_169(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_167(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_167(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_167(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_167(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_167(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_167(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_166() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x061B1200C95204CB(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x061B1200C95204CB(&(Global_2359296[func_166() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xD30970E11AD0FF0D("COUP_RED");
		unk_0x48849374B34BB7B9(func_165(bParam0));
		unk_0x4BE755B3858339A1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_165(bool bParam0)
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

int func_166()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_168(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_168(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

void func_169(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

void func_170(int iParam0)
{
	func_177(93, iParam0);
	func_177(29, iParam0);
	func_177(30, iParam0);
}

int func_171(int iParam0)
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
		return func_173(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_173(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_173(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_173(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xD48CE560FB238316();
		iVar1 = func_172(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xD48CE560FB238316();
		iVar3 = func_172(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xD48CE560FB238316();
		iVar5 = func_172(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xD48CE560FB238316();
		iVar7 = func_172(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xD48CE560FB238316();
		iVar9 = func_172(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xD48CE560FB238316();
		iVar11 = func_172(8277, -1, 0);
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
	return BitTest(Global_2359296[func_166() /*5568*/].f_681.f_10, iParam0);
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_168(iParam1)];
		if (unk_0xDD7756E2742E0F6D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_173(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_174(bool bParam0)
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
		func_175(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_144(27, 1);
	return 1;
}

int func_175(int iParam0, int iParam1)
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

void func_176(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDD7756E2742E0F6D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3CC35ACFFC9C730E(iParam0, iVar0, 1);
}

void func_177(int iParam0, int iParam1)
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

void func_178()
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

int func_179(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

void func_180(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xB7C28610A558761B(uParam0, sParam1, sParam2, func_181(iParam3), 0);
}

int func_181(int iParam0)
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

void func_182()
{
	Global_20591 = 0;
	func_183();
}

void func_183()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
	}
}

void func_184(int iParam0)
{
	Global_22736 = iParam0;
}

int func_185()
{
	if (Global_22736 == 1)
	{
		return 1;
	}
	return 0;
}

void func_186()
{
	switch (iLocal_189)
	{
		case 0:
			unk_0x852EC2A7DE66202D(joaat("a_m_o_acult_02"));
			unk_0x852EC2A7DE66202D(joaat("prop_anim_cash_pile_02"));
			unk_0x28818732C8F0F80E("random@altruist_cult");
			unk_0x173922034C9CB651("AC_DELIVERED");
			unk_0xEF8BC9C45E60F0D1(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x0CBB7C273DED26E7(joaat("a_m_o_acult_02")) && unk_0x0CBB7C273DED26E7(joaat("prop_anim_cash_pile_02"))) && unk_0x2BBF749E555360DC("random@altruist_cult")) && unk_0x173922034C9CB651("AC_DELIVERED")) && unk_0x4ACA2D82C1D0DB4F(joaat("weapon_assaultrifle")))
			{
				if (Global_113648.f_24997.f_5 == 0)
				{
					sLocal_409 = "ACULT_HI";
					sLocal_403 = "cult_p2_guard";
					sLocal_405 = "cult_p2_trv";
					sLocal_406 = "cult_p2_victim";
					sLocal_408 = "cult_p2_cam";
					fLocal_185 = 0.8f;
					fLocal_184 = 0.968f;
				}
				else if (Global_113648.f_24997.f_5 == 1)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_113648.f_24997.f_5 == 2)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_113648.f_24997.f_5 >= 3)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					unk_0x852EC2A7DE66202D(joaat("prop_box_wood03a"));
					unk_0x852EC2A7DE66202D(joaat("prop_box_wood04a"));
					unk_0x852EC2A7DE66202D(joaat("prop_box_wood05a"));
					unk_0x852EC2A7DE66202D(joaat("prop_security_case_01"));
					if (!unk_0x34641C4C8576592F())
					{
						unk_0x2A3302E8B9D69CC9("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xCE4AAA035282336C(uLocal_228))
				{
					unk_0x45533C09A6C9B409(&uLocal_228);
				}
				func_23(1, 1, 1, 0, 0, 0, 0);
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
				unk_0xCD3C8E1022864F65(1);
				unk_0xB1A691274215E4CE(0);
				unk_0x61F7D56FFAFBF706(0);
				unk_0xCB21E46FFA9189A0(unk_0xC1A5EC5C986B98AD(), 1);
				unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
				unk_0x5C37F509B0398DFA("AC_DELIVERED");
				if (func_185())
				{
					func_184(0);
				}
				func_182();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					iLocal_213 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
					if (unk_0xFBD273FDBCF0C5BD(iLocal_213, 0))
					{
						if (unk_0xF193A4B306E6BF93(iLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					iLocal_213 = unk_0xE475C458F52F1781();
					if (!unk_0x66599E73DBA5A850(uLocal_193[0]))
					{
						unk_0x909F139DC199D8E0(uLocal_193[0]);
						unk_0xDC21E058EE11964C(uLocal_193[0]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (unk_0x7DE17ACDD8BA2642(iLocal_213))
			{
				if (!unk_0x1AFE963DA61006ED(iLocal_213))
				{
					unk_0x85BAE84748AD1A23(iLocal_213, 1, 0);
				}
				if (unk_0x1C4E4DC1EFE24DF1(iLocal_213, Local_120, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0xC2E3C377D893C17A(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x055111B11E6624FD(iLocal_213, 0))
					{
						unk_0x692C3FDAD7DB53CC(iLocal_213, 149.8882f);
						unk_0xCB8DD5B44DBC2DEB(iLocal_213, 1084227584);
					}
				}
			}
			unk_0xF82BC5193AF62796(Local_120, 12f, 1, 0, 0, 0);
			unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), 128.2065f);
			if (!unk_0x66599E73DBA5A850(uLocal_193[0]))
			{
				unk_0xC2E3C377D893C17A(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(uLocal_193[0], 128.2065f);
			}
			iLocal_196[0] = unk_0x69FDD9508259E5B5(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_99(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_113648.f_24997.f_5 >= 3)
			{
				iLocal_196[1] = unk_0x69FDD9508259E5B5(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_99(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_411, 0, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
			func_99(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			if (Global_113648.f_24997.f_5 != 1 && Global_113648.f_24997.f_5 != 2)
			{
				func_100(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			unk_0xC5B2830898581862(iLocal_196[0], 1);
			iLocal_214 = unk_0xF19D6C0E8B56BE23(joaat("prop_anim_cash_pile_02"), Local_117, 1, 1, 0);
			iLocal_215 = unk_0x9A27CA9A0DA58E5D(joaat("weapon_assaultrifle"), -1, unk_0x30BE8A934C020461(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0xBD02C9D4D7076ECC(iLocal_215, iLocal_196[0], unk_0xCF99BEF1317B66DA(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1, 0);
			if (Global_113648.f_24997.f_5 < 3)
			{
				if (Global_113648.f_24997.f_5 == 0)
				{
					unk_0xBD02C9D4D7076ECC(iLocal_214, unk_0xC1A5EC5C986B98AD(), unk_0xCF99BEF1317B66DA(unk_0xC1A5EC5C986B98AD(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				}
				else
				{
					unk_0xBD02C9D4D7076ECC(iLocal_214, unk_0xC1A5EC5C986B98AD(), unk_0xCF99BEF1317B66DA(unk_0xC1A5EC5C986B98AD(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				}
			}
			else if (Global_113648.f_24997.f_5 >= 3)
			{
				unk_0xCBDC2B59922F92C3(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_246 = unk_0xDEE46CEB08617ECA("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_188 = unk_0x191673E3F99212B2(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x468D976993BF7FE1(unk_0xC1A5EC5C986B98AD(), uLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x468D976993BF7FE1(iLocal_196[0], uLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_113648.f_24997.f_5 >= 3)
			{
				unk_0x468D976993BF7FE1(iLocal_196[1], uLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x5950D902D5442CB4(uLocal_246, uLocal_188, sLocal_408, "random@altruist_cult");
			unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
			if (!unk_0x66599E73DBA5A850(uLocal_193[0]))
			{
				unk_0x468D976993BF7FE1(uLocal_193[0], uLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!unk_0x66599E73DBA5A850(uLocal_193[0]))
			{
				if (unk_0xE07B92C7EA4970AA(uLocal_193[0]))
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xC9D9444186B5A374() > 2000 && unk_0xC9D9444186B5A374() < 2100)
			{
				if (Global_113648.f_24997.f_5 == 1 || Global_113648.f_24997.f_5 == 2)
				{
					if (!func_115())
					{
						func_100(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0xABF98B1999FE64CA(uLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!unk_0x66599E73DBA5A850(uLocal_193[0]))
			{
				if (unk_0xE07B92C7EA4970AA(uLocal_193[0]))
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_113648.f_24997.f_5 == 1 || Global_113648.f_24997.f_5 == 2)
			{
				if ((unk_0xABF98B1999FE64CA(uLocal_188) > 0.9742857f && !iLocal_181) && unk_0x673F52632EDC33B7() == 4)
				{
					unk_0x451128B7D435FBF2("CamPushInNeutral", 0, 0);
					unk_0x531D638530A8DB97(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_181 = 1;
				}
			}
			if (unk_0xABF98B1999FE64CA(uLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_113648.f_24997.f_5 < 3)
			{
				if (Global_113648.f_24997.f_5 != 1 && Global_113648.f_24997.f_5 != 2)
				{
					func_135();
					if (unk_0x7DE17ACDD8BA2642(iLocal_196[0]))
					{
						unk_0xE9C250FA35A936C8(&(iLocal_196[0]));
					}
					if (unk_0x7DE17ACDD8BA2642(iLocal_196[1]))
					{
						unk_0xE9C250FA35A936C8(&(iLocal_196[1]));
					}
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					if (unk_0x7DE17ACDD8BA2642(iLocal_196[0]))
					{
						unk_0x724FFAED1C56CE2B(iLocal_196[0], 0, 0);
					}
					if (unk_0x7DE17ACDD8BA2642(iLocal_196[1]))
					{
						unk_0x724FFAED1C56CE2B(iLocal_196[1], 0, 0);
					}
					if (unk_0x7DE17ACDD8BA2642(uLocal_193[0]))
					{
						unk_0x724FFAED1C56CE2B(uLocal_193[0], 0, 0);
					}
					iLocal_189++;
				}
				if (unk_0x7DE17ACDD8BA2642(iLocal_214))
				{
					unk_0xEF078F1FEE785D3E(&iLocal_214);
				}
				if (unk_0x7DE17ACDD8BA2642(iLocal_215))
				{
					unk_0xEF078F1FEE785D3E(&iLocal_215);
				}
				unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
				if (Global_113648.f_24997.f_5 == 0)
				{
					unk_0xC5F9EF8F410596F9(unk_0xC1A5EC5C986B98AD(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0x6C7E85F31A43117F(unk_0x93E99A2DBCBA9CFA(), 1f, 750, 0, 1, 0);
				}
				if (unk_0x4310A0DB886F9FED(sLocal_408, "cult_p4_cam"))
				{
					unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x4A954DC99388FAC2(0, 0, 3, 0);
				}
				unk_0xEEF11E0DB5769366(uLocal_246, 0);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				unk_0xB1A691274215E4CE(1);
				unk_0x61F7D56FFAFBF706(1);
				unk_0xCB21E46FFA9189A0(unk_0xC1A5EC5C986B98AD(), 0);
				unk_0xAABD7B0753C5C286(0);
				func_160(func_15(), 1, 1000, 0, 0);
			}
			if (Global_113648.f_24997.f_5 != 1 && Global_113648.f_24997.f_5 != 2)
			{
				unk_0x5C37F509B0398DFA("AC_DONE");
				Global_113648.f_24997.f_5++;
				iLocal_174 = 1;
			}
			break;
		
		case 5:
			if (!func_115() || unk_0xC9D9444186B5A374() > 7000)
			{
				func_135();
				if (unk_0x7DE17ACDD8BA2642(iLocal_196[0]))
				{
					unk_0xE9C250FA35A936C8(&(iLocal_196[0]));
				}
				if (unk_0x7DE17ACDD8BA2642(iLocal_196[1]))
				{
					unk_0xE9C250FA35A936C8(&(iLocal_196[1]));
				}
				unk_0x5C37F509B0398DFA("AC_DONE");
				Global_113648.f_24997.f_5++;
				iLocal_174 = 1;
			}
			break;
	}
}

void func_187()
{
	if (func_189())
	{
		if (func_15() == 2)
		{
			if (unk_0xC44A95E43111EEBE(func_188()))
			{
				unk_0x193F84FD93C6C761(func_188(), &uLocal_186, &iLocal_187);
				if (iLocal_187 == 1)
				{
					uLocal_193[0] = unk_0x9FF2DD063FA98B66(func_188(), 0);
					if (unk_0x1C4E4DC1EFE24DF1(uLocal_193[0], Local_120, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
						{
							if (!unk_0x055111B11E6624FD(unk_0xE475C458F52F1781(), 0))
							{
								unk_0xC8927C3AD7C5D2E1(unk_0xE475C458F52F1781(), 10.5f, 5, 0);
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_187 == 2)
				{
					uLocal_193[0] = unk_0x9FF2DD063FA98B66(func_188(), 0);
					uLocal_193[1] = unk_0x9FF2DD063FA98B66(func_188(), 1);
					if (unk_0x1C4E4DC1EFE24DF1(uLocal_193[0], Local_120, 5f, 5f, 5f, 0, 1, 0) && unk_0x1C4E4DC1EFE24DF1(uLocal_193[1], Local_120, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
						{
							if (!unk_0x055111B11E6624FD(unk_0xE475C458F52F1781(), 0))
							{
								unk_0xC8927C3AD7C5D2E1(unk_0xE475C458F52F1781(), 10.5f, 5, 0);
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

var func_188()
{
	return unk_0x2165FE3E3189DC71(unk_0x5DC3DCA82C806319());
}

bool func_189()
{
	return Global_32402;
}

void func_190()
{
	if (func_193())
	{
		if (iLocal_400 == 0)
		{
			iLocal_400 = unk_0x54ECDA2DAB9CFB10(Local_117 - Vector(100f, 60f, 80f), Local_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (unk_0x2E496FE654DA4166(func_95(unk_0x93E99A2DBCBA9CFA()), Local_117, 1) < 209f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_15() == 0 || func_15() == 1)
	{
		if (unk_0x8B48F80291B64EA6(2017343592, joaat("player")) != 5)
		{
			if (func_192())
			{
				unk_0x0133FF6E23A1DCA4(5, 2017343592, joaat("player"));
			}
			else if (func_191())
			{
				unk_0x0133FF6E23A1DCA4(5, 2017343592, joaat("player"));
			}
		}
	}
	else if (func_15() == 2)
	{
		if (unk_0x8B48F80291B64EA6(2017343592, joaat("player")) != 5)
		{
			if (func_192())
			{
				if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()) || (unk_0xE3A9F9074FB79A61(unk_0xC1A5EC5C986B98AD()) && unk_0xB5297226BE0AD444(unk_0x93E99A2DBCBA9CFA())))
				{
					unk_0x0133FF6E23A1DCA4(5, 2017343592, joaat("player"));
				}
			}
			else if (func_191())
			{
				unk_0x0133FF6E23A1DCA4(5, 2017343592, joaat("player"));
			}
			else if (unk_0x8B48F80291B64EA6(2017343592, joaat("player")) != 1)
			{
				unk_0x0133FF6E23A1DCA4(1, 2017343592, joaat("player"));
			}
		}
	}
	if (func_192())
	{
		if (iLocal_179)
		{
			if (!unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 3))
			{
				unk_0x5C37F509B0398DFA("AC_START");
			}
			unk_0xFF2AF80F9EC7704C(0f);
			unk_0x72B586B6D6948F3C("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0x17AE936FF608BF89(Global_41953[9 /*31*/].f_2, 6f, Global_41953[9 /*31*/].f_5, 0))
			{
				unk_0xB3B8D217E4E83342(Global_41953[9 /*31*/].f_5, Global_41953[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (unk_0x17AE936FF608BF89(Global_41953[10 /*31*/].f_2, 6f, Global_41953[10 /*31*/].f_5, 0))
			{
				unk_0xB3B8D217E4E83342(Global_41953[10 /*31*/].f_5, Global_41953[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_180 = true;
			iLocal_179 = 0;
		}
	}
	else if (!iLocal_179)
	{
		if (unk_0xAB605E2CD1CEA631())
		{
			unk_0x5C37F509B0398DFA("AC_END");
		}
		unk_0xFF2AF80F9EC7704C(1f);
		unk_0x72B586B6D6948F3C("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_180)
		{
			func_157();
		}
		iLocal_179 = 1;
	}
}

int func_191()
{
	if ((((((unk_0x3AB7E936BFFD6DF3(Local_123, Local_126, fLocal_129, 1) || unk_0x3AB7E936BFFD6DF3(Local_130, Local_133, fLocal_136, 1)) || unk_0x3AB7E936BFFD6DF3(Local_137, Local_140, fLocal_143, 1)) || unk_0x3AB7E936BFFD6DF3(Local_144, Local_147, fLocal_150, 1)) || unk_0x3AB7E936BFFD6DF3(Local_151, Local_154, fLocal_157, 1)) || unk_0x3AB7E936BFFD6DF3(Local_158, Local_161, fLocal_164, 1)) || unk_0x3AB7E936BFFD6DF3(Local_165, Local_168, fLocal_171, 1))
	{
		return 1;
	}
	return 0;
}

int func_192()
{
	if ((((((unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_123, Local_126, fLocal_129, 0, 1, 0) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_130, Local_133, fLocal_136, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_137, Local_140, fLocal_143, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_144, Local_147, fLocal_150, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_151, Local_154, fLocal_157, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_158, Local_161, fLocal_164, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_165, Local_168, fLocal_171, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if (Global_113648.f_24997.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_194()
{
	unk_0x0133FF6E23A1DCA4(255, 2017343592, joaat("player"));
	if (Global_113648.f_24997.f_5 >= iLocal_192 && Global_113648.f_24997.f_5 != 1000)
	{
		if (bLocal_172)
		{
			func_1(1);
			func_11();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_195(&uLocal_249);
			Global_95938 = 0;
			Global_95939 = 0;
			Global_95940 = 0;
			func_14(0, 1);
			func_12(0, 1);
			func_2(0);
			unk_0x6E218C4AE00BB45A(1);
			unk_0x989D8D7F85192C52(0);
			unk_0x89851798C163AECE(0);
			func_3(0);
			unk_0xFF2AF80F9EC7704C(1f);
			unk_0x436EC806292A3DB8(3, 1);
			unk_0x436EC806292A3DB8(5, 1);
			unk_0x78B7CD7030E66D08();
			iLocal_179 = 0;
			func_96();
			Global_113648.f_24997.f_5 = (iLocal_192 - 1);
			unk_0x675D9C12C73D3DE7();
		}
	}
	else
	{
		unk_0x1090804F1F0FF051();
		func_195(&uLocal_249);
		Global_95938 = 0;
		Global_95939 = 0;
		Global_95940 = 0;
		func_14(0, 1);
		func_12(0, 1);
		func_2(0);
		unk_0x6E218C4AE00BB45A(1);
		unk_0x989D8D7F85192C52(0);
		unk_0x89851798C163AECE(0);
		func_3(0);
		if (unk_0x5FAF55B1F052A2E6(uLocal_399))
		{
			unk_0xD0AE101DBAA43C98(&uLocal_399);
			func_98(0);
		}
		unk_0xFF2AF80F9EC7704C(1f);
		unk_0x436EC806292A3DB8(3, 1);
		unk_0x436EC806292A3DB8(5, 1);
		unk_0x78B7CD7030E66D08();
		iLocal_179 = 0;
		unk_0x675D9C12C73D3DE7();
	}
}

void func_195(var uParam0)
{
	if (unk_0x5FAF55B1F052A2E6(*uParam0))
	{
		unk_0xD0AE101DBAA43C98(uParam0);
		*uParam0 = 0;
	}
}

