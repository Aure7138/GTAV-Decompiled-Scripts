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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	struct<3> Local_76 = { 0, 0, 0 } ;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	char* sLocal_82[3] = { NULL, NULL, NULL };
	char* sLocal_86 = NULL;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	struct<3> Local_89[4];
	float fLocal_102[4] = { 0f, 0f, 0f, 0f };
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	struct<4> Local_109 = { 0, 0, 0, 0 } ;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 15;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
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
	var uLocal_172 = 16;
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
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341[5] = { 0, 0, 0, 0, 0 };
	float fLocal_347[5] = { 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_353[5];
	struct<3> Local_369[5];
	int iLocal_385 = 0;
	struct<3> Local_386 = { 0, 0, 0 } ;
	struct<3> Local_389 = { 0, 0, 0 } ;
	float fLocal_392 = 0f;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	bool bLocal_395 = 0;
	int iLocal_396 = 0;
	struct<3> Local_397 = { 0, 0, 0 } ;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	float fLocal_411 = 0f;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	struct<3> Local_415 = { 0, 0, 0 } ;
	var uLocal_418 = 0;
	struct<3> Local_419 = { 0, 0, 0 } ;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	struct<3> Local_425 = { 0, 0, 0 } ;
	struct<3> Local_428 = { 0, 0, 0 } ;
	var uLocal_431 = 0;
	struct<3> Local_432 = { 0, 0, 0 } ;
	struct<3> Local_435 = { 0, 0, 0 } ;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	struct<3> Local_440[8];
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	char* sLocal_476 = NULL;
	char* sLocal_477 = NULL;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	var uLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	var uLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iLocal_54 = -1;
	sLocal_86 = "null";
	iLocal_87 = -1;
	iLocal_88 = -1;
	iLocal_118 = 1;
	fLocal_392 = 200f;
	iLocal_413 = unk_0x320D1840B6DAA1CC();
	iLocal_414 = 10000;
	iLocal_466 = -1;
	iLocal_475 = joaat("LAYOUT_STANDARD");
	sLocal_476 = "std_ds_open_door_for_chop";
	sLocal_477 = "creatures@rottweiler@in_vehicle@std_car";
	iLocal_485 = unk_0x320D1840B6DAA1CC();
	iLocal_488 = unk_0x320D1840B6DAA1CC();
	uLocal_490 = unk_0xA9ADCC8D104AA552();
	if (unk_0x4B34601C5C56F3EE(3))
	{
		func_180();
	}
	while (!unk_0xE9E8955A780DDA01())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_492 = unk_0x4131052989DE1278();
	Local_415 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xB4C854DD86E40FDA(unk_0x1307D54181723A6E()) > 1)
	{
		func_180();
	}
	if (!func_179(63))
	{
		func_180();
	}
	if (!func_178(5) && !func_178(6))
	{
		func_180();
	}
	if (func_178(6) && func_177(Local_415, 1, 0) == 5)
	{
		func_180();
	}
	if (!func_170(1))
	{
		func_180();
	}
	if (Global_32107 == 1)
	{
		func_180();
	}
	if (Global_97361 == 1)
	{
		func_180();
	}
	if (func_167(0))
	{
		if (unk_0xB4C854DD86E40FDA(joaat("sh_intro_f_hills")) == 0 && unk_0xB4C854DD86E40FDA(joaat("martin1")) == 0)
		{
			func_180();
		}
	}
	if ((((func_166() == 206 || func_166() == 207) || func_166() == 204) || func_166() == 205) || func_166() == 203)
	{
		iLocal_393 = 1;
	}
	else if (func_166() == 47)
	{
		iLocal_394 = 1;
	}
	else
	{
		if ((unk_0x987A5F1E1A67E3C0(Local_415, 154.0731f, 765.5721f, 209.6901f, 1) <= 50f || unk_0x987A5F1E1A67E3C0(Local_415, -268.139f, 415.2881f, 109.7258f, 1) <= 50f) || unk_0x987A5F1E1A67E3C0(Local_415, 314.4171f, 965.207f, 208.4024f, 1) <= 50f)
		{
			func_180();
		}
		iLocal_393 = 0;
		iLocal_394 = 0;
		if (Global_78317 == 1)
		{
			func_180();
		}
	}
	while (true)
	{
		if (!func_163())
		{
			switch (iLocal_50)
			{
				case 0:
					func_154();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			func_180();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return;
	}
	if (unk_0xF68107C40359970C(iLocal_69))
	{
		return;
	}
	func_152();
	func_151();
	if (iLocal_51 != 11)
	{
		func_150();
		func_149();
		func_129();
		func_128();
		func_126();
	}
	func_2();
}

void func_2()
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	switch (iLocal_51)
	{
		case 11:
			if (iLocal_52 == 0)
			{
				unk_0x8FB472886552D737("creatures@rottweiler@amb@sleep_in_kennel@");
				if (unk_0x6F940C2636C076AD("creatures@rottweiler@amb@sleep_in_kennel@"))
				{
					if (func_125(iLocal_69))
					{
						unk_0x49D97B076E3590AC(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "sleep_in_kennel", 1000f, -8f, -1, 1, 0, 0, 0, 0);
						func_124(iLocal_69, Local_397.f_5, Local_397.f_8, 0, 1);
					}
					iLocal_406 = unk_0x320D1840B6DAA1CC();
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_123())
				{
					unk_0x8FB472886552D737("creatures@rottweiler@amb@sleep_in_kennel@");
					if (unk_0x6F940C2636C076AD("creatures@rottweiler@amb@sleep_in_kennel@") && func_125(iLocal_69))
					{
						unk_0x49D97B076E3590AC(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "exit_kennel", 8f, -8f, -1, 0, 0, 0, 0, 0);
						func_122("WHINE");
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (unk_0x174CED88B97C78D9(iLocal_69, joaat("script_task_play_anim")) == 7)
				{
					unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@amb@sleep_in_kennel@");
					func_122("PLAYFUL");
					func_121(1, 1);
				}
			}
			break;
		
		case 1:
			if (iLocal_408 == 0 && func_118(unk_0xE2D3D51028F0428A(), 1))
			{
				func_121(18, 1);
			}
			else
			{
				func_117();
				func_116();
				func_115();
			}
			break;
		
		case 17:
			func_117();
			func_116();
			if (iLocal_52 == 0)
			{
				unk_0x8FB472886552D737(sLocal_82[0]);
				unk_0x8FB472886552D737(sLocal_82[1]);
				unk_0x8FB472886552D737(sLocal_82[2]);
				if ((unk_0x6F940C2636C076AD(sLocal_82[0]) && unk_0x6F940C2636C076AD(sLocal_82[1])) && unk_0x6F940C2636C076AD(sLocal_82[2]))
				{
					unk_0x49D97B076E3590AC(iLocal_69, sLocal_82[0], "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if ((!func_113(iLocal_69, joaat("script_task_play_anim")) || (unk_0xFCF559C8631ABED7(iLocal_69, sLocal_82[0], "enter", 3) && unk_0xD01FAFCE275C94F3(iLocal_69, sLocal_82[0], "enter") > 0.98f)) || (unk_0xFCF559C8631ABED7(iLocal_69, sLocal_82[1], sLocal_86, 3) && unk_0xD01FAFCE275C94F3(iLocal_69, sLocal_82[1], sLocal_86) > 0.98f))
				{
					if (iLocal_53 == 0)
					{
						if (iLocal_81 == 1)
						{
							unk_0x49D97B076E3590AC(iLocal_69, sLocal_82[1], "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
							sLocal_86 = "base";
							iLocal_52++;
						}
						else
						{
							func_112();
							if (unk_0x5853B15F78E1A265(0, 4) == 0)
							{
								iLocal_52++;
							}
						}
					}
					else
					{
						if (iLocal_53 != 5)
						{
							func_108("CHOP_WAIT", 0);
						}
						unk_0x49D97B076E3590AC(iLocal_69, sLocal_82[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_52 = 3;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (!func_113(iLocal_69, joaat("script_task_play_anim")) || (unk_0xFCF559C8631ABED7(iLocal_69, sLocal_82[1], sLocal_86, 3) && unk_0xD01FAFCE275C94F3(iLocal_69, sLocal_82[1], sLocal_86) > 0.98f))
				{
					unk_0x49D97B076E3590AC(iLocal_69, sLocal_82[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 3)
			{
				if (!func_113(iLocal_69, joaat("script_task_play_anim")))
				{
					iLocal_422 = 0;
					if (iLocal_53 == 0)
					{
						func_121(1, 1);
					}
					else
					{
						func_121(iLocal_53, 1);
					}
				}
			}
			break;
		
		case 18:
			func_116();
			if (iLocal_52 == 0)
			{
				unk_0x8FB472886552D737("creatures@rottweiler@amb@world_dog_barking@enter");
				unk_0x8FB472886552D737("creatures@rottweiler@amb@world_dog_barking@idle_a");
				unk_0x8FB472886552D737("creatures@rottweiler@amb@world_dog_barking@exit");
				unk_0xC149E50FBB27DD70(iLocal_69, unk_0xE2D3D51028F0428A(), 20000, 3f, 1f, 1073741824, 0);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (iLocal_53 == 0)
				{
					if (!func_113(iLocal_69, joaat("script_task_go_to_entity")))
					{
						if ((unk_0x6F940C2636C076AD("creatures@rottweiler@amb@world_dog_barking@enter") && unk_0x6F940C2636C076AD("creatures@rottweiler@amb@world_dog_barking@idle_a")) && unk_0x6F940C2636C076AD("creatures@rottweiler@amb@world_dog_barking@exit"))
						{
							unk_0xA888F8CC04F25CC8(&uLocal_119);
							unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
							unk_0x49D97B076E3590AC(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x49D97B076E3590AC(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x49D97B076E3590AC(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xC963A45B50851768(uLocal_119);
							unk_0x8ACADA903FCAA42F(iLocal_69, uLocal_119);
							unk_0x7461D7C5BA953BC7(&uLocal_119);
							iLocal_52++;
						}
					}
				}
				else
				{
					func_121(iLocal_53, 1);
				}
			}
			else if (iLocal_52 == 2)
			{
				if (func_107())
				{
					iLocal_408 = 1;
					if (iLocal_53 == 0)
					{
						func_121(1, 1);
					}
					else
					{
						func_121(iLocal_53, 1);
					}
				}
			}
			break;
		
		case 2:
			func_102();
			if (iLocal_52 == 0)
			{
				if ((func_125(iLocal_69) && !unk_0xD5C6B5E3B93A5EDC(iLocal_69, 0)) && !unk_0x611AD675982BEBCC(iLocal_69))
				{
					unk_0x03A927199A2DFE46(iLocal_69);
				}
				func_100();
				func_99(0, 0, 0);
				func_98(1);
				iLocal_60 = -1;
				iLocal_340 = unk_0x320D1840B6DAA1CC();
				iLocal_62 = unk_0x320D1840B6DAA1CC();
				iLocal_63 = (unk_0x320D1840B6DAA1CC() - 10000);
				Local_76 = { unk_0x6B62510F212526DC(iLocal_69, 1) };
				unk_0x8FB472886552D737("creatures@rottweiler@melee@streamed_taunts@");
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				func_83();
				func_54();
				func_53();
				func_45();
				func_44();
				func_41();
				func_117();
			}
			break;
		
		case 3:
			if (iLocal_52 == 0)
			{
				func_122("WHINE");
				func_108("CHOP_GOHOME", 0);
				func_40(0);
				unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@melee@streamed_taunts@");
				if (func_125(unk_0xE2D3D51028F0428A()) && unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_ball"), 0))
				{
					unk_0xE002DFD518BF86A7(unk_0xE2D3D51028F0428A(), joaat("weapon_ball"));
				}
				if (unk_0x611AD675982BEBCC(iLocal_69))
				{
					unk_0x6221A52631154EF7(iLocal_69);
				}
				if (func_118(iLocal_69, 1))
				{
					func_121(1, 1);
				}
				else if (func_39(iLocal_69, Local_397, 1) < 100f)
				{
					unk_0x03A927199A2DFE46(iLocal_69);
					if (func_39(iLocal_69, Local_397, 1) < 20f)
					{
						unk_0x7D1424753688EE7A(iLocal_69, Local_397, 1f, 20000, 0.25f, 32, Local_397.f_3);
					}
					else
					{
						unk_0x7D1424753688EE7A(iLocal_69, Local_397, 3f, 60000, 0.25f, 32, Local_397.f_3);
					}
					iLocal_52++;
				}
				else
				{
					func_121(4, 1);
				}
			}
			else if (iLocal_52 == 1)
			{
				if (unk_0x174CED88B97C78D9(iLocal_69, joaat("script_task_follow_nav_mesh_to_coord")) == 7)
				{
					if (unk_0x8F41785F110B0DA0(iLocal_69, Local_397, 2.5f, 2.5f, 4f, 0, 1, 0))
					{
						func_121(1, 1);
					}
					else
					{
						func_121(3, 1);
					}
				}
			}
			break;
		
		case 4:
			if (!func_113(iLocal_69, joaat("script_task_smart_flee_ped")))
			{
				unk_0x7734082B0EDB0BE0(iLocal_69, unk_0xE2D3D51028F0428A(), 100f, -1, 0, 0);
			}
			break;
		
		case 5:
			if (iLocal_52 == 0)
			{
				if (func_38())
				{
					if (func_35())
					{
						if (unk_0x611AD675982BEBCC(iLocal_69))
						{
							unk_0x6221A52631154EF7(iLocal_69);
						}
						unk_0x03A927199A2DFE46(iLocal_69);
						iLocal_56 = unk_0x320D1840B6DAA1CC();
						iLocal_58 = 1000;
						iLocal_409 = 0;
						iLocal_67 = -1;
						func_34();
						iLocal_52++;
					}
					else
					{
						func_32();
					}
				}
			}
			else if (iLocal_52 == 1)
			{
				if (((!func_24() || (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !func_22())) || (iLocal_67 > -1 && (unk_0x320D1840B6DAA1CC() - iLocal_67) > 30000)) || unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_386, 1f, 1f, 1f, 0, 1, 0))
				{
					iLocal_52++;
				}
				else if (unk_0x8F41785F110B0DA0(iLocal_69, Local_389, 3f, 3f, 4f, 0, 1, 0))
				{
					func_20();
					if (iLocal_67 == -1)
					{
						iLocal_67 = unk_0x320D1840B6DAA1CC();
					}
				}
				else
				{
					func_18();
					if (func_113(iLocal_69, joaat("script_task_follow_nav_mesh_to_coord")))
					{
						iVar0 = unk_0x9FA616DF1EF7172A(iLocal_69, &uVar2, &uVar1);
						if (iVar0 == 2)
						{
							iLocal_409++;
						}
						else if (iVar0 == 3)
						{
							if (iLocal_409 != 0)
							{
								iLocal_409 = 0;
							}
						}
						if (iLocal_409 > 9)
						{
							func_32();
						}
					}
					else
					{
						unk_0x7D1424753688EE7A(iLocal_69, Local_389, 3f, -1, 3f, 36, 1193033728);
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				unk_0x03A927199A2DFE46(iLocal_69);
				unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@indication@");
				func_121(2, 1);
			}
			func_102();
			break;
		
		case 6:
			if (iLocal_52 == 0)
			{
				if (unk_0x611AD675982BEBCC(iLocal_69))
				{
					unk_0x6221A52631154EF7(iLocal_69);
				}
				unk_0x50274A7EACA3133A(iLocal_69, 0);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (func_125(unk_0xE2D3D51028F0428A()))
				{
					if ((!func_113(iLocal_69, joaat("script_task_combat")) && !unk_0xCED7266BAB0BDC20(iLocal_69, 0)) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
					{
						iLocal_62 = unk_0x320D1840B6DAA1CC();
						func_121(2, 1);
					}
				}
			}
			func_102();
			break;
		
		case 7:
			if (iLocal_52 == 0)
			{
				unk_0x8FB472886552D737("creatures@rottweiler@tricks@");
				if (unk_0x6F940C2636C076AD("creatures@rottweiler@tricks@"))
				{
					unk_0x03A927199A2DFE46(iLocal_69);
					unk_0xA888F8CC04F25CC8(&uLocal_119);
					if (!unk_0x2E7F5417D4F4DD69(iLocal_69, unk_0xE2D3D51028F0428A(), 10f))
					{
						unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					}
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "beg_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "beg_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC963A45B50851768(uLocal_119);
					unk_0x8ACADA903FCAA42F(iLocal_69, uLocal_119);
					unk_0x7461D7C5BA953BC7(&uLocal_119);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 8:
			if (iLocal_52 == 0)
			{
				unk_0x8FB472886552D737("creatures@rottweiler@tricks@");
				if (unk_0x6F940C2636C076AD("creatures@rottweiler@tricks@"))
				{
					unk_0x03A927199A2DFE46(iLocal_69);
					unk_0xA888F8CC04F25CC8(&uLocal_119);
					if (!unk_0x2E7F5417D4F4DD69(iLocal_69, unk_0xE2D3D51028F0428A(), 10f))
					{
						unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					}
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC963A45B50851768(uLocal_119);
					unk_0x8ACADA903FCAA42F(iLocal_69, uLocal_119);
					unk_0x7461D7C5BA953BC7(&uLocal_119);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 9:
			if (iLocal_52 == 0)
			{
				unk_0x8FB472886552D737("creatures@rottweiler@tricks@");
				if (unk_0x6F940C2636C076AD("creatures@rottweiler@tricks@"))
				{
					unk_0x03A927199A2DFE46(iLocal_69);
					unk_0xA888F8CC04F25CC8(&uLocal_119);
					if (!unk_0x2E7F5417D4F4DD69(iLocal_69, unk_0xE2D3D51028F0428A(), 10f))
					{
						unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					}
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "paw_right_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "paw_right_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC963A45B50851768(uLocal_119);
					unk_0x8ACADA903FCAA42F(iLocal_69, uLocal_119);
					unk_0x7461D7C5BA953BC7(&uLocal_119);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 10:
			unk_0x7653D561C9574763(0, 32, 1);
			unk_0x7653D561C9574763(0, 34, 1);
			unk_0x7653D561C9574763(0, 35, 1);
			unk_0x7653D561C9574763(0, 33, 1);
			unk_0x7653D561C9574763(0, 31, 1);
			unk_0x7653D561C9574763(0, 30, 1);
			unk_0x7653D561C9574763(0, 22, 1);
			unk_0x7653D561C9574763(0, 36, 1);
			unk_0x7653D561C9574763(0, 44, 1);
			unk_0x7653D561C9574763(0, 141, 1);
			unk_0x7653D561C9574763(0, 140, 1);
			unk_0x7653D561C9574763(0, 263, 1);
			unk_0x7653D561C9574763(0, 264, 1);
			unk_0x7653D561C9574763(0, 143, 1);
			unk_0x7653D561C9574763(0, 24, 1);
			unk_0x7653D561C9574763(0, 257, 1);
			unk_0x7653D561C9574763(0, 262, 1);
			unk_0x7653D561C9574763(0, 261, 1);
			unk_0x7653D561C9574763(0, 37, 1);
			unk_0x7653D561C9574763(0, 21, 1);
			if (iLocal_52 == 0)
			{
				unk_0x8FB472886552D737("creatures@rottweiler@tricks@");
				unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
				unk_0x529D306014D3C29A(unk_0xE2D3D51028F0428A(), iLocal_69, 0);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), joaat("script_task_turn_ped_to_face_entity")) == 7)
				{
					unk_0x03A927199A2DFE46(iLocal_69);
					Var3 = { unk_0xCACAD935C0BEE14F(unk_0xE2D3D51028F0428A(), 0f, 1f, 1f) };
					unk_0x9CD4CBF2BBE10F00(Var3, &(Var3.f_2), 0, 0);
					if (func_39(iLocal_69, Var3, 0) > 0.3f)
					{
						unk_0x7D1424753688EE7A(iLocal_69, Var3, 1f, 5000, 0.25f, 0, 1193033728);
					}
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 2)
			{
				if (unk_0x174CED88B97C78D9(iLocal_69, joaat("script_task_follow_nav_mesh_to_coord")) == 7 || func_39(iLocal_69, Var3, 0) < 0.3f)
				{
					if (!unk_0x2E7F5417D4F4DD69(iLocal_69, unk_0xE2D3D51028F0428A(), 15f))
					{
						unk_0x529D306014D3C29A(iLocal_69, unk_0xE2D3D51028F0428A(), 0);
						iLocal_482 = 0;
					}
					else
					{
						iLocal_482 = 1;
					}
					if (!unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), iLocal_69, 15f))
					{
						unk_0x529D306014D3C29A(unk_0xE2D3D51028F0428A(), iLocal_69, 0);
						iLocal_483 = 0;
					}
					else
					{
						iLocal_483 = 1;
					}
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 3)
			{
				unk_0x8FB472886552D737("creatures@rottweiler@tricks@");
				if (((iLocal_482 == 1 || unk_0x174CED88B97C78D9(iLocal_69, joaat("script_task_turn_ped_to_face_entity")) == 7) && (iLocal_483 == 1 || unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), joaat("script_task_turn_ped_to_face_entity")) == 7)) && unk_0x6F940C2636C076AD("creatures@rottweiler@tricks@"))
				{
					unk_0x49D97B076E3590AC(iLocal_69, "creatures@rottweiler@tricks@", "petting_chop", 8f, -8f, -1, 8, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(unk_0xE2D3D51028F0428A(), "creatures@rottweiler@tricks@", "petting_franklin", 8f, -8f, -1, 8, 0, 0, 0, 0);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 4)
			{
				if (unk_0x174CED88B97C78D9(iLocal_69, joaat("script_task_play_anim")) == 7)
				{
					func_108("CHOP_RETURN1", 0);
					unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 12:
			if (iLocal_52 == 0)
			{
				if (unk_0x611AD675982BEBCC(iLocal_69))
				{
					unk_0x6221A52631154EF7(iLocal_69);
				}
				unk_0x8FB472886552D737("creatures@rottweiler@tricks@");
				if (unk_0x6F940C2636C076AD("creatures@rottweiler@tricks@"))
				{
					unk_0x03A927199A2DFE46(iLocal_69);
					unk_0xA888F8CC04F25CC8(&uLocal_119);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4097, 0, 0, 0, 0);
					unk_0xC963A45B50851768(uLocal_119);
					unk_0x8ACADA903FCAA42F(iLocal_69, uLocal_119);
					unk_0x7461D7C5BA953BC7(&uLocal_119);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (!func_16())
				{
					unk_0x8FB472886552D737("creatures@rottweiler@tricks@");
					if (unk_0x6F940C2636C076AD("creatures@rottweiler@tricks@"))
					{
						unk_0x03A927199A2DFE46(iLocal_69);
						unk_0x49D97B076E3590AC(iLocal_69, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
						func_108("CHOP_WALK", 0);
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (unk_0x174CED88B97C78D9(iLocal_69, joaat("script_task_play_anim")) == 7)
				{
					unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@tricks@");
					iLocal_62 = unk_0x320D1840B6DAA1CC();
					func_121(2, 1);
				}
			}
			break;
		
		case 13:
			if (iLocal_52 == 0)
			{
				if (unk_0x611AD675982BEBCC(iLocal_69))
				{
					unk_0x6221A52631154EF7(iLocal_69);
				}
				unk_0x8FB472886552D737("creatures@rottweiler@move");
				unk_0x9E63031C188793E1();
				if (unk_0x6F940C2636C076AD("creatures@rottweiler@move") && unk_0x51B6C2EF8DBE2E1A())
				{
					unk_0x03A927199A2DFE46(iLocal_69);
					unk_0xA888F8CC04F25CC8(&uLocal_119);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@move", "dump_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@move", "dump_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@move", "dump_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC963A45B50851768(uLocal_119);
					unk_0x8ACADA903FCAA42F(iLocal_69, uLocal_119);
					unk_0x7461D7C5BA953BC7(&uLocal_119);
					func_122("AGITATED");
					iLocal_64 = unk_0x320D1840B6DAA1CC();
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					if (unk_0x6B8F21F773404988(uLocal_79))
					{
						unk_0x0F53BC871BA89C94(uLocal_79, 0);
					}
					if (func_118(iLocal_69, 0))
					{
						func_121(1, 1);
					}
					else
					{
						func_121(2, 1);
					}
				}
				else if (!unk_0x6B8F21F773404988(uLocal_79))
				{
					if (iLocal_64 > -1 && (unk_0x320D1840B6DAA1CC() - iLocal_64) > 4000)
					{
						uLocal_79 = unk_0x2D649DA6DC187D35("ent_anim_dog_poo", iLocal_69, 0f, -0.15f, -0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					}
				}
				else if ((unk_0x320D1840B6DAA1CC() - iLocal_64) > 10000)
				{
					unk_0x0F53BC871BA89C94(uLocal_79, 0);
					iLocal_64 = -1;
				}
			}
			break;
		
		case 14:
			if (iLocal_52 == 0)
			{
				unk_0x9E63031C188793E1();
				if (unk_0x51B6C2EF8DBE2E1A())
				{
					if (unk_0x611AD675982BEBCC(iLocal_69))
					{
						unk_0x6221A52631154EF7(iLocal_69);
					}
					func_122("AGITATED");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				unk_0x8FB472886552D737("creatures@rottweiler@move");
				if (!func_113(iLocal_69, joaat("script_task_follow_nav_mesh_to_coord")))
				{
					unk_0x7D1424753688EE7A(iLocal_69, unk_0x6B62510F212526DC(iLocal_423, 1), 2f, 20000, 0.25f, 36, 1193033728);
				}
				if (func_39(iLocal_69, unk_0x6B62510F212526DC(iLocal_423, 1), 1) < 2f)
				{
					if ((!BitTest(Global_113386.f_10049.f_94, 10) && !unk_0xF847447D4467709D()) && !unk_0x04458B4E5D9E466A())
					{
						unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_94), 10);
						if (bLocal_395 == 0)
						{
							func_15("CHOP_H_BEHAVE", -1);
						}
						else
						{
							func_15("CHOP_H_BEHAVA", -1);
						}
					}
					unk_0x03A927199A2DFE46(iLocal_69);
					if (unk_0x6F940C2636C076AD("creatures@rottweiler@move") && unk_0x207D53F9E0190691(iLocal_69) < 1f)
					{
						Local_425 = { unk_0x6B62510F212526DC(iLocal_69, 1) };
						iLocal_424 = unk_0x5853B15F78E1A265(0, 2);
						uLocal_431 = func_14(Local_425, unk_0x6B62510F212526DC(iLocal_423, 1));
						if (iLocal_424 == 0)
						{
							Local_428 = { unk_0x6DB7FBD602C51670(Local_425, uLocal_431, -0.5f, 1f, 0f) };
						}
						else
						{
							Local_428 = { unk_0x6DB7FBD602C51670(Local_425, uLocal_431, 0.5f, 1f, 0f) };
						}
						unk_0xA888F8CC04F25CC8(&uLocal_119);
						unk_0x1A96B8B416BC07D0(0, Local_428, 0);
						if (iLocal_424 == 0)
						{
							unk_0x49D97B076E3590AC(0, "creatures@rottweiler@move", "pee_right_enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x49D97B076E3590AC(0, "creatures@rottweiler@move", "pee_right_idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x49D97B076E3590AC(0, "creatures@rottweiler@move", "pee_right_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0x49D97B076E3590AC(0, "creatures@rottweiler@move", "pee_left_enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x49D97B076E3590AC(0, "creatures@rottweiler@move", "pee_left_idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x49D97B076E3590AC(0, "creatures@rottweiler@move", "pee_left_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						unk_0xC963A45B50851768(uLocal_119);
						unk_0x8ACADA903FCAA42F(iLocal_69, uLocal_119);
						unk_0x7461D7C5BA953BC7(&uLocal_119);
						iLocal_64 = unk_0x320D1840B6DAA1CC();
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (func_107())
				{
					if (unk_0x6B8F21F773404988(uLocal_79))
					{
						unk_0x0F53BC871BA89C94(uLocal_79, 0);
					}
					func_122("BARK");
					func_121(2, 1);
				}
				else if (!unk_0x6B8F21F773404988(uLocal_79))
				{
					if (iLocal_64 > -1 && (unk_0x320D1840B6DAA1CC() - iLocal_64) > 7000)
					{
						if (iLocal_424 == 0)
						{
							uLocal_79 = unk_0x2D649DA6DC187D35("ent_anim_dog_peeing", iLocal_69, 0.1f, -0.32f, -0.04f, 0f, 0f, 30f, 1065353216, 0, 0, 0);
						}
						else
						{
							uLocal_79 = unk_0x2D649DA6DC187D35("ent_anim_dog_peeing", iLocal_69, -0.1f, -0.32f, -0.04f, 0f, 0f, 150f, 1065353216, 0, 0, 0);
						}
					}
				}
				else if ((unk_0x320D1840B6DAA1CC() - iLocal_64) > 16000)
				{
					unk_0x0F53BC871BA89C94(uLocal_79, 0);
					iLocal_64 = -1;
				}
			}
			break;
		
		case 15:
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
			{
				func_40(0);
				iLocal_62 = unk_0x320D1840B6DAA1CC();
				func_121(2, 1);
			}
			else
			{
				if (iLocal_52 == 0)
				{
					func_40(1);
					if (unk_0x367885498C2037BD(unk_0xE2D3D51028F0428A(), iLocal_473, 50f, &uLocal_468, &iLocal_467, 0))
					{
						func_6(294, 0, 0);
						unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
						iLocal_471 = 0;
						iLocal_472 = 0;
						iLocal_410 = 0;
						if (unk_0x611AD675982BEBCC(iLocal_69))
						{
							unk_0x6221A52631154EF7(iLocal_69);
						}
						iLocal_474 = unk_0x320D1840B6DAA1CC();
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 1)
				{
					if (unk_0xE5965CDF24F93A9F(iLocal_467))
					{
						if (!unk_0xD8F9DF94CD871327(iLocal_467))
						{
							if ((unk_0x320D1840B6DAA1CC() - iLocal_474) > 500)
							{
								if (func_5())
								{
									unk_0x8FB472886552D737("creatures@rottweiler@move");
									if (unk_0x6F940C2636C076AD("creatures@rottweiler@move"))
									{
										unk_0xA888F8CC04F25CC8(&uLocal_119);
										if (iLocal_473 == joaat("weapon_ball"))
										{
											unk_0x49D97B076E3590AC(0, "creatures@rottweiler@move", "fetch_pickup", 8f, -8f, -1, 49152, 0, 0, 0, 0);
										}
										unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), 20000, 4f, 3f, 1073741824, 0);
										unk_0xC963A45B50851768(uLocal_119);
										unk_0x8ACADA903FCAA42F(iLocal_69, uLocal_119);
										unk_0x7461D7C5BA953BC7(&uLocal_119);
										if (iLocal_473 == joaat("weapon_ball"))
										{
											iLocal_471 = 1;
										}
										iLocal_52++;
									}
								}
								else if (!func_113(iLocal_69, joaat("script_task_go_to_entity")))
								{
									unk_0xC149E50FBB27DD70(iLocal_69, iLocal_467, 30000, 0.5f, 3f, 1073741824, 0);
									iLocal_410++;
									iLocal_409 = 0;
									if (iLocal_410 > 3)
									{
										unk_0xC149E50FBB27DD70(iLocal_69, unk_0xE2D3D51028F0428A(), 20000, 5f, 3f, 1073741824, 0);
										func_40(1);
										iLocal_52++;
									}
								}
								else
								{
									iVar0 = unk_0x9FA616DF1EF7172A(iLocal_69, &uVar2, &uVar1);
									if (iVar0 == 2)
									{
										fLocal_411 = unk_0x07B3D89ED0C66854(iLocal_467);
										if (fLocal_411 < 1f)
										{
											iLocal_409++;
										}
									}
									else if (iVar0 == 3)
									{
										if (iLocal_472 == 0)
										{
											func_122("BARK");
											if (iLocal_473 == joaat("weapon_ball"))
											{
												func_108("CHOP_FETCH", 0);
											}
											iLocal_472 = 1;
										}
									}
									if (iLocal_409 > 9)
									{
										unk_0xC149E50FBB27DD70(iLocal_69, unk_0xE2D3D51028F0428A(), 20000, 5f, 3f, 1073741824, 0);
										func_40(1);
										iLocal_52++;
									}
								}
							}
						}
						else
						{
							unk_0xC149E50FBB27DD70(iLocal_69, unk_0xE2D3D51028F0428A(), 20000, 5f, 3f, 1073741824, 0);
							iLocal_52++;
						}
					}
					else
					{
						unk_0xC149E50FBB27DD70(iLocal_69, unk_0xE2D3D51028F0428A(), 20000, 5f, 3f, 1073741824, 0);
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 2)
				{
					if (iLocal_471 == 1)
					{
						if ((unk_0xE5965CDF24F93A9F(iLocal_467) && unk_0xFCF559C8631ABED7(iLocal_69, "creatures@rottweiler@move", "fetch_pickup", 3)) && unk_0xD01FAFCE275C94F3(iLocal_69, "creatures@rottweiler@move", "fetch_pickup") > 0.25f)
						{
							unk_0x9A97DC6DBC7B223D(iLocal_467, iLocal_69, 28, 0.2042f, 0f, -0.0608f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
							unk_0x6CE6C3A402C3E20C("DisableBarks", 1);
							iLocal_52++;
						}
					}
					else
					{
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 3)
				{
					if (func_4(unk_0xE2D3D51028F0428A(), iLocal_69, 1) < 5f)
					{
						if (iLocal_473 == joaat("weapon_ball"))
						{
							if (iLocal_471 == 1)
							{
								unk_0x8FB472886552D737("creatures@rottweiler@move");
								if (unk_0x6F940C2636C076AD("creatures@rottweiler@move"))
								{
									unk_0xA888F8CC04F25CC8(&uLocal_119);
									unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
									unk_0x49D97B076E3590AC(0, "creatures@rottweiler@move", "fetch_drop", 8f, -8f, -1, 16384, 0, 0, 0, 0);
									unk_0xC963A45B50851768(uLocal_119);
									unk_0x8ACADA903FCAA42F(iLocal_69, uLocal_119);
									unk_0x7461D7C5BA953BC7(&uLocal_119);
									func_108("CHOP_RETURN1", 0);
									unk_0x6CE6C3A402C3E20C("DisableBarks", 0);
									iLocal_52++;
								}
							}
							else
							{
								func_122("BREATH_AGITATED");
								func_108("CHOP_RETURN2", 0);
								func_121(2, 1);
							}
						}
						else
						{
							func_122("BARK_WHINE");
							func_40(1);
							func_121(2, 1);
						}
					}
				}
				else if (iLocal_52 == 4)
				{
					if (!func_113(iLocal_69, joaat("script_task_perform_sequence")) && !unk_0xE5965CDF24F93A9F(iLocal_467))
					{
						if (func_3(0))
						{
							func_99(0, 1, 0);
						}
						else if (unk_0x2B1D7439C26D5642() == 4)
						{
							func_99(0, 1, 1);
						}
						else
						{
							func_99(1, 1, 1);
						}
						iLocal_62 = unk_0x320D1840B6DAA1CC();
						func_121(2, 1);
					}
					else if (unk_0xE5965CDF24F93A9F(iLocal_467))
					{
						if (unk_0xE85F749F6D5C809E(iLocal_467))
						{
							if (unk_0xFCF559C8631ABED7(iLocal_69, "creatures@rottweiler@move", "fetch_drop", 3) && unk_0xD01FAFCE275C94F3(iLocal_69, "creatures@rottweiler@move", "fetch_drop") > 0.4f)
							{
								unk_0xE6451C2F193342C7(iLocal_467, 1, 1);
							}
						}
						else
						{
							if ((func_4(unk_0xE2D3D51028F0428A(), iLocal_467, 1) < 1.5f || func_4(unk_0xE2D3D51028F0428A(), iLocal_467, 1) > 20f) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
							{
								func_40(1);
							}
							if (!func_113(iLocal_69, joaat("script_task_perform_sequence")))
							{
								func_100();
							}
						}
					}
				}
				func_102();
			}
			break;
		
		case 16:
			if (iLocal_52 == 0)
			{
				unk_0x8FB472886552D737("creatures@rottweiler@in_vehicle@std_car");
				if (unk_0x6F940C2636C076AD("creatures@rottweiler@in_vehicle@std_car"))
				{
					if (unk_0x611AD675982BEBCC(iLocal_69))
					{
						unk_0x6221A52631154EF7(iLocal_69);
					}
					unk_0x9A97DC6DBC7B223D(iLocal_69, unk_0x4F78F44087496A64(unk_0xE2D3D51028F0428A()), 0, 0f, 0f, -6.1f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1, 0);
					unk_0x49D97B076E3590AC(iLocal_69, "creatures@rottweiler@in_vehicle@std_car", "sit", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (!unk_0xE85F749F6D5C809E(unk_0xE2D3D51028F0428A()))
				{
					fVar6 = 99999f;
					iVar8 = 0;
					while (iVar8 < 4)
					{
						fVar7 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_89[iVar8 /*3*/], 1);
						if (fVar7 < fVar6)
						{
							fVar6 = fVar7;
							iVar9 = iVar8;
						}
						iVar8++;
					}
					if (unk_0xE85F749F6D5C809E(iLocal_69))
					{
						unk_0xE6451C2F193342C7(iLocal_69, 1, 1);
					}
					func_124(iLocal_69, Local_89[iVar9 /*3*/], fLocal_102[iVar9], 0, 1);
					unk_0xEB087B19F63AB053(iLocal_69, 0, 0);
					iLocal_62 = unk_0x320D1840B6DAA1CC();
					func_121(2, 1);
				}
			}
			break;
	}
}

int func_3(int iParam0)
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

float func_4(int iParam0, int iParam1, int iParam2)
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

int func_5()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_4(iLocal_69, iLocal_467, 1) < (0.5f + 0.25f))
	{
		Var0 = { unk_0x6B62510F212526DC(iLocal_467, 1) };
		if (unk_0x9CD4CBF2BBE10F00(Var0.f_0, Var0.f_1, (Var0.f_2 + 1f), &fVar3, 0, 0))
		{
			if (unk_0x48053974ED6F63CE((Var0.f_2 - fVar3)) < 0.1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_6(int iParam0, int iParam1, int iParam2)
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
		func_12((891 + iParam0), 1, -1);
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
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
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
		func_7();
	}
}

void func_7()
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
		func_11(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_78319)
		{
			if (func_10() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_8();
				}
			}
		}
	}
}

int func_8()
{
	if (func_9(0))
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

int func_9(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_10()
{
	return Global_31959;
}

int func_11(int iParam0, int iParam1)
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

void func_12(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_13();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

int func_13()
{
	return Global_1574918;
}

var func_14(struct<2> Param0, var uParam2, struct<2> Param3, float fParam5)
{
	return unk_0xD12EFCAB87804BED((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_15(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

bool func_16()
{
	return Global_100493.f_375 > 0;
}

void func_17()
{
	iLocal_62 = unk_0x320D1840B6DAA1CC();
	if (iLocal_75 == 0)
	{
		func_121(1, 1);
	}
	else
	{
		func_121(2, 1);
	}
}

void func_18()
{
	float fVar0;
	
	if ((unk_0x320D1840B6DAA1CC() - iLocal_56) > iLocal_58)
	{
		fVar0 = func_39(iLocal_69, Local_389, 1);
		if (fVar0 < 10f)
		{
			func_122("BARK_SEQ");
		}
		else
		{
			func_122("BARK");
		}
		iLocal_56 = unk_0x320D1840B6DAA1CC();
		if (fVar0 < 20f)
		{
			iLocal_58 = unk_0x5853B15F78E1A265(4000, 5000);
		}
		else if (fVar0 < 50f)
		{
			iLocal_58 = unk_0x5853B15F78E1A265(5000, 6000);
		}
		else
		{
			iLocal_58 = unk_0x5853B15F78E1A265(8000, 12000);
		}
		if (((!unk_0xF847447D4467709D() && !BitTest(Global_113386.f_10049.f_94, 1)) && !func_19()) && !unk_0x04458B4E5D9E466A())
		{
			unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_94), 1);
			func_15("CHOP_H_HUNT", -1);
		}
	}
}

int func_19()
{
	int iVar0;
	
	if (unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_69) || (iLocal_51 == 10 && unk_0x4C1B8C5717647539(2, 25)))
	{
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1);
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
	}
	return 0;
}

void func_20()
{
	if (!func_113(iLocal_69, joaat("script_task_perform_sequence")))
	{
		unk_0x8FB472886552D737("creatures@rottweiler@indication@");
		if (unk_0x6F940C2636C076AD("creatures@rottweiler@indication@"))
		{
			unk_0x03A927199A2DFE46(iLocal_69);
			unk_0xA888F8CC04F25CC8(&uLocal_119);
			unk_0x1A96B8B416BC07D0(0, Local_386, 0);
			unk_0x49D97B076E3590AC(0, "creatures@rottweiler@indication@", func_21(), 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xC963A45B50851768(uLocal_119);
			unk_0x8ACADA903FCAA42F(iLocal_69, uLocal_119);
			unk_0x7461D7C5BA953BC7(&uLocal_119);
		}
	}
}

char* func_21()
{
	char* sVar0;
	struct<3> Var1;
	
	if (func_125(iLocal_69))
	{
		Var1 = { unk_0x6B62510F212526DC(iLocal_69, 1) };
		if ((Var1.f_2 + 1f) < Local_386.f_2)
		{
			sVar0 = "indicate_high";
		}
		else if ((Var1.f_2 - 1f) > Local_386.f_2)
		{
			sVar0 = "indicate_low";
		}
		else
		{
			sVar0 = "indicate_ahead";
		}
	}
	return sVar0;
}

int func_22()
{
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
	{
		if (unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A()) || func_23())
		{
			return 1;
		}
	}
	return 0;
}

int func_23()
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
	{
		iVar0 = unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 1));
		if ((((((((((((((((((iVar0 == joaat("caddy") || iVar0 == joaat("caddy2")) || iVar0 == joaat("dune")) || iVar0 == joaat("airtug")) || iVar0 == joaat("blazer")) || iVar0 == joaat("blazer2")) || iVar0 == joaat("bulldozer")) || iVar0 == joaat("cutter")) || iVar0 == joaat("dump")) || iVar0 == joaat("forklift")) || iVar0 == joaat("handler")) || iVar0 == joaat("mower")) || iVar0 == joaat("rhino")) || iVar0 == joaat("tractor")) || iVar0 == joaat("tractor2")) || iVar0 == joaat("tractor3")) || iVar0 == unk_0x2E87280918B16506("bifta")) || iVar0 == joaat("blazer3")) || iVar0 == joaat("dune2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_24()
{
	switch (iLocal_338)
	{
		case 2:
			if (!func_27(2))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 1:
			if (!func_27(1))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 0:
			if (!func_27(0))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 3:
			if (func_26(iLocal_385))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 4:
			if (func_25(iLocal_385))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return BitTest(Global_113386.f_10049.f_125, iParam0);
	}
	return BitTest(Global_113386.f_10049.f_125.f_1, (iParam0 - 32));
}

int func_26(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return BitTest(Global_113386.f_10049.f_122, iParam0);
	}
	return BitTest(Global_113386.f_10049.f_122.f_1, (iParam0 - 32));
}

int func_27(int iParam0)
{
	if (func_31())
	{
		func_30(iParam0, iLocal_385);
	}
	if (func_29())
	{
		if (func_28())
		{
			func_34();
			return 0;
		}
		func_34();
	}
	return 1;
}

bool func_28()
{
	return Global_32206;
}

int func_29()
{
	if (Global_32203 == 2)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0, int iParam1)
{
	if (Global_32203 == 0)
	{
		Global_32203 = 1;
		Global_32204 = iParam0;
		Global_32205 = iParam1;
	}
}

int func_31()
{
	if (Global_32203 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	struct<3> Var0;
	
	Var0 = { unk_0x6B62510F212526DC(iLocal_69, 1) };
	func_33(Var0);
	func_122("WHINE");
	func_108("CHOP_NONEAR", 0);
	func_17();
}

void func_33(struct<3> Param0)
{
	if (unk_0x2A488C176D52CCA5(Param0, Param0) > 1f)
	{
	}
}

void func_34()
{
	Global_32203 = 3;
}

int func_35()
{
	iLocal_385 = -1;
	Local_386 = { 0f, 0f, 0f };
	Local_389 = { 0f, 0f, 0f };
	func_36(0);
	if (iLocal_385 == -1)
	{
		func_36(1);
	}
	if (iLocal_385 > -1)
	{
		return 1;
	}
	return 0;
}

void func_36(int iParam0)
{
	float fVar0;
	int iVar1;
	
	fVar0 = 9999f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if ((iLocal_341[iVar1] > -1 && fLocal_347[iVar1] < fVar0) && func_37(iParam0, iVar1))
		{
			fVar0 = fLocal_347[iVar1];
			iLocal_385 = iLocal_341[iVar1];
			iLocal_338 = iVar1;
			Local_386 = { Local_353[iVar1 /*3*/] };
			Local_389 = { Local_369[iVar1 /*3*/] };
		}
		iVar1++;
	}
}

int func_37(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return 1;
	}
	if (iParam1 == 1 && unk_0x0CF63873D754B965(unk_0xE2D3D51028F0428A()) >= 200)
	{
		return 0;
	}
	if (iParam1 == 0 && unk_0x28E4040BE8C027EF(unk_0xE2D3D51028F0428A()) >= 100)
	{
		return 0;
	}
	return 1;
}

int func_38()
{
	if (iLocal_339 == 5)
	{
		iLocal_339 = 0;
	}
	switch (iLocal_339)
	{
		case 0:
			if (iLocal_341[0] > -1)
			{
				if (func_31())
				{
					func_30(0, iLocal_341[0]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_341[0] = -1;
					}
					func_34();
					iLocal_339 = 1;
				}
			}
			else
			{
				iLocal_339 = 1;
			}
			break;
		
		case 1:
			if (iLocal_341[1] > -1)
			{
				if (func_31())
				{
					func_30(1, iLocal_341[1]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_341[1] = -1;
					}
					func_34();
					iLocal_339 = 2;
				}
			}
			else
			{
				iLocal_339 = 2;
			}
			break;
		
		case 2:
			if (iLocal_341[2] > -1)
			{
				if (func_31())
				{
					func_30(2, iLocal_341[2]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_341[2] = -1;
					}
					func_34();
					iLocal_339 = 3;
				}
			}
			else
			{
				iLocal_339 = 3;
			}
			break;
		
		case 3:
			if (iLocal_341[3] > -1)
			{
				if (func_26(iLocal_341[3]))
				{
					iLocal_341[3] = -1;
				}
			}
			if (iLocal_341[4] > -1)
			{
				if (func_25(iLocal_341[4]))
				{
					iLocal_341[4] = -1;
				}
			}
			iLocal_339 = 5;
			return 1;
			break;
	}
	return 0;
}

float func_39(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam4);
}

void func_40(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xE5965CDF24F93A9F(iLocal_467))
	{
		Var0 = { unk_0x6B62510F212526DC(iLocal_467, 1) };
		if (unk_0x508CDC652F5361B5(iLocal_467))
		{
			unk_0xE6451C2F193342C7(iLocal_467, 1, 1);
		}
		unk_0xEC548B5E95E61DF6(&iLocal_467);
		if (iParam0 == 1 && iLocal_473 == joaat("weapon_ball"))
		{
			unk_0x917F631782A9CB32(Var0, 0.1f, 0);
		}
	}
}

void func_41()
{
	struct<3> Var0;
	
	if ((((((func_43() != 1 && (unk_0x320D1840B6DAA1CC() - iLocal_62) > 10000) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && iLocal_107 == 0) && iLocal_473 != joaat("weapon_ball")) && unk_0xCA0ED3B082A9C834(unk_0xE2D3D51028F0428A(), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 100f) == 0) && unk_0xCA0ED3B082A9C834(iLocal_69, unk_0x6B62510F212526DC(iLocal_69, 1), 100f) == 0)
	{
		unk_0x9E63031C188793E1();
		if (unk_0x51B6C2EF8DBE2E1A())
		{
			Var0 = { unk_0x6B62510F212526DC(iLocal_69, 1) };
			if (unk_0x987A5F1E1A67E3C0(Var0, Local_76, 0) < 1f)
			{
				if (unk_0x987A5F1E1A67E3C0(Var0, Local_435, 0) > 20f)
				{
					func_42(&iLocal_423, 0);
					iLocal_423 = unk_0x87A467676BDF8C35(Var0, 10f, joaat("prop_streetlight_01"), 1, 0, 1);
					if (unk_0xE5965CDF24F93A9F(iLocal_423))
					{
						Local_435 = { unk_0x6B62510F212526DC(iLocal_423, 1) };
						func_121(14, 1);
					}
				}
				else if (unk_0x987A5F1E1A67E3C0(Var0, Local_432, 0) > 20f)
				{
					Local_432 = { Var0 };
					func_121(13, 1);
				}
			}
			Local_76 = { unk_0x6B62510F212526DC(iLocal_69, 1) };
			iLocal_62 = unk_0x320D1840B6DAA1CC();
		}
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (unk_0x508CDC652F5361B5(*uParam0))
		{
			unk_0xE6451C2F193342C7(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x59E393B344098656(uParam0);
		}
		else
		{
			unk_0x13A78FCE42E3B132(*uParam0);
		}
	}
}

int func_43()
{
	if (Global_113386.f_20118.f_254.f_5)
	{
		if (Global_113386.f_20118.f_254 > 66f)
		{
			return 1;
		}
		else if (Global_113386.f_20118.f_254 > 33f)
		{
			return 0;
		}
		else
		{
			return 2;
		}
	}
	return 2;
}

void func_44()
{
	if (((!BitTest(Global_113386.f_10049.f_94, 7) && !unk_0xF847447D4467709D()) && !func_19()) && !unk_0x04458B4E5D9E466A())
	{
		unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_94), 7);
		func_15("CHOP_H_BALL", -1);
	}
	if (((func_125(unk_0xE2D3D51028F0428A()) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) && func_125(iLocal_69)) && !unk_0xD5C6B5E3B93A5EDC(iLocal_69, 1))
	{
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iLocal_473, 1);
		if (((((iLocal_473 == joaat("weapon_ball") || iLocal_473 == joaat("weapon_grenade")) || iLocal_473 == joaat("weapon_smokegrenade")) || iLocal_473 == joaat("weapon_stickybomb")) || iLocal_473 == joaat("weapon_molotov")) || iLocal_473 == joaat("weapon_flare"))
		{
			if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
			{
				func_121(15, 1);
			}
			else if (((unk_0x320D1840B6DAA1CC() - iLocal_63) > 10000 && unk_0x207D53F9E0190691(iLocal_69) < 1f) && func_4(unk_0xE2D3D51028F0428A(), iLocal_69, 1) < 5f)
			{
				unk_0x8FB472886552D737("creatures@rottweiler@amb@world_dog_barking@enter");
				unk_0x8FB472886552D737("creatures@rottweiler@amb@world_dog_barking@idle_a");
				unk_0x8FB472886552D737("creatures@rottweiler@amb@world_dog_barking@exit");
				if ((unk_0x6F940C2636C076AD("creatures@rottweiler@amb@world_dog_barking@enter") && unk_0x6F940C2636C076AD("creatures@rottweiler@amb@world_dog_barking@idle_a")) && unk_0x6F940C2636C076AD("creatures@rottweiler@amb@world_dog_barking@exit"))
				{
					unk_0x03A927199A2DFE46(iLocal_69);
					unk_0xA888F8CC04F25CC8(&uLocal_119);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xC963A45B50851768(uLocal_119);
					unk_0x8ACADA903FCAA42F(iLocal_69, uLocal_119);
					unk_0x7461D7C5BA953BC7(&uLocal_119);
					iLocal_63 = unk_0x320D1840B6DAA1CC();
				}
			}
		}
	}
}

void func_45()
{
	if (func_16() && !func_46(4))
	{
		if ((func_125(iLocal_69) && iLocal_107 == 0) && unk_0x611AD675982BEBCC(iLocal_69))
		{
			unk_0x6221A52631154EF7(iLocal_69);
		}
		func_121(12, 1);
	}
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (func_16())
	{
		iVar0 = 0;
		while (iVar0 < 58)
		{
			if (func_52(iVar0) == iParam0)
			{
				if (func_47(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_47(int iParam0)
{
	return func_48(iParam0, 5, 1);
}

int func_48(int iParam0, int iParam1, bool bParam2)
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
		if (func_10() == 0)
		{
			return BitTest(func_49(func_51(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_50(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_51(int iParam0)
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

int func_52(int iParam0)
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

void func_53()
{
	if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
	{
		if (iLocal_60 == -1)
		{
			iLocal_60 = unk_0x320D1840B6DAA1CC();
			iLocal_61 = unk_0x5853B15F78E1A265(4000, 6000);
		}
		if ((unk_0x320D1840B6DAA1CC() - iLocal_60) > iLocal_61)
		{
			func_122("SNARL");
			iLocal_60 = -1;
		}
	}
}

void func_54()
{
	if (func_125(unk_0xE2D3D51028F0428A()))
	{
		if (iLocal_107 > 1 && iLocal_107 < 8)
		{
			unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 309, 1);
		}
		if (iLocal_117 == 1 && iLocal_107 == 1)
		{
			unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 313, 1);
		}
	}
	switch (iLocal_107)
	{
		case 0:
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
			{
				iLocal_478 = unk_0x320D1840B6DAA1CC();
				iLocal_65 = -1;
				iLocal_66 = -1;
				iLocal_57 = unk_0x320D1840B6DAA1CC();
				func_82();
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 0);
				iLocal_491 = 1;
				iLocal_107 = 1;
			}
			else
			{
				if (iLocal_475 != 0)
				{
					iLocal_475 = 0;
				}
				iLocal_337 = 0;
				iLocal_59 = -1;
				if (func_81())
				{
					func_121(3, 1);
				}
			}
			break;
		
		case 1:
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
			{
				iLocal_107 = 15;
			}
			else if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
			{
				if (func_80())
				{
					if (unk_0xAB793EA186AB8DAA(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), -1, 0) != unk_0xE2D3D51028F0428A())
					{
						func_121(3, 1);
					}
					else
					{
						if (!func_125(iLocal_80))
						{
							iLocal_80 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
							func_79();
							func_78();
						}
						unk_0x8FB472886552D737(sLocal_477);
						if (unk_0x6F940C2636C076AD(sLocal_477) && func_125(iLocal_80))
						{
							if (unk_0x611AD675982BEBCC(iLocal_69))
							{
								unk_0x6221A52631154EF7(iLocal_69);
							}
							if (func_77())
							{
								if (iLocal_65 == -1)
								{
									iLocal_65 = unk_0x320D1840B6DAA1CC();
								}
								if (func_76())
								{
									func_75(1);
									iLocal_107 = 6;
								}
								else
								{
									func_74();
								}
							}
							else if (unk_0x33168C7A83D47CC0(unk_0xE2D3D51028F0428A(), iLocal_80, 0, 0, 0))
							{
								if (unk_0x2ABE742A1B0BF1A6(iLocal_80, iLocal_118) || unk_0x7DF569D9E616D55E(iLocal_80, 1) > 0.9f)
								{
									iLocal_107 = 4;
								}
								else
								{
									iLocal_107 = 2;
								}
							}
							else
							{
								func_75(1);
								iLocal_107 = 6;
							}
						}
					}
				}
				else if (func_22())
				{
					iLocal_107 = 14;
				}
				else
				{
					if (((!unk_0xF847447D4467709D() && !BitTest(Global_113386.f_10049.f_94, 3)) && !func_19()) && !unk_0x04458B4E5D9E466A())
					{
						unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_94), 3);
						func_15("CHOP_H_NOVEH", -1);
					}
					func_121(3, 1);
				}
			}
			else
			{
				if (func_80())
				{
					unk_0x8FB472886552D737("misschop_vehicleenter_exit");
					func_74();
				}
				if (iLocal_337 == 0 && unk_0x55A0C756C4A8220C(unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A()), 0))
				{
					unk_0xD6A76BAB45A4B460(iLocal_69, 185, 0);
					if (unk_0xCB09A834F0C86FBB(unk_0x15CAA6D7B11F1A7C(unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A()))) && !func_23())
					{
						if (unk_0x15CAA6D7B11F1A7C(unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A())) == joaat("taxi"))
						{
						}
						else if (unk_0xADD893BD545BE5FC(unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A())) >= 1 && unk_0x7158135695FAE89D(unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A()), 0, 0))
						{
							if (!func_73())
							{
								func_108("CHOP_RIDE", 0);
							}
						}
					}
					else if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A()))) || func_23())
					{
						func_108("CHOP_FOLLOW", 0);
					}
					iLocal_337 = 1;
				}
			}
			break;
		
		case 2:
			func_72();
			if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
			{
				iLocal_107 = 15;
			}
			else
			{
				unk_0x8FB472886552D737("misschop_vehicleenter_exit");
				if (unk_0x6F940C2636C076AD("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_107 = 3;
				}
			}
			break;
		
		case 3:
			func_72();
			if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
			{
				iLocal_107 = 15;
			}
			else if (func_125(iLocal_80) && func_70())
			{
				if (!unk_0x2ABE742A1B0BF1A6(iLocal_80, iLocal_118))
				{
					unk_0x2476BE9932670CAD(iLocal_80, iLocal_118, 0, 0);
				}
				iLocal_489 = unk_0x320D1840B6DAA1CC();
				iLocal_65 = unk_0x320D1840B6DAA1CC();
				iLocal_107 = 4;
			}
			break;
		
		case 4:
			if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
			{
				iLocal_107 = 15;
			}
			else
			{
				unk_0x8FB472886552D737(sLocal_477);
				if (func_125(iLocal_80))
				{
					if (!unk_0x2ABE742A1B0BF1A6(iLocal_80, iLocal_118) && unk_0x7DF569D9E616D55E(iLocal_80, iLocal_118) < 0.95f)
					{
						unk_0x2476BE9932670CAD(iLocal_80, iLocal_118, 0, 0);
						iLocal_489 = unk_0x320D1840B6DAA1CC();
					}
					if (func_76() && unk_0x320D1840B6DAA1CC() >= iLocal_489 + 300)
					{
						if (!func_113(unk_0xE2D3D51028F0428A(), joaat("script_task_play_anim")) && unk_0x6F940C2636C076AD(sLocal_477))
						{
							func_72();
							func_69(1, 1);
							unk_0x51BB443B279E4104(iLocal_69);
							uLocal_108 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x961EE84414CA42F8(uLocal_108, iLocal_80, unk_0x7F0054A115D66F44(iLocal_80, "seat_pside_f"));
							unk_0x950B26F4C891073F(iLocal_69, uLocal_108, sLocal_477, "get_in", 1000f, -8f, 4, 0, 1148846080, 0);
							unk_0xEB087B19F63AB053(iLocal_69, 0, 0);
							iLocal_107 = 5;
						}
					}
					else
					{
						func_74();
					}
				}
			}
			break;
		
		case 5:
			func_72();
			if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				if (unk_0x876B1078E90C91CB(uLocal_486))
				{
					unk_0x44908CDA9D1050C9();
				}
				unk_0x8FB472886552D737(sLocal_477);
				if (((unk_0x6F940C2636C076AD(sLocal_477) && unk_0xCE2C78E9FC0B01E3(uLocal_108)) && unk_0x54DE1614490C2A83(uLocal_108) > 0.99f) && func_125(iLocal_80))
				{
					func_69(0, 1);
					func_75(0);
					iLocal_107 = 6;
				}
			}
			break;
		
		case 6:
			func_72();
			if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				unk_0x8FB472886552D737("misschop_vehicleenter_exit");
				if (unk_0x6F940C2636C076AD("misschop_vehicleenter_exit") && func_125(iLocal_80))
				{
					if ((!unk_0x2ABE742A1B0BF1A6(iLocal_80, iLocal_118) && unk_0x7DF569D9E616D55E(iLocal_80, 1) > 0.1f) && !func_77())
					{
						func_71();
					}
					iLocal_107 = 7;
				}
			}
			break;
		
		case 7:
			func_72();
			if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (func_125(iLocal_80) && func_70())
			{
				if (!unk_0x2ABE742A1B0BF1A6(iLocal_80, iLocal_118))
				{
					unk_0xCAA02C32EC0C2462(iLocal_80, iLocal_118, 0);
				}
				iLocal_107 = 8;
			}
			break;
		
		case 8:
			func_72();
			func_67(&uLocal_70);
			func_40(1);
			if (iLocal_54 == -1)
			{
				iLocal_54 = unk_0x320D1840B6DAA1CC();
				iLocal_55 = 7000;
			}
			if (func_125(iLocal_80))
			{
				if (func_66())
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (unk_0xEF9410C312F2B117(iLocal_80))
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x207D53F9E0190691(iLocal_80) < 5f)
					{
						if (!unk_0x2ABE742A1B0BF1A6(iLocal_80, iLocal_118))
						{
							unk_0x2476BE9932670CAD(iLocal_80, iLocal_118, 0, 0);
						}
						iLocal_107 = 12;
					}
				}
				else if (unk_0xF01464D7AF0B7347(2, 75))
				{
					if (unk_0x68C47642183F091A(iLocal_80))
					{
						func_68(2f, 0f, 0f, 1);
					}
					else if (func_77())
					{
						iLocal_107 = 9;
					}
					else if (unk_0x33168C7A83D47CC0(unk_0xE2D3D51028F0428A(), iLocal_80, 0, 0, 0))
					{
						unk_0xD28E3800883DED83(iLocal_80, 10f, 1, 0);
						if (unk_0x2ABE742A1B0BF1A6(iLocal_80, iLocal_118))
						{
							iLocal_107 = 12;
						}
						else
						{
							iLocal_107 = 10;
						}
					}
					else if (unk_0x33168C7A83D47CC0(unk_0xE2D3D51028F0428A(), iLocal_80, -1, 0, 0))
					{
						unk_0xD28E3800883DED83(iLocal_80, 10f, 1, 0);
						func_68(-2f, 0f, 0f, 0);
					}
					else
					{
						unk_0xD28E3800883DED83(iLocal_80, 10f, 1, 0);
						func_68(0f, -4f, 0f, 0);
					}
				}
				else
				{
					func_65();
					func_63();
					func_62();
					if (((!unk_0xF847447D4467709D() && !BitTest(Global_113386.f_10049.f_94, 2)) && !func_19()) && !unk_0x04458B4E5D9E466A())
					{
						unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_94), 2);
						func_15("CHOP_H_CAR", -1);
					}
				}
			}
			else
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		
		case 9:
			func_72();
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !func_113(unk_0xE2D3D51028F0428A(), joaat("script_task_leave_any_vehicle")))
			{
				unk_0xAB7639D658BBCCEE(unk_0xE2D3D51028F0428A(), 0, 0);
			}
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		
		case 10:
			func_72();
			if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				unk_0x8FB472886552D737("misschop_vehicleenter_exit");
				if (unk_0x6F940C2636C076AD("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_107 = 11;
				}
			}
			break;
		
		case 11:
			func_72();
			if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (func_125(iLocal_80) && func_70())
			{
				if (!unk_0x2ABE742A1B0BF1A6(iLocal_80, iLocal_118))
				{
					unk_0x2476BE9932670CAD(iLocal_80, iLocal_118, 0, 0);
				}
				iLocal_107 = 12;
			}
			break;
		
		case 12:
			func_72();
			unk_0x8FB472886552D737(sLocal_477);
			if ((!func_113(unk_0xE2D3D51028F0428A(), joaat("script_task_play_anim")) && unk_0x6F940C2636C076AD(sLocal_477)) && func_125(iLocal_80))
			{
				unk_0x51BB443B279E4104(iLocal_69);
				uLocal_108 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
				unk_0x961EE84414CA42F8(uLocal_108, iLocal_80, unk_0x7F0054A115D66F44(iLocal_80, "seat_pside_f"));
				unk_0x950B26F4C891073F(iLocal_69, uLocal_108, sLocal_477, "get_out", 1000f, -8f, 10, 0, 1148846080, 0);
				unk_0xEB087B19F63AB053(iLocal_69, 0, 0);
				iLocal_107 = 13;
			}
			break;
		
		case 13:
			func_72();
			if ((unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && (unk_0x320D1840B6DAA1CC() - iLocal_479) > 1500) && !func_113(unk_0xE2D3D51028F0428A(), joaat("script_task_leave_any_vehicle")))
			{
				unk_0xAB7639D658BBCCEE(unk_0xE2D3D51028F0428A(), 0, 0);
			}
			if (!unk_0xCE2C78E9FC0B01E3(uLocal_108) || (unk_0xCE2C78E9FC0B01E3(uLocal_108) && unk_0x54DE1614490C2A83(uLocal_108) > 0.99f))
			{
				unk_0xC98E8D7F0D9D4795(iLocal_69, iLocal_69, 0f, 5f, 0f, 1f, 20000);
				iLocal_107 = 15;
			}
			break;
		
		case 14:
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iLocal_107 = 15;
			}
			else
			{
				func_65();
				if (((!unk_0xF847447D4467709D() && !BitTest(Global_113386.f_10049.f_94, 5)) && !func_19()) && !unk_0x04458B4E5D9E466A())
				{
					unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_94), 5);
					func_15("CHOP_H_BIKE", -1);
				}
			}
			break;
		
		case 15:
			func_72();
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				func_57();
				func_99(0, 0, 0);
				unk_0xAFC1FBF3F6AE7B9A("misschop_vehicleenter_exit");
				unk_0xAFC1FBF3F6AE7B9A(sLocal_477);
				iLocal_62 = unk_0x320D1840B6DAA1CC();
				func_56();
				func_55(&iLocal_80);
				iLocal_80 = 0;
				iLocal_54 = -1;
				unk_0x03A927199A2DFE46(iLocal_69);
				unk_0x9210F85E9CD785F1(iLocal_69, 0);
				unk_0xD6A76BAB45A4B460(iLocal_69, 185, 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 1);
				func_121(2, 1);
			}
			else if (!func_113(unk_0xE2D3D51028F0428A(), joaat("script_task_leave_any_vehicle")))
			{
				unk_0xAB7639D658BBCCEE(unk_0xE2D3D51028F0428A(), 0, 0);
			}
			break;
	}
}

void func_55(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(*iParam0))
	{
		unk_0x55B23FE400FCEA6B(*iParam0, 0);
		if (unk_0xA6A089369417736E(*iParam0) && unk_0x930E64CB0285CAEC(*iParam0, 1))
		{
			unk_0x3D81769BEC61BFF8(iParam0);
		}
	}
}

void func_56()
{
	if (((iLocal_491 == 1 && func_125(unk_0x78291C96EFBBDC75())) && unk_0xADD893BD545BE5FC(unk_0x78291C96EFBBDC75()) > 1) && !unk_0x2ABE742A1B0BF1A6(unk_0x78291C96EFBBDC75(), iLocal_118))
	{
		unk_0x3707F224FA0050EA(unk_0x78291C96EFBBDC75(), iLocal_118, 0, 1, 0);
	}
}

void func_57()
{
	if ((!unk_0x12DD4A0B247D9B4D(uLocal_70) && func_125(iLocal_69)) && !unk_0xD5C6B5E3B93A5EDC(iLocal_69, 1))
	{
		if (func_179(126))
		{
			func_61(139, 0, 0);
		}
		else
		{
			func_61(138, 0, 0);
		}
		uLocal_70 = func_58(iLocal_69, 0, 145);
		unk_0x1A5B5BA56167D412(uLocal_70, 273);
	}
}

var func_58(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_59(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(uVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_60(unk_0x9315DBF7D972F07A(), 1f, 1f));
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
		unk_0x293A9399E902A33B(uVar0, func_60(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_60(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_60(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_61(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_32338[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		unk_0xCED9E32812D6C7C7(&(Global_32338[iVar0 /*23*/].f_11), 18);
		if (Global_32335 == 1)
		{
			Global_32336 = 1;
		}
		Global_32335 = 1;
	}
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_32338[iVar0 /*23*/].f_11), 0);
		unk_0xCED9E32812D6C7C7(&(Global_32338[iVar0 /*23*/].f_11), 15);
		unk_0xCED9E32812D6C7C7(&(Global_32338[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_32338[iVar0 /*23*/].f_11), 0);
		unk_0xB0550BC91B0159D6(&(Global_32338[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x12DD4A0B247D9B4D(Global_32338[iVar0 /*23*/].f_19))
		{
			unk_0xE2B3315F89FB203D(1);
			unk_0xFFD8EB5462B07B59(&(Global_32338[iVar0 /*23*/].f_19));
			unk_0xE2B3315F89FB203D(0);
		}
	}
}

void func_62()
{
	if (func_125(iLocal_69) && func_125(iLocal_80))
	{
		if (iLocal_478 > -1)
		{
			if (((unk_0x320D1840B6DAA1CC() - iLocal_478) > 500 && unk_0x207D53F9E0190691(iLocal_80) > 5f) && unk_0x5C5B446AD691DEA2(iLocal_80))
			{
				unk_0x49D97B076E3590AC(iLocal_69, sLocal_477, "shunt_from_back", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xEB087B19F63AB053(iLocal_69, 0, 0);
				func_122("GROWL");
				iLocal_478 = -1;
				iLocal_57 = unk_0x320D1840B6DAA1CC();
			}
		}
		else if (!unk_0xFCF559C8631ABED7(iLocal_69, sLocal_477, "shunt_from_back", 3) || (unk_0xFCF559C8631ABED7(iLocal_69, sLocal_477, "shunt_from_back", 3) && unk_0xD01FAFCE275C94F3(iLocal_69, sLocal_477, "shunt_from_back") > 0.98f))
		{
			unk_0x49D97B076E3590AC(iLocal_69, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0xEB087B19F63AB053(iLocal_69, 0, 0);
			iLocal_478 = unk_0x320D1840B6DAA1CC();
			iLocal_57 = unk_0x320D1840B6DAA1CC();
		}
	}
}

void func_63()
{
	if (iLocal_478 > -1 && (unk_0x320D1840B6DAA1CC() - iLocal_54) > iLocal_55)
	{
		if (((unk_0x3AF345AA5885DF2B() == 7 || unk_0x3AF345AA5885DF2B() == 8) || unk_0x3AF345AA5885DF2B() == 9) || unk_0x3AF345AA5885DF2B() == 13)
		{
			func_64();
			iLocal_54 = unk_0x320D1840B6DAA1CC();
			iLocal_55 = unk_0x5853B15F78E1A265(6000, 8000);
		}
	}
}

void func_64()
{
	if ((unk_0x320D1840B6DAA1CC() - iLocal_57) > 500)
	{
		iLocal_57 = unk_0x320D1840B6DAA1CC();
		if (func_125(iLocal_69) && unk_0xD5C6B5E3B93A5EDC(iLocal_69, 0))
		{
			unk_0xA888F8CC04F25CC8(&uLocal_119);
			unk_0x49D97B076E3590AC(0, sLocal_477, "bark", 4f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x49D97B076E3590AC(0, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0xC963A45B50851768(uLocal_119);
			unk_0x8ACADA903FCAA42F(iLocal_69, uLocal_119);
			unk_0x7461D7C5BA953BC7(&uLocal_119);
			unk_0xEB087B19F63AB053(iLocal_69, 0, 0);
		}
	}
}

void func_65()
{
	if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0 && bLocal_395 == 1)
	{
		if (iLocal_59 == -1)
		{
			iLocal_59 = unk_0x320D1840B6DAA1CC();
		}
		if (((unk_0x320D1840B6DAA1CC() - iLocal_59) > 10000 && iLocal_478 > -1) && func_38())
		{
			if (func_35())
			{
				if (func_125(iLocal_69))
				{
					if (unk_0xD5C6B5E3B93A5EDC(iLocal_69, 0))
					{
						func_64();
					}
					else
					{
						func_122("BARK");
					}
				}
			}
			iLocal_59 = unk_0x320D1840B6DAA1CC();
		}
	}
}

int func_66()
{
	float fVar0;
	struct<3> Var1;
	
	if (func_125(iLocal_80))
	{
		if (unk_0xD8F9DF94CD871327(iLocal_80))
		{
			Var1 = { unk_0x6B62510F212526DC(iLocal_80, 1) };
			if (iLocal_68 == -1)
			{
				iLocal_68 = unk_0x320D1840B6DAA1CC();
			}
			if (unk_0x182029C7E52A1E4F(Var1, &fVar0))
			{
				if ((fVar0 - Var1.f_2) > 1f)
				{
					return 1;
				}
				else if ((unk_0x320D1840B6DAA1CC() - iLocal_68) > 3000)
				{
					func_122("AGITATED");
					iLocal_68 = unk_0x320D1840B6DAA1CC();
				}
			}
		}
		else
		{
			iLocal_68 = -1;
		}
	}
	return 0;
}

void func_67(var uParam0)
{
	if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		unk_0xAAD76B24A5282FDD(*uParam0, 0);
		unk_0xFFD8EB5462B07B59(uParam0);
	}
}

void func_68(struct<3> Param0, int iParam3)
{
	if (func_125(unk_0xE2D3D51028F0428A()) && func_125(iLocal_69))
	{
		if (func_125(iLocal_80))
		{
			if ((iParam3 == 1 && !unk_0x2ABE742A1B0BF1A6(iLocal_80, iLocal_118)) && unk_0x7DF569D9E616D55E(iLocal_80, 1) < 0.9f)
			{
				unk_0x2476BE9932670CAD(iLocal_80, iLocal_118, 0, 0);
			}
			if (unk_0xCE2C78E9FC0B01E3(uLocal_108))
			{
				unk_0x7FF9609F5D8471AF(uLocal_108);
			}
			unk_0x51BB443B279E4104(iLocal_69);
			func_124(iLocal_69, unk_0xCACAD935C0BEE14F(iLocal_80, Param0), unk_0x82FE2343F8BDFF0B(iLocal_69), 1, 0);
			unk_0xEB087B19F63AB053(iLocal_69, 0, 0);
			func_69(0, 0);
			iLocal_107 = 15;
		}
		else
		{
			if (unk_0xCE2C78E9FC0B01E3(uLocal_108))
			{
				unk_0x7FF9609F5D8471AF(uLocal_108);
			}
			unk_0x51BB443B279E4104(iLocal_69);
			func_124(iLocal_69, unk_0xCACAD935C0BEE14F(unk_0xE2D3D51028F0428A(), (Param0.f_0 + 1f), Param0.f_1, Param0.f_2), unk_0x82FE2343F8BDFF0B(iLocal_69), 1, 0);
			unk_0xEB087B19F63AB053(iLocal_69, 0, 0);
			func_69(0, 0);
			iLocal_107 = 15;
		}
	}
}

void func_69(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	
	if (iParam0 == 1)
	{
		if (!unk_0x876B1078E90C91CB(uLocal_486) && func_125(iLocal_80))
		{
			iVar6 = unk_0x5853B15F78E1A265(0, 4);
			if (iVar6 == 0)
			{
				Var0 = { 1.11573f, -1.40338f, 0.555789f };
				Var3 = { 0.5f, 0f, 0.3f };
			}
			else if (iVar6 == 1)
			{
				Var0 = { -1.15872f, 1.75252f, 0.761228f };
				Var3 = { 0f, 0f, 0.3f };
			}
			else if (iVar6 == 2)
			{
				Var0 = { -1.89975f, 0.339287f, 0.661881f };
				Var3 = { 0f, 0f, 0.3f };
			}
			else
			{
				Var0 = { 1.38134f, -0.1248f, 0.580783f };
				Var3 = { 0f, 0f, 0.3f };
			}
			uLocal_486 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 1);
			Var7 = { unk_0x96EDA732FD9DC0AF(iLocal_80, unk_0x7F0054A115D66F44(iLocal_80, "seat_pside_f")) };
			Var10 = { unk_0x37B78BEF7C4625D4(iLocal_80, Var7) };
			Var13 = { Var0 + Var10 };
			unk_0x3FB84450A94CB528(uLocal_486, iLocal_80, Var13, 1);
			unk_0x98A99A554B458431(uLocal_486, iLocal_80, Var10 + Var3, 1);
			unk_0x0A18C027350D3C19(uLocal_486, 50f);
			unk_0x9BAE3263D9B1FCB9(uLocal_486, "HAND_SHAKE", 0.3f);
			unk_0xE5744A8F282963CE(uLocal_486, 0f, 0f, 100000f, 100000f);
			unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
		}
	}
	else if (unk_0x876B1078E90C91CB(uLocal_486))
	{
		if (iParam1 == 1)
		{
			unk_0x080C97B891E2F3AA(0f, 1065353216);
			unk_0x94953C3FF0664F66(0f);
		}
		unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
		unk_0x4B248030F70A5D8B(0);
	}
}

int func_70()
{
	if (func_125(iLocal_80))
	{
		if (((unk_0x320D1840B6DAA1CC() - iLocal_479) > 500 || unk_0x2ABE742A1B0BF1A6(iLocal_80, iLocal_118)) || func_77())
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	unk_0x49D97B076E3590AC(unk_0xE2D3D51028F0428A(), "misschop_vehicleenter_exit", sLocal_476, 8f, -8f, -1, 40, 0, 0, 0, 0);
	iLocal_479 = unk_0x320D1840B6DAA1CC();
}

void func_72()
{
	unk_0x7653D561C9574763(0, 75, 1);
	unk_0x7653D561C9574763(0, 23, 1);
}

int func_73()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_74()
{
	if (!func_113(iLocal_69, joaat("script_task_follow_nav_mesh_to_coord")) && func_4(unk_0xE2D3D51028F0428A(), iLocal_69, 1) > 1f)
	{
		unk_0x7D1424753688EE7A(iLocal_69, unk_0xCACAD935C0BEE14F(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 1), 2f, 0f, 0f), 2f, 20000, 0.25f, 0, 1193033728);
	}
}

void func_75(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x080C97B891E2F3AA(0f, 1065353216);
		unk_0x94953C3FF0664F66(0f);
	}
	func_67(&uLocal_70);
	unk_0x9210F85E9CD785F1(iLocal_69, 1);
	unk_0xA9F390242F9EB2E1(iLocal_69, iLocal_80, 0);
	unk_0x49D97B076E3590AC(iLocal_69, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
	unk_0xEB087B19F63AB053(iLocal_69, 0, 0);
}

int func_76()
{
	float fVar0;
	
	if (func_125(iLocal_80) && func_125(iLocal_69))
	{
		if (iLocal_66 == -1)
		{
			fVar0 = func_4(iLocal_80, iLocal_69, 1);
			iLocal_66 = unk_0xF34EE736CF047844((fVar0 * 1000f));
			if (iLocal_66 < 5000)
			{
				iLocal_66 = 5000;
			}
		}
		if (((func_39(iLocal_69, unk_0xCACAD935C0BEE14F(iLocal_80, 2f, 0f, 0f), 0) < 1f || unk_0x4C1B8C5717647539(0, 71)) || unk_0x4C1B8C5717647539(0, 72)) || (iLocal_65 > -1 && (unk_0x320D1840B6DAA1CC() - iLocal_65) > iLocal_66))
		{
			return 1;
		}
	}
	return 0;
}

int func_77()
{
	int iVar0;
	
	if (func_125(iLocal_80))
	{
		iVar0 = unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 1));
		if (((((((((((((((((((((((iVar0 == joaat("airbus") || iVar0 == joaat("barracks")) || iVar0 == joaat("barracks2")) || iVar0 == joaat("biff")) || iVar0 == joaat("bus")) || iVar0 == joaat("coach")) || iVar0 == joaat("hauler")) || iVar0 == joaat("mixer")) || iVar0 == joaat("mixer2")) || iVar0 == joaat("packer")) || iVar0 == joaat("pbus")) || iVar0 == joaat("phantom")) || iVar0 == joaat("pounder")) || iVar0 == joaat("riot")) || iVar0 == joaat("rubble")) || iVar0 == joaat("scrap")) || iVar0 == joaat("stockade")) || iVar0 == joaat("stockade3")) || iVar0 == joaat("tiptruck")) || iVar0 == joaat("tiptruck2")) || iVar0 == joaat("towtruck")) || iVar0 == joaat("towtruck2")) || iVar0 == unk_0x2E87280918B16506("monster")) || iVar0 == unk_0x2E87280918B16506("marshall"))
		{
			return 1;
		}
	}
	return 0;
}

void func_78()
{
	int iVar0;
	
	if (func_125(iLocal_80))
	{
		iVar0 = unk_0x15CAA6D7B11F1A7C(iLocal_80);
		if (iVar0 == joaat("coach"))
		{
			iLocal_118 = 0;
		}
		else
		{
			iLocal_118 = 1;
		}
	}
}

void func_79()
{
	if (func_125(iLocal_80))
	{
		iLocal_475 = unk_0x816A3ADB189BD123(iLocal_80);
		switch (iLocal_475)
		{
			case -1965057835:
			case 919485892:
			case -1838563680:
			case 1768419516:
			case 1576485197:
			case 929009548:
			case -497732145:
			case -1659990386:
			case -662028469:
			case 1939145032:
				sLocal_477 = "creatures@rottweiler@in_vehicle@van";
				sLocal_476 = "van_ds_open_door_for_chop";
				break;
			
			case -2066252141:
			case 1105669833:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -782720499:
			case -1150063973:
			case 1630950849:
			case -463340997:
			case 2033852426:
				sLocal_477 = "creatures@rottweiler@in_vehicle@low_car";
				sLocal_476 = "low_ds_open_door_for_chop";
				break;
			
			case 434478421:
			case 1816176348:
			case 1710903184:
			case 1663892749:
				sLocal_477 = "creatures@rottweiler@in_vehicle@4x4";
				sLocal_476 = "std_ds_open_door_for_chop";
				break;
			
			default:
				sLocal_477 = "creatures@rottweiler@in_vehicle@std_car";
				sLocal_476 = "std_ds_open_door_for_chop";
				break;
		}
		if (unk_0x15CAA6D7B11F1A7C(iLocal_80) == joaat("brawler"))
		{
			sLocal_477 = "creatures@rottweiler@in_vehicle@4x4";
			sLocal_476 = "std_ds_open_door_for_chop";
		}
	}
}

int func_80()
{
	if ((((((((unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0)) && !unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A())) && !unk_0xB73D201873640749(unk_0xE2D3D51028F0428A())) && !unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A())) && !unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A())) && unk_0xADD893BD545BE5FC(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)) >= 1) && unk_0x7158135695FAE89D(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0, 0)) && !func_23())
	{
		return 1;
	}
	return 0;
}

int func_81()
{
	if (unk_0xBCC73B466E2B2350(unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A())))
	{
		if (unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(-14.5f, -1437.2f, 31.1f))
		{
			return 1;
		}
		if (unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(7.6f, 537.3f, 176f))
		{
			return 1;
		}
		if (unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(130.2632f, -1295.035f, 28.2695f))
		{
			return 1;
		}
	}
	return 0;
}

void func_82()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	Var3 = { unk_0xCACAD935C0BEE14F(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 1), 2f, 0f, 0f) };
	Var9 = { Var3 - Var0 };
	Var6 = { unk_0xCACAD935C0BEE14F(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 1), -2f, 0f, 0f) };
	Var12 = { Var6 - Var0 };
	if (unk_0x652D2EEEF1D3E62C(Var9) < unk_0x652D2EEEF1D3E62C(Var12))
	{
		iLocal_117 = 1;
	}
	else
	{
		iLocal_117 = 0;
	}
}

void func_83()
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	if ((iLocal_339 != 5 || (unk_0x320D1840B6DAA1CC() - iLocal_340) < 1000) || bLocal_395 == 0)
	{
		return;
	}
	func_97();
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 102)
	{
		if (func_96(iVar4))
		{
			Var0 = { func_95(iVar4, 1) };
			if (!func_94(Var0))
			{
				fVar3 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iLocal_69, 1), Var0, 1);
				if (fVar3 < fLocal_347[2] && fVar3 < fLocal_392)
				{
					iLocal_341[2] = iVar4;
					fLocal_347[2] = fVar3;
					Local_353[2 /*3*/] = { func_95(iVar4, 0) };
					Local_369[2 /*3*/] = { Var0 };
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 76)
	{
		if (func_93(iVar4))
		{
			Var0 = { func_92(iVar4, 1) };
			if (!func_94(Var0))
			{
				fVar3 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iLocal_69, 1), Var0, 1);
				if (fVar3 < fLocal_347[1] && fVar3 < fLocal_392)
				{
					iLocal_341[1] = iVar4;
					fLocal_347[1] = fVar3;
					Local_353[1 /*3*/] = { func_92(iVar4, 0) };
					Local_369[1 /*3*/] = { Var0 };
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 45)
	{
		if (func_91(iVar4))
		{
			Var0 = { func_90(iVar4, 1) };
			if (!func_94(Var0))
			{
				fVar3 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iLocal_69, 1), Var0, 1);
				if (fVar3 < fLocal_347[0] && fVar3 < fLocal_392)
				{
					iLocal_341[0] = iVar4;
					fLocal_347[0] = fVar3;
					Local_353[0 /*3*/] = { func_90(iVar4, 0) };
					Local_369[0 /*3*/] = { Var0 };
				}
			}
		}
		iVar4++;
	}
	if (func_89())
	{
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 50)
		{
			if (!func_26(iVar4) && func_88(iVar4))
			{
				Var0 = { func_87(iVar4, 1) };
				if (!func_94(Var0))
				{
					fVar3 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iLocal_69, 1), Var0, 1);
					if (fVar3 < fLocal_347[3] && fVar3 < fLocal_392)
					{
						iLocal_341[3] = iVar4;
						fLocal_347[3] = fVar3;
						Local_353[3 /*3*/] = { func_87(iVar4, 0) };
						Local_369[3 /*3*/] = { Var0 };
					}
				}
			}
			iVar4++;
		}
	}
	if (func_86())
	{
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 50)
		{
			if (!func_25(iVar4) && func_85(iVar4))
			{
				Var0 = { func_84(iVar4, 1) };
				if (!func_94(Var0))
				{
					fVar3 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iLocal_69, 1), Var0, 1);
					if (fVar3 < fLocal_347[4] && fVar3 < fLocal_392)
					{
						iLocal_341[4] = iVar4;
						fLocal_347[4] = fVar3;
						Local_353[4 /*3*/] = { func_84(iVar4, 0) };
						Local_369[4 /*3*/] = { Var0 };
					}
				}
			}
			iVar4++;
		}
	}
	iLocal_340 = unk_0x320D1840B6DAA1CC();
}

Vector3 func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495.9f, 12.9448f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 606.8925f, -3250.188f, 5.06951f;
			}
			else
			{
				return 634.5865f, -3232.79f, -16.5774f;
			}
			break;
		
		case 2:
			return 1590.6f, -2810.174f, 3.4494f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 327.99f, -2757.61f, 4.99f;
			}
			else
			{
				return 338.4039f, -2762.106f, 42.6543f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 1134.422f, -2607.024f, 14.77071f;
			}
			else
			{
				return 1133.688f, -2605.073f, 14.9729f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 368.9316f, -2118.533f, 15.40341f;
			}
			else
			{
				return 369.945f, -2116.756f, 16.1688f;
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				return 1741.82f, -1623.85f, 111.41f;
			}
			else
			{
				return 1742.024f, -1618.777f, 111.8313f;
			}
			break;
		
		case 7:
			return 287.7294f, -1444.4f, 45.5095f;
			break;
		
		case 8:
			return 17.5926f, -1213.207f, 28.3678f;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -910.0172f, -1147.44f, 1.06785f;
			}
			else
			{
				return -900.3597f, -1165.551f, 31.8047f;
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				return 1237.728f, -1099.15f, 37.52579f;
			}
			else
			{
				return 1231.973f, -1102.308f, 34.4289f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 87.69075f, 810.3736f, 210.1258f;
			}
			else
			{
				return 81.2213f, 814.0283f, 213.2917f;
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -1900.951f, 1389.582f, 218.1509f;
			}
			else
			{
				return -1907.515f, 1388.69f, 217.9728f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 467.369f, -730.7552f, 26.36373f;
			}
			else
			{
				return 469.8529f, -730.8f, 26.3985f;
			}
			break;
		
		case 14:
			return 202.1081f, -569.7198f, 128.18f;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 163.0531f, -566.3394f, 21.029f;
			}
			else
			{
				return 159.39f, -563.82f, 21f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return -1183.152f, -518.5386f, 38.53018f;
			}
			else
			{
				return -1182.538f, -525.5859f, 39.9114f;
			}
			break;
		
		case 17:
			return -228.0476f, -236.4184f, 49.1361f;
			break;
		
		case 18:
			return -407.7026f, -151.7918f, 63.5505f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1169.397f, -56.76701f, 44.45705f;
			}
			else
			{
				return -1175.488f, -65.4649f, 44.6563f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 1679.056f, 39.44059f, 160.7736f;
			}
			else
			{
				return 1684.664f, 40.7142f, 153.4074f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1964.25f, 553.68f, 160.72f;
			}
			else
			{
				return 1965.58f, 555.99f, 160.79f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 24.21706f, 637.1212f, 206.3897f;
			}
			else
			{
				return 22.4492f, 638.8155f, 189.6085f;
			}
			break;
		
		case 23:
			return 2901.204f, 796.1192f, 3.3556f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1531.895f, 870.3203f, 180.6775f;
			}
			else
			{
				return -1529.722f, 871.4257f, 180.6421f;
			}
			break;
		
		case 25:
			return -404.3191f, 1100.889f, 331.535f;
			break;
		
		case 26:
			return -2809.354f, 1449.643f, 99.928f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			else
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			break;
		
		case 28:
			return 815.7574f, 1850.879f, 120.1796f;
			break;
		
		case 29:
			return -1944.24f, 1941.07f, 162.8f;
			break;
		
		case 30:
			if (iParam1 == 1)
			{
				return -1452.23f, 2127.41f, 42.84f;
			}
			else
			{
				return -1436.87f, 2130.22f, 26.78f;
			}
			break;
		
		case 31:
			return 1367.413f, 2180.632f, 96.6914f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 170.1652f, 2217.637f, 89.30811f;
			}
			else
			{
				return 172.1426f, 2220.131f, 89.7842f;
			}
			break;
		
		case 33:
			return 889.3209f, 2870.052f, 55.2834f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return 1980.2f, 2914.79f, 45.48f;
			}
			else
			{
				return 1963.55f, 2922.81f, 57.76f;
			}
			break;
		
		case 35:
			return -390.384f, 2963.26f, 18.2713f;
			break;
		
		case 36:
			return 71.6642f, 3279.368f, 30.3918f;
			break;
		
		case 37:
			return 1924.186f, 3471.256f, 50.3238f;
			break;
		
		case 38:
			return -583.1569f, 3580.375f, 266.2471f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2514.302f, 3789.519f, 52.077f;
			}
			else
			{
				return 2516.98f, 3789.35f, 53.79f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 1517.613f, 3803.926f, 30.95605f;
			}
			else
			{
				return 1486.047f, 3857.217f, 22.2905f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -530.2739f, 4474.358f, 59.45993f;
			}
			else
			{
				return -528.8246f, 4440.644f, 31.7384f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 3815.055f, 4447.343f, 2.06631f;
			}
			else
			{
				return 3820.813f, 4441.683f, 1.8007f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -1946.95f, 4584.36f, 56.06f;
			}
			else
			{
				return -1943.055f, 4585.194f, 46.6362f;
			}
			break;
		
		case 44:
			return 2437.545f, 4779.959f, 33.5101f;
			break;
		
		case 45:
			return -1441.495f, 5414.888f, 23.3f;
			break;
		
		case 46:
			return 2196.251f, 5599.034f, 52.7129f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -503.95f, 5673.55f, 51.24f;
			}
			else
			{
				return -503.2193f, 5665.61f, 48.8487f;
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return -378.4192f, 6080.782f, 30.44296f;
			}
			else
			{
				return -381.291f, 6086.949f, 38.6147f;
			}
			break;
		
		case 49:
			return 440.9546f, 6459.642f, 27.7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 14:
		case 18:
		case 25:
			return 0;
			break;
		
		case 16:
			if (BitTest(Global_32118, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_86()
{
	return Global_113386.f_10049.f_125.f_2;
}

Vector3 func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034.274f, -3026.275f, 4.90197f;
			}
			else
			{
				return 1026.705f, -3026.052f, 13.3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040.979f, -2743.509f, 12.94983f;
			}
			else
			{
				return -1048.604f, -2734.218f, 12.8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93.9012f, -2711.314f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.511f, 7.74f;
			}
			break;
		
		case 3:
			return -917.6909f, -2527.384f, 22.3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509.742f, -2126.038f, 75.21973f;
			}
			else
			{
				return 1509.099f, -2120.551f, 75.61f;
			}
			break;
		
		case 6:
			return 76.0032f, -1970.475f, 20.1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1.82327f, -1732.614f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377.766f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.491f, -1404.374f, 1.7273f;
			}
			break;
		
		case 9:
			return 2864.808f, -1372.84f, 1.3151f;
			break;
		
		case 10:
			return -1035.812f, -1273.077f, 0.8919f;
			break;
		
		case 11:
			return -1821.136f, -1201.36f, 18.1698f;
			break;
		
		case 12:
			return 643.0116f, -1035.65f, 35.8891f;
			break;
		
		case 13:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243.104f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.766f, -506.7138f, 37.6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		
		case 16:
			return 1095.953f, -210.4642f, 54.9477f;
			break;
		
		case 17:
			return -1724.522f, -196f, 57.2387f;
			break;
		
		case 18:
			return 265.374f, -199.546f, 60.795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020.475f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347.5277f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		
		case 21:
			return 1052.248f, 167.611f, 87.7406f;
			break;
		
		case 22:
			return -2303.798f, 217.4301f, 166.6017f;
			break;
		
		case 23:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688.1073f, 1204.671f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.928f, 344.3322f;
			}
			break;
		
		case 25:
			return -1548.763f, 1380.173f, 125.3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.129f, 356.613f;
			}
			break;
		
		case 27:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		
		case 28:
			return -594.38f, 2092f, 130.57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069.213f, 2160.988f, 1.1327f;
			}
			else
			{
				return 3063.583f, 2212.63f, 2.5863f;
			}
			break;
		
		case 30:
			return 180.21f, 2263.83f, 91.87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.115f, 48.43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380.212f, 2655.176f, 0.832f;
			}
			else
			{
				return -2379.948f, 2656.953f, 1.4906f;
			}
			break;
		
		case 33:
			return -861.38f, 2753.3f, 12.867f;
			break;
		
		case 34:
			return -289.0195f, 2848.853f, 53.331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288.8409f, 2871.912f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297.378f, 2988.71f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		
		case 37:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		
		case 38:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3.51812f, 4332.451f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		
		case 40:
			return 1336.737f, 4307.2f, 37.1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007.103f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		
		case 42:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366.099f, 5182.461f, 0.68317f;
			}
			else
			{
				return 3436.453f, 5176.911f, 6.386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		
		case 45:
			return 444.6518f, 5571.781f, 780.1888f;
			break;
		
		case 46:
			return -402.9948f, 6319.279f, 31.2256f;
			break;
		
		case 47:
			return 1439.599f, 6335.208f, 22.9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466.109f, 6552.266f, 12.95773f;
			}
			else
			{
				return 1469.632f, 6552.174f, 13.6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66.19278f, 6668.888f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.198f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 9:
		case 10:
		case 13:
		case 27:
		case 38:
			return 0;
			break;
		
		case 14:
			if (BitTest(Global_32118, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_89()
{
	return Global_113386.f_10049.f_122.f_2;
}

Vector3 func_90(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 473.1829f, -2643.184f, 4.7209f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return 291.41f, -2090.78f, 16.29f;
			}
			else
			{
				return 289.2062f, -2091.221f, 16.0234f;
			}
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return 1173.839f, -1499.781f, 33.84875f;
			}
			else
			{
				return 1173.566f, -1495.763f, 34.1121f;
			}
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -461.7139f, -1699.202f, 17.85122f;
			}
			else
			{
				return -462f, -1701f, 18.8f;
			}
			break;
		
		case 4:
			return -1384.628f, -521.0416f, 30.084f;
			break;
		
		case 5:
			return -521.5692f, -601.7532f, 29.4482f;
			break;
		
		case 6:
			return -664.5f, 165.4552f, 58.3821f;
			break;
		
		case 7:
			return 329.3609f, -190.5986f, 53.2262f;
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return -477.44f, -1052.99f, 39.81f;
			}
			else
			{
				return -478.7744f, -1051.079f, 40.93f;
			}
			break;
		
		case 9:
			return -1268.071f, -1917.408f, 4.8583f;
			break;
		
		case 10:
			return -1221.908f, -2771.762f, 13.0545f;
			break;
		
		case 11:
			return -3088.668f, 652.9629f, 0.989f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return -629.3048f, 2036.067f, 157.3307f;
			}
			else
			{
				return -627.2166f, 2035.032f, 157.5585f;
			}
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return -2071.903f, 3411.504f, 30.36414f;
			}
			else
			{
				return -2048.483f, 3406.162f, 31.1504f;
			}
			break;
		
		case 14:
			return -424.0321f, 4012.767f, 80.4744f;
			break;
		
		case 15:
			return 1983.1f, 5174.5f, 47.6f;
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 2341.1f, 2576f, 45.7f;
			}
			else
			{
				return 2340.17f, 2573.89f, 45.77f;
			}
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 1663.9f, -25.91945f, 172.7747f;
			}
			else
			{
				return 1663.96f, -24.1101f, 172.7747f;
			}
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return 2614.451f, 1695.127f, 26.59907f;
			}
			else
			{
				return 2617.729f, 1693.417f, 30.8743f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -187.31f, 1545.16f, 314.07f;
			}
			else
			{
				return -187.0338f, 1555.677f, 321.2431f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 859.5025f, 2426.04f, 53.18517f;
			}
			else
			{
				return 868.7573f, 2423.536f, 60.8942f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return -1822.075f, 805.7814f, 137.7265f;
			}
			else
			{
				return -1822.967f, 803.8147f, 138.2005f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -1852.922f, 2054.42f, 139.9841f;
			}
			else
			{
				return -1851.628f, 2053.836f, 139.9841f;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -1075.515f, 4898.497f, 213.2767f;
			}
			else
			{
				return -1070.651f, 4898.934f, 213.2752f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1301.56f, 4306.6f, 36.39f;
			}
			else
			{
				return 1300.1f, 4308.1f, 37.3f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return -436.44f, 5983.5f, 30.49f;
			}
			else
			{
				return -437.94f, 5985.04f, 31.29f;
			}
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 1840.569f, 3693.77f, 33.2668f;
			}
			else
			{
				return 1838.577f, 3692.028f, 33.6172f;
			}
			break;
		
		case 27:
			return 533.1f, -23.8f, 70.6f;
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 445.83f, -986.48f, 29.69f;
			}
			else
			{
				return 446.4f, -988.5f, 29.77f;
			}
			break;
		
		case 29:
			return -1119.498f, -847.3371f, 18.6886f;
			break;
		
		case 30:
			return 391.2f, -1603.9f, 28.38f;
			break;
		
		case 31:
			return -890.8f, -2386.2f, 13.4f;
			break;
		
		case 32:
			if (bParam1 == 1)
			{
				return 282.75f, 953.05f, 209.95f;
			}
			else
			{
				return 284.7f, 954.2f, 210.1514f;
			}
			break;
		
		case 33:
			return -2003.115f, 544.7549f, 114.5077f;
			break;
		
		case 34:
			if (bParam1 == 1)
			{
				return -397.5786f, 1127.353f, 321.7291f;
			}
			else
			{
				return -386.8739f, 1142.42f, 321.5892f;
			}
			break;
		
		case 35:
			return -1521.811f, 1560.201f, 106.9392f;
			break;
		
		case 36:
			return 1391.945f, 3616.655f, 37.9259f;
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 45.37f, -1911.45f, 20.79f;
			}
			else
			{
				return 40.5177f, -1910.727f, 20.9706f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return 68.14f, 3749.36f, 38.73f;
			}
			else
			{
				return 70.3786f, 3755.605f, 38.7487f;
			}
			break;
		
		case 39:
			return 119.45f, -755.29f, 258.15f;
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return 156.35f, -1192.1f, 28.37f;
			}
			else
			{
				return 160.4134f, -1191.7f, 28.87f;
			}
			break;
		
		case 41:
			return 23.9296f, -633.9206f, 6.5084f;
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return 31.67f, 6542.78f, 30.44f;
			}
			else
			{
				return 30.9162f, 6546.791f, 30.4058f;
			}
			break;
		
		case 43:
			if (bParam1)
			{
				return 1333.057f, 4381.278f, 43.3703f;
			}
			else
			{
				return 1331.355f, 4392.887f, 44.012f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -1147.31f, 4939.27f, 221.27f;
			}
			else
			{
				return -1149.392f, 4938.771f, 221.3682f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 39:
		case 41:
			return 0;
			break;
	}
	return 1;
}

Vector3 func_92(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 131.2f, 6920.1f, 20.8f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return -1048.569f, 4917.414f, 208.4216f;
			}
			else
			{
				return -1046.277f, 4918.739f, 211.5379f;
			}
			break;
		
		case 2:
			return -2358.46f, 3251.397f, 100.5504f;
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -247.6219f, 6331.341f, 31.42602f;
			}
			else
			{
				return -249.9504f, 6331.219f, 32.7262f;
			}
			break;
		
		case 4:
			if (bParam1 == 1)
			{
				return -140.9f, -2491.45f, 43.45f;
			}
			else
			{
				return -141.0976f, -2498.239f, 40.0124f;
			}
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return -2924.697f, 46.50282f, 10.60369f;
			}
			else
			{
				return -2925.7f, 47.4f, 11.6f;
			}
			break;
		
		case 6:
			return -793.1981f, -726.4421f, 26.28f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return 124.0092f, -673.0096f, 41.02729f;
			}
			else
			{
				return 123.5196f, -674.2917f, 41.4945f;
			}
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return 1195.737f, -1481.694f, 33.8595f;
			}
			else
			{
				return 1194.709f, -1482.472f, 33.9594f;
			}
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return -35.88743f, 1945.738f, 189.1868f;
			}
			else
			{
				return -35.5254f, 1947.289f, 189.186f;
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return 753.4579f, 4174.996f, 39.8011f;
			}
			else
			{
				return 751.72f, 4175.14f, 40.95f;
			}
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 1791.256f, 4592.383f, 36.68283f;
			}
			else
			{
				return 1789.8f, 4592.4f, 36.78f;
			}
			break;
		
		case 12:
			return 341.311f, 2618.918f, 43.5124f;
			break;
		
		case 13:
			return 442.3755f, -223.602f, 55.0215f;
			break;
		
		case 14:
			if (bParam1 == 1)
			{
				return 1291.02f, -1760.94f, 51.05f;
			}
			else
			{
				return 1286.5f, -1754.4f, 52f;
			}
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 1659.438f, 5.4271f, 165.1176f;
			}
			else
			{
				return 1658.621f, 6.7752f, 166.1676f;
			}
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 1645.91f, 4866.72f, 40.98f;
			}
			else
			{
				return 1647.399f, 4865.839f, 41f;
			}
			break;
		
		case 17:
			return -1144.589f, -2004.452f, 12.3803f;
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return -1047.3f, -520.6f, 35f;
			}
			else
			{
				return -1048.32f, -521.2f, 35.14f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -1576.046f, -587.8257f, 33.97909f;
			}
			else
			{
				return -1576.817f, -586.3887f, 34.8528f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 953.44f, -123.42f, 73.35f;
			}
			else
			{
				return 954.5f, -121.34f, 74.18f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return 1134.201f, -665.9413f, 56.08261f;
			}
			else
			{
				return 1135.401f, -663.7875f, 56.088f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -2196.198f, 248.9123f, 173.612f;
			}
			else
			{
				return -2195.029f, 250.4256f, 173.6017f;
			}
			break;
		
		case 23:
			return 29.2f, 3635.4f, 39.8f;
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1724.429f, 3299.023f, 40.2235f;
			}
			else
			{
				return 1721.96f, 3300.464f, 40.3835f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 2617.321f, 3659.452f, 100.3867f;
			}
			else
			{
				return 2612.712f, 3662.564f, 101.1074f;
			}
			break;
		
		case 26:
			return -459.9625f, 1101.076f, 328.0211f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 2432.607f, 4994.333f, 45.25828f;
			}
			else
			{
				return 2430.906f, 4995.561f, 45.2685f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 3722.456f, 4521.837f, 20.39456f;
			}
			else
			{
				return 3724.5f, 4524.5f, 21.6f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return -446.9024f, 5997.598f, 30.3407f;
			}
			else
			{
				return -446.045f, 6000.882f, 31.9163f;
			}
			break;
		
		case 30:
			return 3291.4f, 5192.5f, 18.4f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 390.81f, -1436.07f, 28.45f;
			}
			else
			{
				return 388.7f, -1434.3f, 29.8f;
			}
			break;
		
		case 32:
			return -445.26f, -442.49f, 32.26f;
			break;
		
		case 33:
			if (bParam1)
			{
				return -1501.46f, 858.17f, 180.59f;
			}
			else
			{
				return -1500.08f, 857.59f, 180.59f;
			}
			break;
		
		case 34:
			return 2822.2f, -741.4f, 1.8f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return -3166.978f, 1102.622f, 19.80827f;
			}
			else
			{
				return -3165.613f, 1102.24f, 19.8928f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 1842.882f, 3670.457f, 32.68f;
			}
			else
			{
				return 1841.114f, 3675.253f, 34.086f;
			}
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 1828.794f, 2605.504f, 44.61582f;
			}
			else
			{
				return 1830.535f, 2603.828f, 45.7491f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return -32.61f, -1089.67f, 25.42f;
			}
			else
			{
				return -40.0528f, -1084.016f, 26.6224f;
			}
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 1439.012f, 6336.812f, 22.96477f;
			}
			else
			{
				return 1445.544f, 6334.057f, 23.975f;
			}
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return -782.5126f, -1352.245f, 8.0001f;
			}
			else
			{
				return -784.4851f, -1351.364f, 8.1001f;
			}
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return 962.8806f, -1826.419f, 30.07195f;
			}
			else
			{
				return 963.1673f, -1831.149f, 36.2055f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -1246.155f, -1531.647f, 3.2962f;
			}
			else
			{
				return -1246.494f, -1533.677f, 4.5262f;
			}
			break;
		
		case 43:
			if (bParam1 == 1)
			{
				return -765.5466f, 698.8101f, 143.3693f;
			}
			else
			{
				return -761.1058f, 701.9452f, 145.05f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -512.1094f, 28.86313f, 43.6153f;
			}
			else
			{
				return -513.4391f, 30.9069f, 43.9018f;
			}
			break;
		
		case 45:
			if (bParam1 == 1)
			{
				return 781.3839f, 1292.073f, 359.2997f;
			}
			else
			{
				return 780.3879f, 1295.705f, 361.6941f;
			}
			break;
		
		case 46:
			return 208.69f, 337.76f, 104.64f;
			break;
		
		case 47:
			if (bParam1 == 1)
			{
				return -1889.99f, 2078.38f, 140f;
			}
			else
			{
				return -1890.24f, 2073.26f, 140.11f;
			}
			break;
		
		case 48:
			return 153.6156f, -3073.998f, 4.8962f;
			break;
		
		case 49:
			if (bParam1)
			{
				return -306.2449f, -1180.538f, 22.711f;
			}
			else
			{
				return -304.0894f, -1180.886f, 23.9493f;
			}
			break;
		
		case 50:
			return -2006.987f, -556.4998f, 11.8813f;
			break;
		
		case 51:
			if (bParam1 == 1)
			{
				return -590.2079f, -289.8196f, 40.68631f;
			}
			else
			{
				return -588.1934f, -290.4782f, 43.7101f;
			}
			break;
		
		case 52:
			return -1795.826f, -855.7111f, 8.2048f;
			break;
		
		case 53:
			return -1557.108f, -1155.246f, 2.9158f;
			break;
		
		case 54:
			if (bParam1 == 1)
			{
				return -1470.71f, -1389.33f, 1.58f;
			}
			else
			{
				return -1467.483f, -1387.507f, 3.1432f;
			}
			break;
		
		case 55:
			return -684.8126f, -180.648f, 48.02f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return -1311.413f, 640.1154f, 136.9244f;
			}
			else
			{
				return -1307.062f, 641.4211f, 138.0582f;
			}
			break;
		
		case 57:
			return 2493.686f, 4963.541f, 43.7358f;
			break;
		
		case 58:
			if (bParam1 == 1)
			{
				return 1392.76f, 3602.94f, 33.98f;
			}
			else
			{
				return 1392.609f, 3605.799f, 34.9939f;
			}
			break;
		
		case 59:
			if (bParam1 == 1)
			{
				return -527.33f, 5295.7f, 73.17f;
			}
			else
			{
				return -535.4436f, 5297.496f, 76.3891f;
			}
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return -564.26f, 5353.13f, 69.23f;
			}
			else
			{
				return -551.5837f, 5349.404f, 75.253f;
			}
			break;
		
		case 61:
			if (bParam1 == 1)
			{
				return 3.18f, -1827.1f, 24.22f;
			}
			else
			{
				return 0.1911f, -1825.905f, 24.3295f;
			}
			break;
		
		case 62:
			if (bParam1 == 1)
			{
				return 62.25f, 3681.06f, 38.84f;
			}
			else
			{
				return 63.8867f, 3683.49f, 39.1543f;
			}
			break;
		
		case 63:
			return 155.384f, -741.179f, 258.6519f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return 126.61f, -1206.29f, 28.3f;
			}
			else
			{
				return 124.265f, -1205.882f, 28.2951f;
			}
			break;
		
		case 65:
			return 27.449f, -625.31f, 15.462f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -129.04f, -662.04f, 39.51f;
			}
			else
			{
				return -129.0374f, -659.2689f, 41.0016f;
			}
			break;
		
		case 67:
			if (bParam1)
			{
				return 1138.62f, -1598.56f, 33.69f;
			}
			else
			{
				return 1138.63f, -1596.61f, 35.07f;
			}
			break;
		
		case 68:
			if (bParam1)
			{
				return 1149.68f, -1525.56f, 33.84f;
			}
			else
			{
				return 1147.55f, -1527.83f, 36.01f;
			}
			break;
		
		case 69:
			if (bParam1)
			{
				return 297.48f, -1448.79f, 28.97f;
			}
			else
			{
				return 296.44f, -1450.75f, 30.4f;
			}
			break;
		
		case 70:
			if (bParam1)
			{
				return 324.21f, -1392.68f, 31.51f;
			}
			else
			{
				return 322.27f, -1393.75f, 32.79f;
			}
			break;
		
		case 71:
			if (bParam1)
			{
				return 293.2f, -597.92f, 42.28f;
			}
			else
			{
				return 294.3f, -598.1f, 43.73f;
			}
			break;
		
		case 72:
			if (bParam1)
			{
				return 358f, -592.66f, 27.79f;
			}
			else
			{
				return 357.07f, -590.63f, 29.08f;
			}
			break;
		
		case 73:
			if (bParam1)
			{
				return -495.45f, -326.18f, 33.5f;
			}
			else
			{
				return -496.4f, -324.7f, 34.75f;
			}
			break;
		
		case 74:
			if (bParam1)
			{
				return -450.91f, -351.93f, 33.5f;
			}
			else
			{
				return -449.82f, -353.49f, 34.75f;
			}
			break;
		
		case 75:
			return -2258.833f, 323.9413f, 184.9015f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 17:
		case 55:
		case 63:
		case 65:
			return 0;
			break;
	}
	return 1;
}

int func_94(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_95(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1 == 1)
			{
				return -1760.36f, 428.6f, 126.31f;
			}
			else
			{
				return -1756.974f, 427.531f, 126.7f;
			}
			break;
		
		case 1:
			return -1595.742f, 2799.371f, 16.0205f;
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return -197.1486f, 1482.685f, 288.253f;
			}
			else
			{
				return -200.0114f, 1481.697f, 289.4303f;
			}
			break;
		
		case 3:
			return 256.77f, 2841.047f, 42.6599f;
			break;
		
		case 4:
			return -1360.223f, 4435.751f, 27.7754f;
			break;
		
		case 5:
			return 64.63f, 7051.253f, 15.8272f;
			break;
		
		case 6:
			return -456.2838f, 1593.799f, 358.0119f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return -3114.617f, 749.8445f, 11.59352f;
			}
			else
			{
				return -3111.614f, 749.2816f, 12.6285f;
			}
			break;
		
		case 8:
			return 713.6797f, 4095.969f, 33.765f;
			break;
		
		case 9:
			return 255.2671f, 2586.281f, 43.9619f;
			break;
		
		case 10:
			return -1292.64f, -3345.82f, 23.27f;
			break;
		
		case 11:
			return 3111.531f, 2214.848f, -8.6457f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return 555.82f, -839.05f, 39.84f;
			}
			else
			{
				return 555f, -837.81f, 55.08f;
			}
			break;
		
		case 13:
			return -2360f, 3245f, 91.9f;
			break;
		
		case 14:
			return 1691.152f, 2640.859f, 54.0693f;
			break;
		
		case 15:
			return 1982.37f, 6203.64f, 41.15f;
			break;
		
		case 16:
			return -2979f, 1588f, 23.3f;
			break;
		
		case 17:
			return 963.5308f, -1824.04f, 30.0708f;
			break;
		
		case 18:
			return -295.4187f, 6188.786f, 30.48932f;
			break;
		
		case 19:
			return -1778f, 124f, 67.9f;
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 157.5759f, 3133.994f, 42.45733f;
			}
			else
			{
				return 161.2925f, 3131.854f, 42.5892f;
			}
			break;
		
		case 21:
			return -888f, 5406f, 30.5f;
			break;
		
		case 22:
			return -1840f, 793f, 138.7f;
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -495.8039f, -1750.207f, 17.42509f;
			}
			else
			{
				return -495.9968f, -1747.231f, 18.5194f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return -1764.695f, -265.5809f, 47.6187f;
			}
			else
			{
				return -1763.359f, -263.2062f, 47.1481f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 548.0715f, -1642.451f, 27.2033f;
			}
			else
			{
				return 548.5943f, -1642.603f, 27.4425f;
			}
			break;
		
		case 26:
			return 736.0563f, 2595.556f, 72.9165f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 701.0009f, -1179.702f, 23.28737f;
			}
			else
			{
				return 699.2748f, -1181.671f, 33.2608f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return -1146.74f, 4938.93f, 221.27f;
			}
			else
			{
				return -1149.437f, 4940.362f, 221.3282f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 2543.91f, -432.76f, 93.12f;
			}
			else
			{
				return 2513.535f, -442.8484f, 113.0888f;
			}
			break;
		
		case 30:
			return -553.1764f, -2239.877f, 121.3704f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 987.16f, -108.02f, 73.3f;
			}
			else
			{
				return 987.15f, -105.88f, 74.13f;
			}
			break;
		
		case 32:
			return -1048f, -836f, 10.5f;
			break;
		
		case 33:
			return 312.6026f, 6606.896f, 27.8835f;
			break;
		
		case 34:
			return -37.21f, 2871.26f, 58.61f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return 61.91f, 3690.51f, 38.83f;
			}
			else
			{
				return 59f, 3692f, 38.92f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 2933.33f, 4617.07f, 47.72f;
			}
			else
			{
				return 2934.499f, 4617.067f, 47.736f;
			}
			break;
		
		case 37:
			return 57.8219f, -1932.121f, 20.4939f;
			break;
		
		case 38:
			return 378.26f, -334.3f, 45.63f;
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 2673.662f, 2793.702f, 31.8124f;
			}
			else
			{
				return 2676.045f, 2793.249f, 39.5934f;
			}
			break;
		
		case 40:
			return -1582.278f, 770.3486f, 188.1942f;
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return -1641.139f, -1032.815f, 4.63165f;
			}
			else
			{
				return -1640.546f, -1034.129f, 4.6074f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -151.09f, -214.36f, 44.73f;
			}
			else
			{
				return -159.7137f, -209.1721f, 48.938f;
			}
			break;
		
		case 43:
			return -1276.986f, -2451.886f, 72.0481f;
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -403.5827f, 1056.212f, 322.8414f;
			}
			else
			{
				return -402f, 1053f, 323f;
			}
			break;
		
		case 45:
			return 2728.987f, 1576.382f, 65.5818f;
			break;
		
		case 46:
			if (bParam1 == 1)
			{
				return -221.27f, 6133.62f, 30.48f;
			}
			else
			{
				return -215.9002f, 6125.27f, 56.278f;
			}
			break;
		
		case 47:
			return 2092.225f, 2492.302f, 89.4046f;
			break;
		
		case 48:
			return -1124.666f, -967.1614f, 5.6319f;
			break;
		
		case 49:
			if (bParam1 == 1)
			{
				return -405.5299f, 323.4063f, 107.7227f;
			}
			else
			{
				return -405f, 325f, 108.7f;
			}
			break;
		
		case 50:
			return -1087.31f, -2429.3f, 13f;
			break;
		
		case 51:
			return -1042.645f, 879.7763f, 160.2144f;
			break;
		
		case 52:
			if (bParam1 == 1)
			{
				return -1081.229f, 678.9454f, 141.8056f;
			}
			else
			{
				return -1078.35f, 682.2944f, 144.904f;
			}
			break;
		
		case 53:
			return -402.0679f, 1355.062f, 329.8384f;
			break;
		
		case 54:
			return 153.3876f, 713.6584f, 207.2551f;
			break;
		
		case 55:
			return 186.9f, 243.0269f, 140.55f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return 302.01f, -3254.45f, 4.8f;
			}
			else
			{
				return 304f, -3259f, 5f;
			}
			break;
		
		case 57:
			if (bParam1 == 1)
			{
				return -398.57f, -1883.96f, 20.54f;
			}
			else
			{
				return -397f, -1885f, 21.5f;
			}
			break;
		
		case 58:
			return 780.7208f, -211.0616f, 65.1143f;
			break;
		
		case 59:
			return -1755.011f, 184.3929f, 63.3711f;
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return 788.84f, 2164.06f, 52.1f;
			}
			else
			{
				return 786.0139f, 2164.951f, 52.0981f;
			}
			break;
		
		case 61:
			return 1707.228f, 4920.156f, 41.0637f;
			break;
		
		case 62:
			return -684.9417f, 5793.045f, 16.331f;
			break;
		
		case 63:
			return -2188f, 4251f, 48f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return -1099.08f, 2711.35f, 18.11f;
			}
			else
			{
				return -1103f, 2715f, 19f;
			}
			break;
		
		case 65:
			return 581f, -2805f, 5.5f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -663.95f, -1998.85f, 6.1f;
			}
			else
			{
				return -665.4316f, -2002.04f, 7.5968f;
			}
			break;
		
		case 67:
			return 1442.905f, -1479.759f, 62.2245f;
			break;
		
		case 68:
			if (bParam1 == 1)
			{
				return -361.92f, -141.76f, 37.58f;
			}
			else
			{
				return -356.5324f, -145.0359f, 41.7413f;
			}
			break;
		
		case 69:
			return 624.0116f, 558.6531f, 129.2455f;
			break;
		
		case 70:
			return 2833f, 2807f, 56.3785f;
			break;
		
		case 71:
			if (bParam1 == 1)
			{
				return 92.14449f, 6360.182f, 30.37612f;
			}
			else
			{
				return 94.0769f, 6356.961f, 30.3761f;
			}
			break;
		
		case 72:
			return -2231.514f, 3477.792f, 29.3291f;
			break;
		
		case 73:
			return 377f, 3582f, 32.5f;
			break;
		
		case 74:
			if (bParam1 == 1)
			{
				return -2947.47f, 445.6f, 14.29f;
			}
			else
			{
				return -2948f, 441f, 15f;
			}
			break;
		
		case 75:
			if (bParam1 == 1)
			{
				return 1292.88f, -3341.78f, 4.9f;
			}
			else
			{
				return 1296f, -3348f, 5.2f;
			}
			break;
		
		case 76:
			if (bParam1 == 1)
			{
				return -1165.46f, -2054.09f, 13.2f;
			}
			else
			{
				return -1165.883f, -2051.026f, 13.2268f;
			}
			break;
		
		case 77:
			if (bParam1 == 1)
			{
				return 1235.57f, -452.01f, 65.7f;
			}
			else
			{
				return 1235f, -450f, 66.5f;
			}
			break;
		
		case 78:
			return -467.0458f, -934.8019f, 46.9844f;
			break;
		
		case 79:
			return 226.7f, -1761f, 28.5f;
			break;
		
		case 80:
			if (bParam1 == 1)
			{
				return 1218.07f, 1898.69f, 76.87f;
			}
			else
			{
				return 1221f, 1898f, 77.4f;
			}
			break;
		
		case 81:
			if (bParam1 == 1)
			{
				return 1545.99f, 3802.7f, 32.42f;
			}
			else
			{
				return 1535.829f, 3798.217f, 33.4563f;
			}
			break;
		
		case 82:
			return 756.8601f, 6462.329f, 30.4229f;
			break;
		
		case 83:
			return -2319f, 4124f, 26f;
			break;
		
		case 84:
			return -3185f, 1053f, 20.2f;
			break;
		
		case 85:
			return 818.9215f, -3188.167f, 4.9007f;
			break;
		
		case 86:
			if (bParam1 == 1)
			{
				return -451.05f, -2264.24f, 6.61f;
			}
			else
			{
				return -457.3656f, -2262.646f, 7.5212f;
			}
			break;
		
		case 87:
			if (bParam1 == 1)
			{
				return 1409.86f, -757.22f, 65.8f;
			}
			else
			{
				return 1410.091f, -752.1061f, 66.2362f;
			}
			break;
		
		case 88:
			return 8.4875f, -441.2103f, 44.5639f;
			break;
		
		case 89:
			if (bParam1 == 1)
			{
				return -935.04f, 387.39f, 76.62f;
			}
			else
			{
				return -937.0176f, 391.544f, 80.2377f;
			}
			break;
		
		case 90:
			if (bParam1 == 1)
			{
				return 2748.49f, 3463.02f, 54.77f;
			}
			else
			{
				return 2746.554f, 3463.525f, 54.7144f;
			}
			break;
		
		case 91:
			return 1898.896f, 4921.975f, 47.8088f;
			break;
		
		case 92:
			if (bParam1 == 1)
			{
				return -315.51f, 6310.89f, 31.37f;
			}
			else
			{
				return -315.9772f, 6307.385f, 31.4906f;
			}
			break;
		
		case 93:
			return -1171f, 4927f, 224f;
			break;
		
		case 94:
			return -281.1712f, 2528.012f, 73.6376f;
			break;
		
		case 95:
			if (bParam1 == 1)
			{
				return 68.45f, 3756.27f, 38.74f;
			}
			else
			{
				return 68.453f, 3758.967f, 38.7395f;
			}
			break;
		
		case 96:
			return 25.2888f, -634.2637f, 6.5084f;
			break;
		
		case 97:
			if (bParam1 == 1)
			{
				return -1146.67f, 4939.11f, 221.27f;
			}
			else
			{
				return -1145.283f, 4940.286f, 221.3038f;
			}
			break;
		
		case 98:
			return 441.64f, 5570.38f, 780.45f;
			break;
		
		case 99:
			if (bParam1)
			{
				return 1353.152f, 4377.223f, 43.3416f;
			}
			else
			{
				return 1357.209f, 4388.445f, 43.872f;
			}
			break;
		
		case 100:
			return -102.0671f, -968.1538f, 295.5635f;
			break;
		
		case 101:
			return 2492.69f, 4963.014f, 43.6478f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 11:
		case 13:
		case 14:
		case 30:
		case 34:
		case 43:
		case 45:
		case 50:
		case 55:
		case 88:
		case 96:
		case 98:
		case 100:
			return 0;
			break;
	}
	return 1;
}

void func_97()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_341[iVar0] = -1;
		fLocal_347[iVar0] = 999999f;
		Local_353[iVar0 /*3*/] = { 0f, 0f, 0f };
		Local_369[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

void func_98(int iParam0)
{
	unk_0x269268AD5D4CA266(joaat("a_c_retriever"), iParam0);
	unk_0x269268AD5D4CA266(joaat("a_c_rottweiler"), iParam0);
	unk_0x269268AD5D4CA266(joaat("a_c_boar"), iParam0);
	unk_0x269268AD5D4CA266(joaat("a_c_coyote"), iParam0);
	unk_0x269268AD5D4CA266(joaat("a_c_deer"), iParam0);
	unk_0x269268AD5D4CA266(joaat("a_c_mtlion"), iParam0);
	unk_0x269268AD5D4CA266(joaat("a_c_pig"), iParam0);
}

void func_99(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_ball"), 0) || unk_0x1F741ABE25B3CDD3(unk_0xE2D3D51028F0428A(), joaat("weapon_ball")) == 0)
	{
		unk_0x9521FB98DB6DDF50(unk_0xE2D3D51028F0428A(), joaat("weapon_ball"), 1, iParam0, iParam2);
		unk_0xA1F68C79E9AD5CF3(joaat("weapon_ball"));
		if (iParam1 == 1)
		{
			unk_0x91DFC8F68F6D9B05(uLocal_490, "PICKUP_WEAPON_BALL", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
		}
	}
}

void func_100()
{
	if (!unk_0x611AD675982BEBCC(iLocal_69))
	{
		unk_0xF23E6F5690771F71(iLocal_69, unk_0x188E8A7343F4234F(unk_0xE2D3D51028F0428A()));
	}
	if (unk_0x611AD675982BEBCC(iLocal_69))
	{
		unk_0x508EA490C0230199(iLocal_69, 1);
		unk_0x4D7356AAC1800B4E(func_101(), 1f, 0.9f, 3f);
		unk_0x44BC3176E12D5D7C(iLocal_69, unk_0x188E8A7343F4234F(unk_0xE2D3D51028F0428A()), 1);
	}
}

var func_101()
{
	return unk_0xFD8E434495EC2F26(unk_0xB6BA8B8E3D0B41C6());
}

void func_102()
{
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
	{
		if (func_106(unk_0xE2D3D51028F0428A(), iLocal_69) > 10f || func_105("CHOP_H_WHIS"))
		{
			if ((unk_0x320D1840B6DAA1CC() - iLocal_412) > 4000 && unk_0xF09A4F413B0D30EB(2, 47))
			{
				iLocal_412 = unk_0x320D1840B6DAA1CC();
				func_103(unk_0xE2D3D51028F0428A(), "CALL_CHOP", 3);
				if (func_105("CHOP_H_WHIS"))
				{
					unk_0x3410421C60BF7143(1);
				}
				if (iLocal_51 == 15 && iLocal_52 > 1)
				{
				}
				else
				{
					func_40(0);
					if (iLocal_51 == 2)
					{
						func_121(2, 0);
					}
					else
					{
						func_121(2, 1);
					}
				}
			}
			if (((!BitTest(Global_113386.f_10049.f_94, 8) && !unk_0xF847447D4467709D()) && !func_19()) && !unk_0x04458B4E5D9E466A())
			{
				unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_94), 8);
				func_15("CHOP_H_WHIS", -1);
			}
		}
	}
}

void func_103(var uParam0, char* sParam1, int iParam2)
{
	unk_0xB0C559BD7D5D270D(uParam0, sParam1, func_104(iParam2), 1);
}

int func_104(int iParam0)
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

bool func_105(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

float func_106(var uParam0, int iParam1)
{
	return func_4(uParam0, iParam1, 1);
}

int func_107()
{
	if ((unk_0x174CED88B97C78D9(iLocal_69, joaat("script_task_perform_sequence")) == 7 || unk_0x32DCDA1B2F8A0694(iLocal_69)) || unk_0xE10B76698E5CF067(iLocal_69))
	{
		unk_0xE095496A833D555C(iLocal_69);
		return 1;
	}
	return 0;
}

void func_108(char* sParam0, int iParam1)
{
	func_111(&uLocal_172, 1, unk_0xE2D3D51028F0428A(), "FRANKLIN", 0, 1);
	func_109(&uLocal_172, "CHOP_AU", sParam0, 3, iParam1, 0);
}

void func_109(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_110(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xCED9E32812D6C7C7(&Global_20471, 0);
	Global_21608 = iParam3;
	StringCopy(&Global_21595, sParam2, 24);
}

void func_110(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_111(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_112()
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 6);
	if (iVar0 == 0)
	{
		unk_0x49D97B076E3590AC(iLocal_69, sLocal_82[1], "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_86 = "idle_a";
	}
	else if (iVar0 == 1)
	{
		unk_0x49D97B076E3590AC(iLocal_69, sLocal_82[1], "idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_86 = "idle_c";
	}
	else
	{
		unk_0x49D97B076E3590AC(iLocal_69, sLocal_82[1], "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_86 = "idle_b";
	}
}

int func_113(int iParam0, int iParam1)
{
	if (func_114(iParam0))
	{
		if (unk_0x174CED88B97C78D9(iParam0, iParam1) == 1 || unk_0x174CED88B97C78D9(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_114(int iParam0)
{
	if (func_125(uParam0))
	{
		if (!unk_0xF68107C40359970C(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_465 == 0)
	{
		iVar0 = unk_0x5853B15F78E1A265(0, 8);
		if (!unk_0x8F41785F110B0DA0(iLocal_69, Local_440[iVar0 /*3*/], 2f, 2f, 4f, 0, 1, 0) && !unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_440[iVar0 /*3*/], 2f, 2f, 4f, 0, 1, 0))
		{
			unk_0x7D1424753688EE7A(iLocal_69, Local_440[iVar0 /*3*/], 1f, 20000, 0.25f, 8192, 1193033728);
			iLocal_465 = 1;
		}
	}
	else if (!func_113(iLocal_69, joaat("script_task_follow_nav_mesh_to_coord")))
	{
		if (func_43() == 2)
		{
			iVar1 = 15;
		}
		else if (func_43() == 0)
		{
			iVar1 = 10;
		}
		else
		{
			iVar1 = -1;
		}
		iVar2 = unk_0x5853B15F78E1A265(0, 100);
		if (iVar2 < iVar1 && iLocal_422 == 0)
		{
			iLocal_422 = 1;
			func_121(13, 1);
		}
		else if (iVar2 < 50)
		{
			iLocal_81 = 1;
			sLocal_82[0] = "creatures@rottweiler@amb@world_dog_barking@enter";
			sLocal_82[1] = "creatures@rottweiler@amb@world_dog_barking@base";
			sLocal_82[2] = "creatures@rottweiler@amb@world_dog_barking@exit";
			func_121(17, 1);
		}
		else
		{
			iLocal_81 = 0;
			sLocal_82[0] = "creatures@rottweiler@amb@world_dog_sitting@enter";
			sLocal_82[1] = "creatures@rottweiler@amb@world_dog_sitting@idle_a";
			sLocal_82[2] = "creatures@rottweiler@amb@world_dog_sitting@exit";
			func_121(17, 1);
		}
	}
}

void func_116()
{
	if (((unk_0x320D1840B6DAA1CC() - iLocal_484) > 2000 && func_125(iLocal_69)) && unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(iLocal_69, 1), 5f, 1))
	{
		func_122("WHINE");
		iLocal_484 = unk_0x320D1840B6DAA1CC();
	}
}

void func_117()
{
	if (func_43() == 2 && (unk_0x320D1840B6DAA1CC() - iLocal_413) > iLocal_414)
	{
		iLocal_413 = unk_0x320D1840B6DAA1CC();
		iLocal_414 = unk_0x5853B15F78E1A265(10000, 15000);
		func_122("WHINE");
	}
}

int func_118(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if ((func_125(iLocal_69) && func_125(unk_0xE2D3D51028F0428A())) && func_120(iParam0, Local_397, 30f))
	{
		if (iParam1 == 1)
		{
			if (func_119(&uLocal_120, unk_0x6B62510F212526DC(iParam0, 1)))
			{
				Var0 = { unk_0x6B62510F212526DC(iLocal_69, 1) };
				Var3 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
				if (unk_0x48053974ED6F63CE((Var0.f_2 - Var3.f_2)) < 2.5f)
				{
					return 1;
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

bool func_119(var uParam0, struct<2> Param1, Vector3 vParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1.f_0)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

bool func_120(int iParam0, struct<3> Param1, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x6B62510F212526DC(uParam0, 1) };
	Var3 = { Param1 - Var0 };
	return ((Var3.f_0 * Var3.f_0) + (Var3.f_1 * Var3.f_1)) <= (fParam4 * fParam4);
}

void func_121(int iParam0, int iParam1)
{
	iLocal_107 = 0;
	if (func_125(iLocal_69))
	{
		unk_0x50274A7EACA3133A(iLocal_69, 1);
		unk_0xE095496A833D555C(iLocal_69);
		if (!unk_0xD5C6B5E3B93A5EDC(iLocal_69, 0))
		{
			if (iParam1 == 1)
			{
				unk_0x03A927199A2DFE46(iLocal_69);
			}
			unk_0x9210F85E9CD785F1(iLocal_69, 0);
		}
	}
	iLocal_51 = iParam0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	iLocal_385 = -1;
	Local_386 = { 0f, 0f, 0f };
	Local_389 = { 0f, 0f, 0f };
	iLocal_339 = 5;
	func_34();
	iLocal_465 = 0;
	iLocal_439 = 0;
	iLocal_484 = unk_0x320D1840B6DAA1CC();
	unk_0x6CE6C3A402C3E20C("DisableBarks", 0);
}

void func_122(char* sParam0)
{
	unk_0x396D9BC8F22862EA(iLocal_69, 3, sParam0);
}

int func_123()
{
	if (func_118(unk_0xE2D3D51028F0428A(), 1))
	{
		if ((unk_0x320D1840B6DAA1CC() - iLocal_406) > iLocal_407)
		{
			return 1;
		}
		if (func_39(unk_0xE2D3D51028F0428A(), Local_397.f_5, 1) < 8f)
		{
			func_108("CHOP_KENNEL", 0);
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0, struct<3> Param1, var uParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_125(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0x9CD4CBF2BBE10F00(Param1, &fVar1, 0, 0);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0xC64B6E13A6A7F517(iParam0, Param1, 1, 0, 0, iParam6);
		unk_0xBBF86885619695CE(iParam0, uParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_126()
{
	if ((unk_0x320D1840B6DAA1CC() - iLocal_488) > 60000)
	{
		iLocal_488 = unk_0x320D1840B6DAA1CC();
		if ((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15)
		{
			if (func_43() == 1)
			{
				func_127(115, 1);
			}
			else
			{
				func_127(116, 1);
			}
		}
	}
}

void func_127(int iParam0, int iParam1)
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

void func_128()
{
	if ((unk_0x320D1840B6DAA1CC() - iLocal_485) > 500)
	{
		iLocal_485 = unk_0x320D1840B6DAA1CC();
		if (iLocal_51 != 15 && unk_0x367885498C2037BD(unk_0xE2D3D51028F0428A(), joaat("weapon_ball"), 1.5f, &uLocal_468, &iLocal_467, 0))
		{
			func_40(1);
		}
	}
}

void func_129()
{
	int iVar0;
	
	if (((((((((((func_144() && func_143()) && !func_142()) && iLocal_53 == 0) && iLocal_51 != 6) && func_19()) && !unk_0x04458B4E5D9E466A()) && !unk_0xCED7266BAB0BDC20(iLocal_69, 0)) && !func_81()) && !func_16()) && !func_3(0)) && !func_141())
	{
		unk_0x7653D561C9574763(0, 19, 1);
		unk_0x7653D561C9574763(0, 44, 1);
		unk_0x7653D561C9574763(0, 262, 1);
		unk_0x7653D561C9574763(0, 261, 1);
		unk_0x7653D561C9574763(0, 37, 1);
		if (iLocal_396 == 0)
		{
			func_138(unk_0xF34EE736CF047844(Global_113386.f_20118.f_254), 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
		}
		else
		{
			func_138(100, 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
		}
		if (func_137())
		{
			if (Global_32106 == 0)
			{
				Global_32106 = 1;
			}
			if (unk_0x4131052989DE1278())
			{
				unk_0x457826ED772C86A4(1);
			}
			else
			{
				unk_0x56593357686570F4(iLocal_69, 0f, 0f, 0f, 1, -1, 1000, 1000, 193150208);
				iLocal_492 = 0;
			}
			unk_0x07899AAA5D680386(func_136(), func_135(0));
			unk_0x07899AAA5D680386(func_136(), func_135(1));
			unk_0x07899AAA5D680386(func_136(), func_135(2));
			unk_0x07899AAA5D680386(func_136(), func_135(3));
			unk_0x07899AAA5D680386(func_136(), func_135(4));
			unk_0x07899AAA5D680386(func_136(), func_135(5));
			if (unk_0x3A76A0944BE2C291(0))
			{
				unk_0x7653D561C9574763(func_136(), func_135(0), 1);
				unk_0x7653D561C9574763(func_136(), func_135(1), 1);
				unk_0x7653D561C9574763(func_136(), func_135(2), 1);
				unk_0x7653D561C9574763(func_136(), func_135(3), 1);
				unk_0x7653D561C9574763(func_136(), func_135(4), 1);
				unk_0x7653D561C9574763(func_136(), func_135(5), 1);
			}
			unk_0x5089DD830FA61D71(0, 25, 1);
			if (unk_0x51844F589D928A86(func_136(), func_135(0)) && func_134())
			{
				switch (iLocal_51)
				{
					case 1:
					case 3:
					case 4:
						iLocal_75 = 1;
						func_133(0);
						func_122("PLAYFUL");
						func_108("CHOP_WALK", 0);
						func_121(2, 1);
						break;
					
					case 2:
					case 5:
					case 15:
						iLocal_75 = 0;
						func_133(0);
						func_121(3, 1);
						break;
					
					case 17:
					case 18:
						iLocal_75 = 1;
						func_133(0);
						func_108("CHOP_WALK", 0);
						iLocal_53 = 2;
						break;
				}
				if (iLocal_75 == 1 && unk_0x61481F9FBB1C7EDD(joaat("sp_chop_walk_done"), &iLocal_487, -1))
				{
					iLocal_487++;
					unk_0x076A5661EF5ABEE4(joaat("sp_chop_walk_done"), iLocal_487, 1);
				}
			}
			if (bLocal_395 == 1)
			{
				if (unk_0xF01464D7AF0B7347(func_136(), func_135(1)) && func_134())
				{
					if (iLocal_51 == 17 || iLocal_51 == 18)
					{
						iLocal_53 = 5;
					}
					else
					{
						func_121(5, 1);
					}
				}
				if (func_43() == 2 && iLocal_396 == 0)
				{
					if (func_132() >= 1)
					{
						if (unk_0xF01464D7AF0B7347(func_136(), func_135(2)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 2)
					{
						if (unk_0xF01464D7AF0B7347(func_136(), func_135(3)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 3)
					{
						if (unk_0xF01464D7AF0B7347(func_136(), func_135(4)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 4)
					{
						if (unk_0xF01464D7AF0B7347(func_136(), func_135(5)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
				}
				else
				{
					if (func_132() >= 1)
					{
						if (unk_0xF01464D7AF0B7347(func_136(), func_135(2)) && func_134())
						{
							func_108("CHOP_SIT", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 8;
							}
							else
							{
								func_121(8, 1);
							}
						}
					}
					if (func_132() >= 2)
					{
						if (unk_0xF01464D7AF0B7347(func_136(), func_135(3)) && func_134())
						{
							func_108("CHOP_PAW", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 9;
							}
							else
							{
								func_121(9, 1);
							}
						}
					}
					if (func_132() >= 3)
					{
						if (unk_0xF01464D7AF0B7347(func_136(), func_135(4)) && func_134())
						{
							func_108("CHOP_BEG", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 7;
							}
							else
							{
								func_121(7, 1);
							}
						}
					}
					if (func_132() >= 4)
					{
						if (unk_0xF01464D7AF0B7347(func_136(), func_135(5)) && func_134())
						{
							func_108("CHOP_PET", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 10;
							}
							else
							{
								func_121(10, 1);
							}
						}
					}
				}
			}
		}
		else
		{
			unk_0x3410421C60BF7143(1);
			if (!BitTest(Global_113386.f_10049.f_94, 0))
			{
				unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_94), 0);
			}
			if (bLocal_395 == 0)
			{
				bLocal_395 = func_131();
			}
			if (bLocal_395 == 1)
			{
				iVar0 = func_132();
				if (iVar0 > 4)
				{
					iVar0 = 4;
				}
				if ((((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 18) || iLocal_51 == 3) || iLocal_51 == 4)
				{
					if ((func_43() == 2 && iLocal_396 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_109, "CHOP_H_WAIT_H", 32);
					}
					else
					{
						StringCopy(&Local_109, "CHOP_H_WAIT_", 32);
					}
					StringIntConCat(&Local_109, iVar0, 32);
					if (unk_0x3A76A0944BE2C291(0))
					{
						StringConCat(&Local_109, "_KM", 32);
					}
				}
				else if (iLocal_51 == 2 || iLocal_51 == 15)
				{
					if ((func_43() == 2 && iLocal_396 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_109, "CHOP_H_WALK_H", 32);
					}
					else
					{
						StringCopy(&Local_109, "CHOP_H_WALK_", 32);
					}
					StringIntConCat(&Local_109, iVar0, 32);
					if (unk_0x3A76A0944BE2C291(0))
					{
						StringConCat(&Local_109, "_KM", 32);
					}
				}
				func_130(&Local_109);
			}
			else if (iLocal_51 == 2 || iLocal_51 == 15)
			{
				if (unk_0x3A76A0944BE2C291(0))
				{
					func_130("CHOP_H_HOME_KM");
				}
				else
				{
					func_130("CHOP_H_HOME");
				}
			}
			else if (unk_0x3A76A0944BE2C291(0))
			{
				func_130("CHOP_H_NOAPP_KM");
			}
			else
			{
				func_130("CHOP_H_NOAPP");
			}
		}
	}
	else
	{
		func_133(1);
	}
}

void func_130(char* sParam0)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

int func_131()
{
	if (Global_113386.f_20118.f_263)
	{
		return 1;
	}
	return 0;
}

int func_132()
{
	return Global_113386.f_20118.f_254.f_3;
}

void func_133(int iParam0)
{
	if (func_137())
	{
		unk_0x3410421C60BF7143(1);
	}
	if (iParam0 == 1 && unk_0x4131052989DE1278())
	{
		unk_0xBD1E8007D7DFA747(0);
	}
}

int func_134()
{
	if (((iLocal_51 == 8 || iLocal_51 == 7) || iLocal_51 == 9) || iLocal_51 == 10)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0)
{
	if (unk_0x3A76A0944BE2C291(0))
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			
			case 1:
				return 22;
			
			case 2:
				return 44;
			
			case 3:
				return 45;
			
			case 4:
				return 51;
			
			case 5:
				return 23;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 227;
			
			case 1:
				return 229;
			
			case 2:
				return 224;
			
			case 3:
				return 225;
			
			case 4:
				return 223;
			
			case 5:
				return 222;
			}
		
		default:
	}
	return 0;
}

int func_136()
{
	if (unk_0x3A76A0944BE2C291(0))
	{
		return 0;
	}
	return 2;
}

int func_137()
{
	if (unk_0xF847447D4467709D())
	{
		if (((((((((((((((((((func_105("CHOP_H_WAIT_0") || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_NOAPP"))
		{
			return 1;
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0xF847447D4467709D())
		{
			if (((((((((((((((((((func_105("CHOP_H_WAIT_0_KM") || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_138(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_140(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_139(0, iVar0);
		Global_1649593.f_1177[iVar0] = iParam0;
		Global_1649593.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1177.f_194[iVar0] = iParam3;
		Global_1649593.f_1177.f_183[iVar0] = iParam4;
		Global_1649593.f_1177.f_216[iVar0] = iParam5;
		Global_1649593.f_1177.f_227[iVar0 /*3*/] = fParam6;
		Global_1649593.f_1177.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1649593.f_1177.f_258[iVar0] = iParam8;
		Global_1649593.f_1177.f_269[iVar0] = iParam9;
		Global_1649593.f_1177.f_312[iVar0] = iParam10;
		Global_1649593.f_1177.f_323[iVar0] = iParam11;
		Global_1649593.f_1177.f_334[iVar0] = iParam12;
		Global_1649593.f_1177.f_345[iVar0] = iParam13;
		Global_1649593.f_1172 = 1;
		Global_1649593.f_1177.f_356[iVar0] = iParam14;
		Global_1649593.f_1177.f_367[iVar0] = iParam15;
		Global_1649593.f_1177.f_378[iVar0] = iParam16;
		Global_1649593.f_1177.f_389[iVar0] = iParam17;
		Global_1649593.f_1177.f_400[iVar0] = iParam18;
		Global_1649593.f_1177.f_411[iVar0] = iParam19;
		Global_1649593.f_1177.f_422[iVar0] = iParam20;
		Global_1649593.f_1177.f_433[iVar0] = iParam21;
		Global_1649593.f_1177.f_444[iVar0] = iParam22;
		Global_1649593.f_1177.f_455[iVar0] = iParam23;
		Global_1649593.f_1177.f_466[iVar0] = iParam24;
		Global_1649593.f_1177.f_205[iVar0] = iParam25;
		Global_1649593.f_1177.f_477[iVar0] = iParam26;
		Global_1649593.f_1177.f_488[iVar0] = iParam27;
		Global_1649593.f_1177.f_499[iVar0] = iParam28;
		Global_1649593.f_1177.f_510[iVar0] = iParam29;
		Global_1649593.f_1177.f_521[iVar0] = iParam30;
		Global_1649593.f_1177.f_532[iVar0] = iParam31;
		Global_1649593.f_1177.f_543[iVar0] = iParam32;
		Global_1649593.f_1177.f_554[iVar0] = iParam33;
		Global_1649593.f_1177.f_565[iVar0] = iParam34;
		Global_1649593.f_1177.f_576[iVar0] = iParam35;
		Global_1649593.f_1177.f_587[iVar0] = iParam36;
	}
}

void func_139(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_140(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

bool func_141()
{
	return Global_75485;
}

bool func_142()
{
	return unk_0x320D1840B6DAA1CC() <= Global_23150.f_6269 + 100;
}

int func_143()
{
	if (iLocal_51 == 12)
	{
		return 0;
	}
	if (iLocal_51 == 13 || (iLocal_51 == 14 && func_113(iLocal_69, joaat("script_task_perform_sequence"))))
	{
		if (iLocal_439 == 0 && unk_0x4C1B8C5717647539(2, 228))
		{
			func_108("CHOP_BUSY", 0);
			iLocal_439 = 1;
		}
		return 0;
	}
	return 1;
}

int func_144()
{
	if (func_106(unk_0xE2D3D51028F0428A(), iLocal_69) < 10f)
	{
		if (iLocal_51 == 15 && iLocal_52 < 4)
		{
		}
		else if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
		{
			func_148(0);
			func_147(0);
			return 0;
		}
		else
		{
			func_145();
			func_148(1);
			func_147(1);
			return 1;
		}
	}
	func_148(0);
	func_147(0);
	if (func_105("CHOP_H_INTRO") || (unk_0x8FE9914D4872D601() && func_105("CHOP_H_INTRO_KM")))
	{
		unk_0x3410421C60BF7143(1);
	}
	return 0;
}

void func_145()
{
	if ((((((((!BitTest(Global_113386.f_10049.f_94, 0) && !(func_105("CHOP_H_INTRO") || (unk_0x8FE9914D4872D601() && func_105("CHOP_H_INTRO_KM")))) && !func_105("PW_HELP_1")) && !func_105("PW_HELP_2")) && !func_146()) && !unk_0x04458B4E5D9E466A()) && !func_3(0)) && !func_142()) && !func_141())
	{
		if ((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 18)
		{
			if (func_118(unk_0xE2D3D51028F0428A(), 1))
			{
				unk_0x3410421C60BF7143(1);
				if (unk_0x3A76A0944BE2C291(0))
				{
					func_130("CHOP_H_INTRO_KM");
				}
				else
				{
					func_130("CHOP_H_INTRO");
				}
			}
		}
	}
	if ((unk_0x8FE9914D4872D601() && func_105("CHOP_H_INTRO_KM")) || func_105("CHOP_H_INTRO"))
	{
		if ((((func_146() || unk_0x04458B4E5D9E466A()) || func_3(0)) || func_142()) || func_141())
		{
			unk_0x3410421C60BF7143(1);
		}
	}
}

int func_146()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_147(int iParam0)
{
	if (iParam0 == 1)
	{
		if (func_125(iLocal_69))
		{
			unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iLocal_69, -1, 48, 2);
			iLocal_73 = 1;
		}
	}
	else if (iLocal_73 == 1 && func_125(unk_0xE2D3D51028F0428A()))
	{
		unk_0xC89EA639A6F338A6(unk_0xE2D3D51028F0428A());
		iLocal_73 = 0;
	}
}

void func_148(int iParam0)
{
	int iVar0;
	
	unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1);
	if (iLocal_74 == 1 && iVar0 != joaat("weapon_unarmed"))
	{
		iParam0 = 0;
	}
	if (iParam0 == 1)
	{
		if (iLocal_74 == 0 && iVar0 == joaat("weapon_unarmed"))
		{
			unk_0xA7266A50941DBAEA(iLocal_69, 1);
			unk_0x06AF73D7E3DF7782(iLocal_69, 1, 0);
			unk_0x37C6BC02BA3DF98B(iLocal_69, 1);
			unk_0x82EC99AEEC5EEF51(iLocal_69, 1);
			iLocal_74 = 1;
		}
	}
	else if (iLocal_74 == 1)
	{
		unk_0xA7266A50941DBAEA(iLocal_69, 0);
		unk_0x06AF73D7E3DF7782(iLocal_69, 0, 0);
		unk_0x37C6BC02BA3DF98B(iLocal_69, 0);
		iLocal_74 = 0;
	}
}

void func_149()
{
	int iVar0;
	var uVar1[5];
	var uVar7;
	int iVar8;
	var uVar9;
	int iVar10;
	
	if ((iLocal_51 != 6 && iLocal_107 == 0) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
	{
		if (((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15) || (iLocal_51 == 14 && !func_113(iLocal_69, joaat("script_task_perform_sequence"))))
		{
			if (unk_0xCA0ED3B082A9C834(unk_0xE2D3D51028F0428A(), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 100f) > 0 || unk_0xCA0ED3B082A9C834(iLocal_69, unk_0x6B62510F212526DC(iLocal_69, 1), 100f) > 0)
			{
				unk_0x8FB472886552D737("creatures@rottweiler@melee@streamed_taunts@");
				iVar0 = 0;
				while (iVar0 < unk_0x46951D3186547C7A(unk_0xE2D3D51028F0428A(), &uVar1, -1))
				{
					if ((((!func_125(uVar7) && func_125(uVar1[iVar0])) && (unk_0xCED7266BAB0BDC20(uVar1[iVar0], unk_0xE2D3D51028F0428A()) || unk_0xCED7266BAB0BDC20(uVar1[iVar0], iLocal_69))) && !unk_0xD5C6B5E3B93A5EDC(uVar1[iVar0], 0)) && uVar1[iVar0] != iLocal_69)
					{
						uVar7 = uVar1[iVar0];
					}
					iVar0++;
				}
				if (func_125(uVar7))
				{
					unk_0xC1A74225341AA9FB(iLocal_69, uVar7, 0, 16);
					func_108("CHOP_ATTACK2", 0);
					if (((!unk_0xF847447D4467709D() && !BitTest(Global_113386.f_10049.f_94, 6)) && !func_19()) && !unk_0x04458B4E5D9E466A())
					{
						unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_94), 6);
						func_15("CHOP_H_ATTACK", -1);
					}
					func_40(0);
					func_121(6, 0);
				}
			}
			else
			{
				unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar8, 1);
				if (iVar8 != joaat("weapon_ball") && !(iLocal_51 == 15 && iLocal_52 == 1))
				{
					if (unk_0x269C23E72E54A04E(unk_0x9E2D6C50374FCFA9(), &uVar9) || unk_0xFD48978E4E1BAA06(unk_0x9E2D6C50374FCFA9(), &uVar9))
					{
						if (unk_0x9044EDB8A7BF67B4(uVar9))
						{
							iVar10 = unk_0x28AA31872A651BC7(iVar9);
							if (((!unk_0xF68107C40359970C(iVar10) && iVar10 != iLocal_69) && !unk_0xD5C6B5E3B93A5EDC(iVar10, 0)) && func_4(unk_0xE2D3D51028F0428A(), iVar10, 1) < 50f)
							{
								unk_0xC1A74225341AA9FB(iLocal_69, iVar10, 0, 16);
								iLocal_480++;
								if (iLocal_480 >= 3)
								{
									unk_0x48A2EC087250E1BC(unk_0x9E2D6C50374FCFA9(), 0f);
									unk_0x007D28B99DF625B1(unk_0x9E2D6C50374FCFA9(), 2, 0);
								}
								func_108("CHOP_ATTACK1", 0);
								if (((!unk_0xF847447D4467709D() && !BitTest(Global_113386.f_10049.f_94, 11)) && !func_19()) && !unk_0x04458B4E5D9E466A())
								{
									unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_94), 11);
									func_15("CHOP_H_AIM", -1);
								}
								func_40(0);
								func_121(6, 0);
							}
						}
					}
				}
			}
		}
	}
	if ((unk_0x320D1840B6DAA1CC() - iLocal_481) > 60000)
	{
		iLocal_481 = unk_0x320D1840B6DAA1CC();
		if (iLocal_480 > 0)
		{
			iLocal_480 = (iLocal_480 - 1);
		}
	}
}

void func_150()
{
	if ((iLocal_51 != 16 && Global_31965 == 1) && unk_0xB6C8533A238C4B1E(unk_0xE2D3D51028F0428A()))
	{
		func_121(16, 1);
	}
}

void func_151()
{
	if (iLocal_438 == 0)
	{
		if (func_118(unk_0xE2D3D51028F0428A(), 1))
		{
			func_108("CHOP_DUMP", 0);
			iLocal_438 = 1;
		}
	}
}

void func_152()
{
	if (iLocal_466 != func_153() && func_125(iLocal_69))
	{
		if (func_131())
		{
			iLocal_466 = func_153();
			unk_0xE3752B10DC995E95(iLocal_69, 3, 0, iLocal_466, 0);
		}
		else if (iLocal_466 != 4)
		{
			iLocal_466 = 4;
			unk_0xE3752B10DC995E95(iLocal_69, 3, 0, iLocal_466, 0);
		}
	}
}

int func_153()
{
	return Global_113386.f_20118.f_254.f_4;
}

void func_154()
{
	int iVar0;
	
	Global_32106 = 0;
	unk_0xD69A0C3662175E68(func_162());
	if (!unk_0x0152AA00FA3130F1(func_162()))
	{
		return;
	}
	if (func_178(6))
	{
		Local_397.f_4 = 6;
		Local_397 = { 18.1531f, 535.2469f, 169.6324f };
		Local_397.f_3 = 204.8112f;
		Local_397.f_5 = { 19.52771f, 537.436f, 170.143f };
		Local_397.f_8 = 151.3064f;
		Local_419 = { 19.45963f, 535.7817f, 169.6277f };
		Local_440[0 /*3*/] = { 17.36033f, 528.8973f, 169.6277f };
		Local_440[1 /*3*/] = { 19.46877f, 529.1785f, 169.6277f };
		Local_440[2 /*3*/] = { 20.82979f, 531.5168f, 169.6277f };
		Local_440[3 /*3*/] = { 22.83555f, 532.3281f, 169.6277f };
		Local_440[4 /*3*/] = { 20.79285f, 535.001f, 169.6277f };
		Local_440[5 /*3*/] = { 18.05178f, 535.6321f, 169.6277f };
		Local_440[6 /*3*/] = { 18.92047f, 534.0938f, 169.6277f };
		Local_440[7 /*3*/] = { 17.51333f, 533.4775f, 169.6277f };
		func_161(&uLocal_120);
		func_160(&uLocal_120, 12.41124f, 535.5469f, 169.6277f);
		func_160(&uLocal_120, 19.04497f, 538.5729f, 169.6277f);
		func_160(&uLocal_120, 25.00015f, 534.4414f, 169.6277f);
		func_160(&uLocal_120, 28.0998f, 527.7639f, 169.4277f);
		func_160(&uLocal_120, 17.75896f, 523.3129f, 169.2277f);
		func_159(&uLocal_120);
	}
	else
	{
		Local_397.f_4 = 5;
		Local_397 = { -10.25168f, -1422.907f, 29.67775f };
		Local_397.f_3 = 157.9037f;
		Local_397.f_5 = { -9.73f, -1421.55f, 30.1f };
		Local_397.f_8 = 148.26f;
		Local_419 = { -10.6379f, -1424.561f, 29.67365f };
		Local_440[0 /*3*/] = { -10.03643f, -1423.529f, 29.67602f };
		Local_440[1 /*3*/] = { -10.78779f, -1425.306f, 29.70937f };
		Local_440[2 /*3*/] = { -12.7048f, -1424.748f, 29.72222f };
		Local_440[3 /*3*/] = { -12.47465f, -1422.485f, 29.74699f };
		Local_440[4 /*3*/] = { -14.26666f, -1424.855f, 29.71964f };
		Local_440[5 /*3*/] = { -14.55816f, -1423.048f, 29.78372f };
		Local_440[6 /*3*/] = { -16.13293f, -1424.489f, 29.76139f };
		Local_440[7 /*3*/] = { -16.25662f, -1423.325f, 29.81294f };
		func_161(&uLocal_120);
		func_160(&uLocal_120, -7.26821f, -1427.065f, 29.67468f);
		func_160(&uLocal_120, -7.39631f, -1418.851f, 29.5858f);
		func_160(&uLocal_120, -14.27201f, -1421.59f, 29.76819f);
		func_160(&uLocal_120, -22.85347f, -1423.173f, 29.74042f);
		func_160(&uLocal_120, -22.77974f, -1427.168f, 29.65953f);
		func_159(&uLocal_120);
	}
	bLocal_395 = func_131();
	func_156();
	if (func_43() == 2)
	{
		unk_0xDC226C748C3C868D(Local_419, 2f, 2);
		unk_0xD69A0C3662175E68(joaat("prop_big_shit_02"));
		while (!unk_0x0152AA00FA3130F1(joaat("prop_big_shit_02")))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		uLocal_418 = unk_0x0E536D72AB30F4C8(joaat("prop_big_shit_02"), Local_419, 1, 1, 0);
		unk_0xF1A23B343DFEDFD0(joaat("prop_big_shit_02"));
		iLocal_438 = 0;
	}
	else
	{
		iLocal_438 = 1;
	}
	iLocal_422 = 0;
	if (unk_0x5853B15F78E1A265(0, 2) == 0)
	{
		iLocal_407 = -1;
	}
	else
	{
		iLocal_407 = unk_0x5853B15F78E1A265(20000, 30000);
	}
	if (iLocal_393 == 1)
	{
		iLocal_51 = 7;
		iLocal_75 = 1;
	}
	else if (iLocal_394 == 1)
	{
		iLocal_51 = 2;
	}
	else if (iLocal_407 > -1)
	{
		iLocal_51 = 11;
		iLocal_75 = 0;
	}
	else
	{
		iLocal_51 = 1;
		iLocal_75 = 0;
	}
	iLocal_87 = unk_0x7AFC31F33CB9B8D5(11.23f, 515.4f, 168f, 9f, 21f, 4f, func_155(113f), 0, 7);
	iLocal_88 = unk_0x7AFC31F33CB9B8D5(24f, 528f, 168f, 5f, 5f, 4f, func_155(113f), 0, 7);
	Local_89[0 /*3*/] = { 444.1685f, 5569.016f, 780.1895f };
	Local_89[1 /*3*/] = { 443.8968f, 5574.931f, 780.1895f };
	Local_89[2 /*3*/] = { -739.1624f, 5596.784f, 40.6594f };
	Local_89[3 /*3*/] = { -738.8002f, 5593.269f, 40.6594f };
	fLocal_102[0] = 270f;
	fLocal_102[1] = 270f;
	fLocal_102[2] = 95f;
	fLocal_102[3] = 95f;
	func_97();
	iLocal_73 = 0;
	iLocal_408 = 0;
	iLocal_412 = unk_0x320D1840B6DAA1CC();
	iVar0 = func_132();
	if (iVar0 > 4)
	{
		iVar0 = 4;
	}
	StringCopy(&Local_109, "CHOP_H_WAIT_", 32);
	StringIntConCat(&Local_109, iVar0, 32);
	if (unk_0x3A76A0944BE2C291(0))
	{
		StringConCat(&Local_109, "_KM", 32);
	}
	Global_32108 = 0;
	iLocal_50 = 1;
}

float func_155(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

void func_156()
{
	if (iLocal_393 == 1)
	{
		if (func_158())
		{
			unk_0x2D58A6131679D82C(iLocal_69, 1, 1);
			unk_0x03A927199A2DFE46(iLocal_69);
			func_152();
			while (func_146())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else if (iLocal_394 == 1)
	{
		if (func_125(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iLocal_80 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				func_79();
				func_78();
				func_157(&iLocal_69, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 0, 1);
				if (func_125(iLocal_69))
				{
					unk_0x50274A7EACA3133A(iLocal_69, 1);
					unk_0x5D07A2CF7F265FCB(iLocal_69, 1);
					unk_0x2378080C93821600(iLocal_69, 0);
					unk_0xA3400358EEE2B4A2(iLocal_69, 0);
					func_100();
					unk_0x9210F85E9CD785F1(iLocal_69, 1);
					unk_0xA9F390242F9EB2E1(iLocal_69, iLocal_80, 0);
					iLocal_107 = 8;
					func_152();
					unk_0xEB087B19F63AB053(iLocal_69, 0, 0);
				}
				while (func_146())
				{
					if (func_125(iLocal_69) && !func_113(iLocal_69, joaat("script_task_play_anim")))
					{
						unk_0x8FB472886552D737(sLocal_477);
						if (unk_0x6F940C2636C076AD(sLocal_477))
						{
							unk_0x49D97B076E3590AC(iLocal_69, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
						}
					}
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_69))
	{
		func_157(&iLocal_69, Local_397, Local_397.f_3, 1);
	}
	if (func_125(iLocal_69))
	{
		unk_0xD642E010A287ADFD("rel_group_chop", &iLocal_71);
		iLocal_72 = 1;
		unk_0x9972EFADA7A2A47D(1, joaat("player"), iLocal_71);
		unk_0x9972EFADA7A2A47D(1, iLocal_71, joaat("player"));
		unk_0x9972EFADA7A2A47D(3, joaat("cat"), iLocal_71);
		unk_0x9972EFADA7A2A47D(3, iLocal_71, joaat("cat"));
		unk_0xFF4BEB6CFF55A013(iLocal_69, iLocal_71);
		unk_0x50274A7EACA3133A(iLocal_69, 1);
		unk_0x5D07A2CF7F265FCB(iLocal_69, 1);
		unk_0xD6A76BAB45A4B460(iLocal_69, 185, 1);
		unk_0xD6A76BAB45A4B460(iLocal_69, 26, 1);
		unk_0xD6A76BAB45A4B460(iLocal_69, 32, 0);
		unk_0xD6A76BAB45A4B460(iLocal_69, 29, 0);
		unk_0xD6A76BAB45A4B460(iLocal_69, 116, 0);
		unk_0xD6A76BAB45A4B460(iLocal_69, 118, 1);
		unk_0xD6A76BAB45A4B460(iLocal_69, 132, 1);
		unk_0xD6A76BAB45A4B460(iLocal_69, 268, 0);
		unk_0xD6A76BAB45A4B460(iLocal_69, 107, 1);
		unk_0xD6A76BAB45A4B460(iLocal_69, 281, 1);
		unk_0xD6A76BAB45A4B460(iLocal_69, 137, 1);
		unk_0xD6A76BAB45A4B460(iLocal_69, 146, 1);
		unk_0xD6A76BAB45A4B460(iLocal_69, 157, 0);
		unk_0xD6A76BAB45A4B460(iLocal_69, 45, 1);
		unk_0xD6A76BAB45A4B460(iLocal_69, 167, 1);
		unk_0x2378080C93821600(iLocal_69, 0);
		unk_0xA3400358EEE2B4A2(iLocal_69, 0);
		unk_0x9521FB98DB6DDF50(iLocal_69, joaat("weapon_animal"), 1, 1, 1);
		unk_0xBC12D08EE7559CCD(iLocal_69, 5, 1);
		unk_0xBC12D08EE7559CCD(iLocal_69, 0, 0);
		unk_0xBC12D08EE7559CCD(iLocal_69, 46, 1);
		unk_0x5C9D9A4EA475F37E(iLocal_69, 100f);
		unk_0xE014FF3C785EEFB5(iLocal_69, 100f);
		unk_0xDC6110E0F8FF9DA0(iLocal_69, 512, 1);
		unk_0x40A4FA5C4B5DA318(iLocal_69, 0);
		unk_0xD170C822231288FA(iLocal_69, 800);
		unk_0xF160248D9083ED0C(iLocal_69, 800, 0);
		unk_0x7A93DEA53EFC3CF2(iLocal_69, 200);
		if (!unk_0xD5C6B5E3B93A5EDC(iLocal_69, 0))
		{
			func_57();
		}
		func_111(&uLocal_172, 3, iLocal_69, "CHOP", 0, 1);
		unk_0xA7266A50941DBAEA(iLocal_69, 0);
		unk_0x06AF73D7E3DF7782(iLocal_69, 0, 0);
		unk_0x37C6BC02BA3DF98B(iLocal_69, 0);
		iLocal_74 = 0;
		Global_32105 = 0;
		iLocal_480 = 0;
		iLocal_481 = unk_0x320D1840B6DAA1CC();
	}
}

int func_157(var uParam0, struct<3> Param1, int iParam4, bool bParam5)
{
	int iVar0;
	
	iVar0 = func_162();
	unk_0xD69A0C3662175E68(iVar0);
	if (unk_0x0152AA00FA3130F1(iVar0))
	{
		if (unk_0xE5965CDF24F93A9F(*uParam0))
		{
			unk_0x05CB75C0837196F9(uParam0);
		}
		*uParam0 = unk_0xA8D58C3AADA2C41C(26, iVar0, Param1, iParam4, 0, 0);
		unk_0xE3752B10DC995E95(*uParam0, 0, 0, 0, 0);
		unk_0xE3752B10DC995E95(*uParam0, 1, 0, 0, 0);
		unk_0xE3752B10DC995E95(*uParam0, 2, 0, 0, 0);
		if (Global_113386.f_20118.f_263)
		{
			unk_0xE3752B10DC995E95(*uParam0, 3, 0, Global_113386.f_20118.f_254.f_4, 0);
		}
		else
		{
			unk_0xE3752B10DC995E95(*uParam0, 3, 0, 4, 0);
		}
		unk_0xE3752B10DC995E95(*uParam0, 4, 0, 0, 0);
		unk_0xE3752B10DC995E95(*uParam0, 5, 0, 0, 0);
		unk_0xE3752B10DC995E95(*uParam0, 6, 0, 0, 0);
		unk_0xE3752B10DC995E95(*uParam0, 7, 0, 0, 0);
		unk_0xE3752B10DC995E95(*uParam0, 8, 0, 0, 0);
		unk_0xE3752B10DC995E95(*uParam0, 9, 0, 0, 0);
		unk_0xE3752B10DC995E95(*uParam0, 10, 0, 0, 0);
		unk_0xE3752B10DC995E95(*uParam0, 11, 0, 0, 0);
		unk_0x9C726995FD3F93EB(*uParam0);
		if (bParam5)
		{
			unk_0xF1A23B343DFEDFD0(iVar0);
		}
		return 1;
	}
	return 0;
}

int func_158()
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	
	if (func_125(Global_100162) && unk_0x59BBF1CA2F5CAC75(Global_100162, func_162()))
	{
		iLocal_69 = Global_100162;
		return 1;
	}
	iVar11 = unk_0x46951D3186547C7A(unk_0xE2D3D51028F0428A(), &uVar0, -1);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		if ((uVar0[iVar12] != 0 && func_125(uVar0[iVar12])) && unk_0x15CAA6D7B11F1A7C(uVar0[iVar12]) == func_162())
		{
			iLocal_69 = uVar0[iVar12];
			return 1;
		}
		iVar12++;
	}
	return 0;
}

void func_159(var uParam0)
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(unk_0xBBDA792448DB5A89(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = unk_0xB7A628320EFF8E47(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = unk_0x71D93B57D07F9804(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_160(var uParam0, struct<3> Param1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { Param1 };
	uParam0->f_46++;
}

void func_161(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

int func_162()
{
	return joaat("a_c_chop");
}

int func_163()
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	
	if (iLocal_50 > 0)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_69))
		{
			if (func_167(0) && Global_31965 == 0)
			{
				return 1;
			}
			if (!func_170(1))
			{
				return 1;
			}
			if (Global_113376 == 1)
			{
				return 1;
			}
			if (((((((((((Global_78317 == 1 && Global_31965 == 0) && Global_8140 == 0) && Global_32214 == 0) && Global_32215 == 0) && Global_32216 == 0) && Global_60335 == 0) && !func_146()) && !func_16()) && Global_102575 == 0) && func_125(unk_0xE2D3D51028F0428A())) && !func_165())
			{
				return 1;
			}
			if (Global_97361 == 1)
			{
				return 1;
			}
			if (unk_0x55B23FE400FCEA6B(iLocal_69, 0))
			{
				if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && unk_0x0747E45CFF1F74AA(iLocal_69, unk_0xE2D3D51028F0428A(), 1))
				{
					Global_32105 = 1;
					if (!BitTest(Global_113386.f_10049.f_94, 9) && !unk_0x04458B4E5D9E466A())
					{
						unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_94), 9);
						func_15("CHOP_H_DEAD", -1);
					}
				}
				else if (!BitTest(Global_113386.f_10049.f_94, 12) && !unk_0x04458B4E5D9E466A())
				{
					unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_94), 12);
					func_15("CHOP_H_DEAD2", -1);
				}
				return 1;
			}
			else
			{
				if (unk_0x04458B4E5D9E466A())
				{
					func_164();
				}
				else
				{
					if ((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15)
					{
						fVar0 = 200f;
					}
					else
					{
						fVar0 = 100f;
					}
					if (func_4(unk_0xE2D3D51028F0428A(), iLocal_69, 1) > fVar0)
					{
						if ((!BitTest(Global_113386.f_10049.f_94, 4) && unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9())) && !unk_0x04458B4E5D9E466A())
						{
							if (((((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 11) || iLocal_51 == 4) || iLocal_51 == 3) || iLocal_51 == 13)
							{
							}
							else
							{
								unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_94), 4);
								func_15("CHOP_H_RANGE", -1);
							}
						}
						return 1;
					}
				}
				if (!unk_0xD5C6B5E3B93A5EDC(iLocal_69, 0) && unk_0x0CF63873D754B965(iLocal_69) > 0)
				{
					if (unk_0xD8F9DF94CD871327(iLocal_69))
					{
						Var1 = { unk_0x6B62510F212526DC(iLocal_69, 1) };
						if (unk_0x182029C7E52A1E4F(Var1, &fVar4))
						{
							if ((fVar4 - Var1.f_2) > 0.1f)
							{
								unk_0xF160248D9083ED0C(iLocal_69, 0, 0);
							}
						}
					}
					if (unk_0xEF9410C312F2B117(iLocal_69))
					{
						unk_0xF160248D9083ED0C(iLocal_69, 0, 0);
					}
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

void func_164()
{
	if (unk_0xF847447D4467709D())
	{
		if ((((((((((((((((((((((((((((((func_105("CHOP_H_INTRO") || func_105("CHOP_H_WAIT_0")) || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_HUNT")) || func_105("CHOP_H_NOVEH")) || func_105("CHOP_H_CAR")) || func_105("CHOP_H_BIKE")) || func_105("CHOP_H_ATTACK")) || func_105("CHOP_H_BALL")) || func_105("CHOP_H_WHIS")) || func_105("CHOP_H_NOAPP")) || func_105("CHOP_H_BEHAVE")) || func_105("CHOP_H_BEHAVA")) || func_105("CHOP_H_AIM"))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0xF847447D4467709D())
		{
			if ((((((((((((((((((((func_105("CHOP_H_INTRO_KM") || func_105("CHOP_H_WAIT_0_KM")) || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				unk_0x3410421C60BF7143(1);
			}
		}
	}
}

bool func_165()
{
	return Global_97750;
}

int func_166()
{
	if (unk_0x04458B4E5D9E466A())
	{
		return Global_98551;
	}
	if (func_146())
	{
		return Global_98551;
	}
	return 318;
}

int func_167(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_168(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_168(int iParam0)
{
	return func_169(iParam0, Global_43052);
}

int func_169(int iParam0, int iParam1)
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

bool func_170(int iParam0)
{
	func_171();
	return iParam0 == Global_113386.f_2363.f_539.f_4321;
}

void func_171()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_175(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_174(unk_0xE2D3D51028F0428A());
			if (func_173(iVar0) && (!func_172(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_173(Global_113386.f_2363.f_539.f_4321))
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

bool func_172(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_173(int iParam0)
{
	return iParam0 < 3;
}

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_175(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_175(int iParam0)
{
	if (func_173(iParam0))
	{
		return func_176(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_176(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_177(struct<3> Param0, int iParam3, int iParam4)
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
				if (func_178(iVar0) || iParam4 == 0)
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

bool func_178(int iParam0)
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

int func_179(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

void func_180()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0xB4C854DD86E40FDA(unk_0x1307D54181723A6E()) > 1)
	{
	}
	else
	{
		Global_32106 = 0;
		func_147(0);
		if (unk_0x4131052989DE1278() && !iLocal_492)
		{
			unk_0xBD1E8007D7DFA747(0);
		}
		func_67(&uLocal_70);
		if (func_179(63))
		{
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (func_179(126))
				{
					if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 19.3f, 528.24f, 169.63f, 1) > 50f)
					{
						func_61(139, 1, 0);
					}
				}
				else if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), -11.15f, -1425.56f, 29.67f, 1) > 50f)
				{
					func_61(138, 1, 0);
				}
			}
		}
		func_40(1);
		func_42(&uLocal_418, 0);
		func_42(&iLocal_423, 0);
		if (unk_0x6B8F21F773404988(uLocal_79))
		{
			unk_0x0F53BC871BA89C94(uLocal_79, 0);
		}
		unk_0xE6239CCB98B8AB66();
		if (unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_ball"), 0))
		{
			unk_0xE002DFD518BF86A7(unk_0xE2D3D51028F0428A(), joaat("weapon_ball"));
		}
		if (func_125(unk_0xE2D3D51028F0428A()) && !func_172(0))
		{
			unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 1);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_69))
		{
			if (func_188())
			{
				func_187(&iLocal_69);
			}
			else
			{
				if (!unk_0x55B23FE400FCEA6B(iLocal_69, 0) && func_125(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x611AD675982BEBCC(iLocal_69))
					{
						unk_0x6221A52631154EF7(iLocal_69);
					}
					if (unk_0xCE2C78E9FC0B01E3(uLocal_108) || unk_0xD5C6B5E3B93A5EDC(iLocal_69, 0))
					{
						if (func_125(iLocal_80))
						{
							bVar0 = false;
							while (!bVar0)
							{
								unk_0x4EDE34FBADD967A6(0);
								if (!func_186() || func_184(iLocal_80, 1093140480, 1, 1056964608, 0, 1, 0))
								{
									bVar0 = true;
								}
							}
							if (func_186())
							{
								if (!unk_0x2ABE742A1B0BF1A6(iLocal_80, iLocal_118))
								{
									unk_0x2476BE9932670CAD(iLocal_80, iLocal_118, 0, 0);
								}
								unk_0x8FB472886552D737(sLocal_477);
								while (!unk_0x6F940C2636C076AD(sLocal_477))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
							}
							if (func_186())
							{
								uLocal_108 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
								unk_0x961EE84414CA42F8(uLocal_108, iLocal_80, unk_0x7F0054A115D66F44(iLocal_80, "seat_pside_f"));
								unk_0x51BB443B279E4104(iLocal_69);
								unk_0x950B26F4C891073F(iLocal_69, uLocal_108, sLocal_477, "get_out", 1000f, -8f, 10, 0, 1148846080, 0);
								unk_0xEB087B19F63AB053(iLocal_69, 0, 0);
								bVar1 = false;
								while (!bVar1)
								{
									unk_0x4EDE34FBADD967A6(0);
									if (!func_186() || (unk_0xCE2C78E9FC0B01E3(uLocal_108) && unk_0x54DE1614490C2A83(uLocal_108) > 0.99f))
									{
										bVar1 = true;
									}
								}
								unk_0x4EDE34FBADD967A6(0);
								if (func_186() && !unk_0x2ABE742A1B0BF1A6(iLocal_80, iLocal_118))
								{
									unk_0xCAA02C32EC0C2462(iLocal_80, iLocal_118, 0);
								}
							}
						}
						else if (func_183() == 1)
						{
							if (iLocal_51 == 2 || iLocal_51 == 15)
							{
								unk_0x51BB443B279E4104(iLocal_69);
								func_124(iLocal_69, unk_0xCACAD935C0BEE14F(unk_0xE2D3D51028F0428A(), 1.75f, 0f, 0f), unk_0x82FE2343F8BDFF0B(iLocal_69), 1, 1);
								unk_0xEB087B19F63AB053(iLocal_69, 0, 0);
							}
						}
					}
					if (func_125(iLocal_69))
					{
						unk_0xABC2CA6F28903308(iLocal_69, 1);
						unk_0x7734082B0EDB0BE0(iLocal_69, unk_0xE2D3D51028F0428A(), 100f, -1, 0, 0);
					}
				}
				func_182(&iLocal_69, 1, 0, 1);
			}
		}
		func_56();
		func_55(&iLocal_80);
		func_98(0);
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@move");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@amb@world_dog_barking@enter");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@amb@world_dog_barking@base");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@amb@world_dog_barking@idle_a");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@amb@world_dog_barking@exit");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@in_vehicle@4x4");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@in_vehicle@low_car");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@in_vehicle@std_car");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@in_vehicle@van");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@amb@world_dog_sitting@enter");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@amb@world_dog_sitting@idle_a");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@amb@world_dog_sitting@exit");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@tricks@");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@amb@sleep_in_kennel@");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@indication@");
		unk_0xAFC1FBF3F6AE7B9A("misschop_vehicleenter_exit");
		unk_0xAFC1FBF3F6AE7B9A("creatures@rottweiler@melee@streamed_taunts@");
		func_181(&uLocal_172, 1);
		func_181(&uLocal_172, 3);
		func_164();
		unk_0x4B248030F70A5D8B(0);
		if (iLocal_87 > -1)
		{
			unk_0xB251DDFA99084C56(iLocal_87);
		}
		if (iLocal_88 > -1)
		{
			unk_0xB251DDFA99084C56(iLocal_88);
		}
		if (iLocal_72 == 1)
		{
			unk_0x8813F60F6F44C9E3(iLocal_71);
		}
		unk_0xF889BDFCC181BA9F(uLocal_490);
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_181(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_182(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0xF68107C40359970C(*uParam0))
		{
			unk_0x006574E87E6F1942(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xCA2872F050840231(*uParam0);
			}
			unk_0xABC2CA6F28903308(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x50274A7EACA3133A(*uParam0, 0);
			}
		}
		unk_0xB3822DB3D538C8F3(uParam0);
	}
}

int func_183()
{
	func_171();
	return Global_113386.f_2363.f_539.f_4321;
}

int func_184(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_185(uParam0);
	if ((unk_0x320D1840B6DAA1CC() - Global_29) > 500)
	{
		unk_0xD28E3800883DED83(uParam0, iParam1, iParam2, iParam4);
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

void func_185(int iParam0)
{
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
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

int func_186()
{
	if ((func_125(unk_0xE2D3D51028F0428A()) && func_125(iLocal_80)) && func_125(iLocal_69))
	{
		return 1;
	}
	return 0;
}

void func_187(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(*uParam0, 0))
		{
			unk_0x006574E87E6F1942(*uParam0, 0, 1);
		}
		if (!unk_0xA6A089369417736E(*uParam0))
		{
			unk_0x2D58A6131679D82C(*uParam0, 1, 0);
		}
		unk_0x05CB75C0837196F9(uParam0);
	}
}

int func_188()
{
	if (unk_0x04458B4E5D9E466A() && func_125(iLocal_69))
	{
		if (unk_0xCE2C78E9FC0B01E3(uLocal_108) || unk_0xD5C6B5E3B93A5EDC(iLocal_69, 0))
		{
			return 1;
		}
	}
	if (Global_32107 == 1)
	{
		return 1;
	}
	if (Global_32108 == 1)
	{
		Global_32108 = 0;
		return 1;
	}
	if (func_125(iLocal_69))
	{
		if (iLocal_51 == 11 && unk_0x4D21C9FB671ED18F(iLocal_69))
		{
			return 1;
		}
		if (func_189(unk_0x6B62510F212526DC(iLocal_69, 0), 1f, 1120403456))
		{
			return 0;
		}
	}
	if (!func_167(0))
	{
		return 0;
	}
	if (func_172(6) || func_172(2))
	{
		return 0;
	}
	return 1;
}

int func_189(struct<3> Param0, float fParam3, int iParam4)
{
	if (unk_0x0318E2EE6FB4563F(Param0, fParam3))
	{
		if (!unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Param0, iParam4, iParam4, iParam4, 0, 0, 0))
		{
			return 0;
		}
		else if (unk_0xA829C9A2767AC8EF())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

