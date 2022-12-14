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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	struct<22> Local_85 = { 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	struct<14> Local_110 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_124[32];
	var uLocal_221 = 0;
	int iLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	int iLocal_230 = 0;
	bool bLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	struct<2> Local_235 = { 0, 0 } ;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 16;
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
	char* sLocal_408 = NULL;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	func_394(ScriptParam_0);
	while (true)
	{
		func_393();
		if (func_385() || !func_384(unk_0x93E99A2DBCBA9CFA(), 0, 1))
		{
			func_382();
		}
		switch (func_381(unk_0xD378D2332270959A()))
		{
			case 0:
				if (func_380() == 2)
				{
					Local_124[unk_0xD378D2332270959A() /*3*/].f_1 = 2;
				}
				else if (func_380() == 6)
				{
					Local_124[unk_0xD378D2332270959A() /*3*/].f_1 = 5;
				}
				break;
			
			case 2:
				if (func_380() == 2)
				{
					func_373();
					func_54();
				}
				else if (func_380() == 6)
				{
					Local_124[unk_0xD378D2332270959A() /*3*/].f_1 = 5;
				}
				if (((func_51(unk_0x93E99A2DBCBA9CFA(), 1, 0) || func_48(unk_0x93E99A2DBCBA9CFA())) || BitTest(uLocal_223, 8)) || BitTest(uLocal_223, 16))
				{
					Local_124[unk_0xD378D2332270959A() /*3*/].f_1 = 6;
				}
				break;
			
			case 5:
				func_47(&(Local_85.f_19));
				if (func_46(&(Local_85.f_19)))
				{
					Local_124[unk_0xD378D2332270959A() /*3*/].f_1 = 6;
				}
				break;
			
			case 3:
				Local_124[unk_0xD378D2332270959A() /*3*/].f_1 = 6;
			
			case 6:
				func_382();
				break;
		}
		if (unk_0xE85391CF212DE622())
		{
			switch (func_380())
			{
				case 0:
					func_45(&(Local_85.f_17), 0, 0);
					Local_85.f_1 = 2;
					break;
				
				case 2:
					func_41();
					func_39();
					func_3();
					if (func_1())
					{
						Local_85.f_1 = 6;
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
	if (func_2())
	{
		return 1;
	}
	return 0;
}

bool func_2()
{
	return BitTest(Local_85.f_0, 6);
}

void func_3()
{
	if (unk_0xE85391CF212DE622())
	{
		switch (Local_85.f_2)
		{
			case 0:
				if (!BitTest(Local_85.f_0, 10))
				{
					if (func_38(&(Local_85.f_17), 300000, 0))
					{
						unk_0xECDAB41968FF21A8(&Local_85, 10);
					}
				}
				if (!BitTest(Local_85.f_0, 10))
				{
					if (BitTest(Local_85.f_0, 0))
					{
						Local_85.f_5 = func_37();
						Local_85.f_2 = 1;
						Local_85.f_4 = 0;
					}
				}
				break;
			
			case 1:
				if (func_6())
				{
					unk_0xECDAB41968FF21A8(&Local_85, 3);
					unk_0x061B1200C95204CB(&Local_85, 13);
					func_45(&(Local_85.f_21), 0, 0);
					Local_85.f_2 = 2;
				}
				break;
			
			case 2:
				if (BitTest(Local_85.f_0, 4))
				{
					func_4(Local_85.f_5);
					Local_85.f_2 = 7;
				}
				break;
			
			case 7:
				func_4(Local_85.f_5);
				break;
			}
	}
}

void func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_5(&(Local_85.f_9[0]));
			func_5(&(Local_85.f_12[0]));
			break;
	}
}

void func_5(var uParam0)
{
	var uVar0;
	
	if (unk_0x5E6D8811A0BD0954(*uParam0))
	{
		uVar0 = unk_0x177F7E959D2D410B(*uParam0);
		unk_0xE1D0FB923395DF66(&uVar0);
	}
}

int func_6()
{
	if (Local_85.f_5 == 0)
	{
		if (!BitTest(Local_85.f_0, 1))
		{
			bLocal_231 = false;
			iLocal_232 = unk_0x15A88CFAAFFC6C4B(0, 5);
			iLocal_109 = 0;
			Local_85.f_3 = -1;
			Local_85.f_4 = 0;
			unk_0xECDAB41968FF21A8(&Local_85, true);
		}
		if (!BitTest(Local_85.f_0, 2))
		{
			if (func_36())
			{
				unk_0xECDAB41968FF21A8(&Local_85, 2);
			}
		}
		else if (func_7())
		{
			return 1;
		}
	}
	return 0;
}

int func_7()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	
	iVar0 = func_35();
	iVar1 = func_34();
	if (!unk_0x5E6D8811A0BD0954(Local_85.f_12[0]))
	{
		if (Local_85.f_15 == 0)
		{
			unk_0x08914D2D4A110A6F(1);
			Local_85.f_15 = 1;
		}
		if (!BitTest(Local_85.f_0, 13))
		{
			if (unk_0xD46C7FE1113E7469(1))
			{
				if (unk_0x334CA22E0AD77C7C(1))
				{
					if (func_33(1, 1, 1))
					{
						if (func_27(1, 1, 1))
						{
							unk_0xECDAB41968FF21A8(&Local_85, 13);
						}
					}
				}
			}
		}
		if (BitTest(Local_85.f_0, 13))
		{
			if (func_26(iVar1))
			{
				if (func_26(iVar0))
				{
					if (func_14(&Var2, &uVar5))
					{
						if (func_11(&(Local_85.f_12[0]), iVar1, Var2, uVar5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0x52B0DD24AA97ABDB(unk_0x972B1BFB16AD20B5(Local_85.f_12[0]), 1);
							if (unk_0x19D6457970A9D67E("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0xF7BF5A344214D039(unk_0x972B1BFB16AD20B5(Local_85.f_12[0]), "Not_Allow_As_Saved_Veh", 1);
							}
							Local_85.f_15 = 1;
						}
					}
				}
			}
		}
	}
	if (unk_0x5E6D8811A0BD0954(Local_85.f_12[0]))
	{
		if (!unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
		{
			if (Local_85.f_16 == 0)
			{
				unk_0xE5CBFFB5DE87586F(1);
				Local_85.f_16 = 1;
			}
			if (unk_0x334CA22E0AD77C7C(1))
			{
				if (func_26(iVar0))
				{
					if (func_9(Local_85.f_12[0]))
					{
						if (unk_0xFE2AB315FD8C7A6F(Local_85.f_12[0]))
						{
							if (func_8(&(Local_85.f_9[0]), Local_85.f_12[0], 26, iVar0, -1, 1, 1, 1))
							{
								unk_0x52B0DD24AA97ABDB(unk_0x0DB8386015E986B7(Local_85.f_9[0]), 1);
								unk_0xB0F23B683F51C9F0(unk_0x0DB8386015E986B7(Local_85.f_9[0]), 1, 0);
								unk_0xC5B2830898581862(unk_0x0DB8386015E986B7(Local_85.f_9[0]), 1);
								unk_0x8386356641D0DED1(unk_0x0DB8386015E986B7(Local_85.f_9[0]), Global_1837211);
								unk_0xB0F23B683F51C9F0(unk_0x0DB8386015E986B7(Local_85.f_9[0]), 1, 0);
								unk_0xED2BD879E739E86B(unk_0x0DB8386015E986B7(Local_85.f_9[0]), unk_0xF2DB717A73826179((200f * Global_262145.f_165)), 0);
								Local_85.f_16 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0x5E6D8811A0BD0954(Local_85.f_9[0]) || !unk_0x5E6D8811A0BD0954(Local_85.f_12[0]))
	{
		return 0;
	}
	return 1;
}

int func_8(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x334CA22E0AD77C7C(1))
	{
		return 0;
	}
	if (!unk_0x7E2E2E8A648611F4(uParam1))
	{
		return 0;
	}
	if (!unk_0xFBD273FDBCF0C5BD(unk_0x972B1BFB16AD20B5(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xFDCB460E036BA39B(unk_0x4FA078B1B32445FD(unk_0x972B1BFB16AD20B5(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x7E2E2E8A648611F4(*uParam0))
	{
		unk_0xAD02BD8A749B79F9(unk_0x0DB8386015E986B7(*uParam0), iParam7);
		if (unk_0xC59A2EB21A3834E2(unk_0x0DB8386015E986B7(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x6CD289A8A1000001(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_9(var uParam0)
{
	if (unk_0x7E2E2E8A648611F4(uParam0))
	{
		return !func_10(unk_0x972B1BFB16AD20B5(uParam0));
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		if (unk_0x055111B11E6624FD(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xFBD273FDBCF0C5BD(uParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x36A2218D87DEF488(iParam1))
	{
		return 0;
	}
	if (!unk_0xD46C7FE1113E7469(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0x10DFA2EC4C030EB3(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xABEEDBEF2BBDF5B3(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0x7DE17ACDD8BA2642(iVar1))
	{
		*uParam0 = unk_0x5FCD9CA713B11294(iVar1);
		Global_2793044.f_6736 = iVar1;
		if (unk_0x7E2E2E8A648611F4(*uParam0))
		{
			if (bParam15)
			{
				unk_0x9379BECAD1C8BD50(iVar1, 1);
			}
			unk_0xAD02BD8A749B79F9(iVar1, iParam10);
			if (unk_0xC59A2EB21A3834E2(iVar1))
			{
				if (bParam8)
				{
					unk_0x6CD289A8A1000001(*uParam0, 1);
				}
				else
				{
					unk_0x6CD289A8A1000001(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xCD80955BA7109E45(*uParam0, unk_0x93E99A2DBCBA9CFA(), 1);
				}
			}
			unk_0xC34E0415D83DCE33(iVar1, iParam9);
			unk_0xA9354A2957681244(iVar1, 1);
			if (bParam12)
			{
				unk_0xFC6FD643FAF9B719(iVar1);
				unk_0x70B81583DCDC7F26(iVar1, 5, 5, 1f);
			}
			func_12(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_12(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_13(unk_0x93E99A2DBCBA9CFA(), Param0, iParam4) > -1)
	{
		if ((Global_2635559.f_2921[1 /*6*/].f_5 == iParam5 && Global_2635559.f_2921[1 /*6*/].f_4 == iParam4) && unk_0x2A488C176D52CCA5(Global_2635559.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635559.f_2921[iVar0 /*6*/] = { Global_2635559.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635559.f_2921[1 /*6*/] = { Param0 };
		Global_2635559.f_2921[1 /*6*/].f_3 = uParam3;
		Global_2635559.f_2921[1 /*6*/].f_4 = iParam4;
		Global_2635559.f_2921[1 /*6*/].f_5 = iParam5;
	}
}

int func_13(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x2655A8EC638E4FD1((Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_14(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!func_25(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_232)
	{
		case 0:
			if (BitTest(Local_85.f_4, iLocal_232))
			{
				Var0 = { -1232.842f, -1095.003f, 2.2331f };
				Var3 = { -1226.248f, -1089.819f, 10.1513f };
				Var6 = { func_24(0, 0) };
				fVar9 = 19.7853f;
			}
			break;
		
		case 1:
			if (BitTest(Local_85.f_4, iLocal_232))
			{
				Var0 = { -622.0966f, 250.3288f, 75.7075f };
				Var3 = { -614.8635f, 255.2288f, 88.7755f };
				Var6 = { func_24(0, 1) };
				fVar9 = 266.4686f;
			}
			break;
		
		case 2:
			if (BitTest(Local_85.f_4, iLocal_232))
			{
				Var0 = { 794.4784f, -2034.339f, 25.2469f };
				Var3 = { 798.8026f, -2026.004f, 33.2793f };
				Var6 = { func_24(0, 2) };
				fVar9 = 355.9428f;
			}
			break;
		
		case 3:
			if (BitTest(Local_85.f_4, iLocal_232))
			{
				Var0 = { -1623.919f, 1249.831f, 135.2495f };
				Var3 = { -1621.554f, 1257.98f, 145.2376f };
				Var6 = { func_24(0, 3) };
				fVar9 = 353.7463f;
			}
			break;
		
		case 4:
			if (BitTest(Local_85.f_4, iLocal_232))
			{
				Var0 = { 1118.077f, 1875.035f, 60.3776f };
				Var3 = { 1127.638f, 1883.083f, 70.1053f };
				Var6 = { func_24(0, 4) };
				fVar9 = 201.3967f;
			}
			break;
	}
	if (iLocal_232 < 5)
	{
		if (!func_25(Var0, 0f, 0f, 0f, 0))
		{
			if (Local_85.f_3 == -1)
			{
				Local_85.f_3 = unk_0x6A4E5D1DC3F4EB19(Var0, Var3);
			}
			else if (unk_0x44F576187FB1916E(Local_85.f_3))
			{
				if (unk_0xCC169DD78539A281(Local_85.f_3))
				{
					if (!unk_0x5550B5BF1B986512(Local_85.f_3))
					{
						if (!func_15(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							unk_0x76FB1A3801008C0D(Local_85.f_3);
							return 1;
						}
						else
						{
							iLocal_232++;
							unk_0x76FB1A3801008C0D(Local_85.f_3);
							Local_85.f_3 = -1;
						}
					}
					else
					{
						iLocal_232++;
						unk_0x76FB1A3801008C0D(Local_85.f_3);
						Local_85.f_3 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_232++;
		}
	}
	else
	{
		iLocal_232 = 0;
	}
	return 0;
}

int func_15(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_384(unk_0x93E99A2DBCBA9CFA(), 1, 1))
		{
			if (!unk_0x72474BA05A104E1E())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x2E496FE654DA4166(func_20(unk_0x93E99A2DBCBA9CFA()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_384(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x93E99A2DBCBA9CFA()))
				{
					if ((func_16(iVar1) || !bParam10) && !Global_2657589[iVar1 /*466*/].f_270)
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
								if (unk_0x2E496FE654DA4166(func_20(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (unk_0x2E496FE654DA4166(func_20(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_16(int iParam0)
{
	if (unk_0x8FC78693DAAD4372(unk_0xF2CFBB1105511E1A(iParam0)) || Global_2657589[iParam0 /*466*/].f_255)
	{
		return 1;
	}
	return 0;
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1574918;
}

Vector3 func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_23() && Global_1853910[iVar0 /*862*/].f_832) && !func_22(Global_1853910[iVar0 /*862*/].f_833))
	{
		return Global_1853910[iVar0 /*862*/].f_833;
	}
	return func_21(iParam0);
}

Vector3 func_21(int iParam0)
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iParam0), 0);
}

int func_22(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_23()
{
	return Global_2683862.f_19;
}

Vector3 func_24(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				Var0 = { -1228.99f, -1092.231f, 7.0465f };
			}
			else if (iParam1 == 1)
			{
				Var0 = { -618.6293f, 252.6611f, 80.5897f };
			}
			else if (iParam1 == 2)
			{
				Var0 = { 796.6768f, -2029.602f, 28.1346f };
			}
			else if (iParam1 == 3)
			{
				Var0 = { -1622.881f, 1253.516f, 139.6713f };
			}
			else if (iParam1 == 4)
			{
				Var0 = { 1123.27f, 1878.917f, 65.7957f };
			}
			break;
	}
	return Var0;
}

bool func_25(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_26(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x852EC2A7DE66202D(iParam0);
	return unk_0x0CBB7C273DED26E7(iParam0);
}

bool func_27(int iParam0, bool bParam1, bool bParam2)
{
	return func_28(0, iParam0, 1, bParam1, bParam2);
}

int func_28(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666891, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_32(iParam0) - func_31(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_31(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_32(iParam0) - func_30(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_31(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_32(iParam0) - func_31(iParam0, 1));
		}
		if (!bParam4 && Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/] != 3)
		{
			iVar1 = (iVar1 - func_29(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
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

int func_30(int iParam0)
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

int func_31(int iParam0, bool bParam1)
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

int func_32(int iParam0)
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

bool func_33(int iParam0, bool bParam1, bool bParam2)
{
	return func_28(1, iParam0, 1, bParam1, bParam2);
}

int func_34()
{
	return joaat("cavalcade");
}

int func_35()
{
	return joaat("a_m_y_business_03");
}

int func_36()
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	if (BitTest(Local_85.f_0, 1))
	{
		if (iLocal_109 >= Local_124.f_0)
		{
			if (bLocal_231 < 5)
			{
				bLocal_231++;
			}
			iLocal_109 = 0;
		}
		if (iLocal_109 == 0)
		{
			unk_0xECDAB41968FF21A8(&uLocal_223, true);
		}
		if (bLocal_231 < 5)
		{
			iVar9 = iLocal_109;
			if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar9)))
			{
				iVar0 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iVar9));
				if (func_384(iVar0, 1, 1))
				{
					uVar1 = unk_0xF2CFBB1105511E1A(iVar0);
					if (BitTest(uLocal_223, 1))
					{
						Var2 = { func_24(Local_85.f_5, bLocal_231) };
						Var5 = { unk_0x30BE8A934C020461(uVar1, 0) };
						fVar8 = unk_0x2E496FE654DA4166(Var2, Var5, 1);
						if (fVar8 < 300f)
						{
							unk_0x061B1200C95204CB(&uLocal_223, true);
						}
					}
				}
			}
			iLocal_109++;
			if (iLocal_109 == Local_124.f_0)
			{
				if (BitTest(uLocal_223, 1))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_4), bLocal_231);
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_37()
{
	return 0;
}

int func_38(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_45(uParam0, bParam2, 0);
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

void func_39()
{
	if (unk_0xE85391CF212DE622())
	{
		switch (Local_85.f_6)
		{
			case 0:
				if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]) && unk_0x5E6D8811A0BD0954(Local_85.f_12[0]))
				{
					Local_85.f_6 = 1;
				}
				break;
			
			case 1:
				if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
				{
					if (!func_40(Local_85.f_9[0]))
					{
						if (unk_0x5E6D8811A0BD0954(Local_85.f_12[0]))
						{
							if (func_9(Local_85.f_12[0]))
							{
								if (unk_0x44A6C9475C859B45(unk_0x0DB8386015E986B7(Local_85.f_9[0]), unk_0x972B1BFB16AD20B5(Local_85.f_12[0])))
								{
									if (BitTest(Local_85.f_0, 7))
									{
										unk_0xECDAB41968FF21A8(&Local_85, 9);
										Local_85.f_6 = 2;
									}
									else if (BitTest(Local_85.f_0, 14))
									{
										unk_0xECDAB41968FF21A8(&Local_85, 9);
										Local_85.f_6 = 2;
									}
									else if (BitTest(Local_85.f_0, 19))
									{
										Local_85.f_6 = 3;
									}
								}
								else
								{
									Local_85.f_6 = 4;
								}
							}
							else
							{
								Local_85.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
				{
					if (!func_40(Local_85.f_9[0]))
					{
						if (!unk_0xACD39355028D39EF(unk_0x0DB8386015E986B7(Local_85.f_9[0])))
						{
							Local_85.f_6 = 4;
						}
						else if (unk_0x5E6D8811A0BD0954(Local_85.f_12[0]))
						{
							if (!func_9(Local_85.f_12[0]))
							{
								Local_85.f_6 = 3;
							}
							else if (BitTest(Local_85.f_0, 19))
							{
								Local_85.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
				{
					if (!func_40(Local_85.f_9[0]))
					{
						if (!unk_0x3C3D6D026CF7F51B(unk_0x0DB8386015E986B7(Local_85.f_9[0]), 0))
						{
							Local_85.f_6 = 4;
						}
					}
				}
				break;
			
			case 4:
				break;
			}
	}
}

int func_40(var uParam0)
{
	if (unk_0x7E2E2E8A648611F4(uParam0))
	{
		return unk_0x66599E73DBA5A850(unk_0x0DB8386015E986B7(uParam0));
	}
	return 1;
}

void func_41()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	if (unk_0xE85391CF212DE622())
	{
		if (iLocal_108 >= Local_124.f_0)
		{
			iLocal_108 = 0;
			iLocal_230 = 0;
			unk_0x061B1200C95204CB(&uLocal_223, false);
			unk_0xECDAB41968FF21A8(&uLocal_223, 5);
			unk_0x061B1200C95204CB(&Local_85, 5);
			unk_0x061B1200C95204CB(&Local_85, 17);
			unk_0x061B1200C95204CB(&uLocal_223, 14);
			unk_0x061B1200C95204CB(&uLocal_223, 19);
			if (!BitTest(Local_85.f_0, 16))
			{
				if (BitTest(Local_85.f_0, 18))
				{
					if (!BitTest(Local_85.f_0, 4))
					{
						unk_0xECDAB41968FF21A8(&Local_85, 16);
					}
				}
			}
			if (func_44(&(Local_85.f_21)))
			{
				if (!BitTest(Local_85.f_0, 12))
				{
					if (func_38(&(Local_85.f_21), 360000, 0))
					{
						unk_0xECDAB41968FF21A8(&Local_85, 12);
					}
					if (!BitTest(Local_85.f_0, 15))
					{
						if (func_38(&(Local_85.f_21), 240000, 0))
						{
							unk_0xECDAB41968FF21A8(&Local_85, 15);
						}
					}
				}
				else
				{
					unk_0xECDAB41968FF21A8(&uLocal_223, 9);
				}
			}
		}
		iVar0 = iLocal_108;
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar0)))
		{
			uVar3 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iVar0));
			bVar2 = uVar3;
			if (BitTest(uLocal_223, 5))
			{
				if (Local_124[iVar0 /*3*/].f_2 < 7)
				{
					unk_0x061B1200C95204CB(&uLocal_223, 5);
				}
			}
			if (!BitTest(Local_85.f_0, 0))
			{
				if (BitTest(Local_124[iVar0 /*3*/], 0))
				{
					iLocal_230++;
				}
			}
			else if (BitTest(Local_124[iVar0 /*3*/], 2))
			{
				if (!BitTest(Local_85.f_0, 17))
				{
					if (!BitTest(Local_85.f_7, bVar2))
					{
						if (Local_124[iVar0 /*3*/].f_2 > 4)
						{
							unk_0xECDAB41968FF21A8(&(Local_85.f_7), bVar2);
							unk_0xECDAB41968FF21A8(&Local_85, 17);
						}
					}
				}
				if (!BitTest(Local_85.f_0, 5))
				{
					unk_0xECDAB41968FF21A8(&Local_85, 5);
				}
				if (!BitTest(Local_85.f_0, 4))
				{
					if (BitTest(Local_124[iVar0 /*3*/], 1))
					{
						Local_85.f_8 = uVar3;
						unk_0xECDAB41968FF21A8(&Local_85, 4);
						unk_0x061B1200C95204CB(&uLocal_223, 15);
						unk_0x061B1200C95204CB(&Local_85, 18);
					}
				}
				if (!BitTest(Local_85.f_0, 4))
				{
					if (!BitTest(Local_85.f_0, 18))
					{
						if (BitTest(Local_124[iVar0 /*3*/], 7))
						{
							unk_0xECDAB41968FF21A8(&Local_85, 18);
						}
					}
				}
				if (BitTest(uLocal_223, 9))
				{
					if (BitTest(Local_124[iVar0 /*3*/], 5))
					{
						unk_0x061B1200C95204CB(&uLocal_223, 9);
					}
				}
				if (!BitTest(uLocal_223, 14))
				{
					if (BitTest(Local_124[iVar0 /*3*/], 6))
					{
						unk_0xECDAB41968FF21A8(&uLocal_223, 14);
					}
				}
				if (!BitTest(uLocal_223, 20))
				{
					if (BitTest(Local_124[iVar0 /*3*/], 8))
					{
						unk_0xECDAB41968FF21A8(&uLocal_223, 20);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar1)))
			{
				func_43(iVar1);
			}
			iVar1++;
		}
		iLocal_108++;
		if (iLocal_108 >= Local_124.f_0)
		{
			if (!BitTest(Local_85.f_0, 16))
			{
				if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
				{
					if (func_40(Local_85.f_9[0]))
					{
						if (!BitTest(Local_85.f_0, 4))
						{
							if (BitTest(uLocal_223, 15))
							{
								if (!func_44(&uLocal_228))
								{
									func_45(&uLocal_228, 0, 0);
								}
								else if (func_38(&uLocal_228, 2000, 0))
								{
									unk_0xECDAB41968FF21A8(&Local_85, 16);
								}
							}
						}
					}
				}
			}
			unk_0xECDAB41968FF21A8(&uLocal_223, false);
			if (!BitTest(Local_85.f_0, 0))
			{
				if (iLocal_230 >= 1)
				{
					unk_0xECDAB41968FF21A8(&Local_85, false);
				}
			}
			if (!BitTest(Local_85.f_0, 14))
			{
				if (BitTest(uLocal_223, 14))
				{
					unk_0xECDAB41968FF21A8(&Local_85, 14);
				}
			}
			if (!BitTest(Local_85.f_0, 19))
			{
				if (BitTest(uLocal_223, 20))
				{
					unk_0xECDAB41968FF21A8(&Local_85, 19);
				}
			}
			if (!BitTest(Local_85.f_0, 6))
			{
				if (BitTest(uLocal_223, 5))
				{
					if (Local_85.f_2 > 1 && Local_85.f_2 <= 7)
					{
						unk_0xECDAB41968FF21A8(&Local_85, 6);
					}
					else if (BitTest(Local_85.f_0, 10))
					{
						unk_0xECDAB41968FF21A8(&Local_85, 6);
					}
				}
			}
			if (BitTest(Local_85.f_0, 17))
			{
				unk_0x061B1200C95204CB(&Local_85, 17);
				unk_0x061B1200C95204CB(&Local_85, 15);
				unk_0x061B1200C95204CB(&Local_85, 12);
				func_42(&(Local_85.f_21));
				func_45(&(Local_85.f_21), 0, 0);
			}
			if (!BitTest(Local_85.f_0, 11))
			{
				if (BitTest(Local_85.f_0, 12))
				{
					if (BitTest(uLocal_223, 9))
					{
						unk_0xECDAB41968FF21A8(&Local_85, 11);
					}
				}
			}
		}
	}
}

void func_42(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_43(int iParam0)
{
	if (unk_0xE85391CF212DE622())
	{
		if (!BitTest(Local_85.f_0, 7))
		{
			if (BitTest(Local_124[iParam0 /*3*/], 3))
			{
				unk_0xECDAB41968FF21A8(&Local_85, 7);
			}
		}
	}
}

bool func_44(var uParam0)
{
	return uParam0->f_1;
}

void func_45(var uParam0, bool bParam1, bool bParam2)
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

int func_46(var uParam0)
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

void func_47(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xE85391CF212DE622())
		{
			func_45(uParam0, 0, 0);
		}
	}
}

int func_48(int iParam0)
{
	if (func_50(iParam0))
	{
		if (!func_49(iParam0, 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_49(int iParam0, int iParam1)
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

int func_50(int iParam0)
{
	if (Global_2657589[iParam0 /*466*/].f_218 == 0)
	{
		return 0;
	}
	return 1;
}

int func_51(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_52(iParam0))
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

bool func_52(int iParam0)
{
	return func_53(iParam0);
}

var func_53(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

void func_54()
{
	func_364();
	func_361();
	if (BitTest(Local_85.f_0, 10))
	{
		if (Local_124[unk_0xD378D2332270959A() /*3*/].f_2 < 6)
		{
			Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 6;
		}
	}
	if (BitTest(Local_85.f_0, 4))
	{
		if (Local_124[unk_0xD378D2332270959A() /*3*/].f_2 <= 6)
		{
			Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 6;
		}
	}
	if (BitTest(Local_85.f_0, 16))
	{
		if (!BitTest(Local_85.f_0, 4))
		{
			if (Local_124[unk_0xD378D2332270959A() /*3*/].f_2 <= 6)
			{
				Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 6;
				Local_110.f_2 = 686299542;
				func_359(Local_110, func_360(1));
			}
		}
	}
	if (BitTest(Local_85.f_0, 11))
	{
		if (Local_124[unk_0xD378D2332270959A() /*3*/].f_2 <= 6)
		{
			Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 6;
			Local_110.f_2 = 686299542;
			func_359(Local_110, func_360(1));
		}
	}
	if (Local_124[unk_0xD378D2332270959A() /*3*/].f_2 > 0)
	{
		if (Local_124[unk_0xD378D2332270959A() /*3*/].f_2 < 6)
		{
			if ((((func_51(unk_0x93E99A2DBCBA9CFA(), 1, 0) || func_358()) || func_357() > 0) || func_49(unk_0x93E99A2DBCBA9CFA(), 1)) || func_356())
			{
				Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 6;
			}
		}
	}
	if (Local_124[unk_0xD378D2332270959A() /*3*/].f_2 > 0)
	{
		if (Local_124[unk_0xD378D2332270959A() /*3*/].f_2 < 6)
		{
			if (func_354(unk_0x93E99A2DBCBA9CFA()))
			{
				Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 6;
			}
		}
	}
	switch (Local_124[unk_0xD378D2332270959A() /*3*/].f_2)
	{
		case 0:
			if (BitTest(Local_124[unk_0xD378D2332270959A() /*3*/], 0))
			{
				if (BitTest(Local_85.f_0, 3))
				{
					if (!BitTest(Local_85.f_0, 15))
					{
						unk_0xECDAB41968FF21A8(&(Local_124[unk_0xD378D2332270959A() /*3*/]), 2);
						func_353(11, 1);
						Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 3;
					}
					else
					{
						Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 6;
						unk_0xECDAB41968FF21A8(&uLocal_223, 16);
					}
				}
			}
			break;
		
		case 3:
			if (func_352(Local_85.f_5))
			{
				func_351(Local_85.f_5);
				Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 4;
			}
			break;
		
		case 4:
			if (!func_350())
			{
				if (func_226())
				{
					Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 5;
					func_224(88, 1);
					func_223();
				}
				else if (BitTest(uLocal_223, 8))
				{
					Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 6;
				}
			}
			else if (func_213())
			{
				Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 5;
			}
			else
			{
				if (BitTest(uLocal_223, 8))
				{
					Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 6;
				}
				if (BitTest(Local_85.f_0, 15))
				{
					func_200(12, 116);
					Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 6;
					unk_0xECDAB41968FF21A8(&uLocal_223, 16);
				}
			}
			break;
		
		case 5:
			if (Local_85.f_5 == 0)
			{
				func_63();
			}
			break;
		
		case 6:
			Local_124[unk_0xD378D2332270959A() /*3*/] = 0;
			unk_0x061B1200C95204CB(&uLocal_223, 3);
			unk_0x061B1200C95204CB(&uLocal_223, 4);
			iLocal_222 = 0;
			func_200(12, 116);
			if (unk_0xCE4AAA035282336C(Global_1935145))
			{
				unk_0x45533C09A6C9B409(&Global_1935145);
			}
			func_62(&Local_235);
			func_55();
			func_353(11, 0);
			Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 7;
			break;
		
		case 7:
			if (Local_85.f_2 == 0 && !BitTest(Local_85.f_0, 10))
			{
				Local_124[unk_0xD378D2332270959A() /*3*/].f_2 = 0;
			}
			break;
	}
}

void func_55()
{
	if (!func_61())
	{
		return;
	}
	if (!unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A()) == Global_1574757.f_9)
	{
		return;
	}
	func_56();
}

void func_56()
{
	func_58();
	func_57(0);
}

void func_57(bool bParam0)
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

void func_58()
{
	if (!func_60())
	{
	}
	if (func_61())
	{
		unk_0x7A9058087D285F2B(&(Global_1574757.f_12));
		func_59();
		unk_0x83D7210D9382146A();
	}
}

void func_59()
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

int func_60()
{
	if (!func_61())
	{
		return 0;
	}
	unk_0xEB16059D3EDC926B(&(Global_1574757.f_12));
	func_59();
	return unk_0xC44AC9C43C91326C();
}

int func_61()
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

void func_62(var uParam0)
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

void func_63()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
	{
		if (!func_40(Local_85.f_9[0]))
		{
			if (unk_0xCE4AAA035282336C(Global_1935145))
			{
				if (func_199() || func_198())
				{
					unk_0x3C1C0549FDA2CF24(Global_1935145, 0);
				}
				else
				{
					unk_0x3C1C0549FDA2CF24(Global_1935145, 4);
				}
			}
			else
			{
				Global_1935145 = unk_0x53B496178AE44636(unk_0x0DB8386015E986B7(Local_85.f_9[0]));
				unk_0x1886753DA39F38F8(Global_1935145, 1);
				unk_0x225EB85DBC38E707(Global_1935145, 0f);
			}
			if (unk_0xCE4AAA035282336C(Local_235.f_0))
			{
				if (func_199() || func_198())
				{
					unk_0x3C1C0549FDA2CF24(Local_235.f_0, 0);
				}
				else
				{
					unk_0x3C1C0549FDA2CF24(Local_235.f_0, 4);
				}
				if (!BitTest(uLocal_223, 10))
				{
					unk_0x4049FDC177C92D4B(Local_235.f_0, "FM_GDM_BLP");
					unk_0xECDAB41968FF21A8(&uLocal_223, 10);
				}
			}
			if (unk_0xCE4AAA035282336C(Local_235.f_1))
			{
				if (func_199() || func_198())
				{
					unk_0x3C1C0549FDA2CF24(Local_235.f_1, 0);
				}
				else
				{
					unk_0x3C1C0549FDA2CF24(Local_235.f_1, 4);
				}
				if (!BitTest(uLocal_223, 12))
				{
					unk_0x4049FDC177C92D4B(Local_235.f_1, "FM_GDM_BLP");
					unk_0xECDAB41968FF21A8(&uLocal_223, 12);
				}
			}
			if (!BitTest(uLocal_223, 6))
			{
				if (!BitTest(Global_2621446, 7) && !func_194(unk_0x93E99A2DBCBA9CFA(), 0, -1))
				{
					if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
					{
						if (!func_199())
						{
							func_188("FM_GDM_KIL", 0);
						}
						unk_0xECDAB41968FF21A8(&uLocal_223, 6);
					}
				}
			}
			else if (BitTest(Global_2621446, 7))
			{
				func_55();
				unk_0x061B1200C95204CB(&uLocal_223, 6);
			}
			else if (func_187())
			{
				func_55();
				unk_0x061B1200C95204CB(&uLocal_223, 6);
			}
			else if (func_194(unk_0x93E99A2DBCBA9CFA(), 0, -1))
			{
				func_55();
				unk_0x061B1200C95204CB(&uLocal_223, 6);
			}
		}
		else if (BitTest(uLocal_223, 6))
		{
			func_55();
			unk_0x061B1200C95204CB(&uLocal_223, 6);
		}
		if (!BitTest(Local_124[unk_0xD378D2332270959A() /*3*/], 1))
		{
			iVar1 = unk_0x88B3E6B9F291E29C(Local_85.f_9[0], &uVar0);
			if (iVar1 == unk_0x93E99A2DBCBA9CFA())
			{
				unk_0xECDAB41968FF21A8(&(Local_124[unk_0xD378D2332270959A() /*3*/]), true);
				iVar2 = func_184(func_186(unk_0x93E99A2DBCBA9CFA(), 1), 1);
				if (iVar2 > 100)
				{
					iVar2 = 100;
				}
				iVar3 = iVar2 * 20;
				iVar3 = unk_0xF2DB717A73826179((Global_262145.f_4239 * IntToFloat(iVar3)));
				func_140(2, "XPT_KAIE", -1859646258, 2131309714, iVar3, 1, -1, 0);
				if (Global_262145.f_2433 != 0f)
				{
					iVar4 = unk_0xF2DB717A73826179(Global_262145.f_2433);
				}
				else
				{
					iVar4 = 2000;
				}
				if (Global_262145.f_2429 != 0f)
				{
					iVar5 = unk_0xF2DB717A73826179(Global_262145.f_2429);
				}
				else
				{
					iVar5 = 8000;
				}
				if (iVar4 >= 100)
				{
					iVar6 = (iVar4 / 100);
				}
				if (iVar5 >= 100)
				{
					iVar7 = (iVar5 / 100);
				}
				iVar8 = unk_0x15A88CFAAFFC6C4B(iVar6, iVar7 + 1) * 100;
				iVar8 = func_139(iVar8, 1);
				if (iVar8 > iVar5)
				{
					iVar8 = iVar5;
				}
				func_79(&iVar8, 1);
				if (func_78())
				{
					if (iVar8 > 0)
					{
						func_66(-352356931, iVar8, &iVar9, 0, 0, 0);
						Global_4535172[iVar9 /*85*/] = -1146479277;
					}
				}
				else
				{
					unk_0x82C8D1D96493F78B(iVar8, -1146479277);
				}
				func_65(5, iVar8);
			}
			else if (iVar1 != func_64())
			{
				if (unk_0xE6DEE82DB0922DF0(iVar1))
				{
					if (!BitTest(Local_124[unk_0xD378D2332270959A() /*3*/], 7))
					{
						if (!unk_0x33676B7D38C8F4C6(iVar1))
						{
							unk_0xECDAB41968FF21A8(&(Local_124[unk_0xD378D2332270959A() /*3*/]), 7);
						}
					}
				}
			}
		}
	}
}

int func_64()
{
	return -1;
}

void func_65(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23997 == 0 || Global_262145.f_23997 == 1)
		{
			if (!unk_0xCC17806DB0C41C19() || Global_262145.f_23997 == 1)
			{
				Global_2793044.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7044)
				{
					iParam1 = Global_262145.f_7044;
				}
				Global_2793044.f_284 = iParam1;
				Global_2793044.f_285 = 0;
			}
		}
	}
}

void func_66(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_78())
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
				func_67(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_67(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_67(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_67(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_67(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_78())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x366262A55539062C(func_19()) || unk_0xF0773A1CAE4717D9())
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
			*uParam0 = func_74(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_73(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_68(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_68(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xECDAB41968FF21A8(&(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_126.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_69(iParam0);
	}
}

void func_69(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_78())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_72(iParam0))
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
		func_70(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_70(var uParam0)
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
	func_71(&(uParam0->f_14));
	func_71(&(uParam0->f_14.f_13));
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

void func_71(var uParam0)
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

int func_72(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_73(int iParam0, var uParam1)
{
	Global_2697013 = uParam1;
	Global_2697012 = iParam0;
}

int func_74(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_78())
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
				func_75(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_75(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_77(Var0.f_1);
	if ((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_76();
		unk_0x46F55A5B9F053761(1, &Var0, 36, iVar36);
	}
}

void func_76()
{
	unk_0x3EC562D93709C894("AM_ARENA_SHP");
}

var func_77(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0xECDAB41968FF21A8(&uVar0, bParam0);
	}
	return uVar0;
}

int func_78()
{
	if (unk_0xCC17806DB0C41C19())
	{
		return unk_0xF6919DB2626A28C5();
	}
	return 0;
}

void func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_138())
		{
			if (func_137(0))
			{
				if (!func_133(0))
				{
					if (unk_0xE6DEE82DB0922DF0(func_132()))
					{
						if (func_131() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_131());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_129(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_84("GB_BCUT_TICK1", func_132(), iVar0, 0, 0, 1);
						}
						func_83(20);
						func_80(func_132(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_80(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_384(bParam0, 0, 1))
	{
		Var0.f_0 = -1597942809;
		Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_82(bParam0);
		func_81(&(Var0.f_6), &(Var0.f_7));
		unk_0x46F55A5B9F053761(1, &Var0, 8, func_77(bParam0));
	}
}

void func_81(var uParam0, var uParam1)
{
	*uParam0 = Global_1923597.f_9;
	*uParam1 = Global_1923597.f_10;
}

var func_82(int iParam0)
{
	return Global_1894573[iParam0 /*608*/].f_510;
}

void func_83(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	unk_0xECDAB41968FF21A8(&(Global_2793044.f_5225.f_7[iVar0]), bVar1);
}

int func_84(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x1D25117F71EE3811(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x1D25117F71EE3811(iParam1), 64);
		}
		if (unk_0x2AC37494BBF1DB16(&Var1))
		{
		}
		unk_0xD30970E11AD0FF0D(sParam0);
		unk_0x35451336B8B420D6(func_91(iParam1, -2, 1, 0, 0));
		unk_0x76B34CBB6F5FA1BB(func_89(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x35451336B8B420D6(iParam3);
		}
		unk_0x64C50E40AA09A6B5(iParam2);
		iVar0 = unk_0xEAFC6135DF75DE92(0, 1);
		func_85(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_85(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_88() || !unk_0x1758F8A8511510AB()) || !func_17(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		return;
	}
	iVar0 = func_86(iParam2);
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

int func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944061 - 1))
	{
		if (iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1)
		{
			func_87(iVar0);
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

void func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944061.f_5[iVar0 /*53*/] = { Global_1944061.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_88()
{
	return unk_0x7681F180D7938DA8(-1762644250);
}

var func_89(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_90(&cVar0);
}

var func_90(char[4] cParam0)
{
	return cParam0;
}

int func_91(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_354(iParam0) && !bParam4)
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
	if (((func_354(unk_0x93E99A2DBCBA9CFA()) || (func_128() && func_127())) && !BitTest(Global_2793044.f_4690, 31)) && !bParam4)
	{
		uVar1 = func_126();
		if (unk_0x7DE17ACDD8BA2642(uVar1))
		{
			if (unk_0x60A06DE259634304(iVar1))
			{
				if (unk_0xB850F932D03EF34D(iVar1) != -1)
				{
					if (func_384(unk_0xB850F932D03EF34D(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1758F8A8511510AB()) && iParam1 < 4)
						{
							if (Global_4718592.f_108449[iParam1] != -1)
							{
								return func_124(iParam1, iParam0, 0);
							}
							else
							{
								return func_106(iParam0, unk_0xB850F932D03EF34D(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_106(iParam0, unk_0xB850F932D03EF34D(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1758F8A8511510AB()) && iParam1 < 4)
			{
				if (Global_4718592.f_108449[iParam1] != -1)
				{
					return func_124(iParam1, iParam0, 0);
				}
				else
				{
					return func_92(0, -1, 0);
				}
			}
			else
			{
				return func_92(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1758F8A8511510AB()) && iParam1 < 4)
	{
		if (Global_4718592.f_108449[iParam1] != -1)
		{
			return func_124(iParam1, iParam0, 0);
		}
		else
		{
			return func_106(iParam0, unk_0x93E99A2DBCBA9CFA(), iParam1, bParam2, bParam3);
		}
	}
	return func_106(iParam0, unk_0x93E99A2DBCBA9CFA(), iParam1, bParam2, bParam3);
}

int func_92(bool bParam0, int iParam1, bool bParam2)
{
	return func_93(unk_0x93E99A2DBCBA9CFA(), bParam0, iParam1, bParam2);
}

int func_93(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xE6DEE82DB0922DF0(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x4292F1DE8BA2D22E(iParam0);
	if ((func_105() || (func_104() && func_102())) && Global_1665699.f_1)
	{
		if (bParam1)
		{
			return func_101(iParam2, iVar0);
		}
		else
		{
			return func_101(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_98(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_97(1);
				}
				else
				{
					return func_97(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_94(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_94(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_97(1);
	}
	return func_97(0);
}

int func_94(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_96(iParam0, iParam1, iParam3);
	if (func_95(Global_4718592.f_113724, 1))
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

int func_95(int iParam0, bool bParam1)
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

int func_96(int iParam0, int iParam1, int iParam2)
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
			if (!func_98(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_97(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_98(int iParam0, int iParam1, int iParam2, int iParam3)
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
							if (!func_99(iParam0, bVar0, iParam1, bVar1) || !func_99(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_99(iParam0, bVar0, iParam1, bVar1) || !func_99(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_99(iParam0, bVar0, iParam1, bVar1) || !func_99(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_99(iParam0, bVar0, iParam1, bVar1) || !func_99(iParam1, bVar1, iParam0, bVar0))
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

int func_99(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
		if (((!func_384(iVar1, 1, 1) || func_17(iVar1, 0)) || BitTest(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_100(iVar1))
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
				iVar3 = unk_0x504B9BB48D41C264(uVar2);
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

var func_100(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_101(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_96(iParam1, iParam0, 4);
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

int func_102()
{
	if (func_103())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_170488, 4);
}

bool func_103()
{
	return BitTest(Global_4718592.f_160050, 12);
}

bool func_104()
{
	if (unk_0x1758F8A8511510AB())
	{
		return BitTest(Global_4718592.f_170488, 0);
	}
	return ((BitTest(Global_4718592.f_170488, 0) || Global_1926644) && unk_0x24B651D85CCE5EB4(joaat("fm_deathmatch_creator")) > 0);
}

int func_105()
{
	if (func_103() && unk_0x1758F8A8511510AB())
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_115())
			{
				iVar3 = func_111(iParam0);
				if (!iVar3 == -1)
				{
					return func_109(iVar3);
				}
			}
			if ((func_108(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_98(unk_0x4292F1DE8BA2D22E(iParam1), unk_0x4292F1DE8BA2D22E(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_97(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_107(1);
			}
			else
			{
				return func_93(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836597 || Global_1836587) || Global_1853910[iParam0 /*862*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836597 == 1 && Global_1836607 == 0))
			{
				return func_97(1);
			}
			else
			{
				return func_93(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836591 && Global_1836078.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_111(iParam0);
	if (!iVar4 == -1)
	{
		return func_109(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_107(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_108(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_109(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_110(iParam0);
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

var func_110(int iParam0)
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_111(int iParam0)
{
	if (!iParam0 == func_64())
	{
		if (func_113(iParam0, 1))
		{
			return Global_2648605.f_818.f_11[func_112(iParam0)];
		}
	}
	return -1;
}

int func_112(int iParam0)
{
	if (iParam0 != func_64())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_64();
}

bool func_113(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_114(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_64();
}

int func_114(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_64())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_115()
{
	if ((((((func_123() || func_122()) || func_23()) || func_121()) || func_120()) || func_118()) || func_116())
	{
		return 1;
	}
	if (unk_0x1758F8A8511510AB() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	return func_117(Global_4718592.f_113724);
}

int func_117(int iParam0)
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

int func_118()
{
	return func_119(Global_4718592.f_113724);
}

int func_119(int iParam0)
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

var func_120()
{
	return Global_2683862.f_24;
}

var func_121()
{
	return Global_2683862.f_21;
}

var func_122()
{
	return Global_2683862.f_18;
}

var func_123()
{
	return Global_2683862.f_17;
}

int func_124(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058070.f_14[iParam0];
	if (func_115())
	{
		iVar2 = func_111(iParam1);
		if (!iVar2 == -1)
		{
			return func_109(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_64())
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
			iVar0 = func_93(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_125(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_98(iParam0, unk_0x4292F1DE8BA2D22E(iParam1), 0, -1))
		{
			iVar0 = func_107(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_125(int iParam0)
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

var func_126()
{
	return Global_2621446.f_2;
}

var func_127()
{
	return BitTest(Global_2621446, 4);
}

var func_128()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

void func_129(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_130(1);
	}
	else
	{
		iVar1 = func_130(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_130(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_12865;
}

int func_131()
{
	return Global_262145.f_12864;
}

bool func_132()
{
	return Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10;
}

bool func_133(bool bParam0)
{
	return func_134(unk_0x93E99A2DBCBA9CFA(), bParam0);
}

int func_134(int iParam0, bool bParam1)
{
	return func_135(iParam0, bParam1, 1);
}

int func_135(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_64())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_136(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_64() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0, int iParam1)
{
	if (iParam0 != func_64())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_64())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_137(bool bParam0)
{
	return func_113(unk_0x93E99A2DBCBA9CFA(), bParam0);
}

bool func_138()
{
	return func_114(unk_0x93E99A2DBCBA9CFA());
}

int func_139(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(iParam0) * Global_262145);
				iParam0 = unk_0xF2DB717A73826179(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

var func_140(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_141(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_141(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_142(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_142(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_175();
	if (func_174(sParam2))
	{
	}
	if (func_173())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_171(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_170(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_168(0, &iVar1);
					break;
				
				case 3:
					func_168(1, &iVar1);
					break;
				
				case 1:
					func_165(&iVar1);
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
			func_162(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_153((func_161(unk_0x93E99A2DBCBA9CFA()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x140AEC0C03C45A46(iVar1, iParam8, iParam9);
				if (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_2 != -1)
				{
					func_162(1166, iVar1, -1);
				}
				func_147(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_143((func_145(unk_0x93E99A2DBCBA9CFA()) + iVar1));
			}
			else
			{
				func_143((func_145(unk_0x93E99A2DBCBA9CFA()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_143(int iParam0)
{
	if (func_173())
	{
		Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_5 = iParam0;
		func_144(joaat("mpply_globalxp"), iParam0);
	}
}

void func_144(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, uParam1, 1);
	}
}

int func_145(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_384(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			{
				return func_146(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_5;
			}
		}
		else
		{
			return func_146(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_146(int iParam0)
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

void func_147(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_152(unk_0x93E99A2DBCBA9CFA()) };
	if (unk_0xE52BCF7D5014E06E())
	{
		if (unk_0x7DD2CE58D33238D9(&Var0))
		{
			iVar13 = func_150(func_151(&Var0));
			if (iVar13 == 0)
			{
				func_149(&Global_1665493, iParam0);
				func_148(joaat("mpply_crew_local_xp_0"), Global_1665493);
			}
			else if (iVar13 == 1)
			{
				func_149(&Global_1665494, iParam0);
				func_148(joaat("mpply_crew_local_xp_1"), Global_1665494);
			}
			else if (iVar13 == 2)
			{
				func_149(&Global_1665495, iParam0);
				func_148(joaat("mpply_crew_local_xp_2"), Global_1665495);
			}
			else if (iVar13 == 3)
			{
				func_149(&Global_1665496, iParam0);
				func_148(joaat("mpply_crew_local_xp_3"), Global_1665496);
			}
			else if (iVar13 == 4)
			{
				func_149(&Global_1665497, iParam0);
				func_148(joaat("mpply_crew_local_xp_4"), Global_1665497);
			}
		}
	}
}

void func_148(int iParam0, var uParam1)
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

void func_149(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_150(int iParam0)
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

int func_151(var uParam0)
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

struct<13> func_152(int iParam0)
{
	struct<13> Var0;
	
	unk_0x23BD70608BA4F8D9(iParam0, &Var0, 13);
	return Var0;
}

void func_153(int iParam0, int iParam1, int iParam2)
{
	if (func_173())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10070 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1665638[func_160(-1)])
				{
					unk_0x140AEC0C03C45A46(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1665638[func_160(-1)])
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
		if (func_159(unk_0x93E99A2DBCBA9CFA()))
		{
			Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_1 = iParam0;
			Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_6 = func_184(iParam0, 1);
		}
		func_158(640, iParam0, -1, 1);
		func_157(641, func_184(iParam0, 1), -1, 1, 0);
		Global_1665638[func_160(-1)] = iParam0;
		func_154(-1109644434, 7, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_156(iParam1, iParam2))
	{
		iVar0 = func_155();
		Global_2694418[iVar0] = iParam1;
		Global_2694429[iVar0] = iParam0;
	}
}

int func_155()
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

int func_156(int iParam0, var uParam1)
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

void func_157(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_160(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2805027[iParam0 /*3*/][func_160(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_160(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_160(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_160(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_160(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_160(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_160(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_160(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_160(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_160(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_160(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_160(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_160(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_160(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_160(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_160(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_160(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_160(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_160(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_160(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_160(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_160(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_160(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_160(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_160(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851323[0 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851323[1 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851323[2 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851323[3 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851502[func_160(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_160(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_160(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_160(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_160(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_160(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_160(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_160(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851411[0 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851411[1 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851411[2 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851411[3 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851411[4 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851505[0 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851505[1 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851505[2 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851505[3 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851505[4 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851521[0 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851521[1 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851521[2 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851521[3 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851521[4 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851411[5 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851323[4 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851537[func_160(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851546[func_160(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851540[func_160(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851549[func_160(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851543[func_160(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851552[func_160(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851555[func_160(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851411[6 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851323[5 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851411[7 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851323[6 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851411[8 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851323[7 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851411[9 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851323[8 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851411[10 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851323[9 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851411[11 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851323[10 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851411[12 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851323[11 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851411[13 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851323[12 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851411[14 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851323[13 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851411[15 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851323[14 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851411[16 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851323[15 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851411[17 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851323[16 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851323[17 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851323[18 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851323[19 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851323[20 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851558[func_160(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851561[func_160(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851564[func_160(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851567[func_160(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851570[func_160(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851573[func_160(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851576[func_160(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851579[func_160(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851582[func_160(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851585[func_160(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851588[func_160(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851591[func_160(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851594[func_160(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851597[func_160(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851323[21 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851411[23 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851323[22 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851411[24 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851323[23 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851323[24 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851323[25 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851411[27 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851323[26 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851411[28 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851323[27 /*3*/][func_160(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_159(int iParam0)
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

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_161(int iParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			{
				return Global_1665638[func_160(-1)];
			}
			else if (func_159(iParam0))
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_160(-1)];
	}
	return 0;
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_164(iParam0, func_160(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_163(iParam0))
	{
		func_157(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_158(iParam0, iVar0, iParam2, 1);
	}
}

int func_163(int iParam0)
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

int func_164(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_160(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_165(int iParam0)
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
				if (unk_0x4292F1DE8BA2D22E(iVar5) == iVar1 || func_98(unk_0x4292F1DE8BA2D22E(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != unk_0x93E99A2DBCBA9CFA())
					{
						if (func_167(unk_0x93E99A2DBCBA9CFA(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_166(*iParam0, 100) * (10f * Global_262145.f_4228)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_166(*iParam0, 100) * (20f * Global_262145.f_4221)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_166(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_167(int iParam0, int iParam1)
{
	if (unk_0xE52BCF7D5014E06E())
	{
		Global_2764201 = { func_152(iParam0) };
		Global_2764214 = { func_152(iParam1) };
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

void func_168(bool bParam0, int iParam1)
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
				if (func_384(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x93E99A2DBCBA9CFA())
					{
						iVar1++;
						if (func_167(unk_0x93E99A2DBCBA9CFA(), iVar4))
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
			if (func_384(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x93E99A2DBCBA9CFA())
				{
					if (func_169(unk_0x93E99A2DBCBA9CFA(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_167(unk_0x93E99A2DBCBA9CFA(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_166(*iParam1, 100) * (10f * Global_262145.f_4228)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_166(*iParam1, 100) * (20f * Global_262145.f_4221)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_169(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_21(iParam0), func_21(iParam1));
	return 0f;
}

int func_170(int iParam0)
{
	int iVar0;
	
	if (unk_0xD5361E259B8F211D() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_166(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_171(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x3CDF9E9E483AADE1(iParam0) > func_161(unk_0x93E99A2DBCBA9CFA()))
		{
			iParam0 = -func_161(unk_0x93E99A2DBCBA9CFA());
		}
	}
	if (func_172(8000, 0, 0) > 0)
	{
		if (func_172(8000, 0, 0) < (iParam0 + func_161(unk_0x93E99A2DBCBA9CFA())))
		{
			iParam0 = (func_172(8000, 0, 0) - func_161(unk_0x93E99A2DBCBA9CFA()));
		}
	}
	return iParam0;
}

int func_172(int iParam0, bool bParam1, int iParam2)
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

int func_173()
{
	return 1;
}

int func_174(char* sParam0)
{
	if (unk_0xB71C73D0269747D5(sParam0))
	{
		return 1;
	}
	else if (unk_0x4310A0DB886F9FED(sParam0, "") || unk_0x4310A0DB886F9FED(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_175()
{
	int iVar0;
	
	if (func_183(unk_0x93E99A2DBCBA9CFA()) || func_182(unk_0x93E99A2DBCBA9CFA()))
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
	else if (func_180() || func_176(unk_0x93E99A2DBCBA9CFA()))
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

int func_176(int iParam0)
{
	return func_177(func_178(iParam0));
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_178(int iParam0)
{
	if (func_179(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_179(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if (unk_0x1758F8A8511510AB())
	{
		return func_23();
	}
	return func_181(Global_4718592.f_113724);
}

int func_181(int iParam0)
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

bool func_182(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 2;
}

bool func_183(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 7;
}

int func_184(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_185(iParam0, 0);
}

int func_185(int iParam0, int iParam1)
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

int func_186(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_161(iParam0);
}

bool func_187()
{
	return Global_75693;
}

void func_188(char* sParam0, bool bParam1)
{
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return;
	}
	if (unk_0x57049FB1B412BAB7(sParam0) > 23)
	{
		return;
	}
	if (func_192(sParam0))
	{
		return;
	}
	func_56();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), unk_0x688846D56810779A(), 32);
	Global_1574757.f_9 = unk_0x14580F20CBCE4FA9(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_191();
	func_190(bParam1);
	func_189();
}

void func_189()
{
	unk_0xECDAB41968FF21A8(&(Global_1574757.f_59), true);
}

void func_190(bool bParam0)
{
	if (bParam0)
	{
		unk_0xECDAB41968FF21A8(&(Global_1574757.f_59), false);
		return;
	}
	unk_0x061B1200C95204CB(&(Global_1574757.f_59), false);
}

void func_191()
{
	Global_1574757.f_10 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), 86400000);
	Global_1574757.f_11 = unk_0x0DB7F8294D73598B();
}

bool func_192(char* sParam0)
{
	if (!func_61())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_193(sParam0);
	}
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return 0;
	}
	return unk_0x14580F20CBCE4FA9(sParam0) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_12));
}

bool func_193(char* sParam0)
{
	if (!func_61())
	{
		return 0;
	}
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return 0;
	}
	return unk_0x14580F20CBCE4FA9(sParam0) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_16));
}

int func_194(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1853910[iParam0 /*862*/].f_267.f_33 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
	{
		if (iParam2 == -1 || func_197(Global_2657589[iParam0 /*466*/].f_321.f_7) != iParam2)
		{
			if (bParam1)
			{
				return func_195(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_195(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_64())
	{
		return iParam0;
	}
	if (func_196(iParam0) != -1)
	{
		iVar0 = func_197(func_196(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_113(iParam0, 0))
			{
				return func_112(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_64();
		}
		return Global_2657589[iParam0 /*466*/].f_321.f_10;
	}
	return func_64();
}

int func_196(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_384(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
		else if (((Global_1575060 || Global_2635559.f_2680) && iParam0 == unk_0x93E99A2DBCBA9CFA()) && func_384(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
	}
	return -1;
}

int func_197(int iParam0)
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

var func_198()
{
	return Global_2646729.f_1869;
}

int func_199()
{
	return 1;
}

void func_200(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_212(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!iParam1 == Global_2624658[iVar0 /*46*/].f_8)
	{
		return;
	}
	if (!Global_2624658[iVar0 /*46*/].f_4 && Global_2624658[iVar0 /*46*/])
	{
		Global_2624658[iVar0 /*46*/].f_4 = 1;
		func_204();
	}
	func_201(iVar0);
}

void func_201(int iParam0)
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
	func_203(iVar0);
	Global_1665319 = (Global_1665319 - 1);
	if (Global_1665290)
	{
		if (Global_1665288 > 0)
		{
			func_202();
		}
	}
}

void func_202()
{
	Global_1665290 = 0;
}

void func_203(int iParam0)
{
	Global_2624658[iParam0 /*46*/] = 0;
	Global_2624658[iParam0 /*46*/].f_2 = 0;
	Global_2624658[iParam0 /*46*/].f_3 = 0;
	Global_2624658[iParam0 /*46*/].f_4 = 0;
	Global_2624658[iParam0 /*46*/].f_5 = func_64();
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

void func_204()
{
	Global_22788 = (Global_22788 - 1);
	if (Global_22788 < 0)
	{
		func_211("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_205();
}

void func_205()
{
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_210(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_206(1);
			func_210(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_206(int iParam0)
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
		if (func_209(14))
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
								func_208(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(iVar2);
								unk_0xAE3413B0654A0035();
							}
							if (Global_2694519)
							{
								if (iVar1 == 14)
								{
									func_207(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_207(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_207(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_207(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_207(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_208(&(Global_8260[iVar1 /*15*/]));
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
								func_208(&(Global_8260[iVar1 /*15*/]));
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
								func_208(&(Global_8260[iVar1 /*15*/]));
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
								func_208(&(Global_8260[iVar1 /*15*/]));
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
								func_208(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(42);
								unk_0xAE3413B0654A0035();
							}
							else if (Global_8260[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890001.f_1;
								func_207(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_207(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_207(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0x2AC37494BBF1DB16(uParam7))
	{
		func_208(sParam7);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam8))
	{
		func_208(iParam8);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam9))
	{
		func_208(iParam9);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam10))
	{
		func_208(iParam10);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam11))
	{
		func_208(iParam11);
	}
	unk_0xAE3413B0654A0035();
}

void func_208(var uParam0)
{
	unk_0x2AF11E92DE43CDE3(uParam0);
	unk_0xF8FCA9E7130CE1C8();
}

bool func_209(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_210(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_211(char* sParam0)
{
	if (Global_22788 != 0)
	{
		if (!unk_0x2AC37494BBF1DB16(sParam0))
		{
		}
		Global_22788 = 0;
	}
}

int func_212(int iParam0)
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

int func_213()
{
	if (!BitTest(uLocal_223, 17))
	{
		func_215(12, 116, "", 1, 0, 1, 0);
		unk_0xECDAB41968FF21A8(&uLocal_223, 17);
	}
	else if (!BitTest(uLocal_223, 18))
	{
		if (func_214(12, 116))
		{
			unk_0xECDAB41968FF21A8(&uLocal_223, 18);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_212(iParam0);
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
	func_201(iVar0);
	Global_2625824 = unk_0xA5E11AF0A2B928C1() + 1500;
	return 1;
}

void func_215(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_212(iParam0);
	if (bParam5)
	{
		if (iVar0 != -1)
		{
			func_201(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_216(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1, iParam4, iParam6);
}

void func_216(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)
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
	
	iVar0 = func_64();
	iVar1 = 145;
	if (bParam2)
	{
		iVar0 = unk_0xADCF72047FEB806E(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_222())
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
		Global_2624658[iVar4 /*46*/].f_9 = func_219();
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
	func_218();
	Global_2624658[iVar4 /*46*/].f_41 = 0;
	Global_2624658[iVar4 /*46*/].f_42 = 0;
	Global_2624658[iVar4 /*46*/].f_43 = 0;
	if (func_217())
	{
		if (bParam2)
		{
			bVar51 = true;
			if (bVar51)
			{
				Var52 = { func_152(iVar0) };
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

bool func_217()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
}

void func_218()
{
	Global_1665292 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), 30000);
}

int func_219()
{
	char cVar0[24];
	int iVar6;
	int iVar7;
	var uVar8;
	bool bVar9;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_221() };
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
				StringCopy(&cVar0, func_220(57, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_220(58, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_220(59, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_220(60, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_220(61, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_220(62, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_220(63, -1), 24);
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
	uVar8 = func_164(11941, -1, 0);
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

var func_220(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_2849799[iParam0 /*3*/][func_160(iParam1)];
	return unk_0x70EFC5B4D041081B(uVar0, -1);
}

struct<6> func_221()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	
	if (unk_0x2AC37494BBF1DB16(&(Global_1941268.f_10)))
	{
		iVar7 = func_164(11942, -1, 0);
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

bool func_222()
{
	return Global_1575018 == 10;
}

void func_223()
{
	var uVar0;
	
	uVar0 = Global_1665626[func_160(-1)];
	unk_0xECDAB41968FF21A8(&uVar0, 8);
	func_158(1304, uVar0, -1, 1);
}

void func_224(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2359296[func_225() /*5568*/].f_681.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_225() /*5568*/].f_681.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_225() /*5568*/].f_681.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_225() /*5568*/].f_681.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_225() /*5568*/].f_681.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_225() /*5568*/].f_681.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_225() /*5568*/].f_681.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_225() /*5568*/].f_681.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_225() /*5568*/].f_681.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_225() /*5568*/].f_681.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_225() /*5568*/].f_681.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_225() /*5568*/].f_681.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_225() /*5568*/].f_681.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_225() /*5568*/].f_681.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_225() /*5568*/].f_681.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_225() /*5568*/].f_681.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_225() /*5568*/].f_681.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_225() /*5568*/].f_681.f_30 = iVar0;
			break;
	}
}

int func_225()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_226()
{
	if (!BitTest(uLocal_223, 4))
	{
		if (!BitTest(uLocal_223, 8) || (BitTest(uLocal_223, 8) && func_38(&uLocal_226, 600000, 0)))
		{
			if (func_232(Local_85.f_5))
			{
				unk_0xECDAB41968FF21A8(&uLocal_223, 4);
				unk_0x061B1200C95204CB(&uLocal_223, 8);
			}
		}
	}
	else if (!func_231())
	{
		if (!BitTest(uLocal_223, 19))
		{
			if (func_230())
			{
				unk_0xECDAB41968FF21A8(&uLocal_223, 19);
			}
			else if (!func_229() && !func_227())
			{
				unk_0xECDAB41968FF21A8(&uLocal_223, 8);
				unk_0x061B1200C95204CB(&uLocal_223, 4);
				func_45(&uLocal_226, 0, 0);
				iLocal_222 = 0;
			}
		}
		else if (!func_227())
		{
			if (func_229())
			{
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		unk_0xECDAB41968FF21A8(&uLocal_223, 8);
		unk_0x061B1200C95204CB(&uLocal_223, 4);
		func_45(&uLocal_226, 0, 0);
		iLocal_222 = 0;
	}
	return 0;
}

bool func_227()
{
	return func_228();
}

bool func_228()
{
	return Global_1649046.f_40 == 3;
}

bool func_229()
{
	return Global_1649046.f_57.f_1;
}

int func_230()
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

int func_231()
{
	if (Global_22741)
	{
		return 1;
	}
	return 0;
}

int func_232(int iParam0)
{
	int iVar0;
	
	switch (iLocal_222)
	{
		case 0:
			if (func_343(0, 1, 1, 1))
			{
				if (!func_342(12, -1))
				{
					func_334(iParam0);
					iLocal_222++;
				}
			}
			break;
		
		case 1:
			iVar0 = func_333(iParam0);
			func_332(iParam0);
			if (func_233(&uLocal_243, iVar0, "FM_1AU", sLocal_408, 0, 0))
			{
				unk_0x061B1200C95204CB(&uLocal_223, 11);
				iLocal_222++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_233(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_330())
	{
		return 0;
	}
	if (func_329())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_234(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_234(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
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
	iVar1 = func_328(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x2AC37494BBF1DB16(sParam7))
	{
		iVar2 = unk_0x14580F20CBCE4FA9(sParam7);
	}
	if (func_327(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_322(uParam6))
	{
		return 0;
	}
	if (func_319(iVar0, iVar1, iVar2))
	{
		if (func_318())
		{
			return 0;
		}
		func_317();
		return func_241(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_240(iParam4))
	{
		return 0;
	}
	func_235(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_235(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1649046.f_40.f_1 = iParam0;
	Global_1649046.f_40.f_2 = iParam1;
	Global_1649046.f_40.f_3 = iParam2;
	StringCopy(&(Global_1649046.f_40.f_4), sParam3, 16);
	Global_1649046.f_40.f_8 = iParam4;
	Global_1649046.f_40.f_9 = iParam5;
	Global_1649046.f_40.f_14 = uParam6;
	func_236(iParam4);
	func_317();
	Global_1649046.f_40.f_13 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), 7000);
}

void func_236(int iParam0)
{
	if (func_239(iParam0))
	{
		func_238();
		return;
	}
	func_237();
}

void func_237()
{
	Global_1649046.f_40.f_10 = 0;
}

void func_238()
{
	Global_1649046.f_40.f_10 = 1;
}

int func_239(int iParam0)
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

bool func_240(int iParam0)
{
	return iParam0 > Global_1649046.f_40.f_8;
}

int func_241(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_316();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_313(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_310(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_313(uParam0, sParam3, sParam4);
		}
		return func_293(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_292(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_280(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_279(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_242(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_242(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_278();
	bVar0 = true;
	if (func_244(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_243(120000);
		return 1;
	}
	return 0;
}

void func_243(int iParam0)
{
	Global_1649046.f_40.f_11 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), iParam0);
	Global_1649046.f_40.f_12 = 1;
}

int func_244(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_64();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x1D25117F71EE3811(iVar0);
		iVar1 = func_272(iVar0);
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
	sVar4 = func_271(sParam5, bParam6, &iVar3);
	uVar5 = func_269(iParam7, &iVar3);
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
		bVar12 = func_268(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_248(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_247();
	}
	func_278();
	func_246();
	func_245();
	return 1;
}

void func_245()
{
	Global_1649046.f_57 = 0;
	Global_1649046.f_57.f_1 = 0;
}

void func_246()
{
	Global_1649046.f_40 = 3;
}

void func_247()
{
	unk_0xECDAB41968FF21A8(&Global_8253, 8);
}

int func_248(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_249(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_249(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x4310A0DB886F9FED(sParam14, sParam15))
	{
	}
	func_261();
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
	if (func_260() == 0)
	{
		func_258();
		return 0;
	}
	func_257(Global_4542281);
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
	func_261();
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
				func_256(0);
				break;
			
			case 1:
				func_256(1);
				break;
			
			case 2:
				func_256(2);
				break;
			
			case 3:
				func_256(3);
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
		func_261();
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
			if (!func_255())
			{
				unk_0x531D638530A8DB97(-1, "Text_Arrive_Tone", &Global_20372, 1);
			}
		}
	}
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_210(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_206(1);
			func_210(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1977527 != -1 && iParam0 == Global_1977527)
	{
		bVar1 = true;
	}
	func_250(iParam0, sParam1, bVar1, func_254(unk_0x93E99A2DBCBA9CFA()));
	return 1;
}

void func_250(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_251())
	{
		return;
	}
	unk_0xCC71BAE72F44A029(iParam0, -1180597171, unk_0x14580F20CBCE4FA9(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
	if (bParam2)
	{
		Global_1977527 = -1;
	}
}

int func_251()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_64())
	{
		return 0;
	}
	if (func_252(unk_0x93E99A2DBCBA9CFA()))
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

bool func_252(int iParam0)
{
	return func_253(iParam0, 20);
}

var func_253(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

var func_254(int iParam0)
{
	return Global_1853910[iParam0 /*862*/].f_205.f_6;
}

bool func_255()
{
	return Global_1575060;
}

void func_256(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113648.f_14053[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_257(int iParam0)
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

void func_258()
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
		if (!func_259(Global_4541032[iVar2 /*104*/].f_18, Global_4541032[Global_4542281 /*104*/].f_18))
		{
			Global_4542281 = iVar2;
		}
		iVar2++;
	}
	Global_4541032[Global_4542281 /*104*/].f_24 = 1;
}

int func_259(struct<6> Param0, struct<6> Param6)
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

int func_260()
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
			if (!func_259(Global_4541032[iVar2 /*104*/].f_18, Global_4541032[Global_4542281 /*104*/].f_18))
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

void func_261()
{
	if (func_209(14))
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
		Global_20383 = func_262();
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

var func_262()
{
	func_263();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_263()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_266(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_265(unk_0xC1A5EC5C986B98AD());
			if (func_264(iVar0) && (!func_209(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_264(Global_113648.f_2365.f_539.f_4321))
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

bool func_264(int iParam0)
{
	return iParam0 < 3;
}

int func_265(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_266(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_266(int iParam0)
{
	if (func_264(iParam0))
	{
		return func_267(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_267(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

int func_268(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_249(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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

int func_269(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_270(2, iParam1);
	return iParam0;
}

void func_270(int iParam0, var uParam1)
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

char* func_271(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x4310A0DB886F9FED(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_270(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x45816CECE89B5B19(sParam0);
}

int func_272(int iParam0)
{
	int iVar0;
	
	iVar0 = func_275(iParam0);
	if (iVar0 == -1)
	{
		func_273(iParam0, 1);
		return 0;
	}
	Global_1666668[iVar0 /*5*/].f_4 = 1;
	return Global_1666668[iVar0 /*5*/].f_2;
}

void func_273(int iParam0, bool bParam1)
{
	if (!func_384(iParam0, 0, 1))
	{
		return;
	}
	if (func_275(iParam0) != -1)
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
	if (func_274(iParam0))
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

int func_274(int iParam0)
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

int func_275(int iParam0)
{
	int iVar0;
	
	if (!func_384(iParam0, 0, 1))
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
			func_276(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_276(int iParam0)
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
	func_277(&(Global_1666668[iVar32 /*5*/]));
	Global_1666829 = (Global_1666829 - 1);
}

void func_277(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_64();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA26A9A07F761D8F8())
	{
		uParam0->f_3 = unk_0x0DB7F8294D73598B();
	}
}

void func_278()
{
	Global_1649046.f_40.f_9 = 4;
}

int func_279(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_278();
	bVar0 = false;
	return func_244(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_280(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_281(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_281(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_64();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x1D25117F71EE3811(iVar0);
		iVar1 = func_272(iVar0);
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
	sVar4 = func_271(sParam5, bParam6, &iVar3);
	uVar5 = func_269(iParam7, &iVar3);
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
		bVar12 = func_291(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_283(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_247();
	}
	func_282();
	func_246();
	func_245();
	return 1;
}

void func_282()
{
	Global_1649046.f_40.f_9 = 3;
}

int func_283(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_285(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8960 = iParam6;
			Global_8863[3 /*6*/] = { func_284(iParam0) };
			Global_8940 = iParam0;
			unk_0xECDAB41968FF21A8(&Global_8253, true);
			unk_0xECDAB41968FF21A8(&Global_8253, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_284(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_3;
}

int func_285(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x4310A0DB886F9FED(sParam14, sParam15))
	{
	}
	func_261();
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
	if (func_290() == 0)
	{
		func_288();
		return 0;
	}
	func_287(Global_22792);
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
		func_256(0);
		func_256(2);
		func_256(1);
	}
	else
	{
		func_261();
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
					func_256(0);
					Global_8959 = 0;
					break;
				
				case 1:
					func_256(1);
					Global_8959 = 1;
					break;
				
				case 2:
					func_256(2);
					Global_8959 = 2;
					break;
				
				case 3:
					func_256(3);
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
		func_261();
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
			if (!func_255())
			{
				unk_0x531D638530A8DB97(-1, "Text_Arrive_Tone", &Global_20372, 1);
			}
		}
	}
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_210(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_206(1);
			func_210(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1977527 != -1 && iParam0 == Global_1977527)
	{
		bVar1 = true;
	}
	func_286(iParam0, sParam1, bVar1, func_254(unk_0x93E99A2DBCBA9CFA()));
	return 1;
}

void func_286(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_251())
	{
		return;
	}
	unk_0xCC71BAE72F44A029(iParam0, 1654525105, unk_0x14580F20CBCE4FA9(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
	if (bParam2)
	{
		Global_1977527 = -1;
	}
}

void func_287(int iParam0)
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

void func_288()
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
		if (!func_289(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18))
		{
			Global_22792 = iVar2;
		}
		iVar2++;
	}
	Global_113648.f_14143[Global_22792 /*104*/].f_24 = 1;
}

int func_289(struct<6> Param0, struct<6> Param6)
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

int func_290()
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
			if (!func_289(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18))
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

int func_291(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_285(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8960 = iParam10;
			Global_8863[3 /*6*/] = { func_284(iParam0) };
			Global_8940 = iParam0;
			StringCopy(&Global_8941, sParam5, 64);
			unk_0xECDAB41968FF21A8(&Global_8253, true);
			unk_0xECDAB41968FF21A8(&Global_8253, 7);
		}
		return 1;
	}
	return 0;
}

int func_292(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
	}
	if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
	{
		return 0;
	}
	func_282();
	bVar0 = true;
	if (func_281(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_243(120000);
		return 1;
	}
	return 0;
}

int func_293(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
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
		bVar0 = func_309(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_299(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_298(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_297(1);
		}
		func_296();
		func_246();
		func_295();
		func_294();
		return 1;
	}
	return 0;
}

void func_294()
{
	Global_2803162 = 0;
}

void func_295()
{
	Global_1649046.f_57 = 1;
	Global_1649046.f_57.f_1 = 0;
}

void func_296()
{
	Global_1649046.f_40.f_9 = 1;
}

void func_297(int iParam0)
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

void func_298(int iParam0)
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

int func_299(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_308(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_300(sParam3, iParam4, bParam7);
}

int func_300(char* sParam0, int iParam1, bool bParam2)
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
					func_307();
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
		if (func_342(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_306();
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
				func_261();
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
				if (func_305())
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
			if (func_304())
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
			func_303();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_302();
		func_301();
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
		func_307();
	}
	return 0;
}

void func_301()
{
	if (!func_251())
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

void func_302()
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

void func_303()
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

int func_304()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_305()
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

void func_306()
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

void func_307()
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

void func_308(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_309(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_308(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_300(sParam3, iParam4, bParam7);
}

int func_310(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
	}
	if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
	{
		return 0;
	}
	if (func_312(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_311();
		func_296();
		func_246();
		func_295();
		func_294();
		return 1;
	}
	return 0;
}

void func_311()
{
	Global_22743 = 0;
}

bool func_312(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_308(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_300(sParam3, iParam4, bParam8);
}

int func_313(var uParam0, char* sParam1, char* sParam2)
{
	if (func_315(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_314();
		func_246();
		func_295();
		return 1;
	}
	return 0;
}

void func_314()
{
	Global_1649046.f_40.f_9 = 2;
}

bool func_315(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_308(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_300(sParam2, iParam3, 0);
}

void func_316()
{
	Global_1649046.f_55 = Global_1649046.f_40.f_1;
	Global_1649046.f_55.f_1 = Global_1649046.f_40.f_10;
}

void func_317()
{
	Global_1649046.f_40 = 1;
}

bool func_318()
{
	return Global_1649046.f_40 == 1;
}

int func_319(int iParam0, int iParam1, int iParam2)
{
	if (!func_320(iParam0))
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

int func_320(int iParam0)
{
	if (!func_321())
	{
		return 0;
	}
	if (!Global_1649046.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_321()
{
	if (Global_1649046.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_322(var uParam0)
{
	if (func_326())
	{
		return 0;
	}
	if (func_228())
	{
		return 0;
	}
	if (func_325(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1935176 || func_324())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_323())
		{
			return 0;
		}
	}
	return 1;
}

bool func_323()
{
	return unk_0xF8CFDD89447316E5(unk_0x0DB7F8294D73598B(), Global_1665292);
}

int func_324()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_325(int iParam0)
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

bool func_326()
{
	return func_304();
}

int func_327(int iParam0, int iParam1, int iParam2)
{
	if (!func_228())
	{
		return 0;
	}
	return func_319(iParam0, iParam1, iParam2);
}

int func_328(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x14580F20CBCE4FA9(&cVar0);
}

bool func_329()
{
	return Global_2800023.f_1;
}

int func_330()
{
	if (Global_1649234.f_2)
	{
		return 1;
	}
	return func_331();
}

bool func_331()
{
	return func_326();
}

void func_332(int iParam0)
{
	if (!BitTest(uLocal_223, 11))
	{
		switch (iParam0)
		{
			case 0:
				sLocal_408 = "FMA_KIL1";
				unk_0xECDAB41968FF21A8(&uLocal_223, 11);
				break;
			}
	}
}

int func_333(int iParam0)
{
	int iVar0;
	
	iVar0 = 144;
	switch (iParam0)
	{
		case 0:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_334(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_336(12, 3, 0);
			func_335(&uLocal_243, 1, 0, "Lester", 0, 1);
			break;
	}
}

void func_335(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_336(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8939 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		func_261();
		if (iParam1 == 4)
		{
			func_341(iParam0, 0, 1);
			func_341(iParam0, 1, 1);
			func_341(iParam0, 2, 1);
			func_340(iParam0, 0, 1);
			func_340(iParam0, 1, 1);
			func_340(iParam0, 2, 1);
		}
		else
		{
			if (func_339(iParam0, iParam1) == 1 && func_338(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_341(iParam0, iVar0, 1);
			func_340(iParam0, iVar0, 1);
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
						Global_8912[iParam1 /*4*/] = { func_284(iParam0) };
						Global_8929[iParam1] = 1;
						Global_8934[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20383)
					{
					}
					else
					{
						Global_8863[1 /*6*/] = { func_284(iParam0) };
						Global_8863[1 /*6*/].f_5 = iParam1;
						func_337();
					}
				}
				else
				{
					Global_8863[1 /*6*/] = { func_284(iParam0) };
					Global_8863[1 /*6*/].f_5 = iParam1;
					func_337();
				}
			}
			else
			{
				Global_8863[1 /*6*/] = { func_284(iParam0) };
				Global_8863[1 /*6*/].f_5 = iParam1;
				func_337();
			}
		}
	}
}

void func_337()
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

int func_338(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

int func_339(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_12[iParam1];
}

void func_340(int iParam0, int iParam1, int iParam2)
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

void func_341(int iParam0, int iParam1, int iParam2)
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

bool func_342(int iParam0, int iParam1)
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

int func_343(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xF0E4B64AC0B5660E())
	{
		return 0;
	}
	if (func_349())
	{
		return 0;
	}
	if (!unk_0x35DF833D93BCC488())
	{
		return 0;
	}
	if (func_348())
	{
		return 0;
	}
	if (func_358())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_51(unk_0x93E99A2DBCBA9CFA(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_50(unk_0x93E99A2DBCBA9CFA()))
		{
			return 0;
		}
	}
	if (func_347())
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
	if (func_346())
	{
		return 0;
	}
	if (func_345())
	{
		return 0;
	}
	if (func_356())
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
	if (func_344())
	{
		return 0;
	}
	return 1;
}

bool func_344()
{
	return Global_2764905;
}

bool func_345()
{
	return Global_2683862.f_691;
}

bool func_346()
{
	return Global_2683862.f_845;
}

bool func_347()
{
	return Global_2672505.f_2837.f_582;
}

bool func_348()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

int func_349()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

int func_350()
{
	var uVar0;
	
	uVar0 = Global_1665626[func_160(-1)];
	if (BitTest(uVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x5E6D8811A0BD0954(Local_85.f_12[0]))
			{
				Global_2672505.f_3560.f_1[0] = unk_0x972B1BFB16AD20B5(Local_85.f_12[0]);
			}
			if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
			{
				Global_2672505.f_3560.f_4[0] = unk_0x0DB8386015E986B7(Local_85.f_9[0]);
			}
			break;
	}
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x5E6D8811A0BD0954(Local_85.f_12[0]) && unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_353(bool bParam0, bool bParam1)
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

int func_354(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_355())
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

bool func_355()
{
	return BitTest(Global_2621446, 3);
}

bool func_356()
{
	return Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_192 != 0;
}

int func_357()
{
	return Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_193;
}

bool func_358()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 0);
}

void func_359(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 548471420;
	Param0.f_1 = unk_0x93E99A2DBCBA9CFA();
	if (!iParam14 == 0)
	{
		unk_0x46F55A5B9F053761(1, &Param0, 14, iParam14);
	}
}

int func_360(int iParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar1)))
		{
			bVar2 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iVar1));
			if (func_384(bVar2, 0, 0))
			{
				if (bVar2 != unk_0x93E99A2DBCBA9CFA() || iParam0)
				{
					unk_0xECDAB41968FF21A8(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_361()
{
	if (Local_124[unk_0xD378D2332270959A() /*3*/].f_2 >= 5 && Local_124[unk_0xD378D2332270959A() /*3*/].f_2 < 6)
	{
		if (BitTest(Local_85.f_0, 4))
		{
			if (!BitTest(uLocal_223, 3))
			{
				if (func_384(Local_85.f_8, 0, 1))
				{
					func_362("FM_TGDM_KIL", Local_85.f_8, 0, 0, 0, 1, 0);
				}
				unk_0xECDAB41968FF21A8(&uLocal_223, 3);
			}
		}
	}
}

int func_362(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
				unk_0x35451336B8B420D6(func_124(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x35451336B8B420D6(func_91(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x35451336B8B420D6(func_91(iParam1, -2, 1, 0, 0));
		}
		unk_0x76B34CBB6F5FA1BB(func_89(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xEAFC6135DF75DE92(0, 1);
		}
		else
		{
			Global_2764201 = { func_152(iParam1) };
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
						Var2 = { func_363(&Var2) };
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
		func_85(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_363(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_364()
{
	int iVar0;
	
	iVar0 = unk_0xD378D2332270959A();
	if (iLocal_233 != Local_85.f_15)
	{
		iLocal_233 = Local_85.f_15;
		unk_0x08914D2D4A110A6F(iLocal_233);
	}
	if (iLocal_234 != Local_85.f_16)
	{
		iLocal_234 = Local_85.f_16;
		unk_0xE5CBFFB5DE87586F(iLocal_234);
	}
	if (func_384(unk_0x93E99A2DBCBA9CFA(), 0, 1))
	{
		if (!BitTest(Local_124[iVar0 /*3*/], 0))
		{
			if (Local_124[unk_0xD378D2332270959A() /*3*/].f_2 == 0)
			{
				if (func_357() == 0)
				{
					unk_0xECDAB41968FF21A8(&(Local_124[iVar0 /*3*/]), false);
				}
			}
		}
		else if (BitTest(Local_124[iVar0 /*3*/], 0))
		{
			if ((func_51(unk_0x93E99A2DBCBA9CFA(), 1, 0) || func_48(unk_0x93E99A2DBCBA9CFA())) || func_357() > 0)
			{
				func_42(&uLocal_224);
				unk_0x061B1200C95204CB(&(Local_124[iVar0 /*3*/]), false);
			}
			else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
				{
					if (!BitTest(uLocal_223, 7))
					{
						unk_0xECDAB41968FF21A8(&uLocal_223, 7);
						func_372();
					}
				}
				else if (BitTest(uLocal_223, 7))
				{
					unk_0x061B1200C95204CB(&uLocal_223, 7);
					if (!func_49(unk_0x93E99A2DBCBA9CFA(), 0))
					{
						func_370();
					}
				}
			}
		}
		if (!BitTest(Local_124[iVar0 /*3*/], 3))
		{
			if (Local_124[unk_0xD378D2332270959A() /*3*/].f_2 > 3 && Local_124[unk_0xD378D2332270959A() /*3*/].f_2 < 6)
			{
				if (BitTest(Global_2672505.f_3560, 1))
				{
					unk_0xECDAB41968FF21A8(&(Local_124[iVar0 /*3*/]), 3);
				}
			}
		}
		if (Local_124[unk_0xD378D2332270959A() /*3*/].f_2 > 3)
		{
			if (!BitTest(Local_124[unk_0xD378D2332270959A() /*3*/], 5))
			{
				if (func_369(Local_85.f_5))
				{
					unk_0xECDAB41968FF21A8(&(Local_124[unk_0xD378D2332270959A() /*3*/]), 5);
				}
			}
			else if (!func_369(Local_85.f_5))
			{
				unk_0x061B1200C95204CB(&(Local_124[unk_0xD378D2332270959A() /*3*/]), 5);
			}
			if (!BitTest(Local_124[unk_0xD378D2332270959A() /*3*/], 6))
			{
				if (func_366(Local_85.f_5))
				{
					unk_0xECDAB41968FF21A8(&(Local_124[unk_0xD378D2332270959A() /*3*/]), 6);
				}
			}
			if (!BitTest(Local_124[unk_0xD378D2332270959A() /*3*/], 8))
			{
				if (func_365())
				{
					unk_0xECDAB41968FF21A8(&(Local_124[unk_0xD378D2332270959A() /*3*/]), 8);
				}
			}
		}
		if (!BitTest(uLocal_223, 13))
		{
			if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
			{
				if (!func_40(Local_85.f_9[0]))
				{
					unk_0xB0F23B683F51C9F0(unk_0x0DB8386015E986B7(Local_85.f_9[0]), 1, 0);
					unk_0xECDAB41968FF21A8(&uLocal_223, 13);
				}
			}
		}
	}
}

int func_365()
{
	if (unk_0x5E6D8811A0BD0954(Local_85.f_12[0]))
	{
		if (func_9(Local_85.f_12[0]))
		{
			if (unk_0x248929CB6622481D(unk_0x972B1BFB16AD20B5(Local_85.f_12[0]), 0, 7000) || unk_0x248929CB6622481D(unk_0x972B1BFB16AD20B5(Local_85.f_12[0]), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
			{
				if (!func_40(Local_85.f_9[0]))
				{
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						if (func_367(unk_0x0DB8386015E986B7(Local_85.f_9[0])))
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_367(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), uParam0))
	{
		return 1;
	}
	if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), uParam0))
	{
		return 1;
	}
	if (func_368())
	{
		if (unk_0x005E10EF94E1E6A5(unk_0x93E99A2DBCBA9CFA(), &uVar0))
		{
			if (unk_0x71904BD37B848CAF(uVar0))
			{
				uVar1 = unk_0x9C8D7679C15E75FF(uVar0);
				if (unk_0x7DE17ACDD8BA2642(uVar1))
				{
					if (!unk_0x055111B11E6624FD(iVar1, 0))
					{
						if (unk_0x3C3D6D026CF7F51B(iVar1, 0))
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

bool func_368()
{
	return Global_1836590;
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
			{
				if (!func_40(Local_85.f_9[0]))
				{
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(unk_0x0DB8386015E986B7(Local_85.f_9[0]), 1)) < 40000f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_370()
{
	if (!Global_1574747)
	{
		return;
	}
	func_371();
}

void func_371()
{
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
}

void func_372()
{
	Global_1574747 = 1;
	StringCopy(&(Global_1574747.f_1), unk_0x688846D56810779A(), 32);
	Global_1574747.f_9 = unk_0x14580F20CBCE4FA9(&(Global_1574747.f_1));
}

void func_373()
{
	switch (Local_85.f_6)
	{
		case 1:
			if (unk_0xE85391CF212DE622())
			{
				if (unk_0x5E6D8811A0BD0954(Local_85.f_12[0]))
				{
					if (func_9(Local_85.f_12[0]))
					{
						if (!func_40(Local_85.f_9[0]))
						{
							if (unk_0x44A6C9475C859B45(unk_0x0DB8386015E986B7(Local_85.f_9[0]), unk_0x972B1BFB16AD20B5(Local_85.f_12[0])))
							{
								if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_9[0]), joaat("script_task_vehicle_drive_wander")) != 1 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_9[0]), joaat("script_task_vehicle_drive_wander")) != 0)
								{
									unk_0xA6B22576A5268171(unk_0x0DB8386015E986B7(Local_85.f_9[0]), unk_0x972B1BFB16AD20B5(Local_85.f_12[0]), 20f, 786603);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xE85391CF212DE622())
			{
				if (unk_0x5E6D8811A0BD0954(Local_85.f_12[0]))
				{
					if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
					{
						if (func_9(Local_85.f_12[0]))
						{
							if (!func_40(Local_85.f_9[0]))
							{
								if (unk_0x44A6C9475C859B45(unk_0x0DB8386015E986B7(Local_85.f_9[0]), unk_0x972B1BFB16AD20B5(Local_85.f_12[0])))
								{
									if ((unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_9[0]), joaat("script_task_vehicle_drive_wander")) != 1 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_9[0]), joaat("script_task_vehicle_drive_wander")) != 0) || BitTest(Local_85.f_0, 9))
									{
										unk_0xA6B22576A5268171(unk_0x0DB8386015E986B7(Local_85.f_9[0]), unk_0x972B1BFB16AD20B5(Local_85.f_12[0]), 30f, 786469);
										if (BitTest(Local_85.f_0, 9))
										{
											unk_0x061B1200C95204CB(&Local_85, 9);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
			{
				if (!func_40(Local_85.f_9[0]))
				{
					if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_9[0]), joaat("script_task_leave_any_vehicle")) != 1 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_9[0]), joaat("script_task_leave_any_vehicle")) != 0)
					{
						if (func_377(Local_85.f_9[0]))
						{
							if (unk_0xFE2AB315FD8C7A6F(Local_85.f_9[0]))
							{
								unk_0x6FE9A0C01D25F413(unk_0x0DB8386015E986B7(Local_85.f_9[0]), 0, 0);
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
			{
				if (!func_40(Local_85.f_9[0]))
				{
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_9[0]), joaat("script_task_smart_flee_ped")) != 1 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_9[0]), joaat("script_task_smart_flee_ped")) != 0)
						{
							if (func_377(Local_85.f_9[0]))
							{
								if (unk_0xFE2AB315FD8C7A6F(Local_85.f_9[0]))
								{
									unk_0xC6C9BF71106ABCAC(unk_0x0DB8386015E986B7(Local_85.f_9[0]), unk_0xC1A5EC5C986B98AD(), 500f, -1, 0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (unk_0x5E6D8811A0BD0954(Local_85.f_9[0]))
	{
		if ((Local_124[unk_0xD378D2332270959A() /*3*/].f_2 >= 5 && Local_124[unk_0xD378D2332270959A() /*3*/].f_2 < 6) && !func_194(unk_0x93E99A2DBCBA9CFA(), 0, -1))
		{
			func_374(Local_85.f_9[0], &Local_235, -1082130432, 0, 1, 0, 0, -1, -1, 1, 0, 0);
		}
		else
		{
			func_62(&Local_235);
		}
	}
}

void func_374(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11)
{
	if (unk_0x7E2E2E8A648611F4(uParam0))
	{
		if (func_376(0))
		{
			Global_2672505 = unk_0x93E99A2DBCBA9CFA();
		}
		if (bParam3)
		{
			func_375(unk_0x0DB8386015E986B7(uParam0), uParam1, 1, Global_2672505, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
		else
		{
			func_375(unk_0x0DB8386015E986B7(uParam0), uParam1, -1, Global_2672505, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
	}
	else if (unk_0xCE4AAA035282336C(*uParam1))
	{
		func_62(uParam1);
	}
}

int func_375(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12)
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

bool func_376(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

int func_377(var uParam0)
{
	if (unk_0xDD2D9A241E18E942(uParam0))
	{
		return 1;
	}
	if (func_378(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_378(var uParam0)
{
	if (!unk_0xE85391CF212DE622())
	{
		return 0;
	}
	if (!unk_0x5E6D8811A0BD0954(uParam0))
	{
		return 0;
	}
	if (func_379(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_379(var uParam0)
{
	if (unk_0x7E2E2E8A648611F4(uParam0))
	{
		unk_0xF05A5F7FFA0C5E2D(uParam0);
		return unk_0xFE2AB315FD8C7A6F(uParam0);
	}
	return 0;
}

int func_380()
{
	return Local_85.f_1;
}

int func_381(int iParam0)
{
	return Local_124[iParam0 /*3*/].f_1;
}

void func_382()
{
	func_55();
	func_353(11, 0);
	func_200(12, 116);
	unk_0x061B1200C95204CB(&(Global_2672505.f_3560), false);
	unk_0x061B1200C95204CB(&(Global_2672505.f_3560), true);
	if (unk_0xA26A9A07F761D8F8())
	{
		if (unk_0xD378D2332270959A() > -1)
		{
			Local_124[unk_0xD378D2332270959A() /*3*/] = 0;
		}
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		if (unk_0xE85391CF212DE622())
		{
			if (unk_0x44F576187FB1916E(Local_85.f_3))
			{
				unk_0x76FB1A3801008C0D(Local_85.f_3);
			}
			Local_85.f_3 = -1;
		}
	}
	if (unk_0xCE4AAA035282336C(Global_1935145))
	{
		unk_0x45533C09A6C9B409(&Global_1935145);
	}
	unk_0x061B1200C95204CB(&uLocal_223, 3);
	unk_0x061B1200C95204CB(&uLocal_223, 4);
	iLocal_222 = 0;
	if (unk_0xCE4AAA035282336C(Local_235.f_0))
	{
		unk_0x45533C09A6C9B409(&Local_235);
	}
	func_383();
}

void func_383()
{
	unk_0x675D9C12C73D3DE7();
}

int func_384(int iParam0, bool bParam1, bool bParam2)
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

int func_385()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 1;
		}
	}
	if (func_392())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_391())
	{
		return 1;
	}
	if (func_390(159))
	{
		if (!func_389())
		{
			return 1;
		}
	}
	if (func_390(157))
	{
		return 1;
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 1;
	}
	if (func_386() != 0)
	{
		if (unk_0x24B651D85CCE5EB4(func_386()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_386()
{
	switch (func_388())
	{
		case 0:
			return func_387();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_387()
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_388()
{
	return Global_32163;
}

bool func_389()
{
	return Global_2683862.f_698;
}

int func_390(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_391()
{
	return Global_2694524;
}

bool func_392()
{
	return Global_2683862.f_693;
}

void func_393()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_394(struct<21> Param0)
{
	func_397(func_398(Param0.f_0), Param0);
	func_396(0, -1, 0);
	unk_0xAC5E62CB7808A363(&Local_85, 23, 0);
	unk_0x10BF12101F9D80A4(&Local_124, 97, 0);
	unk_0xF1440897111F3111(0);
	if (!func_395())
	{
		func_382();
	}
	unk_0xECDAB41968FF21A8(&(Global_2672505.f_3560), false);
	unk_0x061B1200C95204CB(&(Global_2672505.f_3560), true);
}

int func_395()
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
		if (func_392())
		{
			return 0;
		}
		if (func_390(157))
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

int func_396(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xA1089192E8AE61F4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_383();
			}
			else
			{
				return 0;
			}
		}
		if (!func_376(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
				{
					if (!bParam2)
					{
						func_383();
					}
					else
					{
						return 0;
					}
				}
				if (func_392())
				{
					if (!bParam2)
					{
						func_383();
					}
					else
					{
						return 0;
					}
				}
				if (func_390(157))
				{
					if (!bParam2)
					{
						func_383();
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
					func_383();
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
				func_383();
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
			func_383();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_397(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		func_383();
	}
	unk_0xCF50389093DECE87(uParam0, 0, Param1.f_16);
}

int func_398(int iParam0)
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
	switch (func_399(func_400(iParam0, 1)))
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

int func_399(int iParam0)
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

int func_400(int iParam0, bool bParam1)
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

