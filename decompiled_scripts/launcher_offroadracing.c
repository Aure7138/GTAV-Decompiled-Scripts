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
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	struct<16> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	float fLocal_117 = 0f;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	struct<3> Local_121 = { 0, 0, 0 } ;
	int iLocal_124 = 0;
	struct<3> Local_125[5];
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150[5] = { 0, 0, 0, 0, 0 };
	float fLocal_156 = 0f;
	int iLocal_157 = 0;
	bool bLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	var uLocal_163 = 16;
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
	int iLocal_328 = 0;
	struct<100> Local_329 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
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
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
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
	Local_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	bLocal_118 = true;
	iLocal_119 = 6;
	iLocal_120 = 18;
	iLocal_124 = -1;
	bLocal_158 = true;
	iLocal_159 = 1;
	Local_90 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_90 = { Local_90 };
	iLocal_86 = iLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (unk_0x55EEDBBFDC6E810F(82))
	{
		func_153(1);
	}
	uLocal_85 = unk_0xF2CFBB1105511E1A(unk_0x93E99A2DBCBA9CFA());
	iLocal_95 = 0;
	func_151(&Global_112299, 0);
	func_145();
	unk_0x78E45C2D5AB9D24C(1);
	if (func_144(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_38596)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_144(uLocal_94, 8))
	{
		if (!func_142(iLocal_100))
		{
			if (func_141(0, iLocal_99))
			{
				func_153(0);
			}
			else
			{
				func_153(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_141(0, iLocal_99))
		{
			bLocal_118 = false;
		}
	}
	if (func_144(uLocal_94, 8388608))
	{
		func_153(1);
	}
	if (func_144(uLocal_94, 524288) && (func_140() && !func_139()))
	{
		func_153(1);
	}
	if (unk_0x24B651D85CCE5EB4(unk_0x63C7B2D430A46FC3()) > 1 && !func_144(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_138(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_137(10);
	}
	while (true)
	{
		if (!func_144(uLocal_94, 268435456))
		{
			fVar1 = 0f;
			if (unk_0xDE209AFE421606C6(ScriptParam_0.f_1[0 /*3*/], &fVar1, 0, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_0.f_1[0 /*3*/].f_2 = fVar1;
					func_136(&uLocal_94, 268435456);
				}
			}
		}
		uLocal_85 = unk_0xF2CFBB1105511E1A(unk_0x93E99A2DBCBA9CFA());
		if (func_144(uLocal_94, 1048576))
		{
			if (unk_0x055111B11E6624FD(uLocal_85, 0))
			{
				func_153(1);
			}
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_85) && !unk_0x055111B11E6624FD(iLocal_85, 0))
		{
			Local_87 = { unk_0x30BE8A934C020461(iLocal_85, 1) };
			fLocal_93 = unk_0xB7A628320EFF8E47(Local_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			Local_111 = { Local_87 };
			Local_114 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_111.f_2 = 0f;
			Local_114.f_2 = 0f;
			fLocal_110 = unk_0xB7A628320EFF8E47(Local_111, Local_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_142(iLocal_100) || (func_144(uLocal_94, 16) && !func_144(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_132();
						func_137(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_138(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_137(10);
						}
						if ((Local_87.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_130() && fLocal_93 > ((fLocal_117 * 1.5f) * (fLocal_117 * 1.5f)))
					{
						iLocal_103 = iLocal_103;
						func_137(3);
					}
					else
					{
						func_132();
					}
					break;
				
				case 3:
					if (unk_0xE3C3FF8D5649A77D())
					{
						func_153(1);
						return;
					}
					if (!func_142(iLocal_100))
					{
						if (!func_144(uLocal_94, 8))
						{
							bVar2 = true;
							if (unk_0x4310A0DB886F9FED(&(Global_100681.f_3), &Local_69))
							{
								Local_69 = { Local_53 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_153(0);
								break;
							}
						}
					}
					if (!func_144(uLocal_94, 4))
					{
						func_119();
						func_136(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_100715)
					{
						if (iLocal_105 != 263)
						{
							if (func_118(6) && !func_117(iLocal_105))
							{
							}
							else
							{
								func_138(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_137(10);
					}
					else
					{
						Local_69 = { Local_53 };
						bVar3 = !func_144(uLocal_94, 64);
						func_151(&uLocal_94, 128);
						if (!func_116(3) && !Global_100715)
						{
							if (func_144(uLocal_94, 2097152))
							{
								if ((!func_144(uLocal_94, 1) || !unk_0x7DE17ACDD8BA2642(func_115())) && !Global_100715)
								{
									func_137(10);
									break;
								}
							}
						}
						if (func_144(uLocal_94, 524288) && (func_140() && !func_139()))
						{
							func_153(1);
						}
						if (func_114())
						{
							func_153(1);
						}
						if ((!func_106(6) || Global_112695) || func_105())
						{
							bVar3 = false;
						}
						if (!bLocal_118)
						{
							func_103(&uLocal_94, 128);
							bVar3 = false;
						}
						if (func_144(uLocal_94, 1))
						{
							if (!func_102())
							{
								func_103(&uLocal_94, 128);
								bVar3 = false;
							}
						}
						if (func_101(1))
						{
							bVar3 = false;
						}
						if (Global_78558)
						{
							bVar3 = false;
						}
						if (func_100())
						{
							bVar3 = false;
						}
						if (unk_0xB53553DC4AAC7D8A())
						{
							bVar3 = false;
						}
						if (func_99() || func_98(8, -1))
						{
							bVar3 = false;
						}
						if (!unk_0xF66F9ECA31DB2AB0(unk_0x93E99A2DBCBA9CFA()))
						{
							bVar3 = false;
						}
						if (!unk_0x2E27C24397D7F166(unk_0x93E99A2DBCBA9CFA()))
						{
							bVar3 = false;
						}
						if (func_97(0) || func_96())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!unk_0x1C4E4DC1EFE24DF1(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar3 = false;
							}
							iVar4 = unk_0x30DFE1FFD2CC7420();
							if (iLocal_119 > iLocal_120)
							{
								if (iVar4 < iLocal_119 && iVar4 >= iLocal_120)
								{
									func_103(&uLocal_94, 128);
									bVar3 = false;
									if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
									{
										if (!func_144(uLocal_94, 134217728))
										{
											func_95("MG_NA_TIME", iLocal_119, iLocal_120);
											func_103(&uLocal_94, 134217728);
										}
									}
									else
									{
										func_151(&uLocal_94, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_119 || iVar4 >= iLocal_120)
							{
								func_103(&uLocal_94, 128);
								bVar3 = false;
								if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
								{
									if (!func_144(uLocal_94, 134217728))
									{
										func_95("MG_NA_TIME", iLocal_119, iLocal_120);
										func_103(&uLocal_94, 134217728);
									}
								}
								else
								{
									func_151(&uLocal_94, 134217728);
								}
							}
							if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0x4150CF46B891FFF5(0, 51);
								if (func_94(iLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_93(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_103(&uLocal_94, 2048);
									}
									else if (!func_144(uLocal_94, 2048) || !unk_0xF0E4B64AC0B5660E())
									{
										func_92(&iLocal_96);
										func_151(&uLocal_94, 2048);
									}
									if (func_90(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_92(&iLocal_96);
										func_151(&uLocal_94, 2048);
										unk_0x3EC562D93709C894(&Local_69);
										unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 56);
										func_137(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_92(&iLocal_96);
									func_151(&uLocal_94, 2048);
									unk_0x3EC562D93709C894(&Local_69);
									unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 56);
									func_137(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_96 != -1)
							{
								func_92(&iLocal_96);
								func_151(&uLocal_94, 2048);
								unk_0xCD3C8E1022864F65(0);
							}
						}
					}
					func_52();
					break;
				
				case 5:
					unk_0x4150CF46B891FFF5(0, 51);
					if (unk_0x6CAF14BE58B4BFF8(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_92(&iLocal_96);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_144(uLocal_94, 1))
						{
							if (func_118(6) || func_118(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_49(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!unk_0x055111B11E6624FD(iLocal_86, 0))
							{
								unk_0x0E4B6CF706BE8AA4(&iLocal_86);
							}
							if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
							{
								unk_0xE90EAC9EC6471EB9(unk_0x93E99A2DBCBA9CFA());
							}
							func_48();
							if (Global_44446)
							{
								func_39(unk_0xC1A5EC5C986B98AD());
							}
							unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 56);
							uLocal_52 = func_38();
							func_103(&uLocal_94, 2);
							func_137(6);
							func_34(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_33(iLocal_99);
								func_31(func_32(iLocal_99), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_30();
						}
						else if (iVar5 == 0)
						{
							func_137(10);
						}
					}
					else
					{
						func_30();
					}
					break;
				
				case 6:
					if (func_144(Global_112299, 262144))
					{
						func_151(&Global_112299, 262144);
						func_29();
					}
					if (func_144(uLocal_94, 2097152))
					{
						if (!func_116(3) && !unk_0xB8CEC43FB7EF2D92(uLocal_52))
						{
							func_137(10);
						}
					}
					if (!unk_0xB8CEC43FB7EF2D92(uLocal_52))
					{
						unk_0xD094BE9EF72C6999(unk_0xF2DB717A73826179((func_25(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_24(&uLocal_107);
						func_151(&uLocal_94, 256);
						func_21();
						if (bVar0)
						{
							func_151(&uLocal_94, 2);
						}
						else if (func_144(uLocal_94, 2))
						{
							if (func_144(Global_112299, 0))
							{
								func_20(&iLocal_98);
								iLocal_98 = -1;
								func_151(&uLocal_94, 2);
							}
							else
							{
								func_20(&iLocal_98);
								iLocal_98 = -1;
								func_151(&uLocal_94, 2);
							}
						}
						func_137(0);
						if (iLocal_99 != -1)
						{
							if (func_144(Global_112299, 0))
							{
								unk_0x427014D38567361E(func_32(iLocal_99), 0, Global_100718, 0);
								func_19(func_32(iLocal_99), 0, Global_100718, 1, 0);
							}
							else
							{
								unk_0x427014D38567361E(func_32(iLocal_99), 0, Global_100718, 0);
								func_19(func_32(iLocal_99), 0, Global_100718, 0, 0);
							}
						}
						func_5();
						func_151(&Global_112299, 0);
						if (func_144(uLocal_94, 16777216))
						{
							func_153(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_113648.f_9087)
							{
								if (!func_141(0, iLocal_99))
								{
									func_153(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_137(0);
					break;
				
				case 10:
					func_153(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_138(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_137(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_138(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_92(&iLocal_96);
					}
					if (!unk_0x2AC37494BBF1DB16(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0xCD3C8E1022864F65(1);
						}
					}
					func_137(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_142(iLocal_100) && func_141(0, iLocal_99))
									{
										func_145();
										if (iLocal_105 != 263)
										{
											func_138(iLocal_105, 1, 0);
										}
										func_137(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_138(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_137(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_145();
									if (iLocal_105 != 263)
									{
										func_138(iLocal_105, 1, 0);
									}
									func_137(0);
								}
							}
						}
						else
						{
							func_138(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

void func_2()
{
	char* sVar0;
	
	func_3(&(Local_329.f_71));
	func_3(&(Local_329.f_77));
	func_3(&(Local_329.f_99));
	unk_0x0B34FA69ECCE3927("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x0B34FA69ECCE3927("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x0B34FA69ECCE3927("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x0B34FA69ECCE3927("amb@world_human_aa_smoke@male@idle_a");
	unk_0x0B34FA69ECCE3927("random@street_race");
	unk_0x0B34FA69ECCE3927("gestures@m@standing@casual");
	switch (iLocal_124)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!unk_0x2AC37494BBF1DB16(sVar0))
	{
		if (unk_0xAA23EFB660B488C8(sVar0))
		{
			if (unk_0xACC2F57D4FC0353D(sVar0))
			{
				unk_0xC5090431EE763EA5(sVar0, 0);
			}
		}
	}
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xE0A291F406691F03((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
	if (func_144(Global_113648.f_19018, 1))
	{
		func_151(&(Global_113648.f_19018), 1);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_100720.f_8)
	{
		if (Global_100720.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100720.f_10 > 1)
	{
		return 0;
	}
	Global_100720.f_10++;
	return 1;
}

int func_7(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_8()
{
	if (Global_113648.f_19018.f_18 < Global_113648.f_19018.f_19[iLocal_124] || Global_113648.f_19018.f_19[iLocal_124] == 0)
	{
		Global_113648.f_19018.f_19[iLocal_124] = Global_113648.f_19018.f_18;
		Global_113648.f_19018.f_18 = 999;
	}
	if (iLocal_124 == Global_113648.f_19018.f_1 || Global_113648.f_19018.f_1 == -1)
	{
		if (Global_113648.f_19018.f_1 != 5)
		{
			Global_113648.f_19018.f_1++;
			switch (Global_113648.f_19018.f_1)
			{
				case 1:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					break;
				
				case 2:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					break;
				
				case 3:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					break;
				
				case 4:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					func_17(73, 1);
					func_138(74, 1, 0);
					break;
				
				case 5:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					func_17(73, 1);
					func_138(74, 1, 0);
					func_17(74, 1);
					func_138(75, 1, 0);
					break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_138(70, 1, 0);
			func_17(70, 1);
			func_138(71, 1, 0);
			func_17(71, 1);
			func_138(73, 1, 0);
			func_17(73, 1);
			func_138(74, 1, 0);
			func_17(74, 1);
			func_138(75, 1, 0);
			func_17(75, 1);
			func_138(72, 1, 0);
			func_17(72, 1);
		}
		switch (Global_113648.f_19018.f_1)
		{
			case 0:
				func_13(70);
				func_9(71);
				break;
			
			case 1:
				func_13(71);
				func_9(72);
				break;
			
			case 2:
				func_13(72);
				func_9(73);
				break;
			
			case 3:
				func_13(73);
				func_9(74);
				break;
			
			case 4:
				func_13(74);
				func_9(75);
				break;
			
			case 5:
				func_13(75);
				break;
			}
	}
}

void func_9(int iParam0)
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32543[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 4);
	}
	if (Global_32540 == 1)
	{
		Global_32541 = 1;
	}
	Global_32540 = 1;
	unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 18);
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32543[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 5);
	}
	if (Global_32540 == 1)
	{
		Global_32541 = 1;
	}
	Global_32540 = 1;
	unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 18);
}

void func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32543[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 11);
	}
	if (Global_32540 == 1)
	{
		Global_32541 = 1;
	}
	Global_32540 = 1;
	unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 18);
}

void func_13(int iParam0)
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x4310A0DB886F9FED(sParam0, ""))
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
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (unk_0x4310A0DB886F9FED(&(Global_113648.f_20412[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113648.f_20412.f_145 < 9)
	{
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = (unk_0xA5E11AF0A2B928C1() + iParam3);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = uParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = ((unk_0xA5E11AF0A2B928C1() + iParam3) + iParam4);
		}
		else
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
		}
		Global_113648.f_20412.f_145++;
		func_16();
	}
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113648.f_20412.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[0])
			{
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[1])
			{
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[2])
			{
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_17(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32543[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 20);
	}
	if (Global_32540 == 1)
	{
		Global_32541 = 1;
	}
	Global_32540 = 1;
	unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 20);
}

void func_18()
{
	unk_0x1090804F1F0FF051();
	unk_0x0F5EB15BF7EFF776();
	switch (iLocal_124)
	{
		case 0:
			unk_0x90DA349CD13C7839(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
		
		case 1:
			unk_0x90DA349CD13C7839(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 1);
			break;
		
		case 3:
			unk_0x90DA349CD13C7839(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			unk_0x90DA349CD13C7839(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
		
		case 2:
			unk_0x90DA349CD13C7839(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0x2AC37494BBF1DB16(&Global_97751))
	{
		return;
	}
	if (unk_0xBE3B8FE3E8A8E9B8(sParam0, &Global_97751, 0, -1) != 0)
	{
		return;
	}
	unk_0x83332E38D6284FF5(sParam0, iParam1, iParam2, iParam3, iParam4, Global_94858);
	StringCopy(&Global_97751, "", 64);
}

void func_20(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43219)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = 0;
	Global_63360 = 0;
}

void func_21()
{
	char cVar0[24];
	
	if (unk_0xCCE9BCDAB8B7FAED() || func_23())
	{
		unk_0x989939160154E37F(StackVal, 0, 0, 0);
	}
	else if (unk_0x674D69D3896862C7() || func_22())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x98F31DBBB3410994(0, &cVar0);
	}
}

var func_22()
{
	return (unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A());
}

var func_23()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
}

void func_24(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_25(var uParam0)
{
	if (func_28(uParam0))
	{
		if (func_27(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_26(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_26(bool bParam0)
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

bool func_27(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_28(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_29()
{
	func_8();
	return 1;
}

void func_30()
{
}

void func_31(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2AC37494BBF1DB16(&Global_97751))
	{
		unk_0x83332E38D6284FF5(&Global_97751, 0, 0, 0, 1, 0);
		StringCopy(&Global_97751, "", 64);
	}
	StringCopy(&Global_97751, sParam0, 64);
	unk_0x363D7D2154F0040D(sParam0, iParam1, iParam2, func_7(0));
}

char* func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_33(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xCCE9BCDAB8B7FAED() || func_23())
	{
		uVar0 = iParam0;
		unk_0x989939160154E37F(8, &uVar0, 1, 1);
	}
	else if (unk_0x674D69D3896862C7() || func_22())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x98F31DBBB3410994(8, &cVar1);
	}
}

void func_34(var uParam0)
{
	if (!func_28(uParam0))
	{
		func_37(uParam0);
	}
	else
	{
		func_35(uParam0);
	}
}

void func_35(var uParam0)
{
	func_36(uParam0, 0f);
}

void func_36(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_26(BitTest(*uParam0, 4)) - fParam1);
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_37(var uParam0)
{
	if (!func_28(uParam0))
	{
		func_35(uParam0);
	}
}

int func_38()
{
	struct<18> Var0;
	int iVar18;
	int iVar19;
	
	unk_0xCD3C8E1022864F65(1);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0.f_0 = iLocal_124;
	Var0.f_1 = { Local_121 };
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < Var0.f_4)
	{
		Var0.f_4[iVar18] = Local_329[iVar18 /*14*/];
		Var0.f_10[iVar18] = Local_329[iVar18 /*14*/].f_1;
		iVar18++;
	}
	Var0.f_16 = Local_329.f_83;
	Var0.f_17 = Local_329.f_83.f_1;
	unk_0x451128B7D435FBF2("SwitchSceneNeutral", 0, 1);
	unk_0x4EDE34FBADD967A6(400);
	iVar19 = unk_0xB8BA7F44DF1575E1(&Local_53, &Var0, 18, iLocal_97);
	unk_0x037A80676B8FF0F5(&Local_53);
	return iVar19;
}

void func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return;
	}
	iVar0 = func_47(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44232[iVar0 /*5*/];
		func_42(1, iVar1, 1);
		return;
	}
	iVar2 = func_41(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_40(iVar2);
}

void func_40(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_44206[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_44206[iParam0 /*5*/].f_1 == unk_0xC1A5EC5C986B98AD())
		{
			Global_44444 = 0;
		}
	}
	Global_44206[iParam0 /*5*/] = 13;
	Global_44206[iParam0 /*5*/].f_1 = 0;
	Global_44206[iParam0 /*5*/].f_2 = 0;
	Global_44206[iParam0 /*5*/].f_3 = 0;
	Global_44206[iParam0 /*5*/].f_4 = 0;
	Global_44204 = (Global_44204 - 1);
	if (Global_44204 < 0)
	{
		Global_44204 = 0;
	}
}

int func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_44206[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_42(int iParam0, int iParam1, int iParam2)
{
	func_43(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_45(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_44();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44313[iVar0 /*6*/] = iParam0;
	Global_44313[iVar0 /*6*/].f_1 = iParam1;
	Global_44313[iVar0 /*6*/].f_2 = iParam2;
	Global_44313[iVar0 /*6*/].f_3 = iParam3;
	Global_44313[iVar0 /*6*/].f_4 = iParam4;
	Global_44313[iVar0 /*6*/].f_5 = iParam5;
}

int func_44()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44313[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	if (func_46(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44313[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44313[iVar0 /*6*/])
			{
				if (iParam1 == Global_44313[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_47(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44232[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44232[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_48()
{
	if (Global_9058[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9058[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9058[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9058[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9058[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9058[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x061B1200C95204CB(&Global_8253, 25);
	unk_0xECDAB41968FF21A8(&Global_8254, 11);
}

int func_49(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_51(0))
		{
			return 0;
		}
		Global_43221++;
		*iParam0 = Global_43221;
		unk_0xA7225B88CE344621(unk_0x5DC3DCA82C806319(), 0);
		Global_23131.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xDAD6345C5D317E79(8);
		}
		Global_43257 = iParam2;
		Global_43219 = *iParam0;
		Global_43220 = iParam4;
		Global_43218 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_43218 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43218)
			{
				if (Global_43224[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43219 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_142(iParam2))
		{
			return 0;
		}
		if (Global_43218 == 8)
		{
			return 0;
		}
		Global_43221++;
		*iParam0 = Global_43221;
		Global_43224[Global_43218 /*4*/] = Global_43221;
		Global_43224[Global_43218 /*4*/].f_1 = iParam1;
		Global_43224[Global_43218 /*4*/].f_2 = iParam2;
		Global_43224[Global_43218 /*4*/].f_3 = 0;
		Global_43218++;
		if (iParam4 != 0)
		{
			func_50(iParam0, iParam4);
		}
	}
	return 2;
}

void func_50(var uParam0, int iParam1)
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

int func_51(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_142(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_52()
{
	float fVar0;
	
	fVar0 = unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Local_121);
	if (fVar0 < 62500f)
	{
		func_82();
		func_79();
		if (iLocal_159)
		{
			if (fVar0 < 64f)
			{
				func_78();
				iLocal_159 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_56();
		}
	}
	if (!iLocal_160)
	{
		if (func_54())
		{
			iLocal_160 = 1;
			func_53();
		}
	}
}

void func_53()
{
	iLocal_48++;
}

int func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_55())
	{
		if (!unk_0x7DE17ACDD8BA2642(Local_329[iVar0 /*14*/]) || !unk_0x7DE17ACDD8BA2642(Local_329[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0x7DE17ACDD8BA2642(Local_329.f_83) || !unk_0x7DE17ACDD8BA2642(Local_329.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_55()
{
	switch (iLocal_124)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_56()
{
	int iVar0;
	char* sVar1;
	
	if (!func_28(&uLocal_147))
	{
		func_37(&uLocal_147);
		return;
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_157) && !unk_0x055111B11E6624FD(iLocal_157, 0))
	{
		if (unk_0x967D885AAF973497(iLocal_157))
		{
			return;
		}
	}
	if (func_25(&uLocal_147) >= 8f)
	{
		iVar0 = (unk_0x15A88CFAAFFC6C4B(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (unk_0x055111B11E6624FD(Local_329[(iVar0 - 1) /*14*/], 0))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_57(&uLocal_163, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_35(&uLocal_147);
		}
	}
}

int func_57(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_77(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_58(sParam2, iParam3, 0);
}

int func_58(char* sParam0, int iParam1, bool bParam2)
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
					func_76();
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
		if (func_98(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_75();
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
			unk_0x061B1200C95204CB(&Global_8255, 0);
			if (bParam2)
			{
				func_68();
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
				if (func_67())
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
			if (func_66())
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
			func_65();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_64();
		func_59();
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
		func_76();
	}
	return 0;
}

void func_59()
{
	if (!func_60())
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

int func_60()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_63())
	{
		return 0;
	}
	if (func_61(unk_0x93E99A2DBCBA9CFA()))
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

bool func_61(int iParam0)
{
	return func_62(iParam0, 20);
}

var func_62(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_63()
{
	return -1;
}

void func_64()
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

void func_65()
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

int func_66()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_67()
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

void func_68()
{
	if (func_118(14))
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
		Global_20383 = func_69();
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

var func_69()
{
	func_70();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_70()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_73(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_72(unk_0xC1A5EC5C986B98AD());
			if (func_71(iVar0) && (!func_118(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_71(Global_113648.f_2365.f_539.f_4321))
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

bool func_71(int iParam0)
{
	return iParam0 < 3;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_73(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_73(int iParam0)
{
	if (func_71(iParam0))
	{
		return func_74(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_74(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_75()
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

void func_76()
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

void func_77(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_78()
{
	int iVar0;
	
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !unk_0x055111B11E6624FD(Local_329.f_83, 0))
	{
		iVar0 = unk_0x30DFE1FFD2CC7420();
		if (iVar0 <= iLocal_119 && iVar0 >= iLocal_120)
		{
			iLocal_159 = 0;
			return;
		}
		unk_0x882C9EFD4718B1BE(Local_329.f_83, 0f, 0f, 0.75f, 1, 2000, 2000, 2000, 0);
	}
}

void func_79()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = unk_0x30DFE1FFD2CC7420();
	if (iVar0 <= iLocal_119 && iVar0 >= iLocal_120)
	{
		iLocal_328 = 0;
		return;
	}
	if (!unk_0x055111B11E6624FD(iLocal_157, 0) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		switch (iLocal_328)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(iLocal_157, 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) < 64f && !unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					iLocal_161 = 0;
					iLocal_162 = 0;
					iLocal_328 = 1;
				}
				break;
			
			case 1:
				unk_0xDBC7406226B5540E(&uVar1);
				unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 0, 2);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
				unk_0xF2CFC6EC8C85FA78(uVar1);
				unk_0x3D7110D966B0CEA2(iLocal_157, uVar1);
				unk_0x63EF69C6969A3D26(&uVar1);
				iLocal_328 = 2;
				break;
			
			case 2:
				if ((unk_0xF5F493B789EA063E(iLocal_157, joaat("script_task_perform_sequence")) != 1 || unk_0xD495130AEF425591(iLocal_157, unk_0xC1A5EC5C986B98AD(), 20f)) && !unk_0x0DCB385165FDE763())
				{
					unk_0x06A2A5F6A6959BE7(iLocal_157, unk_0xC1A5EC5C986B98AD(), -1);
					if (!iLocal_162)
					{
						func_80(iLocal_157, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_80(iLocal_157, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_328 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x967D885AAF973497(iLocal_157))
				{
					func_35(&uLocal_144);
					unk_0x3EE48ADC8C7F5CC4(iLocal_157, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_328 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(iLocal_157, 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) > 225f)
				{
					unk_0xDBC7406226B5540E(&uVar2);
					unk_0x2CD3E39D98CC3FA9(0, Local_329.f_83.f_9, 1000);
					unk_0x3EE48ADC8C7F5CC4(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0xF2CFC6EC8C85FA78(uVar2);
					unk_0x3D7110D966B0CEA2(iLocal_157, uVar2);
					unk_0x63EF69C6969A3D26(&uVar2);
					iLocal_328 = 0;
				}
				if (func_28(&uLocal_144))
				{
					if (func_25(&uLocal_144) >= 5f && !iLocal_161)
					{
						iLocal_161 = 1;
						iLocal_328 = 1;
					}
					else if (func_25(&uLocal_144) >= 10f && !iLocal_162)
					{
						iLocal_162 = 1;
						iLocal_328 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_80(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xB7C28610A558761B(iParam0, sParam1, sParam2, func_81(iParam3), 0);
}

int func_81(int iParam0)
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

void func_82()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_329[iVar2 /*14*/].f_1) && unk_0x7DE17ACDD8BA2642(Local_329[iVar2 /*14*/]))
		{
			if (func_87(Local_329[iVar2 /*14*/], 1, 0, 0, 0) || unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), Local_329[iVar2 /*14*/].f_1, 1))
			{
				func_85();
				func_84(iLocal_105);
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
			}
			if (!unk_0x66599E73DBA5A850(Local_329[iVar2 /*14*/]))
			{
				if (func_28(&(Local_125[iVar2 /*3*/])))
				{
					if (func_25(&(Local_125[iVar2 /*3*/])) > uLocal_150[iVar2])
					{
						if (unk_0xFBD273FDBCF0C5BD(Local_329[iVar2 /*14*/].f_1, 0) && unk_0xE0D346789C5160EB(Local_329[iVar2 /*14*/], Local_329[iVar2 /*14*/].f_1, 0))
						{
							iVar0 = unk_0x15A88CFAAFFC6C4B(250, 500);
							iVar1 = unk_0x15A88CFAAFFC6C4B(250, 500);
							unk_0xDBC7406226B5540E(&uVar3);
							unk_0xCFAA9546D1402590(0, Local_329[iVar2 /*14*/].f_1, 1, iVar0);
							unk_0xCFAA9546D1402590(0, Local_329[iVar2 /*14*/].f_1, 31, iVar1);
							unk_0xF2CFC6EC8C85FA78(uVar3);
							if (!unk_0x66599E73DBA5A850(Local_329[iVar2 /*14*/]))
							{
								unk_0x3D7110D966B0CEA2(Local_329[iVar2 /*14*/], uVar3);
							}
							unk_0x63EF69C6969A3D26(&uVar3);
						}
						func_35(&(Local_125[iVar2 /*3*/]));
						uLocal_150[iVar2] = unk_0xD88C7A93096DA0F7(0f, 3f);
					}
				}
				else
				{
					func_37(&(Local_125[iVar2 /*3*/]));
				}
			}
			if (!unk_0x055111B11E6624FD(Local_329[iVar2 /*14*/], 0))
			{
				if ((unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), Local_329[iVar2 /*14*/]) && !unk_0x48A4D45B3B4CEFFD(Local_329[iVar2 /*14*/])) && !unk_0xBACC143C07E3925E(Local_329[iVar2 /*14*/]))
				{
					Local_329[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_329[iVar2 /*14*/].f_11)
				{
					unk_0xDBC7406226B5540E(&uVar3);
					unk_0x2CD3E39D98CC3FA9(0, Local_329[iVar2 /*14*/].f_9, 1000);
					unk_0x3EE48ADC8C7F5CC4(0, Local_329[iVar2 /*14*/].f_12, Local_329[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0xF2CFC6EC8C85FA78(uVar3);
					unk_0x3D7110D966B0CEA2(Local_329[iVar2 /*14*/], uVar3);
					unk_0x63EF69C6969A3D26(&uVar3);
					Local_329[iVar2 /*14*/].f_11 = 0;
				}
				if (unk_0x48A4D45B3B4CEFFD(Local_329[iVar2 /*14*/]) || unk_0xBACC143C07E3925E(Local_329[iVar2 /*14*/]))
				{
					if (!Local_329[iVar2 /*14*/].f_10 && (unk_0x48A4D45B3B4CEFFD(Local_329[iVar2 /*14*/]) || unk_0xBACC143C07E3925E(Local_329[iVar2 /*14*/])))
					{
						Local_329.f_101++;
					}
					Local_329[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_329[iVar2 /*14*/].f_10)
				{
					unk_0xDBC7406226B5540E(&uVar3);
					unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 1000);
					unk_0x3EE48ADC8C7F5CC4(0, "gestures@m@standing@casual", func_83(), 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x2CD3E39D98CC3FA9(0, Local_329[iVar2 /*14*/].f_9, 1000);
					unk_0x3EE48ADC8C7F5CC4(0, Local_329[iVar2 /*14*/].f_12, Local_329[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0xF2CFC6EC8C85FA78(uVar3);
					unk_0x3D7110D966B0CEA2(Local_329[iVar2 /*14*/], uVar3);
					unk_0x63EF69C6969A3D26(&uVar3);
					Local_329[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (unk_0x7DE17ACDD8BA2642(Local_329.f_83.f_1) && unk_0x7DE17ACDD8BA2642(Local_329.f_83))
	{
		if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), Local_329.f_83.f_1, 0))
		{
			iLocal_86 = Local_329.f_83.f_1;
		}
		if (func_87(Local_329.f_83, 1, 0, 0, 0))
		{
			func_85();
			func_84(iLocal_105);
			unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
		}
		if (!unk_0x66599E73DBA5A850(Local_329.f_83))
		{
			if (func_28(&uLocal_141))
			{
				if (func_25(&uLocal_141) > fLocal_156)
				{
					if (unk_0xFBD273FDBCF0C5BD(Local_329.f_83.f_1, 0) && unk_0xE0D346789C5160EB(Local_329.f_83, Local_329.f_83.f_1, 0))
					{
						iVar0 = unk_0x15A88CFAAFFC6C4B(250, 500);
						iVar1 = unk_0x15A88CFAAFFC6C4B(250, 500);
						unk_0xDBC7406226B5540E(&uVar3);
						unk_0xCFAA9546D1402590(0, Local_329.f_83.f_1, 1, iVar0);
						unk_0xCFAA9546D1402590(0, Local_329.f_83.f_1, 31, iVar1);
						unk_0xF2CFC6EC8C85FA78(uVar3);
						if (!unk_0x66599E73DBA5A850(Local_329.f_83))
						{
							unk_0x3D7110D966B0CEA2(Local_329.f_83, uVar3);
						}
						unk_0x63EF69C6969A3D26(&uVar3);
					}
					func_35(&uLocal_141);
					fLocal_156 = unk_0xD88C7A93096DA0F7(0f, 3f);
				}
			}
			else
			{
				func_37(&uLocal_141);
			}
		}
		if (!unk_0x055111B11E6624FD(Local_329.f_83, 0))
		{
			if ((unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), Local_329.f_83) && !unk_0x48A4D45B3B4CEFFD(Local_329.f_83)) && !unk_0xBACC143C07E3925E(Local_329.f_83))
			{
				Local_329.f_83.f_11 = 1;
			}
			else if (Local_329.f_83.f_11)
			{
				unk_0xDBC7406226B5540E(&uVar3);
				unk_0x2CD3E39D98CC3FA9(0, Local_329.f_83.f_9, 1000);
				unk_0x3EE48ADC8C7F5CC4(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xF2CFC6EC8C85FA78(uVar3);
				unk_0x3D7110D966B0CEA2(Local_329.f_83, uVar3);
				unk_0x63EF69C6969A3D26(&uVar3);
				Local_329.f_83.f_11 = 0;
			}
			if (unk_0x48A4D45B3B4CEFFD(Local_329.f_83) || unk_0xBACC143C07E3925E(Local_329.f_83))
			{
				if (!Local_329.f_83.f_10)
				{
					Local_329.f_101++;
				}
				Local_329.f_83.f_10 = 1;
			}
			else if (Local_329.f_83.f_10)
			{
				unk_0xDBC7406226B5540E(&uVar3);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 1000);
				unk_0x3EE48ADC8C7F5CC4(0, "gestures@m@standing@casual", func_83(), 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x2CD3E39D98CC3FA9(0, Local_329.f_83.f_9, 1000);
				unk_0x3EE48ADC8C7F5CC4(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xF2CFC6EC8C85FA78(uVar3);
				unk_0x3D7110D966B0CEA2(Local_329.f_83, uVar3);
				unk_0x63EF69C6969A3D26(&uVar3);
				iLocal_328 = 4;
				func_35(&uLocal_144);
				Local_329.f_83.f_10 = 0;
			}
		}
	}
}

char* func_83()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (unk_0x15A88CFAAFFC6C4B(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_84(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_138(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_92(&iLocal_96);
		iLocal_95 = 9;
	}
}

void func_85()
{
	int iVar0[10];
	var uVar11;
	int iVar12;
	
	unk_0xA5D17FEE5372152E(unk_0xC1A5EC5C986B98AD(), &iVar0, -1);
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (unk_0x7DE17ACDD8BA2642(iVar0[iVar12]) && !unk_0x66599E73DBA5A850(iVar0[iVar12]))
		{
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 4))
			{
				unk_0xC6C9BF71106ABCAC(iVar0[iVar12], unk_0xC1A5EC5C986B98AD(), 100f, -1, 0, 0);
			}
			else
			{
				unk_0xDBC7406226B5540E(&uVar11);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), unk_0x15A88CFAAFFC6C4B(300, 900));
				unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 0);
				unk_0xF2CFC6EC8C85FA78(uVar11);
				unk_0x3D7110D966B0CEA2(iVar0[iVar12], uVar11);
				unk_0x63EF69C6969A3D26(&uVar11);
			}
		}
		iVar12++;
	}
	switch (Global_113648.f_19018.f_1)
	{
		case 0:
			func_86(0);
			break;
		
		case 1:
			func_86(0);
			break;
		
		case 3:
			func_86(0);
			break;
		
		case 4:
			func_86(0);
			break;
		
		case 5:
			func_86(0);
			break;
		
		case 2:
			func_86(0);
			break;
	}
}

void func_86(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

int func_87(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0xC1A5EC5C986B98AD();
	if (Local_329.f_101 >= 3)
	{
		return 1;
	}
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		if (!unk_0x66599E73DBA5A850(iParam0))
		{
			Var1 = { unk_0x30BE8A934C020461(iParam0, 1) };
			if (bParam1)
			{
				if (unk_0x7559C38E6535AB89(iParam0, unk_0xC1A5EC5C986B98AD(), 1))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (unk_0xB8C39D031C377E33(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0x110B96B5C67CC73B(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iParam0) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iParam0))
				{
					if (func_88(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (unk_0x3C3D6D026CF7F51B(iParam0, 0))
			{
				if (unk_0x7559C38E6535AB89(unk_0x95DC39736F6748E3(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (unk_0xC78375EA6037A7DB(iParam0))
			{
				return 1;
			}
			if (unk_0x2D1125ABF6C8F8C4(iVar0, 4))
			{
				if (unk_0x110D030CCD4E83A6(iVar0))
				{
					if (unk_0x1C4E4DC1EFE24DF1(iParam0, unk_0x30BE8A934C020461(iVar0, 1), 45f, 45f, 45f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0x612907CF3208D1E3(Var1, 4f, 1))
			{
				return 1;
			}
			if (unk_0x332F7E85F9805351((Var1.f_0 - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.f_0 + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), 0))
			{
				return 1;
			}
			if (unk_0xF276A75C8A36B189(iParam0))
			{
				if (unk_0xD2A91DBF15D12CD1(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((unk_0xD612176B6DC58EF7(-1, Var1, 25f) && !unk_0xD612176B6DC58EF7(11, Var1, 25f)) && !unk_0xD612176B6DC58EF7(13, Var1, 25f))
			{
				return 1;
			}
			unk_0x5CE354E3C73D2002(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_88(var uParam0, int iParam1)
{
	return func_89(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), uParam0, iParam1);
}

var func_89(int iParam0, int iParam1, var uParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x055111B11E6624FD(uParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	if (!unk_0x055111B11E6624FD(uParam1, 0))
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Var3, uParam2);
}

int func_90(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_91(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x48DC6A21D1CAD89C(unk_0x5DC3DCA82C806319()))
	{
		return 0;
	}
	if (func_97(0))
	{
		return 0;
	}
	if (unk_0x2FECE8D166B3056B())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/] == 1 && Global_44000[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44000[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44000[iVar0 /*32*/].f_5 = 1;
			Global_44000[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44000[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44000[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_91(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_92(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_91(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/])
		{
			Global_44000[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_93(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x24B651D85CCE5EB4(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB53553DC4AAC7D8A())
	{
		if (!*iParam0 == -1)
		{
			func_92(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44000[iVar0 /*32*/])
		{
			Global_44000[iVar0 /*32*/] = 1;
			Global_44000[iVar0 /*32*/].f_1 = Global_44201;
			Global_44201++;
			Global_44000[iVar0 /*32*/].f_4 = 0;
			Global_44000[iVar0 /*32*/].f_29 = 0;
			Global_44000[iVar0 /*32*/].f_5 = 0;
			Global_44000[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44000[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44000[iVar0 /*32*/].f_6 = iParam3;
			Global_44000[iVar0 /*32*/].f_31 = unk_0xAF908D5E2416DA93();
			Global_44000[iVar0 /*32*/].f_7 = 0;
			Global_44000[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x2AC37494BBF1DB16(sParam4))
			{
				Global_44000[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44000[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44000[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44000[iVar0 /*32*/].f_12 = 0;
				Global_44000[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44000[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_94(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0) && unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iParam0, 0))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_95(char* sParam0, int iParam1, int iParam2)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0x64C50E40AA09A6B5(iParam1);
	unk_0x64C50E40AA09A6B5(iParam2);
	unk_0xBC8969B539DCA239(0, 0, 1, -1);
}

var func_96()
{
	return Global_75693;
}

int func_97(int iParam0)
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

bool func_98(int iParam0, int iParam1)
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

bool func_99()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

int func_100()
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_101(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23131.f_4 && Global_23131.f_104 == 4);
	}
	return Global_23131.f_4;
}

int func_102()
{
	return 1;
}

void func_103(var uParam0, int iParam1)
{
	func_104(uParam0, iParam1);
}

void func_104(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_105()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		return 0;
	}
	unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		return ((((bVar1 && unk_0x51EB177CA0562B62(0, 69)) || (bVar1 && unk_0x51EB177CA0562B62(0, 70))) || (bVar1 && unk_0x51EB177CA0562B62(0, 68))) || unk_0xB5297226BE0AD444(unk_0x93E99A2DBCBA9CFA()));
	}
	return (((((bVar1 && unk_0x51EB177CA0562B62(0, 24)) || (bVar1 && unk_0x51EB177CA0562B62(0, 25))) || (bVar1 && unk_0x51EB177CA0562B62(0, 47))) || unk_0x330C3CDE292DD260(unk_0xC1A5EC5C986B98AD())) || unk_0xB5297226BE0AD444(unk_0x93E99A2DBCBA9CFA()));
}

int func_106(int iParam0)
{
	int iVar0;
	
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				iVar0 = func_69();
				if (!func_71(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_113()) || Global_112695) || Global_32166) || func_112()) || func_98(8, -1)) || func_111()) || func_110()) || func_109()) || func_100()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_113()) || Global_32166) || func_112()) || func_98(8, -1)) || func_109()) || func_111()) || func_110()) || func_100()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_113()) || Global_112695) || Global_32166) || func_112()) || func_98(8, -1)) || func_109()) || func_111()) || func_110()) || func_100()) || Global_113648.f_7690.f_919[iVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_113()) || Global_112695) || Global_32166) || func_112()) || func_98(8, -1)) || func_111()) || func_110()) || func_100()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_113() || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || func_98(8, -1)) || func_100()) || func_108()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_98(8, -1) || func_111()) || func_110()) || func_108()) || func_107())
						{
							return 0;
						}
						if ((unk_0xB53553DC4AAC7D8A() && unk_0x728FB8B438DDCAB6() != 3) && unk_0x19B3485E7C9D734D() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
						{
							if ((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_113()) || Global_32166) || func_112()) || func_98(8, -1)) || func_110()) || func_109()) || func_100()) || Global_113648.f_7690.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || func_113()) || func_110()) || Global_112695) || Global_32166) || func_112()) || Global_44446) || func_98(8, -1)) || func_109()) || func_108()) || func_100()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0)) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1)) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_113()) || Global_112695) || Global_32166) || func_112()) || func_98(8, -1)) || func_109()) || func_108()) || func_111()) || func_110()) || func_100())
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

var func_107()
{
	return Global_100720.f_1;
}

int func_108()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_109()
{
	if (Global_78819)
	{
		return 1;
	}
	else if (Global_63356 && !Global_63362)
	{
		return 1;
	}
	return 0;
}

bool func_110()
{
	return Global_100733.f_388 > 0;
}

bool func_111()
{
	return Global_100733.f_387 > 0;
}

var func_112()
{
	return Global_1575060;
}

int func_113()
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_114()
{
	if (unk_0x24B651D85CCE5EB4(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_115()
{
	return Global_96513;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_118(6) || func_118(7))
			{
				return 1;
			}
			else
			{
				return func_116(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_142(5))
			{
				if (func_106(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xCE4AAA035282336C(Global_32543[iVar0 /*23*/].f_19);
}

bool func_118(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_119()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x30DFE1FFD2CC7420();
	if ((iVar0 <= iLocal_119 && iVar0 >= iLocal_120) || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) != 0)
	{
		return;
	}
	if (bLocal_158)
	{
		func_129();
		func_128();
		switch (iLocal_124)
		{
			case 0:
				func_127(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.442f, 4440.866f, 37.2504f, 184.125f);
				func_127(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.795f, 4438.275f, 37.402f, 78.7749f);
				func_127(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_127(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.251f, 4438.761f, 36.9256f, 23.8377f);
				func_127(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.319f, 4439.913f, 36.7166f, 250.6112f);
				func_126(-1939.564f, 4443.306f, 36.3803f, 262.3551f, -1936.208f, 4444.125f, 36.8594f, 123.8187f);
				break;
			
			case 1:
				func_127(-520.2097f, 2010.816f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_127(-516.9937f, 2013.98f, 203.5907f, 19.3803f, -517.1741f, 2010.813f, 203.8412f, 125.7555f);
				func_127(-518.3414f, 2005.449f, 204.1878f, 20.7231f, -519.0882f, 2013.649f, 203.3304f, 195.7951f);
				func_127(-514.8247f, 2008.574f, 204.3629f, 20.2278f, -514.2933f, 2004.923f, 204.5935f, 126.8655f);
				func_126(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.622f, 204.5549f, 1.757f);
				break;
			
			case 3:
				func_127(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_127(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.25f, 43.8681f, 179.3787f);
				func_127(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.102f, 43.8909f, 311.8915f);
				func_127(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_127(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.683f, 43.8597f, 28.0083f);
				func_126(-225.6736f, 4224.503f, 43.8435f, 77.7579f, -227.2893f, 4224.699f, 43.8335f, 36.55f);
				break;
			
			case 4:
				func_127(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.163f, 32.9854f, 29.8332f);
				func_127(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.908f, 3841.492f, 32.9721f, 78.3f);
				func_127(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.097f, 3842.676f, 33.3217f, 198.5355f);
				func_127(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.427f, 3837.368f, 32.9989f, 9.9463f);
				func_126(1603.405f, 3836.324f, 33.1144f, 305.055f, 1605.788f, 3840.236f, 33.2826f, 288.7775f);
				break;
			
			case 5:
				func_127(2046.772f, 2130.442f, 91.9486f, 233.1493f, 2036.123f, 2133.981f, 92.615f, 260.0519f);
				func_127(2045.344f, 2126.352f, 91.9358f, 236.3633f, 2044.422f, 2128.961f, 92.088f, 47.8797f);
				func_127(2036.512f, 2137.807f, 92.6507f, 237.2446f, 2041.778f, 2131.354f, 92.4544f, 226.7534f);
				func_127(2041.739f, 2134.324f, 92.4013f, 232.956f, 2039.603f, 2132.563f, 92.6648f, 61.0834f);
				func_127(2039.775f, 2130.025f, 92.5324f, 241.6337f, 2038.744f, 2134.523f, 92.6235f, 128.98f);
				func_126(2030.898f, 2134.197f, 92.5014f, 249.4471f, 2036.58f, 2135.382f, 92.605f, 233.2111f);
				break;
			
			case 2:
				func_127(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.392f, 42.1008f, 29.7228f);
				func_127(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.12f, 2779.783f, 42.3128f, 286.9825f);
				func_127(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.253f, 2783.97f, 42.5421f, 108.7426f);
				func_127(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.582f, 2787.476f, 42.6953f, 157.4885f);
				func_127(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.719f, 2784.905f, 42.6444f, 213.8879f);
				func_126(2995.525f, 2775.522f, 41.98f, 4.3249f, 2993.511f, 2776.948f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_124)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!unk_0x2AC37494BBF1DB16(sVar1))
		{
			if (unk_0xAA23EFB660B488C8(sVar1))
			{
				if (!unk_0xACC2F57D4FC0353D(sVar1))
				{
					unk_0xC5090431EE763EA5(sVar1, 1);
				}
			}
		}
	}
	func_120();
}

void func_120()
{
	var uVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	if (fLocal_110 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_329.f_0)
		{
			if (!func_125(Local_329[iVar5 /*14*/].f_2))
			{
				Local_329[iVar5 /*14*/].f_1 = unk_0xABEEDBEF2BBDF5B3(func_124(0), Local_329[iVar5 /*14*/].f_2, Local_329[iVar5 /*14*/].f_5, 1, 1, 0);
				unk_0xCB8DD5B44DBC2DEB(Local_329[iVar5 /*14*/].f_1, 1084227584);
				unk_0x5BC68FEFF4902C2B(Local_329[iVar5 /*14*/].f_1, 1);
				if (func_125(Local_329[iVar5 /*14*/].f_6))
				{
					Local_329[iVar5 /*14*/] = unk_0x4FA078B1B32445FD(Local_329[iVar5 /*14*/].f_1, 4, func_123(), -1, 1, 1);
					unk_0xC8EE2E23B410B65A(Local_329[iVar5 /*14*/].f_1, 1, 0, 0);
				}
				else
				{
					Local_329[iVar5 /*14*/] = unk_0x69FDD9508259E5B5(4, func_123(), Local_329[iVar5 /*14*/].f_6, Local_329[iVar5 /*14*/].f_9, 1, 1);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_329[iVar5 /*14*/].f_12 = sVar3;
					Local_329[iVar5 /*14*/].f_13 = sVar4;
					unk_0xDBC7406226B5540E(&uVar0);
					unk_0xA3CD3591C0B0EE9A(0, unk_0x15A88CFAAFFC6C4B(100, 500));
					unk_0x3EE48ADC8C7F5CC4(0, sVar3, sVar4, 8f, -8f, -1, 8193, unk_0xD88C7A93096DA0F7(0, 1065353216), 0, 0, 0);
					unk_0xF2CFC6EC8C85FA78(uVar0);
					unk_0x3D7110D966B0CEA2(Local_329[iVar5 /*14*/], uVar0);
					unk_0x63EF69C6969A3D26(&uVar0);
				}
				unk_0x45583CDA541E788E(Local_329[iVar5 /*14*/], 1);
				unk_0xA8836C5BA9E0DA7D(Local_329[iVar5 /*14*/], 1, 4096, -1);
			}
			iVar5++;
		}
		Local_329.f_83.f_1 = unk_0xABEEDBEF2BBDF5B3(func_124(1), Local_329.f_83.f_2, Local_329.f_83.f_5, 1, 1, 0);
		unk_0xCB8DD5B44DBC2DEB(Local_329.f_83.f_1, 1084227584);
		unk_0x5BC68FEFF4902C2B(Local_329.f_83.f_1, 1);
		if (func_125(Local_329.f_83.f_6))
		{
			Local_329.f_83 = unk_0x4FA078B1B32445FD(Local_329.f_83.f_1, 4, func_123(), -1, 1, 1);
			unk_0xC8EE2E23B410B65A(Local_329.f_83.f_1, 1, 0, 0);
		}
		else
		{
			Local_329.f_83 = unk_0x69FDD9508259E5B5(4, func_123(), Local_329.f_83.f_6, Local_329.f_83.f_9, 1, 1);
			iVar1 = (unk_0x15A88CFAAFFC6C4B(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				
				case 1:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_329.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_329.f_83.f_13 = sVar4;
			unk_0xDBC7406226B5540E(&uVar0);
			unk_0x56FD1401249AC499(0, func_122((unk_0x15A88CFAAFFC6C4B(0, 65535) % 1000), 1, 1000));
			unk_0x3EE48ADC8C7F5CC4(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, unk_0xD88C7A93096DA0F7(0, 1065353216), 0, 0, 0);
			unk_0xF2CFC6EC8C85FA78(uVar0);
			unk_0x3D7110D966B0CEA2(Local_329.f_83, uVar0);
			unk_0x63EF69C6969A3D26(&uVar0);
		}
	}
	else if (fLocal_110 < 225f)
	{
	}
	iLocal_157 = Local_329.f_83;
	if (!unk_0x055111B11E6624FD(Local_329[0 /*14*/], 0))
	{
		func_121(&uLocal_163, 1, Local_329[0 /*14*/], "MALE1", 0, 1);
	}
	if (!unk_0x055111B11E6624FD(Local_329[1 /*14*/], 0))
	{
		func_121(&uLocal_163, 2, Local_329[1 /*14*/], "MALE2", 0, 1);
	}
	if (!unk_0x055111B11E6624FD(Local_329[2 /*14*/], 0))
	{
		func_121(&uLocal_163, 3, Local_329[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_28(&uLocal_147))
	{
		func_37(&uLocal_147);
	}
	else
	{
		func_35(&uLocal_147);
	}
}

void func_121(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x66599E73DBA5A850(uParam2))
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

int func_122(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_123()
{
	return joaat("a_m_y_motox_01");
}

int func_124(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_329.f_71)
	{
		if (unk_0x7E7D26DE9951D7A2(Local_329.f_71[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_124 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = unk_0x15A88CFAAFFC6C4B(0, iVar0);
	if (Local_329.f_71[iVar0] == 0)
	{
		if (Local_329.f_71[0] == 0)
		{
			switch (iLocal_124)
			{
				case 0:
					return joaat("sanchez");
					break;
				
				case 1:
					return joaat("mesa");
					break;
				
				case 3:
					return joaat("sanchez");
					break;
				
				case 4:
					return joaat("sanchez");
					break;
				
				case 5:
					return joaat("mesa");
					break;
				
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_329.f_71[0];
		}
	}
	return Local_329.f_71[iVar0];
}

int func_125(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_126(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	if (func_125(Local_329.f_83.f_2))
	{
		Local_329.f_83.f_2 = { Param0 };
		Local_329.f_83.f_5 = fParam3;
		Local_329.f_83.f_6 = { Param4 };
		Local_329.f_83.f_9 = fParam7;
	}
}

void func_127(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_329.f_0)
	{
		if (!bVar1 && func_125(Local_329[iVar0 /*14*/].f_2))
		{
			Local_329[iVar0 /*14*/].f_2 = { Param0 };
			Local_329[iVar0 /*14*/].f_5 = fParam3;
			Local_329[iVar0 /*14*/].f_6 = { Param4 };
			Local_329[iVar0 /*14*/].f_9 = fParam7;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_128()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_329.f_0)
	{
		Local_329[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_329[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_329.f_83.f_2 = { 0f, 0f, 0f };
	Local_329.f_83.f_5 = 0f;
}

void func_129()
{
	switch (iLocal_124)
	{
		case 0:
			unk_0x9D0EAD95433304CA(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1, 0, 1);
			unk_0x10DFA2EC4C030EB3(-227.43f, 3888.9f, 36.41f, 50f, 1, 0, 0, 0, 0, 0, 0);
			unk_0x2112CE9FD54D593A("WORLD_HUMAN_HIKER", 0);
			break;
		
		case 1:
			unk_0x9D0EAD95433304CA(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 0, 0, 1);
			break;
		
		case 3:
			unk_0x2112CE9FD54D593A("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0x9D0EAD95433304CA(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1, 0, 1);
			unk_0x25578EAEB8729E15(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 0, 0, 0, 0, 0, 0, 0);
			unk_0x9D0EAD95433304CA(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, 1, 0, 1);
			unk_0x2112CE9FD54D593A("WORLD_HUMAN_HIKER", 0);
			unk_0x2112CE9FD54D593A("WORLD_VEHICLE_EMPTY", 0);
			unk_0x2112CE9FD54D593A("WORLD_MOUNTAIN_LION_WANDER", 0);
			break;
		
		case 4:
			unk_0x2112CE9FD54D593A("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0x2112CE9FD54D593A("WORLD_VEHICLE_EMPTY", 1);
			unk_0x2112CE9FD54D593A("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", 1);
			break;
		
		case 5:
			unk_0x2112CE9FD54D593A("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
			unk_0x9D0EAD95433304CA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, 1, 0, 1);
			unk_0x25578EAEB8729E15(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 0, 0, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0xC5090431EE763EA5("QUARRY", 0);
			unk_0x9D0EAD95433304CA(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1, 0, 1);
			unk_0x25578EAEB8729E15(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 0, 0, 0, 0, 0, 0, 0);
			break;
	}
}

var func_130()
{
	return ((((((((func_131(&(Local_329.f_71)) && func_131(&(Local_329.f_77))) && func_131(&(Local_329.f_99))) && unk_0x2BBF749E555360DC("amb@world_human_hang_out_street@male_a@idle_a")) && unk_0x2BBF749E555360DC("amb@world_human_hang_out_street@male_b@idle_a")) && unk_0x2BBF749E555360DC("amb@world_human_hang_out_street@male_c@idle_a")) && unk_0x2BBF749E555360DC("amb@world_human_aa_smoke@male@idle_a")) && unk_0x2BBF749E555360DC("random@street_race")) && unk_0x2BBF749E555360DC("gestures@m@standing@casual"));
}

int func_131(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x0CBB7C273DED26E7((*uParam0)[iVar0]))
			{
				if (!unk_0x0CBB7C273DED26E7((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_132()
{
	char cVar0[64];
	
	func_134(&(Local_329.f_77), joaat("a_m_y_motox_01"));
	func_134(&(Local_329.f_99), joaat("a_m_y_motox_01"));
	switch (iLocal_124)
	{
		case 0:
			func_134(&(Local_329.f_71), joaat("sanchez"));
			func_134(&(Local_329.f_71), joaat("blazer"));
			break;
		
		case 1:
			func_134(&(Local_329.f_71), joaat("mesa"));
			func_134(&(Local_329.f_71), joaat("bjxl"));
			func_134(&(Local_329.f_71), joaat("patriot"));
			func_134(&(Local_329.f_71), joaat("dubsta2"));
			func_134(&(Local_329.f_71), joaat("bfinjection"));
			break;
		
		case 3:
			func_134(&(Local_329.f_71), joaat("sanchez"));
			func_134(&(Local_329.f_71), joaat("blazer"));
			break;
		
		case 4:
			func_134(&(Local_329.f_71), joaat("sanchez"));
			func_134(&(Local_329.f_71), joaat("blazer"));
			break;
		
		case 5:
			func_134(&(Local_329.f_71), joaat("mesa"));
			func_134(&(Local_329.f_71), joaat("bfinjection"));
			func_134(&(Local_329.f_71), joaat("bjxl"));
			func_134(&(Local_329.f_71), joaat("sadler"));
			func_134(&(Local_329.f_71), joaat("rebel"));
			break;
		
		case 2:
			func_134(&(Local_329.f_71), joaat("sanchez"));
			func_134(&(Local_329.f_71), joaat("blazer"));
			break;
	}
	unk_0x28818732C8F0F80E("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x28818732C8F0F80E("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x28818732C8F0F80E("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x28818732C8F0F80E("amb@world_human_aa_smoke@male@idle_a");
	unk_0x28818732C8F0F80E("random@street_race");
	unk_0x28818732C8F0F80E("gestures@m@standing@casual");
	if (iLocal_124 == 0)
	{
		unk_0x852EC2A7DE66202D(joaat("prop_fncwood_14c"));
		unk_0x852EC2A7DE66202D(joaat("prop_fncwood_14e"));
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_124)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	unk_0xC0B5FC4796023855(1, &cVar0);
	func_133(&(Local_329.f_77));
	func_133(&(Local_329.f_71));
	func_133(&(Local_329.f_99));
}

void func_133(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x852EC2A7DE66202D((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_134(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_135(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_135(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_136(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_137(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_138(int iParam0, bool bParam1, bool bParam2)
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
		iVar1 = BitTest(Global_32543[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_32543[iVar0 /*23*/].f_11, 0))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 18);
		if (Global_32540 == 1)
		{
			Global_32541 = 1;
		}
		Global_32540 = 1;
	}
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 0);
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 15);
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 0);
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_32543[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xCE4AAA035282336C(Global_32543[iVar0 /*23*/].f_19))
		{
			unk_0xC9BB10E64C4DE9F9(1);
			unk_0x45533C09A6C9B409(&(Global_32543[iVar0 /*23*/].f_19));
			unk_0xC9BB10E64C4DE9F9(0);
		}
	}
}

int func_139()
{
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x27654E358E874F45() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_140()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

int func_141(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

bool func_142(int iParam0)
{
	return func_143(iParam0, Global_43257);
}

int func_143(int iParam0, int iParam1)
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

bool func_144(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_145()
{
	StringCopy(&Local_53, "Offroad_Races", 64);
	unk_0x78E45C2D5AB9D24C(1);
	fLocal_117 = (6f + 4f);
	iLocal_99 = 4;
	func_103(&uLocal_94, 4194304);
	iLocal_97 = 54000;
	iLocal_86 = 0;
	iLocal_119 = 0;
	iLocal_120 = 25;
	iLocal_103 = 0;
	iLocal_124 = func_149(Local_90, &Local_121);
	iLocal_105 = func_148(iLocal_124);
	fLocal_102 = (unk_0xBBDA792448DB5A89(func_147(iLocal_105)) + 5f);
	if (func_141(0, iLocal_99))
	{
		bLocal_158 = true;
	}
	else
	{
		func_84(iLocal_105);
		bLocal_158 = false;
	}
	if (iLocal_124 > Global_113648.f_19018.f_1)
	{
		if (func_117(func_148(iLocal_124)))
		{
		}
		iLocal_105 = 263;
		func_84(iLocal_105);
	}
	if (!func_117(func_148(iLocal_124)) && unk_0x35DF833D93BCC488())
	{
		if (iLocal_105 != 263)
		{
			if (func_146(iLocal_105, 1))
			{
				iLocal_105 = 263;
			}
		}
		func_84(iLocal_105);
	}
	if (iLocal_124 == 2)
	{
		iLocal_119 = 20;
		iLocal_120 = 3;
	}
	if (iLocal_124 == 1 || iLocal_124 == 5)
	{
		sLocal_101 = "PLAY_OFFROAD_V";
	}
	else
	{
		sLocal_101 = "PLAY_OFFROAD_M";
	}
}

int func_146(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (bParam1)
	{
		return BitTest(Global_32543[iVar0 /*23*/].f_11, 15);
	}
	return BitTest(Global_32543[iVar0 /*23*/].f_11, 0);
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70;
		
		case 1:
			return 71;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 2:
			return 72;
		
		default:
	}
	return 263;
}

int func_149(struct<3> Param0, var uParam3)
{
	int iVar0;
	struct<3> Var1[7];
	float fVar23;
	int iVar24;
	float fVar25;
	
	iVar0 = 0;
	Var1[0 /*3*/] = { func_150(0) };
	Var1[1 /*3*/] = { func_150(1) };
	Var1[3 /*3*/] = { func_150(3) };
	Var1[4 /*3*/] = { func_150(4) };
	Var1[5 /*3*/] = { func_150(5) };
	Var1[2 /*3*/] = { func_150(2) };
	Var1[6 /*3*/] = { func_150(6) };
	fVar23 = unk_0xB7A628320EFF8E47(Param0, Var1[0 /*3*/]);
	iVar24 = 0;
	fVar25 = 0f;
	iVar24 = 1;
	while (iVar24 <= (7 - 1))
	{
		fVar25 = unk_0xB7A628320EFF8E47(Param0, Var1[iVar24 /*3*/]);
		if (fVar25 < fVar23)
		{
			iVar0 = iVar24;
			fVar23 = fVar25;
		}
		iVar24++;
	}
	*uParam3 = { Var1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_150(int iParam0)
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.483f, 4443.953f, 37.3474f;
		
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		
		case 3:
			return -223.6755f, 4224.644f, 43.7304f;
		
		case 4:
			return 1606.578f, 3841.188f, 33.2931f;
		
		case 5:
			return 2037.664f, 2137.386f, 92.7095f;
		
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_151(var uParam0, int iParam1)
{
	func_152(uParam0, iParam1);
}

void func_152(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_153(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_138(iLocal_105, 0, 0);
		}
	}
	func_92(&iLocal_96);
	if (func_144(uLocal_94, 2))
	{
		func_5();
		func_151(&uLocal_94, 2);
		func_20(&iLocal_98);
	}
	iLocal_98 = -1;
	func_154();
	unk_0x675D9C12C73D3DE7();
}

void func_154()
{
	func_151(&uLocal_94, 4);
	func_155();
	if (unk_0xB8CEC43FB7EF2D92(uLocal_52))
	{
		unk_0xCE24BFA06404D6AC(uLocal_52, 3);
	}
	if (!unk_0xB71C73D0269747D5(&Local_69))
	{
		if (unk_0xA7D1818D200CD09B(&Local_69) != 0)
		{
			unk_0x037A80676B8FF0F5(&Local_69);
		}
	}
}

void func_155()
{
}

