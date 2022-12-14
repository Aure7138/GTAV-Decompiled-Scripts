#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
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
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	bool bLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	struct<3> Local_97 = { 0, 0, 0 } ;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	struct<3> Local_104 = { 0, 0, 0 } ;
	float fLocal_107 = 0f;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	bool bLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	struct<6> Local_128 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_134 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	bool bLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	char[] cLocal_178[8] = 0;
	char* sLocal_179 = NULL;
	char* sLocal_180 = NULL;
	char* sLocal_181 = NULL;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	float fLocal_184 = 0f;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	struct<3> Local_190 = { 0, 0, 0 } ;
	var uLocal_193 = 0;
	int iLocal_194 = 0;
	var uLocal_195 = 16;
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
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	uLocal_55 = unk_0x7B826893B2E27385();
	uLocal_56 = unk_0x19F6152D9806BBF8();
	Local_70 = { -3092.82f, 749.8f, 21.48f };
	Local_73 = { 181.8977f, 4415.152f, 73.463f };
	Local_76 = { 2743.461f, 4385.51f, 47.7521f };
	Local_79 = { -382.1346f, 2817.971f, 44.0671f };
	Local_97 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_128, "", 24);
	Local_63 = { ScriptParam_0.f_1[0 /*3*/] };
	func_277();
	if (unk_0x4B34601C5C56F3EE(11))
	{
		if (!unk_0xF68107C40359970C(iLocal_85))
		{
			if (unk_0x611AD675982BEBCC(iLocal_85))
			{
				unk_0x6221A52631154EF7(iLocal_85);
			}
		}
		func_255();
	}
	if (func_226(Local_63, 13, bLocal_82, 0, 0))
	{
		func_223(-1);
	}
	else
	{
		unk_0xAFBDF6A5E54114C1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC92F9F18E020B461() || iLocal_111)
		{
			if (!func_222())
			{
				if (func_221())
				{
					func_255();
				}
			}
			unk_0x6D3F703013ED87D3("RE_HL", 0);
			switch (iLocal_57)
			{
				case 0:
					if (func_209())
					{
						func_255();
					}
					if (!iLocal_62)
					{
						func_208();
					}
					else
					{
						func_207();
					}
					if (bLocal_61)
					{
						iLocal_143 = 1;
						iLocal_57 = 1;
					}
					break;
				
				case 1:
					if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
					{
						switch (iLocal_58)
						{
							case 0:
								if ((func_206() && iLocal_59 != 8) && iLocal_59 != 10)
								{
									if (!func_222())
									{
										func_197(1);
									}
									iLocal_58 = 1;
								}
								switch (iLocal_59)
								{
									case 0:
										func_190();
										break;
									
									case 1:
										func_188();
										break;
									
									case 2:
										if (func_187())
										{
										}
										iLocal_158 = unk_0x320D1840B6DAA1CC();
										if (iLocal_140 < 1 && !iLocal_141)
										{
											func_186();
										}
										if (iLocal_60 == 1)
										{
											func_185();
										}
										else if (iLocal_60 == 2)
										{
											func_184();
										}
										else if (iLocal_60 == 3)
										{
											func_183();
										}
										else if (iLocal_60 == 5)
										{
											func_180();
										}
										break;
									
									case 3:
										func_177();
										break;
									
									case 4:
										if (iLocal_60 == 1)
										{
											func_160();
											func_159();
										}
										else if (iLocal_60 == 3)
										{
											func_154();
											func_153();
										}
										else if (iLocal_60 == 5)
										{
											func_154();
											func_144();
										}
										if (!bLocal_114)
										{
											func_140();
											func_139();
											func_136();
											func_135();
											func_132();
											func_130();
											func_129();
											func_128();
										}
										func_120();
										break;
									
									case 6:
										func_68();
										if (iLocal_60 == 3)
										{
											func_153();
										}
										break;
									
									case 7:
										func_67();
										if (iLocal_60 == 3)
										{
											func_153();
										}
										break;
									
									case 8:
										if (iLocal_60 == 3)
										{
											func_63();
											func_153();
										}
										break;
									
									case 9:
										if (!unk_0xF68107C40359970C(iLocal_85))
										{
											if (unk_0x8F41785F110B0DA0(iLocal_85, Local_93, 200f, 200f, 200f, 0, 1, 0))
											{
												unk_0x7D1424753688EE7A(iLocal_85, Local_93, 1f, -1, 0.25f, 0, 1193033728);
											}
											else
											{
												unk_0xD86A0BC9CC0A625A(iLocal_85, 1193033728, 0);
											}
											unk_0xABC2CA6F28903308(iLocal_85, 1);
											unk_0x4EDE34FBADD967A6(5000);
										}
										func_59();
										break;
									
									case 10:
										break;
								}
								if ((func_58() && !func_57()) && iLocal_59 != 10)
								{
									if (!unk_0xF68107C40359970C(iLocal_85))
									{
										if (unk_0x8F41785F110B0DA0(iLocal_85, Local_97, 5f, 5f, 5f, 0, 1, 0))
										{
											func_56(0);
											unk_0x4EDE34FBADD967A6(0);
											func_54();
											iLocal_59 = 10;
										}
									}
								}
								if (func_53())
								{
									if (unk_0xE5965CDF24F93A9F(iLocal_85))
									{
										unk_0x05CB75C0837196F9(&iLocal_85);
									}
									func_24();
								}
								break;
							
							case 1:
								func_54();
								unk_0x4EDE34FBADD967A6(0);
								if (iLocal_60 == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH1_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_60 == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_60 == 3)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_AGG", 4, 0, 0, 0);
									if (!unk_0xF68107C40359970C(iLocal_86))
									{
										unk_0x03A927199A2DFE46(iLocal_86);
										unk_0x7734082B0EDB0BE0(iLocal_86, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
										unk_0xABC2CA6F28903308(iLocal_86, 1);
									}
								}
								else if (iLocal_60 == 5)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!unk_0xF68107C40359970C(iLocal_85))
								{
									unk_0x03A927199A2DFE46(iLocal_85);
									unk_0x7734082B0EDB0BE0(iLocal_85, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
									unk_0xABC2CA6F28903308(iLocal_85, 1);
									func_59();
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_255();
		}
		if (iLocal_59 > 2)
		{
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0xE5965CDF24F93A9F(iLocal_85))
				{
					if (!unk_0xF68107C40359970C(iLocal_85))
					{
						if (!unk_0x77A43AFA9AAEC041(iLocal_85, unk_0xE2D3D51028F0428A(), 100f, 100f, 100f, 0, 1, 0))
						{
							func_59();
						}
					}
				}
			}
		}
		if (iLocal_59 > 0 && iLocal_59 < 8)
		{
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0xF68107C40359970C(iLocal_85))
				{
					if (!func_222())
					{
						func_197(1);
					}
					func_59();
				}
				else if (!unk_0x32DCDA1B2F8A0694(iLocal_85))
				{
					if (unk_0x0747E45CFF1F74AA(iLocal_85, unk_0xE2D3D51028F0428A(), 0))
					{
						unk_0x03A927199A2DFE46(iLocal_85);
						unk_0x7734082B0EDB0BE0(iLocal_85, unk_0xE2D3D51028F0428A(), 250f, -1, 0, 0);
						func_59();
					}
				}
			}
		}
	}
}

bool func_1(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_2(sParam2, iParam3, 0);
}

int func_2(char* sParam0, int iParam1, bool bParam2)
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
					func_22();
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
		if (func_21(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_20();
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
				func_12();
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
				if (func_11())
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
			if (func_10())
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
			func_9();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_8();
		func_3();
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
		func_22();
	}
	return 0;
}

void func_3()
{
	if (!func_4())
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

int func_4()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_7())
	{
		return 0;
	}
	if (func_5(unk_0x9E2D6C50374FCFA9()))
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

bool func_5(int iParam0)
{
	return func_6(iParam0, 20);
}

var func_6(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_7()
{
	return -1;
}

void func_8()
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

void func_9()
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

int func_10()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_11()
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

void func_12()
{
	if (func_19(14))
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
		Global_20266 = func_13();
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

int func_13()
{
	func_14();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_14()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_17(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_16(unk_0xE2D3D51028F0428A());
			if (func_15(iVar0) && (!func_19(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_15(Global_113386.f_2363.f_539.f_4321))
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

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return func_18(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_18(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_19(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_20()
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

bool func_21(int iParam0, int iParam1)
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

void func_22()
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

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_24()
{
	while (!func_52())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_48(func_13(), 4, 5);
	func_28(13, bLocal_82);
	func_25();
	func_255();
}

void func_25()
{
	func_26();
}

int func_26()
{
	if (func_27(0))
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

int func_27(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_28(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_46();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_45(iParam0))
	{
		func_44(iParam0, bParam1);
		if (!func_43(51))
		{
			func_39("RE_REWARD", 1, 0, 4000, 10000, func_42(), 0, 138, 0);
			func_38(51);
		}
		if (func_37(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_36(iParam0, bParam1) != 322)
		{
			func_30(func_36(iParam0, bParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_29(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_29(7);
			}
			else
			{
				func_29(1);
			}
		}
	}
}

void func_29(int iParam0)
{
	Global_113372 = iParam0;
}

void func_30(int iParam0, var uParam1, var uParam2)
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
		func_34((891 + iParam0), 1, -1);
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
		func_31();
	}
}

void func_31()
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
			if (func_32() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_26();
				}
			}
		}
	}
}

int func_32()
{
	return Global_31959;
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

void func_34(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_35();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

int func_35()
{
	return Global_1574918;
}

int func_36(int iParam0, int iParam1)
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

int func_37(int iParam0)
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

void func_38(int iParam0)
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

void func_39(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_40(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_40(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_41();
	}
}

void func_41()
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

int func_42()
{
	func_14();
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

int func_43(int iParam0)
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

void func_44(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

int func_45(int iParam0)
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

int func_46()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x05CBA41180F5D521(), 64);
	uVar16 = func_47(Var0);
	return uVar16;
}

int func_47(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_48(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 13122;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 13122)
			{
				iVar0 = func_51(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_49(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_49(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_50(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_35();
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

int func_51(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2826809[iParam0 /*3*/][func_50(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_52()
{
	return 1;
}

int func_53()
{
	if (Global_32198)
	{
		func_29(4);
		return 1;
	}
	return 0;
}

void func_54()
{
	Global_20471 = 0;
	func_55();
}

void func_55()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
	}
}

void func_56(int iParam0)
{
	Global_22616 = iParam0;
}

int func_57()
{
	if (Global_113386.f_24995.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return Global_32197;
}

void func_59()
{
	func_61();
	while (func_60())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_255();
}

int func_60()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_61()
{
	Global_20471 = 0;
	func_62();
}

void func_62()
{
	if (unk_0x2E5F8A288A954523())
	{
		unk_0x82B0661A78CC39CF();
		Global_22616 = 0;
		unk_0xD681CC2BC1084DB6(1);
		Global_21605 = 6;
		return;
	}
}

void func_63()
{
	struct<6> Var0;
	
	if (!unk_0xF68107C40359970C(iLocal_86) && !unk_0xF68107C40359970C(iLocal_85))
	{
		if (!unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_86, 25f, 25f, 25f, 0, 1, 0) && !unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_85, 40f, 40f, 40f, 0, 1, 0))
		{
			unk_0x03A927199A2DFE46(iLocal_86);
			unk_0x7D1424753688EE7A(iLocal_86, Local_93, 1f, -1, 0.25f, 0, 1193033728);
			func_24();
		}
	}
	if (!unk_0xF68107C40359970C(iLocal_86))
	{
		if (unk_0x0747E45CFF1F74AA(iLocal_86, unk_0xE2D3D51028F0428A(), 1))
		{
			if (func_60())
			{
				Var0 = { func_66() };
				if ((unk_0x3C57C2F07FEE34D2(&Var0, "REHH3_JB_2") || unk_0x3C57C2F07FEE34D2(&Var0, "REHH3_JB_4")) || unk_0x3C57C2F07FEE34D2(&Var0, "REHH3_JB_6"))
				{
					func_54();
				}
			}
		}
		if (unk_0xC9D9444186B5A374() > 5000)
		{
			if (unk_0xCED7266BAB0BDC20(iLocal_86, unk_0xE2D3D51028F0428A()))
			{
				iLocal_159 = 4;
			}
		}
	}
	if (!iLocal_113)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_85))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_85, unk_0xE2D3D51028F0428A(), 1))
			{
				if (!unk_0xF68107C40359970C(iLocal_86))
				{
					func_54();
					unk_0x4EDE34FBADD967A6(0);
					func_1(&uLocal_195, cLocal_178, "REHH3_JB2", 4, 0, 0, 0);
					iLocal_113 = 1;
				}
			}
		}
	}
	if (!unk_0xF68107C40359970C(iLocal_85))
	{
		if (unk_0x32DCDA1B2F8A0694(iLocal_85))
		{
			unk_0xCA2872F050840231(iLocal_85);
		}
		if (unk_0xF68107C40359970C(iLocal_86) && unk_0x8F41785F110B0DA0(iLocal_85, unk_0x6B62510F212526DC(iLocal_86, 0), 1f, 1f, 5f, 0, 1, 0))
		{
			iLocal_159 = 5;
		}
	}
	else if (!unk_0xF68107C40359970C(iLocal_86))
	{
		unk_0xC1A74225341AA9FB(iLocal_86, unk_0xE2D3D51028F0428A(), 0, 16);
		func_59();
	}
	else
	{
		func_59();
	}
	if (!iLocal_168)
	{
		if (unk_0xF68107C40359970C(iLocal_86))
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_122))
			{
				unk_0xFFD8EB5462B07B59(&uLocal_122);
			}
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				iLocal_159 = 3;
			}
		}
	}
	if (!iLocal_170)
	{
		if (!unk_0xF68107C40359970C(iLocal_85) && !unk_0xF68107C40359970C(iLocal_86))
		{
			if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6))
			{
				if (unk_0x55E78B6AAFEF4EB8(unk_0x9E2D6C50374FCFA9()))
				{
					iLocal_159 = 2;
				}
			}
		}
		if (unk_0xF68107C40359970C(iLocal_86))
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_122))
			{
				unk_0xFFD8EB5462B07B59(&uLocal_122);
			}
			func_65(&uLocal_195, 4);
			if (unk_0x0747E45CFF1F74AA(iLocal_86, unk_0xE2D3D51028F0428A(), 1) && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6))
			{
				iLocal_159 = 2;
			}
		}
		else if (!unk_0x55B23FE400FCEA6B(iLocal_85, 0))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_85, iLocal_86, 1))
			{
				iLocal_159 = 2;
			}
		}
	}
	switch (iLocal_159)
	{
		case 0:
			if (!iLocal_168)
			{
				if (!unk_0xF68107C40359970C(iLocal_85) && !unk_0xF68107C40359970C(iLocal_86))
				{
					if (!unk_0xD5C6B5E3B93A5EDC(iLocal_85, 0) && unk_0x7A6B8C262362C722(iLocal_86))
					{
						if (!iLocal_169)
						{
							unk_0xA888F8CC04F25CC8(&uLocal_89);
							unk_0xF30F15F203736DE4(0, iLocal_86, -1, 2052, 2);
							unk_0x49D97B076E3590AC(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0x529D306014D3C29A(0, iLocal_86, -1);
							unk_0xC963A45B50851768(uLocal_89);
							unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
							unk_0x7461D7C5BA953BC7(&uLocal_89);
							iLocal_169 = 1;
						}
					}
				}
			}
			else
			{
				func_24();
			}
			break;
		
		case 1:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				unk_0xAB7639D658BBCCEE(iLocal_85, 0, 0);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_159 = 0;
			}
			break;
		
		case 2:
			if (!iLocal_170)
			{
				if (!unk_0xF68107C40359970C(iLocal_85))
				{
					func_54();
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 4))
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!unk_0xF68107C40359970C(iLocal_85))
					{
						unk_0x03A927199A2DFE46(iLocal_85);
						unk_0x7734082B0EDB0BE0(iLocal_85, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
						if (!unk_0xF68107C40359970C(iLocal_86))
						{
							unk_0x35083F820751423C(iLocal_86, 6, 0, 0);
							unk_0x7734082B0EDB0BE0(iLocal_86, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
						}
					}
					func_24();
					iLocal_170 = 1;
					iLocal_159 = 0;
				}
			}
			break;
		
		case 3:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				func_54();
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0xF68107C40359970C(iLocal_85))
				{
					unk_0x35083F820751423C(iLocal_85, 7, 0, 0);
				}
				func_1(&uLocal_195, cLocal_178, "REHH3_BAS", 4, 0, 0, 0);
				if (!unk_0xF68107C40359970C(iLocal_85) && unk_0xE5965CDF24F93A9F(iLocal_86))
				{
					unk_0x03A927199A2DFE46(iLocal_85);
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xC89EA639A6F338A6(0);
					unk_0x49D97B076E3590AC(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0xF30F15F203736DE4(0, iLocal_86, -1, 2052, 4);
					unk_0x7D1424753688EE7A(0, unk_0x6B62510F212526DC(iLocal_86, 0), 1f, -1, 3f, 0, 1193033728);
					unk_0x529D306014D3C29A(0, iLocal_86, -1);
					unk_0x49D97B076E3590AC(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0xD86A0BC9CC0A625A(0, 1193033728, 0);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
					unk_0xABC2CA6F28903308(iLocal_85, 1);
					unk_0x50274A7EACA3133A(iLocal_85, 0);
					unk_0x4EDE34FBADD967A6(10000);
					iLocal_168 = 1;
					iLocal_159 = 0;
				}
			}
			break;
		
		case 4:
			if (func_64())
			{
				if (!unk_0xF68107C40359970C(iLocal_85))
				{
					if (unk_0x77A43AFA9AAEC041(iLocal_85, unk_0xE2D3D51028F0428A(), 15f, 15f, 15f, 0, 1, 0))
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH3_NOO", 4, 0, 0, 0))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_159 = 0;
						}
					}
				}
			}
			else if (!unk_0xF68107C40359970C(iLocal_86))
			{
				if (func_1(&uLocal_195, cLocal_178, "REHH3_FHT", 4, 0, 0, 0))
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_159 = 0;
				}
			}
			break;
		
		case 5:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				func_61();
				unk_0x4EDE34FBADD967A6(0);
				if (func_1(&uLocal_195, cLocal_178, "REHH3_ATT", 4, 0, 0, 0))
				{
					iLocal_159 = 0;
				}
			}
			break;
	}
}

int func_64()
{
	if (BitTest(unk_0x5853B15F78E1A265(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_65(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

struct<6> func_66()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar6 = unk_0xBEE29398902B0435();
		iVar6 = (iVar6 + Global_22615);
		if (iVar6 > -1)
		{
			return Global_20473[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_67()
{
	if (iLocal_60 == 3)
	{
		if (!unk_0xF68107C40359970C(iLocal_85))
		{
			if (unk_0x611AD675982BEBCC(iLocal_85))
			{
				unk_0x6221A52631154EF7(iLocal_85);
			}
			iLocal_59 = 8;
		}
	}
}

void func_68()
{
	if (unk_0x12DD4A0B247D9B4D(uLocal_83))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_83);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_84))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_84);
	}
	if (iLocal_60 == 1)
	{
		unk_0xF889BDFCC181BA9F(uLocal_177);
		unk_0x0AF8D3A06BB92903("TIMER_SCENE");
		if (!iLocal_124)
		{
			func_54();
			unk_0x4EDE34FBADD967A6(0);
			func_1(&uLocal_195, cLocal_178, "REHH1_TKA", 4, 0, 0, 0);
			unk_0xDBFEE73A55300843(-1055.515f, -2533.221f, 19.3049f, -1, 3000, 2000, 0);
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				func_93(func_13(), 1, 100, 0, 1);
				func_92(198, 0);
				unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iLocal_85, 8000, 2052, 4);
				unk_0xA888F8CC04F25CC8(&uLocal_89);
				unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 10000, 2052, 2);
				unk_0xAB7639D658BBCCEE(0, 3000, 4194369);
				unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 1000);
				unk_0x7D1424753688EE7A(0, -1055.515f, -2533.221f, 19.3049f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x13C3030981EA7C3B(0, -1046.832f, -2518.146f, 12.9447f, 2f, -1, 1193033728, 1056964608);
				unk_0xC9FEFB406C44F60B(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0xC963A45B50851768(uLocal_89);
				unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
				unk_0x7461D7C5BA953BC7(&uLocal_89);
				unk_0xABC2CA6F28903308(iLocal_85, 1);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_124 = 1;
			}
		}
		if (unk_0xC9D9444186B5A374() < 7000)
		{
			unk_0x7653D561C9574763(0, 75, 1);
			unk_0x7653D561C9574763(0, 80, 1);
			unk_0x7653D561C9574763(0, 79, 1);
			unk_0x7653D561C9574763(0, 286, 1);
			unk_0x7653D561C9574763(0, 287, 1);
			unk_0x7653D561C9574763(0, 26, 1);
			unk_0x7653D561C9574763(0, 273, 1);
			unk_0x7653D561C9574763(0, 4, 1);
			unk_0x7653D561C9574763(0, 270, 1);
			unk_0x7653D561C9574763(0, 5, 1);
			unk_0x7653D561C9574763(0, 1, 1);
			unk_0x7653D561C9574763(0, 271, 1);
			unk_0x7653D561C9574763(0, 6, 1);
			unk_0x7653D561C9574763(0, 2, 1);
			unk_0x7653D561C9574763(0, 272, 1);
			unk_0x7653D561C9574763(0, 3, 1);
		}
		if (unk_0xC9D9444186B5A374() > 3000 && unk_0xC9D9444186B5A374() < 7000)
		{
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
		}
		else if (unk_0xC9D9444186B5A374() > 7000)
		{
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
			unk_0xBD1E8007D7DFA747(0);
			if (unk_0xC9D9444186B5A374() > 8500 && !iLocal_126)
			{
				if ((unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()) && unk_0x2B1D7439C26D5642() == 4) || (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0x5E29B0CF10CECB34() == 4))
				{
					unk_0x9DCF157443EA30D6("CamPushInNeutral", 0, 0);
					unk_0x91DFC8F68F6D9B05(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_126 = 1;
				}
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_85) || unk_0xC9D9444186B5A374() > 15000)
		{
			if (unk_0x8F41785F110B0DA0(iLocal_85, -1046.832f, -2518.146f, 12.9447f, 20f, 20f, 5f, 0, 1, 0) || unk_0xC9D9444186B5A374() > 15000)
			{
				unk_0x05CB75C0837196F9(&iLocal_85);
				func_24();
			}
		}
	}
	else if (iLocal_60 == 2)
	{
		if (!iLocal_124)
		{
			func_54();
			unk_0x4EDE34FBADD967A6(0);
			func_1(&uLocal_195, cLocal_178, "REHH2_TKB", 4, 0, 0, 0);
			iLocal_124 = 1;
		}
		if (!unk_0xF68107C40359970C(iLocal_85))
		{
			if (!unk_0x32DCDA1B2F8A0694(iLocal_85))
			{
				unk_0xA888F8CC04F25CC8(&uLocal_89);
				unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 10000, 2052, 2);
				unk_0x19C58BA8A663B64B(0, 4500);
				unk_0xAB7639D658BBCCEE(0, 0, 4194369);
				unk_0x7D1424753688EE7A(0, 3323.43f, 5166.832f, 17.406f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x7D1424753688EE7A(0, 3320.684f, 5186.017f, 17.4016f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x7D1424753688EE7A(0, 3303.612f, 5185.269f, 18.7155f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0xC9FEFB406C44F60B(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0xC963A45B50851768(uLocal_89);
				unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
				unk_0x7461D7C5BA953BC7(&uLocal_89);
				unk_0xABC2CA6F28903308(iLocal_85, 1);
				unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iLocal_85, 5000, 2052, 2);
				unk_0x6221A52631154EF7(iLocal_85);
				unk_0x4EDE34FBADD967A6(1000);
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
				if (func_13() == 0)
				{
					func_72(9, 1, 0);
				}
				else if (func_13() == 1)
				{
					func_72(9, 1, 1);
				}
				else if (func_13() == 2)
				{
					func_72(9, 1, 2);
				}
				unk_0x4EDE34FBADD967A6(8000);
				func_24();
			}
		}
	}
	else if (iLocal_60 == 3)
	{
		if (unk_0x83666F9FB8FEBD4B() > 1000)
		{
			if (func_1(&uLocal_195, cLocal_178, "REHH3_JB", 4, 0, 0, 0))
			{
				if (!unk_0xF68107C40359970C(iLocal_86))
				{
					unk_0x059473086913178C(iLocal_86, 1);
					if (!unk_0x12DD4A0B247D9B4D(uLocal_121))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_121);
					}
					if (!unk_0x12DD4A0B247D9B4D(uLocal_122))
					{
						uLocal_122 = func_69(iLocal_86, 1, 145);
					}
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), -1, 17f, 1f, 1073741824, 0);
					unk_0xC1A74225341AA9FB(0, unk_0xE2D3D51028F0428A(), 0, 16);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_86, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
					unk_0xABC2CA6F28903308(iLocal_86, 1);
					unk_0x50274A7EACA3133A(iLocal_86, 0);
					unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
					unk_0xD642E010A287ADFD("rghBoyfriend", &iLocal_194);
					unk_0xFF4BEB6CFF55A013(iLocal_86, iLocal_194);
					unk_0x9972EFADA7A2A47D(4, joaat("COP"), iLocal_194);
					unk_0x9972EFADA7A2A47D(1, -183807561, iLocal_194);
					unk_0x9972EFADA7A2A47D(1, iLocal_194, -183807561);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_59 = 7;
				}
			}
		}
	}
	else if (iLocal_60 == 5)
	{
		if (!iLocal_124)
		{
			func_54();
			unk_0x4EDE34FBADD967A6(0);
			func_1(&uLocal_195, cLocal_178, "REHH5_THX", 4, 0, 0, 0);
			iLocal_124 = 1;
		}
		if (!unk_0xF68107C40359970C(iLocal_85))
		{
			unk_0xA888F8CC04F25CC8(&uLocal_89);
			unk_0xAB7639D658BBCCEE(0, 0, 4194369);
			unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 3000, 2052, 2);
			unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 3000);
			unk_0x7D1424753688EE7A(0, -346.029f, 632.2272f, 171.2525f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x7D1424753688EE7A(0, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x7D1424753688EE7A(0, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x7D1424753688EE7A(0, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x7D1424753688EE7A(0, -350.163f, 605.0463f, 170.7292f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x7D1424753688EE7A(0, -333.177f, 594.991f, 170.7553f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0xC9FEFB406C44F60B(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			unk_0x19C58BA8A663B64B(0, -1);
			unk_0xC963A45B50851768(uLocal_89);
			unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
			unk_0x7461D7C5BA953BC7(&uLocal_89);
			unk_0xABC2CA6F28903308(iLocal_85, 1);
			unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iLocal_85, 5000, 2052, 2);
			unk_0x6221A52631154EF7(iLocal_85);
		}
		unk_0x4EDE34FBADD967A6(2000);
		unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
		unk_0x4EDE34FBADD967A6(3000);
		func_24();
	}
}

var func_69(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_70(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(uVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_70(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_71(unk_0x9315DBF7D972F07A(), 1f, 1f));
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
		unk_0x293A9399E902A33B(uVar0, func_71(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_71(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_71(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_72(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_91();
	}
	if (func_90(iParam2) == 4)
	{
	}
	bVar0 = Global_113386.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x9315DBF7D972F07A())
		{
			if (!func_88(func_89(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_88(func_89(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_113386.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_87(iParam0, 0);
			func_82(func_89(iParam0), func_90(iParam2), 1);
			iVar1 = unk_0x5853B15F78E1A265(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0xCED9E32812D6C7C7(&(Global_2359296[func_81() /*5567*/].f_681.f_1273), iParam0);
					func_78(-60084924, 15, 0);
					break;
			}
			func_77(iVar1);
			func_76(iParam0, iVar1);
			Global_112380.f_15[iParam0] = unk_0x320D1840B6DAA1CC();
		}
	}
	else if (bVar0)
	{
		func_73(func_89(iParam0), func_90(iParam2));
	}
}

void func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_75(iParam0, iVar0, 0);
			func_74(iParam0, iVar0, 0);
		}
	}
}

void func_74(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_76(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_112380.f_4[iParam0] = (unk_0x320D1840B6DAA1CC() + iParam1);
	}
	else
	{
		Global_112380.f_4[iParam0] = (unk_0x320D1840B6DAA1CC() + unk_0x5853B15F78E1A265(1200000, 2100000));
	}
}

void func_77(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_112380.f_3 = (unk_0x320D1840B6DAA1CC() + iParam0);
	}
	else
	{
		Global_112380.f_3 = (unk_0x320D1840B6DAA1CC() + unk_0x5853B15F78E1A265(21600000, 25200000));
	}
}

void func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_80(iParam1, iParam2))
	{
		iVar0 = func_79();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_79()
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

int func_80(int iParam0, var uParam1)
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

int func_81()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_82(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8822 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		func_12();
		if (iParam1 == 4)
		{
			func_75(iParam0, 0, 1);
			func_75(iParam0, 1, 1);
			func_75(iParam0, 2, 1);
			func_74(iParam0, 0, 1);
			func_74(iParam0, 1, 1);
			func_74(iParam0, 2, 1);
		}
		else
		{
			if (func_86(iParam0, iParam1) == 1 && func_85(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_75(iParam0, iVar0, 1);
			func_74(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2815059.f_6768)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78319)
			{
				if (iParam1 != 4)
				{
					if (Global_20266 != iParam1)
					{
						Global_8795[iParam1 /*4*/] = { func_84(iParam0) };
						Global_8812[iParam1] = 1;
						Global_8817[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20266)
					{
					}
					else
					{
						Global_8746[1 /*6*/] = { func_84(iParam0) };
						Global_8746[1 /*6*/].f_5 = iParam1;
						func_83();
					}
				}
				else
				{
					Global_8746[1 /*6*/] = { func_84(iParam0) };
					Global_8746[1 /*6*/].f_5 = iParam1;
					func_83();
				}
			}
			else
			{
				Global_8746[1 /*6*/] = { func_84(iParam0) };
				Global_8746[1 /*6*/].f_5 = iParam1;
				func_83();
			}
		}
	}
}

void func_83()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xAEF70623D03F7B02(&(Global_1998[Global_8822 /*29*/].f_7)), 64);
	if (Global_8841 == 0)
	{
		unk_0x150D8F58B26E9F70("");
		StringCopy(&cVar16, unk_0xAEF70623D03F7B02(&(Global_8746[1 /*6*/])), 64);
		sVar32 = unk_0xAEF70623D03F7B02("CELL_253");
		unk_0x3B81B9627E7885CF(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x150D8F58B26E9F70("CELL_255");
		unk_0x26C23BE14F66F202(&(Global_8746[1 /*6*/]));
		unk_0x3B81B9627E7885CF(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xB0550BC91B0159D6(&Global_8136, false);
}

struct<4> func_84(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_3;
}

int func_85(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_12[iParam1];
}

void func_87(int iParam0, int iParam1)
{
	Global_113386.f_243[func_91() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_88(int iParam0, int iParam1)
{
	if (func_86(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

int func_91()
{
	int iVar0;
	
	iVar0 = func_13();
	switch (iVar0)
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
		
		default:
			switch (func_50(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

void func_92(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113386.f_8613[iParam0] = 1;
	Global_113386.f_8613.f_236[iParam0] = (unk_0x320D1840B6DAA1CC() + iParam1);
}

void func_93(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_119(iParam0) == 3)
	{
		return;
	}
	if (func_119(iParam0) == 4)
	{
		return;
	}
	func_94(func_119(iParam0), 1, iParam1, iParam2, 0);
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

int func_94(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_118();
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
					func_117(99, 1);
					func_116(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_116(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_116(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_102(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_100(5))
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
							func_116(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_116(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_116(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_100(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_116(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_116(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_116(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_116(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_116(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_116(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_116(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_116(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_116(joaat("sp2_money_spent_property"), iParam3);
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
									func_116(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_116(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_116(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_116(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_116(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_116(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_100(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_116(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_116(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_116(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_116(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_116(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_116(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_99(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_117(95, iParam3);
					break;
				
				case 1:
					func_117(97, iParam3);
					break;
				
				case 2:
					func_117(96, iParam3);
					break;
			}
			func_117(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_97(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_97(bVar1);
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
					func_116(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_116(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_116(joaat("sp2_total_cash_earned"), iParam3);
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
	func_96(iParam0);
	if (Global_43052 == 15)
	{
		func_95(0);
	}
	return 1;
}

void func_95(bool bParam0)
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

void func_96(int iParam0)
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

void func_97(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_34(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_34(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_34(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_34(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_49(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_49(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_49(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_49(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_49(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_49(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_81() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xB0550BC91B0159D6(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xB0550BC91B0159D6(&(Global_2359296[func_81() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x150D8F58B26E9F70("COUP_RED");
		unk_0x26C23BE14F66F202(func_98(bParam0));
		unk_0x3B81B9627E7885CF(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_98(bool bParam0)
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

void func_99(int iParam0)
{
	func_117(93, iParam0);
	func_117(29, iParam0);
	func_117(30, iParam0);
}

int func_100(int iParam0)
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
		return func_101(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_101(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_101(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_101(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x48352343BC5A41AE();
		iVar1 = func_51(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x48352343BC5A41AE();
		iVar3 = func_51(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x48352343BC5A41AE();
		iVar5 = func_51(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x48352343BC5A41AE();
		iVar7 = func_51(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x48352343BC5A41AE();
		iVar9 = func_51(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x48352343BC5A41AE();
		iVar11 = func_51(8277, -1, 0);
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
	return BitTest(Global_2359296[func_81() /*5567*/].f_681.f_10, iParam0);
}

bool func_101(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_102(bool bParam0)
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
	func_103(27, 1);
	return 1;
}

int func_103(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_104(iParam0, iParam1);
}

int func_104(int iParam0, int iParam1)
{
	if (func_19(14) && !func_115(iParam0))
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
	if (func_114(&Global_4541529))
	{
		if (func_112(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_105(&Global_4541529, iParam0))
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

int func_105(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_19(14) && !func_115(iParam1))
	{
		return 0;
	}
	if (func_112(uParam0, iParam1))
	{
		return 0;
	}
	if (func_111(uParam0) < 0f)
	{
		func_110(uParam0, 0);
	}
	func_108(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_106(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_106(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_19(14) && !func_115(iParam1))
	{
		return 0;
	}
	if (func_112(uParam0, iParam1))
	{
		return 0;
	}
	if (func_111(uParam0) < 0f)
	{
		func_110(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_107(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_107(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_108(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_109(uParam0, iVar0);
		iVar0++;
	}
	func_110(uParam0, (Global_4541528 - 0.5f));
}

void func_109(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_110(var uParam0, float fParam1)
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

float func_111(var uParam0)
{
	return uParam0->f_80;
}

bool func_112(var uParam0, int iParam1)
{
	return func_113(uParam0, iParam1) != -1;
}

int func_113(var uParam0, int iParam1)
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

bool func_114(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_115(int iParam0)
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

void func_116(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x61481F9FBB1C7EDD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x076A5661EF5ABEE4(iParam0, iVar0, 1);
}

void func_117(int iParam0, int iParam1)
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

void func_118()
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

int func_119(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

void func_120()
{
	if (!unk_0xF68107C40359970C(iLocal_85))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
		{
			if (!func_127())
			{
				if (unk_0x611AD675982BEBCC(iLocal_85))
				{
					unk_0x6221A52631154EF7(iLocal_85);
				}
				if (unk_0x174CED88B97C78D9(iLocal_85, joaat("script_task_go_to_entity")) != 1 && unk_0x174CED88B97C78D9(iLocal_85, joaat("script_task_go_to_entity")) != 0)
				{
					unk_0xC149E50FBB27DD70(iLocal_85, unk_0xE2D3D51028F0428A(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0xD5C6B5E3B93A5EDC(iLocal_85, 0))
				{
					unk_0xAB7639D658BBCCEE(iLocal_85, 0, 0);
				}
				if (!iLocal_142)
				{
					func_122(0);
					func_54();
					unk_0x4EDE34FBADD967A6(0);
					if (!func_60())
					{
						if (iLocal_60 == 1)
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH1_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH1_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_60 == 2)
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_60 == 3)
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_60 == 5)
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH2", 4, 0, 0, 0);
							}
						}
						iLocal_142 = 1;
					}
				}
			}
			else
			{
				iLocal_142 = 0;
				if (unk_0x174CED88B97C78D9(iLocal_85, joaat("script_task_go_to_entity")) == 1 && unk_0x174CED88B97C78D9(iLocal_85, joaat("script_task_go_to_entity")) == 0)
				{
					unk_0x03A927199A2DFE46(iLocal_85);
				}
			}
		}
		else if (!unk_0x611AD675982BEBCC(iLocal_85))
		{
			unk_0xF23E6F5690771F71(iLocal_85, func_121());
			unk_0x508EA490C0230199(iLocal_85, 1);
			unk_0x950D2D7EA1BFF54C(iLocal_85, 0);
		}
	}
}

var func_121()
{
	return unk_0xFD8E434495EC2F26(unk_0xB6BA8B8E3D0B41C6());
}

void func_122(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_127)
		{
			if (func_126(&uLocal_195, cLocal_178, &Local_134, &Local_128, 8, 0, 0))
			{
				iLocal_127 = 0;
			}
		}
	}
	else if ((!iLocal_127 && unk_0x2E5F8A288A954523()) && !func_124())
	{
		Local_134 = { func_123() };
		Local_128 = { func_66() };
		func_61();
		iLocal_127 = 1;
	}
}

struct<6> func_123()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

int func_124()
{
	if (((((((((((((((((((((((((((((((((((((((((((((func_125("REHH1_VEH") || func_125("REHH2_VEH")) || func_125("REHH3_VEH")) || func_125("REHH4_VEH")) || func_125("REHH5_VEH")) || func_125("REHH1_VEH2")) || func_125("REHH2_VEH2")) || func_125("REHH3_VEH2")) || func_125("REHH4_VEH2")) || func_125("REHH5_VEH2")) || func_125("REHH1_WLK")) || func_125("REHH2_WLK")) || func_125("REHH3_WLK")) || func_125("REHH4_WLK")) || func_125("REHH5_WLK")) || func_125("REHH1_SLR")) || func_125("REHH4_SLR")) || func_125("REHH1_SLW")) || func_125("REHH2_SLW")) || func_125("REHH3_SLW")) || func_125("REHH4_SLW")) || func_125("REHH5_SLW")) || func_125("REHH1_OUT")) || func_125("REHH2_GETOUT")) || func_125("REHH3_GETOUT")) || func_125("REHH5_GETOUT")) || func_125("REHH1_JACK")) || func_125("REHH2_JACK")) || func_125("REHH3_JACK")) || func_125("REHH5_JACK")) || func_125("REHH1_GUN")) || func_125("REHH2_SHOOT")) || func_125("REHH3_SHOOT")) || func_125("REHH5_SHOO")) || func_125("REHH1_1HOUR")) || func_125("REHH2_1HOUR")) || func_125("REHH1_HHOUR")) || func_125("REHH2_HHOUR")) || func_125("REHH1_CRASH")) || func_125("REHH1_WAY")) || func_125("REHH2_NEAR")) || func_125("REHH3_NEAR")) || func_125("REHH5_NEAR")) || func_125("REHH2_CULT")) || func_125("REHH3_CULT")) || func_125("REHH5_CULT"))
	{
		return 1;
	}
	return 0;
}

int func_125(char* sParam0)
{
	var uVar0;
	
	if (func_60())
	{
		MemCopy(&uVar0, {func_123()}, 4);
		if (unk_0x3C57C2F07FEE34D2(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_126(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 1;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_2(sParam2, iParam4, 0);
}

int func_127()
{
	if (iLocal_60 == 5)
	{
		if (unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A()))
		{
			return 0;
		}
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
		{
			if ((((!unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()) && !unk_0xB73D201873640749(unk_0xE2D3D51028F0428A())) && !unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A())) && !unk_0x2852E016E0AC134C(unk_0xE2D3D51028F0428A())) && !unk_0xF30A227F7990AE00(unk_0xE2D3D51028F0428A(), joaat("rhino")))
			{
				if (unk_0xADD893BD545BE5FC(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
	{
		if (unk_0x55A0C756C4A8220C(unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A()), 0))
		{
			if (((!unk_0x4262B4DCEADC2695(unk_0x15CAA6D7B11F1A7C(unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A()))) && !unk_0xD6F7D32A98E07F93(unk_0x15CAA6D7B11F1A7C(unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A())))) && !unk_0xF4AD75B2D964D8AB(unk_0x15CAA6D7B11F1A7C(unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A())))) && unk_0x15CAA6D7B11F1A7C(unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_128()
{
	if (unk_0xEEEC05469860B219(unk_0xE2D3D51028F0428A()))
	{
		if (!iLocal_150)
		{
			iLocal_152 = unk_0x320D1840B6DAA1CC();
			iLocal_150 = 1;
		}
		else
		{
			iLocal_154 = unk_0x320D1840B6DAA1CC();
		}
	}
	else
	{
		iLocal_154 = 0;
		iLocal_153 = 0;
		iLocal_150 = 0;
		iLocal_151 = 0;
	}
	if ((iLocal_154 - iLocal_152) > 3000 && (iLocal_154 - iLocal_153) > 6000)
	{
		if (!func_60())
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_SLR", 4, 0, 0, 0);
			}
			iLocal_153 = iLocal_154;
		}
	}
	if ((iLocal_154 - iLocal_152) > 50000 && !iLocal_151)
	{
		func_122(0);
		func_54();
		unk_0x4EDE34FBADD967A6(0);
		if (!func_60())
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_60 == 2)
			{
				func_1(&uLocal_195, cLocal_178, "REHH2_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_60 == 3)
			{
				if (!unk_0xF68107C40359970C(iLocal_85))
				{
					if (!unk_0xE7B380B27E19C446(iLocal_85))
					{
						unk_0xCA2872F050840231(iLocal_85);
					}
				}
				func_1(&uLocal_195, cLocal_178, "REHH3_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_60 == 5)
			{
				func_1(&uLocal_195, cLocal_178, "REHH5_SLW", 4, 0, 0, 0);
			}
			iLocal_151 = 1;
		}
	}
	if ((iLocal_154 - iLocal_152) > 60000 && iLocal_151)
	{
		if (!unk_0xF68107C40359970C(iLocal_85))
		{
			unk_0x059473086913178C(iLocal_85, 1);
			if (unk_0x611AD675982BEBCC(iLocal_85))
			{
				if (unk_0xD5C6B5E3B93A5EDC(iLocal_85, 0))
				{
					if (unk_0x8F41785F110B0DA0(iLocal_85, Local_93, 200f, 200f, 200f, 0, 1, 0))
					{
						unk_0x7D1424753688EE7A(iLocal_85, Local_93, 1f, -1, 0.25f, 0, 1193033728);
					}
					else
					{
						unk_0xD86A0BC9CC0A625A(iLocal_85, 1193033728, 0);
					}
					if (iLocal_60 == 1)
					{
						unk_0x7734082B0EDB0BE0(iLocal_85, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
					}
					unk_0xABC2CA6F28903308(iLocal_85, 1);
					unk_0x6221A52631154EF7(iLocal_85);
					func_59();
				}
			}
		}
	}
}

void func_129()
{
	if (!unk_0xF68107C40359970C(iLocal_85))
	{
		if (unk_0x3C7ED37A9FE7C585(iLocal_85))
		{
			if (!iLocal_147)
			{
				iLocal_148 = unk_0x320D1840B6DAA1CC();
				iLocal_147 = 1;
			}
			else
			{
				iLocal_149 = unk_0x320D1840B6DAA1CC();
			}
		}
		else
		{
			iLocal_147 = 0;
		}
	}
	if ((iLocal_149 - iLocal_148) > 90000)
	{
		func_122(0);
		func_54();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_60 == 1)
		{
			func_1(&uLocal_195, cLocal_178, "REHH1_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 2)
		{
			func_1(&uLocal_195, cLocal_178, "REHH2_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 3)
		{
			func_1(&uLocal_195, cLocal_178, "REHH3_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 5)
		{
			func_1(&uLocal_195, cLocal_178, "REHH5_WLK", 4, 0, 0, 0);
		}
		if (!unk_0xF68107C40359970C(iLocal_85))
		{
			unk_0x059473086913178C(iLocal_85, 1);
			if (unk_0x8F41785F110B0DA0(iLocal_85, Local_93, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0x7D1424753688EE7A(iLocal_85, Local_93, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				unk_0xD86A0BC9CC0A625A(iLocal_85, 1193033728, 0);
			}
			if (iLocal_60 == 1)
			{
				unk_0x7734082B0EDB0BE0(iLocal_85, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
			}
			unk_0xABC2CA6F28903308(iLocal_85, 1);
			if (unk_0x611AD675982BEBCC(iLocal_85))
			{
				unk_0x6221A52631154EF7(iLocal_85);
			}
			func_59();
		}
	}
}

void func_130()
{
	if (!unk_0xF68107C40359970C(iLocal_85))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !unk_0xF6F5D18EF8EAB859(iLocal_85, unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
			{
				if (!unk_0x12DD4A0B247D9B4D(uLocal_121))
				{
					uLocal_121 = func_69(iLocal_85, 0, 145);
				}
				if (unk_0x12DD4A0B247D9B4D(uLocal_83))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_83);
				}
			}
			else
			{
				if (!unk_0x12DD4A0B247D9B4D(uLocal_83))
				{
					uLocal_83 = func_131(Local_93, 1);
				}
				if (unk_0x12DD4A0B247D9B4D(uLocal_121))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_121);
				}
			}
		}
		else if (!unk_0x12DD4A0B247D9B4D(uLocal_121))
		{
			uLocal_121 = func_69(iLocal_85, 0, 145);
		}
		if (((unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0xD5C6B5E3B93A5EDC(iLocal_85, 0)) || unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_93, 50f, 50f, 50f, 0, 1, 0)) || unk_0x4DA360FC7C3CFEFA(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0x12DD4A0B247D9B4D(uLocal_83))
			{
				uLocal_83 = func_131(Local_93, 1);
			}
		}
		else if (!unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_93, 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_83))
			{
				unk_0xFFD8EB5462B07B59(&uLocal_83);
			}
		}
	}
}

var func_131(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xC5B823372B67998A(Param0);
	unk_0x293A9399E902A33B(uVar0, func_71(unk_0x9315DBF7D972F07A(), 1f, 1f));
	unk_0xAAD76B24A5282FDD(uVar0, iParam3);
	return uVar0;
}

void func_132()
{
	if (!unk_0xF68107C40359970C(iLocal_85))
	{
		if ((unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) && unk_0xD5C6B5E3B93A5EDC(iLocal_85, 1)) || unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_85, 5f, 5f, 5f, 0, 1, 0))
		{
			if (func_134())
			{
				func_56(0);
				iLocal_125 = 0;
			}
		}
		else if (!unk_0xE7B380B27E19C446(iLocal_85))
		{
			if (func_60() && !iLocal_125)
			{
				func_56(1);
				iLocal_125 = 1;
			}
		}
		if (unk_0xE7B380B27E19C446(iLocal_85))
		{
			unk_0xE54845B0A6C7BCD4(iLocal_85, 0);
		}
		if (func_133("REHH3_CHT3_7"))
		{
			unk_0x57CAA5FBF134D4AE(iLocal_85, 1, 1);
		}
		if (func_133("REHH3_CHT6_5"))
		{
			unk_0x57CAA5FBF134D4AE(iLocal_85, 0, 1);
		}
		if (func_133("REHH3_CHT8_3"))
		{
			unk_0x57CAA5FBF134D4AE(iLocal_85, 1, 1);
		}
		if ((func_125("REHH3_CHT8M") || func_125("REHH3_CHT8F")) || func_125("REHH3_CHT8T"))
		{
			unk_0x57CAA5FBF134D4AE(iLocal_85, 0, 1);
		}
	}
}

int func_133(char* sParam0)
{
	var uVar0;
	
	if (func_60())
	{
		MemCopy(&uVar0, {func_66()}, 4);
		if (unk_0x3C57C2F07FEE34D2(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_134()
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

void func_135()
{
	if (!unk_0xF68107C40359970C(iLocal_85))
	{
		if (iLocal_60 == 1)
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0x9993EF7FDBCDB632(), 0))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), unk_0x9993EF7FDBCDB632(), 0) && unk_0xF6F5D18EF8EAB859(iLocal_85, unk_0x9993EF7FDBCDB632(), 0))
				{
					if (unk_0x5C5B446AD691DEA2(unk_0x9993EF7FDBCDB632()))
					{
						if (!func_125("REHH1_CRASH"))
						{
							func_122(0);
							func_54();
							unk_0x4EDE34FBADD967A6(0);
							func_1(&uLocal_195, cLocal_178, "REHH1_CRASH", 4, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_144)
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0x9993EF7FDBCDB632(), 0))
			{
				if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), unk_0x9993EF7FDBCDB632(), 1) && unk_0xF6F5D18EF8EAB859(iLocal_85, unk_0x9993EF7FDBCDB632(), 0))
				{
					func_122(0);
					func_54();
					unk_0x4EDE34FBADD967A6(0);
					if (!func_60())
					{
						if (iLocal_60 == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_OUT", 4, 0, 0, 0);
						}
						else if (iLocal_60 == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_60 == 3)
						{
							if (!unk_0xF68107C40359970C(iLocal_85))
							{
								if (!unk_0xE7B380B27E19C446(iLocal_85))
								{
									unk_0xCA2872F050840231(iLocal_85);
								}
							}
							func_1(&uLocal_195, cLocal_178, "REHH3_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_60 == 5)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_GETOUT", 4, 0, 0, 0);
						}
						iLocal_144 = 1;
					}
				}
			}
		}
		else if (!unk_0x55B23FE400FCEA6B(unk_0x9993EF7FDBCDB632(), 0))
		{
			if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), unk_0x9993EF7FDBCDB632(), 0) && unk_0xF6F5D18EF8EAB859(iLocal_85, unk_0x9993EF7FDBCDB632(), 0))
			{
				iLocal_144 = 0;
			}
		}
		if (!iLocal_145)
		{
			if (unk_0x706E4529F37489DB(unk_0xE2D3D51028F0428A()))
			{
				func_122(0);
				func_54();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_60())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 3)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 5)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_JACK", 4, 0, 0, 0);
					}
					iLocal_145 = 1;
				}
			}
		}
		else if (!unk_0x706E4529F37489DB(unk_0xE2D3D51028F0428A()))
		{
			iLocal_145 = 0;
		}
		if (!iLocal_146)
		{
			if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
			{
				func_122(0);
				func_54();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_60())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_GUN", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 3)
					{
						if (!unk_0xF68107C40359970C(iLocal_85))
						{
							if (!unk_0xE7B380B27E19C446(iLocal_85))
							{
								unk_0xCA2872F050840231(iLocal_85);
							}
						}
						func_1(&uLocal_195, cLocal_178, "REHH3_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 5)
					{
					}
					iLocal_146 = 1;
				}
			}
		}
		else if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
		{
			iLocal_146 = 0;
		}
	}
}

void func_136()
{
	if (func_138(Local_93))
	{
		func_122(0);
		func_54();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_60 == 1)
		{
			func_1(&uLocal_195, cLocal_178, "REHH1_WAY", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 2)
		{
			func_1(&uLocal_195, cLocal_178, "REHH2_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 3)
		{
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (!unk_0xE7B380B27E19C446(iLocal_85))
				{
					unk_0xCA2872F050840231(iLocal_85);
				}
			}
			func_1(&uLocal_195, cLocal_178, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 5)
		{
			func_1(&uLocal_195, cLocal_178, "REHH5_CULT", 4, 0, 0, 0);
		}
	}
	if (func_137())
	{
		func_122(0);
		func_54();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_60 == 1)
		{
		}
		else if (iLocal_60 == 2)
		{
			func_1(&uLocal_195, cLocal_178, "REHH2_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 3)
		{
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (!unk_0xE7B380B27E19C446(iLocal_85))
				{
					unk_0xCA2872F050840231(iLocal_85);
				}
			}
			func_1(&uLocal_195, cLocal_178, "REHH3_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 5)
		{
			func_1(&uLocal_195, cLocal_178, "REHH5_NEAR", 4, 0, 0, 0);
		}
	}
}

int func_137()
{
	if (func_13() == 2)
	{
		if (func_58())
		{
			if (unk_0x987A5F1E1A67E3C0(-1014.154f, 4881.411f, 245.0001f, unk_0x6B62510F212526DC(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()), 0), 1) < 400f)
			{
				if (!Global_32202)
				{
					unk_0x1CF3F44FC2EB9F99("AC_EN_ROUTE_CULT");
					Global_32202 = 1;
					if (!Global_32201)
					{
						Global_32201 = 1;
						return 1;
					}
				}
			}
			else if (Global_32202)
			{
				unk_0x1CF3F44FC2EB9F99("AC_LEFT_AREA");
				Global_32202 = 0;
			}
		}
	}
	return 0;
}

int func_138(struct<3> Param0)
{
	if (func_13() == 2)
	{
		if (func_58() && !Global_32200)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Param0) > (fLocal_47 + 200f) || unk_0x987A5F1E1A67E3C0(-1014.154f, 4881.411f, 245.0001f, unk_0x6B62510F212526DC(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()), 0), 1) < 400f)
			{
				Global_32200 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_139()
{
	if (!func_124())
	{
		func_122(1);
	}
	if (!func_60())
	{
		switch (iLocal_108)
		{
			case 0:
				if (iLocal_60 == 1)
				{
					iLocal_110 = unk_0x320D1840B6DAA1CC();
				}
				else if (iLocal_60 == 2)
				{
					iLocal_110 = unk_0x320D1840B6DAA1CC();
				}
				else if (iLocal_60 == 3)
				{
					iLocal_110 = unk_0x320D1840B6DAA1CC() + 2000;
				}
				else if (iLocal_60 == 5)
				{
					iLocal_110 = unk_0x320D1840B6DAA1CC();
				}
				iLocal_108++;
				break;
			
			case 1:
				if (iLocal_110 < unk_0x320D1840B6DAA1CC())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 3)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 5)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHT", 4, 0, 0, 0);
					}
					iLocal_108++;
				}
				break;
			
			case 2:
				if (iLocal_110 < unk_0x320D1840B6DAA1CC())
				{
					if (iLocal_60 == 1)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_ASKM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_ASKF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_ASKT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_60 == 2)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_CHTm2", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_CHTf2", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_CHTt2", 4, 0, 0, 0);
						}
					}
					else if (iLocal_60 == 3)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHTM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHTF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHTT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_60 == 5)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_RESPM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_RESPF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							if (!bLocal_112)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_RESPT", 4, 0, 0, 0);
							}
						}
					}
					iLocal_108++;
				}
				break;
			
			case 3:
				if (iLocal_60 == 1)
				{
					iLocal_110 = unk_0x320D1840B6DAA1CC();
				}
				else if (iLocal_60 == 2)
				{
					iLocal_110 = unk_0x320D1840B6DAA1CC();
				}
				else if (iLocal_60 == 3)
				{
					iLocal_110 = unk_0x320D1840B6DAA1CC() + 500;
				}
				else if (iLocal_60 == 5)
				{
					iLocal_110 = unk_0x320D1840B6DAA1CC();
				}
				iLocal_108++;
				break;
			
			case 4:
				if (iLocal_110 < unk_0x320D1840B6DAA1CC())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHT2", 4, 0, 0, 0);
						iLocal_108++;
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT2", 4, 0, 0, 0);
						iLocal_108++;
					}
					else if (iLocal_60 == 3)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2", 4, 0, 0, 0);
						iLocal_108++;
					}
					else if (iLocal_60 == 5)
					{
						if (bLocal_112 && !bLocal_114)
						{
							if (func_13() == 0)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_OKM", 4, 0, 0, 0);
							}
							else if (func_13() == 1)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_OKF", 4, 0, 0, 0);
							}
							else if (func_13() == 2)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_OKT", 4, 0, 0, 0);
							}
							iLocal_108++;
						}
					}
				}
				break;
			
			case 5:
				if (iLocal_60 == 1)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_RESPM", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_RESPF", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_RESPT", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_pchatm", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_pchatf", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_pchatt", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 6:
				if (iLocal_60 == 1)
				{
					func_1(&uLocal_195, cLocal_178, "REHH1_CHAT", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 7:
				if (iLocal_60 == 1)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHATb", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHATc", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHATd", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT3M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT3F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT3M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT3F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 8:
				if (iLocal_60 == 1)
				{
					func_1(&uLocal_195, cLocal_178, "REHH1_CHATe", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 9:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT4M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT4F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT4M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT4F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2e", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 10:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2f", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2g", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2h", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 11:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT5M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT5F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT5M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT5F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 12:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 13:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT6M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT6F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT6M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT6F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 14:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 15:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT7M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT7F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_RUNOUT", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 16:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT8", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT8", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 17:
				if (iLocal_60 == 3)
				{
					iLocal_110 = unk_0x320D1840B6DAA1CC() + 700;
				}
				iLocal_108++;
				break;
			
			case 18:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT8M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT8F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT8T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT8M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT8F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT8T", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 19:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT9", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT9", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 20:
				if (iLocal_60 == 3)
				{
					iLocal_110 = unk_0x320D1840B6DAA1CC() + 300;
				}
				iLocal_108++;
				break;
			
			case 21:
				if (iLocal_110 < unk_0x320D1840B6DAA1CC())
				{
					if (iLocal_60 == 3)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHT9M", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHT9F", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHT9T", 4, 0, 0, 0);
						}
					}
					iLocal_108++;
				}
				break;
			
			case 22:
				if (!unk_0xF68107C40359970C(iLocal_85))
				{
					unk_0x49D97B076E3590AC(iLocal_85, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0, 0, 0, 0);
				}
				iLocal_108++;
				break;
			}
	}
}

void func_140()
{
	if (iLocal_60 != 3)
	{
		if (func_143())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_93, 3f, 3f, 2f, 1, 1, 0) && unk_0x8F41785F110B0DA0(iLocal_85, Local_93, Global_19, 0, 1, 0))
				{
					if (func_142(1, 0, 1))
					{
						func_141();
						if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
						{
							unk_0xD28E3800883DED83(unk_0x9993EF7FDBCDB632(), (10.5f + 2f), 3, 0);
						}
						unk_0xCA2872F050840231(iLocal_85);
						iLocal_59 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_112)
	{
		if (unk_0xF68107C40359970C(iLocal_86))
		{
			iLocal_59 = 7;
		}
		if (!unk_0xF68107C40359970C(iLocal_85))
		{
			if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 805.501f, 1269.926f, 361.4025f, 25f, 30f, 2f, 0, 1, 0) || (unk_0x8F41785F110B0DA0(iLocal_85, 824.8886f, 1275.671f, 359.4312f, Global_19, 1, 1, 0) && unk_0x77A43AFA9AAEC041(iLocal_85, unk_0xE2D3D51028F0428A(), 8f, 8f, 8f, 0, 1, 0)))
			{
				func_54();
				unk_0x4EDE34FBADD967A6(0);
				func_1(&uLocal_195, cLocal_178, "REHH3_CHT10", 4, 0, 0, 0);
				if (!unk_0xF68107C40359970C(iLocal_85) && !unk_0xF68107C40359970C(iLocal_86))
				{
					if (unk_0xD5C6B5E3B93A5EDC(iLocal_85, 0))
					{
						unk_0xCA2872F050840231(iLocal_85);
						unk_0xA888F8CC04F25CC8(&uLocal_89);
						unk_0xC89EA639A6F338A6(0);
						unk_0xF30F15F203736DE4(0, iLocal_86, -1, 2052, 4);
						unk_0xAB7639D658BBCCEE(0, 500, 0);
						unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), -1, 5f, 1f, 1073741824, 0);
						unk_0x49D97B076E3590AC(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0, 0, 0, 0);
						unk_0x529D306014D3C29A(0, iLocal_86, -1);
						unk_0xC963A45B50851768(uLocal_89);
						unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
						unk_0x7461D7C5BA953BC7(&uLocal_89);
					}
				}
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if (!unk_0x55B23FE400FCEA6B(unk_0x9993EF7FDBCDB632(), 0))
					{
						unk_0xD28E3800883DED83(unk_0x9993EF7FDBCDB632(), (10.5f + 2f), 2, 0);
					}
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_59 = 6;
			}
		}
	}
}

void func_141()
{
	Global_20471 = 0;
	func_22();
}

int func_142(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x410D46B709324B0F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
		{
			return 0;
		}
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (bParam0)
		{
			if (unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				if (unk_0xAB793EA186AB8DAA(iVar0, -1, 0) != unk_0xE2D3D51028F0428A())
				{
					return 0;
				}
			}
		}
		if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
		{
			if (unk_0x90544F2E01A178CD(iVar0) < 0.95f || unk_0x90544F2E01A178CD(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!unk_0x4965181A7DE78866(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	return 1;
}

int func_143()
{
	if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
		{
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (unk_0x87B449F4C26E764A(iLocal_85, unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_93, 50f, 50f, 50f, 0, 1, 0) && !unk_0xF68107C40359970C(iLocal_85))
	{
		if (!unk_0xD5C6B5E3B93A5EDC(iLocal_85, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_144()
{
	if (bLocal_114)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_86))
		{
			if ((((unk_0xF68107C40359970C(iLocal_86) || !unk_0x77A43AFA9AAEC041(iLocal_86, unk_0xE2D3D51028F0428A(), 150f, 150f, 150f, 0, 1, 0)) || unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_93) < 250f) || unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_97) < 250f) || iLocal_116)
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_122))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_122);
				}
				if (unk_0x12DD4A0B247D9B4D(uLocal_123))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_123);
				}
				if (!unk_0xF68107C40359970C(iLocal_86))
				{
					unk_0x35083F820751423C(iLocal_86, 6, 0, 0);
					unk_0x7734082B0EDB0BE0(iLocal_86, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
					unk_0xB3822DB3D538C8F3(&iLocal_86);
				}
				func_54();
				unk_0x4EDE34FBADD967A6(0);
				func_1(&uLocal_195, cLocal_178, "REHH5_CHT2", 4, 0, 0, 0);
				unk_0xB3822DB3D538C8F3(&iLocal_86);
				if (unk_0xE5965CDF24F93A9F(iLocal_171))
				{
					unk_0x3D81769BEC61BFF8(&iLocal_171);
				}
				bLocal_114 = false;
			}
			else
			{
				if (!iLocal_117)
				{
					if (!func_60())
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_COMM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_COMF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_COMT", 4, 0, 0, 0);
						}
						iLocal_117 = 1;
					}
				}
				if (!unk_0xF68107C40359970C(iLocal_86))
				{
					func_152(&iLocal_86, &uLocal_122, &iLocal_171, &uLocal_123);
					func_151(&iLocal_86, &uLocal_122, &iLocal_171, &uLocal_123);
					func_145(iLocal_171, unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A()), &uLocal_185, &uLocal_188, &Local_190, &uLocal_189, &uLocal_193, 0f, 0f, 0f, 1500, 0f);
					if (unk_0x77A43AFA9AAEC041(iLocal_86, unk_0xE2D3D51028F0428A(), 30f, 30f, 30f, 0, 1, 0))
					{
						if (iLocal_109 < unk_0x320D1840B6DAA1CC())
						{
							if (!func_60())
							{
								if (func_64())
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_FHT", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_FEAR", 4, 0, 0, 0);
								}
								iLocal_109 = unk_0x320D1840B6DAA1CC() + 8000;
							}
						}
						if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
						{
							if (!func_125("REHH5_SHO"))
							{
								func_54();
								unk_0x4EDE34FBADD967A6(0);
								func_1(&uLocal_195, cLocal_178, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()) && !unk_0xF68107C40359970C(iLocal_86))
						{
							if ((unk_0x3C7ED37A9FE7C585(iLocal_86) && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 4)) && unk_0x55E78B6AAFEF4EB8(unk_0x9E2D6C50374FCFA9()))
							{
								iLocal_116 = 1;
							}
						}
					}
					if (!iLocal_115 && !unk_0xF68107C40359970C(iLocal_86))
					{
						if (unk_0xEEEC05469860B219(unk_0xE2D3D51028F0428A()) && unk_0x77A43AFA9AAEC041(iLocal_86, unk_0xE2D3D51028F0428A(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0xC1A74225341AA9FB(iLocal_86, unk_0xE2D3D51028F0428A(), 0, 16);
							func_54();
							unk_0x4EDE34FBADD967A6(0);
							func_1(&uLocal_195, cLocal_178, "REHH5_GRM", 4, 0, 0, 0);
							iLocal_115 = 1;
						}
					}
				}
			}
		}
	}
}

void func_145(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	struct<3> Var0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (((((((unk_0xE5965CDF24F93A9F(iParam1) && iParam0 != iParam1) && !unk_0xD2B5B1C8FC84FE0F(unk_0x15CAA6D7B11F1A7C(iParam1))) && !unk_0xD6F7D32A98E07F93(unk_0x15CAA6D7B11F1A7C(iParam1))) && !unk_0x4262B4DCEADC2695(unk_0x15CAA6D7B11F1A7C(iParam1))) && !unk_0xF4AD75B2D964D8AB(unk_0x15CAA6D7B11F1A7C(iParam1))) && unk_0x78006D212FD7243E(iParam1)) && func_150(iParam0))
		{
			if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0x6DB7FBD602C51670(*uParam2, *uParam3, Param7) };
				*uParam3 = func_149(unk_0x6B62510F212526DC(iParam0, 1), unk_0x6B62510F212526DC(iParam1, 1));
				func_148(iParam1, uParam4, uParam5);
			}
			if (!unk_0x4D21C9FB671ED18F(iParam0))
			{
				*uParam6 = unk_0x320D1840B6DAA1CC();
			}
			else if ((unk_0x320D1840B6DAA1CC() - *uParam6) > iParam10)
			{
				if (func_147(iParam0, iParam1, 1) > fParam11 && unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!func_146(*uParam2))
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
							Var0 = { unk_0x6DB7FBD602C51670(Local_190, uLocal_189, Param7) };
							if (!func_146(Var0))
							{
								if (!unk_0x0318E2EE6FB4563F(Var0, 2f))
								{
									unk_0xF96094A43D443C41(Var0, 1.5f, 0);
									unk_0x02B222EADC9DC566(Var0, 3f, 0, 0, 0, 0, 0, 0, 0);
									unk_0xC64B6E13A6A7F517(iParam0, Var0, 1, 0, 0, 1);
									unk_0xBBF86885619695CE(iParam0, uLocal_189);
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

int func_146(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_147(int iParam0, int iParam1, int iParam2)
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

void func_148(int iParam0, var uParam1, var uParam2)
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

var func_149(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0xD12EFCAB87804BED((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_150(int iParam0)
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

void func_151(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (unk_0xE5965CDF24F93A9F(*iParam2))
	{
		if (unk_0x55A0C756C4A8220C(*iParam2, 0))
		{
			if (!unk_0xF68107C40359970C(*iParam0))
			{
				if (unk_0xF6F5D18EF8EAB859(*iParam0, *iParam2, 0))
				{
					if (unk_0x12DD4A0B247D9B4D(*uParam1))
					{
						unk_0xFFD8EB5462B07B59(uParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0x12DD4A0B247D9B4D(*uParam1))
				{
					*uParam1 = func_69(*iParam0, 1, 145);
				}
			}
			if (!unk_0x12DD4A0B247D9B4D(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = func_131(unk_0x6B62510F212526DC(*iParam2, 1), 0);
					unk_0xA582EE8380437B1B(*uParam3, 1);
					unk_0x7A610B2EC5DA34E7(*uParam3, 9);
					unk_0xAF62582F3EA39095(*uParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { unk_0x1A3931A61B3223A2(*uParam3) };
				Var4 = { unk_0x6B62510F212526DC(*iParam2, 1) };
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
			if (!unk_0xF68107C40359970C(*iParam0))
			{
				if (!unk_0x12DD4A0B247D9B4D(*uParam1))
				{
					*uParam1 = func_69(*iParam0, 1, 145);
				}
			}
		}
	}
}

void func_152(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(*iParam0))
	{
		if (unk_0xF68107C40359970C(*iParam0))
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				unk_0xFFD8EB5462B07B59(uParam1);
			}
			unk_0xB3822DB3D538C8F3(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0xD5C6B5E3B93A5EDC(*iParam0, 0))
			{
			}
			else if (unk_0xE5965CDF24F93A9F(*iParam2))
			{
				if (unk_0x55A0C756C4A8220C(*iParam2, 0))
				{
					if (unk_0xF6F5D18EF8EAB859(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(*iParam2))
	{
		if (unk_0x55A0C756C4A8220C(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0x64859F2B7F1E9459(*iParam2);
				unk_0xF5644C53558C678D(*iParam2);
				unk_0x5545B7D117BB40B4(*iParam2, 0);
				unk_0x3D81769BEC61BFF8(iParam2);
				if (unk_0x12DD4A0B247D9B4D(*uParam3))
				{
					unk_0xFFD8EB5462B07B59(uParam3);
				}
			}
		}
		else
		{
			unk_0x64859F2B7F1E9459(*iParam2);
			unk_0xF5644C53558C678D(*iParam2);
			unk_0x5545B7D117BB40B4(*iParam2, 0);
			unk_0x3D81769BEC61BFF8(iParam2);
			if (unk_0x12DD4A0B247D9B4D(*uParam3))
			{
				unk_0xFFD8EB5462B07B59(uParam3);
			}
		}
	}
}

void func_153()
{
	if (!unk_0xF68107C40359970C(iLocal_86))
	{
		if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(iLocal_86, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0))
		{
			if (unk_0x574E2A23F0F76E35(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x798E4BBA7A3C56AE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
			}
			if (unk_0x574E2A23F0F76E35(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x798E4BBA7A3C56AE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
			}
		}
		else
		{
			if (unk_0x574E2A23F0F76E35(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x798E4BBA7A3C56AE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 1, 0f, 0);
			}
			if (unk_0x574E2A23F0F76E35(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x798E4BBA7A3C56AE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 1, 0f, 0);
			}
		}
	}
}

void func_154()
{
	if (!bLocal_112)
	{
		if (iLocal_60 == 3)
		{
			if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_104, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0xD69A0C3662175E68(iLocal_101);
				unk_0x511A0AF0E8B0BF9A("move_m@brave");
				if (unk_0x0152AA00FA3130F1(iLocal_101) && unk_0xA7A5D14F877C9047("move_m@brave"))
				{
					iLocal_86 = unk_0xA8D58C3AADA2C41C(26, iLocal_101, Local_104, fLocal_107, 1, 1);
					unk_0xE3752B10DC995E95(iLocal_86, 0, 2, 1, 0);
					unk_0xE3752B10DC995E95(iLocal_86, 3, 0, 2, 0);
					unk_0x50274A7EACA3133A(iLocal_86, 1);
					unk_0xD6A76BAB45A4B460(iLocal_86, 42, 1);
					unk_0xA5D600C274CC186F(iLocal_86, 1);
					unk_0xABFC84F5C4943D7B(iLocal_86, "move_m@brave", 1048576000);
					unk_0xD6A76BAB45A4B460(iLocal_86, 137, 1);
					func_158(&uLocal_195, 4, iLocal_86, sLocal_180, 0, 1);
					unk_0x49D97B076E3590AC(iLocal_86, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0xF30F15F203736DE4(iLocal_86, unk_0xE2D3D51028F0428A(), -1, 2052, 4);
					unk_0xF1A23B343DFEDFD0(iLocal_101);
					bLocal_112 = true;
				}
			}
		}
		else if (iLocal_60 == 5)
		{
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_79, 1) > 320f && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if (unk_0xF6F5D18EF8EAB859(iLocal_85, unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
					{
						if (unk_0x29579BC5971CA4B6(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x5853B15F78E1A265(2, 5), &Local_66, 1, 1077936128, 0))
						{
							if (!unk_0x0318E2EE6FB4563F(Local_66, 7f) && unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_66) < 110f)
							{
								unk_0xD69A0C3662175E68(iLocal_101);
								if (unk_0x0152AA00FA3130F1(iLocal_101))
								{
									func_61();
									unk_0x4EDE34FBADD967A6(0);
									if (func_157(&uLocal_195, cLocal_178, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !unk_0xF68107C40359970C(iLocal_85))
									{
										iLocal_171 = unk_0xBA715A7BEBA5A1F9(iLocal_102, Local_66, func_155(Local_66, func_156(unk_0x9E2D6C50374FCFA9()), 1), 1, 1, 0);
										unk_0x58DAFDEB2F46A5EA(iLocal_171, 134, 134);
										unk_0x2EC6505629D78CCE(iLocal_171, 0f);
										iLocal_86 = unk_0x487C17B41938052C(iLocal_171, 26, iLocal_101, -1, 1, 1);
										unk_0xE3752B10DC995E95(iLocal_86, 0, 1, 1, 0);
										unk_0xE3752B10DC995E95(iLocal_86, 2, 1, 0, 0);
										unk_0xD6A76BAB45A4B460(iLocal_86, 42, 1);
										unk_0x059473086913178C(iLocal_86, 1);
										func_158(&uLocal_195, 4, iLocal_86, sLocal_180, 0, 1);
										unk_0x9F65B3BAFA302A65(iLocal_171, 1084227584);
										unk_0xB69D13E19147910F(iLocal_86, iLocal_171, iLocal_85, 6, 60f, 786468, -1f, -1f, 1);
										unk_0xC1A74225341AA9FB(iLocal_86, unk_0xE2D3D51028F0428A(), 0, 16);
										unk_0xABC2CA6F28903308(iLocal_86, 1);
										unk_0xF1A23B343DFEDFD0(iLocal_101);
										unk_0xF1A23B343DFEDFD0(iLocal_102);
										unk_0xB2D5451CC5606248(iLocal_171, (unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) + 15f));
										if (unk_0x12DD4A0B247D9B4D(uLocal_83))
										{
											unk_0xFFD8EB5462B07B59(&uLocal_83);
										}
										func_61();
										while (func_60())
										{
											unk_0x4EDE34FBADD967A6(0);
										}
										func_126(&uLocal_195, cLocal_178, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
										bLocal_114 = true;
										bLocal_112 = true;
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

float func_155(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xC529D13129C03CF4(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

Vector3 func_156(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

int func_157(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 1;
	Global_22598 = 0;
	Global_22602 = 0;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_2(sParam2, iParam4, 0);
}

void func_158(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_159()
{
	if (!iLocal_176 && !func_60())
	{
		if (iLocal_174 == 6 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM1", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 6 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM2", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 7 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM3", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 7 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM4", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 8 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM5", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 8 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM6", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 9 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM7", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 9 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM8", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 10 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM9", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 10 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM10", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 11 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM11", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 11 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM12", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 12 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM13", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 12 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM14", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 13 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM15", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 13 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM16", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 14 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM17", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 14 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM18", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 15 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM19", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 15 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM20", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 16 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM21", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 16 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM22", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 17 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM23", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 17 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM24", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 18 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM25", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 18 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM26", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 19 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM27", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 19 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM28", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 20 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM29", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 20 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM30", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 21 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM31", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 21 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM32", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 22 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM33", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 22 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM34", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 23 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM35", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
	}
}

void func_160()
{
	iLocal_155 = func_165(func_166()) * 1000;
	iLocal_155 = (iLocal_155 + func_164(func_166()) * 1000 * 60);
	if (!iLocal_164)
	{
		if ((iLocal_174 >= 24 && iLocal_155 < 150000) || (iLocal_174 >= 24 && iLocal_155 < 150000))
		{
			func_161((((iLocal_174 * 1000 * 60 - func_164(func_166()) * 1000 * 60) + (iLocal_173 * 1000 - func_165(func_166()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
		else
		{
			func_161(((iLocal_174 * 1000 * 60 - func_164(func_166()) * 1000 * 60) + (iLocal_173 * 1000 - func_165(func_166()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
	else if ((iLocal_174 >= 24 && iLocal_155 < 150000) || (iLocal_174 >= 24 && iLocal_155 < 150000))
	{
		func_161((((iLocal_174 * 1000 * 60 - func_164(func_166()) * 1000 * 60) + (iLocal_173 * 1000 - func_165(func_166()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_161(((iLocal_174 * 1000 * 60 - func_164(func_166()) * 1000 * 60) + (iLocal_173 * 1000 - func_165(func_166()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if ((iLocal_174 == func_164(func_166()) + 1 && iLocal_173 == func_165(func_166())) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_164(func_166()) + 25) && iLocal_173 == func_165(func_166())))
	{
		if (!iLocal_163)
		{
			if (!func_125("REHH1_1HOUR") && !func_125("REHH4_1HOUR"))
			{
				func_122(0);
			}
			func_54();
			unk_0x4EDE34FBADD967A6(0);
			if (!func_60())
			{
				if (iLocal_60 == 1)
				{
					func_1(&uLocal_195, cLocal_178, "REHH1_1HOUR", 4, 0, 0, 0);
				}
				iLocal_163 = 1;
			}
		}
	}
	if (iLocal_173 == 30)
	{
		if ((iLocal_174 == func_164(func_166()) && iLocal_173 == func_165(func_166()) + 30) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_164(func_166()) + 24) && iLocal_173 == func_165(func_166()) + 30))
		{
			if (!iLocal_164)
			{
				if (!func_125("REHH1_HHOUR") && !func_125("REHH4_HHOUR"))
				{
					func_122(0);
				}
				func_54();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_60())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_164 = 1;
				}
				if (!iLocal_165)
				{
					uLocal_177 = unk_0xA9ADCC8D104AA552();
					unk_0x91DFC8F68F6D9B05(uLocal_177, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					unk_0x57973ADDF2BFAA90(iLocal_177, "countdown_fadein", 35f);
					unk_0x66B27A59829491D3("TIMER_SCENE");
					iLocal_165 = 1;
				}
			}
		}
		if ((iLocal_174 == func_164(func_166()) && iLocal_173 == func_165(func_166()) + 5) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_164(func_166()) + 24) && iLocal_173 == func_165(func_166()) + 5))
		{
			if (!iLocal_166)
			{
				unk_0x57973ADDF2BFAA90(iLocal_177, "countdown_fast", 1f);
				iLocal_166 = 1;
			}
		}
	}
	if (iLocal_173 == 0)
	{
		if ((iLocal_174 == func_164(func_166()) + 1 && iLocal_173 == (func_165(func_166()) - 30)) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_164(func_166()) + 25) && iLocal_173 == (func_165(func_166()) - 30)))
		{
			if (!iLocal_164)
			{
				if (!func_125("REHH1_HHOUR") && !func_125("REHH4_HHOUR"))
				{
					func_122(0);
				}
				func_54();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_60())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_164 = 1;
				}
				if (!iLocal_165)
				{
					iLocal_177 = unk_0xA9ADCC8D104AA552();
					unk_0x91DFC8F68F6D9B05(iLocal_177, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					unk_0x57973ADDF2BFAA90(iLocal_177, "countdown_fadein", 35f);
					unk_0x66B27A59829491D3("TIMER_SCENE");
					iLocal_165 = 1;
				}
			}
		}
		if ((iLocal_174 == func_164(func_166()) + 1 && iLocal_173 == (func_165(func_166()) - 55)) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_164(func_166()) + 25) && iLocal_173 == (func_165(func_166()) - 55)))
		{
			if (!iLocal_166)
			{
				unk_0x57973ADDF2BFAA90(iLocal_177, "countdown_fast", 1f);
				iLocal_166 = 1;
			}
		}
	}
	if (iLocal_174 >= 24 && iLocal_155 < 150000)
	{
		if (iLocal_174 == func_164(func_166()) + 24 && iLocal_173 == func_165(func_166()))
		{
			bLocal_175 = true;
		}
	}
	else if (iLocal_174 == func_164(func_166()) && iLocal_173 == func_165(func_166()))
	{
		bLocal_175 = true;
	}
	if (bLocal_175)
	{
		func_54();
		unk_0x4EDE34FBADD967A6(0);
		unk_0xF889BDFCC181BA9F(iLocal_177);
		unk_0x0AF8D3A06BB92903("TIMER_SCENE");
		if (iLocal_60 == 1)
		{
			func_1(&uLocal_195, cLocal_178, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!unk_0xF68107C40359970C(iLocal_85))
		{
			if (unk_0xD5C6B5E3B93A5EDC(iLocal_85, 0))
			{
				unk_0xD28E3800883DED83(unk_0xB3FF0049C1FD38EC(iLocal_85, 0), (10.5f + 2f), 2, 0);
				unk_0xAB7639D658BBCCEE(iLocal_85, 1, 0);
				unk_0x6221A52631154EF7(iLocal_85);
				if (unk_0x12DD4A0B247D9B4D(uLocal_83))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_83);
				}
			}
		}
		iLocal_59 = 9;
	}
}

void func_161(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_163(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_162(7, iVar0);
		Global_1649593.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[iVar0] = iParam2;
		Global_1649593.f_4659.f_216[iVar0] = iParam3;
		Global_1649593.f_4659.f_183[iVar0] = iParam4;
		Global_1649593.f_4659.f_194[iVar0] = iParam5;
		Global_1649593.f_4659.f_249[iVar0] = iParam6;
		Global_1649593.f_4659.f_260[iVar0] = iParam7;
		Global_1649593.f_4659.f_205[iVar0] = iParam8;
		Global_1649593.f_4659.f_314[iVar0] = iParam9;
		Global_1649593.f_4659.f_325[iVar0] = iParam10;
		Global_1649593.f_4659.f_357[iVar0] = iParam11;
		Global_1649593.f_4659.f_238[iVar0] = iParam12;
		Global_1649593.f_4659.f_271[iVar0] = iParam13;
		Global_1649593.f_4659.f_368[iVar0] = iParam14;
		Global_1649593.f_4659.f_379[iVar0] = iParam15;
		Global_1649593.f_4659.f_390[iVar0] = iParam16;
		Global_1649593.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_162(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_163(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

int func_164(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_165(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_166()
{
	var uVar0;
	
	func_176(&uVar0, unk_0xAA2844CAD88768B5());
	func_175(&uVar0, unk_0x80F97D7D29800A1A());
	func_174(&uVar0, unk_0x09FC827691DACE59());
	func_169(&uVar0, unk_0xD52BD97E61483713());
	func_168(&uVar0, unk_0x771485043FDC55DE());
	func_167(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_167(var uParam0, int iParam1)
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

void func_168(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_169(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_173(*uParam0);
	iVar1 = func_171(*uParam0);
	if (iParam1 < 1 || iParam1 > func_170(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_170(int iParam0, int iParam1)
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

int func_171(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_172(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_172(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_173(int iParam0)
{
	return iParam0 & 15;
}

void func_174(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_175(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_176(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_177()
{
	if (!unk_0xF68107C40359970C(iLocal_85))
	{
		if (unk_0x55A0C756C4A8220C(unk_0x9993EF7FDBCDB632(), 0))
		{
			if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), unk_0x9993EF7FDBCDB632(), 0) && unk_0xF6F5D18EF8EAB859(iLocal_85, unk_0x9993EF7FDBCDB632(), 0))
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_121))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_121);
				}
				if (!unk_0x611AD675982BEBCC(iLocal_85))
				{
					unk_0xF23E6F5690771F71(iLocal_85, func_121());
					unk_0x508EA490C0230199(iLocal_85, 1);
					unk_0x950D2D7EA1BFF54C(iLocal_85, 0);
				}
				if (!unk_0x12DD4A0B247D9B4D(uLocal_83))
				{
					uLocal_83 = func_131(Local_93, 1);
				}
				if (((func_13() == 2 && !func_57()) && iLocal_60 != 1) && iLocal_60 != 4)
				{
					if (!unk_0x12DD4A0B247D9B4D(uLocal_84))
					{
						uLocal_84 = func_131(Local_97, 0);
						unk_0x1A5B5BA56167D412(uLocal_84, 269);
						func_178();
					}
				}
				if (iLocal_60 == 1)
				{
					if (!func_60())
					{
						if (iLocal_60 == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_WTA", 4, 0, 0, 0);
						}
						iLocal_174 = func_164(func_166()) + 2;
						if (func_165(func_166()) >= 30)
						{
							iLocal_173 = 0;
							iLocal_174++;
						}
						else
						{
							iLocal_173 = 30;
						}
						iLocal_111 = 1;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_59 = 4;
					}
				}
				else if (iLocal_60 == 2)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH2_WTB", 4, 0, 0, 0))
					{
						iLocal_111 = 1;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_59 = 4;
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH3_WTC", 4, 0, 0, 0))
					{
						iLocal_111 = 1;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_59 = 4;
					}
				}
				else if (iLocal_60 == 5)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH5_WTE", 4, 0, 0, 0))
					{
						iLocal_111 = 1;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_59 = 4;
					}
				}
			}
		}
	}
}

void func_178()
{
	if (func_13() == 2)
	{
		if (!Global_32199)
		{
			func_179("CULT_BLIP_HELP", -1);
			Global_32199 = 1;
		}
	}
}

void func_179(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

void func_180()
{
	int iVar0;
	
	switch (iLocal_140)
	{
		case 0:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (iLocal_110 < unk_0x320D1840B6DAA1CC())
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_STO", 4, 0, 0, 0);
					iLocal_110 = (unk_0x320D1840B6DAA1CC() + unk_0x5853B15F78E1A265(4500, 6500));
				}
				if (unk_0x2E7F5417D4F4DD69(iLocal_85, unk_0xE2D3D51028F0428A(), 90f))
				{
					if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 24f || (unk_0x98D590FB7BA7DF44(unk_0x9E2D6C50374FCFA9()) && func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 30f))
					{
						fLocal_184 = func_147(iLocal_85, unk_0xE2D3D51028F0428A(), 1);
						if (fLocal_184 > 5f)
						{
							fLocal_184 = (fLocal_184 - 1f);
						}
						else
						{
							fLocal_184 = (fLocal_184 - 0.5f);
						}
						unk_0xA888F8CC04F25CC8(&uLocal_89);
						unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
						unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), -1, fLocal_184, 2f, 1073741824, 0);
						unk_0xC963A45B50851768(uLocal_89);
						unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
						unk_0x7461D7C5BA953BC7(&uLocal_89);
						iLocal_140++;
					}
				}
				else if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 12f || (unk_0x98D590FB7BA7DF44(unk_0x9E2D6C50374FCFA9()) && func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 30f))
				{
					fLocal_184 = func_147(iLocal_85, unk_0xE2D3D51028F0428A(), 1);
					fLocal_184 = (fLocal_184 - 0.25f);
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
					unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), -1, fLocal_184, 2f, 1073741824, 0);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
					iLocal_140++;
				}
			}
			break;
		
		case 1:
			if (unk_0x12DD4A0B247D9B4D(uLocal_121))
			{
				unk_0x3430966AC4550BB9(uLocal_121, 1);
			}
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iLocal_85, 5000, 2052, 2);
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iLocal_87 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x55A0C756C4A8220C(iLocal_87, 0))
					{
						if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 25f || (unk_0x98D590FB7BA7DF44(unk_0x9E2D6C50374FCFA9()) && func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 30f))
						{
							if (unk_0x2E7F5417D4F4DD69(iLocal_85, unk_0xE2D3D51028F0428A(), 150f))
							{
								unk_0xCA2872F050840231(iLocal_85);
								unk_0xA888F8CC04F25CC8(&uLocal_89);
								unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 4);
								if (unk_0x7158135695FAE89D(iLocal_87, 0, 0))
								{
									unk_0xF9D446AF83E7A624(0, iLocal_87, -1, 0, 2f);
								}
								unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
								unk_0xC963A45B50851768(uLocal_89);
								unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
								unk_0x7461D7C5BA953BC7(&uLocal_89);
								iLocal_140++;
							}
						}
					}
				}
				else if (!iLocal_141)
				{
					unk_0xF30F15F203736DE4(iLocal_85, unk_0xE2D3D51028F0428A(), 7000, 2052, 2);
					if (func_1(&uLocal_195, cLocal_178, "REHH5_NOV", 4, 0, 0, 0))
					{
						iLocal_141 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iLocal_87 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				if (!unk_0xF68107C40359970C(iLocal_85) && unk_0x55A0C756C4A8220C(iLocal_87, 0))
				{
					if (func_147(iLocal_85, iLocal_87, 1) < 25f || (unk_0x98D590FB7BA7DF44(unk_0x9E2D6C50374FCFA9()) && func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 30f))
					{
						if (unk_0x207D53F9E0190691(iLocal_87) < 2.5f)
						{
							if (!unk_0xF68107C40359970C(iLocal_85))
							{
								if (func_1(&uLocal_195, cLocal_178, "REHH5_ASK", 4, 0, 0, 0))
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (unk_0x77A43AFA9AAEC041(iLocal_85, unk_0xE2D3D51028F0428A(), 3f, 3f, 3f, 0, 1, 0))
				{
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
				}
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iLocal_87 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x55A0C756C4A8220C(iLocal_87, 0))
					{
						if (unk_0x207D53F9E0190691(iLocal_87) < 2.5f && func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 25f)
						{
							if (!func_60())
							{
								if (func_13() == 0)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_RPA", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
								else if (func_13() == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_RPB", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
								else if (func_13() == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_RPC", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 25f)
				{
					if (func_127())
					{
						if (unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
						{
							if (unk_0x7158135695FAE89D(unk_0x9993EF7FDBCDB632(), 0, 0))
							{
								unk_0xF23E6F5690771F71(iLocal_85, func_121());
								unk_0x508EA490C0230199(iLocal_85, 1);
								unk_0x950D2D7EA1BFF54C(iLocal_85, 0);
								unk_0xF30F15F203736DE4(iLocal_85, unk_0xE2D3D51028F0428A(), 10000, 2052, 2);
								unk_0xB486640392EC50BB(iLocal_85, unk_0x9993EF7FDBCDB632(), -1, 0, 2f, 1, 0);
								func_181();
								iLocal_140++;
							}
							else
							{
								iVar0 = unk_0xAB793EA186AB8DAA(unk_0x9993EF7FDBCDB632(), 0, 0);
								if (unk_0xF68107C40359970C(iVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									unk_0x03A927199A2DFE46(iLocal_85);
									unk_0xF23E6F5690771F71(iLocal_85, func_121());
									unk_0x508EA490C0230199(iLocal_85, 1);
									unk_0x950D2D7EA1BFF54C(iLocal_85, 1);
									unk_0xF30F15F203736DE4(iLocal_85, unk_0xE2D3D51028F0428A(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
					}
					else if (!iLocal_142)
					{
						if (!func_60())
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH2", 4, 0, 0, 0);
							}
							iLocal_142 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (func_127())
				{
					if (unk_0xD5C6B5E3B93A5EDC(iLocal_85, 0))
					{
						unk_0xC89EA639A6F338A6(iLocal_85);
						iLocal_111 = 1;
						iLocal_59 = 3;
					}
					else if (unk_0x83666F9FB8FEBD4B() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH5_SLW", 4, 0, 0, 0))
						{
							func_59();
						}
					}
					if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) > 100f)
					{
						func_59();
					}
				}
				else
				{
					unk_0x6221A52631154EF7(iLocal_85);
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
					iLocal_140 = 4;
				}
			}
			break;
	}
}

void func_181()
{
	if (!func_57())
	{
		if (func_13() == 2)
		{
			Global_32197 = 1;
		}
	}
}

float func_182(int iParam0, int iParam1)
{
	return func_147(iParam0, iParam1, 1);
}

void func_183()
{
	int iVar0;
	
	switch (iLocal_140)
	{
		case 0:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (unk_0x2E7F5417D4F4DD69(iLocal_85, unk_0xE2D3D51028F0428A(), 90f))
				{
					if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 12f || (unk_0x98D590FB7BA7DF44(unk_0x9E2D6C50374FCFA9()) && func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 30f))
					{
						fLocal_184 = func_147(iLocal_85, unk_0xE2D3D51028F0428A(), 1);
						if (fLocal_184 > 5f)
						{
							fLocal_184 = (fLocal_184 - 1f);
						}
						else
						{
							fLocal_184 = (fLocal_184 - 0.5f);
						}
						unk_0xCA2872F050840231(iLocal_85);
						unk_0xA888F8CC04F25CC8(&uLocal_89);
						unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
						unk_0x6FCE069E4940878C(0, unk_0xE2D3D51028F0428A(), 2.5f, 0f, 0f, 1f, 5000, 1036831949, 1);
						unk_0xC963A45B50851768(uLocal_89);
						unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
						unk_0x7461D7C5BA953BC7(&uLocal_89);
						iLocal_140++;
					}
				}
				else if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 8f || (unk_0x98D590FB7BA7DF44(unk_0x9E2D6C50374FCFA9()) && func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 30f))
				{
					fLocal_184 = func_147(iLocal_85, unk_0xE2D3D51028F0428A(), 1);
					fLocal_184 = (fLocal_184 - 0.25f);
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
					unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), -1, fLocal_184, 1f, 1073741824, 0);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
					iLocal_140++;
				}
			}
			break;
		
		case 1:
			if (unk_0x12DD4A0B247D9B4D(uLocal_121))
			{
				unk_0x3430966AC4550BB9(uLocal_121, 1);
			}
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iLocal_85, 5000, 2052, 2);
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iLocal_87 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x55A0C756C4A8220C(iLocal_87, 0))
					{
						if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 10f || (unk_0x98D590FB7BA7DF44(unk_0x9E2D6C50374FCFA9()) && func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 30f))
						{
							if (unk_0x2E7F5417D4F4DD69(iLocal_85, unk_0xE2D3D51028F0428A(), 150f))
							{
								unk_0xCA2872F050840231(iLocal_85);
								unk_0xA888F8CC04F25CC8(&uLocal_89);
								unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 4);
								if (unk_0x7158135695FAE89D(iLocal_87, 0, 0))
								{
									unk_0xF9D446AF83E7A624(0, iLocal_87, -1, 0, 1f);
								}
								unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
								unk_0xC963A45B50851768(uLocal_89);
								unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
								unk_0x7461D7C5BA953BC7(&uLocal_89);
								iLocal_140++;
							}
						}
					}
				}
				else if (!iLocal_141)
				{
					unk_0xF30F15F203736DE4(iLocal_85, unk_0xE2D3D51028F0428A(), 7000, 2052, 2);
					if (func_1(&uLocal_195, cLocal_178, "REHH3_NOV", 4, 0, 0, 0))
					{
						iLocal_141 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iLocal_87 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				if (!unk_0xF68107C40359970C(iLocal_85) && unk_0x55A0C756C4A8220C(iLocal_87, 0))
				{
					if (func_147(iLocal_85, iLocal_87, 1) < 13f || (unk_0x98D590FB7BA7DF44(unk_0x9E2D6C50374FCFA9()) && func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 30f))
					{
						if (unk_0x207D53F9E0190691(iLocal_87) < 2.5f)
						{
							if (!unk_0xF68107C40359970C(iLocal_85))
							{
								if (func_1(&uLocal_195, cLocal_178, "REHH3_ASK", 4, 0, 0, 0))
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (unk_0xCEDE6233B8F49499(iLocal_85))
				{
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
				}
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iLocal_87 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x55A0C756C4A8220C(iLocal_87, 0))
					{
						if (unk_0x207D53F9E0190691(iLocal_87) < 2.5f && func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 15f)
						{
							if (!func_60())
							{
								if (func_13() == 0)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_RPA", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
								else if (func_13() == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_RPB", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
								else if (func_13() == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_RPC", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 15f)
				{
					if (func_127())
					{
						if (unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
						{
							if (unk_0x7158135695FAE89D(unk_0x9993EF7FDBCDB632(), 0, 0))
							{
								unk_0xF23E6F5690771F71(iLocal_85, func_121());
								unk_0x508EA490C0230199(iLocal_85, 1);
								unk_0x950D2D7EA1BFF54C(iLocal_85, 0);
								unk_0xF30F15F203736DE4(iLocal_85, unk_0xE2D3D51028F0428A(), 10000, 2052, 2);
								unk_0xB486640392EC50BB(iLocal_85, unk_0x9993EF7FDBCDB632(), -1, 0, 1f, 1, 0);
								func_181();
								iLocal_140++;
							}
							else
							{
								iVar0 = unk_0xAB793EA186AB8DAA(unk_0x9993EF7FDBCDB632(), 0, 0);
								if (unk_0xF68107C40359970C(iVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									unk_0x03A927199A2DFE46(iLocal_85);
									unk_0xF23E6F5690771F71(iLocal_85, func_121());
									unk_0x508EA490C0230199(iLocal_85, 1);
									unk_0x950D2D7EA1BFF54C(iLocal_85, 1);
									unk_0xF30F15F203736DE4(iLocal_85, unk_0xE2D3D51028F0428A(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
					}
					else if (!iLocal_142)
					{
						if (!func_60())
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH2", 4, 0, 0, 0);
							}
							iLocal_142 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (func_127())
				{
					unk_0xCAC4D1050F2E6899(iLocal_85, 1f);
					if (unk_0xD5C6B5E3B93A5EDC(iLocal_85, 0))
					{
						unk_0xC89EA639A6F338A6(iLocal_85);
						iLocal_111 = 1;
						iLocal_59 = 3;
					}
					else if (unk_0x83666F9FB8FEBD4B() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH3_SLW", 4, 0, 0, 0))
						{
							func_59();
						}
					}
					if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) > 100f)
					{
						func_59();
					}
				}
				else
				{
					unk_0x6221A52631154EF7(iLocal_85);
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
					iLocal_140 = 4;
				}
			}
			break;
	}
}

void func_184()
{
	int iVar0;
	
	switch (iLocal_140)
	{
		case 0:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (unk_0x2E7F5417D4F4DD69(iLocal_85, unk_0xE2D3D51028F0428A(), 90f))
				{
					if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 12f || (unk_0x98D590FB7BA7DF44(unk_0x9E2D6C50374FCFA9()) && func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 30f))
					{
						fLocal_184 = func_147(iLocal_85, unk_0xE2D3D51028F0428A(), 1);
						if (fLocal_184 > 5f)
						{
							fLocal_184 = (fLocal_184 - 1f);
						}
						else
						{
							fLocal_184 = (fLocal_184 - 0.5f);
						}
						unk_0xA888F8CC04F25CC8(&uLocal_89);
						unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
						unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), -1, fLocal_184, 1f, 1073741824, 0);
						unk_0xC963A45B50851768(uLocal_89);
						unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
						unk_0x7461D7C5BA953BC7(&uLocal_89);
						iLocal_140++;
					}
				}
				else if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 8f || (unk_0x98D590FB7BA7DF44(unk_0x9E2D6C50374FCFA9()) && func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 30f))
				{
					fLocal_184 = func_147(iLocal_85, unk_0xE2D3D51028F0428A(), 1);
					fLocal_184 = (fLocal_184 - 0.25f);
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
					unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), -1, fLocal_184, 1f, 1073741824, 0);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
					iLocal_140++;
				}
			}
			break;
		
		case 1:
			if (unk_0x12DD4A0B247D9B4D(uLocal_121))
			{
				unk_0x3430966AC4550BB9(uLocal_121, 1);
			}
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iLocal_85, 5000, 2052, 2);
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iLocal_87 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x55A0C756C4A8220C(iLocal_87, 0))
					{
						if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 10f || (unk_0x98D590FB7BA7DF44(unk_0x9E2D6C50374FCFA9()) && func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 30f))
						{
							if (unk_0x2E7F5417D4F4DD69(iLocal_85, unk_0xE2D3D51028F0428A(), 150f))
							{
								unk_0xCA2872F050840231(iLocal_85);
								unk_0xA888F8CC04F25CC8(&uLocal_89);
								unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
								if (unk_0x7158135695FAE89D(iLocal_87, 0, 0))
								{
									unk_0xF9D446AF83E7A624(0, iLocal_87, -1, 0, 1f);
								}
								unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
								unk_0xC963A45B50851768(uLocal_89);
								unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
								unk_0x7461D7C5BA953BC7(&uLocal_89);
								func_54();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_140++;
							}
						}
					}
				}
				else if (!iLocal_141)
				{
					unk_0x03A927199A2DFE46(iLocal_85);
					unk_0xF30F15F203736DE4(iLocal_85, unk_0xE2D3D51028F0428A(), 7000, 2052, 2);
					if (func_1(&uLocal_195, cLocal_178, "REHH2_NOV", 4, 0, 0, 0))
					{
						iLocal_141 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iLocal_87 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				if (!unk_0xF68107C40359970C(iLocal_85) && unk_0x55A0C756C4A8220C(iLocal_87, 0))
				{
					if (func_147(iLocal_85, iLocal_87, 1) < 13f || (unk_0x98D590FB7BA7DF44(unk_0x9E2D6C50374FCFA9()) && func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 30f))
					{
						if (unk_0x207D53F9E0190691(iLocal_87) < 2.5f)
						{
							if (!unk_0xF68107C40359970C(iLocal_85))
							{
								if (func_1(&uLocal_195, cLocal_178, "REHH2_ASK", 4, 0, 0, 0))
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (unk_0xCEDE6233B8F49499(iLocal_85))
				{
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
				}
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iLocal_87 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x55A0C756C4A8220C(iLocal_87, 0))
					{
						if (unk_0x207D53F9E0190691(iLocal_87) < 2.5f && func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 15f)
						{
							if (!func_60())
							{
								if (func_13() == 0)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_RPA", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
								else if (func_13() == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_RPB", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
								else if (func_13() == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_RPC", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 15f)
				{
					if (func_127())
					{
						iLocal_87 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
						if (unk_0x55A0C756C4A8220C(iLocal_87, 0))
						{
							if (unk_0x7158135695FAE89D(unk_0x9993EF7FDBCDB632(), 0, 0))
							{
								unk_0xF23E6F5690771F71(iLocal_85, func_121());
								unk_0x508EA490C0230199(iLocal_85, 1);
								unk_0x950D2D7EA1BFF54C(iLocal_85, 0);
								unk_0xF30F15F203736DE4(iLocal_85, unk_0xE2D3D51028F0428A(), 10000, 2052, 2);
								unk_0xB486640392EC50BB(iLocal_85, unk_0x9993EF7FDBCDB632(), -1, 0, 1f, 1, 0);
								func_181();
								iLocal_140++;
							}
							else
							{
								iVar0 = unk_0xAB793EA186AB8DAA(unk_0x9993EF7FDBCDB632(), 0, 0);
								if (unk_0xF68107C40359970C(iVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									unk_0x03A927199A2DFE46(iLocal_85);
									unk_0xF23E6F5690771F71(iLocal_85, func_121());
									unk_0x508EA490C0230199(iLocal_85, 1);
									unk_0x950D2D7EA1BFF54C(iLocal_85, 1);
									unk_0xF30F15F203736DE4(iLocal_85, unk_0xE2D3D51028F0428A(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
					}
					else if (!iLocal_142)
					{
						if (!func_60())
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH2", 4, 0, 0, 0);
							}
							iLocal_142 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (!iLocal_103)
				{
					if (unk_0x77A43AFA9AAEC041(iLocal_85, unk_0xE2D3D51028F0428A(), 3f, 3f, 3f, 0, 1, 0))
					{
						if (!func_60())
						{
							if (func_1(&uLocal_195, cLocal_178, "REHH2_INA", 4, 0, 0, 0))
							{
								iLocal_103 = 1;
							}
						}
					}
				}
				if (func_127())
				{
					unk_0xCAC4D1050F2E6899(iLocal_85, 1f);
					if (unk_0xD5C6B5E3B93A5EDC(iLocal_85, 0))
					{
						unk_0xC89EA639A6F338A6(iLocal_85);
						iLocal_111 = 1;
						iLocal_59 = 3;
					}
					else if (unk_0x83666F9FB8FEBD4B() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH2_SLW", 4, 0, 0, 0))
						{
							func_59();
						}
					}
				}
				else
				{
					unk_0x6221A52631154EF7(iLocal_85);
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
					iLocal_140 = 4;
				}
				if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) > 100f)
				{
					func_59();
				}
			}
			break;
	}
}

void func_185()
{
	int iVar0;
	
	switch (iLocal_140)
	{
		case 0:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 12f || (unk_0x98D590FB7BA7DF44(unk_0x9E2D6C50374FCFA9()) && func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 30f))
				{
					unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iLocal_85, 5000, 2052, 2);
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iLocal_87 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
						if (unk_0x55A0C756C4A8220C(iLocal_87, 0))
						{
							unk_0xA888F8CC04F25CC8(&uLocal_89);
							unk_0xF30F15F203736DE4(0, iLocal_87, 30000, 2054, 2);
							unk_0x49D97B076E3590AC(iLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0xC963A45B50851768(uLocal_89);
							unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
							unk_0x7461D7C5BA953BC7(&uLocal_89);
						}
						iLocal_140++;
					}
					else if (!iLocal_141)
					{
						unk_0x03A927199A2DFE46(iLocal_85);
						unk_0xA888F8CC04F25CC8(&uLocal_89);
						unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2054, 2);
						unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), -1);
						unk_0xC963A45B50851768(uLocal_89);
						unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
						unk_0x7461D7C5BA953BC7(&uLocal_89);
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x12DD4A0B247D9B4D(uLocal_121))
			{
				unk_0x3430966AC4550BB9(uLocal_121, 1);
			}
			if (func_127())
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iLocal_87 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x207D53F9E0190691(iLocal_87) < 10f)
					{
						if (!unk_0xF68107C40359970C(iLocal_85))
						{
							if (unk_0x2E7F5417D4F4DD69(iLocal_85, unk_0xE2D3D51028F0428A(), 150f))
							{
								fLocal_184 = func_147(iLocal_85, unk_0xE2D3D51028F0428A(), 1);
								if (fLocal_184 > 5f)
								{
									fLocal_184 = (fLocal_184 - 0.5f);
								}
								else
								{
									fLocal_184 = (fLocal_184 - 0.25f);
								}
								unk_0xA888F8CC04F25CC8(&uLocal_89);
								unk_0xF30F15F203736DE4(0, iLocal_87, 10000, 2054, 2);
								if (unk_0x7158135695FAE89D(iLocal_87, 0, 0))
								{
									unk_0xF9D446AF83E7A624(0, iLocal_87, -1, 0, 1f);
								}
								unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), -1);
								unk_0xC963A45B50851768(uLocal_89);
								unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
								unk_0x7461D7C5BA953BC7(&uLocal_89);
								iLocal_140++;
							}
							else
							{
								unk_0xF30F15F203736DE4(iLocal_85, iLocal_87, 10000, 2054, 2);
								iLocal_140++;
							}
						}
					}
				}
			}
			else if (!iLocal_141)
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					unk_0x03A927199A2DFE46(iLocal_85);
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2054, 2);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), -1);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
					if (!func_60())
					{
						if (!func_187())
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_VEH", 4, 0, 0, 0);
						}
						else
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_VEH2", 4, 0, 0, 0);
						}
						iLocal_141 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xF68107C40359970C(iLocal_85) && unk_0x55A0C756C4A8220C(iLocal_87, 0))
			{
				if (unk_0x207D53F9E0190691(iLocal_87) < 2.5f)
				{
					func_141();
					iLocal_140++;
				}
			}
			break;
		
		case 3:
			if (!unk_0xF68107C40359970C(iLocal_85) && unk_0x55A0C756C4A8220C(iLocal_87, 0))
			{
				if (unk_0x207D53F9E0190691(iLocal_87) < 2.5f)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH1_ASK", 4, 0, 0, 0))
					{
						unk_0xCA2872F050840231(iLocal_85);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_140++;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (unk_0xCEDE6233B8F49499(iLocal_85))
				{
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
				}
				if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 15f)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iLocal_87 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
						if (unk_0x55A0C756C4A8220C(iLocal_87, 0))
						{
							if (unk_0x207D53F9E0190691(iLocal_87) < 2.5f)
							{
								if (!func_60())
								{
									if (func_13() == 0)
									{
										func_1(&uLocal_195, cLocal_178, "REHH1_RPA", 4, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										iLocal_140++;
									}
									else if (func_13() == 1)
									{
										func_1(&uLocal_195, cLocal_178, "REHH1_RPB", 4, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										iLocal_140++;
									}
									else if (func_13() == 2)
									{
										func_1(&uLocal_195, cLocal_178, "REHH1_RPC", 4, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										iLocal_140++;
									}
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) < 15f)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if (func_127())
						{
							if (unk_0x7158135695FAE89D(unk_0x9993EF7FDBCDB632(), 0, 0))
							{
								unk_0xF23E6F5690771F71(iLocal_85, func_121());
								unk_0x508EA490C0230199(iLocal_85, 1);
								unk_0x950D2D7EA1BFF54C(iLocal_85, 0);
								unk_0xF30F15F203736DE4(iLocal_85, unk_0xE2D3D51028F0428A(), 10000, 2052, 2);
								unk_0xB486640392EC50BB(iLocal_85, unk_0x9993EF7FDBCDB632(), -1, 0, 1f, 1, 0);
								iLocal_140++;
							}
							else
							{
								iVar0 = unk_0xAB793EA186AB8DAA(unk_0x9993EF7FDBCDB632(), 0, 0);
								if (unk_0xF68107C40359970C(iVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									unk_0x03A927199A2DFE46(iLocal_85);
									unk_0xF23E6F5690771F71(iLocal_85, func_121());
									unk_0x508EA490C0230199(iLocal_85, 1);
									unk_0x950D2D7EA1BFF54C(iLocal_85, 1);
									unk_0xF30F15F203736DE4(iLocal_85, unk_0xE2D3D51028F0428A(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
						else if (!iLocal_142)
						{
							if (!func_60())
							{
								if (!func_187())
								{
									func_1(&uLocal_195, cLocal_178, "REHH1_VEH", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_195, cLocal_178, "REHH1_VEH2", 4, 0, 0, 0);
								}
								iLocal_142 = 1;
							}
						}
					}
					else if (!iLocal_141)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				if (func_127())
				{
					unk_0xCAC4D1050F2E6899(iLocal_85, 1f);
					if (unk_0xD5C6B5E3B93A5EDC(iLocal_85, 0))
					{
						unk_0xC89EA639A6F338A6(iLocal_85);
						iLocal_111 = 1;
						iLocal_59 = 3;
					}
					else if (unk_0x83666F9FB8FEBD4B() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOH", 4, 0, 0, 0))
						{
							func_59();
						}
					}
				}
				else
				{
					unk_0x6221A52631154EF7(iLocal_85);
					unk_0xA888F8CC04F25CC8(&uLocal_89);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 2);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0xC963A45B50851768(uLocal_89);
					unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
					unk_0x7461D7C5BA953BC7(&uLocal_89);
					iLocal_140 = 5;
				}
				if (func_182(iLocal_85, unk_0xE2D3D51028F0428A()) > 100f)
				{
					func_59();
				}
			}
			break;
	}
}

void func_186()
{
	int iVar0;
	
	if ((iLocal_158 - iLocal_157) > 1000)
	{
		iLocal_172 = unk_0xFE15FEB341652241(unk_0x6B62510F212526DC(iLocal_85, 0), 18f, 0, 4);
	}
	if (iLocal_172 != 0)
	{
		iLocal_156++;
		iLocal_157 = unk_0x320D1840B6DAA1CC();
		if (unk_0x5853B15F78E1A265(0, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_156 > iVar0)
		{
			unk_0x2D58A6131679D82C(iLocal_172, 1, 0);
			if (unk_0x55A0C756C4A8220C(iLocal_172, 0))
			{
				if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_172, 0))
				{
					if (iLocal_60 == 1)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!unk_0xF68107C40359970C(iLocal_85))
							{
								unk_0xF30F15F203736DE4(iLocal_85, iLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = unk_0x320D1840B6DAA1CC();
						iLocal_156 = 0;
					}
					else if (iLocal_60 == 2)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!unk_0xF68107C40359970C(iLocal_85))
							{
								unk_0xF30F15F203736DE4(iLocal_85, iLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = unk_0x320D1840B6DAA1CC();
						iLocal_156 = 0;
					}
					else if (iLocal_60 == 3)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!unk_0xF68107C40359970C(iLocal_85))
							{
								unk_0xF30F15F203736DE4(iLocal_85, iLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = unk_0x320D1840B6DAA1CC();
						iLocal_156 = 0;
					}
					else if (iLocal_60 == 5)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!unk_0xF68107C40359970C(iLocal_85))
							{
								unk_0xF30F15F203736DE4(iLocal_85, iLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = unk_0x320D1840B6DAA1CC();
						iLocal_156 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_183 = unk_0x320D1840B6DAA1CC();
			if ((iLocal_183 - iLocal_182) > 3500)
			{
				unk_0x3D81769BEC61BFF8(&iLocal_172);
			}
			iLocal_172 = 0;
		}
	}
}

int func_187()
{
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
	{
		if (unk_0x55A0C756C4A8220C(unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A()), 1))
		{
			if ((unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 1))) || unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 1)))) || unk_0xCD8C08FA7D84C27E(unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_188()
{
	if (iLocal_60 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_85))
		{
			if (!unk_0x55B23FE400FCEA6B(iLocal_85, 0))
			{
				if ((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -3024.265f, 660.8264f, 1.1982f, -3140.823f, 803.707f, 35.131f, 93f, 0, 1, 0) && !unk_0x4D21C9FB671ED18F(iLocal_85)) || func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 12f)
				{
					func_189();
					iLocal_59 = 2;
				}
			}
		}
	}
	else if (iLocal_60 == 2)
	{
		if (!iLocal_167)
		{
			if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_90, 100f, 100f, 100f, 0, 1, 0) && !unk_0xF68107C40359970C(iLocal_85))
			{
				unk_0xA888F8CC04F25CC8(&uLocal_89);
				unk_0x7D1424753688EE7A(0, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0x7D1424753688EE7A(0, 159.6669f, 4413.197f, 74.8915f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0x7D1424753688EE7A(0, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0xC963A45B50851768(uLocal_89);
				unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
				unk_0x7461D7C5BA953BC7(&uLocal_89);
				iLocal_167 = 1;
			}
		}
	}
	else if (iLocal_60 == 5)
	{
		if (!iLocal_167)
		{
			if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_90, 200f, 200f, 200f, 0, 1, 0) && !unk_0xF68107C40359970C(iLocal_85))
			{
				unk_0xA888F8CC04F25CC8(&uLocal_89);
				unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2052, 3);
				unk_0x49D97B076E3590AC(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0x7D1424753688EE7A(0, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x7D1424753688EE7A(0, -343.4485f, 2826.222f, 54.5089f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x7D1424753688EE7A(0, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x7D1424753688EE7A(0, -365.6846f, 2809.158f, 48.7646f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x7D1424753688EE7A(0, -382.4106f, 2818.384f, 44.078f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x7D1424753688EE7A(0, -370.3838f, 2866.677f, 41.0979f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x49D97B076E3590AC(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0, 0, 0, 0);
				unk_0xC963A45B50851768(uLocal_89);
				unk_0x8ACADA903FCAA42F(iLocal_85, uLocal_89);
				unk_0x7461D7C5BA953BC7(&uLocal_89);
				iLocal_167 = 1;
			}
		}
	}
	if (iLocal_60 != 1)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_85))
		{
			if (!unk_0x55B23FE400FCEA6B(iLocal_85, 0))
			{
				if ((unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_85, 95f, 95f, 50f, 0, 1, 0) && !unk_0x4D21C9FB671ED18F(iLocal_85)) || func_182(unk_0xE2D3D51028F0428A(), iLocal_85) < 12f)
				{
					func_189();
					iLocal_59 = 2;
				}
			}
		}
	}
}

void func_189()
{
	if (unk_0x12DD4A0B247D9B4D(uLocal_120))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_120);
	}
	if (!unk_0xF68107C40359970C(iLocal_85))
	{
		if (!unk_0x12DD4A0B247D9B4D(uLocal_121))
		{
			if (!unk_0x55B23FE400FCEA6B(iLocal_85, 0))
			{
				uLocal_121 = func_69(iLocal_85, 0, 145);
				unk_0x3430966AC4550BB9(uLocal_121, 0);
			}
		}
		if (!func_222())
		{
			func_197(1);
		}
		func_158(&uLocal_195, 3, iLocal_85, sLocal_179, 0, 1);
	}
	if (func_13() == 0)
	{
		func_158(&uLocal_195, 0, unk_0xE2D3D51028F0428A(), "MICHAEL", 0, 1);
	}
	else if (func_13() == 1)
	{
		func_158(&uLocal_195, 1, unk_0xE2D3D51028F0428A(), "FRANKLIN", 0, 1);
	}
	else if (func_13() == 2)
	{
		func_158(&uLocal_195, 2, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
	}
}

void func_190()
{
	func_192(39, 1);
	func_192(40, 1);
	func_192(41, 1);
	func_192(42, 1);
	func_192(43, 1);
	func_192(44, 1);
	iLocal_85 = unk_0xA8D58C3AADA2C41C(26, iLocal_100, Local_90, fLocal_96, 1, 1);
	unk_0xF1A23B343DFEDFD0(iLocal_100);
	unk_0x50274A7EACA3133A(iLocal_85, 1);
	unk_0xA7266A50941DBAEA(iLocal_85, 0);
	unk_0xEEBC95A38CBDED42(iLocal_85, sLocal_181);
	unk_0xD6A76BAB45A4B460(iLocal_85, 137, 1);
	unk_0xD6A76BAB45A4B460(iLocal_85, 206, 1);
	unk_0xDC6110E0F8FF9DA0(iLocal_85, 1024, 1);
	unk_0xDC6110E0F8FF9DA0(iLocal_85, 65536, 1);
	unk_0xDC6110E0F8FF9DA0(iLocal_85, 2, 0);
	unk_0xBC12D08EE7559CCD(iLocal_85, 17, 1);
	unk_0xC8A40A36F093F11C(iLocal_85, 60f);
	unk_0x9D4D63EB83A103AD(iLocal_85, 5f);
	if (iLocal_60 == 1)
	{
		unk_0xE3752B10DC995E95(iLocal_85, 0, 0, 1, 0);
		unk_0xE3752B10DC995E95(iLocal_85, 2, 1, 2, 0);
		unk_0xE3752B10DC995E95(iLocal_85, 3, 0, 2, 0);
		unk_0xE3752B10DC995E95(iLocal_85, 4, 0, 2, 0);
		unk_0x7CD708DEB04F8474(iLocal_102, 1);
		iLocal_171 = unk_0xBA715A7BEBA5A1F9(iLocal_102, -3088.068f, 730.4819f, 20.3028f, 332.2996f, 1, 1, 0);
		unk_0x2EE80CD0EAEB9B5B(iLocal_171, 150f);
		unk_0x2476BE9932670CAD(iLocal_171, 4, 0, 0);
		unk_0xF838539C61C30896(iLocal_171, 0);
		unk_0xF1A23B343DFEDFD0(iLocal_102);
		unk_0x49D97B076E3590AC(iLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
	}
	else if (iLocal_60 == 2)
	{
		unk_0xE3752B10DC995E95(iLocal_85, 0, 0, 1, 0);
		unk_0xE3752B10DC995E95(iLocal_85, 2, 0, 1, 0);
		unk_0xE3752B10DC995E95(iLocal_85, 3, 0, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_85, 4, 0, 1, 0);
		unk_0xE3752B10DC995E95(iLocal_85, 8, 1, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_85, 10, 0, 0, 0);
		unk_0x49D97B076E3590AC(iLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0x2915D98110F23A29(Local_93 - Vector(20f, 50f, 50f), Local_93 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		func_191(1);
	}
	else if (iLocal_60 == 3)
	{
		unk_0xE3752B10DC995E95(iLocal_85, 0, 0, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_85, 2, 1, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_85, 3, 0, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_85, 4, 1, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_85, 8, 0, 0, 0);
		unk_0x49D97B076E3590AC(iLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0x2915D98110F23A29(Local_93 - Vector(20f, 50f, 50f), Local_93 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	}
	else if (iLocal_60 == 5)
	{
	}
	iLocal_59 = 1;
}

void func_191(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_112442, unk_0x05CBA41180F5D521(), 24);
		Global_112436 = 1;
	}
	else
	{
		StringCopy(&Global_112442, "NULL", 24);
		Global_112436 = 0;
	}
}

void func_192(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_196(iParam0, 2, 1))
		{
			func_195(iParam0, 2, 1);
		}
	}
	else if (func_196(iParam0, 2, 1))
	{
		func_193(iParam0, 2, 1);
	}
}

void func_193(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xB0550BC91B0159D6(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_32() == 0)
		{
			uVar0 = func_51(func_194(iParam0), -1, 0);
			unk_0xB0550BC91B0159D6(&uVar0, bParam1);
			func_49(func_194(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_194(int iParam0)
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

void func_195(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_32() == 0)
		{
			uVar0 = func_51(func_194(iParam0), -1, 0);
			unk_0xCED9E32812D6C7C7(&uVar0, iParam1);
			func_49(func_194(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Global_113386.f_668[iParam0]), iParam1);
	}
}

int func_196(int iParam0, int iParam1, bool bParam2)
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
		if (func_32() == 0)
		{
			return BitTest(func_51(func_194(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_197(int iParam0)
{
	if (func_200())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x320D1840B6DAA1CC();
		if (func_37(Global_113375))
		{
			func_198(0);
		}
		unk_0xEFE837B21D5CF02C(1, "RE_TITLE");
		if (iParam0 && func_37(Global_113375))
		{
			unk_0xC70E97154CC5B243();
		}
		return 1;
	}
	return 0;
}

void func_198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_179(func_199(iParam0), -1);
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
					func_179(func_199(iParam0), -1);
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
					func_179(func_199(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0xCED9E32812D6C7C7(&Global_113382, 2);
				}
			}
			break;
	}
}

char* func_199(int iParam0)
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

int func_200()
{
	switch (func_201(&Global_32019, 0, 5, 0, unk_0x69CE66B03B2184EB()))
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

int func_201(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_205(0))
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
		if (!func_203(iParam2))
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
			func_202(uParam0, iParam4);
		}
	}
	return 2;
}

void func_202(var uParam0, int iParam1)
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

bool func_203(int iParam0)
{
	return func_204(iParam0, Global_43052);
}

int func_204(int iParam0, int iParam1)
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

int func_205(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_203(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_206()
{
	if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return 1;
	}
	if (!unk_0x55B23FE400FCEA6B(iLocal_85, 0))
	{
		if (unk_0x0747E45CFF1F74AA(iLocal_85, unk_0xE2D3D51028F0428A(), 1))
		{
			return 1;
		}
		if (!unk_0x55B23FE400FCEA6B(unk_0x9993EF7FDBCDB632(), 0))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_85, unk_0x9993EF7FDBCDB632(), 1))
			{
				return 1;
			}
		}
		if (!bLocal_114)
		{
			if (unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(iLocal_85, 1), 10f, 1) || unk_0x863026E0C5C2E52B(unk_0x6B62510F212526DC(iLocal_85, 1) - Vector(10f, 10f, 10f), unk_0x6B62510F212526DC(iLocal_85, 1) + Vector(10f, 10f, 10f), 0))
			{
				return 1;
			}
		}
		else if (unk_0xF68107C40359970C(iLocal_86) && unk_0xE5965CDF24F93A9F(iLocal_86))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_86, unk_0xE2D3D51028F0428A(), 1) && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 7))
			{
				if (!unk_0xF68107C40359970C(iLocal_85))
				{
					unk_0x35083F820751423C(iLocal_85, 6, 0, 0);
				}
				return 1;
			}
		}
		if ((!unk_0x611AD675982BEBCC(iLocal_85) && unk_0x2E7F5417D4F4DD69(iLocal_85, unk_0xE2D3D51028F0428A(), 90f)) && unk_0x77A43AFA9AAEC041(iLocal_85, unk_0xE2D3D51028F0428A(), 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_85) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_85))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_207()
{
	unk_0xD69A0C3662175E68(iLocal_100);
	unk_0x8FB472886552D737("random@hitch_lift");
	if (iLocal_60 == 1 || iLocal_60 == 5)
	{
		unk_0xD69A0C3662175E68(iLocal_102);
	}
	if (iLocal_60 == 1)
	{
		unk_0xF30CF8286FBA13D7(0);
		unk_0x70F555A7CCF10659("timer", 0, -1);
	}
	else if (iLocal_60 == 3)
	{
		unk_0x8FB472886552D737("facials@gen_female@base");
	}
	if (unk_0x0152AA00FA3130F1(iLocal_100) && unk_0x6F940C2636C076AD("random@hitch_lift"))
	{
		if (iLocal_60 == 1 || iLocal_60 == 5)
		{
			if (unk_0x0152AA00FA3130F1(iLocal_102))
			{
				bLocal_61 = true;
			}
		}
		else if (iLocal_60 == 3)
		{
			if (unk_0x6F940C2636C076AD("facials@gen_female@base"))
			{
				bLocal_61 = true;
			}
		}
		else
		{
			bLocal_61 = true;
		}
	}
	else
	{
		unk_0xD69A0C3662175E68(iLocal_100);
		unk_0x8FB472886552D737("random@hitch_lift");
		if (iLocal_60 == 1 || iLocal_60 == 5)
		{
			unk_0xD69A0C3662175E68(iLocal_102);
		}
		else if (iLocal_60 == 3)
		{
			unk_0x8FB472886552D737("facials@gen_female@base");
		}
	}
}

void func_208()
{
	if (iLocal_60 == 1)
	{
		Local_90 = { -3086.052f, 735.5091f, 20.4883f };
		fLocal_96 = 17.9234f;
		Local_93 = { -1053.344f, -2539.327f, 19.0394f };
		iLocal_100 = joaat("a_m_m_business_01");
		cLocal_178 = "REHH1AU";
		sLocal_179 = "BUSINESSMAN";
		sLocal_181 = "BUSINESSMAN";
		iLocal_102 = joaat("schafter2");
	}
	else if (iLocal_60 == 2)
	{
		Local_90 = { 196.7701f, 4427.757f, 72.2673f };
		fLocal_96 = 75.9173f;
		Local_93 = { 3328.828f, 5154.456f, 17.2894f };
		iLocal_100 = joaat("a_f_y_hiker_01");
		cLocal_178 = "REHH2AU";
		sLocal_179 = "REHH2Hiker";
		sLocal_181 = "REHH2Hiker";
	}
	else if (iLocal_60 == 3)
	{
		Local_90 = { 2745.026f, 4386.827f, 47.8636f };
		fLocal_96 = 19.4143f;
		Local_93 = { 814.455f, 1274.797f, 359.5112f };
		Local_104 = { 804.2382f, 1269.589f, 359.3557f };
		fLocal_107 = 340.7372f;
		iLocal_100 = joaat("a_f_y_hipster_03");
		iLocal_101 = joaat("s_m_m_security_01");
		cLocal_178 = "REHH3AU";
		sLocal_179 = "REHH3Hipster";
		sLocal_181 = "REHH3Hipster";
		sLocal_180 = "REHH3Security";
	}
	else if (iLocal_60 == 5)
	{
		Local_90 = { -324.0379f, 2818.034f, 58.4498f };
		fLocal_96 = 56.5422f;
		Local_93 = { -344.0339f, 634.4108f, 171.2902f };
		iLocal_100 = joaat("ig_bride");
		iLocal_101 = joaat("a_m_y_business_01");
		cLocal_178 = "REHH5AU";
		sLocal_179 = "REHH5Bride";
		sLocal_181 = "REHH5Bride";
		sLocal_180 = "REHH5Groom";
		iLocal_102 = joaat("patriot");
	}
	iLocal_62 = 1;
}

int func_209()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_220())
		{
			return 0;
		}
	}
	if (func_216())
	{
		return 1;
	}
	if (func_210(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_210(float fParam0, bool bParam1)
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
		if (func_15(func_13()))
		{
			iVar36 = func_42();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113386.f_18574[iVar32 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar32 /*6*/], 3))
				{
					func_211(iVar32, &Var0);
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

void func_211(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_212(uParam1, "Abigail1", func_214(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 1:
			func_212(uParam1, "Abigail2", func_214(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 2:
			func_212(uParam1, "Barry1", func_214(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 3:
			func_212(uParam1, "Barry2", func_214(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_213(iParam0), 1, 1);
			break;
		
		case 4:
			func_212(uParam1, "Barry3", func_214(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 5:
			func_212(uParam1, "Barry3A", func_214(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 6:
			func_212(uParam1, "Barry3C", func_214(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 7:
			func_212(uParam1, "Barry4", func_214(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_213(iParam0), 0, 0);
			break;
		
		case 8:
			func_212(uParam1, "Dreyfuss1", func_214(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 9:
			func_212(uParam1, "Epsilon1", func_214(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 10:
			func_212(uParam1, "Epsilon2", func_214(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 11:
			func_212(uParam1, "Epsilon3", func_214(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 12:
			func_212(uParam1, "Epsilon4", func_214(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 13:
			func_212(uParam1, "Epsilon5", func_214(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 14:
			func_212(uParam1, "Epsilon6", func_214(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 15:
			func_212(uParam1, "Epsilon7", func_214(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 16:
			func_212(uParam1, "Epsilon8", func_214(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 17:
			func_212(uParam1, "Extreme1", func_214(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 18:
			func_212(uParam1, "Extreme2", func_214(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 19:
			func_212(uParam1, "Extreme3", func_214(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 20:
			func_212(uParam1, "Extreme4", func_214(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 21:
			func_212(uParam1, "Fanatic1", func_214(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_213(iParam0), 1, 0);
			break;
		
		case 22:
			func_212(uParam1, "Fanatic2", func_214(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_213(iParam0), 1, 0);
			break;
		
		case 23:
			func_212(uParam1, "Fanatic3", func_214(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_213(iParam0), 0, 1);
			break;
		
		case 24:
			func_212(uParam1, "Hao1", func_214(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_213(iParam0), 0, 1);
			break;
		
		case 25:
			func_212(uParam1, "Hunting1", func_214(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 26:
			func_212(uParam1, "Hunting2", func_214(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 27:
			func_212(uParam1, "Josh1", func_214(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 28:
			func_212(uParam1, "Josh2", func_214(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_213(iParam0), 1, 1);
			break;
		
		case 29:
			func_212(uParam1, "Josh3", func_214(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_213(iParam0), 1, 1);
			break;
		
		case 30:
			func_212(uParam1, "Josh4", func_214(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 31:
			func_212(uParam1, "Maude1", func_214(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 32:
			func_212(uParam1, "Minute1", func_214(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 33:
			func_212(uParam1, "Minute2", func_214(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 34:
			func_212(uParam1, "Minute3", func_214(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 35:
			func_212(uParam1, "MrsPhilips1", func_214(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 36:
			func_212(uParam1, "MrsPhilips2", func_214(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 37:
			func_212(uParam1, "Nigel1", func_214(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 38:
			func_212(uParam1, "Nigel1A", func_214(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_213(iParam0), 1, 1);
			break;
		
		case 39:
			func_212(uParam1, "Nigel1B", func_214(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_213(iParam0), 1, 1);
			break;
		
		case 40:
			func_212(uParam1, "Nigel1C", func_214(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_213(iParam0), 1, 1);
			break;
		
		case 41:
			func_212(uParam1, "Nigel1D", func_214(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_213(iParam0), 1, 1);
			break;
		
		case 42:
			func_212(uParam1, "Nigel2", func_214(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_213(iParam0), 1, 1);
			break;
		
		case 43:
			func_212(uParam1, "Nigel3", func_214(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_213(iParam0), 1, 1);
			break;
		
		case 44:
			func_212(uParam1, "Omega1", func_214(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 45:
			func_212(uParam1, "Omega2", func_214(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 46:
			func_212(uParam1, "Paparazzo1", func_214(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 47:
			func_212(uParam1, "Paparazzo2", func_214(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 48:
			func_212(uParam1, "Paparazzo3", func_214(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 49:
			func_212(uParam1, "Paparazzo3A", func_214(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 50:
			func_212(uParam1, "Paparazzo3B", func_214(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 51:
			func_212(uParam1, "Paparazzo4", func_214(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 52:
			func_212(uParam1, "Rampage1", func_214(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 54:
			func_212(uParam1, "Rampage3", func_214(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 55:
			func_212(uParam1, "Rampage4", func_214(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 56:
			func_212(uParam1, "Rampage5", func_214(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 53:
			func_212(uParam1, "Rampage2", func_214(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 57:
			func_212(uParam1, "TheLastOne", func_214(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 58:
			func_212(uParam1, "Tonya1", func_214(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 59:
			func_212(uParam1, "Tonya2", func_214(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 60:
			func_212(uParam1, "Tonya3", func_214(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 61:
			func_212(uParam1, "Tonya4", func_214(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 62:
			func_212(uParam1, "Tonya5", func_214(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_212(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_213(int iParam0)
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

struct<2> func_214(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_215(iParam0) };
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

struct<2> func_215(int iParam0)
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

int func_216()
{
	if (func_219() && !func_220())
	{
		return 1;
	}
	if (func_218() && func_217())
	{
		return 1;
	}
	return 0;
}

bool func_217()
{
	return Global_113104 > 0;
}

int func_218()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_220()
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

int func_221()
{
	if (!func_203(5))
	{
		return 1;
	}
	if (func_216())
	{
		return 1;
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_220())
		{
			return 0;
		}
	}
	if (func_210(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_222()
{
	if ((Global_113375 == func_46() && unk_0xE3BBDB1C36703410()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_223(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_46();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_225(iParam0);
	unk_0xEEEFCC23227A8148(0);
	unk_0xA560174A439E78F1(1);
	Global_113372 = 0;
	func_224();
}

void func_224()
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

void func_225(int iParam0)
{
	Global_113375 = iParam0;
}

int func_226(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_46();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_254())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_220())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_27(0))
		{
			return 0;
		}
		if (func_216())
		{
			return 0;
		}
		if (func_253())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_15(func_13()))
		{
			if (func_210(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_252(iParam3))
		{
			return 0;
		}
		if (func_15(func_13()))
		{
			if (func_251(func_13()) == 4 || func_251(func_13()) == 5)
			{
				return 0;
			}
		}
		if (func_15(func_13()))
		{
			if (!func_250(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_249(Global_113386.f_24995.f_43[iParam3]))
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
		if (func_248())
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
		if (!func_239(4))
		{
			return 0;
		}
		if (!func_203(5))
		{
			return 0;
		}
		if (func_238(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_238(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_252(30) && !func_238(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_15(func_13()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113386.f_2363.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113386.f_2363.f_539.f_2296[iVar4];
				if (func_237(iVar8))
				{
					if (func_228(iVar4))
					{
						if (!func_227(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var5) < (210f * 210f))
							{
								if (func_13() != iVar4)
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

bool func_227(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_228(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_229(iVar0);
}

int func_229(int iParam0)
{
	return func_230(iParam0, 1);
}

int func_230(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_237(iParam0))
	{
		return 0;
	}
	func_231(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_231(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_232(func_166(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_232(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_236(iParam0, iParam1))
	{
		iVar0 = func_173(iParam1);
		iVar1 = func_171(iParam0);
		iVar2 = (func_171(iParam0) - func_171(iParam1));
		iVar3 = (func_173(iParam0) - func_173(iParam1));
		iVar4 = (func_235(iParam0) - func_235(iParam1));
		iVar5 = (func_164(iParam0) - func_164(iParam1));
		iVar6 = (func_165(iParam0) - func_165(iParam1));
		iVar7 = (func_234(iParam0) - func_234(iParam1));
	}
	else
	{
		iVar0 = func_173(iParam0);
		iVar1 = func_171(iParam1);
		iVar2 = (func_171(iParam1) - func_171(iParam0));
		iVar3 = (func_173(iParam1) - func_173(iParam0));
		iVar4 = (func_235(iParam1) - func_235(iParam0));
		iVar5 = (func_164(iParam1) - func_164(iParam0));
		iVar6 = (func_165(iParam1) - func_165(iParam0));
		iVar7 = (func_234(iParam1) - func_234(iParam0));
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
		iVar4 = (iVar4 + func_170(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_233(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_233(float fParam0, float fParam1, float fParam2)
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

int func_234(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_235(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_236(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_237(iParam1) || !func_237(iParam0))
	{
		return 1;
	}
	iVar0 = func_171(iParam0);
	iVar1 = func_171(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_235(iParam0);
	iVar1 = func_235(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_164(iParam0);
	iVar1 = func_164(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_165(iParam0);
	iVar1 = func_165(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_234(iParam0);
	iVar1 = func_234(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)
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
	iVar0 = func_234(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_165(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_164(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_171(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_173(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_235(iParam0);
	if (iVar5 < 1 || iVar5 > func_170(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_238(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_13();
				if (!func_15(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_247()) || Global_112433) || Global_31962) || func_246()) || func_21(8, -1)) || func_245()) || func_244()) || func_243()) || func_242()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_247()) || Global_31962) || func_246()) || func_21(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_247()) || Global_112433) || Global_31962) || func_246()) || func_21(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_247()) || Global_112433) || Global_31962) || func_246()) || func_21(8, -1)) || func_245()) || func_244()) || func_242()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_247() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_21(8, -1)) || func_242()) || func_241()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_21(8, -1) || func_245()) || func_244()) || func_241()) || func_240())
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
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_247()) || Global_31962) || func_246()) || func_21(8, -1)) || func_244()) || func_243()) || func_242()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_247()) || func_244()) || Global_112433) || Global_31962) || func_246()) || Global_44238) || func_21(8, -1)) || func_243()) || func_241()) || func_242()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_247()) || Global_112433) || Global_31962) || func_246()) || func_21(8, -1)) || func_243()) || func_241()) || func_245()) || func_244()) || func_242())
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

var func_240()
{
	return Global_100480.f_1;
}

int func_241()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_242()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_243()
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

bool func_244()
{
	return Global_100493.f_376 > 0;
}

bool func_245()
{
	return Global_100493.f_375 > 0;
}

var func_246()
{
	return Global_1575058;
}

int func_247()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_248()
{
	func_12();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_249(int iParam0)
{
	return func_236(func_166(), iParam0);
}

int func_250(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_13();
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

int func_251(int iParam0)
{
	if (!func_15(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_254())
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

int func_253()
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

int func_254()
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

void func_255()
{
	if (iLocal_143)
	{
		func_276(0);
		if (Global_32201)
		{
			unk_0x1CF3F44FC2EB9F99("AC_STOP");
		}
		func_275();
		unk_0xEC6D4F9C59CDA6F5();
		func_191(0);
		if (unk_0x4131052989DE1278())
		{
			unk_0xBD1E8007D7DFA747(0);
		}
		if (unk_0x3F520E7ECF3381A3())
		{
			unk_0x408CF406C7D78D6F(0);
		}
		Global_32299[0 /*7*/].f_6 = 0;
		func_267(0, 1, 1, 0, 0, 0, 0);
		func_61();
		if (unk_0xE5965CDF24F93A9F(iLocal_85))
		{
			if (!unk_0xF68107C40359970C(iLocal_85))
			{
				unk_0xD6A76BAB45A4B460(iLocal_85, 317, 1);
				if (!unk_0xD5C6B5E3B93A5EDC(iLocal_85, 0))
				{
					unk_0x4731A59F8DC19173(iLocal_85);
				}
				if (iLocal_60 != 2)
				{
					unk_0xCA2872F050840231(iLocal_85);
				}
				if (unk_0x174CED88B97C78D9(iLocal_85, joaat("script_task_smart_flee_ped")) != 1 && unk_0x174CED88B97C78D9(iLocal_85, joaat("script_task_smart_flee_ped")) != 0)
				{
					unk_0x50274A7EACA3133A(iLocal_85, 0);
				}
				unk_0xA7266A50941DBAEA(iLocal_85, 1);
				if (unk_0x611AD675982BEBCC(iLocal_85))
				{
					unk_0x6221A52631154EF7(iLocal_85);
				}
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_86))
		{
			if (!unk_0xF68107C40359970C(iLocal_86))
			{
				if (!unk_0x51B334B227EC8042(iLocal_86))
				{
					unk_0x50274A7EACA3133A(iLocal_86, 0);
				}
			}
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
			}
		}
	}
	unk_0xECCDAE4E977BDA96();
	if (func_222())
	{
		if (unk_0x574E2A23F0F76E35(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0x798E4BBA7A3C56AE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
		}
		if (unk_0x574E2A23F0F76E35(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0x798E4BBA7A3C56AE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
		}
	}
	func_256(-1);
	unk_0xAFBDF6A5E54114C1();
}

void func_256(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_46();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_222())
	{
		func_260(iParam0);
		unk_0xEFE837B21D5CF02C(0, 0);
		Global_113377 = unk_0x320D1840B6DAA1CC();
		func_259(30000);
		StringCopy(&cVar0, func_258(Global_113375, 1), 64);
		if (func_45(Global_113375) > 0)
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
	func_257(&Global_32019);
	Global_113376 = 0;
	func_225(-1);
}

void func_257(var uParam0)
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

char* func_258(int iParam0, bool bParam1)
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

void func_259(int iParam0)
{
	Global_43603 = (unk_0x320D1840B6DAA1CC() + iParam0);
}

void func_260(int iParam0)
{
	func_261(iParam0, 0, func_266(iParam0));
}

void func_261(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_166();
	func_264(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_263(iParam0, &uVar0);
	Var1 = { func_262(&uVar0) };
}

struct<16> func_262(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_164(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_165(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_234(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_235(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_173(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_171(*uParam0), 64);
	return Var0;
}

void func_263(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_264(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_171(*uParam0);
	iVar1 = func_173(*uParam0);
	iVar2 = func_235(*uParam0);
	iVar3 = func_164(*uParam0);
	iVar4 = func_165(*uParam0);
	iVar5 = func_234(*uParam0);
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
	iVar6 = func_170(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_170(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_265(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_265(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_176(uParam0, iParam1);
	func_175(uParam0, iParam2);
	func_174(uParam0, iParam3);
	func_168(uParam0, iParam5);
	func_169(uParam0, iParam4);
	func_167(uParam0, iParam6);
}

int func_266(int iParam0)
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

void func_267(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_274(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_10())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_273(1, iParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_274(0);
		unk_0x45227777D3EBECE5();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_273(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_271(unk_0x9E2D6C50374FCFA9())) && !func_269(unk_0x9E2D6C50374FCFA9(), 0)) && !func_268()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_271(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_78317 = 0;
	}
}

bool func_268()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 14);
}

bool func_269(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_270(-1, 0) == 8;
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

int func_270(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_35();
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

int func_271(int iParam0)
{
	if (func_269(iParam0, 0))
	{
		return 1;
	}
	if (func_272())
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

bool func_272()
{
	return BitTest(Global_2621446, 3);
}

int func_273(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_274(int iParam0)
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

void func_275()
{
	Global_32197 = 0;
	Global_32198 = 0;
	Global_32200 = 0;
	Global_32201 = 0;
	Global_32202 = 0;
}

void func_276(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_192(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_277()
{
	float fVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		fVar0 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_70, 1);
		iLocal_69 = 1;
		if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_73, 1) < fVar0)
		{
			fVar0 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_73, 1);
			iLocal_69 = 2;
		}
		if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_76, 1) < fVar0)
		{
			fVar0 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_76, 1);
			iLocal_69 = 3;
		}
		if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_79, 1) < fVar0)
		{
			fVar0 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_79, 1);
			iLocal_69 = 5;
		}
		if (iLocal_69 == 1)
		{
			bLocal_82 = true;
			iLocal_60 = 1;
			return Local_70;
		}
		else if (iLocal_69 == 2)
		{
			bLocal_82 = 2;
			iLocal_60 = 2;
			return Local_73;
		}
		else if (iLocal_69 == 3)
		{
			bLocal_82 = 3;
			iLocal_60 = 3;
			return Local_76;
		}
		else if (iLocal_69 == 5)
		{
			bLocal_82 = 4;
			iLocal_60 = 5;
			return Local_79;
		}
	}
	return 0f, 0f, 0f;
}

