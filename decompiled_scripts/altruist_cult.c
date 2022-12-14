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
	if (unk_0x4B34601C5C56F3EE(26))
	{
		func_194();
	}
	if (unk_0x80F6E0A3B422F9FD())
	{
		unk_0xAFBDF6A5E54114C1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC92F9F18E020B461() || iLocal_173)
		{
			unk_0x8576657A629C4B0A(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
					{
						if (Global_113386.f_24995.f_5 >= iLocal_192 && !func_193())
						{
							iLocal_50 = 2;
						}
						func_190();
						func_187();
					}
					break;
				
				case 1:
					unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
					if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
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
					unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
					if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
					{
						func_116();
					}
					unk_0x7E15597AA5F53F9A(Global_41748[9 /*31*/], 0, 0, 1);
					unk_0x7E15597AA5F53F9A(Global_41748[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_175 = false;
					unk_0x8576657A629C4B0A(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_196)
					{
						if (unk_0xF68107C40359970C(iLocal_196[iVar0]))
						{
							if (unk_0x12DD4A0B247D9B4D(uLocal_229[iVar0]))
							{
								unk_0xFFD8EB5462B07B59(&(uLocal_229[iVar0]));
							}
						}
						else
						{
							if (unk_0x645F244ECDDEF6CF(iLocal_196[iVar0]))
							{
								if (unk_0x12DD4A0B247D9B4D(uLocal_229[iVar0]))
								{
									unk_0xFFD8EB5462B07B59(&(uLocal_229[iVar0]));
								}
							}
							else if (unk_0x77A43AFA9AAEC041(iLocal_196[iVar0], unk_0xE2D3D51028F0428A(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_115())
								{
									if (iLocal_191 < unk_0x320D1840B6DAA1CC())
									{
										iVar1 = unk_0x5853B15F78E1A265(0, 3);
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
										iLocal_191 = (unk_0x320D1840B6DAA1CC() + unk_0x5853B15F78E1A265(4500, 6000));
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
						if (!unk_0x0347CCBD719C8ADC(uLocal_249))
						{
							break;
						}
						func_61(&uLocal_254, 0);
						iLocal_173 = 1;
					}
					if (func_32(&uLocal_254, &uLocal_260, &uLocal_249, cLocal_401, sLocal_402, &bLocal_172, 78))
					{
						iLocal_190 = 0;
						unk_0x8813F60F6F44C9E3(uLocal_410);
						unk_0x5990DAD3727A1B45(uLocal_248);
						iVar0 = 0;
						while (iVar0 < iLocal_196)
						{
							if (unk_0xE5965CDF24F93A9F(iLocal_196[iVar0]))
							{
								unk_0x05CB75C0837196F9(&(iLocal_196[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_221)
						{
							if (unk_0xE5965CDF24F93A9F(iLocal_221[iVar0]))
							{
								unk_0x4BDA5AFD88C085EB(&(iLocal_221[iVar0]));
							}
							iVar0++;
						}
						if (unk_0x876B1078E90C91CB(uLocal_246))
						{
							unk_0xDD786B89B15AA63F(uLocal_246, 0);
						}
						if (unk_0xE5965CDF24F93A9F(uLocal_215))
						{
							unk_0x4BDA5AFD88C085EB(&uLocal_215);
						}
						if (unk_0xE5965CDF24F93A9F(uLocal_215))
						{
							unk_0x4BDA5AFD88C085EB(&uLocal_215);
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
		unk_0x3E49EF84C421E367(0);
		unk_0x3780E26E475691ED(1);
		unk_0xB607C92D60B318DD(0);
		func_2(1);
		Global_95699 = 1;
	}
	else
	{
		unk_0x3E49EF84C421E367(1);
		unk_0x3780E26E475691ED(0);
		unk_0xB607C92D60B318DD(1);
		func_2(0);
		Global_95699 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_43052 == 9 || Global_43052 == 10) || Global_43052 == 5)
	{
		Global_112035 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_112035 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0xCED9E32812D6C7C7(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_20464)
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
	if (!func_5())
	{
		Global_20266.f_1 = 3;
	}
}

int func_5()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
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

bool func_7()
{
	return BitTest(Global_1958711, 5);
}

bool func_8()
{
	return BitTest(Global_1958711, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
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
		unk_0x9DCF157443EA30D6("DeathFailOut", 0, 0);
		unk_0xCED9E32812D6C7C7(&iLocal_48, 1);
		func_13(1, 2, 0);
		unk_0xECC353E755AB76F1(2);
	}
	else
	{
		if (BitTest(iLocal_48, 1) || iParam1)
		{
			unk_0x06A78BA0B756C754("DeathFailOut");
			func_13(0, 2, 1);
			unk_0xECC353E755AB76F1(0);
		}
		unk_0xB0550BC91B0159D6(&iLocal_48, true);
	}
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&iLocal_48, 2);
		if (!unk_0x9315DBF7D972F07A())
		{
			if (iParam1 == 1)
			{
				unk_0x434E3AE126DDC5B5(0.2f);
			}
			else
			{
				unk_0x434E3AE126DDC5B5(0.075f);
			}
		}
	}
	else
	{
		if (BitTest(iLocal_48, 2) || iParam2)
		{
			if (!unk_0x9315DBF7D972F07A())
			{
				unk_0x434E3AE126DDC5B5(1f);
			}
		}
		unk_0xB0550BC91B0159D6(&iLocal_48, 2);
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
			unk_0x9DCF157443EA30D6(sVar0, 0, 0);
			unk_0xCED9E32812D6C7C7(&iLocal_48, 0);
			func_13(1, 1, 0);
			unk_0xECC353E755AB76F1(1);
		}
	}
	else
	{
		if (BitTest(iLocal_48, 0) || iParam1)
		{
			unk_0x06A78BA0B756C754(sVar0);
			func_13(0, 1, 1);
			unk_0xECC353E755AB76F1(0);
		}
		unk_0xB0550BC91B0159D6(&iLocal_48, false);
	}
}

int func_15()
{
	func_16();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_16()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_20(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_19(unk_0xE2D3D51028F0428A());
			if (func_18(iVar0) && (!func_17(14) || Global_112337))
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

bool func_17(int iParam0)
{
	return Global_43052 == iParam0;
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
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_31(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_5())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_30(1, iParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_31(0);
		unk_0x45227777D3EBECE5();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_30(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_28(unk_0x9E2D6C50374FCFA9())) && !func_25(unk_0x9E2D6C50374FCFA9(), 0)) && !func_24()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_28(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_78317 = 0;
	}
}

bool func_24()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 14);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

bool func_29()
{
	return BitTest(Global_2621446, 3);
}

int func_30(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_31(int iParam0)
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

int func_32(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0x66B27A59829491D3("DEATH_SCENE");
			unk_0x91DFC8F68F6D9B05(-1, "ScreenFlash", "WastedSounds", 1);
			func_60(&(uParam0->f_1));
			func_22();
			func_59(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0x94B5910A9C945688(1);
			break;
		
		case 1:
			if (func_57() || unk_0xA829C9A2767AC8EF())
			{
				*uParam0 = 2;
			}
			if (!func_56(uParam0->f_4, 4))
			{
				if (unk_0x70F555A7CCF10659("OFFMISSION_WASTED", 0, -1))
				{
					unk_0x91DFC8F68F6D9B05(-1, "Bed", "WastedSounds", 1);
					func_54(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
			{
				if (!func_56(uParam0->f_4, 2))
				{
					unk_0x91DFC8F68F6D9B05(-1, "TextHit", "WastedSounds", 1);
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
					unk_0x631794154765BF95(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0x94B5910A9C945688(0);
				unk_0x3780E26E475691ED(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x3E49EF84C421E367(1);
				func_14(0, 1);
				func_12(0, 1);
				unk_0x0AF8D3A06BB92903("DEATH_SCENE");
				unk_0x94B5910A9C945688(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0x94B5910A9C945688(0);
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
			if (!unk_0xA829C9A2767AC8EF() || unk_0xCB1EF1E7B77ADF4C())
			{
				unk_0x859006DB870314C5(2500);
				unk_0x16E09CCC0BD508DA();
			}
			if (bParam9)
			{
				unk_0x94B5910A9C945688(1);
			}
			unk_0x434E3AE126DDC5B5(0.2f);
			if (func_53(iParam5, 4))
			{
				if (unk_0x70F555A7CCF10659("generic_failed", 0, -1))
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
			unk_0xEA5DEA46C3EE64D3(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x4ADC8B166E139423("STRING");
			unk_0x138506D6C7564EF1(6);
			unk_0x26C23BE14F66F202(uParam2);
			unk_0xD1D4F8D5470AFA4C();
			func_52(sParam3);
			unk_0x4F47E317C74C543B(100);
			unk_0xD7D6BA6E36AEC182(true);
			unk_0xD452B47F164A4D79();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xEA5DEA46C3EE64D3(*uParam0, "TRANSITION_UP");
					unk_0xCA5D23E5F0F0306F(uParam1->f_134);
					unk_0x6F06CF0E9AB02847();
					uParam1->f_136 = 1;
				}
			}
			if (!func_53(iParam5, 1))
			{
				unk_0x58699DA34F83B510(0);
			}
			func_51(&(uParam1->f_10), 0, 1, 1, 1);
			func_50(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_50(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_53(iParam5, 4))
			{
				unk_0x91DFC8F68F6D9B05(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_53(iParam5, 8))
			{
				switch (func_15())
				{
					case 0:
						unk_0x9DCF157443EA30D6("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x9DCF157443EA30D6("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x9DCF157443EA30D6("MinigameEndTrevor", 500, 0);
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
			unk_0x33F5772842F16E82();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xEA5DEA46C3EE64D3(*uParam0, "TRANSITION_UP");
					unk_0xCA5D23E5F0F0306F(uParam1->f_134);
					unk_0x6F06CF0E9AB02847();
					uParam1->f_136 = 1;
				}
			}
			unk_0x2E04B7B46A3670E5(iParam6);
			func_46(uParam0, 0, 0);
			if (!func_53(iParam5, 16) && (func_44(&(uParam1->f_1)) >= uParam1->f_135 || unk_0xA829C9A2767AC8EF()))
			{
				func_38(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x60236500251FDE8E();
				if (unk_0x26009F50A14AD073(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x91DFC8F68F6D9B05(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						unk_0xA308468B6494BC8B(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x26009F50A14AD073(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x91DFC8F68F6D9B05(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						unk_0xA308468B6494BC8B(0);
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
					unk_0x91DFC8F68F6D9B05(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						unk_0xA308468B6494BC8B(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_46(uParam0, 0, 0);
			unk_0x434E3AE126DDC5B5(1f);
			if (uParam1->f_138 || !((unk_0x3C57C2F07FEE34D2("stunt_plane_races", unk_0x05CBA41180F5D521()) || unk_0x3C57C2F07FEE34D2("pilot_school", unk_0x05CBA41180F5D521())) || (unk_0x3C57C2F07FEE34D2("bj", unk_0x05CBA41180F5D521()) && unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))))
			{
				unk_0x5A7ACD1CDF509B0D(2500);
			}
			if (func_53(iParam5, 64) && uParam1->f_138)
			{
				unk_0x859006DB870314C5(500);
			}
			func_34(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x94B5910A9C945688(0);
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
	unk_0xCED9E32812D6C7C7(uParam0, 1);
	unk_0xB0550BC91B0159D6(uParam0, 2);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x320D1840B6DAA1CC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		iVar2 = unk_0x0A89FDFA763DCAED();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x320D1840B6DAA1CC()) / 1000f);
}

void func_37(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0x705B098546DEB18A(uParam0);
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
	
	if (((unk_0xCB1EF1E7B77ADF4C() || unk_0xECD40FEF3CF43BDB()) || unk_0xA829C9A2767AC8EF()) || unk_0x6304243969F5A11A())
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
	unk_0x33F5772842F16E82();
	unk_0x2E04B7B46A3670E5(uParam2);
	if (!func_53(uParam0->f_1, 256) || (func_53(uParam0->f_1, 8192) && unk_0xB1C1E679BD17A4F0(2)))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_CLEAR_SPACE");
		unk_0xCA5D23E5F0F0306F(fParam1);
		unk_0x6F06CF0E9AB02847();
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_MAX_WIDTH");
		unk_0xCA5D23E5F0F0306F(fParam5);
		unk_0x6F06CF0E9AB02847();
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x6F06CF0E9AB02847();
		if (unk_0x8FE9914D4872D601())
		{
			unk_0xEA5DEA46C3EE64D3(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD7D6BA6E36AEC182(func_53(uParam0->f_1, 4096));
			unk_0x6F06CF0E9AB02847();
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
					bVar4 = unk_0x3A76A0944BE2C291(2);
					break;
				
				case 2:
					bVar4 = !unk_0x3A76A0944BE2C291(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x4F47E317C74C543B(iVar5);
					iVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						iVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							uVar3 = unk_0x2018949B2C9FD96A(uVar0, uVar1, iVar2);
						}
						else
						{
							uVar3 = unk_0x19214818F925D149(uVar0, uVar1, iVar2);
						}
						if (!unk_0xACC32B78196FBC2A(uVar3))
						{
							func_42(uVar3);
						}
						bVar7++;
					}
					if (!unk_0xACC32B78196FBC2A(uParam0->f_2[iVar6 /*15*/]))
					{
						func_52(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x8FE9914D4872D601())
					{
						if (func_53(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xD7D6BA6E36AEC182(true);
								unk_0x4F47E317C74C543B(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xD7D6BA6E36AEC182(false);
								unk_0x4F47E317C74C543B(-1);
							}
						}
					}
					unk_0x6F06CF0E9AB02847();
				}
			}
			iVar6++;
		}
		fVar8 = func_41(bParam4, func_41(func_53(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xEA5DEA46C3EE64D3(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xCA5D23E5F0F0306F(fVar8);
		unk_0x6F06CF0E9AB02847();
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xCA5D23E5F0F0306F(0f);
		unk_0xCA5D23E5F0F0306F(0f);
		unk_0xCA5D23E5F0F0306F(0f);
		unk_0xCA5D23E5F0F0306F(80f);
		unk_0x6F06CF0E9AB02847();
		func_40(&(uParam0->f_1), 256);
		func_39(&(uParam0->f_1), 128);
	}
	unk_0xC4353D240DCE9533(*uParam0, 255, 255, 255, 0, 0);
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
	unk_0x341872E4D54CD053(uParam0);
}

int func_43(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x0347CCBD719C8ADC(*uParam0))
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
	unk_0xAC765EF46E85A446(14);
	if (!bParam2)
	{
		unk_0xC4353D240DCE9533(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0xC4353D240DCE9533(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x4C1B8C5717647539(2, 201))
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
			unk_0xCED9E32812D6C7C7(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
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
		*uParam0 = unk_0xD9EA500ADEAC231A("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_40(&(uParam0->f_1), 32);
	}
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		func_40(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xD6D689B76F32F4AA(*uParam0, 1);
		}
	}
	if (unk_0x8FE9914D4872D601())
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
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
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
	if (!unk_0xF34D8FCAE3FD4EE4())
	{
		unk_0xBA6C3C5E9E5A9442();
	}
	unk_0x7653D561C9574763(2, 199, 1);
	unk_0x7653D561C9574763(0, 59, 1);
	unk_0x7653D561C9574763(0, 60, 1);
	unk_0x7653D561C9574763(0, 37, 1);
	unk_0x7653D561C9574763(0, 25, 1);
	unk_0x7BDCF3A4FA45D147();
	if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
	{
		if (!BitTest(iLocal_48, 1))
		{
			func_12(1, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if (IntToFloat(unk_0xC9D9444186B5A374()) > (1500f * 0.075f) || unk_0xA829C9A2767AC8EF())
		{
			if (!unk_0xA829C9A2767AC8EF())
			{
				if (!unk_0xCB1EF1E7B77ADF4C())
				{
					unk_0x859006DB870314C5(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = unk_0x320D1840B6DAA1CC() + 1000;
				if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
				{
					unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
				}
				func_13(0, 2, 1);
				func_23(1, 1, 1, 0, 0, 0, 0);
				func_3(1);
				unk_0xDD0B677578E78E45(0);
				unk_0xE6D8097F6A553F2A(0);
				unk_0x3410421C60BF7143(1);
				unk_0xBA6C3C5E9E5A9442();
				if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
				{
					unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
				}
				func_14(0, 0);
				func_58(0);
			}
			else if (unk_0x320D1840B6DAA1CC() < iLocal_49)
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
				unk_0x27F66B7FE7DB7C3A(1);
				unk_0xCED9E32812D6C7C7(&iLocal_48, 3);
			}
		}
		else if (BitTest(iLocal_48, 3))
		{
			unk_0x27F66B7FE7DB7C3A(0);
			unk_0xB0550BC91B0159D6(&iLocal_48, 3);
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
	unk_0x70F555A7CCF10659("OFFMISSION_WASTED", 0, -1);
}

var func_62()
{
	return unk_0x528279F3F1EEF869("MP_BIG_MESSAGE_FREEMODE");
}

void func_63()
{
	if (!iLocal_176)
	{
		unk_0x380313FF4CEF9B49("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_113386.f_24995.f_5 = 1000;
		unk_0x9C7F69DDEB6DBB06(64);
		Global_113386.f_20564.f_472 = 54;
		uLocal_399 = unk_0x528279F3F1EEF869("MIDSIZED_MESSAGE");
		func_98(1);
		while (!unk_0x0347CCBD719C8ADC(uLocal_399))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xEA5DEA46C3EE64D3(uLocal_399, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_52("CULT_PASS");
		unk_0xD452B47F164A4D79();
		while (!func_97())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_96();
		unk_0xC1B1E9A034A63A62(0);
		unk_0x91DFC8F68F6D9B05(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_176 = 1;
	}
	unk_0xC4353D240DCE9533(uLocal_399, 255, 255, 255, 255, 0);
	if (!iLocal_178)
	{
		if (unk_0x83666F9FB8FEBD4B() > 9500)
		{
			unk_0xEA5DEA46C3EE64D3(uLocal_399, "SHARD_ANIM_OUT");
			unk_0x4F47E317C74C543B(1);
			unk_0xCA5D23E5F0F0306F(0.33f);
			unk_0x6F06CF0E9AB02847();
			iLocal_178 = 1;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() > 10000)
	{
		if (unk_0x0347CCBD719C8ADC(uLocal_399))
		{
			unk_0x705B098546DEB18A(&uLocal_399);
			func_98(0);
		}
		while (unk_0x987A5F1E1A67E3C0(func_95(unk_0x9E2D6C50374FCFA9()), Local_117, 1) < 209f && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
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
		unk_0xEFE837B21D5CF02C(0, 0);
		Global_113377 = unk_0x320D1840B6DAA1CC();
		func_69(30000);
		StringCopy(&cVar0, func_68(Global_113375, 1), 64);
		if (func_67(Global_113375) > 0)
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
	func_66(&Global_32019);
	Global_113376 = 0;
	func_65(-1);
}

void func_65(int iParam0)
{
	Global_113375 = iParam0;
}

void func_66(var uParam0)
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
	Global_43603 = (unk_0x320D1840B6DAA1CC() + iParam0);
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
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
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
	
	func_88(&uVar0, unk_0xAA2844CAD88768B5());
	func_87(&uVar0, unk_0x80F97D7D29800A1A());
	func_86(&uVar0, unk_0x09FC827691DACE59());
	func_84(&uVar0, unk_0xD52BD97E61483713());
	func_85(&uVar0, unk_0x771485043FDC55DE());
	func_83(&uVar0, unk_0x1137FD08B8D3F874());
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
	if ((Global_113375 == func_93() && unk_0xE3BBDB1C36703410()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x05CBA41180F5D521(), 64);
	uVar16 = func_94(Var0);
	return uVar16;
}

int func_94(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

Vector3 func_95(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

void func_96()
{
	Global_32197 = 0;
	Global_32198 = 0;
	Global_32200 = 0;
	Global_32201 = 0;
	Global_32202 = 0;
}

int func_97()
{
	return 1;
}

void func_98(int iParam0)
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
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
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_101(sParam2, iParam3, 0);
}

int func_101(char* sParam0, int iParam1, bool bParam2)
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
					func_113();
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
		if (func_112(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_111();
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
				func_110();
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
				if (func_109())
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
			if (func_5())
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
			func_108();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_107();
		func_102();
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
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_103()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_106())
	{
		return 0;
	}
	if (func_104(unk_0x9E2D6C50374FCFA9()))
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

bool func_104(int iParam0)
{
	return func_105(iParam0, 20);
}

var func_105(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
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
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD681CC2BC1084DB6(0);
	Global_21605 = 1;
}

void func_108()
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

int func_109()
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

void func_110()
{
	if (func_17(14))
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
		Global_20266 = func_15();
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

void func_111()
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

bool func_112(int iParam0, int iParam1)
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

void func_113()
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

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_115()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
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
			unk_0x95FC0D9FFA87229E("THUNDER", 20f);
			if (!unk_0x496531E41FCF5116())
			{
				unk_0xD536FD78D8A135F1("ac_ig_3_p3_b", 8);
			}
			unk_0xD69A0C3662175E68(joaat("a_m_o_acult_02"));
			unk_0xD69A0C3662175E68(joaat("a_m_y_acult_02"));
			unk_0xD69A0C3662175E68(joaat("prop_box_wood03a"));
			unk_0xD69A0C3662175E68(joaat("prop_box_wood04a"));
			unk_0xD69A0C3662175E68(joaat("prop_box_wood05a"));
			unk_0xD69A0C3662175E68(joaat("prop_security_case_01"));
			while ((((((!func_143() || !unk_0x0152AA00FA3130F1(joaat("a_m_o_acult_02"))) || !unk_0x0152AA00FA3130F1(joaat("a_m_y_acult_02"))) || !unk_0x0152AA00FA3130F1(joaat("prop_box_wood03a"))) || !unk_0x0152AA00FA3130F1(joaat("prop_box_wood04a"))) || !unk_0x0152AA00FA3130F1(joaat("prop_box_wood05a"))) || !unk_0x0152AA00FA3130F1(joaat("prop_security_case_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			uLocal_576 = func_136(unk_0xE2D3D51028F0428A(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (unk_0xE5965CDF24F93A9F(uLocal_576))
			{
				unk_0x48F297980C708DB7(iLocal_576, "Trevors_weapon", 0, 0, 0);
			}
			unk_0x48F297980C708DB7(0, "Rifle_Mag1^1", 3, unk_0x2597F123290B0413(joaat("component_assaultrifle_clip_01")), 0);
			if (func_143() && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				unk_0x48F297980C708DB7(unk_0xE2D3D51028F0428A(), "TREVOR", 0, 0, 0);
				unk_0x48F297980C708DB7(iLocal_196[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x48F297980C708DB7(iLocal_196[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x48F297980C708DB7(iLocal_196[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x48F297980C708DB7(iLocal_196[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x48F297980C708DB7(iLocal_196[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0xF44EE79112016B61(0);
			}
			unk_0x4EDE34FBADD967A6(0);
			if (!bLocal_172 && Global_113386.f_24995.f_5 != 1000)
			{
				func_135();
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_196[0]))
			{
				unk_0x05CB75C0837196F9(&(iLocal_196[0]));
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_196[1]))
			{
				unk_0x05CB75C0837196F9(&(iLocal_196[1]));
			}
			if (unk_0x876B1078E90C91CB(uLocal_246))
			{
				unk_0xDD786B89B15AA63F(uLocal_246, 0);
			}
			if (unk_0xE5965CDF24F93A9F(uLocal_215))
			{
				unk_0x4BDA5AFD88C085EB(&iLocal_215);
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_215))
			{
				unk_0x4BDA5AFD88C085EB(&iLocal_215);
			}
			unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
			if (unk_0x12DD4A0B247D9B4D(uLocal_228))
			{
				unk_0xFFD8EB5462B07B59(&uLocal_228);
			}
			func_23(1, 1, 1, 0, 0, 0, 0);
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
			unk_0x3410421C60BF7143(1);
			unk_0x72DB022C36FCEA24(0);
			unk_0xB60709BD0E075903(0);
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				unk_0x4F1E6A84BC157FA0(unk_0xE2D3D51028F0428A(), 1);
			}
			unk_0x7A997A0A971D305F(Local_117, 100f, 1, 0, 0, 0);
			unk_0x2915D98110F23A29(Local_117 - Vector(100f, 60f, 80f), Local_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			unk_0x8576657A629C4B0A(0f);
			unk_0x07CECF421D895F3D(3, 0);
			unk_0x07CECF421D895F3D(5, 0);
			uLocal_248 = unk_0x41BA9DBA367C9C12(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			unk_0xD69A0C3662175E68(joaat("a_m_o_acult_01"));
			while (!unk_0x0152AA00FA3130F1(joaat("a_m_o_acult_01")))
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
			if (unk_0xA337B111DF07BB88(0))
			{
				if (unk_0x6F2E1326DB60D575("CULT_MASTER", 0))
				{
					if (!unk_0xE5965CDF24F93A9F(iLocal_196[11]))
					{
						iLocal_196[11] = unk_0x28AA31872A651BC7(unk_0xA77263F8C4822DA4("CULT_MASTER", 0));
					}
				}
				if (unk_0x6F2E1326DB60D575("REAR_CULT", 0))
				{
					if (!unk_0xE5965CDF24F93A9F(iLocal_196[12]))
					{
						iLocal_196[12] = unk_0x28AA31872A651BC7(unk_0xA77263F8C4822DA4("REAR_CULT", 0));
					}
				}
				if (unk_0x6F2E1326DB60D575("LEFT_OLD_CULT", 0))
				{
					if (!unk_0xE5965CDF24F93A9F(iLocal_196[13]))
					{
						iLocal_196[13] = unk_0x28AA31872A651BC7(unk_0xA77263F8C4822DA4("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0x6F2E1326DB60D575("CARBINE_CULT", 0))
				{
					if (!unk_0xE5965CDF24F93A9F(iLocal_196[14]))
					{
						iLocal_196[14] = unk_0x28AA31872A651BC7(unk_0xA77263F8C4822DA4("CARBINE_CULT", 0));
					}
				}
				if (unk_0x6F2E1326DB60D575("SHOTGUN_CULT", 0))
				{
					if (!unk_0xE5965CDF24F93A9F(iLocal_196[15]))
					{
						iLocal_196[15] = unk_0x28AA31872A651BC7(unk_0xA77263F8C4822DA4("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0x6F2E1326DB60D575("TREVOR", 0))
				{
					unk_0x4F1E6A84BC157FA0(unk_0xE2D3D51028F0428A(), 0);
					unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 188.9369f);
					unk_0x809DFA39515D5981(unk_0xE2D3D51028F0428A(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, uLocal_248, 0);
					unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 1, 0);
				}
				if (unk_0x6F2E1326DB60D575("Trevors_weapon", 0))
				{
					unk_0x3AEA6B9A9FE5BD26(iLocal_576, unk_0xE2D3D51028F0428A());
				}
				unk_0x94953C3FF0664F66(91.3878f);
				unk_0x080C97B891E2F3AA(4.4337f, 1065353216);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
				unk_0x72DB022C36FCEA24(1);
				unk_0xB60709BD0E075903(1);
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
				unk_0xD642E010A287ADFD("rghCult", &uLocal_410);
				iVar1 = 0;
				while (iVar1 < iLocal_196)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_196[iVar1] = unk_0xA8D58C3AADA2C41C(26, joaat("a_m_o_acult_01"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x6E9C0F9EAC1F29FD(iLocal_196[iVar1], 0);
						unk_0x9521FB98DB6DDF50(iLocal_196[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						unk_0x71B502FC2E129665(iLocal_196[iVar1], 0);
						unk_0x395228F7A14C6543(iLocal_196[iVar1], 2);
						unk_0x78D13FF59B219912(iLocal_196[iVar1], 50f, 20);
						unk_0x348A212511C78DBF(iLocal_196[iVar1], 5);
						unk_0x5C9D9A4EA475F37E(iLocal_196[iVar1], 100f);
						unk_0xE014FF3C785EEFB5(iLocal_196[iVar1], 100f);
						unk_0xF160248D9083ED0C(iLocal_196[iVar1], 150, 0);
						unk_0xC97BA48BC273A1F3(iLocal_196[iVar1], unk_0x5853B15F78E1A265(40, 60));
						unk_0xC1A74225341AA9FB(iLocal_196[iVar1], unk_0xE2D3D51028F0428A(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_196[iVar1] = unk_0xA8D58C3AADA2C41C(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x6E9C0F9EAC1F29FD(iLocal_196[iVar1], 0);
						unk_0x9521FB98DB6DDF50(iLocal_196[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						unk_0xBC12D08EE7559CCD(iLocal_196[iVar1], 50, 1);
						unk_0x71B502FC2E129665(iLocal_196[iVar1], 2);
						unk_0x395228F7A14C6543(iLocal_196[iVar1], 1);
						unk_0x78D13FF59B219912(iLocal_196[iVar1], 50f, 20);
						unk_0x348A212511C78DBF(iLocal_196[iVar1], 5);
						unk_0x5C9D9A4EA475F37E(iLocal_196[iVar1], 100f);
						unk_0xE014FF3C785EEFB5(iLocal_196[iVar1], 100f);
						unk_0xC97BA48BC273A1F3(iLocal_196[iVar1], unk_0x5853B15F78E1A265(40, 60));
						unk_0xC1A74225341AA9FB(iLocal_196[iVar1], unk_0xE2D3D51028F0428A(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0xF68107C40359970C(iLocal_196[iVar1]) && !unk_0xF68107C40359970C(iLocal_196[11])) && !unk_0xF68107C40359970C(iLocal_196[12])) && !unk_0xF68107C40359970C(iLocal_196[13])) && !unk_0xF68107C40359970C(iLocal_196[14])) && !unk_0xF68107C40359970C(iLocal_196[15]))
						{
							unk_0x9521FB98DB6DDF50(iLocal_196[11], joaat("weapon_pistol"), -1, 1, 1);
							unk_0x9521FB98DB6DDF50(iLocal_196[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x9521FB98DB6DDF50(iLocal_196[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x9521FB98DB6DDF50(iLocal_196[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							unk_0x9521FB98DB6DDF50(iLocal_196[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							unk_0xBC12D08EE7559CCD(iLocal_196[iVar1], 0, 1);
							unk_0x71B502FC2E129665(iLocal_196[iVar1], 3);
							unk_0x395228F7A14C6543(iLocal_196[iVar1], 0);
							unk_0x348A212511C78DBF(iLocal_196[iVar1], 0);
							unk_0x1EABB8571D8C86D4(iLocal_196[iVar1], 1f, 1f);
							unk_0xA888F8CC04F25CC8(&uLocal_247);
							unk_0x98DB2ABD53B8D70B(0, -1159.33f, 4924.412f, 221.6576f, unk_0xE2D3D51028F0428A(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 6000, 0);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 4500, 0);
							unk_0xC1A74225341AA9FB(0, unk_0xE2D3D51028F0428A(), 0, 16);
							unk_0xC963A45B50851768(uLocal_247);
							unk_0x8ACADA903FCAA42F(iLocal_196[15], uLocal_247);
							unk_0x7461D7C5BA953BC7(&uLocal_247);
							unk_0xA888F8CC04F25CC8(&uLocal_247);
							unk_0x98DB2ABD53B8D70B(0, -1163.279f, 4932.933f, 222.541f, unk_0xE2D3D51028F0428A(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xB67D1D267C666DC4(0, unk_0xE2D3D51028F0428A(), 5000, 0);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 7500, 0);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 4500, 0);
							unk_0xC1A74225341AA9FB(0, unk_0xE2D3D51028F0428A(), 0, 16);
							unk_0xC963A45B50851768(uLocal_247);
							unk_0x8ACADA903FCAA42F(iLocal_196[14], uLocal_247);
							unk_0x7461D7C5BA953BC7(&uLocal_247);
							unk_0xA888F8CC04F25CC8(&uLocal_247);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 2500, 0);
							unk_0xB67D1D267C666DC4(0, unk_0xE2D3D51028F0428A(), 5000, 0);
							unk_0x98DB2ABD53B8D70B(0, -1156.175f, 4926.073f, 221.3447f, unk_0xE2D3D51028F0428A(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 6500, 0);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 4500, 0);
							unk_0xC1A74225341AA9FB(0, unk_0xE2D3D51028F0428A(), 0, 16);
							unk_0xC963A45B50851768(uLocal_247);
							unk_0x8ACADA903FCAA42F(iLocal_196[13], uLocal_247);
							unk_0x7461D7C5BA953BC7(&uLocal_247);
							unk_0xA888F8CC04F25CC8(&uLocal_247);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 3000, 0);
							unk_0x98DB2ABD53B8D70B(0, -1157.962f, 4922.196f, 221.309f, unk_0xE2D3D51028F0428A(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 5500, 0);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 4500, 0);
							unk_0xC1A74225341AA9FB(0, unk_0xE2D3D51028F0428A(), 0, 16);
							unk_0xC963A45B50851768(uLocal_247);
							unk_0x8ACADA903FCAA42F(iLocal_196[12], uLocal_247);
							unk_0x7461D7C5BA953BC7(&uLocal_247);
							unk_0xA888F8CC04F25CC8(&uLocal_247);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 4500, 0);
							unk_0xB67D1D267C666DC4(0, unk_0xE2D3D51028F0428A(), 10000, 0);
							unk_0x98DB2ABD53B8D70B(0, -1161.475f, 4916.061f, 220.5658f, unk_0xE2D3D51028F0428A(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 4500, 0);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 4500, 0);
							unk_0xC1A74225341AA9FB(0, unk_0xE2D3D51028F0428A(), 0, 16);
							unk_0xC963A45B50851768(uLocal_247);
							unk_0x8ACADA903FCAA42F(iLocal_196[11], uLocal_247);
							unk_0x7461D7C5BA953BC7(&uLocal_247);
							unk_0xABC2CA6F28903308(iLocal_196[iVar1], 1);
							unk_0x3E3D339BAD67F6F2(iLocal_196[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_196[iVar1] = unk_0xA8D58C3AADA2C41C(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x6E9C0F9EAC1F29FD(iLocal_196[iVar1], 0);
						unk_0x9521FB98DB6DDF50(iLocal_196[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						unk_0xBC12D08EE7559CCD(iLocal_196[iVar1], 50, 1);
						unk_0x71B502FC2E129665(iLocal_196[iVar1], 2);
						unk_0x395228F7A14C6543(iLocal_196[iVar1], 0);
						unk_0x78D13FF59B219912(iLocal_196[iVar1], 50f, 20);
						unk_0x3DAB02AAC9E9EC02(iLocal_196[iVar1], 1);
						unk_0x348A212511C78DBF(iLocal_196[iVar1], 5);
						unk_0x5C9D9A4EA475F37E(iLocal_196[iVar1], 100f);
						unk_0xE014FF3C785EEFB5(iLocal_196[iVar1], 100f);
						unk_0xC97BA48BC273A1F3(iLocal_196[iVar1], unk_0x5853B15F78E1A265(40, 60));
						unk_0xC1A74225341AA9FB(iLocal_196[iVar1], unk_0xE2D3D51028F0428A(), 0, 16);
					}
					unk_0xFF4BEB6CFF55A013(iLocal_196[iVar1], uLocal_410);
					unk_0xBBF86885619695CE(iLocal_196[iVar1], func_134(unk_0x6B62510F212526DC(iLocal_196[iVar1], 1), func_95(unk_0x9E2D6C50374FCFA9())));
					unk_0x50274A7EACA3133A(iLocal_196[iVar1], 1);
					unk_0xD6A76BAB45A4B460(iLocal_196[iVar1], 42, 1);
					uLocal_229[iVar1] = func_132(iLocal_196[iVar1], 1, 145);
					iVar1++;
				}
				func_99(&uLocal_411, 0, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
				func_99(&uLocal_411, 3, iLocal_196[11], "ACULTMaster", 0, 1);
				func_99(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
				unk_0xCED9E32812D6C7C7(&iVar0, 1);
				unk_0xCED9E32812D6C7C7(&iVar0, 3);
				unk_0xCED9E32812D6C7C7(&iVar0, 4);
				if (!bLocal_172)
				{
					uLocal_216[0] = unk_0x1EE09F99FEF19DAF(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[1] = unk_0x1EE09F99FEF19DAF(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[2] = unk_0x1EE09F99FEF19DAF(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[3] = unk_0x1EE09F99FEF19DAF(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_216[0] = uLocal_216[0];
				uLocal_216[1] = uLocal_216[1];
				uLocal_216[2] = uLocal_216[2];
				uLocal_216[3] = uLocal_216[3];
				iLocal_221[0] = unk_0x0E536D72AB30F4C8(joaat("prop_box_wood04a"), -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
				iLocal_221[1] = unk_0x0E536D72AB30F4C8(joaat("prop_box_wood03a"), -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
				iLocal_221[2] = unk_0x0E536D72AB30F4C8(joaat("prop_box_wood04a"), -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
				iLocal_221[3] = unk_0x0E536D72AB30F4C8(joaat("prop_box_wood04a"), -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
				iLocal_221[4] = unk_0x0E536D72AB30F4C8(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
				iLocal_221[5] = unk_0x0E536D72AB30F4C8(joaat("prop_box_wood03a"), -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
				unk_0x8CE3D365F064F69E(iLocal_221[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				unk_0x8CE3D365F064F69E(iLocal_221[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				unk_0x8CE3D365F064F69E(iLocal_221[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				unk_0x8CE3D365F064F69E(iLocal_221[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				unk_0x8CE3D365F064F69E(iLocal_221[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				unk_0x8CE3D365F064F69E(iLocal_221[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_131() < 50)
				{
					unk_0x266E4B6E6C97E2CB(unk_0x9E2D6C50374FCFA9(), 0.5f, 1, 0);
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
		Global_113376 = 1;
		Global_113373 = unk_0x320D1840B6DAA1CC();
		if (func_121(Global_113375))
		{
			func_118(0);
		}
		unk_0xEFE837B21D5CF02C(1, "RE_TITLE");
		if (iParam0 && func_121(Global_113375))
		{
			unk_0xC70E97154CC5B243();
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
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_119(func_120(iParam0), -1);
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
					func_119(func_120(iParam0), -1);
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
					func_119(func_120(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0xCED9E32812D6C7C7(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_119(var uParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
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
	switch (func_123(&Global_32019, 0, 5, 0, unk_0x69CE66B03B2184EB()))
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
		if (Global_97919.f_44 == 1)
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
		if (!func_125(iParam2))
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
			func_124(uParam0, iParam4);
		}
	}
	return 2;
}

void func_124(var uParam0, int iParam1)
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

bool func_125(int iParam0)
{
	return func_126(iParam0, Global_43052);
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
	if (Global_43052 == 15)
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
	unk_0xEEEFCC23227A8148(0);
	unk_0xA560174A439E78F1(1);
	Global_113372 = 0;
	func_129();
}

void func_129()
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

int func_130()
{
	return Global_113375;
}

int func_131()
{
	var uVar0;
	
	switch (func_15())
	{
		case 0:
			unk_0x61481F9FBB1C7EDD(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			unk_0x61481F9FBB1C7EDD(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			unk_0x61481F9FBB1C7EDD(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

var func_132(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_133(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(uVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_133(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_41(unk_0x9315DBF7D972F07A(), 1f, 1f));
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
		unk_0x293A9399E902A33B(uVar0, func_41(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_41(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_134(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0xD12EFCAB87804BED((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_135()
{
	Global_32198 = 1;
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
	if (!unk_0x8FEA2E94638F9767(iParam0, iParam1, 0))
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
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			iVar3 = unk_0x1F741ABE25B3CDD3(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0x982237EB68628E6A(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0x6019BE7548B68C4B(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { unk_0x6B62510F212526DC(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	while (func_140(iVar2, iVar8) != 0)
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			if (unk_0x54B42DEC4CAB3D41(iParam0, iVar2, func_140(iVar2, iVar8)))
			{
				if (func_139(func_140(iVar2, iVar8)))
				{
					iVar9 = unk_0x2597F123290B0413(func_140(iVar2, iVar8));
				}
			}
		}
		iVar8++;
	}
	uVar1 = unk_0xBF59603E8A18FEB0(iVar2, iVar3, Var5, iVar0, 1065353216, iVar9, iParam7, iParam8);
	while (func_140(iVar2, iVar10) != 0)
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			if (unk_0x54B42DEC4CAB3D41(iParam0, iVar2, func_140(iVar2, iVar10)))
			{
				unk_0x0B46DBCE80AD9DE5(uVar1, func_140(iVar2, iVar10));
				func_137(uVar1, func_140(iVar2, iVar10));
			}
		}
		iVar10++;
	}
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x8FEA2E94638F9767(iParam0, iVar2, 0))
		{
			unk_0x3E27BF30C58D41EC(uVar1, unk_0xC158EB99F56CB1FB(iParam0, iVar2));
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
		unk_0x0B46DBCE80AD9DE5(uParam0, iVar0);
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
	}
	return 0;
}

int func_139(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == joaat("component_gunrun_mk2_upgrade")) || iParam0 == joaat("component_appistol_varmod_security")) || iParam0 == joaat("component_pumpshotgun_varmod_security")) || iParam0 == joaat("component_microsmg_varmod_security"))
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
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_142(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x8C780BEF2D6DB238(iVar1))
					{
						if (unk_0x45F755B731A742D2(iVar1, iVar2, &Var43))
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
			return 1;
			break;
	}
	return 0;
}

int func_142(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x501053EBAB36DB66();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x4CD88D794E108BEC(iVar0, uParam1))
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
	
	bVar0 = unk_0xC6398AABC3E92273();
	if (!Global_78318)
	{
		if (!bVar0)
		{
			Global_78318 = 1;
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
	if (unk_0xDA4421F81DF4B90D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_155(&Global_4541529))
	{
		if (func_153(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_146(&Global_4541529, iParam0))
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

int func_146(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
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
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
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
	func_151(uParam0, (Global_4541528 - 0.5f));
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
		fLocal_183 = (fLocal_183 - (0.6f / (1f / unk_0x51109C28352EC9A3())));
	}
	else
	{
		fLocal_183 = 0f;
	}
	if (fLocal_183 >= 0f)
	{
		unk_0x1B3E1454BD86FCE6(Global_41748[10 /*31*/], fLocal_183, 0, 1);
		unk_0x7E15597AA5F53F9A(Global_41748[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 < 0f)
	{
		fLocal_182 = (fLocal_182 + (0.6f / (1f / unk_0x51109C28352EC9A3())));
	}
	else
	{
		fLocal_182 = 0f;
	}
	if (fLocal_182 <= 0f)
	{
		unk_0x1B3E1454BD86FCE6(Global_41748[9 /*31*/], fLocal_182, 0, 1);
		unk_0x7E15597AA5F53F9A(Global_41748[9 /*31*/], 4, 0, 1);
	}
}

void func_158()
{
	if (fLocal_183 < 1f)
	{
		fLocal_183 = (fLocal_183 + (0.6f / (1f / unk_0x51109C28352EC9A3())));
	}
	else
	{
		fLocal_183 = 1f;
	}
	if (fLocal_183 <= 1f)
	{
		unk_0x1B3E1454BD86FCE6(Global_41748[10 /*31*/], fLocal_183, 0, 1);
		unk_0x7E15597AA5F53F9A(Global_41748[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 > -1f)
	{
		fLocal_182 = (fLocal_182 - (0.6f / (1f / unk_0x51109C28352EC9A3())));
	}
	else
	{
		fLocal_182 = -1f;
	}
	if (fLocal_182 >= -1f)
	{
		unk_0x1B3E1454BD86FCE6(Global_41748[9 /*31*/], fLocal_182, 0, 1);
		unk_0x7E15597AA5F53F9A(Global_41748[9 /*31*/], 4, 0, 1);
	}
}

void func_159()
{
	switch (iLocal_189)
	{
		case 0:
			unk_0xD69A0C3662175E68(joaat("a_m_o_acult_02"));
			unk_0xD69A0C3662175E68(joaat("prop_anim_cash_pile_02"));
			unk_0x8FB472886552D737("random@altruist_cult");
			unk_0x63B063064DC08617("AC_DELIVERED");
			unk_0x334E9A09859A3C8D(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x0152AA00FA3130F1(joaat("a_m_o_acult_02")) && unk_0x0152AA00FA3130F1(joaat("prop_anim_cash_pile_02"))) && unk_0x6F940C2636C076AD("random@altruist_cult")) && unk_0x63B063064DC08617("AC_DELIVERED")) && unk_0xC870CD3D6D40CB09(joaat("weapon_assaultrifle")))
			{
				if (Global_113386.f_24995.f_5 < 2)
				{
					if (Global_113386.f_24995.f_5 == 0)
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
				else if (Global_113386.f_24995.f_5 >= 2)
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
					unk_0xD69A0C3662175E68(joaat("prop_box_wood03a"));
					unk_0xD69A0C3662175E68(joaat("prop_box_wood04a"));
					unk_0xD69A0C3662175E68(joaat("prop_box_wood05a"));
					unk_0xD69A0C3662175E68(joaat("prop_security_case_01"));
					if (!unk_0x496531E41FCF5116())
					{
						unk_0xD536FD78D8A135F1("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0x12DD4A0B247D9B4D(uLocal_228))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_228);
				}
				func_23(1, 1, 1, 0, 0, 0, 0);
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
				unk_0x3410421C60BF7143(1);
				unk_0x72DB022C36FCEA24(0);
				unk_0xB60709BD0E075903(0);
				unk_0x4F1E6A84BC157FA0(unk_0xE2D3D51028F0428A(), 1);
				unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
				unk_0x1CF3F44FC2EB9F99("AC_DELIVERED");
				if (func_185())
				{
					func_184(0);
				}
				func_182();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					uLocal_213 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x55A0C756C4A8220C(uLocal_213, 0))
					{
						if (unk_0xA7A8E89EA6C5E222(uLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					uLocal_213 = unk_0x9993EF7FDBCDB632();
					if (!unk_0xF68107C40359970C(uLocal_193[0]) && !unk_0xF68107C40359970C(uLocal_193[1]))
					{
						unk_0x03A927199A2DFE46(uLocal_193[0]);
						unk_0x6221A52631154EF7(uLocal_193[0]);
						unk_0x03A927199A2DFE46(uLocal_193[1]);
						unk_0x6221A52631154EF7(uLocal_193[1]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (unk_0xE5965CDF24F93A9F(uLocal_213))
			{
				if (!unk_0xA6A089369417736E(iLocal_213))
				{
					unk_0x2D58A6131679D82C(iLocal_213, 1, 0);
				}
				if (unk_0x8F41785F110B0DA0(iLocal_213, Local_120, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0xC64B6E13A6A7F517(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x55B23FE400FCEA6B(iLocal_213, 0))
					{
						unk_0xBBF86885619695CE(iLocal_213, 149.8882f);
						unk_0x9F65B3BAFA302A65(iLocal_213, 1084227584);
					}
				}
			}
			unk_0x7A997A0A971D305F(Local_120, 12f, 1, 0, 0, 0);
			unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 128.2065f);
			if (!unk_0xF68107C40359970C(uLocal_193[0]) && !unk_0xF68107C40359970C(uLocal_193[1]))
			{
				unk_0xC64B6E13A6A7F517(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0xBBF86885619695CE(uLocal_193[0], 128.2065f);
				unk_0xC64B6E13A6A7F517(uLocal_193[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				unk_0xBBF86885619695CE(uLocal_193[1], 128.2065f);
			}
			iLocal_196[0] = unk_0xA8D58C3AADA2C41C(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_99(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_113386.f_24995.f_5 >= 2)
			{
				iLocal_196[1] = unk_0xA8D58C3AADA2C41C(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_99(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_411, 0, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
			func_99(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			func_100(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			unk_0x50274A7EACA3133A(iLocal_196[0], 1);
			iLocal_215 = unk_0xBF59603E8A18FEB0(joaat("weapon_assaultrifle"), -1, unk_0x6B62510F212526DC(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x9A97DC6DBC7B223D(iLocal_215, iLocal_196[0], unk_0xB897FCFCFA664B38(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1, 0);
			if (Global_113386.f_24995.f_5 < 2)
			{
				uLocal_214 = unk_0x0E536D72AB30F4C8(joaat("prop_anim_cash_pile_02"), Local_117, 1, 1, 0);
				unk_0x9A97DC6DBC7B223D(uLocal_214, unk_0xE2D3D51028F0428A(), unk_0xB897FCFCFA664B38(unk_0xE2D3D51028F0428A(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
			}
			else if (Global_113386.f_24995.f_5 >= 2)
			{
				unk_0x9521FB98DB6DDF50(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_246 = unk_0xB93A4265CB0F5B1F("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_188 = unk_0x8F5F4164BF5FB513(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x950B26F4C891073F(iLocal_196[0], uLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_113386.f_24995.f_5 >= 2)
			{
				unk_0x950B26F4C891073F(iLocal_196[1], uLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x7B8CE3A05613F41C(uLocal_246, uLocal_188, sLocal_408, "random@altruist_cult");
			unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
			if (!unk_0xF68107C40359970C(uLocal_193[0]) && !unk_0xF68107C40359970C(uLocal_193[1]))
			{
				unk_0x950B26F4C891073F(uLocal_193[0], uLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0x950B26F4C891073F(uLocal_193[1], uLocal_188, "random@altruist_cult", sLocal_407, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!unk_0xF68107C40359970C(uLocal_193[0]))
			{
				if (unk_0xECF091D7E67FF7F2(uLocal_193[0]))
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0xF68107C40359970C(uLocal_193[1]))
			{
				if (unk_0xECF091D7E67FF7F2(uLocal_193[1]))
				{
					func_180(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x54DE1614490C2A83(uLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!unk_0xF68107C40359970C(uLocal_193[0]))
			{
				if (unk_0xECF091D7E67FF7F2(uLocal_193[0]))
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0xF68107C40359970C(uLocal_193[1]))
			{
				if (unk_0xECF091D7E67FF7F2(uLocal_193[1]))
				{
					func_180(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x54DE1614490C2A83(uLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_113386.f_24995.f_5 < 2)
			{
				func_135();
				if (unk_0xE5965CDF24F93A9F(iLocal_196[0]))
				{
					unk_0x05CB75C0837196F9(&(iLocal_196[0]));
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_196[1]))
				{
					unk_0x05CB75C0837196F9(&(iLocal_196[1]));
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_214))
				{
					unk_0x4BDA5AFD88C085EB(&iLocal_214);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_215))
				{
					unk_0x4BDA5AFD88C085EB(&iLocal_215);
				}
				unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
				unk_0xBAEA2321313356D0(0, 0, 3, 0);
				unk_0xDD786B89B15AA63F(uLocal_246, 0);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
				unk_0x72DB022C36FCEA24(1);
				unk_0xB60709BD0E075903(1);
				unk_0x4F1E6A84BC157FA0(unk_0xE2D3D51028F0428A(), 0);
				unk_0x94953C3FF0664F66(0);
				func_160(func_15(), 1, 2000, 0, 0);
			}
			unk_0x1CF3F44FC2EB9F99("AC_DONE");
			Global_113386.f_24995.f_5 += 2;
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
		unk_0x61481F9FBB1C7EDD(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x076A5661EF5ABEE4(iVar1, iVar0, 1);
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
					switch (unk_0x1307D54181723A6E())
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
	func_163(iParam0);
	if (Global_43052 == 15)
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

void func_163(int iParam0)
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
	if (!unk_0x9315DBF7D972F07A())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			unk_0xB0550BC91B0159D6(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_166() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xB0550BC91B0159D6(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xB0550BC91B0159D6(&(Global_2359296[func_166() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x150D8F58B26E9F70("COUP_RED");
		unk_0x26C23BE14F66F202(func_165(bParam0));
		unk_0x3B81B9627E7885CF(&cVar1, &cVar1, 1, 0, "", 0);
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
	iVar0 = Global_2826809[iParam0 /*3*/][func_168(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
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

void func_169(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
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
		iVar0 = unk_0x48352343BC5A41AE();
		iVar1 = func_172(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x48352343BC5A41AE();
		iVar3 = func_172(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x48352343BC5A41AE();
		iVar5 = func_172(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x48352343BC5A41AE();
		iVar7 = func_172(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x48352343BC5A41AE();
		iVar9 = func_172(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x48352343BC5A41AE();
		iVar11 = func_172(8277, -1, 0);
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
	return BitTest(Global_2359296[func_166() /*5567*/].f_681.f_10, iParam0);
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_168(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_173(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_174(bool bParam0)
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
	iVar0 = unk_0xE70CD2CDEE98DF14(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEE587CFF91CF5EDA(iParam0, iParam1);
	}
	return 0;
}

void func_176(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x61481F9FBB1C7EDD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x076A5661EF5ABEE4(iParam0, iVar0, 1);
}

void func_177(int iParam0, int iParam1)
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

void func_178()
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

int func_179(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

void func_180(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x49C085D876A9986D(uParam0, sParam1, sParam2, func_181(iParam3), 0);
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
	Global_20471 = 0;
	func_183();
}

void func_183()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
	}
}

void func_184(int iParam0)
{
	Global_22616 = iParam0;
}

int func_185()
{
	if (Global_22616 == 1)
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
			unk_0xD69A0C3662175E68(joaat("a_m_o_acult_02"));
			unk_0xD69A0C3662175E68(joaat("prop_anim_cash_pile_02"));
			unk_0x8FB472886552D737("random@altruist_cult");
			unk_0x63B063064DC08617("AC_DELIVERED");
			unk_0x334E9A09859A3C8D(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x0152AA00FA3130F1(joaat("a_m_o_acult_02")) && unk_0x0152AA00FA3130F1(joaat("prop_anim_cash_pile_02"))) && unk_0x6F940C2636C076AD("random@altruist_cult")) && unk_0x63B063064DC08617("AC_DELIVERED")) && unk_0xC870CD3D6D40CB09(joaat("weapon_assaultrifle")))
			{
				if (Global_113386.f_24995.f_5 == 0)
				{
					sLocal_409 = "ACULT_HI";
					sLocal_403 = "cult_p2_guard";
					sLocal_405 = "cult_p2_trv";
					sLocal_406 = "cult_p2_victim";
					sLocal_408 = "cult_p2_cam";
					fLocal_185 = 0.8f;
					fLocal_184 = 0.968f;
				}
				else if (Global_113386.f_24995.f_5 == 1)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_113386.f_24995.f_5 == 2)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_113386.f_24995.f_5 >= 3)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					unk_0xD69A0C3662175E68(joaat("prop_box_wood03a"));
					unk_0xD69A0C3662175E68(joaat("prop_box_wood04a"));
					unk_0xD69A0C3662175E68(joaat("prop_box_wood05a"));
					unk_0xD69A0C3662175E68(joaat("prop_security_case_01"));
					if (!unk_0x496531E41FCF5116())
					{
						unk_0xD536FD78D8A135F1("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0x12DD4A0B247D9B4D(uLocal_228))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_228);
				}
				func_23(1, 1, 1, 0, 0, 0, 0);
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
				unk_0x3410421C60BF7143(1);
				unk_0x72DB022C36FCEA24(0);
				unk_0xB60709BD0E075903(0);
				unk_0x4F1E6A84BC157FA0(unk_0xE2D3D51028F0428A(), 1);
				unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
				unk_0x1CF3F44FC2EB9F99("AC_DELIVERED");
				if (func_185())
				{
					func_184(0);
				}
				func_182();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iLocal_213 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x55A0C756C4A8220C(iLocal_213, 0))
					{
						if (unk_0xA7A8E89EA6C5E222(iLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					iLocal_213 = unk_0x9993EF7FDBCDB632();
					if (!unk_0xF68107C40359970C(uLocal_193[0]))
					{
						unk_0x03A927199A2DFE46(uLocal_193[0]);
						unk_0x6221A52631154EF7(uLocal_193[0]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (unk_0xE5965CDF24F93A9F(iLocal_213))
			{
				if (!unk_0xA6A089369417736E(iLocal_213))
				{
					unk_0x2D58A6131679D82C(iLocal_213, 1, 0);
				}
				if (unk_0x8F41785F110B0DA0(iLocal_213, Local_120, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0xC64B6E13A6A7F517(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x55B23FE400FCEA6B(iLocal_213, 0))
					{
						unk_0xBBF86885619695CE(iLocal_213, 149.8882f);
						unk_0x9F65B3BAFA302A65(iLocal_213, 1084227584);
					}
				}
			}
			unk_0x7A997A0A971D305F(Local_120, 12f, 1, 0, 0, 0);
			unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 128.2065f);
			if (!unk_0xF68107C40359970C(uLocal_193[0]))
			{
				unk_0xC64B6E13A6A7F517(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0xBBF86885619695CE(uLocal_193[0], 128.2065f);
			}
			iLocal_196[0] = unk_0xA8D58C3AADA2C41C(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_99(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_113386.f_24995.f_5 >= 3)
			{
				iLocal_196[1] = unk_0xA8D58C3AADA2C41C(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_99(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_411, 0, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
			func_99(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			if (Global_113386.f_24995.f_5 != 1 && Global_113386.f_24995.f_5 != 2)
			{
				func_100(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			unk_0x50274A7EACA3133A(iLocal_196[0], 1);
			iLocal_214 = unk_0x0E536D72AB30F4C8(joaat("prop_anim_cash_pile_02"), Local_117, 1, 1, 0);
			iLocal_215 = unk_0xBF59603E8A18FEB0(joaat("weapon_assaultrifle"), -1, unk_0x6B62510F212526DC(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x9A97DC6DBC7B223D(iLocal_215, iLocal_196[0], unk_0xB897FCFCFA664B38(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1, 0);
			if (Global_113386.f_24995.f_5 < 3)
			{
				if (Global_113386.f_24995.f_5 == 0)
				{
					unk_0x9A97DC6DBC7B223D(iLocal_214, unk_0xE2D3D51028F0428A(), unk_0xB897FCFCFA664B38(unk_0xE2D3D51028F0428A(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				}
				else
				{
					unk_0x9A97DC6DBC7B223D(iLocal_214, unk_0xE2D3D51028F0428A(), unk_0xB897FCFCFA664B38(unk_0xE2D3D51028F0428A(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				}
			}
			else if (Global_113386.f_24995.f_5 >= 3)
			{
				unk_0x9521FB98DB6DDF50(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_246 = unk_0xB93A4265CB0F5B1F("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_188 = unk_0x8F5F4164BF5FB513(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x950B26F4C891073F(iLocal_196[0], uLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_113386.f_24995.f_5 >= 3)
			{
				unk_0x950B26F4C891073F(iLocal_196[1], uLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x7B8CE3A05613F41C(uLocal_246, uLocal_188, sLocal_408, "random@altruist_cult");
			unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
			if (!unk_0xF68107C40359970C(uLocal_193[0]))
			{
				unk_0x950B26F4C891073F(uLocal_193[0], uLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!unk_0xF68107C40359970C(uLocal_193[0]))
			{
				if (unk_0xECF091D7E67FF7F2(uLocal_193[0]))
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
				if (Global_113386.f_24995.f_5 == 1 || Global_113386.f_24995.f_5 == 2)
				{
					if (!func_115())
					{
						func_100(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0x54DE1614490C2A83(uLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!unk_0xF68107C40359970C(uLocal_193[0]))
			{
				if (unk_0xECF091D7E67FF7F2(uLocal_193[0]))
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_113386.f_24995.f_5 == 1 || Global_113386.f_24995.f_5 == 2)
			{
				if ((unk_0x54DE1614490C2A83(uLocal_188) > 0.9742857f && !iLocal_181) && unk_0x2B1D7439C26D5642() == 4)
				{
					unk_0x9DCF157443EA30D6("CamPushInNeutral", 0, 0);
					unk_0x91DFC8F68F6D9B05(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_181 = 1;
				}
			}
			if (unk_0x54DE1614490C2A83(uLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_113386.f_24995.f_5 < 3)
			{
				if (Global_113386.f_24995.f_5 != 1 && Global_113386.f_24995.f_5 != 2)
				{
					func_135();
					if (unk_0xE5965CDF24F93A9F(iLocal_196[0]))
					{
						unk_0x05CB75C0837196F9(&(iLocal_196[0]));
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_196[1]))
					{
						unk_0x05CB75C0837196F9(&(iLocal_196[1]));
					}
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					if (unk_0xE5965CDF24F93A9F(iLocal_196[0]))
					{
						unk_0x1C2ED929474DC6FE(iLocal_196[0], 0, 0);
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_196[1]))
					{
						unk_0x1C2ED929474DC6FE(iLocal_196[1], 0, 0);
					}
					if (unk_0xE5965CDF24F93A9F(uLocal_193[0]))
					{
						unk_0x1C2ED929474DC6FE(uLocal_193[0], 0, 0);
					}
					iLocal_189++;
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_214))
				{
					unk_0x4BDA5AFD88C085EB(&iLocal_214);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_215))
				{
					unk_0x4BDA5AFD88C085EB(&iLocal_215);
				}
				unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
				if (Global_113386.f_24995.f_5 == 0)
				{
					unk_0xA8685678DDA27FC3(unk_0xE2D3D51028F0428A(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0x44B88FB74A8DDC72(unk_0x9E2D6C50374FCFA9(), 1f, 750, 0, 1, 0);
				}
				if (unk_0x3C57C2F07FEE34D2(sLocal_408, "cult_p4_cam"))
				{
					unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0xBAEA2321313356D0(0, 0, 3, 0);
				}
				unk_0xDD786B89B15AA63F(uLocal_246, 0);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
				unk_0x72DB022C36FCEA24(1);
				unk_0xB60709BD0E075903(1);
				unk_0x4F1E6A84BC157FA0(unk_0xE2D3D51028F0428A(), 0);
				unk_0x94953C3FF0664F66(0);
				func_160(func_15(), 1, 1000, 0, 0);
			}
			if (Global_113386.f_24995.f_5 != 1 && Global_113386.f_24995.f_5 != 2)
			{
				unk_0x1CF3F44FC2EB9F99("AC_DONE");
				Global_113386.f_24995.f_5++;
				iLocal_174 = 1;
			}
			break;
		
		case 5:
			if (!func_115() || unk_0xC9D9444186B5A374() > 7000)
			{
				func_135();
				if (unk_0xE5965CDF24F93A9F(iLocal_196[0]))
				{
					unk_0x05CB75C0837196F9(&(iLocal_196[0]));
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_196[1]))
				{
					unk_0x05CB75C0837196F9(&(iLocal_196[1]));
				}
				unk_0x1CF3F44FC2EB9F99("AC_DONE");
				Global_113386.f_24995.f_5++;
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
			if (unk_0x3D3394023CF3B07D(func_188()))
			{
				unk_0x7AFFF71021BE70EB(func_188(), &uLocal_186, &iLocal_187);
				if (iLocal_187 == 1)
				{
					uLocal_193[0] = unk_0x3722E3C325ACB58E(func_188(), 0);
					if (unk_0x8F41785F110B0DA0(uLocal_193[0], Local_120, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
						{
							if (!unk_0x55B23FE400FCEA6B(unk_0x9993EF7FDBCDB632(), 0))
							{
								unk_0xD28E3800883DED83(unk_0x9993EF7FDBCDB632(), 10.5f, 5, 0);
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_187 == 2)
				{
					uLocal_193[0] = unk_0x3722E3C325ACB58E(func_188(), 0);
					uLocal_193[1] = unk_0x3722E3C325ACB58E(func_188(), 1);
					if (unk_0x8F41785F110B0DA0(uLocal_193[0], Local_120, 5f, 5f, 5f, 0, 1, 0) && unk_0x8F41785F110B0DA0(uLocal_193[1], Local_120, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
						{
							if (!unk_0x55B23FE400FCEA6B(unk_0x9993EF7FDBCDB632(), 0))
							{
								unk_0xD28E3800883DED83(unk_0x9993EF7FDBCDB632(), 10.5f, 5, 0);
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
	return unk_0xFD8E434495EC2F26(unk_0xB6BA8B8E3D0B41C6());
}

bool func_189()
{
	return Global_32197;
}

void func_190()
{
	if (func_193())
	{
		if (iLocal_400 == 0)
		{
			iLocal_400 = unk_0x2915D98110F23A29(Local_117 - Vector(100f, 60f, 80f), Local_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (unk_0x987A5F1E1A67E3C0(func_95(unk_0x9E2D6C50374FCFA9()), Local_117, 1) < 209f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_15() == 0 || func_15() == 1)
	{
		if (unk_0x76932AF783B85B6A(2017343592, joaat("player")) != 5)
		{
			if (func_192())
			{
				unk_0x9972EFADA7A2A47D(5, 2017343592, joaat("player"));
			}
			else if (func_191())
			{
				unk_0x9972EFADA7A2A47D(5, 2017343592, joaat("player"));
			}
		}
	}
	else if (func_15() == 2)
	{
		if (unk_0x76932AF783B85B6A(2017343592, joaat("player")) != 5)
		{
			if (func_192())
			{
				if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()) || (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()) && unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9())))
				{
					unk_0x9972EFADA7A2A47D(5, 2017343592, joaat("player"));
				}
			}
			else if (func_191())
			{
				unk_0x9972EFADA7A2A47D(5, 2017343592, joaat("player"));
			}
			else if (unk_0x76932AF783B85B6A(2017343592, joaat("player")) != 1)
			{
				unk_0x9972EFADA7A2A47D(1, 2017343592, joaat("player"));
			}
		}
	}
	if (func_192())
	{
		if (iLocal_179)
		{
			if (!unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 3))
			{
				unk_0x1CF3F44FC2EB9F99("AC_START");
			}
			unk_0x8576657A629C4B0A(0f);
			unk_0x380313FF4CEF9B49("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0x574E2A23F0F76E35(Global_41748[9 /*31*/].f_2, 6f, Global_41748[9 /*31*/].f_5, 0))
			{
				unk_0x798E4BBA7A3C56AE(Global_41748[9 /*31*/].f_5, Global_41748[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (unk_0x574E2A23F0F76E35(Global_41748[10 /*31*/].f_2, 6f, Global_41748[10 /*31*/].f_5, 0))
			{
				unk_0x798E4BBA7A3C56AE(Global_41748[10 /*31*/].f_5, Global_41748[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_180 = true;
			iLocal_179 = 0;
		}
	}
	else if (!iLocal_179)
	{
		if (unk_0xF1557162766FCDEB())
		{
			unk_0x1CF3F44FC2EB9F99("AC_END");
		}
		unk_0x8576657A629C4B0A(1f);
		unk_0x380313FF4CEF9B49("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_180)
		{
			func_157();
		}
		iLocal_179 = 1;
	}
}

int func_191()
{
	if ((((((unk_0x42D790A6634DC8DC(Local_123, Local_126, fLocal_129, 1) || unk_0x42D790A6634DC8DC(Local_130, Local_133, fLocal_136, 1)) || unk_0x42D790A6634DC8DC(Local_137, Local_140, fLocal_143, 1)) || unk_0x42D790A6634DC8DC(Local_144, Local_147, fLocal_150, 1)) || unk_0x42D790A6634DC8DC(Local_151, Local_154, fLocal_157, 1)) || unk_0x42D790A6634DC8DC(Local_158, Local_161, fLocal_164, 1)) || unk_0x42D790A6634DC8DC(Local_165, Local_168, fLocal_171, 1))
	{
		return 1;
	}
	return 0;
}

int func_192()
{
	if ((((((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_123, Local_126, fLocal_129, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_130, Local_133, fLocal_136, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_137, Local_140, fLocal_143, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_144, Local_147, fLocal_150, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_151, Local_154, fLocal_157, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_158, Local_161, fLocal_164, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_165, Local_168, fLocal_171, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if (Global_113386.f_24995.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_194()
{
	unk_0x9972EFADA7A2A47D(255, 2017343592, joaat("player"));
	if (Global_113386.f_24995.f_5 >= iLocal_192 && Global_113386.f_24995.f_5 != 1000)
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
			Global_95698 = 0;
			Global_95699 = 0;
			Global_95700 = 0;
			func_14(0, 1);
			func_12(0, 1);
			func_2(0);
			unk_0xB607C92D60B318DD(1);
			unk_0x3780E26E475691ED(0);
			unk_0x631794154765BF95(0);
			func_3(0);
			unk_0x8576657A629C4B0A(1f);
			unk_0x07CECF421D895F3D(3, 1);
			unk_0x07CECF421D895F3D(5, 1);
			unk_0xC4075F869BC19306();
			iLocal_179 = 0;
			func_96();
			Global_113386.f_24995.f_5 = (iLocal_192 - 1);
			unk_0xAFBDF6A5E54114C1();
		}
	}
	else
	{
		unk_0xEC6D4F9C59CDA6F5();
		func_195(&uLocal_249);
		Global_95698 = 0;
		Global_95699 = 0;
		Global_95700 = 0;
		func_14(0, 1);
		func_12(0, 1);
		func_2(0);
		unk_0xB607C92D60B318DD(1);
		unk_0x3780E26E475691ED(0);
		unk_0x631794154765BF95(0);
		func_3(0);
		if (unk_0x0347CCBD719C8ADC(uLocal_399))
		{
			unk_0x705B098546DEB18A(&uLocal_399);
			func_98(0);
		}
		unk_0x8576657A629C4B0A(1f);
		unk_0x07CECF421D895F3D(3, 1);
		unk_0x07CECF421D895F3D(5, 1);
		unk_0xC4075F869BC19306();
		iLocal_179 = 0;
		unk_0xAFBDF6A5E54114C1();
	}
}

void func_195(var uParam0)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0x705B098546DEB18A(uParam0);
		*uParam0 = 0;
	}
}

