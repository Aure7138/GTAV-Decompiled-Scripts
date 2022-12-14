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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_43[2] = { 0, 0 };
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
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
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96[2] = { 0, 0 };
	int iLocal_99[2] = { 0, 0 };
	int iLocal_102[2] = { 0, 0 };
	int iLocal_105[2] = { 0, 0 };
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	struct<3> Local_116 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_125[2];
	struct<3> Local_132 = { 0, 0, 0 } ;
	float fLocal_135 = 0f;
	char* sLocal_136 = NULL;
	var uLocal_137 = 16;
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
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
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
	var uLocal_203 = 0;
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
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_330[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_338 = 0;
	int iLocal_339[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_347[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_355[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_363[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_371[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_379[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404[2] = { 0, 0 };
	int iLocal_407[2] = { 0, 0 };
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433[2] = { 0, 0 };
	int iLocal_436[2] = { 0, 0 };
	int iLocal_439[2] = { 0, 0 };
	int iLocal_442[2] = { 0, 0 };
	int iLocal_445[2] = { 0, 0 };
	int iLocal_448[2] = { 0, 0 };
	int iLocal_451[2] = { 0, 0 };
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459[2] = { 0, 0 };
	int iLocal_462[2] = { 0, 0 };
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484[2] = { 0, 0 };
	int iLocal_487 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	Local_116 = { 27.7189f, -608.7927f, 30.6293f };
	Local_132 = { 903.1f, -1548.8f, 29.8f };
	fLocal_135 = 0f;
	if (unk_0x4B34601C5C56F3EE(3))
	{
		unk_0x1CF3F44FC2EB9F99("FHPRB_STOP");
		func_221();
		func_220();
	}
	if (func_219(0))
	{
		unk_0x249A0D3C5714BCF4("FINPRB", 0);
	}
	unk_0xD642E010A287ADFD("WorkerPedMainGroup", &iLocal_302);
	unk_0xD642E010A287ADFD("GuardMainGroup", &iLocal_303);
	unk_0x7CD708DEB04F8474(joaat("packer"), 1);
	unk_0x9972EFADA7A2A47D(5, iLocal_303, joaat("player"));
	unk_0x9972EFADA7A2A47D(5, iLocal_302, joaat("player"));
	unk_0x9972EFADA7A2A47D(1, iLocal_303, iLocal_302);
	unk_0x9972EFADA7A2A47D(1, iLocal_302, iLocal_303);
	unk_0x9972EFADA7A2A47D(1, iLocal_303, joaat("COP"));
	unk_0x9972EFADA7A2A47D(1, joaat("COP"), iLocal_303);
	unk_0x9972EFADA7A2A47D(1, iLocal_302, joaat("COP"));
	unk_0x9972EFADA7A2A47D(1, joaat("COP"), iLocal_302);
	while (true)
	{
		unk_0x6D3F703013ED87D3("M_FINPRB", 0);
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 230, 0);
		}
		func_217();
		if (iLocal_317 == 0)
		{
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
			{
				func_216(27, 1);
				iLocal_317 = 1;
			}
		}
		if (iLocal_396 == 1)
		{
			func_212();
		}
		func_209();
		func_202();
		func_194();
		func_189();
		func_186();
		switch (iLocal_28)
		{
			case 0:
				func_185();
				break;
			
			case 1:
				func_182();
				break;
			
			case 2:
				func_158();
				break;
			
			case 3:
				func_156();
				break;
			
			case 4:
				func_128();
				break;
			
			case 5:
				func_21();
				break;
			
			case 6:
				func_1();
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_62)
	{
		case 0:
			unk_0xBA6C3C5E9E5A9442();
			unk_0x3410421C60BF7143(1);
			unk_0x1CF3F44FC2EB9F99("FHPRA_FAIL");
			switch (iLocal_30)
			{
				case 0:
					break;
				
				case 4:
					sLocal_136 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_136 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_136 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_136 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_136 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_136 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_136 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_136 = "FPB_FAIL11";
					break;
			}
			if (iLocal_30 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_136);
			}
			iLocal_62 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_220();
			}
			break;
	}
}

int func_2()
{
	if (Global_100441 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100441 == 7 || Global_100441 == 8)
	{
		return 1;
	}
	return 0;
}

void func_4(char* sParam0)
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)
{
	if (!unk_0xACC32B78196FBC2A(sParam0))
	{
		if (unk_0xEE91150B7F06C500(sParam0) <= 16)
		{
			StringCopy(&Global_78551, sParam0, 16);
			StringCopy(&Global_78555, "", 16);
			if (unk_0x6C85295E4E1FB8B3())
			{
				unk_0x0FCCD6087693AA00();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_113386.f_9085 || func_219(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		unk_0xCED9E32812D6C7C7(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		unk_0x3B97C4414E778C45(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	unk_0xA131CC850DA50CF0(unk_0x9E2D6C50374FCFA9(), 0);
	unk_0xC204033758E4127F(unk_0x9E2D6C50374FCFA9(), 0);
	func_8(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x3E49EF84C421E367(0);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_10(Global_113386.f_18533[iVar0], &Var2, &fVar5))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_9(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_9(var uParam0)
{
	*uParam0 = -15;
}

int func_10(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94426[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94426[iParam0 /*2*/] = 0;
	}
}

void func_12()
{
	Global_100476 = 1;
	if (unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1))
	{
		if (unk_0xACC32B78196FBC2A(&Global_78551))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
	}
	else if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xACC32B78196FBC2A(&Global_78551))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
		unk_0xCED9E32812D6C7C7(&(Global_100441.f_20), 25);
	}
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_14()
{
	func_15();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_19(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_18(unk_0xE2D3D51028F0428A());
			if (func_17(iVar0) && (!func_16(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_17(Global_113386.f_2363.f_539.f_4321))
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

bool func_16(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_21()
{
	func_186();
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_35();
			iLocal_304 = 0;
		}
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
		if (func_34(iLocal_46, 0))
		{
			if (!func_33(iLocal_46))
			{
				while (!func_32(iLocal_46, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		if (func_34(iLocal_48, 0))
		{
			if (!func_33(iLocal_48))
			{
				while (!func_32(iLocal_48, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		if (func_34(iLocal_47, 0))
		{
			if (!func_33(iLocal_47))
			{
				while (!func_32(iLocal_47, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		if (unk_0xA829C9A2767AC8EF())
		{
			if (!func_31())
			{
				unk_0x42C4310E76AD635A(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1));
			}
			func_28(iLocal_33, -1, 1);
		}
		if (!unk_0xE9E8955A780DDA01())
		{
			unk_0x5A7ACD1CDF509B0D(800);
		}
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_33))
		{
			if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
			{
				if (func_14() == 0)
				{
					if (func_34(iLocal_48, 0))
					{
						if (unk_0xF6F5D18EF8EAB859(iLocal_48, iLocal_33, 0))
						{
							unk_0x03A927199A2DFE46(iLocal_48);
							unk_0x6221A52631154EF7(iLocal_48);
							unk_0x50274A7EACA3133A(iLocal_48, 1);
							unk_0x02F1CAAC7CB77E47(iLocal_48, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_47, 0))
					{
						if (unk_0xF6F5D18EF8EAB859(iLocal_47, iLocal_33, 0))
						{
							unk_0x03A927199A2DFE46(iLocal_47);
							unk_0x6221A52631154EF7(iLocal_47);
							unk_0x50274A7EACA3133A(iLocal_47, 1);
							unk_0x02F1CAAC7CB77E47(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_34(iLocal_46, 0))
					{
						if (unk_0xF6F5D18EF8EAB859(iLocal_46, iLocal_33, 0))
						{
							unk_0x03A927199A2DFE46(iLocal_46);
							unk_0x6221A52631154EF7(iLocal_46);
							unk_0x50274A7EACA3133A(iLocal_46, 1);
							unk_0x02F1CAAC7CB77E47(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_47, 0))
					{
						if (unk_0xF6F5D18EF8EAB859(iLocal_47, iLocal_33, 0))
						{
							unk_0x03A927199A2DFE46(iLocal_47);
							unk_0x6221A52631154EF7(iLocal_47);
							unk_0x50274A7EACA3133A(iLocal_47, 1);
							unk_0x02F1CAAC7CB77E47(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_34(iLocal_46, 0))
					{
						if (unk_0xF6F5D18EF8EAB859(iLocal_46, iLocal_33, 0))
						{
							unk_0x03A927199A2DFE46(iLocal_46);
							unk_0x6221A52631154EF7(iLocal_46);
							unk_0x50274A7EACA3133A(iLocal_46, 1);
							unk_0x02F1CAAC7CB77E47(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_48, 0))
					{
						if (unk_0xF6F5D18EF8EAB859(iLocal_48, iLocal_33, 0))
						{
							unk_0x03A927199A2DFE46(iLocal_48);
							unk_0x6221A52631154EF7(iLocal_48);
							unk_0x50274A7EACA3133A(iLocal_48, 1);
							unk_0x02F1CAAC7CB77E47(iLocal_48, iLocal_33, 0);
						}
					}
				}
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_33, 0))
				{
					unk_0x02F1CAAC7CB77E47(unk_0xE2D3D51028F0428A(), iLocal_33, 0);
				}
			}
		}
		unk_0x5AE11BC36633DE4E(0);
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_33))
		{
			if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
			{
				if (iLocal_320 == 0)
				{
					if (func_14() == 0)
					{
						if (func_34(iLocal_48, 0))
						{
							if (!unk_0xF6F5D18EF8EAB859(iLocal_48, iLocal_33, 0))
							{
								if (func_33(iLocal_48))
								{
									if (func_25(iLocal_48))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
						if (func_34(iLocal_47, 0))
						{
							if (!unk_0xF6F5D18EF8EAB859(iLocal_47, iLocal_33, 0))
							{
								if (func_33(iLocal_47))
								{
									if (func_25(iLocal_47))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_319 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_34(iLocal_46, 0))
						{
							if (!unk_0xF6F5D18EF8EAB859(iLocal_46, iLocal_33, 0))
							{
								if (func_33(iLocal_46))
								{
									if (func_25(iLocal_46))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
						if (func_34(iLocal_47, 0))
						{
							if (!unk_0xF6F5D18EF8EAB859(iLocal_47, iLocal_33, 0))
							{
								if (func_33(iLocal_47))
								{
									if (func_25(iLocal_47))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_319 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_34(iLocal_46, 0))
						{
							if (!unk_0xF6F5D18EF8EAB859(iLocal_46, iLocal_33, 0))
							{
								if (func_33(iLocal_46))
								{
									if (func_25(iLocal_46))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
						if (func_34(iLocal_48, 0))
						{
							if (!unk_0xF6F5D18EF8EAB859(iLocal_48, iLocal_33, 0))
							{
								if (func_33(iLocal_48))
								{
									if (func_25(iLocal_48))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_319 = 1;
						}
					}
					if (iLocal_318 == 1 && iLocal_319 == 1)
					{
						iLocal_320 = 1;
					}
				}
				else if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_33, 1))
				{
					unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
					unk_0x5AE11BC36633DE4E(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_33))
		{
			if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
			{
				unk_0x0E97FAE15BEE6379(iLocal_33, 0);
				unk_0x3B2646B62E7BBE11(iLocal_33, 2);
				unk_0x5C65DDDC219B3AA5(iLocal_33, 1);
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_32))
		{
			if (unk_0x55A0C756C4A8220C(iLocal_32, 0))
			{
				unk_0x5C65DDDC219B3AA5(iLocal_32, 1);
			}
		}
		iLocal_62 = 4;
	}
	if (iLocal_62 == 4)
	{
		func_22();
	}
}

void func_22()
{
	func_23(0, 0);
	func_220();
}

void func_23(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63156)
	{
		Global_63156 = iParam1;
	}
	if (bParam0)
	{
		if ((func_219(0) && Global_78565.f_1 == 1) && func_24(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || func_219(0))
	{
		iVar0 = func_13();
		iVar1 = Global_91193[iVar0 /*5*/];
		uVar2 = Global_78588.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113386.f_9085)
			{
			}
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xCED9E32812D6C7C7(&(Global_91193[iVar0 /*5*/].f_1), 4);
		unk_0xCED9E32812D6C7C7(&Global_78567, true);
		Global_78583 = uVar2;
		Global_78584 = unk_0x320D1840B6DAA1CC();
	}
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_25(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!unk_0xF68107C40359970C(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (!BitTest(Global_96295, bVar0))
		{
			return 0;
		}
		unk_0xB0550BC91B0159D6(&Global_96295, bVar0);
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_14())
	{
		return unk_0xE2D3D51028F0428A();
	}
	return Global_97919[func_27(iParam0)];
}

int func_27(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_28(int iParam0, int iParam1, int iParam2)
{
	if (func_30() && func_31())
	{
		while (Global_100436 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x27F66B7FE7DB7C3A(0);
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				unk_0x3393D1B291D1BD1B(unk_0xE2D3D51028F0428A());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xE5965CDF24F93A9F(iParam0))
				{
					if (unk_0x55A0C756C4A8220C(iParam0, 0))
					{
						if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iParam0, 0))
						{
							unk_0xA9F390242F9EB2E1(unk_0xE2D3D51028F0428A(), iParam0, iParam1);
							unk_0x080C97B891E2F3AA(0f, 1065353216);
							unk_0x94953C3FF0664F66(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
			}
		}
		unk_0xDE903AC1B5BBC358();
		func_29(0);
	}
}

void func_29(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_100441.f_20), 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_100441.f_20), 13);
	}
}

int func_30()
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_31()
{
	return BitTest(Global_100441.f_20, 13);
}

int func_32(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!unk_0xF68107C40359970C(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96295, bVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xE2D3D51028F0428A())
			{
				return 0;
			}
		}
		if (BitTest(Global_96294, bVar0))
		{
			unk_0x73AC05050F54F1E0(iParam0, 0, 0);
			unk_0x006574E87E6F1942(iParam0, 0, 1);
			unk_0xCED9E32812D6C7C7(&Global_96295, bVar0);
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!unk_0xF68107C40359970C(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96295, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!unk_0xF68107C40359970C(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xE2D3D51028F0428A())
			{
				return 0;
			}
		}
		if (BitTest(Global_96294, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_35()
{
	iLocal_396 = 0;
	iLocal_456 = 0;
	unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 0);
	unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
	if (!unk_0xA829C9A2767AC8EF())
	{
		unk_0x859006DB870314C5(0);
	}
	func_126();
	unk_0xBA6C3C5E9E5A9442();
	func_125();
	func_124();
	func_37();
	if (!func_31())
	{
		func_36();
	}
	unk_0x94953C3FF0664F66(0f);
}

void func_36()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 288.3586f);
			break;
		
		case 3:
			unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 288.3586f);
			break;
		
		case 4:
			if (unk_0xE5965CDF24F93A9F(iLocal_33))
			{
				if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
				{
					if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_33, 0))
					{
						unk_0xA9F390242F9EB2E1(unk_0xE2D3D51028F0428A(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (unk_0xE5965CDF24F93A9F(iLocal_33))
			{
				if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
				{
					if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_33, 0))
					{
						unk_0xA9F390242F9EB2E1(unk_0xE2D3D51028F0428A(), iLocal_33, -1);
					}
				}
			}
			break;
	}
}

void func_37()
{
	switch (iLocal_28)
	{
		case 3:
			iLocal_418 = 0;
			iLocal_419 = 0;
			iLocal_420 = 0;
			func_120();
			if (func_119() && func_116(7f, 7f, 7f, 1))
			{
				func_114();
				while (!func_113())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iLocal_34 = func_38(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			unk_0x8576657A629C4B0A(0.01f);
			break;
		
		case 4:
			iLocal_418 = 0;
			iLocal_419 = 0;
			iLocal_420 = 0;
			func_120();
			if (unk_0xE5965CDF24F93A9F(iLocal_33))
			{
				if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
				{
					unk_0xC64B6E13A6A7F517(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 1, 0, 0, 1);
					unk_0xBBF86885619695CE(iLocal_33, 161.1163f);
				}
			}
			unk_0x7A997A0A971D305F(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			break;
		
		case 5:
			iLocal_418 = 1;
			iLocal_419 = 1;
			iLocal_420 = 1;
			func_120();
			unk_0x7A997A0A971D305F(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			if (unk_0xE5965CDF24F93A9F(iLocal_33))
			{
				if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
				{
					unk_0xC64B6E13A6A7F517(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 1, 0, 0, 1);
					unk_0xBBF86885619695CE(iLocal_33, 70.7778f);
				}
			}
			unk_0xD69A0C3662175E68(joaat("s_m_m_security_01"));
			while (!unk_0x0152AA00FA3130F1(joaat("s_m_m_security_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0xE5965CDF24F93A9F(iLocal_49))
			{
				iLocal_49 = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0xF1A23B343DFEDFD0(joaat("s_m_m_security_01"));
				unk_0xD6A76BAB45A4B460(iLocal_49, 324, 1);
			}
			break;
	}
}

int func_38(struct<3> Param0, float fParam3)
{
	return func_39(&(Global_103950.f_2890), Param0, fParam3, 0);
}

int func_39(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_112(uParam0))
	{
		if (func_111(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x5F8653E60ED2288E(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_110(uParam0))
		{
			unk_0x7A997A0A971D305F(Param1, 5f, 1, 0, 0, 0);
			func_109(Param1, 5f, 0);
			iVar0 = unk_0xBA715A7BEBA5A1F9(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				Var1 = { unk_0x6B62510F212526DC(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xA539EDE8DA5BBC22(iVar0, Param1, 0, 0, 1);
				}
				func_82(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xD2B5B1C8FC84FE0F(uParam0->f_12.f_66) || unk_0x5C921200CA5CBF8E(uParam0->f_12.f_66))
				{
					if (!unk_0x7CBF98360C4B22E4(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x9F65B3BAFA302A65(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0xCB09A834F0C86FBB(unk_0x15CAA6D7B11F1A7C(iVar0)))
						{
							func_81(uParam0->f_11, 1);
						}
						else if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iVar0)))
						{
							func_81(uParam0->f_11, 2);
						}
					}
					unk_0xFA37094E2DF03E75(iVar0, 0);
					unk_0x0FCB0A306FF51ECA(iVar0, 0);
					unk_0x05EAB38F5AC8DA1D(iVar0, 1);
					func_80(iVar0, uParam0->f_11);
				}
				else if ((!func_77(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x3C57C2F07FEE34D2(unk_0x05CBA41180F5D521(), "startup_positioning"))
				{
					iVar8 = func_76(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_69(iVar8);
					}
				}
				if (((Global_100441 != 13 && Global_100441 != 10) && Global_100441 != 11) && Global_100441 != 12)
				{
					if (unk_0x2E87280918B16506(&(Global_100441.f_3)) == Global_78125)
					{
						if (uParam0->f_12.f_66 == Global_113386.f_32749.f_69[21 /*78*/].f_66)
						{
							func_66(24, 0);
							func_69(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_40(iVar0, uParam0->f_11);
				}
				unk_0xF1A23B343DFEDFD0(uParam0->f_12.f_66);
				Var1 = { unk_0x6B62510F212526DC(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_46(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xAB793EA186AB8DAA(iParam0, -1, 0);
		if (!unk_0xE5965CDF24F93A9F(iVar0))
		{
			iVar0 = unk_0x48512AC2C4218836(iParam0, -1);
		}
		if (unk_0xE5965CDF24F93A9F(iVar0) && !unk_0xF68107C40359970C(iVar0))
		{
			if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x15CAA6D7B11F1A7C(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xACC32B78196FBC2A(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3C57C2F07FEE34D2(unk_0x80D16DB58890B7BC(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x15CAA6D7B11F1A7C(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xACC32B78196FBC2A(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3C57C2F07FEE34D2(unk_0x80D16DB58890B7BC(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_41(iParam0, &(Global_113386.f_32749.f_5510));
}

void func_41(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		func_45(uParam1);
		uParam1->f_66 = unk_0x15CAA6D7B11F1A7C(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x80D16DB58890B7BC(iParam0), 16);
		*uParam1 = unk_0xC264F708491D88D7(iParam0);
		unk_0xDCA20DBA52B32EEC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x356C37F1AA6EA3AA(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x2EE88EB83AF61B18(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xF9D204D7598C0239(iParam0);
		uParam1->f_67 = unk_0x3A5087062A6DBAEF(iParam0);
		uParam1->f_69 = unk_0xD9B8AFE0DD1AD635(iParam0);
		uParam1->f_70 = unk_0xA09765D2ADE13CAE(iParam0);
		unk_0xFB61E9A85A29DDA7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xEDB21C30F1BAF83A(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x6CA60A8EE52231D2(iParam0, 2))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 28);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 3))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 29);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 30);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 1))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x351E83123EFC0A15(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0C2181485E5FB7C2(iParam0);
		}
		if (unk_0xD6F7D32A98E07F93(uParam1->f_66))
		{
			if (unk_0x333A68465EAB12B7(iParam0))
			{
				switch (unk_0xC56DEF5C90606858(iParam0))
				{
					case 3:
					case 0:
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 23);
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 23);
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xC8E55AEB1E2B047F(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 9);
		}
		if (unk_0x8B56DBBE237EDF1F(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 10);
		}
		if (unk_0xA4429F0196864BB8(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 13);
			unk_0x3D8BB85A33E13D09(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x21DB5182C34B6C0E(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 12);
		}
		func_43(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xC49329A4E58D025B(iParam0, iVar0 + 1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_42(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA763B3F87DA3C316(iParam0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_77), 11);
		}
		if (unk_0xF2549FF74D64B720(iParam0, "IgnoredByQuickSave") && unk_0x9A1E55620A6C250D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_77), 27);
		}
	}
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_43(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x55A0C756C4A8220C(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x03AC3319D1B50189(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x75B2C853CB0B3047(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x75B2C853CB0B3047(*iParam0, iVar1))
			{
				switch (unk_0xDB29312237512D99(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x0DD0BC46C4CFD6AD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCCEE7D38FC5D9FD6(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCCEE7D38FC5D9FD6(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_45(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_46(int iParam0)
{
	if ((((((((((!unk_0xE5965CDF24F93A9F(iParam0) || !unk_0x55A0C756C4A8220C(iParam0, 0)) || func_64(iParam0, 0, 0)) || func_64(iParam0, 1, 0)) || func_64(iParam0, 2, 0)) || func_63(iParam0) != 145) || func_62(iParam0)) || func_61(iParam0)) || func_60(iParam0)) || func_59(iParam0)) || !func_47(unk_0x15CAA6D7B11F1A7C(iParam0)))
	{
		if (func_61(iParam0))
		{
		}
		if (func_61(iParam0))
		{
		}
		if (func_64(iParam0, 0, 0))
		{
		}
		if (func_64(iParam0, 1, 0))
		{
		}
		if (func_64(iParam0, 2, 0))
		{
		}
		if (func_63(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_47(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xD2B5B1C8FC84FE0F(iParam0) || unk_0xD6F7D32A98E07F93(iParam0)) || unk_0x4262B4DCEADC2695(iParam0)) || unk_0xF4AD75B2D964D8AB(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_48(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x2886B1BFE0896A9A(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x9315DBF7D972F07A()) || (iParam0 == joaat("buffalo3") && !unk_0x9315DBF7D972F07A())) || (iParam0 == joaat("gauntlet2") && !unk_0x9315DBF7D972F07A())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x9315DBF7D972F07A()))
	{
		if (!func_58())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x63913871ECC3707E())
		{
			if (unk_0xCD58DE0B13D04118(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x1B5C8EE302FC0D1E(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_57() && !func_56()) && !func_55()) && !func_54()) && !func_58())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_53() || unk_0x8FE9914D4872D601()) || func_52())
		{
		}
		else if (!func_55())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_51(iParam0))
		{
			return 0;
		}
	}
	if (!func_49(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_50())
	{
		return 1;
	}
	unk_0x5D66DA471CACD32B(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x5B1B2A8FE51FDB2D(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_50()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x48352343BC5A41AE();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && iVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && iVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && iVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && iVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && iVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && iVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && iVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && iVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && iVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && iVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && iVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && iVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && iVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && iVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && iVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && iVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && iVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && iVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && iVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && iVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && iVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && iVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && iVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && iVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && iVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && iVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && iVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && iVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && iVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && iVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && iVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && iVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && iVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && iVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && iVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && iVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && iVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && iVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && iVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && iVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && iVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && iVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && iVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && iVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && iVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && iVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && iVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && iVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && iVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && iVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && iVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && iVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && iVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && iVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && iVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && iVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && iVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && iVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && iVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && iVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && iVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && iVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && iVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && iVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && iVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && iVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && iVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && iVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && iVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && iVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && iVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && iVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && iVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && iVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && iVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && iVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && iVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && iVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && iVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && iVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && iVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && iVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && iVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && iVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && iVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && iVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && iVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && iVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && iVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && iVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && iVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && iVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && iVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && iVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && iVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && iVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && iVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && iVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && iVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && iVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && iVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && iVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && iVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && iVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && iVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && iVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && iVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && iVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && iVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && iVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && iVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && iVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && iVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && iVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && iVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && iVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && iVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && iVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && iVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && iVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && iVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && iVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && iVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && iVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && iVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && iVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && iVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && iVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && iVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && iVar1 < Global_262145.f_24193)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26756 && iVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && iVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && iVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && iVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && iVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && iVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && iVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && iVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && iVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && iVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && iVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && iVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && iVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && iVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && iVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && iVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && iVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && iVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && iVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && iVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && iVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && iVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && iVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && iVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && iVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && iVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && iVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && iVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && iVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && iVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && iVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && iVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && iVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && iVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && iVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && iVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && iVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && iVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && iVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && iVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && iVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && iVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && iVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && iVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && iVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && iVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && iVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && iVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && iVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && iVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && iVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && iVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && iVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && iVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && iVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && iVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && iVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && iVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && iVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && iVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && iVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && iVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && iVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && iVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && iVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && iVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && iVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && iVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && iVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && iVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && iVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && iVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && iVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && iVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && iVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && iVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && iVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && iVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && iVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && iVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33037 && iVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33031 && iVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33035 && iVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33029 && iVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33040 && iVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33032 && iVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33041 && iVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33043 && iVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33034 && iVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33042 && iVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33045 && iVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33030 && iVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33038 && iVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33044 && iVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33036 && iVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33046 && iVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33033 && iVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33028 && iVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_52()
{
	return (unk_0xA7384DAD7CF469DA() || unk_0x807ABE1AB65C24D2());
}

bool func_53()
{
	return (unk_0x3EBD3AF4E5D7A08C() || unk_0xC545AB1CF97ABB34());
}

int func_54()
{
	return 0;
}

int func_55()
{
	return 1;
}

int func_56()
{
	return 1;
}

int func_57()
{
	if (unk_0x014D8C5910A5B01B(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_58()
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
					uVar0 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&uVar0, false);
					unk_0x212EDDD868F364B5(uVar0);
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

int func_59(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	uVar1 = unk_0x80D16DB58890B7BC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3C57C2F07FEE34D2(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_48(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xE5965CDF24F93A9F(Global_97772[iVar0]) && unk_0x55A0C756C4A8220C(Global_97772[iVar0], 0))
			{
				if (Global_97772[iVar0] == iParam0 && unk_0x15CAA6D7B11F1A7C(Global_97772[iVar0]) == unk_0x15CAA6D7B11F1A7C(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(Global_77137.f_484[24]))
	{
		if (iParam0 == Global_77137.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xE5965CDF24F93A9F(Global_77137.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 145;
	}
	if (!unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_64(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0) || !unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_65(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar9], 0))
		{
			if (unk_0xBEF939CD3AF0B8F0(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_65(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_66(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_68(iParam0, 0))
		{
			func_67(iParam0, 1, 0);
			func_67(iParam0, 2, 0);
			func_67(iParam0, 3, 0);
			func_67(iParam0, 4, 0);
			func_67(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_67(iParam0, 0, 0);
	}
}

void func_67(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_113386.f_32749[iParam0]), bParam1);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_113386.f_32749[iParam0]), bParam1);
	}
}

int func_68(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_69(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_73(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xE5965CDF24F93A9F(Global_77137.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x55A0C756C4A8220C(Global_77137.f_139[iParam0], 0))
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Global_77137.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x2D58A6131679D82C(Global_77137.f_139[iParam0], 1, 1);
				unk_0xD59CC8123FD1A789(&(Global_77137.f_139[iParam0]));
			}
		}
		Global_77137[iParam0] = 1;
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_68(iParam0, 0)) && Global_78046.f_66 == 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] != 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] > 3) && (!func_71(0, Global_77137.f_555[0 /*21*/].f_12) || !func_71(1, Global_77137.f_555[0 /*21*/].f_12)))
			{
				func_70(&(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]), &Global_78046);
				Global_78124 = Global_113386.f_32749.f_5591;
			}
			func_66(iParam0, 0);
		}
	}
}

void func_70(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_72(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_48(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_72(var uParam0)
{
	return *uParam0;
}

int func_73(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_74(0, 1);
			uParam0->f_12 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_74(0, 1);
			uParam0->f_12 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_74(1, 1);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_74(1, 2);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 19);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_74(1, 1);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_74(1, 2);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 19);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_74(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_74(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_74(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 27);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 27);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 27);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 11);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 11);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 9);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 9);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_58())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), true);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_58())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), true);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113386.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_111(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113386.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113386.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_111(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_111(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_74(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_75(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_75(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113386.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113386.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xE5965CDF24F93A9F(Global_77137.f_484[iVar0]) && !unk_0x55B23FE400FCEA6B(Global_77137.f_484[iVar0], 0)) && unk_0x55A0C756C4A8220C(Global_77137.f_484[iVar0], 0))
		{
			unk_0xDCA20DBA52B32EEC(iParam0, &iVar1, &iVar2);
			unk_0xDCA20DBA52B32EEC(Global_77137.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x15CAA6D7B11F1A7C(iParam0) == unk_0x15CAA6D7B11F1A7C(Global_77137.f_484[iVar0]) && unk_0x3A5087062A6DBAEF(iParam0) == unk_0x3A5087062A6DBAEF(Global_77137.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_77(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_79(iParam0, Global_77137.f_139[38], 0))
			{
				func_69(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_79(iParam0, Global_77137.f_139[43], 1))
			{
				func_69(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x9A39844D6003635C(unk_0xE2D3D51028F0428A(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_79(iParam0, uVar1[iVar6], 1) && func_78(unk_0x6B62510F212526DC(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_111(Param1, 0f, 0f, 0f, 0)) || unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iParam0, 1), unk_0x6B62510F212526DC(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0xD59CC8123FD1A789(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0xE5965CDF24F93A9F(Global_77137.f_484[14]) && unk_0x55A0C756C4A8220C(iParam0, 0)) && unk_0x55A0C756C4A8220C(Global_77137.f_484[14], 0))
			{
				if (unk_0x15CAA6D7B11F1A7C(Global_77137.f_484[14]) == joaat("luxor2") && unk_0x3A5087062A6DBAEF(iParam0) == unk_0x3A5087062A6DBAEF(Global_77137.f_484[14]))
				{
					func_69(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xE5965CDF24F93A9F(Global_77137.f_484[20]) && unk_0x55A0C756C4A8220C(iParam0, 0)) && unk_0x55A0C756C4A8220C(Global_77137.f_484[20], 0))
			{
				if (unk_0x15CAA6D7B11F1A7C(Global_77137.f_484[20]) == joaat("swift2") && unk_0x3A5087062A6DBAEF(iParam0) == unk_0x3A5087062A6DBAEF(Global_77137.f_484[20]))
				{
					func_69(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_78(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xE5965CDF24F93A9F(iParam1) && !unk_0x55B23FE400FCEA6B(iParam1, 0)) && unk_0x55A0C756C4A8220C(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xDCA20DBA52B32EEC(iParam0, &iVar0, &iVar1);
			unk_0xDCA20DBA52B32EEC(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
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

void func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xE5965CDF24F93A9F(Global_97772[iVar0]))
		{
			Global_97772[iVar0] = iParam0;
			Global_97782[iVar0] = iParam1;
			Global_97792[iVar0] = unk_0x15CAA6D7B11F1A7C(iParam0);
			if (unk_0xCB09A834F0C86FBB(Global_97792[iVar0]))
			{
				Global_97820[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_97820[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97772[iVar0]))
		{
			if (iParam0 == 145 || Global_97782[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x15CAA6D7B11F1A7C(Global_97772[iVar0]) == func_74(iParam0, iParam1))
				{
					if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Global_97772[iVar0], 0))
					{
						unk_0x2D58A6131679D82C(Global_97772[iVar0], 0, 1);
						unk_0xD59CC8123FD1A789(&(Global_97772[iVar0]));
						Global_97782[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_82(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_101(iParam0))
		{
			if (unk_0x2E87280918B16506(&(uParam1->f_1)) != 0)
			{
				unk_0x2C2F2F6BEE7AC7E7(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xACF41D856B7CCB39())
			{
				unk_0xE56B65C6B89CFCF2(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_42(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_42(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_42(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_42(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_42(iVar2)))
				{
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_42(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_42(iVar3)))
				{
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_42(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_42(iVar4)))
					{
					}
					else
					{
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_42(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_42(4)))
			{
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_42(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 10) != 0)
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_42(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_42(iVar5)))
				{
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_42(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x077FDC1A202B9273(iParam0, 0);
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 5) != -1)
			{
				unk_0x077FDC1A202B9273(iParam0, 1);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			unk_0x401F3880D64CB7D9(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x812006F6C16BBEA2(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			unk_0x4A498F8F5DB5D526(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xD27CAD777BB60AE5(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_99(uParam1->f_5) || func_99(uParam1->f_6))
			{
			}
			else
			{
				unk_0x58DAFDEB2F46A5EA(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x952B5201CC721090(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_98(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_97())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xFEF0C9A733C7B609(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			unk_0x2EB7787881686751(iParam0, 0);
		}
		else
		{
			unk_0x2EB7787881686751(iParam0, 0);
			unk_0x2EB7787881686751(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			unk_0xAFE1B52F0DE91595(iParam0, 0);
			unk_0x8C5DD298059D8BF8(iParam0, 0);
		}
		if (bParam2)
		{
			unk_0x3B2646B62E7BBE11(iParam0, uParam1->f_70);
		}
		unk_0x74FCADE93B81FD35(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xBE69E921963A86B7(iParam0, 2, BitTest(uParam1->f_77, 28));
		unk_0xBE69E921963A86B7(iParam0, 3, BitTest(uParam1->f_77, 29));
		unk_0xBE69E921963A86B7(iParam0, 0, BitTest(uParam1->f_77, 30));
		unk_0xBE69E921963A86B7(iParam0, 1, BitTest(uParam1->f_77, 31));
		unk_0x4FA753674D81BF2E(iParam0, BitTest(uParam1->f_77, 10));
		if (unk_0x8F0BC830FFCF7F2A(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xE1F8DBCF9A6E205E(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(iParam0)))
			{
				if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_96(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_96(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x351E83123EFC0A15(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xA36A3AB3D2350CCD(iParam0, 1);
			}
			else
			{
				unk_0x47B16F33DD2893CF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_89(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x4262B4DCEADC2695(uParam1->f_66) && !unk_0xD2B5B1C8FC84FE0F(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, func_42(iVar6 + 1)))
				{
					if (!unk_0xC49329A4E58D025B(iParam0, iVar6 + 1))
					{
						unk_0x45A6EA15139A0C54(iParam0, iVar6 + 1, 0);
					}
				}
				else if (unk_0xC49329A4E58D025B(iParam0, iVar6 + 1))
				{
					unk_0x45A6EA15139A0C54(iParam0, iVar6 + 1, 1);
				}
				iVar6++;
			}
		}
		if ((unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("sheava") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("omnis")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("le7b"))
		{
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 0) == -1)
			{
				unk_0x45A6EA15139A0C54(iParam0, 1, 0);
			}
		}
		if (((func_83() && unk_0xD6F7D32A98E07F93(uParam1->f_66)) && unk_0x03377F11051BC47F(iParam0)) && !unk_0x7010991FDA59D3F2(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					unk_0x3739DEED4A756E69(iParam0, 2);
				}
				else
				{
					unk_0x3739DEED4A756E69(iParam0, 3);
				}
			}
			else
			{
				unk_0x3739DEED4A756E69(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			unk_0x2C8C3211219C37BD(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x2C8C3211219C37BD(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_83()
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_87(7))
	{
		if (func_85(Global_2703735.f_4.f_16) || func_84(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_84(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_86(iParam0, 9);
	}
	return 0;
}

var func_86(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

bool func_87(int iParam0)
{
	return func_88(&(Global_2703735.f_169), iParam0);
}

var func_88(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_89(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x55A0C756C4A8220C(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x03AC3319D1B50189(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x3C1BCE3438ECBFC0(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x6C6188D0F8AB739A(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x6C6188D0F8AB739A(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x300BFAA8E2A36A8E(*iParam0, 255);
				}
				else
				{
					unk_0x300BFAA8E2A36A8E(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x6C6188D0F8AB739A(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x0DD0BC46C4CFD6AD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x0CF999545677298A(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					unk_0x0061B7C9351B41ED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					unk_0x0061B7C9351B41ED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_94(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					unk_0x0061B7C9351B41ED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_93(unk_0x15CAA6D7B11F1A7C(*iParam0), 1) && unk_0x0DD0BC46C4CFD6AD(*iParam0, 24) != func_92(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x0061B7C9351B41ED(*iParam0, 24, func_92(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_91(iParam0);
	if (func_90(*iParam0))
	{
		unk_0xFF74DEC3F62D3654(*iParam0, 1);
		unk_0x05EAB38F5AC8DA1D(*iParam0, 1);
	}
	return 1;
}

int func_90(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0)) && unk_0x03AC3319D1B50189(iParam0) > 0)
	{
		unk_0x3C1BCE3438ECBFC0(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x0DD0BC46C4CFD6AD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xAC1327F86AC1314A(iParam0, iVar1, unk_0x0DD0BC46C4CFD6AD(iParam0, iVar1)), 32);
				iVar2 = unk_0x2E87280918B16506(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x2E87280918B16506("MNU_CAGE") || iVar2 == unk_0x2E87280918B16506("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_91(var uParam0)
{
	switch (unk_0x15CAA6D7B11F1A7C(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x0DD0BC46C4CFD6AD(*uParam0, 4) == 0)
			{
				unk_0x0061B7C9351B41ED(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x0CF999545677298A(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x0061B7C9351B41ED(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		switch (unk_0x15CAA6D7B11F1A7C(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x6B83F5AE0478286F(iParam0, 38);
		iVar1 = unk_0x6B83F5AE0478286F(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_93(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19186)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19188)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19192)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19189)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19196)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19194)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19199)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21144)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21145)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	if (!func_95() && unk_0x00834EAC4A96E010(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	return 0;
}

void func_96(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x03AC3319D1B50189(iParam0) > 0)
	{
		unk_0x3C1BCE3438ECBFC0(iParam0, 0);
		iVar0 = unk_0x0DD0BC46C4CFD6AD(iParam0, 24);
		iVar1 = unk_0xCCEE7D38FC5D9FD6(iParam0, 24);
		unk_0xE19D99912C7661C6(iParam0, uParam1);
		if (unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("tornado6") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x0CF999545677298A(iParam0, 24);
		}
		else
		{
			unk_0x0061B7C9351B41ED(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_97()
{
	return unk_0x014D8C5910A5B01B(joaat("mpindependence"));
}

int func_98(int iParam0)
{
	var uVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
			{
				if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
				}
				return BitTest(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_99(int iParam0)
{
	if (!func_95() && func_100(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_101(int iParam0)
{
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!func_107(unk_0x9E2D6C50374FCFA9(), -1))
		{
			iParam0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	if (unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	if (func_103(unk_0x9E2D6C50374FCFA9()) == 3)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (func_102(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_102(int iParam0)
{
	if (unk_0x6BD06F4780EAC5DD("FMDeliverableID", 3))
	{
		if (unk_0xF2549FF74D64B720(iParam0, "FMDeliverableID"))
		{
			return unk_0xC3B76795ECBDEF41(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_103(int iParam0)
{
	if (func_106(iParam0) == 233)
	{
		return func_104(iParam0);
	}
	return -1;
}

int func_104(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_105(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_108(iParam0, 1, 1))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iParam0), 0))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iParam0), 0);
			if (unk_0x55A0C756C4A8220C(iVar0, 0))
			{
				if (unk_0xE2D3D51028F0428A() == unk_0xAB793EA186AB8DAA(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_108(int iParam0, bool bParam1, bool bParam2)
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

void func_109(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_73(&(Global_77137.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x987A5F1E1A67E3C0(Param0, Global_77137.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_69(iVar0);
			}
		}
		iVar0++;
	}
}

int func_110(var uParam0)
{
	if (func_112(uParam0))
	{
		if (unk_0x0152AA00FA3130F1(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_111(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_112(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_48(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_78(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_113()
{
	return func_110(&(Global_103950.f_2890));
}

void func_114()
{
	func_115(&(Global_103950.f_2890));
}

void func_115(var uParam0)
{
	if (func_112(uParam0))
	{
		unk_0xD69A0C3662175E68(uParam0->f_12.f_66);
	}
}

int func_116(struct<3> Param0, int iParam3)
{
	return func_117(Global_103950.f_2890.f_12.f_66, Param0, iParam3);
}

int func_117(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_118() };
	}
	unk_0xB38EF75835FAF667(iParam0, &Var0, &Var3);
	if ((Var3.f_0 - Var0.f_0) > Param1.f_0)
	{
		return 0;
	}
	else if ((Var3.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var3.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_118()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_119()
{
	return func_112(&(Global_103950.f_2890));
}

void func_120()
{
	unk_0xD69A0C3662175E68(joaat("armytrailer2"));
	unk_0xD69A0C3662175E68(joaat("packer"));
	unk_0xD69A0C3662175E68(joaat("s_m_y_construct_01"));
	unk_0xD69A0C3662175E68(joaat("s_m_m_security_01"));
	unk_0xD69A0C3662175E68(joaat("bison2"));
	while ((((!unk_0x0152AA00FA3130F1(joaat("armytrailer2")) || !unk_0x0152AA00FA3130F1(joaat("packer"))) || !unk_0x0152AA00FA3130F1(joaat("s_m_y_construct_01"))) || !unk_0x0152AA00FA3130F1(joaat("s_m_m_security_01"))) || !unk_0x0152AA00FA3130F1(joaat("bison2")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_32))
	{
		if (unk_0xE5965CDF24F93A9F(Global_96938[1]))
		{
			unk_0x2D58A6131679D82C(Global_96938[1], 1, 1);
			iLocal_32 = Global_96938[1];
			unk_0x66E36C5E6E28930C(iLocal_32);
		}
		else
		{
			iLocal_32 = unk_0xBA715A7BEBA5A1F9(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0x66E36C5E6E28930C(iLocal_32);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_33))
	{
		if (unk_0xE5965CDF24F93A9F(Global_96938[2]))
		{
			unk_0x2D58A6131679D82C(Global_96938[2], 1, 1);
			iLocal_33 = Global_96938[2];
			unk_0x05EAB38F5AC8DA1D(iLocal_33, 1);
			unk_0x3B2646B62E7BBE11(iLocal_33, 7);
			func_123(iLocal_33, -1);
			func_122(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = unk_0xBA715A7BEBA5A1F9(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0x05EAB38F5AC8DA1D(iLocal_33, 1);
			unk_0x3B2646B62E7BBE11(iLocal_33, 7);
			func_123(iLocal_33, -1);
			func_122(iLocal_33, -1);
		}
	}
	unk_0xFE1D9D8BFF8D8EA6(iLocal_33, iLocal_32, 0.5f);
	unk_0xF1A23B343DFEDFD0(joaat("armytrailer2"));
	unk_0xF1A23B343DFEDFD0(joaat("packer"));
	unk_0xF1A23B343DFEDFD0(joaat("bison2"));
	if (!unk_0xE5965CDF24F93A9F(iLocal_35[0]))
	{
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[0]))
		{
			unk_0x2D58A6131679D82C(Global_96938.f_9[0], 1, 1);
			iLocal_35[0] = Global_96938.f_9[0];
			unk_0xFF4BEB6CFF55A013(iLocal_35[0], iLocal_302);
			func_121(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_35[0], 1);
		}
		else
		{
			iLocal_35[0] = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
			unk_0xFF4BEB6CFF55A013(iLocal_35[0], iLocal_302);
			if (unk_0x5B138084858689AC(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				unk_0x8CEB5D8B56025AA2(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			unk_0x50274A7EACA3133A(iLocal_35[0], 1);
			func_121(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_35[1]))
	{
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[1]))
		{
			unk_0x2D58A6131679D82C(Global_96938.f_9[1], 1, 1);
			iLocal_35[1] = Global_96938.f_9[1];
			unk_0xFF4BEB6CFF55A013(iLocal_35[1], iLocal_302);
			func_121(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_35[1], 1);
		}
		else
		{
			iLocal_35[1] = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
			unk_0xFF4BEB6CFF55A013(iLocal_35[1], iLocal_302);
			if (unk_0x5B138084858689AC(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				unk_0x8CEB5D8B56025AA2(iLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_121(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_35[1], 1);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_35[2]))
	{
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[2]))
		{
			unk_0x2D58A6131679D82C(Global_96938.f_9[2], 1, 1);
			iLocal_35[2] = Global_96938.f_9[2];
			unk_0xFF4BEB6CFF55A013(iLocal_35[2], iLocal_302);
			func_121(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_35[2], 1);
		}
		else
		{
			iLocal_35[2] = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
			unk_0xFF4BEB6CFF55A013(iLocal_35[2], iLocal_302);
			if (unk_0x5B138084858689AC(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				unk_0x8CEB5D8B56025AA2(iLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_121(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_35[2], 1);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_35[3]))
	{
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[3]))
		{
			unk_0x2D58A6131679D82C(Global_96938.f_9[3], 1, 1);
			iLocal_35[3] = Global_96938.f_9[3];
			unk_0xFF4BEB6CFF55A013(iLocal_35[3], iLocal_302);
			func_121(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_35[3], 1);
		}
		else
		{
			iLocal_35[3] = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
			unk_0xFF4BEB6CFF55A013(iLocal_35[3], iLocal_302);
			if (unk_0x5B138084858689AC(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				unk_0x8CEB5D8B56025AA2(iLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_121(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_35[3], 1);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_35[4]))
	{
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[4]))
		{
			unk_0x2D58A6131679D82C(Global_96938.f_9[4], 1, 1);
			iLocal_35[4] = Global_96938.f_9[4];
			unk_0xFF4BEB6CFF55A013(iLocal_35[4], iLocal_302);
			func_121(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_35[4], 1);
		}
		else
		{
			iLocal_35[4] = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
			unk_0xFF4BEB6CFF55A013(iLocal_35[4], iLocal_302);
			if (unk_0x5B138084858689AC(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				unk_0x8CEB5D8B56025AA2(iLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_121(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_35[4], 1);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_35[5]))
	{
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[5]))
		{
			unk_0x2D58A6131679D82C(Global_96938.f_9[5], 1, 1);
			iLocal_35[5] = Global_96938.f_9[5];
			unk_0xFF4BEB6CFF55A013(iLocal_35[5], iLocal_302);
			func_121(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_35[5], 1);
		}
		else
		{
			iLocal_35[5] = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
			unk_0xFF4BEB6CFF55A013(iLocal_35[5], iLocal_302);
			if (unk_0x5B138084858689AC(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				unk_0x8CEB5D8B56025AA2(iLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_121(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_35[5], 1);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_35[6]))
	{
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[8]))
		{
			unk_0x2D58A6131679D82C(Global_96938.f_9[8], 1, 1);
			iLocal_35[6] = Global_96938.f_9[8];
			unk_0xFF4BEB6CFF55A013(iLocal_35[6], iLocal_302);
			func_121(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x50274A7EACA3133A(iLocal_35[6], 1);
		}
		else
		{
			iLocal_35[6] = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
			unk_0xFF4BEB6CFF55A013(iLocal_35[6], iLocal_302);
			if (unk_0x5B138084858689AC(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				unk_0x8CEB5D8B56025AA2(iLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_121(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x50274A7EACA3133A(iLocal_35[6], 1);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_43[0]))
	{
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[6]))
		{
			unk_0x2D58A6131679D82C(Global_96938.f_9[6], 1, 1);
			iLocal_43[0] = Global_96938.f_9[6];
			unk_0xFF4BEB6CFF55A013(iLocal_43[0], iLocal_303);
			func_121(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_43[0], 1);
			unk_0x9521FB98DB6DDF50(iLocal_43[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0xEEBC95A38CBDED42(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_43[0] = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
			unk_0xFF4BEB6CFF55A013(iLocal_43[0], iLocal_303);
			func_121(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_43[0], 1);
			unk_0x9521FB98DB6DDF50(iLocal_43[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0xEEBC95A38CBDED42(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_43[1]))
	{
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[7]))
		{
			unk_0x2D58A6131679D82C(Global_96938.f_9[7], 1, 1);
			iLocal_43[1] = Global_96938.f_9[7];
			unk_0xFF4BEB6CFF55A013(iLocal_43[1], iLocal_303);
			func_121(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_43[1], 1);
			unk_0x9521FB98DB6DDF50(iLocal_43[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0xEEBC95A38CBDED42(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_43[1] = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
			unk_0xFF4BEB6CFF55A013(iLocal_43[1], iLocal_303);
			func_121(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x50274A7EACA3133A(iLocal_43[1], 1);
			unk_0x9521FB98DB6DDF50(iLocal_43[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0xEEBC95A38CBDED42(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	unk_0xF1A23B343DFEDFD0(joaat("s_m_y_construct_01"));
	unk_0xF1A23B343DFEDFD0(joaat("s_m_m_security_01"));
}

void func_121(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!unk_0xF68107C40359970C(iParam0))
	{
		unk_0xE014FF3C785EEFB5(iParam0, fParam1);
		unk_0x52EA1154D214BFB6(iParam0, iParam2);
		unk_0xED676E22A51C1922(iParam0, (fParam3 / 2f));
		unk_0xA4E1B9926DF4A312(iParam0, iParam4);
		unk_0xFCC8AE1090BA5929(iParam0, iParam5);
	}
}

void func_122(int iParam0, int iParam1)
{
	Global_63165 = iParam0;
	Global_63166 = iParam1;
}

void func_123(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_63167 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (iParam1 == -1 || Global_75250[iVar0 /*9*/] == iParam1)
		{
			if (Global_75250[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_75250[iVar0 /*9*/].f_6 = iParam0;
				Global_75250[iVar0 /*9*/].f_7 = 1;
				Global_75250[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_124()
{
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_35[iLocal_63]) && unk_0x930E64CB0285CAEC(iLocal_35[iLocal_63], 1))
		{
			unk_0x05CB75C0837196F9(&(iLocal_35[iLocal_63]));
		}
		iLocal_63++;
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_43[0]) && unk_0x930E64CB0285CAEC(iLocal_43[0], 1))
	{
		unk_0x05CB75C0837196F9(&(iLocal_43[0]));
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_43[1]) && unk_0x930E64CB0285CAEC(iLocal_43[1], 1))
	{
		unk_0x05CB75C0837196F9(&(iLocal_43[1]));
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_46) && unk_0x930E64CB0285CAEC(iLocal_46, 1))
	{
		unk_0x05CB75C0837196F9(&iLocal_46);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_47) && unk_0x930E64CB0285CAEC(iLocal_47, 1))
	{
		unk_0x05CB75C0837196F9(&iLocal_47);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_48) && unk_0x930E64CB0285CAEC(iLocal_48, 1))
	{
		unk_0x05CB75C0837196F9(&iLocal_48);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_49) && unk_0x930E64CB0285CAEC(iLocal_49, 1))
	{
		unk_0x05CB75C0837196F9(&iLocal_49);
	}
	if (!func_31())
	{
		unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), 519.1906f, -2980.994f, 5.0443f, 1, 0, 0, 1);
		unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 270.1911f);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_32) && unk_0x930E64CB0285CAEC(iLocal_32, 1))
	{
		unk_0xD59CC8123FD1A789(&iLocal_32);
	}
	if (unk_0xE5965CDF24F93A9F(Global_96938[3]))
	{
		unk_0x2D58A6131679D82C(Global_96938[3], 1, 0);
		unk_0xD59CC8123FD1A789(&(Global_96938[3]));
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_33) && unk_0x930E64CB0285CAEC(iLocal_33, 1))
	{
		unk_0xD59CC8123FD1A789(&iLocal_33);
	}
	unk_0xAFC1FBF3F6AE7B9A("cellphone@str");
	unk_0xAFC1FBF3F6AE7B9A("misscarsteal4@director_grip");
	unk_0x0709E99F1DDFFF26("FHPRB_START");
	unk_0x0709E99F1DDFFF26("FHPRB_TRUCK");
	unk_0x0709E99F1DDFFF26("FHPRB_COPS");
	unk_0x0709E99F1DDFFF26("FHPRB_LOST");
	unk_0x0709E99F1DDFFF26("FHPRB_STOP");
	unk_0x7A997A0A971D305F(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, 0);
}

void func_125()
{
	if (unk_0x12DD4A0B247D9B4D(uLocal_58))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_58);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_59))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_59);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_60))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_60);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_61))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_61);
	}
}

void func_126()
{
	Global_20471 = 0;
	func_127();
}

void func_127()
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

void func_128()
{
	func_150();
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_35();
			iLocal_304 = 0;
		}
		iLocal_305 = 0;
		iLocal_314 = 0;
		iLocal_469 = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
		unk_0xC0F70A3CDEC87ECE(5);
		unk_0xAFC1FBF3F6AE7B9A("cellphone@str");
		unk_0xAFC1FBF3F6AE7B9A("misscarsteal4@director_grip");
		if (!unk_0xE9E8955A780DDA01())
		{
			unk_0x42C4310E76AD635A(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1));
			unk_0x5A7ACD1CDF509B0D(800);
		}
		unk_0x8576657A629C4B0A(1f);
		unk_0x2DA9F9D8E5530E75(10f, 5f, 4);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		func_149(&uLocal_137, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_149(&uLocal_137, 0, unk_0xE2D3D51028F0428A(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_149(&uLocal_137, 1, unk_0xE2D3D51028F0428A(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_149(&uLocal_137, 2, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
		}
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_135(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					unk_0x2DA9F9D8E5530E75(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_135(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					unk_0x2DA9F9D8E5530E75(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_135(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					unk_0x2DA9F9D8E5530E75(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (!unk_0x12DD4A0B247D9B4D(uLocal_59))
		{
			if (!func_134())
			{
				if (unk_0x83666F9FB8FEBD4B() > 10500)
				{
					uLocal_59 = func_132(Local_116, 1);
				}
			}
		}
		if (func_134())
		{
			iLocal_62 = 4;
		}
	}
	if (iLocal_62 == 4)
	{
		if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
		{
			if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_33, 0))
				{
					if (unk_0x817B926B53C0589A(iLocal_33))
					{
						if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_116, 4f, 4f, 2f, 1, 1, 2))
						{
							if (func_130(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 4f, 3, 0.5f, 0, 1, 0))
							{
								unk_0x1CF3F44FC2EB9F99("FHPRB_STOP");
								if (unk_0x12DD4A0B247D9B4D(uLocal_59))
								{
									unk_0xFFD8EB5462B07B59(&uLocal_59);
								}
								unk_0x2DA9F9D8E5530E75(5f, 5f, 4);
								func_129(0, -1);
								iLocal_62 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_129(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_63162)
	{
	}
	Global_63162 = 0;
	if (bParam0)
	{
		Global_63163 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_75250[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_75250[iVar0 /*9*/] > 0)
			{
				if (Global_75250[iVar0 /*9*/] == iParam1)
				{
					Global_75250[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_130(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x7653D561C9574763(0, 71, 1);
	unk_0x7653D561C9574763(0, 72, 1);
	unk_0x7653D561C9574763(0, 76, 1);
	unk_0x7653D561C9574763(0, 73, 1);
	unk_0x7653D561C9574763(0, 59, 1);
	unk_0x7653D561C9574763(0, 60, 1);
	if (bParam5)
	{
		unk_0x7653D561C9574763(0, 75, 1);
	}
	unk_0x7653D561C9574763(0, 80, 1);
	if (!bParam6)
	{
		unk_0x7653D561C9574763(0, 69, 1);
		unk_0x7653D561C9574763(0, 70, 1);
		unk_0x7653D561C9574763(0, 68, 1);
	}
	unk_0x7653D561C9574763(0, 74, 1);
	unk_0x7653D561C9574763(0, 86, 1);
	unk_0x7653D561C9574763(0, 81, 1);
	unk_0x7653D561C9574763(0, 82, 1);
	unk_0x7653D561C9574763(0, 138, 1);
	unk_0x7653D561C9574763(0, 136, 1);
	unk_0x7653D561C9574763(0, 114, 1);
	unk_0x7653D561C9574763(0, 107, 1);
	unk_0x7653D561C9574763(0, 110, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 87, 1);
	unk_0x7653D561C9574763(0, 88, 1);
	unk_0x7653D561C9574763(0, 113, 1);
	unk_0x7653D561C9574763(0, 115, 1);
	unk_0x7653D561C9574763(0, 116, 1);
	unk_0x7653D561C9574763(0, 117, 1);
	unk_0x7653D561C9574763(0, 118, 1);
	unk_0x7653D561C9574763(0, 119, 1);
	unk_0x7653D561C9574763(0, 352, 1);
	unk_0x7653D561C9574763(0, 131, 1);
	unk_0x7653D561C9574763(0, 132, 1);
	unk_0x7653D561C9574763(0, 123, 1);
	unk_0x7653D561C9574763(0, 126, 1);
	unk_0x7653D561C9574763(0, 129, 1);
	unk_0x7653D561C9574763(0, 130, 1);
	unk_0x7653D561C9574763(0, 133, 1);
	unk_0x7653D561C9574763(0, 134, 1);
	unk_0x5951E2E1DB653567();
	func_131(iParam0);
	if ((unk_0x320D1840B6DAA1CC() - Global_29) > 500)
	{
		unk_0xD28E3800883DED83(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x320D1840B6DAA1CC();
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x48053974ED6F63CE(unk_0x207D53F9E0190691(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_131(int iParam0)
{
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x4545AF649BD80692(iParam0))
		{
			if (unk_0xD377CBCD474FDCFA(iParam0))
			{
				unk_0x416220C999F84215(iParam0, 0);
			}
		}
	}
}

var func_132(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xC5B823372B67998A(Param0);
	unk_0x293A9399E902A33B(uVar0, func_133(unk_0x9315DBF7D972F07A(), 1f, 1f));
	unk_0xAAD76B24A5282FDD(uVar0, iParam3);
	return uVar0;
}

float func_133(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_134()
{
	if (Global_21605 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_135(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_148(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	if (iParam5 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	Global_2883585 = 0;
	return func_136(sParam3, iParam4, bParam8);
}

int func_136(char* sParam0, int iParam1, bool bParam2)
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
					func_127();
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
		if (func_147(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_146();
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
				func_145();
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
				if (func_144())
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
			if (func_143())
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
			func_142();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_141();
		func_137();
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
		func_127();
	}
	return 0;
}

void func_137()
{
	if (!func_138())
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

int func_138()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_140())
	{
		return 0;
	}
	if (func_139(unk_0x9E2D6C50374FCFA9()))
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

bool func_139(int iParam0)
{
	return func_86(iParam0, 20);
}

int func_140()
{
	return -1;
}

void func_141()
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

void func_142()
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

int func_143()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_144()
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

void func_145()
{
	if (func_16(14))
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
		Global_20266 = func_14();
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

void func_146()
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

bool func_147(int iParam0, int iParam1)
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

void func_148(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_149(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_150()
{
	if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
	{
		if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_33, 0))
		{
			if (unk_0x817B926B53C0589A(iLocal_33))
			{
				if (func_155("HELP_1"))
				{
					unk_0x3410421C60BF7143(1);
				}
				if (unk_0x12DD4A0B247D9B4D(uLocal_58))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_58);
				}
				if (unk_0x12DD4A0B247D9B4D(uLocal_61))
				{
					if (iLocal_395 == 1)
					{
						if (unk_0x320D1840B6DAA1CC() < iLocal_109 + 7500)
						{
							unk_0xBA6C3C5E9E5A9442();
						}
					}
					unk_0xFFD8EB5462B07B59(&uLocal_61);
				}
				if (iLocal_28 == 4)
				{
					if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
					{
						if (iLocal_469 == 0)
						{
							unk_0x0709E99F1DDFFF26("FHPRB_COPS");
							unk_0x1CF3F44FC2EB9F99("FHPRB_LOST");
							iLocal_469 = 1;
						}
						if (iLocal_314 == 1)
						{
							if (unk_0x320D1840B6DAA1CC() < iLocal_110 + 7500)
							{
								unk_0xBA6C3C5E9E5A9442();
							}
							iLocal_314 = 0;
						}
						if (iLocal_62 > 3)
						{
							if (!unk_0x12DD4A0B247D9B4D(uLocal_59))
							{
								uLocal_59 = func_132(Local_116, 1);
							}
							if (iLocal_305 == 0)
							{
								if (!unk_0x559C03F53E6937FC())
								{
									func_154("GOD_2", 7500, 1);
									iLocal_305 = 1;
								}
							}
						}
					}
					else
					{
						if (unk_0x12DD4A0B247D9B4D(uLocal_59))
						{
							unk_0xFFD8EB5462B07B59(&uLocal_59);
						}
						if (iLocal_314 == 0)
						{
							unk_0xBA6C3C5E9E5A9442();
							func_154("GOD_4", 7500, -1);
							unk_0x1CF3F44FC2EB9F99("FHPRB_COPS");
							iLocal_110 = unk_0x320D1840B6DAA1CC();
							iLocal_314 = 1;
							iLocal_469 = 0;
						}
					}
				}
			}
			else
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_58))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_58);
				}
				if (unk_0x12DD4A0B247D9B4D(uLocal_59))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_59);
				}
				if (unk_0x55A0C756C4A8220C(iLocal_32, 0))
				{
					if (!unk_0x12DD4A0B247D9B4D(uLocal_61))
					{
						uLocal_61 = func_152(iLocal_32, 0, 0);
						unk_0xD809204F14EF9B68(uLocal_61, 1);
						if (unk_0x559C03F53E6937FC())
						{
							unk_0xBA6C3C5E9E5A9442();
						}
						if (iLocal_395 == 0)
						{
							func_154("GOD_6", 7500, -1);
							iLocal_109 = unk_0x320D1840B6DAA1CC();
							iLocal_395 = 1;
						}
						if (!func_155("HELP_1"))
						{
							func_151("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_61))
			{
				unk_0xFFD8EB5462B07B59(&uLocal_61);
			}
			if (unk_0x12DD4A0B247D9B4D(uLocal_59))
			{
				unk_0xFFD8EB5462B07B59(&uLocal_59);
			}
			if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
			{
				if (!unk_0x12DD4A0B247D9B4D(uLocal_58))
				{
					uLocal_58 = func_152(iLocal_33, 0, 0);
					unk_0xD809204F14EF9B68(uLocal_58, 1);
				}
			}
			if (iLocal_315 == 0)
			{
				unk_0xBA6C3C5E9E5A9442();
				func_154("GOD_5", 7500, -1);
				iLocal_315 = 1;
			}
		}
	}
}

void func_151(char* sParam0)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

int func_152(int iParam0, bool bParam1, bool bParam2)
{
	return func_153(iParam0, !bParam1, bParam2);
}

int func_153(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_133(unk_0x9315DBF7D972F07A(), 1f, 1f));
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
		unk_0x293A9399E902A33B(uVar0, func_133(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_133(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_154(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x38BD019DECCC5482(sParam0);
	unk_0x23D3EE043DE19C4B(iParam1, 1);
}

bool func_155(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_156()
{
	if (iLocal_62 > 1)
	{
		func_150();
	}
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_35();
			iLocal_304 = 0;
		}
		iLocal_397 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_402 = 0;
		iLocal_403 = 0;
		iLocal_404[0] = 0;
		iLocal_404[1] = 0;
		iLocal_407[0] = 0;
		iLocal_407[1] = 0;
		iLocal_410 = 0;
		iLocal_411 = 0;
		iLocal_412 = 0;
		iLocal_413 = 0;
		iLocal_414 = 0;
		iLocal_415 = 0;
		iLocal_416 = 0;
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_426 = 0;
		iLocal_427 = 0;
		iLocal_428 = 0;
		iLocal_429 = 0;
		iLocal_430 = 0;
		iLocal_431 = 0;
		iLocal_432 = 0;
		iLocal_433[0] = 0;
		iLocal_433[1] = 0;
		iLocal_436[0] = 0;
		iLocal_436[1] = 0;
		iLocal_439[0] = 0;
		iLocal_439[1] = 0;
		iLocal_442[0] = 0;
		iLocal_442[1] = 0;
		iLocal_445[0] = 0;
		iLocal_445[1] = 0;
		iLocal_448[0] = 0;
		iLocal_448[1] = 0;
		iLocal_451[0] = 0;
		iLocal_451[1] = 0;
		iLocal_455 = 0;
		iLocal_458 = 0;
		iLocal_459[0] = 0;
		iLocal_462[0] = 0;
		iLocal_459[1] = 0;
		iLocal_462[1] = 0;
		iLocal_466 = 0;
		iLocal_467 = 0;
		iLocal_468 = 0;
		iLocal_482 = 0;
		iLocal_315 = 0;
		iLocal_316 = 0;
		iLocal_321 = 0;
		iLocal_387 = 0;
		iLocal_388 = 0;
		iLocal_389 = 0;
		iLocal_390 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_393 = 0;
		iLocal_394 = 0;
		iLocal_395 = 0;
		iLocal_417 = 0;
		iLocal_465 = 0;
		iLocal_483 = 0;
		iLocal_487 = 0;
		iLocal_454 = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
		iLocal_63 = 0;
		while (iLocal_63 <= 6)
		{
			iLocal_306[iLocal_63] = 0;
			iLocal_355[iLocal_63] = 0;
			iLocal_371[iLocal_63] = 0;
			iLocal_379[iLocal_63] = 0;
			iLocal_363[iLocal_63] = 0;
			iLocal_63++;
		}
		unk_0x8FB472886552D737("cellphone@str");
		unk_0x8FB472886552D737("misscarsteal4@director_grip");
		if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
		{
			if (!unk_0x12DD4A0B247D9B4D(uLocal_58))
			{
				uLocal_58 = func_152(iLocal_33, 0, 0);
				unk_0xD809204F14EF9B68(uLocal_58, true);
			}
		}
		unk_0xC0F70A3CDEC87ECE(0);
		if (unk_0xA829C9A2767AC8EF())
		{
			if (!func_31())
			{
				unk_0x42C4310E76AD635A(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1));
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_34))
			{
				func_28(iLocal_34, -1, 1);
				unk_0x3D81769BEC61BFF8(&iLocal_34);
			}
			else
			{
				func_28(0, -1, 1);
			}
		}
		if (!unk_0xE9E8955A780DDA01())
		{
			unk_0x5A7ACD1CDF509B0D(800);
		}
		unk_0x1CF3F44FC2EB9F99("FHPRB_START");
		unk_0x7A997A0A971D305F(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, 0);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (iLocal_465 == 0)
		{
			if (!unk_0x559C03F53E6937FC())
			{
				unk_0x2DA9F9D8E5530E75(5f, 8f, 4);
				func_154("GOD_1", 7500, 1);
				iLocal_465 = 1;
			}
		}
		if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
		{
			if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_33, 0))
			{
				unk_0x1CF3F44FC2EB9F99("FHPRB_TRUCK");
				if (unk_0x12DD4A0B247D9B4D(uLocal_58))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_58);
				}
				func_157(656, 0);
				unk_0x8576657A629C4B0A(1f);
				iLocal_62 = 2;
			}
		}
	}
	if (iLocal_62 == 2)
	{
		if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
		{
			if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_33, 0))
			{
				if (unk_0x817B926B53C0589A(iLocal_33))
				{
					if (func_155("HELP_1"))
					{
						unk_0x3410421C60BF7143(1);
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_58))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_58);
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_61))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_61);
					}
					if (unk_0x987A5F1E1A67E3C0(Local_119, Local_132, 1) < 100f)
					{
						if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
						{
							if (iLocal_316 == 1)
							{
								if (unk_0x320D1840B6DAA1CC() < iLocal_110 + 7500)
								{
									unk_0xBA6C3C5E9E5A9442();
									iLocal_316 = 0;
								}
							}
							if (iLocal_417 == 0)
							{
								unk_0x2DA9F9D8E5530E75(5f, 8f, 4);
								func_154("GOD_7", 7500, -1);
								iLocal_417 = 1;
							}
						}
						else if (iLocal_316 == 0)
						{
							unk_0x2DA9F9D8E5530E75(5f, 8f, 4);
							unk_0x8BAE3B6695282DC0("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_110 = unk_0x320D1840B6DAA1CC();
							func_154("GOD_4", 7500, -1);
							iLocal_316 = 1;
						}
					}
					else if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
					{
						iLocal_62 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (unk_0x12DD4A0B247D9B4D(uLocal_58))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_58);
					}
					if (unk_0x55A0C756C4A8220C(iLocal_32, 0))
					{
						if (!unk_0x12DD4A0B247D9B4D(uLocal_61))
						{
							uLocal_61 = func_152(iLocal_32, 0, 0);
							unk_0xD809204F14EF9B68(uLocal_61, true);
							if (unk_0x559C03F53E6937FC())
							{
								unk_0xBA6C3C5E9E5A9442();
							}
							if (iLocal_395 == 0)
							{
								func_154("GOD_6", 7500, -1);
								iLocal_395 = 1;
							}
							if (!func_155("HELP_1"))
							{
								func_151("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_61))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_61);
				}
				if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
				{
					if (!unk_0x12DD4A0B247D9B4D(uLocal_58))
					{
						uLocal_58 = func_152(iLocal_33, 0, 0);
						unk_0xD809204F14EF9B68(uLocal_58, true);
					}
				}
				if (iLocal_315 == 0)
				{
					unk_0xBA6C3C5E9E5A9442();
					func_154("GOD_5", 7500, -1);
					iLocal_315 = 1;
				}
			}
		}
	}
}

void func_157(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_63164 = iParam0;
	if (!Global_63162)
	{
		Global_63162 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_75250[iVar0 /*9*/] == iParam0)
			{
				Global_75250[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_158()
{
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_35();
			iLocal_304 = 0;
		}
		func_181();
		func_120();
		if (!unk_0xE9E8955A780DDA01())
		{
			unk_0x42C4310E76AD635A(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1));
			unk_0x5A7ACD1CDF509B0D(800);
		}
		if (unk_0xE5965CDF24F93A9F(Global_96938[3]))
		{
			if (unk_0x55A0C756C4A8220C(Global_96938[3], 0))
			{
				if (unk_0x4262B4DCEADC2695(unk_0x15CAA6D7B11F1A7C(Global_96938[3])))
				{
					unk_0x2D58A6131679D82C(Global_96938[3], 1, 1);
					func_160(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((unk_0xCB09A834F0C86FBB(unk_0x15CAA6D7B11F1A7C(Global_96938[3])) || unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(Global_96938[3]))) || unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(Global_96938[3]))) || unk_0xCD8C08FA7D84C27E(unk_0x15CAA6D7B11F1A7C(Global_96938[3])))
				{
					unk_0x2D58A6131679D82C(Global_96938[3], 1, 1);
					func_160(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_159(79);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
}

void func_159(int iParam0)
{
	if (Global_97363 != -1)
	{
		if (iParam0 == Global_97363)
		{
			Global_97367 = 1;
			return;
		}
	}
}

void func_160(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0xE5965CDF24F93A9F(Global_103950.f_4))
	{
		if (unk_0x55A0C756C4A8220C(Global_103950.f_4, 0))
		{
			if (func_180(24) != Global_103950.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_177(unk_0x6B62510F212526DC(Global_103950.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_161(Global_103950.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_161(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xE5965CDF24F93A9F(Global_77137.f_484[25]) && unk_0x55A0C756C4A8220C(Global_77137.f_484[25], 0))
			{
				if (Global_77137.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xA94E098B1788A730(iParam0) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("bus")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_176(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_41(iParam0, &Var0);
		if (func_111(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x6B62510F212526DC(iParam0, 1) };
			uParam4 = unk_0x82FE2343F8BDFF0B(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = unk_0x2E87280918B16506(unk_0x05CBA41180F5D521());
			}
		}
		func_174(iParam5, &Var0, Param1, uParam4, func_63(iParam0));
		func_162(iParam5, iParam0, 0);
	}
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_73(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != unk_0x15CAA6D7B11F1A7C(iParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
	{
		return;
	}
	if (unk_0xE5965CDF24F93A9F(iParam1))
	{
		if (unk_0x55A0C756C4A8220C(iParam1, 0))
		{
			if (!unk_0xA6A089369417736E(iParam1))
			{
				unk_0x2D58A6131679D82C(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_113386.f_32749.f_4801 = func_163();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_180(iParam0);
					if ((unk_0xE5965CDF24F93A9F(iVar0) && unk_0x55A0C756C4A8220C(iVar0, 0)) && iParam1 != iVar0)
					{
						func_40(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

var func_163()
{
	var uVar0;
	
	func_173(&uVar0, unk_0xAA2844CAD88768B5());
	func_172(&uVar0, unk_0x80F97D7D29800A1A());
	func_171(&uVar0, unk_0x09FC827691DACE59());
	func_166(&uVar0, unk_0xD52BD97E61483713());
	func_165(&uVar0, unk_0x771485043FDC55DE());
	func_164(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_164(var uParam0, int iParam1)
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

void func_165(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_166(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_170(*uParam0);
	iVar1 = func_168(*uParam0);
	if (iParam1 < 1 || iParam1 > func_167(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_167(int iParam0, int iParam1)
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

var func_168(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_169(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_169(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_170(var uParam0)
{
	return uParam0 & 15;
}

void func_171(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_172(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_173(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_174(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_73(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			func_175(iParam0);
			func_70(uParam1, &(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 11))
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_66(iParam0, 1);
		}
	}
}

void func_175(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_73(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xE5965CDF24F93A9F(Global_77137.f_139[iParam0]))
		{
			unk_0x2D58A6131679D82C(Global_77137.f_139[iParam0], 1, 1);
			unk_0x3D81769BEC61BFF8(&(Global_77137.f_139[iParam0]));
			Global_77137.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			func_66(iParam0, 0);
		}
	}
}

void func_176(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_175(iParam0);
	func_66(iParam0, 0);
}

int func_177(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_178(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_178(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_95479[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_95479[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_179(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x987A5F1E1A67E3C0(Param0, Global_95479[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

var func_179(int iParam0)
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

int func_180(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77137.f_139[iParam0];
}

void func_181()
{
	Global_94619 = 1;
}

void func_182()
{
	unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
	unk_0x8576657A629C4B0A(0.01f);
	uLocal_53 = unk_0x2915D98110F23A29(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	uLocal_54 = unk_0x2915D98110F23A29(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	uLocal_55 = unk_0x2915D98110F23A29(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	uLocal_56 = unk_0x2915D98110F23A29(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	uLocal_51 = unk_0x2915D98110F23A29(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	uLocal_52 = unk_0x2915D98110F23A29(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_30())
	{
		if (Global_94618 == 1)
		{
			func_184(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_483 = 1;
			iLocal_304 = 1;
			iLocal_62 = 0;
			iLocal_28 = 5;
		}
		else if (func_183() == 0)
		{
			if (func_119() && func_116(7f, 7f, 7f, 1))
			{
				func_184(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_184(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_304 = 1;
			iLocal_483 = 1;
			iLocal_62 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_219(0))
	{
		iLocal_304 = 1;
		iLocal_483 = 1;
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
	else
	{
		iLocal_62 = 0;
		iLocal_28 = 2;
	}
}

int func_183()
{
	if (!Global_100441 == 10 && !Global_100441 == 9)
	{
		return 0;
	}
	return Global_100441.f_2;
}

void func_184(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_30())
	{
		unk_0x2C07CBAFAC54A645(0);
		unk_0xB0550BC91B0159D6(&(Global_100441.f_20), 2);
		unk_0x27F66B7FE7DB7C3A(1);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
		}
		Global_100437 = { Param0 };
		Global_100440 = fParam3;
		Global_100436 = 1;
		if (iParam4 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_100441.f_20), 14);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_100441.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_100441.f_20), 24);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_100441.f_20), 24);
		}
		func_29(1);
	}
}

void func_185()
{
	if (!func_30())
	{
		iLocal_28 = 1;
	}
	else
	{
		iLocal_28 = 1;
	}
}

void func_186()
{
	if (!unk_0xE5965CDF24F93A9F(iLocal_49))
	{
		if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 45f, -616.2f, 30.8f, 1) < 150f)
		{
			unk_0xD69A0C3662175E68(joaat("s_m_m_security_01"));
			if (unk_0x0152AA00FA3130F1(joaat("s_m_m_security_01")))
			{
				iLocal_49 = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0xD6A76BAB45A4B460(iLocal_49, 324, 1);
			}
			unk_0xF1A23B343DFEDFD0(joaat("s_m_m_security_01"));
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_49))
	{
		if (!unk_0xF68107C40359970C(iLocal_49))
		{
			if (unk_0x5B138084858689AC(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_456 == 0)
				{
					if (unk_0xBC7D3EDF3455BC35(iLocal_49))
					{
						unk_0x03A927199A2DFE46(iLocal_49);
					}
					else
					{
						unk_0x51BB443B279E4104(iLocal_49);
					}
					unk_0x1D698ECDFF42AC58(iLocal_49, 65.2f, -617.2f, 31f, 2f, 0);
					unk_0xABC2CA6F28903308(iLocal_49, 1);
					iLocal_113 = unk_0x320D1840B6DAA1CC();
					iLocal_456 = 1;
				}
				else if (unk_0x320D1840B6DAA1CC() > iLocal_113 + 5000)
				{
					if (!unk_0xBFF766829E7783C7(iLocal_49))
					{
						iLocal_456 = 0;
					}
				}
			}
			if (func_188(unk_0xE2D3D51028F0428A(), iLocal_49, 1) < 20f)
			{
				if (iLocal_421 == 0)
				{
					unk_0xF30F15F203736DE4(iLocal_49, unk_0xE2D3D51028F0428A(), -1, 1072, 3);
					iLocal_421 = 1;
				}
			}
			else if (iLocal_421 == 1)
			{
				unk_0xF30F15F203736DE4(iLocal_49, unk_0xE2D3D51028F0428A(), 1, 0, 2);
				iLocal_421 = 0;
			}
		}
	}
	if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 45f, -616.2f, 30.8f, 1) < 50f)
	{
		if (iLocal_457 == 0)
		{
			iLocal_114 = 498972213;
			iLocal_115 = -512924631;
			unk_0x5DD86AC785D8E188(iLocal_114, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
			unk_0x5DD86AC785D8E188(iLocal_115, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
			iLocal_457 = 1;
		}
		if (iLocal_457 == 1)
		{
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
			{
				if (Local_119.f_0 > 35f)
				{
					if (fLocal_135 < 1f)
					{
						fLocal_135 = (fLocal_135 + 0.02f);
					}
					else
					{
						fLocal_135 = 1f;
					}
					if (fLocal_135 <= 1f)
					{
						unk_0x1B3E1454BD86FCE6(iLocal_114, fLocal_135, 0, 1);
						unk_0x1B3E1454BD86FCE6(iLocal_115, fLocal_135, 0, 1);
						unk_0x7E15597AA5F53F9A(iLocal_114, 4, 0, 1);
						unk_0x7E15597AA5F53F9A(iLocal_115, 4, 0, 1);
						iLocal_422 = 0;
					}
				}
				if (Local_119.f_0 < 35f)
				{
					if (fLocal_135 > 0f)
					{
						fLocal_135 = (fLocal_135 - 0.02f);
					}
					else
					{
						fLocal_135 = 0f;
					}
					if (fLocal_135 >= 0f)
					{
						unk_0x1B3E1454BD86FCE6(iLocal_114, fLocal_135, 0, 1);
						unk_0x1B3E1454BD86FCE6(iLocal_115, fLocal_135, 0, 1);
						unk_0x7E15597AA5F53F9A(iLocal_114, 4, 0, 1);
						unk_0x7E15597AA5F53F9A(iLocal_115, 4, 0, 1);
						iLocal_422 = 0;
					}
				}
			}
			else if (iLocal_422 == 0)
			{
				if (Local_119.f_0 < 35f)
				{
					if (fLocal_135 > 0f)
					{
						fLocal_135 = (fLocal_135 - 0.02f);
					}
					else
					{
						fLocal_135 = 0f;
					}
					if (fLocal_135 >= 0f)
					{
						unk_0x1B3E1454BD86FCE6(iLocal_114, fLocal_135, 0, 1);
						unk_0x1B3E1454BD86FCE6(iLocal_115, fLocal_135, 0, 1);
						unk_0x7E15597AA5F53F9A(iLocal_114, 4, 0, 1);
						unk_0x7E15597AA5F53F9A(iLocal_115, 4, 0, 1);
						iLocal_422 = 1;
					}
				}
			}
		}
		if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, 1, 0))
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_49))
			{
				if (!unk_0xF68107C40359970C(iLocal_49))
				{
					if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
					{
						if (iLocal_419 == 0)
						{
							if (iLocal_418 == 0)
							{
								func_149(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
								if (func_187(&uLocal_137, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_418 = 1;
								}
							}
						}
						else if (iLocal_420 == 0)
						{
							func_149(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
							if (func_187(&uLocal_137, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_420 = 1;
							}
						}
					}
					else if (iLocal_419 == 0)
					{
						func_149(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
						if (func_187(&uLocal_137, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_419 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_187(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_148(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_136(sParam2, iParam3, 0);
}

float func_188(int iParam0, int iParam1, int iParam2)
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

void func_189()
{
	int iVar0;
	
	if (!unk_0x559C03F53E6937FC())
	{
		if (!func_193() || !unk_0x0038CA9239065BCA())
		{
			if (iLocal_28 == 3)
			{
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 0)
							{
								if (func_191() && func_190())
								{
									if (func_187(&uLocal_137, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_112 = unk_0x320D1840B6DAA1CC();
										iLocal_392 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 1 && unk_0x320D1840B6DAA1CC() > iLocal_112 + 7000)
							{
								if (func_191() && func_190())
								{
									if (func_187(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_112 = unk_0x320D1840B6DAA1CC();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_430 == 0)
						{
							if (func_191())
							{
								if (func_187(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_95 = unk_0x320D1840B6DAA1CC();
									iLocal_430 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1)
				{
					if (iLocal_455 == 0)
					{
						if (func_191() && func_190())
						{
							if (func_187(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = unk_0x320D1840B6DAA1CC();
								iLocal_455 = 1;
							}
						}
					}
					else if (unk_0x320D1840B6DAA1CC() > iLocal_108 + 8000)
					{
						if (func_191() && func_190())
						{
							if (func_187(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = unk_0x320D1840B6DAA1CC();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_391 == 0)
					{
						func_126();
						if (func_191())
						{
							unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_187(&uLocal_137, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_77 = unk_0x320D1840B6DAA1CC();
									iLocal_387 = 1;
									iLocal_391 = 1;
								}
							}
							else
							{
								iLocal_77 = unk_0x320D1840B6DAA1CC();
								iLocal_387 = 1;
								iLocal_391 = 1;
							}
						}
					}
					if (iLocal_391 == 1)
					{
						if (iLocal_387 == 0)
						{
							iLocal_77 = unk_0x320D1840B6DAA1CC();
							iLocal_387 = 1;
						}
						if (iLocal_387 == 1)
						{
							if (unk_0x320D1840B6DAA1CC() > iLocal_77 + 9000)
							{
								if (func_191())
								{
									if (func_187(&uLocal_137, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_387 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 3)
				{
					if (iLocal_427 == 1)
					{
						if (iLocal_389 == 0)
						{
							if (iLocal_390 == 1)
							{
								if (func_191())
								{
									if (func_187(&uLocal_137, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_389 = 1;
									}
								}
							}
						}
					}
					if (iLocal_388 == 0)
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_33))
						{
							if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
							{
								if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_33, 0))
								{
									if (func_191())
									{
										if (func_187(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = unk_0x320D1840B6DAA1CC();
											iLocal_389 = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0x320D1840B6DAA1CC() > iLocal_78 + 10000)
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_33))
						{
							if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
							{
								if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_33, 0))
								{
									if (func_191())
									{
										if (func_187(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = unk_0x320D1840B6DAA1CC();
										}
									}
								}
							}
						}
					}
					if (iLocal_428 == 1)
					{
						if (iLocal_429 == 0)
						{
							if (func_191())
							{
								if (func_187(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_429 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_190()
{
	if (func_14() == 0)
	{
		func_149(&uLocal_137, 0, unk_0xE2D3D51028F0428A(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_149(&uLocal_137, 1, unk_0xE2D3D51028F0428A(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_149(&uLocal_137, 2, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_191()
{
	int iVar0;
	
	iLocal_66 = 0;
	while (iLocal_66 <= 6)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_35[iLocal_66]))
		{
			if (!unk_0xF68107C40359970C(iLocal_35[iLocal_66]))
			{
				iVar0 = func_192(unk_0xE2D3D51028F0428A(), iLocal_302, 0, 0, -1);
				if (unk_0xE5965CDF24F93A9F(iVar0))
				{
					if (!unk_0xF68107C40359970C(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_66] && func_188(unk_0xE2D3D51028F0428A(), iVar0, 1) < 15f)
				{
					func_149(&uLocal_137, 5, iLocal_35[iLocal_66], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_66++;
	}
	return 0;
}

int func_192(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!unk_0xF68107C40359970C(iParam0))
	{
		unk_0x46951D3186547C7A(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (unk_0xE5965CDF24F93A9F(iVar0[iVar17]))
			{
				if (!unk_0xF68107C40359970C(iVar0[iVar17]))
				{
					if (unk_0x6F8FB52F5D1D0B84(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0xBC7D3EDF3455BC35(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2) <= (iVar0 - 1)
						{
							if (unk_0xE5965CDF24F93A9F(iVar0[(iVar17 + iParam2)]))
							{
								if (!unk_0xF68107C40359970C(iVar0[(iVar17 + iParam2)]))
								{
									if (unk_0x6F8FB52F5D1D0B84(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0xBC7D3EDF3455BC35(iVar0[(iVar17 + iParam2)]))
											{
												return iVar0[(iVar17 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar17 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

int func_193()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_194()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x807D601FA146717A(unk_0xE2D3D51028F0428A()) && unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
		{
			unk_0x8576657A629C4B0A(0f);
		}
		else
		{
			unk_0x8576657A629C4B0A(1f);
		}
	}
	func_201();
	if (iLocal_404[0])
	{
		if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 20f && unk_0x7E006F2E24F03BB4(iLocal_43[0], unk_0xE2D3D51028F0428A()))
		{
			if (iLocal_433[0] == 0)
			{
				unk_0xF30F15F203736DE4(iLocal_43[0], unk_0xE2D3D51028F0428A(), -1, 1072, 3);
				iLocal_433[0] = 1;
			}
			if (iLocal_433[0] == 1)
			{
				if (unk_0x174CED88B97C78D9(iLocal_43[0], joaat("script_task_look_at_entity")) != 0 || unk_0x174CED88B97C78D9(iLocal_43[0], joaat("script_task_look_at_entity")) != 1)
				{
					iLocal_433[0] = 0;
				}
			}
		}
		else if (iLocal_433[0] == 1)
		{
			unk_0xF30F15F203736DE4(iLocal_43[0], unk_0xE2D3D51028F0428A(), 1, 0, 2);
			iLocal_433[0] = 0;
		}
	}
	if (iLocal_404[1])
	{
		if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 20f && unk_0x7E006F2E24F03BB4(iLocal_43[1], unk_0xE2D3D51028F0428A()))
		{
			if (iLocal_433[1] == 0)
			{
				unk_0xF30F15F203736DE4(iLocal_43[1], unk_0xE2D3D51028F0428A(), -1, 1072, 3);
				iLocal_433[1] = 1;
			}
			if (iLocal_433[1] == 1)
			{
				if (unk_0x174CED88B97C78D9(iLocal_43[1], joaat("script_task_look_at_entity")) != 0 || unk_0x174CED88B97C78D9(iLocal_43[1], joaat("script_task_look_at_entity")) != 1)
				{
					iLocal_433[1] = 0;
				}
			}
		}
		else if (iLocal_433[1] == 1)
		{
			unk_0xF30F15F203736DE4(iLocal_43[1], unk_0xE2D3D51028F0428A(), 1, 0, 2);
			iLocal_433[1] = 0;
		}
	}
	if (iLocal_404[0] && iLocal_404[1])
	{
		if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1))
		{
			iLocal_399 = 1;
			iLocal_400 = 0;
		}
		else
		{
			iLocal_399 = 0;
			iLocal_400 = 1;
		}
	}
	else
	{
		if (iLocal_404[0] && !iLocal_404[1])
		{
			iLocal_399 = 1;
			iLocal_400 = 0;
		}
		if (iLocal_404[1] && !iLocal_404[0])
		{
			iLocal_399 = 0;
			iLocal_400 = 1;
		}
	}
	switch (iLocal_31)
	{
		case 0:
			if (unk_0x1E63BE2394148DA0("SCRAP_SECURITY"))
			{
				if (!unk_0x96A05000CCD43584("SCRAP_SECURITY"))
				{
					unk_0xA3D2C191DF3CB742("SCRAP_SECURITY", 1);
				}
				if (unk_0x96A05000CCD43584("SCRAP_SECURITY"))
				{
					if (unk_0xE5965CDF24F93A9F(iLocal_43[0]))
					{
						if (!unk_0xF68107C40359970C(iLocal_43[0]))
						{
							if (!unk_0x4B7E6E16D3345FE8(iLocal_43[0]))
							{
								if (unk_0x5B138084858689AC(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_105[0] = unk_0x320D1840B6DAA1CC();
									if (!unk_0x67360B9474054C5E(iLocal_43[0]))
									{
										if (iLocal_462[0] == 0)
										{
											unk_0xAF0492886BC6C105(iLocal_43[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_459[0] = 0;
											iLocal_462[0] = 1;
										}
									}
								}
								else if (unk_0x320D1840B6DAA1CC() > iLocal_105[0] + 2000)
								{
									if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iLocal_43[0], 1), 863.1551f, -1564.572f, 29.3231f, 1) > 3f)
									{
										if (iLocal_459[0] == 0)
										{
											unk_0x7D1424753688EE7A(iLocal_43[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_462[0] = 0;
											iLocal_459[0] = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_43[1]))
					{
						if (!unk_0xF68107C40359970C(iLocal_43[1]))
						{
							if (!unk_0x4B7E6E16D3345FE8(iLocal_43[1]))
							{
								if (unk_0x5B138084858689AC(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_105[1] = unk_0x320D1840B6DAA1CC();
									if (!unk_0x67360B9474054C5E(iLocal_43[1]))
									{
										if (iLocal_462[1] == 0)
										{
											unk_0xAF0492886BC6C105(iLocal_43[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_459[1] = 0;
											iLocal_462[1] = 1;
										}
									}
								}
								else if (unk_0x320D1840B6DAA1CC() > iLocal_105[1] + 2000)
								{
									if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iLocal_43[1], 1), 940.2881f, -1573.877f, 29.3866f, 1) > 3f)
									{
										if (iLocal_459[1] == 0)
										{
											unk_0x7D1424753688EE7A(iLocal_43[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_462[1] = 0;
											iLocal_459[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xE5965CDF24F93A9F(iLocal_43[0]))
			{
				if (!unk_0xF68107C40359970C(iLocal_43[0]))
				{
					if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 20f)
					{
						if ((func_200(unk_0xE2D3D51028F0428A()) == joaat("weapon_unarmed") || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) || func_199(0))
						{
							if (unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), iLocal_43[0], 100f) || unk_0x7E006F2E24F03BB4(iLocal_43[0], unk_0xE2D3D51028F0428A()))
							{
								if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
								{
									if (iLocal_451[0] == 0)
									{
										if (!unk_0x2E7F5417D4F4DD69(iLocal_43[0], unk_0xE2D3D51028F0428A(), 45f))
										{
											if (!unk_0xBC7D3EDF3455BC35(iLocal_43[0]))
											{
												unk_0x51BB443B279E4104(iLocal_43[0]);
											}
											else
											{
												unk_0x03A927199A2DFE46(iLocal_43[0]);
											}
											unk_0x529D306014D3C29A(iLocal_43[0], unk_0xE2D3D51028F0428A(), 5000);
											iLocal_102[0] = unk_0x320D1840B6DAA1CC();
											func_198(iLocal_43[0]);
											iLocal_451[0] = 1;
										}
									}
									if (iLocal_451[0] == 1)
									{
										if (unk_0x320D1840B6DAA1CC() > iLocal_102[0] + 5000)
										{
											iLocal_451[0] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_196(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_82 = unk_0x320D1840B6DAA1CC();
											iLocal_403 = 1;
										}
										else if (unk_0x320D1840B6DAA1CC() > iLocal_82 + 15000)
										{
											func_196(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_82 = unk_0x320D1840B6DAA1CC();
										}
									}
									else
									{
										if (iLocal_407[0] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_196(iLocal_43[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0x320D1840B6DAA1CC();
												iLocal_410 = 1;
											}
											else if (unk_0x320D1840B6DAA1CC() > iLocal_88 + 15000)
											{
												func_196(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0x320D1840B6DAA1CC();
											}
										}
										if (iLocal_407[1] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_196(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = unk_0x320D1840B6DAA1CC();
												iLocal_411 = 1;
											}
											else if (unk_0x320D1840B6DAA1CC() > iLocal_89 + 15000)
											{
												func_196(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = unk_0x320D1840B6DAA1CC();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_43[1]))
			{
				if (!unk_0xF68107C40359970C(iLocal_43[1]))
				{
					if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 15f)
					{
						if ((func_200(unk_0xE2D3D51028F0428A()) == joaat("weapon_unarmed") || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) || func_199(0))
						{
							if (unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), iLocal_43[1], 100f))
							{
								if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
								{
									if (iLocal_451[1] == 0)
									{
										if (!unk_0x2E7F5417D4F4DD69(iLocal_43[1], unk_0xE2D3D51028F0428A(), 45f))
										{
											if (!unk_0xBC7D3EDF3455BC35(iLocal_43[1]))
											{
												unk_0x51BB443B279E4104(iLocal_43[1]);
											}
											else
											{
												unk_0x03A927199A2DFE46(iLocal_43[1]);
											}
											unk_0x529D306014D3C29A(iLocal_43[1], unk_0xE2D3D51028F0428A(), 5000);
											iLocal_102[1] = unk_0x320D1840B6DAA1CC();
											func_198(iLocal_43[1]);
											iLocal_451[1] = 1;
										}
									}
									if (iLocal_451[1] == 1)
									{
										if (unk_0x320D1840B6DAA1CC() > iLocal_102[1] + 5000)
										{
											iLocal_451[1] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_196(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_82 = unk_0x320D1840B6DAA1CC();
											iLocal_403 = 1;
										}
										else if (unk_0x320D1840B6DAA1CC() > iLocal_82 + 15000)
										{
											func_196(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_82 = unk_0x320D1840B6DAA1CC();
										}
									}
									else
									{
										if (iLocal_407[1] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_196(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_88 = unk_0x320D1840B6DAA1CC();
												iLocal_410 = 1;
											}
											else if (unk_0x320D1840B6DAA1CC() > iLocal_88 + 15000)
											{
												func_196(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_88 = unk_0x320D1840B6DAA1CC();
											}
										}
										if (iLocal_407[0] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_196(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_89 = unk_0x320D1840B6DAA1CC();
												iLocal_411 = 1;
											}
											else if (unk_0x320D1840B6DAA1CC() > iLocal_89 + 15000)
											{
												func_196(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_89 = unk_0x320D1840B6DAA1CC();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (func_195() || iLocal_398 == 1)
			{
				if (unk_0xE5965CDF24F93A9F(iLocal_43[0]))
				{
					if (!unk_0xF68107C40359970C(iLocal_43[0]))
					{
						if (unk_0x7E006F2E24F03BB4(iLocal_43[0], unk_0xE2D3D51028F0428A()))
						{
							iLocal_99[0] = unk_0x320D1840B6DAA1CC();
							iLocal_445[0] = 1;
							if (iLocal_442[0] == 0)
							{
								if (unk_0xBC7D3EDF3455BC35(iLocal_43[0]))
								{
									unk_0x03A927199A2DFE46(iLocal_43[0]);
								}
								else
								{
									unk_0x51BB443B279E4104(iLocal_43[0]);
								}
								unk_0xBC12D08EE7559CCD(iLocal_43[0], 50, 1);
								unk_0xC1A74225341AA9FB(iLocal_43[0], unk_0xE2D3D51028F0428A(), 0, 16);
								func_198(iLocal_43[0]);
								iLocal_442[0] = 1;
							}
						}
						else if (iLocal_448[0] == 0)
						{
							if (iLocal_445[0] == 0)
							{
								if (unk_0xBC7D3EDF3455BC35(iLocal_43[0]))
								{
									unk_0x03A927199A2DFE46(iLocal_43[0]);
								}
								else
								{
									unk_0x51BB443B279E4104(iLocal_43[0]);
								}
								unk_0x7D1424753688EE7A(iLocal_43[0], unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_198(iLocal_43[0]);
								iLocal_448[0] = 1;
							}
							if (iLocal_445[0] == 1)
							{
								if (unk_0x320D1840B6DAA1CC() > iLocal_99[0] + 500)
								{
									if (unk_0xBC7D3EDF3455BC35(iLocal_43[0]))
									{
										unk_0x03A927199A2DFE46(iLocal_43[0]);
									}
									else
									{
										unk_0x51BB443B279E4104(iLocal_43[0]);
									}
									unk_0x7D1424753688EE7A(iLocal_43[0], unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_198(iLocal_43[0]);
									iLocal_448[0] = 1;
								}
							}
						}
					}
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_43[1]))
				{
					if (!unk_0xF68107C40359970C(iLocal_43[1]))
					{
						if (unk_0x7E006F2E24F03BB4(iLocal_43[1], unk_0xE2D3D51028F0428A()))
						{
							iLocal_99[1] = unk_0x320D1840B6DAA1CC();
							iLocal_445[1] = 1;
							if (iLocal_442[1] == 0)
							{
								if (unk_0xBC7D3EDF3455BC35(iLocal_43[1]))
								{
									unk_0x03A927199A2DFE46(iLocal_43[1]);
								}
								else
								{
									unk_0x51BB443B279E4104(iLocal_43[1]);
								}
								unk_0xBC12D08EE7559CCD(iLocal_43[1], 50, 1);
								unk_0xC1A74225341AA9FB(iLocal_43[1], unk_0xE2D3D51028F0428A(), 0, 16);
								func_198(iLocal_43[1]);
								iLocal_442[1] = 1;
							}
						}
						else if (iLocal_448[1] == 0)
						{
							if (iLocal_445[1] == 0)
							{
								if (unk_0xBC7D3EDF3455BC35(iLocal_43[1]))
								{
									unk_0x03A927199A2DFE46(iLocal_43[1]);
								}
								else
								{
									unk_0x51BB443B279E4104(iLocal_43[1]);
								}
								unk_0x7D1424753688EE7A(iLocal_43[1], unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_198(iLocal_43[1]);
								iLocal_448[1] = 1;
							}
							if (iLocal_445[1] == 1)
							{
								if (unk_0x320D1840B6DAA1CC() > iLocal_99[1] + 500)
								{
									if (unk_0xBC7D3EDF3455BC35(iLocal_43[1]))
									{
										unk_0x03A927199A2DFE46(iLocal_43[1]);
									}
									else
									{
										unk_0x51BB443B279E4104(iLocal_43[1]);
									}
									unk_0x7D1424753688EE7A(iLocal_43[1], unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_198(iLocal_43[1]);
									iLocal_448[1] = 1;
								}
							}
						}
					}
				}
				if (func_195())
				{
					if (iLocal_412 == 0)
					{
						if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < 2)
						{
							unk_0xC0F70A3CDEC87ECE(5);
							unk_0x8576657A629C4B0A(1f);
							unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 2, 0);
							unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
							iLocal_412 = 1;
						}
					}
					if (iLocal_399 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 20f)
							{
								if (!unk_0xB6F46ABD140050F1(iLocal_43[0]))
								{
									func_196(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_87 = unk_0x320D1840B6DAA1CC();
									iLocal_401 = 1;
								}
							}
						}
						else if (unk_0x320D1840B6DAA1CC() > iLocal_87 + 7000)
						{
							if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 20f)
							{
								if (!unk_0xB6F46ABD140050F1(iLocal_43[0]))
								{
									func_196(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_87 = unk_0x320D1840B6DAA1CC();
								}
							}
						}
					}
					if (iLocal_400 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 20f)
							{
								if (!unk_0xB6F46ABD140050F1(iLocal_43[1]))
								{
									func_196(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = unk_0x320D1840B6DAA1CC();
									iLocal_401 = 1;
								}
							}
						}
						else if (unk_0x320D1840B6DAA1CC() > iLocal_87 + 7000)
						{
							if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 20f)
							{
								if (!unk_0xB6F46ABD140050F1(iLocal_43[1]))
								{
									func_196(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = unk_0x320D1840B6DAA1CC();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_458 == 0)
					{
						iLocal_50 = func_192(unk_0xE2D3D51028F0428A(), joaat("COP"), 0, 0, 28);
						if (iLocal_50 != 0)
						{
							if (unk_0xE5965CDF24F93A9F(iLocal_50))
							{
								if (!unk_0xF68107C40359970C(iLocal_50))
								{
									if (func_188(unk_0xE2D3D51028F0428A(), iLocal_50, 1) < 35f)
									{
										iLocal_458 = 1;
									}
								}
							}
						}
					}
					if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0 && iLocal_458 == 0)
					{
						if (iLocal_399 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 20f)
								{
									if (!unk_0xB6F46ABD140050F1(iLocal_43[0]))
									{
										func_196(iLocal_43[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = unk_0x320D1840B6DAA1CC();
										iLocal_402 = 1;
									}
								}
							}
							else if (unk_0x320D1840B6DAA1CC() > iLocal_86 + 7000)
							{
								if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 20f)
								{
									if (!unk_0xB6F46ABD140050F1(iLocal_43[0]))
									{
										func_196(iLocal_43[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = unk_0x320D1840B6DAA1CC();
									}
								}
							}
						}
						if (iLocal_400 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 20f)
								{
									if (!unk_0xB6F46ABD140050F1(iLocal_43[1]))
									{
										func_196(iLocal_43[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = unk_0x320D1840B6DAA1CC();
										iLocal_402 = 1;
									}
								}
							}
							else if (unk_0x320D1840B6DAA1CC() > iLocal_86 + 7000)
							{
								if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 20f)
								{
									if (!unk_0xB6F46ABD140050F1(iLocal_43[1]))
									{
										func_196(iLocal_43[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = unk_0x320D1840B6DAA1CC();
									}
								}
							}
						}
					}
				}
			}
			if (!func_195())
			{
				if (iLocal_414 == 0)
				{
					if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 893.2f, -1556.5f, 30f, 1) < 18f)
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_43[0]))
						{
							if (!unk_0xF68107C40359970C(iLocal_43[0]))
							{
								if (unk_0x7E006F2E24F03BB4(iLocal_43[0], unk_0xE2D3D51028F0428A()))
								{
									iLocal_81 = unk_0x320D1840B6DAA1CC();
									iLocal_414 = 1;
								}
							}
						}
						if (unk_0xE5965CDF24F93A9F(iLocal_43[1]))
						{
							if (!unk_0xF68107C40359970C(iLocal_43[1]))
							{
								if (unk_0x7E006F2E24F03BB4(iLocal_43[1], unk_0xE2D3D51028F0428A()))
								{
									iLocal_81 = unk_0x320D1840B6DAA1CC();
									iLocal_414 = 1;
								}
							}
						}
					}
				}
				if (iLocal_398 == 0)
				{
					if (unk_0xE5965CDF24F93A9F(iLocal_43[0]))
					{
						if (!unk_0xF68107C40359970C(iLocal_43[0]))
						{
							if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) > 4f)
							{
								if (unk_0x7E006F2E24F03BB4(iLocal_43[0], unk_0xE2D3D51028F0428A()))
								{
									if (iLocal_436[0] == 0)
									{
										if (unk_0xBC7D3EDF3455BC35(iLocal_43[0]))
										{
											unk_0x03A927199A2DFE46(iLocal_43[0]);
										}
										else
										{
											unk_0x51BB443B279E4104(iLocal_43[0]);
										}
										unk_0xC149E50FBB27DD70(iLocal_43[0], unk_0xE2D3D51028F0428A(), -1, 0.5f, 2f, 1073741824, 0);
										func_198(iLocal_43[0]);
										iLocal_436[0] = 1;
									}
									iLocal_96[0] = unk_0x320D1840B6DAA1CC();
								}
								else if (unk_0x320D1840B6DAA1CC() > iLocal_96[0] + 500)
								{
									if (iLocal_439[0] == 0)
									{
										if (unk_0xBC7D3EDF3455BC35(iLocal_43[0]))
										{
											unk_0x03A927199A2DFE46(iLocal_43[0]);
										}
										else
										{
											unk_0x51BB443B279E4104(iLocal_43[0]);
										}
										unk_0x7D1424753688EE7A(iLocal_43[0], unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_198(iLocal_43[0]);
										iLocal_439[0] = 1;
									}
								}
							}
							else if (iLocal_484[0] == 0)
							{
								if (unk_0xBC7D3EDF3455BC35(iLocal_43[0]))
								{
									unk_0x03A927199A2DFE46(iLocal_43[0]);
								}
								else
								{
									unk_0x51BB443B279E4104(iLocal_43[0]);
								}
								unk_0xA888F8CC04F25CC8(&uLocal_57);
								unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
								unk_0x83F5BCFFFBA26699(0, 2000);
								unk_0x3F2B528DF27C8A9F(uLocal_57, 1);
								unk_0xC963A45B50851768(uLocal_57);
								unk_0x8ACADA903FCAA42F(iLocal_43[0], uLocal_57);
								unk_0x7461D7C5BA953BC7(&uLocal_57);
								func_198(iLocal_43[0]);
								iLocal_484[0] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0xB6F46ABD140050F1(iLocal_43[0]))
											{
												func_196(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_83 = unk_0x320D1840B6DAA1CC();
												iLocal_84 = unk_0x320D1840B6DAA1CC();
												iLocal_81 = unk_0x320D1840B6DAA1CC();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[0] = 1;
											}
										}
									}
									else if (unk_0x320D1840B6DAA1CC() > iLocal_83 + 7000)
									{
										if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0xB6F46ABD140050F1(iLocal_43[0]))
											{
												func_196(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_83 = unk_0x320D1840B6DAA1CC();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0xB6F46ABD140050F1(iLocal_43[0]))
											{
												func_196(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x320D1840B6DAA1CC() > iLocal_84 + 7000)
							{
								if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 15f)
								{
									if (!unk_0xB6F46ABD140050F1(iLocal_43[0]))
									{
										func_196(iLocal_43[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_84 = unk_0x320D1840B6DAA1CC();
									}
								}
							}
						}
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_43[1]))
					{
						if (!unk_0xF68107C40359970C(iLocal_43[1]))
						{
							if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) > 4f)
							{
								if (unk_0x7E006F2E24F03BB4(iLocal_43[1], unk_0xE2D3D51028F0428A()))
								{
									if (iLocal_436[1] == 0)
									{
										if (unk_0xBC7D3EDF3455BC35(iLocal_43[1]))
										{
											unk_0x03A927199A2DFE46(iLocal_43[1]);
										}
										else
										{
											unk_0x51BB443B279E4104(iLocal_43[1]);
										}
										unk_0xC149E50FBB27DD70(iLocal_43[1], unk_0xE2D3D51028F0428A(), -1, 0.5f, 2f, 1073741824, 0);
										func_198(iLocal_43[1]);
										iLocal_436[1] = 1;
									}
									iLocal_96[1] = unk_0x320D1840B6DAA1CC();
								}
								else if (unk_0x320D1840B6DAA1CC() > iLocal_96[1] + 500)
								{
									if (iLocal_439[1] == 0)
									{
										if (unk_0xBC7D3EDF3455BC35(iLocal_43[1]))
										{
											unk_0x03A927199A2DFE46(iLocal_43[1]);
										}
										else
										{
											unk_0x51BB443B279E4104(iLocal_43[1]);
										}
										unk_0x7D1424753688EE7A(iLocal_43[1], unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_198(iLocal_43[1]);
										iLocal_439[1] = 1;
									}
								}
							}
							else if (iLocal_484[1] == 0)
							{
								if (unk_0xBC7D3EDF3455BC35(iLocal_43[1]))
								{
									unk_0x03A927199A2DFE46(iLocal_43[1]);
								}
								else
								{
									unk_0x51BB443B279E4104(iLocal_43[1]);
								}
								unk_0xA888F8CC04F25CC8(&uLocal_57);
								unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
								unk_0x83F5BCFFFBA26699(0, 2000);
								unk_0x3F2B528DF27C8A9F(uLocal_57, 1);
								unk_0xC963A45B50851768(uLocal_57);
								unk_0x8ACADA903FCAA42F(iLocal_43[1], uLocal_57);
								unk_0x7461D7C5BA953BC7(&uLocal_57);
								func_198(iLocal_43[1]);
								iLocal_484[1] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0xB6F46ABD140050F1(iLocal_43[1]))
											{
												func_196(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_83 = unk_0x320D1840B6DAA1CC();
												iLocal_85 = unk_0x320D1840B6DAA1CC();
												iLocal_81 = unk_0x320D1840B6DAA1CC();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[1] = 1;
											}
										}
									}
									else if (unk_0x320D1840B6DAA1CC() > iLocal_83 + 7000)
									{
										if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0xB6F46ABD140050F1(iLocal_43[1]))
											{
												func_196(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_83 = unk_0x320D1840B6DAA1CC();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0xB6F46ABD140050F1(iLocal_43[1]))
											{
												func_196(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x320D1840B6DAA1CC() > iLocal_85 + 7000)
							{
								if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 10f)
								{
									if (!unk_0xB6F46ABD140050F1(iLocal_43[1]))
									{
										func_196(iLocal_43[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_85 = unk_0x320D1840B6DAA1CC();
									}
								}
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_454 == 0)
						{
							if (unk_0x320D1840B6DAA1CC() > iLocal_81 + 22000)
							{
								iLocal_454 = 1;
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_398 == 0)
						{
							if (unk_0x320D1840B6DAA1CC() > iLocal_81 + 30000)
							{
								unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 2, 0);
								iLocal_398 = 1;
							}
						}
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_33))
					{
						if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
						{
							if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_33, 1))
							{
								if (unk_0x7E006F2E24F03BB4(iLocal_43[0], unk_0xE2D3D51028F0428A()) || unk_0x7E006F2E24F03BB4(iLocal_43[1], unk_0xE2D3D51028F0428A()))
								{
									iLocal_398 = 1;
								}
							}
							if (func_188(unk_0xE2D3D51028F0428A(), iLocal_33, 1) < 5f && unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A()))
							{
								if (unk_0x7E006F2E24F03BB4(iLocal_43[0], unk_0xE2D3D51028F0428A()) || unk_0x7E006F2E24F03BB4(iLocal_43[1], unk_0xE2D3D51028F0428A()))
								{
									iLocal_398 = 1;
								}
							}
						}
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_43[0]))
					{
						if (!unk_0xF68107C40359970C(iLocal_43[0]))
						{
							if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
							{
								if (unk_0x1E6ABFB33BDD2A4C(unk_0xE2D3D51028F0428A()))
								{
									if (unk_0x7E006F2E24F03BB4(iLocal_43[0], unk_0xE2D3D51028F0428A()))
									{
										iLocal_398 = 1;
									}
								}
							}
						}
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_43[1]))
					{
						if (!unk_0xF68107C40359970C(iLocal_43[1]))
						{
							if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
							{
								if (unk_0x1E6ABFB33BDD2A4C(unk_0xE2D3D51028F0428A()))
								{
									if (unk_0x7E006F2E24F03BB4(iLocal_43[1], unk_0xE2D3D51028F0428A()))
									{
										iLocal_398 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_195()
{
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iLocal_80 = 0;
		while (iLocal_80 <= 6)
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_35[iLocal_80]))
			{
				if (!unk_0xF68107C40359970C(iLocal_35[iLocal_80]))
				{
					if (func_200(unk_0xE2D3D51028F0428A()) != joaat("weapon_unarmed") && !func_199(0))
					{
						if (unk_0x7E006F2E24F03BB4(iLocal_35[iLocal_80], unk_0xE2D3D51028F0428A()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_80++;
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_43[0]))
		{
			if (!unk_0xF68107C40359970C(iLocal_43[0]))
			{
				if (func_200(unk_0xE2D3D51028F0428A()) != joaat("weapon_unarmed") && !func_199(0))
				{
					if (unk_0x7E006F2E24F03BB4(iLocal_43[0], unk_0xE2D3D51028F0428A()))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_43[1]))
		{
			if (!unk_0xF68107C40359970C(iLocal_43[1]))
			{
				if (func_200(unk_0xE2D3D51028F0428A()) != joaat("weapon_unarmed") && !func_199(0))
				{
					if (unk_0x7E006F2E24F03BB4(iLocal_43[1], unk_0xE2D3D51028F0428A()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_196(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x49C085D876A9986D(uParam0, sParam1, sParam2, func_197(iParam3), 0);
}

int func_197(int iParam0)
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

void func_198(int iParam0)
{
	if (iParam0 == iLocal_43[0])
	{
		iLocal_433[0] = 0;
		iLocal_459[0] = 0;
		iLocal_462[0] = 0;
		iLocal_451[0] = 0;
		iLocal_442[0] = 0;
		iLocal_448[0] = 0;
		iLocal_436[0] = 0;
		iLocal_439[0] = 0;
		iLocal_484[0] = 0;
	}
	if (iParam0 == iLocal_43[1])
	{
		iLocal_433[1] = 0;
		iLocal_459[1] = 0;
		iLocal_462[1] = 0;
		iLocal_451[1] = 0;
		iLocal_442[1] = 0;
		iLocal_448[1] = 0;
		iLocal_436[1] = 0;
		iLocal_439[1] = 0;
		iLocal_484[1] = 0;
	}
}

int func_199(int iParam0)
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

int func_200(int iParam0)
{
	var uVar0;
	
	unk_0xA7E29842FA438ED6(iParam0, &uVar0, 1);
	return uVar0;
}

void func_201()
{
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			Local_119 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_43[0]))
	{
		if (!unk_0xF68107C40359970C(iLocal_43[0]))
		{
			Local_125[0 /*3*/] = { unk_0x6B62510F212526DC(iLocal_43[0], 1) };
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_43[1]))
	{
		if (!unk_0xF68107C40359970C(iLocal_43[1]))
		{
			Local_125[1 /*3*/] = { unk_0x6B62510F212526DC(iLocal_43[1], 1) };
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_43[0]))
	{
		if (!unk_0xF68107C40359970C(iLocal_43[0]))
		{
			iLocal_404[0] = 1;
		}
		else
		{
			iLocal_404[0] = 0;
		}
	}
	else
	{
		iLocal_404[0] = 0;
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_43[1]))
	{
		if (!unk_0xF68107C40359970C(iLocal_43[1]))
		{
			iLocal_404[1] = 1;
		}
		else
		{
			iLocal_404[1] = 0;
		}
	}
	else
	{
		iLocal_404[1] = 0;
	}
	if (iLocal_31 != 0)
	{
		if (iLocal_31 == 1)
		{
			if (iLocal_404[0] == 1)
			{
				if (iLocal_404[1] == 1)
				{
					if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1))
					{
						if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 20f)
						{
							if (((Local_119.f_0 < Local_125[0 /*3*/] && !unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), iLocal_43[0], 90f)) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x320D1840B6DAA1CC();
								iLocal_105[1] = unk_0x320D1840B6DAA1CC();
							}
						}
						else if (Local_119.f_0 < Local_125[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x320D1840B6DAA1CC();
							iLocal_105[1] = unk_0x320D1840B6DAA1CC();
						}
					}
					else if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 15f)
					{
						if ((Local_119.f_0 > Local_125[1 /*3*/] && !unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), iLocal_43[1], 90f)) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x320D1840B6DAA1CC();
							iLocal_105[1] = unk_0x320D1840B6DAA1CC();
						}
					}
					else if (Local_119.f_0 > Local_125[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x320D1840B6DAA1CC();
						iLocal_105[1] = unk_0x320D1840B6DAA1CC();
					}
				}
				else if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1))
				{
					if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 15f)
					{
						if ((Local_119.f_0 < Local_125[0 /*3*/] && !unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), iLocal_43[0], 90f)) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x320D1840B6DAA1CC();
							iLocal_105[1] = unk_0x320D1840B6DAA1CC();
						}
					}
					else if (Local_119.f_0 < Local_125[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x320D1840B6DAA1CC();
						iLocal_105[1] = unk_0x320D1840B6DAA1CC();
					}
				}
			}
			else if (iLocal_404[1] == 1)
			{
				if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 15f)
				{
					if ((Local_119.f_0 > Local_125[1 /*3*/] && !unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), iLocal_43[1], 90f)) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x320D1840B6DAA1CC();
						iLocal_105[1] = unk_0x320D1840B6DAA1CC();
					}
				}
				else if (Local_119.f_0 > Local_125[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_459[0] = 0;
					iLocal_462[0] = 0;
					iLocal_459[1] = 0;
					iLocal_462[1] = 0;
					iLocal_105[0] = unk_0x320D1840B6DAA1CC();
					iLocal_105[1] = unk_0x320D1840B6DAA1CC();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_398 == 0)
			{
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0) || Local_119.f_0 > 942f)
				{
					if (!unk_0xF68107C40359970C(iLocal_43[1]))
					{
						if (Local_119.f_0 > Local_125[1 /*3*/])
						{
							if (!unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), iLocal_43[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x320D1840B6DAA1CC();
								iLocal_105[1] = unk_0x320D1840B6DAA1CC();
							}
						}
					}
					else if (Local_119.f_0 > 942f)
					{
						if (!unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), iLocal_43[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x320D1840B6DAA1CC();
							iLocal_105[1] = unk_0x320D1840B6DAA1CC();
						}
					}
				}
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0) || Local_119.f_0 < 860f)
				{
					if (!unk_0xF68107C40359970C(iLocal_43[0]))
					{
						if (Local_119.f_0 < Local_125[0 /*3*/])
						{
							if (!unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), iLocal_43[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x320D1840B6DAA1CC();
								iLocal_105[1] = unk_0x320D1840B6DAA1CC();
							}
						}
					}
					else if (Local_119.f_0 < 860f)
					{
						if (!unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), iLocal_43[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x320D1840B6DAA1CC();
							iLocal_105[1] = unk_0x320D1840B6DAA1CC();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 1)
	{
		if (iLocal_31 != 2)
		{
			if (iLocal_404[0] == 1)
			{
				if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 20f)
				{
					if ((func_200(unk_0xE2D3D51028F0428A()) == joaat("weapon_unarmed") || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) || func_199(0))
					{
						if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0))
						{
							if (Local_119.f_0 > Local_125[0 /*3*/] || unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), iLocal_43[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 15f)
				{
					if ((func_200(unk_0xE2D3D51028F0428A()) == joaat("weapon_unarmed") || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) || func_199(0))
					{
						if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
						{
							if (Local_119.f_0 < Local_125[1 /*3*/] || unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), iLocal_43[1], 90f))
							{
								iLocal_31 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 2)
	{
		if (unk_0x89D0E0233F6E59A7(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (iLocal_482 == 1)
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) != 0)
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_43[0]))
			{
				if (!unk_0xF68107C40359970C(iLocal_43[0]))
				{
					if (unk_0x7E006F2E24F03BB4(iLocal_43[0], unk_0xE2D3D51028F0428A()))
					{
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_43[1]))
			{
				if (!unk_0xF68107C40359970C(iLocal_43[1]))
				{
					if (unk_0x7E006F2E24F03BB4(iLocal_43[1], unk_0xE2D3D51028F0428A()))
					{
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
		}
		if (iLocal_431 == 0)
		{
			if (iLocal_430 == 1)
			{
				if (unk_0x320D1840B6DAA1CC() > iLocal_95 + 4000)
				{
					iLocal_94 = 0;
					while (iLocal_94 <= 6)
					{
						if (func_193())
						{
							if (unk_0xE5965CDF24F93A9F(iLocal_35[iLocal_94]))
							{
								if (!unk_0xF68107C40359970C(iLocal_35[iLocal_94]))
								{
									if (unk_0x769CB0E209F11AD8(iLocal_35[iLocal_94]))
									{
										iLocal_31 = 2;
										iLocal_431 = 1;
									}
								}
							}
						}
						iLocal_94++;
					}
				}
			}
		}
		if ((iLocal_29 == 4 || iLocal_29 == 3) || iLocal_430 == 1)
		{
			iLocal_31 = 2;
			iLocal_427 = 1;
			iLocal_398 = 1;
		}
		if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (iLocal_404[0] == 1)
			{
				if (func_200(unk_0xE2D3D51028F0428A()) != joaat("weapon_unarmed") && !func_199(0))
				{
					if (unk_0x7E006F2E24F03BB4(iLocal_43[0], unk_0xE2D3D51028F0428A()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_200(unk_0xE2D3D51028F0428A()) != joaat("weapon_unarmed") && !func_199(0))
				{
					if (unk_0x7E006F2E24F03BB4(iLocal_43[1], unk_0xE2D3D51028F0428A()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (unk_0x987A5F1E1A67E3C0(Local_119, Local_132, 1) < 36f)
		{
			if (iLocal_404[0] == 1)
			{
				if (unk_0x7E006F2E24F03BB4(iLocal_43[0], unk_0xE2D3D51028F0428A()))
				{
					iLocal_31 = 2;
				}
				if (func_188(iLocal_43[0], unk_0xE2D3D51028F0428A(), 1) < 20f)
				{
					if (unk_0x42A51C8E69566474(unk_0x9E2D6C50374FCFA9(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (Local_119.f_2 < 36f || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if (unk_0x7E006F2E24F03BB4(iLocal_43[1], unk_0xE2D3D51028F0428A()))
					{
						iLocal_31 = 2;
					}
					if (func_188(iLocal_43[1], unk_0xE2D3D51028F0428A(), 1) < 20f)
					{
						if (unk_0x42A51C8E69566474(unk_0x9E2D6C50374FCFA9(), iLocal_43[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_404[0] == 1)
		{
			if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[0], 1) < 20f)
			{
				if (Local_119.f_0 > Local_125[0 /*3*/] && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
				{
					if (unk_0x7E006F2E24F03BB4(iLocal_43[0], unk_0xE2D3D51028F0428A()) || unk_0x42A51C8E69566474(unk_0x9E2D6C50374FCFA9(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_404[1] == 1)
		{
			if (func_188(unk_0xE2D3D51028F0428A(), iLocal_43[1], 1) < 20f)
			{
				if (Local_119.f_0 < Local_125[1 /*3*/] && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
				{
					if (unk_0x7E006F2E24F03BB4(iLocal_43[1], unk_0xE2D3D51028F0428A()) || unk_0x42A51C8E69566474(unk_0x9E2D6C50374FCFA9(), iLocal_43[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_202()
{
	iLocal_64 = 0;
	while (iLocal_64 <= 6)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_35[iLocal_64]))
		{
			if (!unk_0xF68107C40359970C(iLocal_35[iLocal_64]))
			{
				if (iLocal_330[iLocal_64] == 0)
				{
					if (func_188(unk_0xE2D3D51028F0428A(), iLocal_35[iLocal_64], 1) > 20f)
					{
						iLocal_330[iLocal_64] = 1;
					}
				}
				if (iLocal_330[iLocal_64] == 1)
				{
					if (func_188(unk_0xE2D3D51028F0428A(), iLocal_35[iLocal_64], 1) < 20f)
					{
						iLocal_330[iLocal_64] = 0;
					}
				}
			}
			else if (iLocal_330[iLocal_64] == 0)
			{
				iLocal_330[iLocal_64] = 1;
			}
		}
		else if (iLocal_330[iLocal_64] == 0)
		{
			iLocal_330[iLocal_64] = 1;
		}
		iLocal_64++;
	}
	if (((((iLocal_330[0] == 1 && iLocal_330[1] == 1) && iLocal_330[2] == 1) && iLocal_330[3] == 1) && iLocal_330[4] == 1) && iLocal_330[5] == 1)
	{
		iLocal_338 = 1;
	}
	else
	{
		iLocal_338 = 0;
	}
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_35[iLocal_63]))
		{
			if (!unk_0xF68107C40359970C(iLocal_35[iLocal_63]))
			{
				func_207(iLocal_35[iLocal_63]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_206(1);
						if (iLocal_416 == 1)
						{
							func_126();
						}
					}
					if (unk_0xD16A3D24DF85C222(iLocal_35[iLocal_63], 18))
					{
						if (iLocal_29 != 4)
						{
							func_206(4);
							if (iLocal_416 == 1)
							{
								func_204();
							}
							iLocal_482 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (unk_0x89D0E0233F6E59A7(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_206(4);
							if (iLocal_416 == 1)
							{
								func_204();
							}
						}
					}
					if ((((((((func_203(iLocal_35[iLocal_63], iLocal_35[0]) || func_203(iLocal_35[iLocal_63], iLocal_35[1])) || func_203(iLocal_35[iLocal_63], iLocal_35[2])) || func_203(iLocal_35[iLocal_63], iLocal_35[3])) || func_203(iLocal_35[iLocal_63], iLocal_35[4])) || func_203(iLocal_35[iLocal_63], iLocal_35[5])) || func_203(iLocal_35[iLocal_63], iLocal_35[6])) || func_203(iLocal_35[iLocal_63], iLocal_43[0])) || func_203(iLocal_35[iLocal_63], iLocal_43[1]))
					{
						if (iLocal_29 != 4)
						{
							func_206(4);
							if (iLocal_416 == 1)
							{
								func_204();
							}
							iLocal_482 = 1;
						}
					}
					if ((func_200(unk_0xE2D3D51028F0428A()) == joaat("weapon_unarmed") || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || func_199(0))
					{
						if (iLocal_398 == 0)
						{
							if (func_188(unk_0xE2D3D51028F0428A(), iLocal_35[iLocal_63], 1) > 20f)
							{
								if (iLocal_322[iLocal_63] == 1)
								{
									iLocal_322[iLocal_63] = 0;
								}
								if (((((iLocal_338 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_206(0);
								}
							}
							if (func_188(unk_0xE2D3D51028F0428A(), iLocal_35[iLocal_63], 1) < 20f && unk_0x7E006F2E24F03BB4(iLocal_35[iLocal_63], unk_0xE2D3D51028F0428A()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_431 == 0 && iLocal_398 == 0)
									{
										func_206(1);
										if (iLocal_416 == 1)
										{
											func_126();
										}
									}
									else
									{
										func_206(3);
										if (iLocal_416 == 1)
										{
											func_204();
										}
									}
								}
							}
							if (func_188(unk_0xE2D3D51028F0428A(), iLocal_35[iLocal_63], 1) < 20f && unk_0x7E006F2E24F03BB4(iLocal_35[iLocal_63], unk_0xE2D3D51028F0428A()))
							{
								if (iLocal_322[iLocal_63] == 0)
								{
									iLocal_69[iLocal_63] = unk_0x320D1840B6DAA1CC();
									iLocal_322[iLocal_63] = 1;
								}
								if (iLocal_322[iLocal_63] == 1)
								{
									if (unk_0x320D1840B6DAA1CC() > iLocal_69[iLocal_63] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_206(2);
											if (iLocal_416 == 1)
											{
												func_204();
											}
										}
									}
								}
							}
						}
						if (iLocal_398 == 1)
						{
							if (func_188(unk_0xE2D3D51028F0428A(), iLocal_35[iLocal_63], 1) < 20f && unk_0x7E006F2E24F03BB4(iLocal_35[iLocal_63], unk_0xE2D3D51028F0428A()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_206(3);
									if (iLocal_416 == 1)
									{
										func_204();
									}
								}
							}
						}
						if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
						{
							if (iLocal_413 == 0)
							{
								iLocal_90 = unk_0x320D1840B6DAA1CC();
								iLocal_413 = 1;
							}
							else if (unk_0x320D1840B6DAA1CC() > iLocal_90 + 3000)
							{
								if (func_188(unk_0xE2D3D51028F0428A(), iLocal_35[iLocal_63], 1) < 20f && unk_0x7E006F2E24F03BB4(iLocal_35[iLocal_63], unk_0xE2D3D51028F0428A()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_206(3);
										if (iLocal_416 == 1)
										{
											func_204();
										}
									}
								}
							}
						}
						else if (iLocal_413 == 1)
						{
							iLocal_413 = 0;
						}
						if (unk_0xE5965CDF24F93A9F(iLocal_33))
						{
							if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
							{
								if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_33, 1))
								{
									if (unk_0x7E006F2E24F03BB4(iLocal_35[iLocal_63], unk_0xE2D3D51028F0428A()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_206(3);
											if (iLocal_416 == 1)
											{
												func_204();
											}
										}
									}
								}
								if (func_188(unk_0xE2D3D51028F0428A(), iLocal_33, 1) < 5f && unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A()))
								{
									if (unk_0x7E006F2E24F03BB4(iLocal_35[iLocal_63], unk_0xE2D3D51028F0428A()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_206(3);
											if (iLocal_416 == 1)
											{
												func_204();
											}
										}
									}
									if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, 1, 0))
									{
										if (unk_0xE5965CDF24F93A9F(iLocal_35[0]))
										{
											if (!unk_0xF68107C40359970C(iLocal_35[0]))
											{
												if (unk_0x8F41785F110B0DA0(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, 0, 1, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_390 = 1;
														func_206(3);
														if (iLocal_416 == 1)
														{
															func_204();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (unk_0xE5965CDF24F93A9F(iLocal_35[6]))
						{
							if (!unk_0xF68107C40359970C(iLocal_35[6]))
							{
								if (func_188(unk_0xE2D3D51028F0428A(), iLocal_35[6], 1) < 20f)
								{
									if ((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, 1, 0))
									{
										if (unk_0x7E006F2E24F03BB4(iLocal_35[6], unk_0xE2D3D51028F0428A()))
										{
											if (Local_119.f_2 > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_428 = 1;
													func_206(3);
													if (iLocal_416 == 1)
													{
														func_204();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_206(1);
												if (iLocal_416 == 1)
												{
													func_126();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_321 == 0)
						{
							iLocal_68 = unk_0x320D1840B6DAA1CC();
							iLocal_321 = 1;
						}
						if (iLocal_321 == 1)
						{
							if (unk_0x320D1840B6DAA1CC() > iLocal_68 + 4000 || iLocal_29 == 3)
							{
								if (func_188(unk_0xE2D3D51028F0428A(), iLocal_35[iLocal_63], 1) < 20f)
								{
									if (unk_0x7E006F2E24F03BB4(iLocal_35[iLocal_63], unk_0xE2D3D51028F0428A()))
									{
										if (iLocal_29 != 4)
										{
											func_206(4);
											if (iLocal_416 == 1)
											{
												func_204();
											}
										}
									}
								}
							}
						}
						if (func_188(unk_0xE2D3D51028F0428A(), iLocal_35[iLocal_63], 1) < 40f)
						{
							if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
							{
								if (unk_0x7E006F2E24F03BB4(iLocal_35[iLocal_63], unk_0xE2D3D51028F0428A()) || unk_0x42A51C8E69566474(unk_0x9E2D6C50374FCFA9(), iLocal_35[iLocal_63]))
								{
									if (iLocal_29 != 4)
									{
										func_206(4);
										if (iLocal_416 == 1)
										{
											func_204();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_63++;
	}
}

int func_203(int iParam0, int iParam1)
{
	if (((func_188(iParam0, iParam1, 1) < 20f && unk_0x2E7F5417D4F4DD69(iParam0, iParam1, 90f)) && !unk_0xF68107C40359970C(iParam0)) && unk_0xF68107C40359970C(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_204()
{
	Global_20471 = 0;
	func_205();
}

void func_205()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
	}
}

void func_206(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_67 = 0;
}

void func_207(int iParam0)
{
	iLocal_65 = 0;
	while (iLocal_65 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_65])
		{
			if (func_188(unk_0xE2D3D51028F0428A(), iParam0, 1) < 20f && unk_0x7E006F2E24F03BB4(iParam0, unk_0xE2D3D51028F0428A()))
			{
				if (iLocal_339[iLocal_65] == 0)
				{
					unk_0xF30F15F203736DE4(iParam0, unk_0xE2D3D51028F0428A(), -1, 1072, 3);
					iLocal_339[iLocal_65] = 1;
				}
			}
			else if (iLocal_339[iLocal_65] == 1)
			{
				unk_0xF30F15F203736DE4(iParam0, unk_0xE2D3D51028F0428A(), 1, 1072, 3);
				iLocal_339[iLocal_65] = 0;
			}
		}
		iLocal_65++;
	}
	switch (iLocal_29)
	{
		case 0:
			if (iLocal_67 == 0)
			{
				unk_0x50274A7EACA3133A(iParam0, 1);
				if (iParam0 == iLocal_35[0])
				{
					if (unk_0x5B138084858689AC(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (unk_0x174CED88B97C78D9(iLocal_35[0], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							unk_0xAF0492886BC6C105(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (unk_0x5B138084858689AC(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (unk_0x174CED88B97C78D9(iLocal_35[1], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							unk_0xAF0492886BC6C105(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (unk_0x5B138084858689AC(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (unk_0x174CED88B97C78D9(iLocal_35[2], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							unk_0xAF0492886BC6C105(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (unk_0x5B138084858689AC(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (unk_0x174CED88B97C78D9(iLocal_35[3], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							unk_0xAF0492886BC6C105(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (unk_0x5B138084858689AC(904f, -1575f, 30f, 3f, 0))
					{
						if (unk_0x174CED88B97C78D9(iLocal_35[4], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							unk_0xAF0492886BC6C105(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (unk_0x5B138084858689AC(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (unk_0x174CED88B97C78D9(iLocal_35[5], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							unk_0xAF0492886BC6C105(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (unk_0x5B138084858689AC(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (unk_0x174CED88B97C78D9(iLocal_35[6], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							unk_0xAF0492886BC6C105(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				if (unk_0xE5965CDF24F93A9F(iLocal_35[4]))
				{
					if (!unk_0xF68107C40359970C(iLocal_35[4]))
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_35[5]))
						{
							if (!unk_0xF68107C40359970C(iLocal_35[5]))
							{
								if (func_188(unk_0xE2D3D51028F0428A(), iLocal_35[4], 1) < 25f)
								{
									if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, 1, 0) || Local_119.f_1 > -1573f)
									{
										if (iLocal_416 == 0)
										{
											func_149(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_149(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											unk_0xF30F15F203736DE4(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											unk_0xF30F15F203736DE4(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_193())
											{
												if (!unk_0x559C03F53E6937FC() || !unk_0x0038CA9239065BCA())
												{
													if (func_187(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_416 = 1;
													}
												}
											}
										}
									}
								}
								if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, 0, 1, 1))
								{
									if (iLocal_423 == 0)
									{
										iLocal_92 = unk_0x320D1840B6DAA1CC();
										iLocal_423 = 1;
									}
									if (iLocal_423 == 1)
									{
										if (unk_0x320D1840B6DAA1CC() > iLocal_92 + 4000)
										{
											if (iLocal_416 == 0)
											{
												func_149(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_149(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												unk_0xF30F15F203736DE4(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												unk_0xF30F15F203736DE4(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_193())
												{
													if (!unk_0x559C03F53E6937FC() || !unk_0x0038CA9239065BCA())
													{
														if (func_187(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_416 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_416 == 1 && !func_193())
								{
									if (iLocal_415 == 0)
									{
										if (unk_0x5B138084858689AC(865f, -1558.1f, 29.5f, 3f, 0))
										{
											unk_0xC89EA639A6F338A6(iLocal_35[4]);
											unk_0xC89EA639A6F338A6(iLocal_35[5]);
											unk_0x1D698ECDFF42AC58(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_415 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (iLocal_424 == 0)
					{
						if (iLocal_425 == 0)
						{
							iLocal_93 = unk_0x320D1840B6DAA1CC();
							iLocal_425 = 1;
						}
						if (unk_0x320D1840B6DAA1CC() > iLocal_93 + 30000)
						{
							if (iLocal_424 == 0)
							{
								if (unk_0x5B138084858689AC(925f, -1561f, 30f, 3f, 0))
								{
									unk_0x1D698ECDFF42AC58(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_424 = 1;
									iLocal_425 = 0;
								}
							}
						}
					}
					if (iLocal_424 == 1)
					{
						if (unk_0x8F41785F110B0DA0(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, 0, 1, 0))
						{
							if (func_188(unk_0xE2D3D51028F0428A(), iLocal_35[6], 1) < 15f && Local_119.f_2 < 40f)
							{
								if (iLocal_426 == 0)
								{
									if (unk_0x5B138084858689AC(909.5f, -1515.5f, 30f, 3f, 0))
									{
										unk_0xAF0492886BC6C105(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_426 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_67 == 0)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iLocal_31 == 0)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (func_188(unk_0xE2D3D51028F0428A(), iParam0, 1) < 20f)
							{
								if (iLocal_347[iLocal_65] == 0)
								{
									if (unk_0x7E006F2E24F03BB4(iParam0, unk_0xE2D3D51028F0428A()) || unk_0x42A51C8E69566474(unk_0x9E2D6C50374FCFA9(), iParam0))
									{
										if (!unk_0xBC7D3EDF3455BC35(iParam0))
										{
											unk_0x51BB443B279E4104(iParam0);
										}
										if (unk_0xBC7D3EDF3455BC35(iParam0))
										{
											unk_0x03A927199A2DFE46(iParam0);
										}
										unk_0xA888F8CC04F25CC8(&uLocal_57);
										unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), -1, 2f, 1f, 1073741824, 0);
										unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
										unk_0xC963A45B50851768(uLocal_57);
										unk_0x8ACADA903FCAA42F(iParam0, uLocal_57);
										unk_0x7461D7C5BA953BC7(&uLocal_57);
										unk_0x50274A7EACA3133A(iParam0, 1);
										iLocal_339[iLocal_65] = 0;
										iLocal_347[iLocal_65] = 1;
									}
								}
								if (iLocal_347[iLocal_65] == 1)
								{
									if (!unk_0x2E7F5417D4F4DD69(iParam0, unk_0xE2D3D51028F0428A(), 45f))
									{
										unk_0x529D306014D3C29A(iParam0, unk_0xE2D3D51028F0428A(), 0);
										iLocal_347[iLocal_65] = 0;
									}
								}
							}
							else
							{
								if (iLocal_347[iLocal_65] == 1)
								{
									iLocal_347[iLocal_65] = 0;
								}
								if (iParam0 == iLocal_35[0])
								{
									if (unk_0x5B138084858689AC(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (unk_0x174CED88B97C78D9(iLocal_35[0], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											unk_0xAF0492886BC6C105(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											unk_0x50274A7EACA3133A(iLocal_35[0], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (unk_0x5B138084858689AC(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (unk_0x174CED88B97C78D9(iLocal_35[1], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											unk_0xAF0492886BC6C105(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											unk_0x50274A7EACA3133A(iLocal_35[1], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (unk_0x5B138084858689AC(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (unk_0x174CED88B97C78D9(iLocal_35[2], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											unk_0xAF0492886BC6C105(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											unk_0x50274A7EACA3133A(iLocal_35[2], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (unk_0x5B138084858689AC(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (unk_0x174CED88B97C78D9(iLocal_35[3], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											unk_0xAF0492886BC6C105(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											unk_0x50274A7EACA3133A(iLocal_35[3], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (unk_0x5B138084858689AC(904f, -1575f, 30f, 3f, 0))
									{
										if (unk_0x174CED88B97C78D9(iLocal_35[4], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											unk_0xAF0492886BC6C105(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											unk_0x50274A7EACA3133A(iLocal_35[4], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (unk_0x5B138084858689AC(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (unk_0x174CED88B97C78D9(iLocal_35[5], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											unk_0xAF0492886BC6C105(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											unk_0x50274A7EACA3133A(iLocal_35[5], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (unk_0x5B138084858689AC(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (unk_0x174CED88B97C78D9(iLocal_35[6], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											unk_0xAF0492886BC6C105(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											unk_0x50274A7EACA3133A(iLocal_35[6], 1);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_188(unk_0xE2D3D51028F0428A(), iParam0, 1) < 20f)
						{
							if (iLocal_347[iLocal_65] == 0)
							{
								if (unk_0x7E006F2E24F03BB4(iParam0, unk_0xE2D3D51028F0428A()) || unk_0x42A51C8E69566474(unk_0x9E2D6C50374FCFA9(), iParam0))
								{
									if (!unk_0xBC7D3EDF3455BC35(iParam0))
									{
										unk_0x51BB443B279E4104(iParam0);
									}
									if (unk_0xBC7D3EDF3455BC35(iParam0))
									{
										unk_0x03A927199A2DFE46(iParam0);
									}
									unk_0xA888F8CC04F25CC8(&uLocal_57);
									unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
									unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 1072, 3);
									unk_0xC963A45B50851768(uLocal_57);
									unk_0x8ACADA903FCAA42F(iParam0, uLocal_57);
									unk_0x7461D7C5BA953BC7(&uLocal_57);
									unk_0x50274A7EACA3133A(iParam0, 1);
									iLocal_339[iLocal_65] = 0;
									iLocal_347[iLocal_65] = 1;
								}
							}
							if (iLocal_347[iLocal_65] == 1)
							{
								if (!unk_0x2E7F5417D4F4DD69(iParam0, unk_0xE2D3D51028F0428A(), 45f))
								{
									unk_0x529D306014D3C29A(iParam0, unk_0xE2D3D51028F0428A(), 0);
									iLocal_347[iLocal_65] = 0;
								}
							}
						}
						else
						{
							if (iLocal_347[iLocal_65] == 1)
							{
								iLocal_347[iLocal_65] = 0;
							}
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0x5B138084858689AC(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[0], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0x5B138084858689AC(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[1], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0x5B138084858689AC(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[2], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0x5B138084858689AC(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[3], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0x5B138084858689AC(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[4], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0x5B138084858689AC(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[5], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0x5B138084858689AC(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[6], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[6], 1);
									}
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
		
		case 2:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (iLocal_67 == 0)
			{
				unk_0x9972EFADA7A2A47D(5, iLocal_302, joaat("player"));
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_188(iParam0, unk_0xE2D3D51028F0428A(), 1) < 15f)
						{
							if (func_188(iParam0, unk_0xE2D3D51028F0428A(), 1) > 3f)
							{
								if (unk_0x174CED88B97C78D9(iParam0, joaat("script_task_perform_sequence")) != 0 || unk_0x174CED88B97C78D9(iParam0, joaat("script_task_perform_sequence")) != 1)
								{
									if (!unk_0xBC7D3EDF3455BC35(iParam0))
									{
										unk_0x51BB443B279E4104(iParam0);
									}
									if (unk_0xBC7D3EDF3455BC35(iParam0))
									{
										unk_0x03A927199A2DFE46(iParam0);
									}
									unk_0xA888F8CC04F25CC8(&uLocal_57);
									unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), -1, 1f, 1f, 1073741824, 0);
									unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
									unk_0xC963A45B50851768(uLocal_57);
									unk_0x8ACADA903FCAA42F(iParam0, uLocal_57);
									unk_0x7461D7C5BA953BC7(&uLocal_57);
									iLocal_339[iLocal_65] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0x5B138084858689AC(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[0], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0x5B138084858689AC(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[1], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0x5B138084858689AC(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[2], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0x5B138084858689AC(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[3], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0x5B138084858689AC(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[4], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0x5B138084858689AC(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[5], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0x5B138084858689AC(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0x174CED88B97C78D9(iLocal_35[6], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && unk_0x174CED88B97C78D9(iLocal_35[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										unk_0xAF0492886BC6C105(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x50274A7EACA3133A(iLocal_35[6], 1);
									}
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
		
		case 3:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (iLocal_393 == 0)
			{
				if (iLocal_394 == 0)
				{
					iLocal_79 = unk_0x320D1840B6DAA1CC();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (unk_0x320D1840B6DAA1CC() > iLocal_79 + 9000)
					{
						unk_0xC0F70A3CDEC87ECE(5);
						unk_0x8576657A629C4B0A(1f);
						unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 2, 0);
						unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				unk_0x9972EFADA7A2A47D(5, iLocal_302, joaat("player"));
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				if (iLocal_28 == 3)
				{
					iLocal_65 = 0;
					while (iLocal_65 <= 6)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (func_188(iParam0, unk_0xE2D3D51028F0428A(), 1) < 100f)
							{
								if (iLocal_355[iLocal_65] == 0)
								{
									unk_0x50274A7EACA3133A(iParam0, 1);
									iLocal_355[iLocal_65] = 1;
								}
								if (iLocal_363[iLocal_65] == 0)
								{
									if (!unk_0xBC7D3EDF3455BC35(iParam0))
									{
										unk_0x51BB443B279E4104(iParam0);
									}
									if (unk_0xBC7D3EDF3455BC35(iParam0))
									{
										unk_0x03A927199A2DFE46(iParam0);
									}
									unk_0x766D377A16F499E3(iParam0, 100f, 0);
									iLocal_339[iLocal_65] = 0;
									iLocal_363[iLocal_65] = 1;
								}
							}
						}
						iLocal_65++;
					}
					if (iLocal_468 == 0)
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_35[0]))
						{
							if (!unk_0xF68107C40359970C(iLocal_35[0]))
							{
								if (unk_0xE5965CDF24F93A9F(iLocal_33))
								{
									if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
									{
										if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_33, 1) && unk_0x8F41785F110B0DA0(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0, 1, 0))
										{
											if (!unk_0xBC7D3EDF3455BC35(iLocal_35[0]))
											{
												unk_0x51BB443B279E4104(iLocal_35[0]);
											}
											if (unk_0xBC7D3EDF3455BC35(iLocal_35[0]))
											{
												unk_0x03A927199A2DFE46(iLocal_35[0]);
											}
											unk_0xA888F8CC04F25CC8(&uLocal_57);
											unk_0x7D1424753688EE7A(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
											unk_0x49D97B076E3590AC(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											unk_0xC963A45B50851768(uLocal_57);
											unk_0x8ACADA903FCAA42F(iLocal_35[0], uLocal_57);
											unk_0x7461D7C5BA953BC7(&uLocal_57);
											iLocal_468 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_468 == 1 && iLocal_487 == 0)
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_35[0]))
						{
							if (!unk_0xF68107C40359970C(iLocal_35[0]))
							{
								if (unk_0x8F41785F110B0DA0(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0, 1, 0))
								{
									func_149(&uLocal_137, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_196(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_487 = 1;
								}
							}
						}
					}
					if (iLocal_467 == 0)
					{
						if (unk_0x320D1840B6DAA1CC() > iLocal_79 + 3000)
						{
							if (unk_0xE5965CDF24F93A9F(iLocal_35[5]))
							{
								if (!unk_0xF68107C40359970C(iLocal_35[5]))
								{
									unk_0x49D97B076E3590AC(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_111 = unk_0x320D1840B6DAA1CC();
									iLocal_467 = 1;
								}
							}
						}
					}
					else if (iLocal_466 == 0)
					{
						if (unk_0x320D1840B6DAA1CC() > iLocal_111 + 5000)
						{
							if (unk_0xE5965CDF24F93A9F(iLocal_35[5]))
							{
								if (!unk_0xF68107C40359970C(iLocal_35[5]))
								{
									unk_0x03A927199A2DFE46(iLocal_35[5]);
									unk_0xC1A74225341AA9FB(iLocal_35[5], unk_0xE2D3D51028F0428A(), 0, 16);
									iLocal_466 = 1;
								}
							}
						}
					}
				}
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iLocal_306[iLocal_65] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (unk_0xE5965CDF24F93A9F(iParam0))
							{
								if (!unk_0xF68107C40359970C(iParam0))
								{
									unk_0x50274A7EACA3133A(iParam0, 1);
									if (unk_0xD5C6B5E3B93A5EDC(iParam0, 0))
									{
										if (func_188(iParam0, unk_0xE2D3D51028F0428A(), 1) > 200f)
										{
											if (!unk_0xBC7D3EDF3455BC35(iParam0))
											{
												unk_0x51BB443B279E4104(iParam0);
											}
											if (unk_0xBC7D3EDF3455BC35(iParam0))
											{
												unk_0x03A927199A2DFE46(iParam0);
											}
											unk_0x7734082B0EDB0BE0(iParam0, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
											iLocal_306[iLocal_65] = 1;
										}
									}
									else if (func_188(iParam0, unk_0xE2D3D51028F0428A(), 1) > 100f)
									{
										if (!unk_0xBC7D3EDF3455BC35(iParam0))
										{
											unk_0x51BB443B279E4104(iParam0);
										}
										if (unk_0xBC7D3EDF3455BC35(iParam0))
										{
											unk_0x03A927199A2DFE46(iParam0);
										}
										unk_0x7734082B0EDB0BE0(iParam0, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
										iLocal_306[iLocal_65] = 1;
									}
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			if (iLocal_28 == 4)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iLocal_306[iLocal_65] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (unk_0xE5965CDF24F93A9F(iParam0))
							{
								if (!unk_0xF68107C40359970C(iParam0))
								{
									if (!unk_0xBC7D3EDF3455BC35(iParam0))
									{
										unk_0x51BB443B279E4104(iParam0);
									}
									if (unk_0xBC7D3EDF3455BC35(iParam0))
									{
										unk_0x03A927199A2DFE46(iParam0);
									}
									unk_0x50274A7EACA3133A(iParam0, 1);
									unk_0x7734082B0EDB0BE0(iParam0, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
									unk_0xABC2CA6F28903308(iParam0, 1);
									unk_0xB3822DB3D538C8F3(&iParam0);
									iLocal_306[iLocal_65] = 1;
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
		
		case 4:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (iLocal_393 == 0)
			{
				if (iLocal_394 == 0)
				{
					iLocal_79 = unk_0x320D1840B6DAA1CC();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (unk_0x320D1840B6DAA1CC() > iLocal_79 + 6000)
					{
						unk_0xC0F70A3CDEC87ECE(5);
						unk_0x8576657A629C4B0A(1f);
						unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 2, 0);
						unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				unk_0x9972EFADA7A2A47D(5, iLocal_302, joaat("player"));
				unk_0x50274A7EACA3133A(iParam0, 1);
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (unk_0xE5965CDF24F93A9F(iLocal_35[iLocal_65]))
					{
						if (!unk_0xF68107C40359970C(iLocal_35[iLocal_65]))
						{
							if (func_188(unk_0xE2D3D51028F0428A(), iLocal_35[iLocal_65], 1) < 15f)
							{
								if (func_208(iLocal_35[iLocal_65], 6))
								{
									if (unk_0x7E006F2E24F03BB4(iLocal_35[iLocal_65], unk_0xE2D3D51028F0428A()))
									{
										if (iLocal_379[iLocal_65] == 0)
										{
											if (!unk_0xBC7D3EDF3455BC35(iLocal_35[iLocal_65]))
											{
												unk_0x51BB443B279E4104(iLocal_35[iLocal_65]);
											}
											if (unk_0xBC7D3EDF3455BC35(iLocal_35[iLocal_65]))
											{
												unk_0x03A927199A2DFE46(iLocal_35[iLocal_65]);
											}
											unk_0x3598F95A00026DD8(iLocal_35[iLocal_65], -1, unk_0xE2D3D51028F0428A(), -1, 0);
											iLocal_379[iLocal_65] = 1;
											iLocal_371[iLocal_65] = 0;
											iLocal_339[iLocal_65] = 0;
											iLocal_91 = unk_0x320D1840B6DAA1CC();
										}
									}
									else if (unk_0x320D1840B6DAA1CC() > iLocal_91 + 300)
									{
										iLocal_371[iLocal_65] = 0;
									}
								}
								else if (iLocal_371[iLocal_65] == 0)
								{
									if (!unk_0xBC7D3EDF3455BC35(iLocal_35[iLocal_65]))
									{
										unk_0x51BB443B279E4104(iLocal_35[iLocal_65]);
									}
									if (unk_0xBC7D3EDF3455BC35(iLocal_35[iLocal_65]))
									{
										unk_0x03A927199A2DFE46(iLocal_35[iLocal_65]);
									}
									unk_0x7734082B0EDB0BE0(iLocal_35[iLocal_65], unk_0xE2D3D51028F0428A(), 250f, -1, 0, 0);
									iLocal_371[iLocal_65] = 1;
									iLocal_379[iLocal_65] = 0;
								}
							}
							else if (iLocal_371[iLocal_65] == 0)
							{
								if (!unk_0xBC7D3EDF3455BC35(iLocal_35[iLocal_65]))
								{
									unk_0x51BB443B279E4104(iLocal_35[iLocal_65]);
								}
								if (unk_0xBC7D3EDF3455BC35(iLocal_35[iLocal_65]))
								{
									unk_0x03A927199A2DFE46(iLocal_35[iLocal_65]);
								}
								unk_0x7734082B0EDB0BE0(iLocal_35[iLocal_65], unk_0xE2D3D51028F0428A(), 250f, -1, 0, 0);
								iLocal_371[iLocal_65] = 1;
								iLocal_379[iLocal_65] = 0;
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
	}
}

int func_208(int iParam0, int iParam1)
{
	if (unk_0xE5965CDF24F93A9F(iParam0) && !unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), iParam1))
		{
			if (unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iParam0) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_209()
{
	iLocal_46 = func_26(0);
	iLocal_47 = func_26(1);
	iLocal_48 = func_26(2);
	if (func_34(iLocal_46, 0))
	{
		if (!unk_0xF68107C40359970C(iLocal_46))
		{
			if (!func_33(iLocal_46))
			{
				if (!func_211())
				{
					if (func_210(iLocal_46))
					{
						if (func_32(iLocal_46, 0))
						{
							unk_0x2D58A6131679D82C(iLocal_46, 1, 1);
							unk_0x50274A7EACA3133A(iLocal_46, 1);
							unk_0x03A927199A2DFE46(iLocal_46);
							iLocal_473 = 0;
							iLocal_476 = 0;
							iLocal_479 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_473 == 0)
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iLocal_473 = 1;
					}
					else if (unk_0xD5C6B5E3B93A5EDC(iLocal_46, 0))
					{
						if (!unk_0xF6F5D18EF8EAB859(iLocal_46, unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
						{
							iLocal_473 = 1;
						}
					}
				}
				if (iLocal_473 == 0)
				{
					if (func_211())
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_470 == 1)
				{
					if ((func_210(iLocal_46) && unk_0x930E64CB0285CAEC(iLocal_46, 1)) && iLocal_473 == 0)
					{
						Local_122 = { unk_0x6B62510F212526DC(iLocal_46, 1) };
						unk_0x2EE5FFF3E1E3400D(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
						{
							if (iLocal_476 == 0)
							{
								if (unk_0xF8805443C3DB6256(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0xFDB121077308E944(iLocal_46, unk_0xB3FF0049C1FD38EC(iLocal_46, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (unk_0xE5965CDF24F93A9F(unk_0xFE15FEB341652241(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_479 == 0)
							{
								unk_0xFE5A02CF2178B6A8(iLocal_46, unk_0xB3FF0049C1FD38EC(iLocal_46, 0), unk_0xFE15FEB341652241(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0)
						{
							if (unk_0xF8805443C3DB6256(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0xFDB121077308E944(iLocal_46, unk_0xB3FF0049C1FD38EC(iLocal_46, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_479 = 0;
								iLocal_476 = 1;
							}
						}
					}
					else
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_473 == 1)
				{
					if (func_25(iLocal_46))
					{
						iLocal_473 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_48, 0))
	{
		if (!unk_0xF68107C40359970C(iLocal_48))
		{
			if (!func_33(iLocal_48))
			{
				if (!func_211())
				{
					if (func_210(iLocal_48))
					{
						if (func_32(iLocal_48, 0))
						{
							unk_0x2D58A6131679D82C(iLocal_48, 1, 1);
							unk_0x50274A7EACA3133A(iLocal_48, 1);
							unk_0x03A927199A2DFE46(iLocal_48);
							iLocal_475 = 0;
							iLocal_477 = 0;
							iLocal_480 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_475 == 0)
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iLocal_475 = 1;
					}
					else if (unk_0xD5C6B5E3B93A5EDC(iLocal_48, 0))
					{
						if (!unk_0xF6F5D18EF8EAB859(iLocal_48, unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
						{
							iLocal_475 = 1;
						}
					}
				}
				if (iLocal_475 == 0)
				{
					if (func_211())
					{
						iLocal_475 = 1;
					}
				}
				if (iLocal_471 == 1)
				{
					if ((func_210(iLocal_48) && unk_0x930E64CB0285CAEC(iLocal_48, 1)) && iLocal_475 == 0)
					{
						Local_122 = { unk_0x6B62510F212526DC(iLocal_48, 1) };
						unk_0x2EE5FFF3E1E3400D(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
						{
							if (iLocal_477 == 0)
							{
								if (unk_0xF8805443C3DB6256(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0xFDB121077308E944(iLocal_48, unk_0xB3FF0049C1FD38EC(iLocal_48, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_480 = 0;
									iLocal_477 = 1;
								}
							}
						}
						else if (unk_0xE5965CDF24F93A9F(unk_0xFE15FEB341652241(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_480 == 0)
							{
								unk_0xFE5A02CF2178B6A8(iLocal_48, unk_0xB3FF0049C1FD38EC(iLocal_48, 0), unk_0xFE15FEB341652241(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_477 = 0;
								iLocal_480 = 1;
							}
						}
						else if (iLocal_477 == 0)
						{
							if (unk_0xF8805443C3DB6256(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0xFDB121077308E944(iLocal_48, unk_0xB3FF0049C1FD38EC(iLocal_48, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_480 = 0;
								iLocal_477 = 1;
							}
						}
					}
					else
					{
						iLocal_475 = 1;
					}
				}
				if (iLocal_475 == 1)
				{
					if (func_25(iLocal_48))
					{
						iLocal_475 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_47, 0))
	{
		if (!unk_0xF68107C40359970C(iLocal_47))
		{
			if (!func_33(iLocal_47))
			{
				if (!func_211())
				{
					if (func_210(iLocal_47))
					{
						if (func_32(iLocal_47, 0))
						{
							unk_0x2D58A6131679D82C(iLocal_47, 1, 1);
							unk_0x50274A7EACA3133A(iLocal_47, 1);
							unk_0x03A927199A2DFE46(iLocal_47);
							iLocal_474 = 0;
							iLocal_478 = 0;
							iLocal_481 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_474 == 0)
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iLocal_474 = 1;
					}
					else if (unk_0xD5C6B5E3B93A5EDC(iLocal_47, 0))
					{
						if (!unk_0xF6F5D18EF8EAB859(iLocal_47, unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
						{
							iLocal_474 = 1;
						}
					}
				}
				if (iLocal_474 == 0)
				{
					if (func_211())
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_472 == 1)
				{
					if ((func_210(iLocal_47) && unk_0x930E64CB0285CAEC(iLocal_47, 1)) && iLocal_474 == 0)
					{
						Local_122 = { unk_0x6B62510F212526DC(iLocal_47, 1) };
						unk_0x2EE5FFF3E1E3400D(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
						{
							if (iLocal_478 == 0)
							{
								if (unk_0xF8805443C3DB6256(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0xFDB121077308E944(iLocal_47, unk_0xB3FF0049C1FD38EC(iLocal_47, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_481 = 0;
									iLocal_478 = 1;
								}
							}
						}
						else if (unk_0xE5965CDF24F93A9F(unk_0xFE15FEB341652241(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_481 == 0)
							{
								unk_0xFE5A02CF2178B6A8(iLocal_47, unk_0xB3FF0049C1FD38EC(iLocal_47, 0), unk_0xFE15FEB341652241(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_478 = 0;
								iLocal_481 = 1;
							}
						}
						else if (iLocal_478 == 0)
						{
							if (unk_0xF8805443C3DB6256(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0xFDB121077308E944(iLocal_47, unk_0xB3FF0049C1FD38EC(iLocal_47, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_481 = 0;
								iLocal_478 = 1;
							}
						}
					}
					else
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_474 == 1)
				{
					if (func_25(iLocal_47))
					{
						iLocal_474 = 0;
					}
				}
			}
		}
	}
}

int func_210(int iParam0)
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0xF68107C40359970C(iParam0))
		{
			if (unk_0xF6F5D18EF8EAB859(iParam0, unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0) && unk_0xAB793EA186AB8DAA(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), -1, 0) == iParam0)
			{
				if (unk_0xE5965CDF24F93A9F(iLocal_33))
				{
					if (unk_0x55A0C756C4A8220C(iLocal_33, 0))
					{
						if ((unk_0xF6F5D18EF8EAB859(iParam0, iLocal_33, 0) && unk_0xAB793EA186AB8DAA(iLocal_33, -1, 0) == iParam0) && !unk_0x8F41785F110B0DA0(iLocal_33, Local_116, 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam0 == iLocal_46)
							{
								iLocal_470 = 1;
							}
							if (iParam0 == iLocal_48)
							{
								iLocal_471 = 1;
							}
							if (iParam0 == iLocal_47)
							{
								iLocal_472 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_46)
	{
		iLocal_470 = 0;
	}
	if (iParam0 == iLocal_48)
	{
		iLocal_471 = 0;
	}
	if (iParam0 == iLocal_47)
	{
		iLocal_472 = 0;
	}
	return 0;
}

bool func_211()
{
	return Global_23009;
}

void func_212()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_33))
	{
		if (!unk_0x55A0C756C4A8220C(iLocal_33, 0))
		{
			func_215(3);
			return;
		}
		else
		{
			if (func_214(&iLocal_33))
			{
				func_215(2);
				return;
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_32))
			{
				if (!unk_0x55A0C756C4A8220C(iLocal_32, 0))
				{
					func_215(1);
					return;
				}
				if (unk_0x55A0C756C4A8220C(iLocal_32, 0))
				{
					if (!unk_0x817B926B53C0589A(iLocal_33))
					{
						if ((unk_0x66AA8BC9CA1BE26C(iLocal_32) || func_213(iLocal_32)) || func_214(&iLocal_32))
						{
							func_215(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_32))
		{
			if (unk_0x55A0C756C4A8220C(iLocal_32, 0))
			{
				if (func_188(iLocal_32, unk_0xE2D3D51028F0428A(), 1) > 600f)
				{
					func_215(5);
					return;
				}
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_49))
	{
		if (unk_0xF68107C40359970C(iLocal_49))
		{
			func_215(6);
			return;
		}
	}
}

int func_213(int iParam0)
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

int func_214(var uParam0)
{
	if (unk_0x55A0C756C4A8220C(*uParam0, 0))
	{
		if (((unk_0xF798DCF92C74B531(*uParam0, 0, 7000) || unk_0xF798DCF92C74B531(*uParam0, 3, 30000)) || unk_0xF798DCF92C74B531(*uParam0, 2, 30000)) || unk_0xF798DCF92C74B531(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_215(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_62 = 0;
	}
}

void func_216(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113386.f_9085.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113386.f_9085.f_99.f_58[iParam0] = iParam1;
}

void func_217()
{
	if (iLocal_28 == 5)
	{
		if (iLocal_483 == 0)
		{
			func_218(657);
		}
	}
}

void func_218(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_63155 = 0;
	if (!Global_63379[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_75249)
	{
		if (Global_75250[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_75250[iVar1 /*9*/].f_1 = 1;
			Global_75250[iVar1 /*9*/].f_2 = 0f;
			if (Global_75250[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_219(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_220()
{
	unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
	unk_0x7CD708DEB04F8474(joaat("packer"), 0);
	unk_0x7CD708DEB04F8474(joaat("phantom"), 0);
	unk_0x0709E99F1DDFFF26("FHPRB_START");
	unk_0x0709E99F1DDFFF26("FHPRB_TRUCK");
	unk_0x0709E99F1DDFFF26("FHPRB_COPS");
	unk_0x0709E99F1DDFFF26("FHPRB_LOST");
	unk_0x0709E99F1DDFFF26("FHPRB_STOP");
	unk_0x7BACBB4C6A7B18B7(uLocal_51, 0);
	unk_0x7BACBB4C6A7B18B7(uLocal_52, 0);
	unk_0x7BACBB4C6A7B18B7(uLocal_53, 0);
	unk_0x7BACBB4C6A7B18B7(uLocal_54, 0);
	unk_0x7BACBB4C6A7B18B7(uLocal_55, 0);
	unk_0x7BACBB4C6A7B18B7(uLocal_56, 0);
	if (unk_0x1E63BE2394148DA0("SCRAP_SECURITY"))
	{
		if (unk_0x96A05000CCD43584("SCRAP_SECURITY"))
		{
			unk_0xA3D2C191DF3CB742("SCRAP_SECURITY", 0);
		}
	}
	unk_0xC0F70A3CDEC87ECE(5);
	if (unk_0xEC32121F2E3875C8(iLocal_114))
	{
		unk_0xA5BD780899E2D5F0(iLocal_114, 0);
	}
	if (unk_0xEC32121F2E3875C8(iLocal_115))
	{
		unk_0xA5BD780899E2D5F0(iLocal_115, 0);
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_221()
{
	int iVar0;
	
	if (unk_0xF79F112CE5999680("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || func_219(0))
	{
		if (!func_222())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				unk_0xCED9E32812D6C7C7(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_222()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

