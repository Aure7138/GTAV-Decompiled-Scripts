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
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	struct<14> Local_85 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 16;
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
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_311 = 0;
	bool bLocal_312 = 0;
	bool bLocal_313 = 0;
	bool bLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	float fLocal_321 = 0f;
	float fLocal_322 = 0f;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
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
	int iLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348[4] = { 0, 0, 0, 0 };
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_370 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_382 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	struct<4> Local_458[32];
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	int iLocal_589 = 0;
	char* sLocal_590 = NULL;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
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
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_116 = 1;
	bLocal_118 = true;
	bLocal_120 = true;
	iLocal_125 = -1;
	bLocal_313 = true;
	bLocal_314 = true;
	iLocal_317 = -1;
	iLocal_318 = -1;
	iLocal_342 = -1;
	iLocal_345 = -1;
	if (!func_550(ScriptParam_0))
	{
		func_546();
	}
	iLocal_357[0] = unk_0xD8BD5231E93C59BF(unk_0x6FDBED6283D2B8C3(-891.3f, 807.9f, 188.1f));
	iLocal_357[1] = unk_0xD8BD5231E93C59BF(unk_0x6FDBED6283D2B8C3(-276.5f, -206.3f, 38.4f));
	iLocal_357[2] = unk_0xD8BD5231E93C59BF(unk_0x6FDBED6283D2B8C3(-1485.5f, -644.5f, 30.1f));
	iLocal_357[3] = unk_0xD8BD5231E93C59BF(unk_0x6FDBED6283D2B8C3(-1746.3f, -939.5f, 7.7f));
	iLocal_357[4] = unk_0xD8BD5231E93C59BF(unk_0x6FDBED6283D2B8C3(-2106.4f, -345.3f, 13f));
	iLocal_357[5] = unk_0xD8BD5231E93C59BF(unk_0x6FDBED6283D2B8C3(-1520f, 74.4f, 61.3f));
	iLocal_357[6] = unk_0xD8BD5231E93C59BF(unk_0x6FDBED6283D2B8C3(-1333f, -286f, 40.3f));
	iLocal_357[7] = unk_0xD8BD5231E93C59BF(unk_0x6FDBED6283D2B8C3(-1178.1f, 54.8f, 53.9f));
	iLocal_357[8] = unk_0xD8BD5231E93C59BF(unk_0x6FDBED6283D2B8C3(-1298.7f, -359.4f, 36.7f));
	iLocal_357[9] = unk_0xD8BD5231E93C59BF(unk_0x6FDBED6283D2B8C3(-355.2f, 147.5f, 75.8f));
	iLocal_357[10] = unk_0xD8BD5231E93C59BF(unk_0x6FDBED6283D2B8C3(-982.1f, -1064.7f, 2.2f));
	iLocal_357[11] = unk_0xD8BD5231E93C59BF(unk_0x6FDBED6283D2B8C3(-1313.1f, -1560.2f, 4.3f));
	while (true)
	{
		func_545();
		bLocal_101 = false;
		bLocal_103 = false;
		bLocal_106 = false;
		bLocal_109 = false;
		bLocal_111 = false;
		Global_2793044.f_1780 = 0;
		if (func_538() || func_537())
		{
			func_546();
		}
		if (func_530())
		{
			if (!func_529())
			{
				if (!func_528())
				{
					if (func_526())
					{
						if (!iLocal_99)
						{
							func_522();
							func_521(&Local_370, 5);
							func_520();
							bLocal_120 = true;
							bLocal_121 = true;
							if (BitTest(uLocal_587, 1))
							{
								unk_0x061B1200C95204CB(&uLocal_587, true);
							}
							iLocal_99 = 1;
							iLocal_345 = -999;
						}
					}
				}
			}
			else if (!func_528())
			{
				if (!bLocal_121)
				{
					if (!func_519(&uLocal_298))
					{
						func_518(&uLocal_298, 0, 0);
					}
					else if (func_517(&uLocal_298, 100, 0))
					{
						if (!BitTest(uLocal_587, 1))
						{
							if (func_526())
							{
								func_507(&Local_370, 5, Global_2359296[func_516() /*5568*/].f_681.f_37);
								bLocal_120 = false;
								bLocal_121 = true;
								iLocal_99 = 1;
								iLocal_345 = -999;
							}
						}
					}
				}
			}
			func_409();
			func_405();
			func_389();
			func_382();
			func_272();
			func_177();
		}
		func_173();
		func_141();
		func_76();
		func_73();
		if (!iLocal_123)
		{
			if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 471.9266f, -1308.596f, 28.2359f) < 1000f)
			{
				unk_0xC0409460F325D2EB(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), 1);
				unk_0xC0409460F325D2EB(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0xC0409460F325D2EB(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), 1);
				unk_0xC0409460F325D2EB(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0xC0409460F325D2EB(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), 1);
				unk_0xC0409460F325D2EB(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvtext"), 1);
				iLocal_123 = 1;
			}
		}
		if (unk_0xE85391CF212DE622())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_118)
	{
	}
	else
	{
		if (iLocal_119 >= Local_458.f_0)
		{
			iLocal_119 = 0;
			unk_0x061B1200C95204CB(&uLocal_587, 10);
			unk_0x061B1200C95204CB(&(Local_382.f_23), 7);
			unk_0x061B1200C95204CB(&uLocal_587, 11);
			unk_0x061B1200C95204CB(&uLocal_587, 23);
			if (BitTest(Local_382.f_23, 0))
			{
				unk_0xECDAB41968FF21A8(&(Local_382.f_23), true);
				unk_0x061B1200C95204CB(&(Local_382.f_23), 3);
			}
		}
		iVar0 = iLocal_119;
		if (Local_458[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_382[iVar1] == -1)
				{
					if (!Local_382.f_6[iVar1])
					{
						if (Local_382[iVar1] == Local_458[iVar0 /*4*/])
						{
							if (Local_382[iVar1] == Local_382.f_28)
							{
								func_72();
							}
							Local_382.f_33 = 0;
							Local_382.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (BitTest(Local_382.f_23, 0))
		{
			if (!BitTest(Local_382.f_23, 7))
			{
				if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar0)))
				{
					if (Local_458[iVar0 /*4*/].f_3 > 0 || func_71(unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iVar0)), 6))
					{
						if (Local_458[iVar0 /*4*/].f_3 < 3)
						{
							unk_0xECDAB41968FF21A8(&(Local_382.f_23), 7);
						}
					}
				}
			}
		}
		if (BitTest(Local_382.f_23, 0))
		{
			if (!BitTest(uLocal_587, 11))
			{
				if (BitTest(Local_458[iVar0 /*4*/].f_2, 2))
				{
					unk_0xECDAB41968FF21A8(&uLocal_587, 11);
				}
			}
			if (!BitTest(uLocal_587, 21))
			{
				if (!BitTest(uLocal_587, 3))
				{
					if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar0)))
					{
						if (BitTest(Local_458[iVar0 /*4*/].f_2, 3))
						{
							unk_0xECDAB41968FF21A8(&uLocal_587, 21);
						}
					}
				}
			}
		}
		iLocal_119++;
		if (iLocal_119 >= Local_458.f_0)
		{
			unk_0xECDAB41968FF21A8(&uLocal_587, 10);
			if (BitTest(Local_382.f_23, 7) || BitTest(uLocal_587, 23))
			{
				unk_0x061B1200C95204CB(&(Local_382.f_23), true);
			}
			if (BitTest(uLocal_587, 11))
			{
				unk_0xECDAB41968FF21A8(&(Local_382.f_23), 3);
			}
			if (BitTest(uLocal_587, 21))
			{
				unk_0xECDAB41968FF21A8(&(Local_382.f_23), 6);
			}
		}
	}
	if (func_70())
	{
		if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Local_382.f_29) > 180000)
		{
			func_69();
		}
	}
	switch (Local_382.f_20)
	{
		case 0:
			func_66();
			Local_382.f_32++;
			Local_382.f_20 = 1;
			func_65();
			break;
		
		case 1:
			if (func_64())
			{
				uLocal_341 = unk_0x0DB7F8294D73598B();
				Local_382.f_20 = 2;
			}
			else if (Local_382.f_28 == -1)
			{
				func_72();
			}
			break;
		
		case 2:
			if (!Local_382.f_17 && unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), uLocal_341) > Global_262145.f_11944)
			{
				Local_382.f_20 = 0;
			}
			break;
		
		case 3:
			break;
	}
	func_2();
}

void func_2()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (Local_382.f_26)
	{
		case 0:
			if (!BitTest(Local_382.f_23, 0))
			{
				if (bLocal_313)
				{
					if (bLocal_314)
					{
						if (Global_2793044.f_1753)
						{
							unk_0x061B1200C95204CB(&(Local_382.f_23), 2);
							unk_0x061B1200C95204CB(&(Local_382.f_23), 6);
							unk_0x061B1200C95204CB(&uLocal_587, 21);
							unk_0x08914D2D4A110A6F(0);
							Local_382.f_34 = 0;
							unk_0xECDAB41968FF21A8(&(Local_382.f_23), false);
							Global_2793044.f_1753 = 0;
						}
					}
					else if (Local_382.f_27 == -15)
					{
						unk_0x061B1200C95204CB(&(Local_382.f_23), 2);
						unk_0x061B1200C95204CB(&(Local_382.f_23), 6);
						unk_0x061B1200C95204CB(&uLocal_587, 21);
						unk_0x08914D2D4A110A6F(0);
						Local_382.f_34 = 0;
						iVar4 = func_63();
						func_49(&(Local_382.f_27), func_62(iVar4), func_61(iVar4), func_60(iVar4), func_59(iVar4), func_58(iVar4), func_56(iVar4));
						func_48(&(Local_382.f_27), 0, unk_0x15A88CFAAFFC6C4B(0, 60), unk_0x15A88CFAAFFC6C4B(0, 8), 1, 0, 0);
					}
					else if (!func_47(6))
					{
						if (!func_519(&uLocal_330))
						{
							func_518(&uLocal_330, 0, 0);
						}
						else if (func_517(&uLocal_330, 10000, 0))
						{
							func_46(&uLocal_330);
							if (func_42(Local_382.f_27))
							{
								unk_0xECDAB41968FF21A8(&(Local_382.f_23), false);
							}
						}
					}
				}
			}
			else if (Local_382.f_67 == 0)
			{
				if (func_36(1, 1, 1))
				{
					if (unk_0x44F576187FB1916E(Local_382.f_24))
					{
						unk_0x76FB1A3801008C0D(Local_382.f_24);
					}
					Local_382.f_24 = -1;
					iLocal_316 = unk_0x15A88CFAAFFC6C4B(0, 10);
					iVar5 = func_33();
					if (iVar5 != 0)
					{
						Local_382.f_67 = iVar5;
						unk_0x08914D2D4A110A6F(1);
						Local_382.f_34 = 1;
					}
				}
			}
			else if (unk_0xD46C7FE1113E7469(1))
			{
				if (func_32(Local_382.f_67))
				{
					if (!unk_0x7E2E2E8A648611F4(Local_382.f_22))
					{
						if (func_21(&Var0, &uVar3))
						{
							if (func_18(&(Local_382.f_22), Local_382.f_67, Var0, uVar3, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0))
							{
								if (unk_0x19D6457970A9D67E("MPBitset", 3))
								{
									if (unk_0x2B6E67EB7FF3FD10(unk_0x972B1BFB16AD20B5(Local_382.f_22), "MPBitset"))
									{
										iVar6 = unk_0xC2DE378329C46B2E(unk_0x972B1BFB16AD20B5(Local_382.f_22), "MPBitset");
									}
									unk_0xECDAB41968FF21A8(&iVar6, 5);
									unk_0xF7BF5A344214D039(unk_0x972B1BFB16AD20B5(Local_382.f_22), "MPBitset", iVar6);
								}
								if (unk_0x19D6457970A9D67E("MPBitset", 3))
								{
									if (unk_0x2B6E67EB7FF3FD10(unk_0x972B1BFB16AD20B5(Local_382.f_22), "MPBitset"))
									{
										iVar7 = unk_0xC2DE378329C46B2E(unk_0x972B1BFB16AD20B5(Local_382.f_22), "MPBitset");
									}
									unk_0xECDAB41968FF21A8(&iVar7, 10);
									unk_0xF7BF5A344214D039(unk_0x972B1BFB16AD20B5(Local_382.f_22), "MPBitset", iVar7);
								}
								if (unk_0x19D6457970A9D67E("Not_Allow_As_Saved_Veh", 3))
								{
									unk_0xF7BF5A344214D039(unk_0x972B1BFB16AD20B5(Local_382.f_22), "Not_Allow_As_Saved_Veh", 1);
								}
								unk_0xECDAB41968FF21A8(&(Local_382.f_23), false);
								unk_0x061B1200C95204CB(&(Local_382.f_23), 2);
								unk_0x061B1200C95204CB(&(Local_382.f_23), 4);
								unk_0x061B1200C95204CB(&(Local_382.f_23), 3);
								unk_0x061B1200C95204CB(&uLocal_587, 11);
								unk_0x061B1200C95204CB(&(Local_382.f_23), 6);
								unk_0xECDAB41968FF21A8(&uLocal_587, 23);
								unk_0xE0A291F406691F03(Local_382.f_67);
								Local_382.f_26 = 1;
								func_46(&(Local_382.f_30));
								func_518(&(Local_382.f_30), 0, 0);
								unk_0x439314AD4FC79186(unk_0x972B1BFB16AD20B5(Local_382.f_22), 7);
								unk_0xC53A0B86C96F1DFF(unk_0x972B1BFB16AD20B5(Local_382.f_22), 1);
								unk_0x9C56520AE72AFDBF(Local_382.f_67, 1);
								unk_0x361F9E062A7840CB(Local_382.f_22, 1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!BitTest(Local_382.f_23, 2))
			{
				if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
				{
					if (!unk_0xFBD273FDBCF0C5BD(unk_0x972B1BFB16AD20B5(Local_382.f_22), 0))
					{
						Local_85.f_2 = -133974622;
						func_16(Local_85, func_17(1));
						unk_0xECDAB41968FF21A8(&(Local_382.f_23), 2);
					}
				}
			}
			if (BitTest(uLocal_587, 3) || (BitTest(uLocal_587, 10) && BitTest(Local_382.f_23, 1)))
			{
				if (!BitTest(uLocal_587, 3))
				{
					if (!BitTest(Local_382.f_23, 2))
					{
						if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
						{
							if (!unk_0xFBD273FDBCF0C5BD(unk_0x972B1BFB16AD20B5(Local_382.f_22), 0))
							{
								Local_85.f_2 = -133974622;
								func_16(Local_85, func_17(1));
								unk_0xECDAB41968FF21A8(&(Local_382.f_23), 2);
							}
						}
					}
				}
				Local_382.f_26 = 2;
			}
			if (func_15(unk_0x972B1BFB16AD20B5(Local_382.f_22)))
			{
				Local_382.f_26 = 2;
				Local_85.f_2 = -406997534;
				func_16(Local_85, func_17(1));
			}
			if (!BitTest(Local_382.f_23, 4))
			{
				if (func_517(&(Local_382.f_30), 360000, 0))
				{
					unk_0xECDAB41968FF21A8(&(Local_382.f_23), 4);
					func_46(&(Local_382.f_30));
					func_518(&(Local_382.f_30), 0, 0);
				}
			}
			else if (BitTest(uLocal_587, 10))
			{
				if (!BitTest(Local_382.f_23, 3))
				{
					if (func_519(&(Local_382.f_30)))
					{
						if (func_517(&(Local_382.f_30), 120000, 0))
						{
							Local_382.f_26 = 2;
							Local_85.f_2 = -406997534;
							func_16(Local_85, func_17(1));
						}
					}
					else
					{
						func_518(&(Local_382.f_30), 0, 0);
					}
				}
				else if (func_519(&(Local_382.f_30)))
				{
					func_46(&(Local_382.f_30));
				}
			}
			if (BitTest(Local_382.f_23, 6))
			{
				if (!BitTest(uLocal_587, 3))
				{
					if (Local_382.f_26 == 1)
					{
						Local_382.f_26 = 2;
					}
				}
			}
			if (func_11(6))
			{
				if (Local_382.f_26 == 1)
				{
					Local_382.f_26 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
			{
				if (func_10(Local_382.f_22))
				{
					func_9(&(Local_382.f_22));
					Local_382.f_26 = 3;
				}
			}
			else
			{
				Local_382.f_26 = 3;
			}
			break;
		
		case 3:
			if (BitTest(uLocal_587, 10))
			{
				if (BitTest(Local_382.f_23, 1))
				{
					Local_382.f_26 = 0;
					unk_0x061B1200C95204CB(&(Local_382.f_23), false);
					Local_382.f_27 = -15;
					if (Local_382.f_67 != 0)
					{
						unk_0x9C56520AE72AFDBF(Local_382.f_67, 0);
					}
					Local_382.f_67 = 0;
					if (bLocal_314)
					{
						func_7(func_8(unk_0x41877C61D8E004AE("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()
{
	if (unk_0xE85391CF212DE622())
	{
		switch (Local_382.f_69)
		{
			case 0:
				if (BitTest(Local_382.f_23, 8))
				{
					if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
					{
						if (!func_6())
						{
							if (unk_0x90F088CDD49706CC(unk_0x972B1BFB16AD20B5(Local_382.f_22)))
							{
								if (!unk_0x9DC9E896F189AAA5(unk_0x972B1BFB16AD20B5(Local_382.f_22), 1204.053f, -3102.311f, 1.770506f, 1204.265f, -3121.974f, 17.92032f, 31.625f, 0, 1, 0))
								{
									if (!BitTest(Local_382.f_23, 9))
									{
										unk_0xECDAB41968FF21A8(&(Local_382.f_23), 9);
									}
								}
							}
						}
						else if (BitTest(Local_382.f_23, 9))
						{
							unk_0x061B1200C95204CB(&(Local_382.f_23), 9);
						}
					}
				}
				break;
			}
	}
	if (BitTest(Local_382.f_23, 9))
	{
		if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
		{
			if (func_4(Local_382.f_22))
			{
				if (unk_0xFE2AB315FD8C7A6F(Local_382.f_22))
				{
					unk_0xDDE449983CE7572E(unk_0x972B1BFB16AD20B5(Local_382.f_22), true, 0);
					unk_0x439314AD4FC79186(unk_0x972B1BFB16AD20B5(Local_382.f_22), 1);
					unk_0x2718E9CC165A99F6(unk_0x972B1BFB16AD20B5(Local_382.f_22), false);
					unk_0x9102C55C2B04C540(unk_0x972B1BFB16AD20B5(Local_382.f_22), 1, 1);
					unk_0x061B1200C95204CB(&(Local_382.f_23), 9);
				}
				else
				{
					unk_0xF05A5F7FFA0C5E2D(Local_382.f_22);
				}
			}
			else
			{
				unk_0x061B1200C95204CB(&(Local_382.f_23), 9);
			}
		}
		else
		{
			unk_0x061B1200C95204CB(&(Local_382.f_23), 9);
		}
	}
}

int func_4(var uParam0)
{
	if (unk_0x7E2E2E8A648611F4(uParam0))
	{
		return !func_5(unk_0x972B1BFB16AD20B5(uParam0));
	}
	return 0;
}

int func_5(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		if (unk_0x055111B11E6624FD(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xFBD273FDBCF0C5BD(iParam0, 0))
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

int func_6()
{
	int iVar0;
	
	if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
	{
		if (func_4(Local_382.f_22))
		{
			iVar0 = unk_0xA66E176E5772E965(unk_0x972B1BFB16AD20B5(Local_382.f_22), -1, 0);
			if (iVar0 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = -1047334626;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x46F55A5B9F053761(1, &Var0, 3, iParam0);
	}
}

int func_8(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0xECDAB41968FF21A8(&uVar0, bParam0);
	}
	return uVar0;
}

void func_9(var uParam0)
{
	var uVar0;
	
	if (unk_0x5E6D8811A0BD0954(*uParam0))
	{
		uVar0 = unk_0x177F7E959D2D410B(*uParam0);
		unk_0xE1D0FB923395DF66(&uVar0);
	}
}

int func_10(var uParam0)
{
	if (unk_0x7E2E2E8A648611F4(uParam0))
	{
		unk_0xF05A5F7FFA0C5E2D(uParam0);
		return unk_0xFE2AB315FD8C7A6F(uParam0);
	}
	return 0;
}

bool func_11(int iParam0)
{
	return !func_12(iParam0);
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_7120)
			{
				return 0;
			}
			if (func_71(unk_0x93E99A2DBCBA9CFA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7121)
			{
				return 0;
			}
			if (func_71(unk_0x93E99A2DBCBA9CFA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7122)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7123)
			{
				return 0;
			}
			if (func_71(unk_0x93E99A2DBCBA9CFA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x93E99A2DBCBA9CFA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x93E99A2DBCBA9CFA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x93E99A2DBCBA9CFA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x93E99A2DBCBA9CFA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x93E99A2DBCBA9CFA(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x93E99A2DBCBA9CFA(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_13(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_14(unk_0xADCF72047FEB806E(iVar0), 0, 1))
		{
			if (BitTest(Global_2657589[iVar0 /*466*/].f_218, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
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

int func_15(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		if (unk_0x19D6457970A9D67E("bombdec1", 3))
		{
			if (unk_0x2B6E67EB7FF3FD10(iParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (unk_0x19D6457970A9D67E("bombdec", 3))
		{
			if (unk_0x2B6E67EB7FF3FD10(iParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (unk_0x19D6457970A9D67E("bombowner", 3))
		{
			if (unk_0x2B6E67EB7FF3FD10(iParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_16(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 548471420;
	Param0.f_1 = unk_0x93E99A2DBCBA9CFA();
	if (!iParam14 == 0)
	{
		unk_0x46F55A5B9F053761(1, &Param0, 14, iParam14);
	}
}

int func_17(int iParam0)
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
			if (func_14(bVar2, 0, 0))
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

int func_18(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
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
			func_19(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_19(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_20(unk_0x93E99A2DBCBA9CFA(), Param0, iParam4) > -1)
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

int func_20(int iParam0, struct<3> Param1, int iParam4)
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

int func_21(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!func_31(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_316)
	{
		case 0:
			Var0 = { -810.8889f, -126.9419f, 33f };
			Var3 = { -807.2521f, -116.098f, 38f };
			Var6 = { -809.0935f, -121.9038f, 36.504f };
			fVar9 = 240.8011f;
			break;
		
		case 1:
			Var0 = { -804.004f, -1317.293f, 0.0005f };
			Var3 = { -797.881f, -1310.998f, 7.0005f };
			Var6 = { -801.6295f, -1313.865f, 4.0005f };
			fVar9 = 350.3062f;
			break;
		
		case 2:
			Var0 = { -194.8607f, -1955.005f, 25.6205f };
			Var3 = { -189.4078f, -1945.248f, 28.6205f };
			Var6 = { -191.5592f, -1950.239f, 26.6205f };
			fVar9 = 288.8187f;
			break;
		
		case 3:
			Var0 = { -2966.875f, 459.3981f, 13.4644f };
			Var3 = { -2961.456f, 466.0484f, 16.1725f };
			Var6 = { -2963.887f, 462.7986f, 14.2156f };
			fVar9 = 30.4415f;
			break;
		
		case 4:
			Var0 = { -420.6335f, 1217.742f, 322.7591f };
			Var3 = { -411.9892f, 1220.346f, 326.6421f };
			Var6 = { -416.0102f, 1219.771f, 324.6421f };
			fVar9 = 230.4509f;
			break;
		
		case 5:
			Var0 = { -1634.708f, -890.849f, 6.97f };
			Var3 = { -1633.903f, -879.869f, 9.1264f };
			Var6 = { -1634.006f, -885.3531f, 8.0518f };
			fVar9 = 321.31f;
			break;
		
		case 6:
			Var0 = { -338.4312f, -947.4233f, 28.0788f };
			Var3 = { -331.5926f, -944.408f, 32.0788f };
			Var6 = { -334.8547f, -945.2789f, 30.0788f };
			fVar9 = 69.0442f;
			break;
		
		case 7:
			Var0 = { 1093.925f, 245.6548f, 77.9908f };
			Var3 = { 1094.243f, 255.0715f, 82.8556f };
			Var6 = { 1093.686f, 250.4772f, 79.8556f };
			fVar9 = 328.5602f;
			break;
		
		case 8:
			Var0 = { -1407.823f, 58.1796f, 50.8018f };
			Var3 = { -1400.19f, 63.9074f, 54.3222f };
			Var6 = { -1404.459f, 62.1459f, 52.0258f };
			fVar9 = 241.2814f;
			break;
		
		case 9:
			Var0 = { -1230.324f, -1656.814f, 2.0412f };
			Var3 = { -1226.429f, -1648.143f, 4.1986f };
			Var6 = { -1228.901f, -1652.397f, 3.1204f };
			fVar9 = 305.0972f;
			break;
	}
	if (!func_31(Var0, 0f, 0f, 0f, 0))
	{
		if (iLocal_316 < 10)
		{
			if (Local_382.f_24 == -1)
			{
				Local_382.f_24 = unk_0x6A4E5D1DC3F4EB19(Var0, Var3);
			}
			else if (unk_0x44F576187FB1916E(Local_382.f_24))
			{
				if (unk_0xCC169DD78539A281(Local_382.f_24))
				{
					if (!unk_0x5550B5BF1B986512(Local_382.f_24))
					{
						if (!func_22(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							unk_0x76FB1A3801008C0D(Local_382.f_24);
							Local_382.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_316++;
							unk_0x76FB1A3801008C0D(Local_382.f_24);
							Local_382.f_24 = -1;
						}
					}
					else
					{
						iLocal_316++;
						unk_0x76FB1A3801008C0D(Local_382.f_24);
						Local_382.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_316 = 0;
		}
	}
	return 0;
}

int func_22(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_14(unk_0x93E99A2DBCBA9CFA(), 1, 1))
		{
			if (!unk_0x72474BA05A104E1E())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x2E496FE654DA4166(func_27(unk_0x93E99A2DBCBA9CFA()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_14(iVar1, 1, 1))
		{
			if (!func_24(iVar1, 0) && unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x93E99A2DBCBA9CFA()))
				{
					if ((func_23(iVar1) || !bParam10) && !Global_2657589[iVar1 /*466*/].f_270)
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
								if (unk_0x2E496FE654DA4166(func_27(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (unk_0x2E496FE654DA4166(func_27(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_23(int iParam0)
{
	if (unk_0x8FC78693DAAD4372(unk_0xF2CFBB1105511E1A(iParam0)) || Global_2657589[iParam0 /*466*/].f_255)
	{
		return 1;
	}
	return 0;
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_25(-1, 0) == 8;
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

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

int func_26()
{
	return Global_1574918;
}

Vector3 func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_30() && Global_1853910[iVar0 /*862*/].f_832) && !func_29(Global_1853910[iVar0 /*862*/].f_833))
	{
		return Global_1853910[iVar0 /*862*/].f_833;
	}
	return func_28(iParam0);
}

Vector3 func_28(int iParam0)
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iParam0), 0);
}

int func_29(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_30()
{
	return Global_2683862.f_19;
}

bool func_31(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_32(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x852EC2A7DE66202D(iParam0);
	return unk_0x0CBB7C273DED26E7(iParam0);
}

int func_33()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (Global_262145.f_2345 != 0)
	{
		iVar1 = Global_262145.f_2345;
		if (unk_0x9C35450854805E6E(iVar1))
		{
			if (unk_0x7E7D26DE9951D7A2(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar2 = func_35(&Local_382);
		iVar0 = func_34(iVar2);
	}
	return iVar0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("zion");
		
		case 1:
			return joaat("serrano");
		
		case 2:
			return joaat("jackal");
		
		case 3:
			return joaat("schafter2");
		
		case 4:
			return joaat("dubsta");
		
		case 5:
			return joaat("f620");
		
		case 6:
			return joaat("schwarzer");
		
		case 7:
			return joaat("rocoto");
		
		case 8:
			return joaat("sentinel2");
		
		case 9:
			return joaat("felon2");
		
		case 10:
			return joaat("comet2");
		
		case 11:
			return joaat("banshee");
		
		case 12:
			return joaat("surano");
		
		case 13:
			return joaat("coquette");
		
		case 14:
			return joaat("carbonizzare");
		
		case 15:
			return joaat("exemplar");
		
		case 16:
			return joaat("feltzer2");
		
		case 17:
			return joaat("bullet");
		
		case 18:
			return joaat("superd");
		
		case 19:
			return joaat("infernus");
		
		default:
	}
	return 0;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x15A88CFAAFFC6C4B(0, 5);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (iVar1 + iVar0);
		if (iVar2 >= 5)
		{
			iVar2 = (iVar2 - 5);
		}
		if (!(*uParam0)[iVar2] == -1)
		{
			if (uParam0->f_6[iVar2] == 0)
			{
				return (*uParam0)[iVar2];
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_36(int iParam0, bool bParam1, bool bParam2)
{
	return func_37(1, iParam0, 1, bParam1, bParam2);
}

int func_37(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666891, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_41(iParam0) - func_40(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_39(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_40(iParam0, 1));
		}
		if (!bParam4 && Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/] != 3)
		{
			iVar1 = (iVar1 - func_38(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_38(int iParam0)
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

int func_39(int iParam0)
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

int func_40(int iParam0, bool bParam1)
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

int func_41(int iParam0)
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

bool func_42(int iParam0)
{
	return func_43(func_63(), iParam0);
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_44(iParam1) || !func_44(iParam0))
	{
		return 1;
	}
	iVar0 = func_56(iParam0);
	iVar1 = func_56(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_58(iParam0);
	iVar1 = func_58(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_59(iParam0);
	iVar1 = func_59(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_60(iParam0);
	iVar1 = func_60(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_61(iParam0);
	iVar1 = func_61(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	iVar1 = func_62(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
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
	iVar0 = func_62(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_61(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_60(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_56(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_58(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_59(iParam0);
	if (iVar5 < 1 || iVar5 > func_45(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0, int iParam1)
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

void func_46(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_47(int iParam0)
{
	return !func_12(iParam0);
}

void func_48(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_56(*uParam0);
	iVar1 = func_58(*uParam0);
	iVar2 = func_59(*uParam0);
	iVar3 = func_60(*uParam0);
	iVar4 = func_61(*uParam0);
	iVar5 = func_62(*uParam0);
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
	iVar6 = func_45(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_45(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_49(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, iParam1);
	func_54(uParam0, iParam2);
	func_53(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_51(uParam0, iParam4);
	func_50(uParam0, iParam6);
}

void func_50(var uParam0, int iParam1)
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

void func_51(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_58(*uParam0);
	iVar1 = func_56(*uParam0);
	if (iParam1 < 1 || iParam1 > func_45(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_56(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_57(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_57(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_58(int iParam0)
{
	return iParam0 & 15;
}

int func_59(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_60(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_61(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_62(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_63()
{
	var uVar0;
	
	func_55(&uVar0, unk_0x731F95B6458DCF80());
	func_54(&uVar0, unk_0x77BBAAED3E25322C());
	func_53(&uVar0, unk_0x30DFE1FFD2CC7420());
	func_51(&uVar0, unk_0x8C0F17CAC308A14B());
	func_52(&uVar0, unk_0x61117764C67882B7());
	func_50(&uVar0, unk_0x367F557725B53815());
	return uVar0;
}

int func_64()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_382.f_6[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_65()
{
	int iVar0;
	
	if (!BitTest(Local_382.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_382.f_35[iVar0] = -1;
			iVar0++;
		}
		unk_0xECDAB41968FF21A8(&(Local_382.f_23), 5);
	}
}

void func_66()
{
	int iVar0;
	
	func_521(&Local_382, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_382.f_12[iVar0] = func_67();
		iVar0++;
	}
	Local_382.f_33 = 1;
}

int func_67()
{
	int iVar0;
	
	iVar0 = unk_0x15A88CFAAFFC6C4B(0, 10);
	while (func_68(iVar0))
	{
		iVar0 = unk_0x15A88CFAAFFC6C4B(0, 10);
	}
	return iVar0;
}

int func_68(int iParam0)
{
	int iVar0;
	
	if (!iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Local_382.f_12[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_69()
{
	int iVar0;
	
	iVar0 = func_35(&Local_382);
	if (iVar0 != Local_382.f_28)
	{
		Local_382.f_28 = iVar0;
		Local_382.f_29 = unk_0x0DB7F8294D73598B();
	}
}

int func_70()
{
	if (Local_382.f_20 > 0)
	{
		if (Local_382[0] != Local_382[1])
		{
			return 1;
		}
	}
	return 0;
}

bool func_71(int iParam0, int iParam1)
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

void func_72()
{
	Local_382.f_29 = 0;
}

void func_73()
{
	int iVar0;
	
	if (func_70())
	{
		if (Global_2793044.f_4481 == 0 || BitTest(Global_2793044.f_4482, 0))
		{
			if (!func_519(&uLocal_336) || func_517(&uLocal_336, 2000, 0))
			{
				iVar0 = func_35(&Local_370);
				if (iVar0 > -1)
				{
					Global_2793044.f_4481 = func_34(iVar0);
					func_46(&uLocal_334);
					func_518(&uLocal_334, 0, 0);
					if (BitTest(Global_2793044.f_4482, 0))
					{
						unk_0x061B1200C95204CB(&(Global_2793044.f_4482), false);
					}
				}
				else
				{
					func_46(&uLocal_336);
					func_518(&uLocal_336, 0, 0);
				}
			}
		}
		else if (Global_2793044.f_4481 != 0)
		{
			if (func_517(&uLocal_334, 20000, 0))
			{
				if (!func_74(&Local_370, Global_2793044.f_4481))
				{
					Global_2793044.f_4481 = 0;
				}
				func_46(&uLocal_334);
				func_518(&uLocal_334, 0, 0);
			}
		}
	}
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(iParam1);
	if (!iVar0 == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!(*uParam0)[iVar1] == -1)
			{
				if (!uParam0->f_6[iVar1])
				{
					if ((*uParam0)[iVar1] == iVar0)
					{
						return 1;
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 0;
		
		case joaat("serrano"):
			return 1;
		
		case joaat("jackal"):
			return 2;
		
		case joaat("schafter2"):
			return 3;
		
		case joaat("dubsta"):
			return 4;
		
		case joaat("f620"):
			return 5;
		
		case joaat("schwarzer"):
			return 6;
		
		case joaat("rocoto"):
			return 7;
		
		case joaat("sentinel2"):
			return 8;
		
		case joaat("felon2"):
			return 9;
		
		case joaat("comet2"):
			return 10;
		
		case joaat("banshee"):
			return 11;
		
		case joaat("surano"):
			return 12;
		
		case joaat("coquette"):
			return 13;
		
		case joaat("carbonizzare"):
			return 14;
		
		case joaat("exemplar"):
			return 15;
		
		case joaat("feltzer2"):
			return 16;
		
		case joaat("bullet"):
			return 17;
		
		case joaat("superd"):
			return 18;
		
		case joaat("infernus"):
			return 19;
		
		default:
	}
	return -1;
}

void func_76()
{
	int iVar0;
	
	if (((((bLocal_105 || bLocal_106) || bLocal_107) || bLocal_109) || bLocal_108) || bLocal_110)
	{
		if (((((Global_2793044.f_28.f_41 || func_138(unk_0x93E99A2DBCBA9CFA(), 1, 0)) || func_137(unk_0x93E99A2DBCBA9CFA())) || !func_135()) || func_123()) || func_118())
		{
			bLocal_105 = false;
			bLocal_107 = false;
			bLocal_106 = false;
			bLocal_109 = false;
			bLocal_108 = false;
			func_117();
		}
	}
	if ((func_116("FM_CTUT_RSP") || func_116("FM_CTUT_REP")) || func_116("FM_CTUT_LLS"))
	{
		if (!func_115() || func_118())
		{
			func_117();
		}
	}
	if (bLocal_110)
	{
		if (!func_116("FM_IHELP_LCP"))
		{
			if (!unk_0x70CDFE65A7D509C2())
			{
				if (func_98())
				{
					if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
					{
						if (func_97())
						{
							func_91("FM_IHELP_LCP", 0);
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_587, 18))
	{
		if (func_116("FM_IHELP_LCP"))
		{
			func_84("FM_IHELP_LCP");
		}
	}
	if (bLocal_105)
	{
		if (!func_116("FM_CTUT_MOD"))
		{
			if (!unk_0x70CDFE65A7D509C2())
			{
				if (func_98())
				{
					if (BitTest(uLocal_340, 2))
					{
						if (func_97())
						{
							func_91("FM_CTUT_MOD", 0);
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_587, 18))
	{
		if (func_116("FM_CTUT_MOD"))
		{
			func_84("FM_CTUT_MOD");
		}
	}
	if (bLocal_107)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!unk_0x70CDFE65A7D509C2())
			{
				if (unk_0x35DF833D93BCC488())
				{
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						if (!func_138(unk_0x93E99A2DBCBA9CFA(), 1, 0))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_RSP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_587, 18))
	{
		if (func_116("FM_CTUT_RSP"))
		{
			func_84("FM_CTUT_RSP");
		}
	}
	if (bLocal_108)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!unk_0x70CDFE65A7D509C2())
			{
				if (unk_0x35DF833D93BCC488())
				{
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						if (!func_138(unk_0x93E99A2DBCBA9CFA(), 1, 0))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_REP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_587, 18))
	{
		if (func_116("FM_CTUT_REP"))
		{
			func_84("FM_CTUT_REP");
		}
	}
	if (bLocal_109)
	{
		if (!func_116("FM_CTUT_LLS"))
		{
			if (!unk_0x70CDFE65A7D509C2())
			{
				if (func_98() || func_77())
				{
					if (func_97())
					{
						if (func_115())
						{
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_587, 18))
	{
		if (func_116("FM_CTUT_LLS"))
		{
			func_84("FM_CTUT_LLS");
		}
	}
	if (bLocal_106)
	{
		if (!func_116("FM_IMP_SIM"))
		{
			if (!unk_0x70CDFE65A7D509C2())
			{
				if (func_98() || func_77())
				{
					if (BitTest(uLocal_340, 3))
					{
						if (!iLocal_112)
						{
							if (func_97())
							{
								func_91("FM_IMP_SIM", 0);
								if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
								{
									if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
									{
										iLocal_355 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
									}
								}
							}
						}
						else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
						{
							if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
							{
								iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
								if (iVar0 != iLocal_355)
								{
									iLocal_112 = 0;
									func_46(&uLocal_338);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_519(&uLocal_338))
		{
			func_518(&uLocal_338, 0, 0);
		}
		else if (func_517(&uLocal_338, 20000, 0))
		{
			func_117();
			iLocal_112 = 1;
		}
	}
	else if (!BitTest(uLocal_587, 18))
	{
		if (func_116("FM_IMP_SIM"))
		{
			func_84("FM_IMP_SIM");
		}
	}
}

bool func_77()
{
	return (((((func_78(39) || func_78(40)) || func_78(41)) || func_78(42)) || func_78(43)) || func_78(44));
}

int func_78(int iParam0)
{
	return func_79(iParam0, 6, 1);
}

int func_79(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100733.f_1407[iParam0], iParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_83() == 0)
		{
			return BitTest(func_80(func_82(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_81(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

int func_82(int iParam0)
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
			return 12385;
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
		
		case 58:
			return 11433;
			break;
		
		case 59:
			return 11844;
			break;
		
		default:
			break;
	}
	return 14192;
}

int func_83()
{
	return Global_32163;
}

void func_84(char* sParam0)
{
	bool bVar0;
	
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_90())
	{
		if (Global_1574757 == 11)
		{
			if (unk_0x57049FB1B412BAB7(sParam0) > 63)
			{
				return;
			}
			bVar0 = unk_0x14580F20CBCE4FA9(sParam0) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_16));
		}
		else
		{
			if (unk_0x57049FB1B412BAB7(sParam0) > 23)
			{
				return;
			}
			bVar0 = unk_0x14580F20CBCE4FA9(sParam0) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_12));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_85();
}

void func_85()
{
	func_87();
	func_86(0);
}

void func_86(bool bParam0)
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

void func_87()
{
	if (!func_89())
	{
	}
	if (func_90())
	{
		unk_0x7A9058087D285F2B(&(Global_1574757.f_12));
		func_88();
		unk_0x83D7210D9382146A();
	}
}

void func_88()
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

int func_89()
{
	if (!func_90())
	{
		return 0;
	}
	unk_0xEB16059D3EDC926B(&(Global_1574757.f_12));
	func_88();
	return unk_0xC44AC9C43C91326C();
}

int func_90()
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

void func_91(char* sParam0, bool bParam1)
{
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return;
	}
	if (unk_0x57049FB1B412BAB7(sParam0) > 23)
	{
		return;
	}
	if (func_95(sParam0))
	{
		return;
	}
	func_85();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), unk_0x688846D56810779A(), 32);
	Global_1574757.f_9 = unk_0x14580F20CBCE4FA9(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_94();
	func_93(bParam1);
	func_92();
}

void func_92()
{
	unk_0xECDAB41968FF21A8(&(Global_1574757.f_59), true);
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		unk_0xECDAB41968FF21A8(&(Global_1574757.f_59), false);
		return;
	}
	unk_0x061B1200C95204CB(&(Global_1574757.f_59), false);
}

void func_94()
{
	Global_1574757.f_10 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), 86400000);
	Global_1574757.f_11 = unk_0x0DB7F8294D73598B();
}

bool func_95(char* sParam0)
{
	if (!func_90())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_96(sParam0);
	}
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return 0;
	}
	return unk_0x14580F20CBCE4FA9(sParam0) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_12));
}

bool func_96(char* sParam0)
{
	if (!func_90())
	{
		return 0;
	}
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return 0;
	}
	return unk_0x14580F20CBCE4FA9(sParam0) == unk_0x14580F20CBCE4FA9(&(Global_1574757.f_16));
}

bool func_97()
{
	bool bVar0;
	
	if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
	{
		if (func_4(Local_382.f_22))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x44A6C9475C859B45(unk_0xC1A5EC5C986B98AD(), unk_0x972B1BFB16AD20B5(Local_382.f_22)))
				{
				}
			}
		}
	}
	if (!BitTest(uLocal_588, 0))
	{
		if (!BitTest(uLocal_588, 1))
		{
			bVar0 = true;
		}
		else if (!BitTest(uLocal_588, 2))
		{
			bVar0 = true;
		}
		else if (!BitTest(uLocal_588, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			unk_0xECDAB41968FF21A8(&uLocal_588, false);
		}
	}
	return bVar0;
}

int func_98()
{
	if ((((((((((((((((((!func_14(unk_0x93E99A2DBCBA9CFA(), 1, 1) || unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD())) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || func_114(8, -1)) || func_114(15, -1)) || func_113()) || func_114(3, -1)) || func_138(unk_0x93E99A2DBCBA9CFA(), 1, 0)) || func_112()) || func_115()) || func_111()) || func_110()) || func_108()) || func_107()) || unk_0x70CDFE65A7D509C2()) || func_106() > 0) || !func_135()) || func_99()) || func_118())
	{
		return 0;
	}
	return 1;
}

int func_99()
{
	if (func_71(unk_0x93E99A2DBCBA9CFA(), 8))
	{
		return 1;
	}
	if (func_71(unk_0x93E99A2DBCBA9CFA(), 10))
	{
		return 1;
	}
	if (func_71(unk_0x93E99A2DBCBA9CFA(), 12))
	{
		return 1;
	}
	if (func_71(unk_0x93E99A2DBCBA9CFA(), 14))
	{
		return 1;
	}
	if (func_71(unk_0x93E99A2DBCBA9CFA(), 13))
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (func_104())
	{
		return 1;
	}
	if (!func_103() && !func_102())
	{
		if (!func_101())
		{
			if (!func_100())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_100()
{
	var uVar0;
	
	if (BitTest(Global_2793044.f_1824, 7))
	{
		return 1;
	}
	uVar0 = Global_1665626[func_81(-1)];
	if (BitTest(uVar0, 6))
	{
		unk_0xECDAB41968FF21A8(&(Global_2793044.f_1824), 7);
		return 1;
	}
	if (func_103())
	{
		return 1;
	}
	if (func_102())
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_139, 2);
}

bool func_102()
{
	return Global_1575048;
}

bool func_103()
{
	return Global_1575050;
}

int func_104()
{
	if (BitTest(Global_2793044.f_1824, 28) && !BitTest(Global_2793044.f_1824, 29))
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return BitTest(Global_2793044.f_1825, 3);
}

int func_106()
{
	return Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_193;
}

int func_107()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

bool func_108()
{
	return func_109();
}

bool func_109()
{
	return Global_1649046.f_40 == 3;
}

bool func_110()
{
	return Global_2672505.f_2837.f_582;
}

bool func_111()
{
	return Global_100733.f_388 > 0;
}

bool func_112()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 0);
}

var func_113()
{
	return Global_2625288;
}

bool func_114(int iParam0, int iParam1)
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

bool func_115()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

int func_116(char* sParam0)
{
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return 0;
	}
	if (!func_90())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		if (unk_0x57049FB1B412BAB7(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x57049FB1B412BAB7(sParam0) > 23)
	{
		return 0;
	}
	return func_95(sParam0);
}

void func_117()
{
	if (!func_90())
	{
		return;
	}
	if (!unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A()) == Global_1574757.f_9)
	{
		return;
	}
	func_85();
}

int func_118()
{
	if (func_122(unk_0x93E99A2DBCBA9CFA(), 1))
	{
		return 1;
	}
	if (func_119(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_120(Global_2657589[iParam0 /*466*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

int func_120(int iParam0)
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

int func_121()
{
	return -1;
}

int func_122(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_123()
{
	if (func_127())
	{
		return 1;
	}
	if (func_124(unk_0x93E99A2DBCBA9CFA(), 1))
	{
		return 1;
	}
	if (func_122(unk_0x93E99A2DBCBA9CFA(), 1))
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 && func_125(Global_1894573[iParam0 /*608*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1)
	{
		if (func_125(Global_1894573[iParam0 /*608*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_126(iParam0, 0);
	return 0;
}

int func_126(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_127()
{
	if (!func_134(unk_0x93E99A2DBCBA9CFA()))
	{
		if (func_130(unk_0x93E99A2DBCBA9CFA()) || func_129(unk_0x93E99A2DBCBA9CFA()) != -1)
		{
			return 1;
		}
		if (func_128(unk_0x93E99A2DBCBA9CFA()) && Global_1836858.f_4 == 133)
		{
			return 1;
		}
	}
	return 0;
}

var func_128(int iParam0)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_1, 4);
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/];
	}
	return -1;
}

int func_130(int iParam0)
{
	if (func_133(iParam0))
	{
		return 1;
	}
	if (func_131(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_132(iParam0, 9);
	}
	return 0;
}

var func_132(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_133(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

bool func_134(int iParam0)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_1, 2);
}

int func_135()
{
	if (func_136() == 0)
	{
		return 1;
	}
	return 0;
}

int func_136()
{
	return Global_1574632.f_18;
}

int func_137(int iParam0)
{
	if (!func_14(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_861, 2);
}

int func_138(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_139(iParam0))
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

bool func_139(int iParam0)
{
	return func_140(iParam0);
}

var func_140(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

void func_141()
{
	if (bLocal_103)
	{
		if (!unk_0xCE4AAA035282336C(Global_1935136))
		{
			Global_1935136 = unk_0x7F0C74F83813841D(Global_1935137);
			unk_0xEA4639F4444B7003(Global_1935136, 293);
			unk_0x225EB85DBC38E707(Global_1935136, 1f);
			unk_0xDFA9D2A64046A409(Global_1935136, 0);
			unk_0x4049FDC177C92D4B(Global_1935136, "IMPEX_BLIP_FM");
			if (func_172())
			{
				unk_0x37B37B8045788E6A(Global_1935136, 1);
			}
		}
	}
	else if (unk_0xCE4AAA035282336C(Global_1935136))
	{
		unk_0x45533C09A6C9B409(&Global_1935136);
		if (bLocal_312)
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
				{
					if (!func_167(unk_0xF2CFBB1105511E1A(unk_0x93E99A2DBCBA9CFA()), 1215605247, &uLocal_343, 0, 500, 1, 0))
					{
						if (func_118())
						{
							func_166("IMPEX_HIPR_DAM", -1);
						}
					}
				}
			}
		}
	}
	if (bLocal_104)
	{
		if (iLocal_125 == -1)
		{
			iLocal_125 = func_148(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 4, -1);
			if (iLocal_125 != -1)
			{
				func_142(iLocal_125, 1);
			}
		}
	}
	else if (iLocal_125 != -1)
	{
		func_142(iLocal_125, 0);
		iLocal_125 = -1;
	}
}

void func_142(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 39:
			func_143(39, bParam1);
			break;
		
		case 40:
			func_143(40, bParam1);
			break;
		
		case 41:
			func_143(41, bParam1);
			break;
		
		case 42:
			func_143(42, bParam1);
			break;
		
		case 43:
			func_143(43, bParam1);
			break;
		
		case 44:
			func_143(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_143(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_79(iParam0, 8, 0))
		{
			func_147(iParam0, 8, 0);
			func_146(iParam0);
		}
	}
	else if (func_79(iParam0, 8, 0))
	{
		func_144(iParam0, 8, 0);
		func_146(iParam0);
	}
}

void func_144(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x061B1200C95204CB(&(Global_100733.f_1407[iParam0]), bParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_83() == 0)
		{
			uVar0 = func_80(func_82(iParam0), -1, 0);
			unk_0x061B1200C95204CB(&uVar0, bParam1);
			func_145(func_82(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

void func_145(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

void func_146(int iParam0)
{
	Global_100733.f_202[iParam0] = 1;
	Global_100733.f_201 = 1;
}

void func_147(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xECDAB41968FF21A8(&(Global_100733.f_1407[iParam0]), bParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_83() == 0)
		{
			uVar0 = func_80(func_82(iParam0), -1, 0);
			unk_0xECDAB41968FF21A8(&uVar0, bParam1);
			func_145(func_82(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

int func_148(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		if (iParam3 == 6 || iParam3 == func_165(iVar0))
		{
			iVar4 = iVar0;
			if (func_164(iVar4))
			{
				fVar1 = unk_0x2E496FE654DA4166(Param0, func_149(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_149(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_161(Global_102825);
			break;
		
		case 46:
			if (Global_1853747 != func_121())
			{
				if (func_160(Global_1853747))
				{
					return func_153(2, 2);
				}
				else if (func_152(Global_1853747))
				{
					return func_153(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1970473;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
		
		case 56:
			switch (Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_7)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.166f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.718f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_150();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_150()
{
	if (!func_29(Global_1956117))
	{
		return Global_1956117;
	}
	switch (func_151())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
		
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
		
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
		
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
		
		case 4:
			return 795.583f, 1210.78f, 338.962f;
		
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
		
		case 6:
			return -789.719f, 5400.921f, 33.915f;
		
		case 7:
			return -24.384f, 3048.167f, 40.703f;
		
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
		
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
		
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
		
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
		
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
		
		case 13:
			return -57.208f, -2658.793f, 5.737f;
		
		case 14:
			return 1905.017f, 565.222f, 175.558f;
		
		case 15:
			return 974.484f, -1718.798f, 30.296f;
		
		case 16:
			return 779.077f, -3266.297f, 5.719f;
		
		case 17:
			return -587.728f, -1637.208f, 19.611f;
		
		case 18:
			return 733.99f, -736.803f, 26.165f;
		
		case 19:
			return -1694.632f, -454.082f, 40.712f;
		
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
		
		case 21:
			return -496.618f, 40.231f, 52.316f;
		
		case 22:
			return 275.527f, 66.509f, 94.108f;
		
		case 23:
			return 260.928f, -763.35f, 30.559f;
		
		case 24:
			return -478.025f, -741.45f, 30.299f;
		
		case 25:
			return 894.94f, 3603.911f, 32.56f;
		
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
		
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
		
		case 28:
			return 1101.032f, -335.172f, 66.944f;
		
		case 29:
			return 149.683f, -1655.674f, 29.028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_151()
{
	return Global_2652258.f_2650;
}

int func_152(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 0) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 1)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_153(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853747 != func_121())
	{
		if (iParam1 == 3)
		{
			if (func_154(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4))
			{
				if (func_154(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5))
			{
				if (func_154(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_154(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_159(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_159(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_157(iParam0) };
	}
	else
	{
		Var12 = { func_156(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_155(Var18, -Var0.f_3.f_2) };
	Var18 = { func_155(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0xF2A6E8EA57F9D501(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_155(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_156(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_157(int iParam0)
{
	return func_158(iParam0);
}

struct<6> func_158(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_159(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_160(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 3) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 4)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_161(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_162() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_162()
{
	return func_163(unk_0x93E99A2DBCBA9CFA());
}

var func_163(int iParam0)
{
	return unk_0x4186606EC622CA48(Global_2657589[iParam0 /*466*/].f_321.f_3, 28, 31);
}

bool func_164(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = unk_0xCE4AAA035282336C(Global_100733.f_263[39]);
			break;
		
		case 40:
			bVar0 = unk_0xCE4AAA035282336C(Global_100733.f_263[40]);
			break;
		
		case 41:
			bVar0 = unk_0xCE4AAA035282336C(Global_100733.f_263[41]);
			break;
		
		case 42:
			bVar0 = unk_0xCE4AAA035282336C(Global_100733.f_263[42]);
			break;
		
		case 43:
			bVar0 = unk_0xCE4AAA035282336C(Global_100733.f_263[43]);
			break;
		
		case 44:
			bVar0 = unk_0xCE4AAA035282336C(Global_100733.f_263[44]);
			break;
	}
	return bVar0;
}

int func_165(int iParam0)
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
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
	}
	return 6;
}

void func_166(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

int func_167(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!func_519(uParam2))
	{
		func_518(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_168(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<8> Var3;
	
	if (!func_519(uParam3))
	{
		func_518(uParam3, 0, 0);
	}
	func_171(&Var3, iParam1);
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0))
		{
			if (func_169(iParam0, iParam1, 30))
			{
				if (unk_0x71904BD37B848CAF(iParam0))
				{
					uVar0 = unk_0x9C8D7679C15E75FF(iParam0);
					if (!unk_0x66599E73DBA5A850(uVar0))
					{
						if (unk_0x60A06DE259634304(iVar0))
						{
							uVar2 = unk_0xB850F932D03EF34D(iVar0);
							if (bParam2)
							{
								if (unk_0x09D743A440A2EE4F(iParam1, uVar2, fParam4, -1))
								{
									if (uParam7 || (!unk_0x254F0DC8559436B4(iParam1, uVar2, 2) && !(Var3.f_7 != 0 && unk_0x254F0DC8559436B4(iParam1, uVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (unk_0x09D743A440A2EE4F(iParam1, uVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (unk_0x254F0DC8559436B4(iParam1, uVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && unk_0x254F0DC8559436B4(iParam1, uVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (unk_0x3C3D6D026CF7F51B(iVar0, 0))
						{
							uVar1 = unk_0x95DC39736F6748E3(iVar0, 0);
							if (unk_0x7DE17ACDD8BA2642(uVar1))
							{
								if (bParam2)
								{
									if (unk_0x5EA574A4890231BA(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!unk_0xECCF4907CCCB5144(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && unk_0xECCF4907CCCB5144(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (unk_0x5EA574A4890231BA(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (unk_0xECCF4907CCCB5144(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && unk_0xECCF4907CCCB5144(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (unk_0x5EA574A4890231BA(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!unk_0xECCF4907CCCB5144(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xECCF4907CCCB5144(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (unk_0x5EA574A4890231BA(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0xECCF4907CCCB5144(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && unk_0xECCF4907CCCB5144(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (unk_0xA6B591D40DE982B5(iParam0) || unk_0x4E7A9806173C3AD1(iParam0))
				{
					if (bParam2)
					{
						if (unk_0x5EA574A4890231BA(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!unk_0xECCF4907CCCB5144(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xECCF4907CCCB5144(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (unk_0x5EA574A4890231BA(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (unk_0xECCF4907CCCB5144(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && unk_0xECCF4907CCCB5144(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	func_46(uParam3);
	return 0;
}

int func_169(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(iParam0, 1), func_170(iParam1), 1) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_170(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 1204.429f, -3110.847f, 4.3988f;
			break;
		
		case -1710530912:
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case 1131590004:
			return -1164.887f, -2011.105f, 12.25371f;
			break;
		
		case 916723671:
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case 1340820069:
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case -866958545:
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_171(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1215605247:
			*uParam0 = 99;
			uParam0->f_1 = 1215605247;
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204.429f, -3110.847f, 4.3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_11 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_14 = 32.498f;
			uParam0->f_27 = { 1204.157f, -3122.599f, 3.795331f };
			uParam0->f_27.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case -1710530912:
			*uParam0 = 99;
			uParam0->f_1 = -1710530912;
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.791f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.004f, 23.4973f };
			uParam0->f_9.f_11 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_14 = 60.0199f;
			uParam0->f_27 = { 738.8857f, -1088.516f, 20.55957f };
			uParam0->f_27.f_3 = { 718.613f, -1088.78f, 24.83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case 1131590004:
			*uParam0 = 99;
			uParam0->f_1 = 1131590004;
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164.887f, -2011.105f, 12.25371f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.774f, -2010.27f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.639f, -2010.211f, 14.2928f };
			uParam0->f_9.f_11 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_14 = 64.5334f;
			uParam0->f_27 = { -1169.723f, -2015.923f, 11.50441f };
			uParam0->f_27.f_3 = { -1160.558f, -2007.005f, 15.68027f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 3:
		case 916723671:
			*uParam0 = 99;
			uParam0->f_1 = 916723671;
			uParam0->f_2 = 3;
			uParam0->f_3 = { -330.44f, -143.39f, 39.33f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332.1567f, -141.0546f, 40.2864f };
			uParam0->f_9.f_4 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_7 = 60.0241f;
			uParam0->f_9.f_8 = { -332.3621f, -140.8507f, 40.3956f };
			uParam0->f_9.f_11 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_14 = 60.0241f;
			uParam0->f_27 = { -323.7998f, -146.2539f, 37.81492f };
			uParam0->f_27.f_3 = { -334.3432f, -141.7261f, 40.75964f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 4:
		case 1340820069:
			*uParam0 = 99;
			uParam0->f_1 = 1340820069;
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.322f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.048f, 32.5586f };
			uParam0->f_9.f_11 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_14 = 67.562f;
			uParam0->f_27 = { 100.9759f, 6625.046f, 30.60301f };
			uParam0->f_27.f_3 = { 111.2522f, 6615.657f, 33.62929f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 5:
		case -866958545:
			*uParam0 = 99;
			uParam0->f_1 = -866958545;
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.345f, 2644.418f, 38.866f };
			uParam0->f_9.f_11 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_14 = 67.3374f;
			uParam0->f_27 = { 1182.835f, 2634.775f, 36.55006f };
			uParam0->f_27.f_3 = { 1182.578f, 2647.955f, 39.58602f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
	}
}

int func_172()
{
	int iVar0;
	var uVar1;
	
	uVar1 = func_80(1200, -1, 0);
	if (!BitTest(uVar1, 1))
	{
		iVar0 = 1;
	}
	else if (!BitTest(uVar1, 2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_173()
{
	if (bLocal_101)
	{
		if (!iLocal_102)
		{
			func_175(1215605247, 1, 0);
			func_174(1);
			iLocal_102 = 1;
		}
	}
	else if (iLocal_102)
	{
		func_175(1215605247, 0, 0);
		func_174(0);
		iLocal_102 = 0;
	}
}

void func_174(bool bParam0)
{
	if (Global_2793044.f_4616 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2793044.f_4616 = bParam0;
	}
}

void func_175(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
	}
	else if (bParam1)
	{
		if (!BitTest(Global_2793044.f_4595, func_176(iParam0)))
		{
			if (bParam2)
			{
				unk_0xECDAB41968FF21A8(&(Global_2793044.f_4595.f_1), func_176(iParam0));
			}
			unk_0xECDAB41968FF21A8(&(Global_2793044.f_4595), func_176(iParam0));
		}
	}
	else if (BitTest(Global_2793044.f_4595, func_176(iParam0)))
	{
		if (bParam2)
		{
			unk_0x061B1200C95204CB(&(Global_2793044.f_4595.f_1), func_176(iParam0));
		}
		unk_0x061B1200C95204CB(&(Global_2793044.f_4595), func_176(iParam0));
	}
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 0;
			break;
		
		case -1710530912:
			return 1;
			break;
		
		case 1131590004:
			return 2;
			break;
		
		case 916723671:
			return 3;
			break;
		
		case 1340820069:
			return 4;
			break;
		
		case -866958545:
			return 5;
			break;
	}
	return 0;
}

void func_177()
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_382.f_23, 0))
	{
		if (iLocal_346 >= 32)
		{
			unk_0x061B1200C95204CB(&uLocal_587, 5);
			iLocal_346 = 0;
			iLocal_318 = -1;
		}
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iLocal_346)))
		{
			iVar0 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iLocal_346));
			iVar1 = unk_0xF2CFBB1105511E1A(iVar0);
			if (func_14(iVar0, 0, 1))
			{
				if (!BitTest(uLocal_587, 3))
				{
					if (BitTest(Local_458[iLocal_346 /*4*/].f_2, 1))
					{
						unk_0xECDAB41968FF21A8(&uLocal_587, 3);
					}
				}
				if (iLocal_318 == -1)
				{
					if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
					{
						if (func_4(Local_382.f_22))
						{
							if (!unk_0x66599E73DBA5A850(iVar1))
							{
								if (unk_0x44A6C9475C859B45(iVar1, unk_0x972B1BFB16AD20B5(Local_382.f_22)))
								{
									if (unk_0xA66E176E5772E965(unk_0x972B1BFB16AD20B5(Local_382.f_22), -1, 0) == iVar1)
									{
										iLocal_318 = iLocal_346;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_346++;
		if (iLocal_346 >= 32)
		{
			unk_0xECDAB41968FF21A8(&uLocal_587, 5);
		}
		func_270();
		if (!BitTest(uLocal_587, 3))
		{
			if (!BitTest(Local_458[unk_0xD378D2332270959A() /*4*/].f_2, 3))
			{
				if (!BitTest(Local_458[unk_0xD378D2332270959A() /*4*/].f_2, 1))
				{
					if (func_268())
					{
						unk_0xECDAB41968FF21A8(&(Local_458[unk_0xD378D2332270959A() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_315 != Local_382.f_34)
	{
		if (Local_382.f_34 == 0)
		{
			if (!unk_0x5E6D8811A0BD0954(Local_382.f_22))
			{
				iLocal_315 = Local_382.f_34;
				unk_0x08914D2D4A110A6F(iLocal_315);
			}
		}
		else
		{
			iLocal_315 = Local_382.f_34;
			unk_0x08914D2D4A110A6F(iLocal_315);
		}
	}
	if (BitTest(Local_382.f_23, 0))
	{
		switch (Local_458[unk_0xD378D2332270959A() /*4*/].f_3)
		{
			case 0:
				if (!Global_2793044.f_1752)
				{
				}
				if (BitTest(Local_458[unk_0xD378D2332270959A() /*4*/].f_2, 3))
				{
					unk_0x061B1200C95204CB(&(Local_458[unk_0xD378D2332270959A() /*4*/].f_2), 3);
				}
				if (BitTest(uLocal_587, 21))
				{
					unk_0x061B1200C95204CB(&uLocal_587, 21);
				}
				if (BitTest(Local_458[unk_0xD378D2332270959A() /*4*/].f_2, 1))
				{
					unk_0x061B1200C95204CB(&(Local_458[unk_0xD378D2332270959A() /*4*/].f_2), true);
				}
				if (((!func_138(unk_0x93E99A2DBCBA9CFA(), 1, 0) && !func_112()) && !func_267(unk_0x93E99A2DBCBA9CFA(), 1, 0)) || func_71(unk_0x93E99A2DBCBA9CFA(), 6))
				{
					if (BitTest(uLocal_587, 3))
					{
						unk_0x061B1200C95204CB(&uLocal_587, 3);
					}
					if (BitTest(uLocal_587, 19))
					{
						unk_0x061B1200C95204CB(&uLocal_587, 19);
					}
					if (BitTest(Local_458[unk_0xD378D2332270959A() /*4*/].f_2, 3))
					{
						unk_0x061B1200C95204CB(&(Local_458[unk_0xD378D2332270959A() /*4*/].f_2), 3);
					}
					if (iLocal_317 != -1)
					{
						iLocal_317 = -1;
					}
					if (BitTest(Local_382.f_23, 0))
					{
						if (!BitTest(uLocal_587, 16))
						{
							unk_0xECDAB41968FF21A8(&uLocal_587, 16);
							func_266(6, 1);
							unk_0xECDAB41968FF21A8(&uLocal_587, 7);
							Global_2793044.f_1751 = 1;
							Global_2793044.f_1752 = 0;
						}
						if (unk_0xD46C7FE1113E7469(1))
						{
							if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
							{
								if (func_260())
								{
									if (Local_382.f_67 != 0)
									{
										unk_0x9C56520AE72AFDBF(Local_382.f_67, 1);
									}
									Local_458[unk_0xD378D2332270959A() /*4*/].f_3 = 1;
									Global_1935147 = unk_0x53B496178AE44636(unk_0x972B1BFB16AD20B5(Local_382.f_22));
									if (unk_0x6CEF99E452573979(unk_0x504B9BB48D41C264(unk_0x972B1BFB16AD20B5(Local_382.f_22))))
									{
										unk_0xEA4639F4444B7003(Global_1935147, 348);
										func_166("IMPEX_HIPB_INT", -1);
									}
									else
									{
										unk_0xEA4639F4444B7003(Global_1935147, 225);
										func_166("IMPEX_HIPR_INT", -1);
									}
									unk_0x1886753DA39F38F8(Global_1935147, 2);
									unk_0x4049FDC177C92D4B(Global_1935147, "IMPEX_HIPR_BLP");
									func_266(6, 1);
									unk_0xECDAB41968FF21A8(&uLocal_587, 7);
									Global_2793044.f_1751 = 1;
									if (func_118())
									{
										unk_0x3C1C0549FDA2CF24(Global_1935147, 0);
									}
								}
							}
						}
					}
				}
				else if (!Global_2793044.f_1752)
				{
					Global_2793044.f_1752 = 1;
				}
				break;
			
			case 1:
				if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
				{
					if (unk_0xFBD273FDBCF0C5BD(unk_0x972B1BFB16AD20B5(Local_382.f_22), 0))
					{
						if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
						{
							if (unk_0x44A6C9475C859B45(unk_0xC1A5EC5C986B98AD(), unk_0x972B1BFB16AD20B5(Local_382.f_22)))
							{
								func_259(1);
								if (func_258())
								{
									func_253(2, 0, 1);
								}
								if (unk_0xCE4AAA035282336C(Global_1935147))
								{
									unk_0x45533C09A6C9B409(&Global_1935147);
								}
							}
							else
							{
								func_259(0);
								if (!func_252(unk_0x972B1BFB16AD20B5(Local_382.f_22), 0))
								{
									if (!unk_0xCE4AAA035282336C(Global_1935147))
									{
										if (!iLocal_124)
										{
											func_251();
										}
									}
								}
							}
						}
						if (!BitTest(uLocal_587, 19))
						{
							if (func_260())
							{
								if (func_249())
								{
									if (!unk_0x44A6C9475C859B45(unk_0xC1A5EC5C986B98AD(), unk_0x972B1BFB16AD20B5(Local_382.f_22)))
									{
										if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(unk_0x972B1BFB16AD20B5(Local_382.f_22), 1)) < 2500f)
										{
											if (func_118())
											{
												func_166("FM_IMP_JAC", -1);
											}
											unk_0xECDAB41968FF21A8(&uLocal_587, 19);
										}
									}
								}
							}
						}
						if (func_248())
						{
						}
						func_246();
					}
					else
					{
						if (unk_0xCE4AAA035282336C(Global_1935147))
						{
							unk_0x45533C09A6C9B409(&Global_1935147);
						}
						func_266(6, 0);
						unk_0x061B1200C95204CB(&uLocal_587, 7);
						Local_458[unk_0xD378D2332270959A() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_382.f_67 != 0)
					{
						unk_0x9C56520AE72AFDBF(Local_382.f_67, 0);
					}
					if (unk_0xCE4AAA035282336C(Global_1935147))
					{
						unk_0x45533C09A6C9B409(&Global_1935147);
					}
					func_266(6, 0);
					unk_0x061B1200C95204CB(&uLocal_587, 7);
					Local_458[unk_0xD378D2332270959A() /*4*/].f_3 = 3;
				}
				if (BitTest(uLocal_587, 3))
				{
					func_266(6, 0);
					unk_0x061B1200C95204CB(&uLocal_587, 7);
					if (unk_0xCE4AAA035282336C(Global_1935147))
					{
						unk_0x45533C09A6C9B409(&Global_1935147);
					}
					Local_458[unk_0xD378D2332270959A() /*4*/].f_3 = 3;
				}
				if (Local_382.f_26 == 3)
				{
					if (Local_458[unk_0xD378D2332270959A() /*4*/].f_3 == 1)
					{
						if (Local_382.f_67 != 0)
						{
							unk_0x9C56520AE72AFDBF(Local_382.f_67, 0);
						}
						if (unk_0xCE4AAA035282336C(Global_1935147))
						{
							unk_0x45533C09A6C9B409(&Global_1935147);
						}
						if (BitTest(uLocal_587, 16))
						{
							unk_0x061B1200C95204CB(&uLocal_587, 16);
						}
						func_266(6, 0);
						unk_0x061B1200C95204CB(&uLocal_587, 7);
						Local_458[unk_0xD378D2332270959A() /*4*/].f_3 = 3;
					}
				}
				break;
			
			case 3:
				func_259(0);
				break;
		}
		if (func_243())
		{
			if (func_242("IMPEX_HIPR_INT"))
			{
				unk_0xCD3C8E1022864F65(1);
			}
			if (unk_0xCE4AAA035282336C(Global_1935147))
			{
				unk_0x45533C09A6C9B409(&Global_1935147);
			}
			if (Local_382.f_67 != 0)
			{
				unk_0x9C56520AE72AFDBF(Local_382.f_67, 0);
			}
			Local_458[unk_0xD378D2332270959A() /*4*/].f_3 = 3;
			func_266(6, 0);
			unk_0x061B1200C95204CB(&uLocal_587, 7);
			if (BitTest(uLocal_587, 16))
			{
				unk_0x061B1200C95204CB(&uLocal_587, 16);
			}
			func_259(0);
		}
		func_192();
		if (Local_458[unk_0xD378D2332270959A() /*4*/].f_3 > 0 && Local_458[unk_0xD378D2332270959A() /*4*/].f_3 < 3)
		{
			func_189();
		}
	}
	else
	{
		if (Local_458[unk_0xD378D2332270959A() /*4*/].f_3 != 0)
		{
			if (Local_382.f_67 != 0)
			{
				unk_0x9C56520AE72AFDBF(Local_382.f_67, 0);
			}
			Local_458[unk_0xD378D2332270959A() /*4*/].f_3 = 0;
		}
		if (BitTest(uLocal_587, 21))
		{
			unk_0x061B1200C95204CB(&uLocal_587, 21);
		}
		if (Global_2793044.f_1751)
		{
			if (!func_519(&uLocal_328))
			{
				func_518(&uLocal_328, 0, 0);
			}
			else if (func_517(&uLocal_328, 5000, 0))
			{
				func_46(&uLocal_328);
				Global_2793044.f_1751 = 0;
			}
		}
		if (BitTest(uLocal_587, 16))
		{
			if (Local_382.f_34 == 0)
			{
				unk_0x061B1200C95204CB(&uLocal_587, 16);
			}
		}
	}
	func_178();
}

void func_178()
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	var uVar7;
	bool bVar8;
	
	if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
	{
		if (func_4(Local_382.f_22))
		{
			if (!func_249())
			{
				if (!func_519(&uLocal_593))
				{
					func_518(&uLocal_593, 0, 0);
				}
				if (func_517(&uLocal_593, 1000, 0))
				{
					if (unk_0xFE2AB315FD8C7A6F(Local_382.f_22))
					{
						Var3 = { unk_0x30BE8A934C020461(unk_0x972B1BFB16AD20B5(Local_382.f_22), 1) };
						if (func_186(Var3, func_187(39), func_149(39, 0)))
						{
							if (func_181(39, 0, &Var0, &uVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_186(Var3, func_187(40), func_149(40, 0)))
						{
							if (func_181(40, 0, &Var0, &uVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_186(Var3, func_187(41), func_149(41, 0)))
						{
							if (func_181(41, 0, &Var0, &uVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_186(Var3, func_187(42), func_149(42, 0)))
						{
							if (func_181(42, 0, &Var0, &uVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_186(Var3, func_187(43), func_149(43, 0)))
						{
							if (func_181(43, 0, &Var0, &uVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_186(Var3, func_187(44), func_149(44, 0)))
						{
							if (func_181(44, 0, &Var0, &uVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
					}
					func_46(&uLocal_593);
				}
				if (bVar8)
				{
					if (unk_0xFE2AB315FD8C7A6F(Local_382.f_22))
					{
						if (func_179(unk_0x972B1BFB16AD20B5(Local_382.f_22), 1, 0, 0, 0, 0, 1, 0, 1))
						{
							unk_0x2EDDA32F6EF3C8B7(unk_0x972B1BFB16AD20B5(Local_382.f_22), Var0, 0, 0, 1);
							unk_0x692C3FDAD7DB53CC(unk_0x972B1BFB16AD20B5(Local_382.f_22), uVar6);
							unk_0x9102C55C2B04C540(unk_0x972B1BFB16AD20B5(Local_382.f_22), 1, 1);
							unk_0x2718E9CC165A99F6(unk_0x972B1BFB16AD20B5(Local_382.f_22), false);
							unk_0x439314AD4FC79186(unk_0x972B1BFB16AD20B5(Local_382.f_22), 1);
						}
					}
				}
			}
		}
	}
}

int func_179(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x2E240694D642679A(iParam0) + 1;
	if (iParam4 || !unk_0x055111B11E6624FD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_180(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x7DE17ACDD8BA2642(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xC1A5EC5C986B98AD())
				{
				}
				else if (bParam2)
				{
					if (unk_0x60A06DE259634304(iVar2))
					{
						iVar3 = unk_0xB850F932D03EF34D(iVar2);
						if (((!unk_0x66599E73DBA5A850(iVar2) && iVar3 != func_121()) && func_14(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x83C5A442AAD15BAF(unk_0xB850F932D03EF34D(iVar2)) == 0)
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
				else if (!unk_0x66599E73DBA5A850(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_180(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x9CFCDD9C62B56708(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xA66E176E5772E965(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x7DE17ACDD8BA2642(iVar0) && !unk_0x055111B11E6624FD(iParam0, 0))
		{
			iVar0 = unk_0x5E774735770A30F3(iParam0, iParam1);
			if (!unk_0x055111B11E6624FD(iVar0, 0))
			{
				if (unk_0xF5F493B789EA063E(iVar0, joaat("script_task_leave_vehicle")) == 1 || unk_0xF5F493B789EA063E(iVar0, joaat("script_task_leave_any_vehicle")) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(iParam0, 0), unk_0x30BE8A934C020461(iVar0, 0)) < 10f)
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

bool func_181(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = 0f;
	*uParam4 = 1f;
	if (iParam0 == 39)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1136.491f, -1991.127f, 12.1674f };
			*uParam3 = 312.0856f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1133.253f, -1993.854f, 12.1687f };
			*uParam3 = 314.389f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1130.806f, -1997.875f, 12.1713f };
			*uParam3 = 317.9671f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1127.329f, -2001.548f, 12.1741f };
			*uParam3 = 315.1484f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1123.286f, -2006.263f, 12.1791f };
			*uParam3 = 236.5043f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1115.469f, -2012.307f, 12.1802f };
			*uParam3 = 264.1943f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1110.562f, -2015.446f, 12.1999f };
			*uParam3 = 302.6618f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1121.69f, -2000.23f, 12.1718f };
			*uParam3 = 238.2144f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1111.589f, -2006.454f, 12.1692f };
			*uParam3 = 238.336f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1138.648f, -1979.826f, 12.1634f };
			*uParam3 = 278.7886f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1124.321f, -1978.124f, 12.1856f };
			*uParam3 = 276.276f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1110.264f, -1975.971f, 12.1588f };
			*uParam3 = 279.4681f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { -1128.293f, -1984.828f, 12.1659f };
			*uParam3 = 295.1603f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { -1126.066f, -1991.346f, 12.1683f };
			*uParam3 = 227.6551f;
			*uParam4 = 0.7f;
		}
	}
	else if (iParam0 == 40)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 717.5009f, -1082.013f, 21.2916f };
			*uParam3 = 3.6761f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 716.7202f, -1069.264f, 21.2546f };
			*uParam3 = 3.5291f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 717.009f, -1058.204f, 21.0152f };
			*uParam3 = 355.8705f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 712.7385f, -1083.534f, 21.3647f };
			*uParam3 = 359.9393f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 712.7766f, -1072.967f, 21.307f };
			*uParam3 = 359.9453f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 712.8783f, -1061.094f, 21.1883f };
			*uParam3 = 357.2739f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 708.5093f, -1081.285f, 21.3978f };
			*uParam3 = 358.5361f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 708.9708f, -1068.358f, 21.3519f };
			*uParam3 = 357.9787f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 710.7449f, -1053.611f, 21.2011f };
			*uParam3 = 339.2883f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 704.6691f, -1079.536f, 21.3804f };
			*uParam3 = 359.4009f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 704.4818f, -1065.911f, 21.4447f };
			*uParam3 = 0.9557f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 716.4031f, -1044.615f, 20.9157f };
			*uParam3 = 280.6607f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 725.7982f, -1044.226f, 21.046f };
			*uParam3 = 271.6107f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 727.0708f, -1047.951f, 21.2648f };
			*uParam3 = 270.6534f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 41)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -365.9221f, -125.5196f, 37.6785f };
			*uParam3 = 65.4762f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -362.3411f, -122.0465f, 37.6788f };
			*uParam3 = 68.8025f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -363.4988f, -117.1944f, 37.6792f };
			*uParam3 = 78.9594f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -372.3338f, -115.238f, 37.6796f };
			*uParam3 = 74.7182f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -371.1733f, -121.0303f, 37.6797f };
			*uParam3 = 62.123f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -369.2153f, -127.0247f, 37.6784f };
			*uParam3 = 61.9032f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -371.8094f, -130.2364f, 37.6798f };
			*uParam3 = 52.11f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -378.4785f, -130.0621f, 37.6796f };
			*uParam3 = 36.469f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -387.4156f, -118.9469f, 37.6829f };
			*uParam3 = 38.3679f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -382.709f, -112.8489f, 37.6985f };
			*uParam3 = 65.0749f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -397.1963f, -107.1517f, 37.6834f };
			*uParam3 = 33.315f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -404.3896f, -96.5394f, 39.0491f };
			*uParam3 = 34.1156f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 42)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 120.3574f, 6599.573f, 31.0156f };
			*uParam3 = 269.5703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 123.4549f, 6594.44f, 30.9958f };
			*uParam3 = 269.5584f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 126.712f, 6589.798f, 30.9386f };
			*uParam3 = 269.5731f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 133.9324f, 6585.555f, 30.9551f };
			*uParam3 = 269.4128f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 136.8265f, 6580.12f, 31.013f };
			*uParam3 = 269.4126f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 141.8716f, 6575.214f, 30.9522f };
			*uParam3 = 270.5616f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 140.8046f, 6606.312f, 30.8449f };
			*uParam3 = 178.8423f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 145.8316f, 6601.099f, 30.85f };
			*uParam3 = 180.9941f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 150.5503f, 6596.533f, 30.8449f };
			*uParam3 = 177.9041f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 155.6983f, 6591.292f, 30.8449f };
			*uParam3 = 177.9025f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 159.1213f, 6580.544f, 30.841f };
			*uParam3 = 208.1021f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 153.3835f, 6581.357f, 30.843f };
			*uParam3 = 208.9007f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 160.6086f, 6567.498f, 30.8061f };
			*uParam3 = 210.3887f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 166.7977f, 6567.135f, 30.7544f };
			*uParam3 = 210.3833f;
			*uParam4 = 0.2f;
		}
	}
	else if (iParam0 == 43)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 1182.498f, 2653.582f, 36.8099f };
			*uParam3 = 304.7889f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 1190.678f, 2661.143f, 36.8165f };
			*uParam3 = 321.483f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 1196.733f, 2669.66f, 36.7883f };
			*uParam3 = 345.6812f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 1200.466f, 2666.494f, 36.8099f };
			*uParam3 = 347.5349f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 1205.586f, 2667.136f, 36.8099f };
			*uParam3 = 352.7466f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 1210.698f, 2666.592f, 36.8099f };
			*uParam3 = 7.6557f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 1193.573f, 2688.714f, 36.7457f };
			*uParam3 = 87.5179f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 1181.127f, 2689.26f, 36.8532f };
			*uParam3 = 87.4959f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 1162.459f, 2689.204f, 37.1039f };
			*uParam3 = 87.5173f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 1162.663f, 2677.458f, 37.078f };
			*uParam3 = 268.6483f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 1171.858f, 2677.125f, 36.995f };
			*uParam3 = 267.8824f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 1224.358f, 2677.226f, 36.6702f };
			*uParam3 = 272.1325f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 44)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -199.5331f, -1301.69f, 30.296f };
			*uParam3 = 263.703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -205.9477f, -1303.868f, 30.2575f };
			*uParam3 = 1.5267f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -200.7847f, -1298.636f, 30.296f };
			*uParam3 = 89.6847f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -193.9668f, -1305.65f, 30.3643f };
			*uParam3 = 86.5508f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -213.389f, -1305.822f, 30.3533f };
			*uParam3 = 88.0277f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -210.4487f, -1301.42f, 30.296f };
			*uParam3 = 50.2894f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -193.1976f, -1302.892f, 30.296f };
			*uParam3 = 310.5602f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -198.882f, -1304.772f, 30.325f };
			*uParam3 = 268.713f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -230.2501f, -1305.596f, 30.3533f };
			*uParam3 = 89.1508f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -186.4736f, -1305.746f, 30.3495f };
			*uParam3 = 270.2632f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -236.5289f, -1302.071f, 30.296f };
			*uParam3 = 270.2677f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -181.8344f, -1299.311f, 30.296f };
			*uParam3 = 88.0286f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_185(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_184(iParam0, iParam5))
	{
		switch (iParam5)
		{
			case 6:
				if (iParam1 == 0)
				{
					*uParam2 = { -1574.907f, -569.6819f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1573.983f, -570.0646f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1575.289f, -570.6058f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1575.83f, -569.2993f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1574.524f, -568.7581f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1574.365f, -570.9885f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1576.213f, -570.2231f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1575.448f, -568.3754f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1573.6f, -569.1407f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1573.059f, -570.4473f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1575.672f, -571.5297f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1576.754f, -568.9166f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 7:
				if (iParam1 == 0)
				{
					*uParam2 = { -1387.561f, -481.637f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1386.637f, -482.0197f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1387.944f, -482.5609f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1388.485f, -481.2543f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1387.178f, -480.7131f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1387.02f, -482.9435f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1388.868f, -482.1782f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1388.102f, -480.3304f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1386.255f, -481.0958f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1385.713f, -482.4024f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1388.327f, -483.4847f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1389.409f, -480.8716f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 8:
				if (iParam1 == 0)
				{
					*uParam2 = { -142.5312f, -590.6586f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -141.6073f, -591.0413f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -142.9139f, -591.5825f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -143.4551f, -590.2759f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -142.1485f, -589.7347f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -141.99f, -591.9651f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -143.8378f, -591.1998f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -143.0724f, -589.352f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -140.6835f, -591.424f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -143.2966f, -592.5063f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 9:
				if (iParam1 == 0)
				{
					*uParam2 = { -74.8035f, -814.8599f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -73.8796f, -815.2426f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -75.1862f, -815.7838f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -75.7274f, -814.4772f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -74.4208f, -813.936f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -74.2623f, -816.1664f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -76.11f, -815.4011f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -75.3447f, -813.5533f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -73.4969f, -814.3187f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -72.9557f, -815.6252f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -75.5689f, -816.7076f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -76.6513f, -814.0945f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				break;
		}
	}
	else if (func_183(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_182(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 2799.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 2801.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 2799.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 2801.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
	}
	return !func_31(*uParam2, 0f, 0f, 0f, 0);
}

int func_182(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 17)
		{
			return 1;
		}
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_184(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		switch (iParam1)
		{
			case 6:
			case 7:
			case 8:
			case 9:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_185(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		switch (iParam1)
		{
			case 1:
			case 2:
			case 3:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_186(struct<3> Param0, var uParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5B1AFB012FBCA44D(Param0))
	{
		iVar0 = unk_0xAF0CB15312D8B8E3(Param4, uParam3);
		if (!unk_0x4D3D95146FD3490D(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x534ACC29D082254F(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_188(Global_102825);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
		
		case 53:
			return "h4_int_sub_h4";
			break;
		
		case 54:
			return "tr_tuner_car_meet";
			break;
		
		case 55:
			return "tr_tuner_car_meet";
			break;
		
		case 56:
			return "sf_dlc_office_sec";
			break;
		
		case 57:
			return "sf_dlc_studio_sec";
			break;
		
		case 58:
			return "";
			break;
		
		case 59:
			return "xm3_dlc_int_03_xm3";
			break;
	}
	return "";
}

char* func_188(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_162() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		case 18:
			return "tr_tuner_car_meet";
			break;
		
		case 19:
			return "tr_tuner_mod_garage";
			break;
		
		case 20:
			return "sf_dlc_garage_sec";
			break;
		
		case 21:
			return "xm3_dlc_int_03_xm3";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_189()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_318 > -1)
	{
		if (iLocal_318 != unk_0xD378D2332270959A())
		{
			if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iLocal_318)))
			{
				iVar0 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iLocal_318));
				bVar1 = true;
				if (unk_0x44C1C56CBB49373F(iVar0, unk_0x93E99A2DBCBA9CFA()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
	{
		if (func_4(Local_382.f_22))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), unk_0x972B1BFB16AD20B5(Local_382.f_22), 0))
				{
					if (Local_458[unk_0xD378D2332270959A() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_190(unk_0x972B1BFB16AD20B5(Local_382.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_190(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x2D32CB870722E022(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
	if (iParam1 == 0)
	{
	}
	unk_0x9137AB1FD8C79729(iParam0);
	if (func_14(unk_0x93E99A2DBCBA9CFA(), 1, 1))
	{
		if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		{
			if (func_191(iParam0) == 0)
			{
				if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iParam0, 0))
				{
					if (unk_0x0F68F5841D33217C(iParam0))
					{
						unk_0x660FB2C01D4FBF28(iParam0, "MP_Arrow");
						unk_0x5BA9C8D2DF0C985D(iParam0, uVar0, uVar1, uVar2, 190);
						unk_0x4E04AB0741C97AE6(iParam0, 1);
					}
				}
			}
		}
	}
}

int func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x504B9BB48D41C264(iParam0);
	if (unk_0x2D92D1084D213DC4(iVar0) == 0 && unk_0xAF4434A9F7368F35(iVar0) == 0)
	{
		return 0;
	}
	if (unk_0xD565A4F8A4D47FCB(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_192()
{
	int iVar0;
	
	if (BitTest(uLocal_587, 5))
	{
		if (iLocal_317 != iLocal_318)
		{
			if (iLocal_318 > -1)
			{
				if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iLocal_318)))
				{
					iVar0 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iLocal_318));
					if (iVar0 != unk_0x93E99A2DBCBA9CFA())
					{
						if (!func_267(unk_0x93E99A2DBCBA9CFA(), 1, 0))
						{
							func_193("IMPEX_TICK_DHPV", iVar0, 0, 0, 0, 1, 0);
						}
					}
					if (unk_0xE85391CF212DE622())
					{
						if (!BitTest(Local_382.f_23, 8))
						{
							unk_0xECDAB41968FF21A8(&(Local_382.f_23), 8);
						}
					}
				}
			}
			iLocal_317 = iLocal_318;
		}
	}
}

int func_193(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
				unk_0x35451336B8B420D6(func_240(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x35451336B8B420D6(func_202(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x35451336B8B420D6(func_202(iParam1, -2, 1, 0, 0));
		}
		unk_0x76B34CBB6F5FA1BB(func_200(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xEAFC6135DF75DE92(0, 1);
		}
		else
		{
			Global_2764201 = { func_199(iParam1) };
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
						Var2 = { func_198(&Var2) };
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
		func_194(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_194(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_197() || !unk_0x1758F8A8511510AB()) || !func_24(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		return;
	}
	iVar0 = func_195(iParam2);
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

int func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944061 - 1))
	{
		if (iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1)
		{
			func_196(iVar0);
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

void func_196(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944061.f_5[iVar0 /*53*/] = { Global_1944061.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_197()
{
	return unk_0x7681F180D7938DA8(-1762644250);
}

struct<16> func_198(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_199(int iParam0)
{
	struct<13> Var0;
	
	unk_0x23BD70608BA4F8D9(iParam0, &Var0, 13);
	return Var0;
}

var func_200(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_201(&cVar0);
}

var func_201(char[4] cParam0)
{
	return cParam0;
}

int func_202(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_238(iParam0) && !bParam4)
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
	if (((func_238(unk_0x93E99A2DBCBA9CFA()) || (func_237() && func_236())) && !BitTest(Global_2793044.f_4690, 31)) && !bParam4)
	{
		iVar1 = func_235();
		if (unk_0x7DE17ACDD8BA2642(iVar1))
		{
			if (unk_0x60A06DE259634304(iVar1))
			{
				if (unk_0xB850F932D03EF34D(iVar1) != -1)
				{
					if (func_14(unk_0xB850F932D03EF34D(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1758F8A8511510AB()) && iParam1 < 4)
						{
							if (Global_4718592.f_108449[iParam1] != -1)
							{
								return func_240(iParam1, iParam0, 0);
							}
							else
							{
								return func_217(iParam0, unk_0xB850F932D03EF34D(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_217(iParam0, unk_0xB850F932D03EF34D(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1758F8A8511510AB()) && iParam1 < 4)
			{
				if (Global_4718592.f_108449[iParam1] != -1)
				{
					return func_240(iParam1, iParam0, 0);
				}
				else
				{
					return func_203(0, -1, 0);
				}
			}
			else
			{
				return func_203(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1758F8A8511510AB()) && iParam1 < 4)
	{
		if (Global_4718592.f_108449[iParam1] != -1)
		{
			return func_240(iParam1, iParam0, 0);
		}
		else
		{
			return func_217(iParam0, unk_0x93E99A2DBCBA9CFA(), iParam1, bParam2, bParam3);
		}
	}
	return func_217(iParam0, unk_0x93E99A2DBCBA9CFA(), iParam1, bParam2, bParam3);
}

int func_203(bool bParam0, int iParam1, bool bParam2)
{
	return func_204(unk_0x93E99A2DBCBA9CFA(), bParam0, iParam1, bParam2);
}

int func_204(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xE6DEE82DB0922DF0(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x4292F1DE8BA2D22E(iParam0);
	if ((func_216() || (func_215() && func_213())) && Global_1665699.f_1)
	{
		if (bParam1)
		{
			return func_212(iParam2, iVar0);
		}
		else
		{
			return func_212(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_209(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_208(1);
				}
				else
				{
					return func_208(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_205(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_205(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_208(1);
	}
	return func_208(0);
}

int func_205(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_207(iParam0, iParam1, iParam3);
	if (func_206(Global_4718592.f_113724, 1))
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

int func_206(int iParam0, bool bParam1)
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

int func_207(int iParam0, int iParam1, int iParam2)
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
			if (!func_209(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_208(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_209(int iParam0, int iParam1, int iParam2, int iParam3)
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
							if (!func_210(iParam0, bVar0, iParam1, bVar1) || !func_210(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_210(iParam0, bVar0, iParam1, bVar1) || !func_210(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_210(iParam0, bVar0, iParam1, bVar1) || !func_210(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_210(iParam0, bVar0, iParam1, bVar1) || !func_210(iParam1, bVar1, iParam0, bVar0))
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

int func_210(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
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
		if (((!func_14(iVar1, 1, 1) || func_24(iVar1, 0)) || BitTest(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_211(iVar1))
		{
		}
		else if (unk_0x4292F1DE8BA2D22E(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = unk_0xF2CFBB1105511E1A(iVar1);
			if (unk_0x66599E73DBA5A850(iVar2))
			{
			}
			else
			{
				iVar3 = unk_0x504B9BB48D41C264(iVar2);
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

var func_211(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_212(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_207(iParam1, iParam0, 4);
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

int func_213()
{
	if (func_214())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_170488, 4);
}

bool func_214()
{
	return BitTest(Global_4718592.f_160050, 12);
}

bool func_215()
{
	if (unk_0x1758F8A8511510AB())
	{
		return BitTest(Global_4718592.f_170488, 0);
	}
	return ((BitTest(Global_4718592.f_170488, 0) || Global_1926644) && unk_0x24B651D85CCE5EB4(joaat("fm_deathmatch_creator")) > 0);
}

int func_216()
{
	if (func_214() && unk_0x1758F8A8511510AB())
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_226())
			{
				iVar3 = func_222(iParam0);
				if (!iVar3 == -1)
				{
					return func_220(iVar3);
				}
			}
			if ((func_219(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_209(unk_0x4292F1DE8BA2D22E(iParam1), unk_0x4292F1DE8BA2D22E(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_208(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_218(1);
			}
			else
			{
				return func_204(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836597 || Global_1836587) || Global_1853910[iParam0 /*862*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836597 == 1 && Global_1836607 == 0))
			{
				return func_208(1);
			}
			else
			{
				return func_204(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836591 && Global_1836078.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_222(iParam0);
	if (!iVar4 == -1)
	{
		return func_220(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_218(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_219(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_220(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_221(iParam0);
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

var func_221(int iParam0)
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_222(int iParam0)
{
	if (!iParam0 == func_121())
	{
		if (func_224(iParam0, 1))
		{
			return Global_2648605.f_818.f_11[func_223(iParam0)];
		}
	}
	return -1;
}

int func_223(int iParam0)
{
	if (iParam0 != func_121())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_121();
}

bool func_224(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_225(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_121();
}

int func_225(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_121())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_226()
{
	if ((((((func_234() || func_233()) || func_30()) || func_232()) || func_231()) || func_229()) || func_227())
	{
		return 1;
	}
	if (unk_0x1758F8A8511510AB() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_227()
{
	return func_228(Global_4718592.f_113724);
}

int func_228(int iParam0)
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

int func_229()
{
	return func_230(Global_4718592.f_113724);
}

int func_230(int iParam0)
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

var func_231()
{
	return Global_2683862.f_24;
}

var func_232()
{
	return Global_2683862.f_21;
}

var func_233()
{
	return Global_2683862.f_18;
}

var func_234()
{
	return Global_2683862.f_17;
}

var func_235()
{
	return Global_2621446.f_2;
}

var func_236()
{
	return BitTest(Global_2621446, 4);
}

var func_237()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

int func_238(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_239())
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

bool func_239()
{
	return BitTest(Global_2621446, 3);
}

int func_240(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058070.f_14[iParam0];
	if (func_226())
	{
		iVar2 = func_222(iParam1);
		if (!iVar2 == -1)
		{
			return func_220(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_121())
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
			iVar0 = func_204(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_241(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_209(iParam0, unk_0x4292F1DE8BA2D22E(iParam1), 0, -1))
		{
			iVar0 = func_218(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_241(int iParam0)
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

bool func_242(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

int func_243()
{
	if ((Local_458[unk_0xD378D2332270959A() /*4*/].f_3 > 0 && Local_458[unk_0xD378D2332270959A() /*4*/].f_3 < 3) || (Local_458[unk_0xD378D2332270959A() /*4*/].f_3 == 0 && func_71(unk_0x93E99A2DBCBA9CFA(), 6)))
	{
		if (func_138(unk_0x93E99A2DBCBA9CFA(), 1, 0) || func_112())
		{
			if ((!func_244(unk_0x93E99A2DBCBA9CFA(), 5) && !func_244(unk_0x93E99A2DBCBA9CFA(), 32)) && !func_244(unk_0x93E99A2DBCBA9CFA(), 148))
			{
				return 1;
			}
			else if (!iLocal_124)
			{
				if (unk_0xCE4AAA035282336C(Global_1935147))
				{
					unk_0x45533C09A6C9B409(&Global_1935147);
				}
				iLocal_124 = 1;
			}
		}
		else if (iLocal_124)
		{
			func_251();
			iLocal_124 = 0;
		}
		if (Local_382.f_26 == 3)
		{
			if (Local_458[unk_0xD378D2332270959A() /*4*/].f_3 == 0 && func_71(unk_0x93E99A2DBCBA9CFA(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_83() != 0)
	{
		return 0;
	}
	if (!func_245(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853910[iVar0 /*862*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_245(int iParam0)
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

void func_246()
{
	if (unk_0xCE4AAA035282336C(Global_1935147))
	{
		if (func_118() || func_247())
		{
			unk_0x3C1C0549FDA2CF24(Global_1935147, 0);
		}
		else
		{
			unk_0x3C1C0549FDA2CF24(Global_1935147, 4);
		}
		if (!iLocal_113)
		{
			if (func_267(unk_0x93E99A2DBCBA9CFA(), 1, 0))
			{
				unk_0xDFA9D2A64046A409(Global_1935147, 1);
				iLocal_113 = 1;
			}
		}
		else if (!func_267(unk_0x93E99A2DBCBA9CFA(), 1, 0))
		{
			unk_0xDFA9D2A64046A409(Global_1935147, 0);
			iLocal_113 = 0;
		}
	}
}

var func_247()
{
	return Global_2646729.f_1869;
}

int func_248()
{
	if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
	{
		if (func_4(Local_382.f_22))
		{
			if (unk_0x248929CB6622481D(unk_0x972B1BFB16AD20B5(Local_382.f_22), 0, 7000) || unk_0x248929CB6622481D(unk_0x972B1BFB16AD20B5(Local_382.f_22), 1, 40000))
			{
				if (unk_0xDD2D9A241E18E942(Local_382.f_22))
				{
					if (unk_0xFE2AB315FD8C7A6F(Local_382.f_22))
					{
						unk_0xA598BD64B909AA08(unk_0x972B1BFB16AD20B5(Local_382.f_22), -2000f);
						unk_0xDC8D24D42F045000(unk_0x972B1BFB16AD20B5(Local_382.f_22), 0f);
					}
					return 1;
				}
				else if (unk_0xE85391CF212DE622())
				{
					if (func_10(Local_382.f_22))
					{
						unk_0xA598BD64B909AA08(unk_0x972B1BFB16AD20B5(Local_382.f_22), -2000f);
						unk_0xDC8D24D42F045000(unk_0x972B1BFB16AD20B5(Local_382.f_22), 0f);
						return 1;
					}
				}
				else
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

int func_249()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_318 == -1 && BitTest(uLocal_587, 5))
	{
		return 0;
	}
	if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
	{
		if (func_4(Local_382.f_22))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x44A6C9475C859B45(unk_0xC1A5EC5C986B98AD(), unk_0x972B1BFB16AD20B5(Local_382.f_22)))
				{
					if (func_250(unk_0xC1A5EC5C986B98AD(), unk_0x972B1BFB16AD20B5(Local_382.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_318 >= 0)
			{
				if (iLocal_318 != unk_0xD378D2332270959A())
				{
					if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iLocal_318)))
					{
						iVar0 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iLocal_318));
						if (func_14(iVar0, 1, 1))
						{
							iVar1 = unk_0xF2CFBB1105511E1A(iVar0);
							if (unk_0x44A6C9475C859B45(iVar1, unk_0x972B1BFB16AD20B5(Local_382.f_22)))
							{
								if (func_250(iVar1, unk_0x972B1BFB16AD20B5(Local_382.f_22), -1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_250(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x055111B11E6624FD(iParam0, 0) && !unk_0x055111B11E6624FD(iParam1, 0))
	{
		if (unk_0x44A6C9475C859B45(iParam0, iParam1))
		{
			if (unk_0xA66E176E5772E965(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_251()
{
	Global_1935147 = unk_0x53B496178AE44636(unk_0x972B1BFB16AD20B5(Local_382.f_22));
	if (unk_0x6CEF99E452573979(unk_0x504B9BB48D41C264(unk_0x972B1BFB16AD20B5(Local_382.f_22))))
	{
		unk_0xEA4639F4444B7003(Global_1935147, 348);
	}
	else
	{
		unk_0xEA4639F4444B7003(Global_1935147, 225);
	}
	unk_0x1886753DA39F38F8(Global_1935147, 2);
	unk_0x4049FDC177C92D4B(Global_1935147, "IMPEX_HIPR_BLP");
	if (func_118())
	{
		unk_0x3C1C0549FDA2CF24(Global_1935147, 0);
	}
}

int func_252(int iParam0, int iParam1)
{
	if (func_167(iParam0, 1215605247, &uLocal_343, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_253(int iParam0, int iParam1, bool bParam2)
{
	if (func_258())
	{
		if (iParam1 == 1)
		{
			if (Global_2793044.f_4492 == -1)
			{
				Global_2793044.f_4492 = Global_262145.f_27184;
			}
			func_257(&(Global_2793044.f_4490), 0, 0);
			if (bParam2)
			{
				if (Global_2793044.f_4495 == -1)
				{
					Global_2793044.f_4495 = Global_262145.f_27185;
				}
				func_257(&(Global_2793044.f_4493), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_8 = 0;
				func_256(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_8 = 0;
			func_256(1);
		}
		if ((!unk_0x1758F8A8511510AB() && !func_255()) && !func_254(unk_0x93E99A2DBCBA9CFA()))
		{
			Global_1057408 = 0;
		}
		unk_0xF491DE134E08172A(0, -1, -1, iParam0);
	}
}

int func_254(int iParam0)
{
	if (func_138(iParam0, 1, 0))
	{
		if (Global_1853910[iParam0 /*862*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_255()
{
	return Global_2683862.f_841;
}

void func_256(bool bParam0)
{
	if (unk_0xA26A9A07F761D8F8())
	{
		if (!func_258())
		{
			if (func_14(unk_0x93E99A2DBCBA9CFA(), 1, 0))
			{
				unk_0x841E34BB01496B96(unk_0xC1A5EC5C986B98AD(), 1);
				unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 342, 0);
				unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 122, 0);
			}
			unk_0x77846DF4702EC754(unk_0x93E99A2DBCBA9CFA(), 1f);
			unk_0x86F87160DEF1E357(0);
			unk_0x4235C9F9C67D9842(1);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					unk_0xA765DBC99EB000B8(0, 0);
				}
			}
		}
		else
		{
			if (func_14(unk_0x93E99A2DBCBA9CFA(), 1, 1))
			{
				unk_0x841E34BB01496B96(unk_0xC1A5EC5C986B98AD(), 0);
				unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
				unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 342, 1);
				unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 122, 1);
				unk_0x77846DF4702EC754(unk_0x93E99A2DBCBA9CFA(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					unk_0xA765DBC99EB000B8(1, 0);
				}
			}
			unk_0x86F87160DEF1E357(1);
			unk_0x4235C9F9C67D9842(0);
		}
	}
}

void func_257(var uParam0, bool bParam1, bool bParam2)
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

bool func_258()
{
	return Global_1574582;
}

void func_259(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_2793044.f_4690, 28))
		{
			unk_0xECDAB41968FF21A8(&(Global_2793044.f_4690), 28);
		}
	}
	else if (BitTest(Global_2793044.f_4690, 28))
	{
		unk_0x061B1200C95204CB(&(Global_2793044.f_4690), 28);
	}
}

int func_260()
{
	if (func_118())
	{
		return 0;
	}
	if (!func_261(0, 1, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_261(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xF0E4B64AC0B5660E())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!unk_0x35DF833D93BCC488())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_138(unk_0x93E99A2DBCBA9CFA(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_265(unk_0x93E99A2DBCBA9CFA()))
		{
			return 0;
		}
	}
	if (func_110())
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
	if (func_264())
	{
		return 0;
	}
	if (func_263())
	{
		return 0;
	}
	if (func_537())
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
	if (func_262())
	{
		return 0;
	}
	return 1;
}

bool func_262()
{
	return Global_2764905;
}

bool func_263()
{
	return Global_2683862.f_691;
}

bool func_264()
{
	return Global_2683862.f_845;
}

int func_265(int iParam0)
{
	if (Global_2657589[iParam0 /*466*/].f_218 == 0)
	{
		return 0;
	}
	return 1;
}

void func_266(bool bParam0, bool bParam1)
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

int func_267(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_121())
	{
		return 0;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_268()
{
	struct<3> Var0;
	
	if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
	{
		if (func_4(Local_382.f_22))
		{
			if (!func_249())
			{
				Var0 = { unk_0x30BE8A934C020461(unk_0x972B1BFB16AD20B5(Local_382.f_22), 1) };
				if (func_269(Var0, 1215605247, 18))
				{
					if (func_252(unk_0x972B1BFB16AD20B5(Local_382.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_269(struct<3> Param0, int iParam3, int iParam4)
{
	if (unk_0x2E496FE654DA4166(Param0, func_170(iParam3), 1) <= IntToFloat(iParam4))
	{
		return 1;
	}
	return 0;
}

void func_270()
{
	if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
	{
		if (func_4(Local_382.f_22))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), unk_0x972B1BFB16AD20B5(Local_382.f_22), 0))
				{
					if (!BitTest(Local_458[unk_0xD378D2332270959A() /*4*/].f_2, 2))
					{
						unk_0xECDAB41968FF21A8(&(Local_458[unk_0xD378D2332270959A() /*4*/].f_2), 2);
					}
				}
				else if (func_271(unk_0xC1A5EC5C986B98AD(), unk_0x972B1BFB16AD20B5(Local_382.f_22), 1) < 180f)
				{
					if (!BitTest(Local_458[unk_0xD378D2332270959A() /*4*/].f_2, 2))
					{
						unk_0xECDAB41968FF21A8(&(Local_458[unk_0xD378D2332270959A() /*4*/].f_2), 2);
					}
				}
				else if (BitTest(Local_458[unk_0xD378D2332270959A() /*4*/].f_2, 2))
				{
					unk_0x061B1200C95204CB(&(Local_458[unk_0xD378D2332270959A() /*4*/].f_2), 2);
				}
			}
		}
	}
}

float func_271(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	if (!unk_0x055111B11E6624FD(iParam1, 0))
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Var3, iParam2);
}

void func_272()
{
	int iVar0;
	
	if (iLocal_99)
	{
		func_378();
		if (!BitTest(uLocal_587, 1))
		{
			if (Global_2793044.f_1776 > 0)
			{
				if (Global_2793044.f_1779 == 0)
				{
					Global_2793044.f_1779 = unk_0x0DB7F8294D73598B();
				}
				else if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2793044.f_1779) > Global_262145.f_11944)
				{
					if (!func_107())
					{
						if (func_70())
						{
							if (func_260())
							{
								if (!func_377())
								{
									if (!func_376(0) && !func_123())
									{
										Global_22830 = 0;
										iVar0 = func_80(1200, -1, 0);
										if (!BitTest(iVar0, 0))
										{
											if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2793044.f_1779) > 20000)
											{
												if (func_375(18, "CELL_CLTEST6", 2, "NULL", Global_2793044.f_1776, "TestSender1", 4, 0, 1, 0, 0, bLocal_120, 0, 0, 0, 0, 0))
												{
													unk_0xECDAB41968FF21A8(&iVar0, false);
													func_145(1200, iVar0, -1, 1, 0);
													unk_0xECDAB41968FF21A8(&uLocal_587, true);
													func_373(0f, 0f, 0f, func_374(19), "");
													Global_2793044.f_1778 = 1;
													iLocal_99 = 0;
												}
											}
										}
										else if (func_375(18, "CELL_CLTEST1", 2, "NULL", Global_2793044.f_1776, "TestSender1", 4, 0, 1, 0, 0, bLocal_120, 0, 0, 0, 0, 0))
										{
											func_373(0f, 0f, 0f, func_374(19), "");
											unk_0xECDAB41968FF21A8(&uLocal_587, true);
											Global_2793044.f_1778 = 1;
											iLocal_99 = 0;
										}
									}
								}
								else
								{
									Global_2793044.f_1779 = unk_0x0DB7F8294D73598B();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (BitTest(uLocal_587, 1))
	{
		if (!BitTest(uLocal_340, 5))
		{
			if (func_260())
			{
				if (bLocal_120)
				{
					func_166("IMPEX_HELP_LNCH", -1);
				}
				unk_0xECDAB41968FF21A8(&uLocal_340, 5);
				func_518(&uLocal_326, 0, 0);
			}
		}
	}
	if (iLocal_122)
	{
		if (func_526())
		{
			if (!func_519(&uLocal_130))
			{
				func_518(&uLocal_130, 0, 0);
			}
			else if (func_517(&uLocal_130, 10000, 0))
			{
				if (func_273(18, "CELL_IMPT", 0, 0))
				{
					iLocal_122 = 0;
					func_46(&uLocal_130);
				}
			}
		}
	}
}

bool func_273(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_274(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_274(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_275(&uVar0, iParam0, func_372(), sParam1, iVar165, 3, uParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_275(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
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
	iVar1 = func_371(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x2AC37494BBF1DB16(uParam7))
	{
		iVar2 = unk_0x14580F20CBCE4FA9(sParam7);
	}
	if (func_370(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_366(uParam6))
	{
		return 0;
	}
	if (func_363(iVar0, iVar1, iVar2))
	{
		if (func_362())
		{
			return 0;
		}
		func_361();
		return func_282(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_281(iParam4))
	{
		return 0;
	}
	func_276(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_276(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1649046.f_40.f_1 = iParam0;
	Global_1649046.f_40.f_2 = iParam1;
	Global_1649046.f_40.f_3 = iParam2;
	StringCopy(&(Global_1649046.f_40.f_4), sParam3, 16);
	Global_1649046.f_40.f_8 = iParam4;
	Global_1649046.f_40.f_9 = iParam5;
	Global_1649046.f_40.f_14 = uParam6;
	func_277(iParam4);
	func_361();
	Global_1649046.f_40.f_13 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), 7000);
}

void func_277(int iParam0)
{
	if (func_280(iParam0))
	{
		func_279();
		return;
	}
	func_278();
}

void func_278()
{
	Global_1649046.f_40.f_10 = 0;
}

void func_279()
{
	Global_1649046.f_40.f_10 = 1;
}

int func_280(int iParam0)
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

bool func_281(int iParam0)
{
	return iParam0 > Global_1649046.f_40.f_8;
}

int func_282(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_360();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_357(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_354(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_357(uParam0, sParam3, sParam4);
		}
		return func_337(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_336(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_325(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_324(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_283(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_283(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_323();
	bVar0 = true;
	if (func_285(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_284(120000);
		return 1;
	}
	return 0;
}

void func_284(int iParam0)
{
	Global_1649046.f_40.f_11 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), iParam0);
	Global_1649046.f_40.f_12 = 1;
}

int func_285(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_121();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x1D25117F71EE3811(iVar0);
		iVar1 = func_317(iVar0);
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
	sVar4 = func_316(uParam5, bParam6, &iVar3);
	uVar5 = func_314(iParam7, &iVar3);
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
		bVar12 = func_313(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_289(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_288();
	}
	func_323();
	func_287();
	func_286();
	return 1;
}

void func_286()
{
	Global_1649046.f_57 = 0;
	Global_1649046.f_57.f_1 = 0;
}

void func_287()
{
	Global_1649046.f_40 = 3;
}

void func_288()
{
	unk_0xECDAB41968FF21A8(&Global_8253, 8);
}

int func_289(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_290(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_290(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x4310A0DB886F9FED(sParam14, sParam15))
	{
	}
	func_306();
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
	if (func_305() == 0)
	{
		func_303();
		return 0;
	}
	func_302(Global_4542281);
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
	func_306();
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
				func_301(0);
				break;
			
			case 1:
				func_301(1);
				break;
			
			case 2:
				func_301(2);
				break;
			
			case 3:
				func_301(3);
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
		func_306();
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
			if (!func_300())
			{
				unk_0x531D638530A8DB97(-1, "Text_Arrive_Tone", &Global_20372, 1);
			}
		}
	}
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_299(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_295(1);
			func_299(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1977527 != -1 && iParam0 == Global_1977527)
	{
		bVar1 = true;
	}
	func_291(iParam0, sParam1, bVar1, func_294(unk_0x93E99A2DBCBA9CFA()));
	return 1;
}

void func_291(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_292())
	{
		return;
	}
	unk_0xCC71BAE72F44A029(iParam0, -1180597171, unk_0x14580F20CBCE4FA9(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
	if (bParam2)
	{
		Global_1977527 = -1;
	}
}

int func_292()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_121())
	{
		return 0;
	}
	if (func_293(unk_0x93E99A2DBCBA9CFA()))
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

bool func_293(int iParam0)
{
	return func_132(iParam0, 20);
}

var func_294(int iParam0)
{
	return Global_1853910[iParam0 /*862*/].f_205.f_6;
}

void func_295(int iParam0)
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
		if (func_298(14))
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
								func_297(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(iVar2);
								unk_0xAE3413B0654A0035();
							}
							if (Global_2694519)
							{
								if (iVar1 == 14)
								{
									func_296(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_296(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_296(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_296(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_296(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_297(&(Global_8260[iVar1 /*15*/]));
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
								func_297(&(Global_8260[iVar1 /*15*/]));
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
								func_297(&(Global_8260[iVar1 /*15*/]));
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
								func_297(&(Global_8260[iVar1 /*15*/]));
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
								func_297(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(42);
								unk_0xAE3413B0654A0035();
							}
							else if (Global_8260[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890001.f_1;
								func_296(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_296(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_296(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_297(sParam7);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam8))
	{
		func_297(iParam8);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam9))
	{
		func_297(iParam9);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam10))
	{
		func_297(iParam10);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam11))
	{
		func_297(iParam11);
	}
	unk_0xAE3413B0654A0035();
}

void func_297(var uParam0)
{
	unk_0x2AF11E92DE43CDE3(uParam0);
	unk_0xF8FCA9E7130CE1C8();
}

bool func_298(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_299(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_300()
{
	return Global_1575060;
}

void func_301(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113648.f_14053[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_302(int iParam0)
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

void func_303()
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
		if (!func_304(Global_4541032[iVar2 /*104*/].f_18, Global_4541032[Global_4542281 /*104*/].f_18))
		{
			Global_4542281 = iVar2;
		}
		iVar2++;
	}
	Global_4541032[Global_4542281 /*104*/].f_24 = 1;
}

int func_304(struct<6> Param0, struct<6> Param6)
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

int func_305()
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
			if (!func_304(Global_4541032[iVar2 /*104*/].f_18, Global_4541032[Global_4542281 /*104*/].f_18))
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

void func_306()
{
	if (func_298(14))
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
		Global_20383 = func_307();
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

var func_307()
{
	func_308();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_308()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_311(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_310(unk_0xC1A5EC5C986B98AD());
			if (func_309(iVar0) && (!func_298(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_309(Global_113648.f_2365.f_539.f_4321))
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

bool func_309(int iParam0)
{
	return iParam0 < 3;
}

int func_310(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_311(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_311(int iParam0)
{
	if (func_309(iParam0))
	{
		return func_312(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_312(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

int func_313(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_290(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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

int func_314(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_315(2, iParam1);
	return iParam0;
}

void func_315(int iParam0, var uParam1)
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

var func_316(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x2AC37494BBF1DB16(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0x4310A0DB886F9FED(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_315(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x45816CECE89B5B19(sParam0);
}

int func_317(int iParam0)
{
	int iVar0;
	
	iVar0 = func_320(iParam0);
	if (iVar0 == -1)
	{
		func_318(iParam0, 1);
		return 0;
	}
	Global_1666668[iVar0 /*5*/].f_4 = 1;
	return Global_1666668[iVar0 /*5*/].f_2;
}

void func_318(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_320(iParam0) != -1)
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
	if (func_319(iParam0))
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

int func_319(int iParam0)
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

int func_320(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
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
			func_321(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_321(int iParam0)
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
	func_322(&(Global_1666668[iVar32 /*5*/]));
	Global_1666829 = (Global_1666829 - 1);
}

void func_322(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_121();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA26A9A07F761D8F8())
	{
		uParam0->f_3 = unk_0x0DB7F8294D73598B();
	}
}

void func_323()
{
	Global_1649046.f_40.f_9 = 4;
}

int func_324(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_323();
	bVar0 = false;
	return func_285(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_325(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_326(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_326(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_121();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x1D25117F71EE3811(iVar0);
		iVar1 = func_317(iVar0);
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
	sVar4 = func_316(uParam5, bParam6, &iVar3);
	uVar5 = func_314(iParam7, &iVar3);
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
		bVar12 = func_375(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_328(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_288();
	}
	func_327();
	func_287();
	func_286();
	return 1;
}

void func_327()
{
	Global_1649046.f_40.f_9 = 3;
}

int func_328(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_330(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8960 = iParam6;
			Global_8863[3 /*6*/] = { func_329(iParam0) };
			Global_8940 = iParam0;
			unk_0xECDAB41968FF21A8(&Global_8253, true);
			unk_0xECDAB41968FF21A8(&Global_8253, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_329(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_3;
}

int func_330(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x4310A0DB886F9FED(sParam14, sParam15))
	{
	}
	func_306();
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
	if (func_335() == 0)
	{
		func_333();
		return 0;
	}
	func_332(Global_22792);
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
		func_301(0);
		func_301(2);
		func_301(1);
	}
	else
	{
		func_306();
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
					func_301(0);
					Global_8959 = 0;
					break;
				
				case 1:
					func_301(1);
					Global_8959 = 1;
					break;
				
				case 2:
					func_301(2);
					Global_8959 = 2;
					break;
				
				case 3:
					func_301(3);
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
		func_306();
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
			if (!func_300())
			{
				unk_0x531D638530A8DB97(-1, "Text_Arrive_Tone", &Global_20372, 1);
			}
		}
	}
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_299(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_295(1);
			func_299(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1977527 != -1 && iParam0 == Global_1977527)
	{
		bVar1 = true;
	}
	func_331(iParam0, sParam1, bVar1, func_294(unk_0x93E99A2DBCBA9CFA()));
	return 1;
}

void func_331(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_292())
	{
		return;
	}
	unk_0xCC71BAE72F44A029(iParam0, 1654525105, unk_0x14580F20CBCE4FA9(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
	if (bParam2)
	{
		Global_1977527 = -1;
	}
}

void func_332(int iParam0)
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

void func_333()
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
		if (!func_334(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18))
		{
			Global_22792 = iVar2;
		}
		iVar2++;
	}
	Global_113648.f_14143[Global_22792 /*104*/].f_24 = 1;
}

int func_334(struct<6> Param0, struct<6> Param6)
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

int func_335()
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
			if (!func_334(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18))
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

int func_336(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
	}
	if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
	{
		return 0;
	}
	func_327();
	bVar0 = true;
	if (func_326(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_284(120000);
		return 1;
	}
	return 0;
}

int func_337(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
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
		bVar0 = func_353(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_343(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_342(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_341(1);
		}
		func_340();
		func_287();
		func_339();
		func_338();
		return 1;
	}
	return 0;
}

void func_338()
{
	Global_2803162 = 0;
}

void func_339()
{
	Global_1649046.f_57 = 1;
	Global_1649046.f_57.f_1 = 0;
}

void func_340()
{
	Global_1649046.f_40.f_9 = 1;
}

void func_341(int iParam0)
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

void func_342(int iParam0)
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

int func_343(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_352(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_344(sParam3, iParam4, bParam7);
}

int func_344(char* sParam0, int iParam1, bool bParam2)
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
					func_351();
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
		if (func_114(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_350();
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
				func_306();
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
				if (func_349())
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
			if (func_348())
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
			func_347();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_346();
		func_345();
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
		func_351();
	}
	return 0;
}

void func_345()
{
	if (!func_292())
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

void func_346()
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

void func_347()
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

int func_348()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_349()
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

void func_350()
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

void func_351()
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

void func_352(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_353(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_352(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_344(sParam3, iParam4, bParam7);
}

int func_354(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
	}
	if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
	{
		return 0;
	}
	if (func_356(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_355();
		func_340();
		func_287();
		func_339();
		func_338();
		return 1;
	}
	return 0;
}

void func_355()
{
	Global_22743 = 0;
}

bool func_356(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_352(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_344(sParam3, iParam4, bParam8);
}

int func_357(var uParam0, char* sParam1, char* sParam2)
{
	if (func_359(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_358();
		func_287();
		func_339();
		return 1;
	}
	return 0;
}

void func_358()
{
	Global_1649046.f_40.f_9 = 2;
}

bool func_359(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_352(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_344(sParam2, iParam3, 0);
}

void func_360()
{
	Global_1649046.f_55 = Global_1649046.f_40.f_1;
	Global_1649046.f_55.f_1 = Global_1649046.f_40.f_10;
}

void func_361()
{
	Global_1649046.f_40 = 1;
}

bool func_362()
{
	return Global_1649046.f_40 == 1;
}

int func_363(int iParam0, int iParam1, int iParam2)
{
	if (!func_364(iParam0))
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

int func_364(int iParam0)
{
	if (!func_365())
	{
		return 0;
	}
	if (!Global_1649046.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_365()
{
	if (Global_1649046.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_366(var uParam0)
{
	if (func_369())
	{
		return 0;
	}
	if (func_109())
	{
		return 0;
	}
	if (func_376(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1935176 || func_368())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_367())
		{
			return 0;
		}
	}
	return 1;
}

bool func_367()
{
	return unk_0xF8CFDD89447316E5(unk_0x0DB7F8294D73598B(), Global_1665292);
}

int func_368()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_369()
{
	return func_348();
}

int func_370(int iParam0, int iParam1, int iParam2)
{
	if (!func_109())
	{
		return 0;
	}
	return func_363(iParam0, iParam1, iParam2);
}

int func_371(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x14580F20CBCE4FA9(&cVar0);
}

char* func_372()
{
	return "TXTMSG";
}

int func_373(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!unk_0x2AC37494BBF1DB16(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x4310A0DB886F9FED(&(Global_2793044.f_4063[iVar0 /*26*/].f_4), sParam3))
			{
				if (unk_0x2AC37494BBF1DB16(&(Global_2793044.f_4063[iVar0 /*26*/].f_4)))
				{
					Global_2793044.f_4063[iVar0 /*26*/] = 1;
					Global_2793044.f_4063[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2793044.f_4063[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2793044.f_4063[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_31(Global_2793044.f_4063[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2793044.f_4063[iVar0 /*26*/] = 1;
				Global_2793044.f_4063[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2793044.f_4063[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2793044.f_4063[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_374(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_375(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_330(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8960 = iParam10;
			Global_8863[3 /*6*/] = { func_329(iParam0) };
			Global_8940 = iParam0;
			StringCopy(&Global_8941, sParam5, 64);
			unk_0xECDAB41968FF21A8(&Global_8253, true);
			unk_0xECDAB41968FF21A8(&Global_8253, 7);
		}
		return 1;
	}
	return 0;
}

int func_376(int iParam0)
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

bool func_377()
{
	return func_365();
}

void func_378()
{
	if (func_70())
	{
		if (!iLocal_345 == Local_382.f_32)
		{
			Global_2793044.f_1736 = { Local_370 };
			func_379();
			iLocal_345 = Local_382.f_32;
		}
	}
}

void func_379()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2793044.f_1755[iVar1 /*4*/]), "", 16);
		if (!Global_2793044.f_1736[iVar1] == -1 && Global_2793044.f_1736.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2793044.f_1755[iVar0 /*4*/]), func_380(Global_2793044.f_1736[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2793044.f_1776 = iVar0;
}

char* func_380(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_381(bParam1, "IMPEX_2020_0B", "IMPEX_2020_0");
		
		case 1:
			return func_381(bParam1, "IMPEX_2020_1B", "IMPEX_2020_1");
		
		case 2:
			return func_381(bParam1, "IMPEX_2020_2B", "IMPEX_2020_2");
		
		case 3:
			return func_381(bParam1, "IMPEX_2020_3B", "IMPEX_2020_3");
		
		case 4:
			return func_381(bParam1, "IMPEX_2020_4B", "IMPEX_2020_4");
		
		case 5:
			return func_381(bParam1, "IMPEX_2020_5B", "IMPEX_2020_5");
		
		case 6:
			return func_381(bParam1, "IMPEX_2020_6B", "IMPEX_2020_6");
		
		case 7:
			return func_381(bParam1, "IMPEX_2020_7B", "IMPEX_2020_7");
		
		case 8:
			return func_381(bParam1, "IMPEX_2020_8B", "IMPEX_2020_8");
		
		case 9:
			return func_381(bParam1, "IMPEX_2020_9B", "IMPEX_2020_9");
		
		case 10:
			return func_381(bParam1, "IMPEX_2020_10B", "IMPEX_2020_10");
		
		case 11:
			return func_381(bParam1, "IMPEX_2020_11B", "IMPEX_2020_11");
		
		case 12:
			return func_381(bParam1, "IMPEX_2020_12B", "IMPEX_2020_12");
		
		case 13:
			return func_381(bParam1, "IMPEX_2020_13B", "IMPEX_2020_13");
		
		case 14:
			return func_381(bParam1, "IMPEX_2020_14B", "IMPEX_2020_14");
		
		case 15:
			return func_381(bParam1, "IMPEX_2020_15B", "IMPEX_2020_15");
		
		case 16:
			return func_381(bParam1, "IMPEX_2020_16B", "IMPEX_2020_16");
		
		case 17:
			return func_381(bParam1, "IMPEX_2020_17B", "IMPEX_2020_17");
		
		case 18:
			return func_381(bParam1, "IMPEX_2020_18B", "IMPEX_2020_18");
		
		case 19:
			return func_381(bParam1, "IMPEX_2020_19B", "IMPEX_2020_19");
		
		default:
	}
	return "";
}

char* func_381(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_382()
{
	int iVar0;
	
	if (!iLocal_114)
	{
		if (!func_387(unk_0x93E99A2DBCBA9CFA(), 1))
		{
			if (!func_122(unk_0x93E99A2DBCBA9CFA(), 0))
			{
				if (!Local_382.f_28 == -1)
				{
					if (!iLocal_347 == func_34(Local_382.f_28))
					{
						if (!func_386(unk_0xC1A5EC5C986B98AD()))
						{
							if (!func_385(unk_0x93E99A2DBCBA9CFA()))
							{
								iLocal_347 = func_34(Local_382.f_28);
								iVar0 = 0;
								while (iVar0 < iLocal_357)
								{
									unk_0x7229623B17293EFE(iLocal_357[iVar0], iLocal_347);
									iVar0++;
								}
								iLocal_114 = 1;
								unk_0x852EC2A7DE66202D(iLocal_347);
								func_384();
								func_383(iLocal_347);
							}
						}
					}
				}
			}
		}
	}
	else if ((((func_387(unk_0x93E99A2DBCBA9CFA(), 1) || (Local_382.f_28 > -1 && !iLocal_347 == func_34(Local_382.f_28))) || func_386(unk_0xC1A5EC5C986B98AD())) || func_122(unk_0x93E99A2DBCBA9CFA(), 0)) || func_385(unk_0x93E99A2DBCBA9CFA()))
	{
		unk_0xE0A291F406691F03(iLocal_347);
		iVar0 = 0;
		while (iVar0 < iLocal_357)
		{
			unk_0x710E75282E02AA18(iLocal_357[iVar0]);
			iVar0++;
		}
		func_384();
		iLocal_347 = 0;
		iLocal_114 = 0;
	}
}

void func_383(int iParam0)
{
	if (BitTest(Local_382.f_23, 0))
	{
		if (iParam0 == Local_382.f_67)
		{
			return;
		}
	}
	switch (iParam0)
	{
		case joaat("sentinel"):
		case joaat("serrano"):
		case joaat("dominator"):
		case joaat("schafter2"):
		case joaat("surge"):
			iLocal_300[0] = unk_0x66B14E3B89B70D6A(-54.2664f, -1679.549f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[1] = unk_0x66B14E3B89B70D6A(-47.0703f, -1115.41f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[2] = unk_0x66B14E3B89B70D6A(1227.06f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[3] = unk_0x66B14E3B89B70D6A(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[4] = unk_0x66B14E3B89B70D6A(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[5] = unk_0x66B14E3B89B70D6A(1123.513f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[6] = unk_0x66B14E3B89B70D6A(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[7] = unk_0x66B14E3B89B70D6A(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[8] = unk_0x66B14E3B89B70D6A(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[9] = unk_0x66B14E3B89B70D6A(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_311 = 1;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_300[0] = unk_0x66B14E3B89B70D6A(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[1] = unk_0x66B14E3B89B70D6A(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[2] = unk_0x66B14E3B89B70D6A(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[3] = unk_0x66B14E3B89B70D6A(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[4] = unk_0x66B14E3B89B70D6A(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[5] = unk_0x66B14E3B89B70D6A(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[6] = unk_0x66B14E3B89B70D6A(-1101.607f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[7] = unk_0x66B14E3B89B70D6A(-3018.759f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[8] = unk_0x66B14E3B89B70D6A(-1550.796f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[9] = unk_0x66B14E3B89B70D6A(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_311 = 1;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_300[0] = unk_0x66B14E3B89B70D6A(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[1] = unk_0x66B14E3B89B70D6A(-2437.372f, 3377.217f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[2] = unk_0x66B14E3B89B70D6A(-1639.857f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[3] = unk_0x66B14E3B89B70D6A(-2981.245f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[4] = unk_0x66B14E3B89B70D6A(-1542.332f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[5] = unk_0x66B14E3B89B70D6A(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[6] = unk_0x66B14E3B89B70D6A(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[7] = unk_0x66B14E3B89B70D6A(-976.5854f, -2573.472f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[8] = unk_0x66B14E3B89B70D6A(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[9] = unk_0x66B14E3B89B70D6A(-208.5685f, -2077.887f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_311 = 1;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_300[0] = unk_0x66B14E3B89B70D6A(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[1] = unk_0x66B14E3B89B70D6A(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[2] = unk_0x66B14E3B89B70D6A(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[3] = unk_0x66B14E3B89B70D6A(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[4] = unk_0x66B14E3B89B70D6A(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[5] = unk_0x66B14E3B89B70D6A(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[6] = unk_0x66B14E3B89B70D6A(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[7] = unk_0x66B14E3B89B70D6A(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[8] = unk_0x66B14E3B89B70D6A(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_300[9] = unk_0x66B14E3B89B70D6A(1218.18f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_311 = 1;
			break;
	}
}

void func_384()
{
	int iVar0;
	
	if (iLocal_311)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xB94F2C1515FF9A57(iLocal_300[iVar0]))
		{
			unk_0xFE4716266057BA9A(iLocal_300[iVar0]);
		}
		iLocal_300[iVar0] = 0;
		iVar0++;
	}
	iLocal_311 = 0;
}

int func_385(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_120(Global_2657589[iParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

bool func_386(int iParam0)
{
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return 0;
	}
	if (unk_0x055111B11E6624FD(iParam0, 0))
	{
	}
	return unk_0x41AD4BF315E01D41(iParam0) == Global_152321;
}

bool func_387(int iParam0, bool bParam1)
{
	if (func_83() != 0)
	{
		return func_388(iParam0) != 0;
	}
	return func_138(iParam0, bParam1, 0);
}

int func_388(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2657589[iParam0 /*466*/].f_1;
	}
	return 0;
}

void func_389()
{
	var uVar0;
	
	if (!func_519(&uLocal_332))
	{
		func_518(&uLocal_332, 0, 0);
	}
	else if (func_517(&uLocal_332, 250, 0))
	{
		func_46(&uLocal_332);
		if (func_404(1, 0))
		{
			if (!BitTest(uLocal_340, 5) && !func_403())
			{
			}
			else if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				if ((func_402() || func_403()) || func_398())
				{
					if (!func_397(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
					{
						if (!func_396(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) && !func_15(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
						{
							if (!unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
							{
								if (func_391(&uVar0))
								{
									if (!BitTest(uLocal_340, 2))
									{
										if (func_260() && unk_0x83666F9FB8FEBD4B() > 500)
										{
											func_166("IMPEX_FSPRAY_FM", -1);
											unk_0xECDAB41968FF21A8(&uLocal_340, 2);
										}
									}
									else
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
								else if (!BitTest(uLocal_340, 8))
								{
									if (func_260() && unk_0x83666F9FB8FEBD4B() > 500)
									{
										func_166("IMPEX_CASH_FM", -1);
										unk_0xECDAB41968FF21A8(&uLocal_340, 8);
									}
								}
								else
								{
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else if (!BitTest(uLocal_340, 11))
							{
								if (func_260() && unk_0x83666F9FB8FEBD4B() > 500)
								{
									func_166("IMPEX_WANTED_FM", -1);
									unk_0xECDAB41968FF21A8(&uLocal_340, 11);
								}
							}
							else
							{
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						else if (!unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
						{
							if (!func_390())
							{
								if (!func_15(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
								{
									if (!BitTest(uLocal_340, 3))
									{
										unk_0x061B1200C95204CB(&uLocal_340, 7);
										if (func_260() && unk_0x83666F9FB8FEBD4B() > 2000)
										{
											if (Global_2793044.f_4615 == 0)
											{
												if (!func_252(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0))
												{
													func_166("IMPEX_DELIVER_FM", -1);
													unk_0xECDAB41968FF21A8(&uLocal_340, 3);
												}
											}
										}
									}
									else
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
								else if (!BitTest(uLocal_340, 7))
								{
									if (func_260() && unk_0x83666F9FB8FEBD4B() > 2000)
									{
										func_166("IMPEX_RIG_FM", -1);
										unk_0xECDAB41968FF21A8(&uLocal_340, 7);
									}
								}
								else
								{
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else if (!BitTest(uLocal_340, 6))
							{
								if (func_260() && unk_0x83666F9FB8FEBD4B() > 2000)
								{
									func_166("IMPEX_WANTED_P", -1);
									unk_0xECDAB41968FF21A8(&uLocal_340, 6);
								}
							}
							else
							{
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						else if (!BitTest(uLocal_340, 4))
						{
							if (func_260() && unk_0x83666F9FB8FEBD4B() > 5000)
							{
								func_166("IMPEX_WANTED_FM", -1);
								unk_0xECDAB41968FF21A8(&uLocal_340, 4);
							}
						}
						else
						{
							unk_0xC1B1E9A034A63A62(0);
						}
					}
				}
				else
				{
					if (func_242("IMPEX_FSPRAY_FM"))
					{
						unk_0xCD3C8E1022864F65(1);
					}
					unk_0x061B1200C95204CB(&uLocal_340, 2);
					unk_0x061B1200C95204CB(&uLocal_340, 3);
					unk_0x061B1200C95204CB(&uLocal_340, 4);
					unk_0x061B1200C95204CB(&uLocal_340, 6);
					unk_0x061B1200C95204CB(&uLocal_340, 7);
					unk_0x061B1200C95204CB(&uLocal_340, 8);
					unk_0x061B1200C95204CB(&uLocal_340, 11);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else
			{
				if (func_242("IMPEX_FSPRAY_FM"))
				{
					unk_0xCD3C8E1022864F65(1);
				}
				unk_0x061B1200C95204CB(&uLocal_340, 2);
				unk_0x061B1200C95204CB(&uLocal_340, 3);
				unk_0x061B1200C95204CB(&uLocal_340, 4);
				unk_0x061B1200C95204CB(&uLocal_340, 6);
				unk_0x061B1200C95204CB(&uLocal_340, 7);
				unk_0x061B1200C95204CB(&uLocal_340, 8);
				unk_0x061B1200C95204CB(&uLocal_340, 11);
				if (unk_0x83666F9FB8FEBD4B() > 0)
				{
					unk_0xC1B1E9A034A63A62(0);
				}
			}
		}
		else if (func_242("IMPEX_FSPRAY_FM"))
		{
			unk_0xCD3C8E1022864F65(1);
		}
	}
}

int func_390()
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar1 = (iVar2 - 1);
		if (!unk_0x9CFCDD9C62B56708(uVar3, iVar1, 0))
		{
			if (unk_0x7DE17ACDD8BA2642(unk_0xA66E176E5772E965(iVar3, iVar1, 0)))
			{
				if (!unk_0x055111B11E6624FD(unk_0xA66E176E5772E965(iVar3, iVar1, 0), 0))
				{
					uVar0 = unk_0xA66E176E5772E965(iVar3, iVar1, 0);
					if (!unk_0x60A06DE259634304(uVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_391(var uParam0)
{
	int iVar0;
	
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (unk_0x7DE17ACDD8BA2642(iVar0) && unk_0xB6B927AA8C3DAD36(iVar0))
		{
			*uParam0 = func_392(iVar0, 0);
			if (!unk_0x879E9B10E2161FC6((400 + *uParam0), 0, 0, 1, -1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_392(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (func_395(unk_0x93E99A2DBCBA9CFA()) && !bParam1)
	{
		return 0;
	}
	fVar3 = unk_0x45B3B8D56153B108(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (unk_0x34DAE7F7DF2CC995(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (unk_0xF7B2B973FAF93B1B(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = (unk_0xBBDA792448DB5A89(unk_0x2935B4D6CE81318D(iParam0)) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (unk_0x5F6DE099BE649D0F(iParam0))
	{
		iVar8 += 50;
	}
	if (unk_0x6A62B1AB6783DD0B(iParam0, 1))
	{
		iVar8 += 50;
	}
	else if (unk_0x1C4A22C6B81DB486(iParam0, 1))
	{
		iVar8 += 25;
	}
	if (unk_0x6A62B1AB6783DD0B(iParam0, 0))
	{
		iVar8 += 50;
	}
	else if (unk_0x1C4A22C6B81DB486(iParam0, 0))
	{
		iVar8 += 25;
	}
	if (!unk_0x780CC03D180A36D1(iParam0))
	{
		iVar10 += 20;
		if (!unk_0x3213D277F175532B(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!unk_0x3213D277F175532B(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (unk_0xF66D3BDEBE2E64B9(unk_0x504B9BB48D41C264(iParam0)))
	{
		iVar1 = 0;
		if (unk_0x42BECCBCE4CA667A(iParam0, 0))
		{
			iVar1++;
		}
		if (unk_0x42BECCBCE4CA667A(iParam0, 1))
		{
			iVar1++;
		}
		if (unk_0x42BECCBCE4CA667A(iParam0, 2))
		{
			iVar1++;
		}
		if (unk_0x42BECCBCE4CA667A(iParam0, 3))
		{
			iVar1++;
		}
		if (unk_0x42BECCBCE4CA667A(iParam0, 4))
		{
			iVar1++;
		}
		if (unk_0x42BECCBCE4CA667A(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (unk_0x243766F8D9C46E5F(iParam0))
	{
		iVar8 += 15;
	}
	if (unk_0xD8246392F8E003AC(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (unk_0xE95D0CF0802593FC(iParam0, iVar2, 0))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (unk_0xCB714AB17CA8024C(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_394(unk_0x504B9BB48D41C264(iParam0), 0))
	{
		iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_12026));
		if (iVar0 > unk_0xF34EE736CF047844((4f * Global_262145.f_12026)))
		{
			iVar4 = Global_262145.f_12024;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_12025)
		{
			iVar0 = Global_262145.f_12025;
		}
	}
	else if (func_393(iParam0))
	{
		iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_12029));
		if (iVar0 > unk_0xF34EE736CF047844((4f * Global_262145.f_12029)))
		{
			iVar4 = Global_262145.f_12027;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_12028)
		{
			iVar0 = Global_262145.f_12028;
		}
	}
	else
	{
		if (iVar0 > 0)
		{
			iVar4 = 50;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 1250)
		{
			iVar0 = 1250;
		}
	}
	return iVar0;
}

int func_393(int iParam0)
{
	switch (unk_0x504B9BB48D41C264(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_394(int iParam0, int iParam1)
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
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14736)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14738)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14737)
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
			if (Global_262145.f_19141)
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
			if (Global_262145.f_19143)
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
			if (Global_262145.f_19147)
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
			if (Global_262145.f_19144)
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
			if (Global_262145.f_19151)
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
			if (Global_262145.f_19149)
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
			if (Global_262145.f_19154)
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
			if (Global_262145.f_21100)
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
			if (Global_262145.f_21101)
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

int func_395(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_120(Global_2657589[iParam0 /*466*/].f_321.f_7) == 22;
			}
		}
	}
	return 0;
}

bool func_396(int iParam0)
{
	return unk_0x2B6E67EB7FF3FD10(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_397(int iParam0)
{
	if (unk_0x2B6E67EB7FF3FD10(iParam0, "Veh_Modded_By_Player") && unk_0xC2DE378329C46B2E(iParam0, "Veh_Modded_By_Player") != unk_0x85B8E90FF09F2616(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	return 0;
}

int func_398()
{
	var uVar0;
	
	if (func_528())
	{
		return 0;
	}
	if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
	{
		uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (!func_401(uVar0, 1) && !func_400(uVar0, 1))
		{
			if (func_399(unk_0x504B9BB48D41C264(uVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_399(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(iParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_382.f_35[iVar1] == iVar0)
			{
				if (!func_517(&(Local_382.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_400(int iParam0, bool bParam1)
{
	if (Global_78558)
	{
		if (unk_0x7DE17ACDD8BA2642(uParam0) && (!bParam1 || unk_0xFBD273FDBCF0C5BD(iParam0, 0)))
		{
			if (unk_0x19D6457970A9D67E("TestDrive", 2))
			{
				if (unk_0x2B6E67EB7FF3FD10(iParam0, "TestDrive"))
				{
					return unk_0x8FA309E9ECEE409A(iParam0, "TestDrive");
				}
			}
		}
	}
	return 0;
}

int func_401(int iParam0, bool bParam1)
{
	if (Global_78558)
	{
		if (unk_0x7DE17ACDD8BA2642(iParam0) && (!bParam1 || unk_0xFBD273FDBCF0C5BD(iParam0, 0)))
		{
			if (unk_0x2B6E67EB7FF3FD10(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_402()
{
	var uVar0;
	
	if (func_528())
	{
		return 0;
	}
	if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
	{
		if (!Global_1925793)
		{
			uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (!func_401(uVar0, 1) && !func_400(uVar0, 1))
			{
				if (!unk_0x521A50EC08B4CCFF(uVar0, 0))
				{
					if (unk_0xFBD273FDBCF0C5BD(iVar0, 1))
					{
						if (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_33 <= 0)
						{
							if (!unk_0x2B6E67EB7FF3FD10(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1925792)
								{
									if (bLocal_312)
									{
										bLocal_312 = false;
									}
									if (func_74(&Local_370, unk_0x504B9BB48D41C264(iVar0)))
									{
										Global_2793044.f_1780 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_312)
					{
						bLocal_312 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_403()
{
	if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
	{
		if (BitTest(Local_382.f_23, 0))
		{
			if (unk_0x5E6D8811A0BD0954(Local_382.f_22))
			{
				if (func_4(Local_382.f_22))
				{
					if (unk_0x44A6C9475C859B45(unk_0xC1A5EC5C986B98AD(), unk_0x972B1BFB16AD20B5(Local_382.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_404(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		bVar0 = false;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
			{
				bVar0 = false;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (func_138(unk_0x93E99A2DBCBA9CFA(), 1, 0))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (func_112())
		{
			bVar0 = false;
		}
	}
	if (!func_14(unk_0x93E99A2DBCBA9CFA(), 0, 0))
	{
		bVar0 = false;
	}
	if (func_71(unk_0x93E99A2DBCBA9CFA(), 1))
	{
		bVar0 = false;
	}
	if (func_122(unk_0x93E99A2DBCBA9CFA(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_405()
{
	int iVar0;
	
	switch (iLocal_127)
	{
		case 0:
			if (!func_138(unk_0x93E99A2DBCBA9CFA(), 1, 0))
			{
				if (!func_519(&uLocal_128) || func_517(&uLocal_128, 2000, 0))
				{
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 1199.403f, -3113.591f, 4.5453f) < 400f)
						{
							func_408(&uLocal_132, 4, iLocal_126, "MECHANIC_IMP", 0, 1);
							iLocal_589 = 0;
							iLocal_127++;
						}
					}
					func_46(&uLocal_128);
					func_518(&uLocal_128, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (!func_138(unk_0x93E99A2DBCBA9CFA(), 1, 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_111)
						{
							if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
							{
								if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1204.224f, -3121.533f, 4.357823f, 1204.521f, -3107.603f, 8.653814f, 5.1875f, 0, 1, 0))
								{
									if (!iLocal_589)
									{
										iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
										if (func_392(iVar0, 0) > 500)
										{
											sLocal_590 = "FM_IEPOOR";
										}
										else
										{
											sLocal_590 = "FM_IEGOOD";
										}
										iLocal_589 = 1;
									}
									else if (func_407(&uLocal_132, "FM_1AU", sLocal_590, 12, 0, 0, 0))
									{
										iLocal_297 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
										iLocal_127++;
										iLocal_589 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_406();
						iLocal_127 = 0;
					}
				}
				else
				{
					func_406();
					iLocal_127 = 0;
				}
			}
			break;
		
		case 2:
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (!func_138(unk_0x93E99A2DBCBA9CFA(), 1, 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_111)
						{
							if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
							{
								if (unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0) != iLocal_297)
								{
									iLocal_127 = 1;
								}
							}
						}
					}
					else
					{
						func_406();
						iLocal_127 = 0;
					}
				}
				else
				{
					func_406();
					iLocal_127 = 0;
				}
			}
			break;
	}
}

void func_406()
{
	var uVar0;
	
	if (unk_0x7DE17ACDD8BA2642(iLocal_126))
	{
		unk_0xE0A291F406691F03(joaat("s_m_y_xmech_02"));
		uVar0 = iLocal_126;
		unk_0x782D744058B1DFA3(&uVar0);
	}
}

bool func_407(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_352(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 1;
	return func_344(sParam2, iParam3, 0);
}

void func_408(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_409()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	int iVar12;
	
	if (func_404(1, 1))
	{
		switch (Local_458[unk_0xD378D2332270959A() /*4*/].f_1)
		{
			case 0:
				if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
				{
					bVar7 = func_398();
					if ((func_402() || func_403()) || bVar7)
					{
						if (!func_390())
						{
							if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
							{
								if (!func_506())
								{
									if (bLocal_110)
									{
										bLocal_110 = false;
									}
									iVar3 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
									if (unk_0x19D6457970A9D67E("AllowModSprayRepair", 2))
									{
										if (!unk_0x2B6E67EB7FF3FD10(iVar3, "AllowModSprayRepair") || (unk_0x2B6E67EB7FF3FD10(iVar3, "AllowModSprayRepair") && unk_0x8FA309E9ECEE409A(iVar3, "AllowModSprayRepair") == 0))
										{
											unk_0xEC687B9B4DF9224E(iVar3, "AllowModSprayRepair", 1);
										}
									}
									if (!iLocal_116)
									{
										if (func_505(iVar3))
										{
											unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 2, 0);
											unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
										}
									}
									iLocal_591 = iVar3;
									if (BitTest(uLocal_587, 15))
									{
										unk_0x061B1200C95204CB(&uLocal_587, 15);
									}
									if (BitTest(uLocal_340, 9))
									{
										unk_0x061B1200C95204CB(&uLocal_340, 9);
									}
									if (BitTest(uLocal_340, 12))
									{
										unk_0x061B1200C95204CB(&uLocal_340, 12);
									}
									if (BitTest(uLocal_340, 10))
									{
										unk_0x061B1200C95204CB(&uLocal_340, 10);
									}
									if (!BitTest(uLocal_587, 12))
									{
										if (bVar7)
										{
											unk_0xECDAB41968FF21A8(&uLocal_587, 12);
										}
									}
									else if (!bVar7)
									{
										unk_0x061B1200C95204CB(&uLocal_587, 12);
									}
									if (func_396(iVar3))
									{
										if (!func_15(iVar3))
										{
											bLocal_103 = true;
											if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
											{
												if (bLocal_109)
												{
													bLocal_109 = false;
												}
												if (unk_0xA66E176E5772E965(iVar3, -1, 0) == unk_0xC1A5EC5C986B98AD())
												{
													bLocal_106 = true;
												}
											}
											else if (func_77())
											{
												if (bLocal_106)
												{
													bLocal_106 = false;
												}
												bLocal_109 = true;
											}
											bLocal_104 = false;
											bLocal_105 = false;
											bLocal_107 = false;
											bLocal_108 = false;
											bLocal_110 = false;
											bLocal_111 = true;
											if (func_504(1215605247, 18))
											{
												bLocal_101 = true;
											}
											iLocal_353 = unk_0xB3011BC7288F3091(unk_0xC1A5EC5C986B98AD());
											if (!unk_0x24405041A9F1A910(iLocal_353))
											{
												if (func_252(iLocal_353, 0))
												{
													if (!BitTest(uLocal_587, 17))
													{
														unk_0xECDAB41968FF21A8(&uLocal_587, 17);
													}
													else if (func_252(iLocal_353, 1))
													{
														Var9 = { unk_0x7A2C98D06C9C1956(iLocal_353) };
														if (unk_0xDC58AE028CB223BA(iLocal_353) < 0.5f || unk_0x2655A8EC638E4FD1(Var9.f_1) < 1.3f)
														{
															func_503();
															func_494(unk_0x93E99A2DBCBA9CFA(), 0, 16388, 0);
															if (func_403())
															{
																unk_0xECDAB41968FF21A8(&uLocal_587, 4);
																unk_0xECDAB41968FF21A8(&(Local_458[unk_0xD378D2332270959A() /*4*/].f_2), true);
															}
															if (func_402() || func_398())
															{
																unk_0xECDAB41968FF21A8(&uLocal_587, 6);
															}
															if (func_493())
															{
																bLocal_100 = true;
															}
															else
															{
																bLocal_100 = false;
															}
															unk_0x439314AD4FC79186(iLocal_353, 2);
															if (unk_0xB6B927AA8C3DAD36(iLocal_353))
															{
																unk_0x03879CC8EF9E3635(iLocal_353, 1, 1, 1, 1, 1, 0, 0, 0);
															}
															Local_458[unk_0xD378D2332270959A() /*4*/] = func_75(unk_0x504B9BB48D41C264(iLocal_353));
															Local_458[unk_0xD378D2332270959A() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_348[iVar4] = func_121();
																if (!unk_0x9CFCDD9C62B56708(iLocal_353, iVar1, 0))
																{
																	if (unk_0x7DE17ACDD8BA2642(unk_0xA66E176E5772E965(iLocal_353, iVar1, 0)))
																	{
																		if (!unk_0x055111B11E6624FD(unk_0xA66E176E5772E965(iLocal_353, iVar1, 0), 0))
																		{
																			iVar0 = unk_0xA66E176E5772E965(iLocal_353, iVar1, 0);
																			if (unk_0x60A06DE259634304(iVar0))
																			{
																				if (func_14(unk_0xB850F932D03EF34D(iVar0), 0, 0))
																				{
																					if (unk_0x33676B7D38C8F4C6(unk_0xB850F932D03EF34D(iVar0)))
																					{
																						iLocal_348[iVar4] = unk_0xB850F932D03EF34D(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_319 = func_492(unk_0x504B9BB48D41C264(iLocal_353));
															iLocal_320 = func_392(iLocal_353, 0);
															fLocal_321 = unk_0xBBDA792448DB5A89((iLocal_319 - iLocal_320));
															fLocal_321 = (fLocal_321 * Global_262145.f_2422);
															if (BitTest(uLocal_587, 4))
															{
																fLocal_321 = (fLocal_321 * 1.3f);
															}
															fLocal_321 = (fLocal_321 / unk_0xBBDA792448DB5A89(iVar5));
															fLocal_322 = 500f;
															func_491();
															func_174(0);
															func_489(1248, 1, -1);
															if (func_242("IMPEX_DELIVER_FM"))
															{
																unk_0xCD3C8E1022864F65(1);
															}
															unk_0x061B1200C95204CB(&uLocal_587, 12);
															iVar6 = func_80(1200, -1, 0);
															if (!BitTest(iVar6, 1))
															{
																unk_0xECDAB41968FF21A8(&iVar6, true);
																func_145(1200, iVar6, -1, 1, 0);
															}
															else if (!BitTest(iVar6, 2))
															{
																unk_0xECDAB41968FF21A8(&iVar6, 2);
																func_145(1200, iVar6, -1, 1, 0);
															}
															func_488();
															iLocal_323 = 0;
															iLocal_323 = unk_0xF2DB717A73826179(fLocal_321);
															iLocal_323 = (iLocal_323 - (iLocal_323 % 25));
															if (iLocal_592 == iVar3)
															{
																iLocal_323 = (iLocal_323 + iLocal_325);
															}
															if (!BitTest(uLocal_587, 4))
															{
																if (iLocal_323 > Global_262145.f_174)
																{
																	iLocal_323 = Global_262145.f_174;
																}
															}
															else if (iLocal_323 > Global_262145.f_174)
															{
																iLocal_323 = Global_262145.f_174;
															}
															iLocal_324 = 0;
															fLocal_322 = (fLocal_322 * Global_262145.f_4238);
															iLocal_324 = unk_0xF2DB717A73826179(fLocal_322);
															unk_0x061B1200C95204CB(&uLocal_587, 17);
															iLocal_354 = iLocal_353;
															iLocal_356 = unk_0x504B9BB48D41C264(iLocal_353);
															if (!BitTest(uLocal_587, 4))
															{
																unk_0xABB5373727CBD4C0(19, iLocal_324, iLocal_323, iLocal_353);
															}
															else
															{
																unk_0xABB5373727CBD4C0(120, iLocal_324, iLocal_323, iLocal_353);
															}
															func_487(19, 1);
															func_486();
															func_522();
														}
														else if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
														{
															func_494(unk_0x93E99A2DBCBA9CFA(), 0, 16388, 0);
														}
													}
												}
												else if (BitTest(uLocal_587, 17))
												{
													unk_0x061B1200C95204CB(&uLocal_587, 17);
												}
											}
										}
										else
										{
											if (bLocal_103)
											{
												bLocal_103 = false;
											}
											if (bLocal_111)
											{
												bLocal_111 = false;
											}
											if (bLocal_106)
											{
												bLocal_106 = false;
											}
											if (bLocal_109)
											{
												bLocal_109 = false;
											}
											if (bLocal_110)
											{
												bLocal_110 = false;
											}
										}
									}
									else if (!func_15(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
									{
										if (func_391(&iVar8))
										{
											if (!func_397(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
											{
												if (unk_0xA66E176E5772E965(iVar3, -1, 0) == unk_0xC1A5EC5C986B98AD())
												{
													if (iLocal_592 != iVar3)
													{
														iLocal_592 = iVar3;
														iLocal_325 = 0;
													}
													else if (iLocal_325 != iVar8)
													{
														if (iLocal_325 < iVar8)
														{
															iLocal_325 = iVar8;
														}
													}
												}
												if (!bLocal_104)
												{
													bLocal_104 = true;
												}
												if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
												{
													if (func_77())
													{
														if (bLocal_105)
														{
															bLocal_105 = false;
														}
														if (unk_0xA66E176E5772E965(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), -1, 0) == unk_0xC1A5EC5C986B98AD())
														{
															if (func_392(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0) > 0)
															{
																if (!bLocal_108)
																{
																	bLocal_108 = true;
																}
															}
															else
															{
																if (bLocal_108)
																{
																	bLocal_108 = false;
																}
																if (!bLocal_107)
																{
																	bLocal_107 = true;
																}
															}
														}
													}
												}
												else if (!func_77())
												{
													if (bLocal_107)
													{
														bLocal_107 = false;
													}
													if (bLocal_108)
													{
														bLocal_108 = false;
													}
													if (!bLocal_105)
													{
														if (unk_0xA66E176E5772E965(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), -1, 0) == unk_0xC1A5EC5C986B98AD())
														{
															bLocal_105 = true;
														}
													}
												}
											}
											else
											{
												func_485();
											}
										}
										else
										{
											func_485();
										}
									}
									else
									{
										func_485();
										if (bLocal_111)
										{
											bLocal_111 = false;
										}
									}
								}
							}
							else
							{
								iVar3 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
								if (iLocal_591 != iVar3)
								{
									if (!iLocal_116)
									{
										if (func_505(iVar3))
										{
											unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 2, 0);
											unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
										}
									}
									iLocal_591 = iVar3;
								}
								if (!bLocal_110)
								{
									func_485();
									bLocal_110 = true;
								}
							}
						}
					}
					else
					{
						func_485();
						if (bLocal_111)
						{
							bLocal_111 = false;
						}
						if (iLocal_116)
						{
							if (Local_382.f_33)
							{
								if (bLocal_121)
								{
									iLocal_116 = 0;
								}
							}
						}
						if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
						{
							if ((func_242("IMPEX_NOT_NEED") || func_242("IMPEX_NO_MORE")) || func_242("IMPEX_NOT_PVEH"))
							{
								unk_0xCD3C8E1022864F65(1);
							}
						}
						iVar2 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
						if (func_401(iVar2, 1))
						{
							if (unk_0xA66E176E5772E965(iVar2, -1, 0) == unk_0xC1A5EC5C986B98AD())
							{
								if (unk_0x2B6E67EB7FF3FD10(iVar2, "Player_Vehicle"))
								{
									if (unk_0xC2DE378329C46B2E(iVar2, "Player_Vehicle") != unk_0x85B8E90FF09F2616(unk_0x93E99A2DBCBA9CFA()) || iVar2 == iLocal_591)
									{
										if (unk_0xFBD273FDBCF0C5BD(iVar2, 0))
										{
											if (func_260())
											{
												if (!BitTest(uLocal_587, 15))
												{
													if (bVar7 || func_74(&Local_370, unk_0x504B9BB48D41C264(iVar2)))
													{
														func_166("IMPEX_NOT_PVEH", -1);
														unk_0xECDAB41968FF21A8(&uLocal_587, 15);
													}
												}
											}
										}
									}
									else if (BitTest(uLocal_587, 15))
									{
										if (iVar2 != iLocal_591)
										{
											unk_0x061B1200C95204CB(&uLocal_587, 15);
										}
									}
								}
							}
						}
						else
						{
							if (BitTest(uLocal_587, 15))
							{
								if (iVar2 != iLocal_591)
								{
									unk_0x061B1200C95204CB(&uLocal_587, 15);
								}
							}
							if (bLocal_117)
							{
								if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && func_504(1215605247, 18))
								{
									iVar2 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
									if (func_252(iVar2, 0))
									{
										if (!iLocal_115)
										{
											func_174(1);
											iLocal_115 = 1;
										}
										bLocal_101 = true;
									}
								}
								else if (iLocal_115)
								{
									func_174(0);
									iLocal_115 = 0;
									bLocal_101 = false;
								}
							}
						}
						if (func_504(1215605247, 18))
						{
							if (func_260())
							{
								if (func_401(iVar2, 1))
								{
									if (unk_0xFBD273FDBCF0C5BD(iVar2, 0))
									{
										if (!BitTest(uLocal_340, 10))
										{
											func_166("IMPEX_NOT_PVEH", -1);
											unk_0xECDAB41968FF21A8(&uLocal_340, 10);
										}
									}
								}
								else if (func_74(&Local_370, unk_0x504B9BB48D41C264(iVar2)))
								{
									if (unk_0x521A50EC08B4CCFF(iVar2, 0))
									{
										if (!BitTest(uLocal_340, 12))
										{
											func_166("IMPEX_NOT_CREW", -1);
											unk_0xECDAB41968FF21A8(&uLocal_340, 12);
										}
									}
								}
								else if (!BitTest(uLocal_340, 9))
								{
									if (unk_0xA66E176E5772E965(iVar2, -1, 0) == unk_0xC1A5EC5C986B98AD())
									{
										func_166("IMPEX_NOT_NEED", -1);
										unk_0xECDAB41968FF21A8(&uLocal_340, 9);
									}
								}
							}
						}
						else
						{
							if (BitTest(uLocal_340, 9))
							{
								unk_0x061B1200C95204CB(&uLocal_340, 9);
							}
							if (BitTest(uLocal_340, 10))
							{
								unk_0x061B1200C95204CB(&uLocal_340, 10);
							}
							if (BitTest(uLocal_340, 12))
							{
								unk_0x061B1200C95204CB(&uLocal_340, 12);
							}
							if (BitTest(uLocal_587, 12))
							{
								if (func_260())
								{
									func_166("IMPEX_NO_MORE", -1);
									unk_0x061B1200C95204CB(&uLocal_587, 12);
									func_117();
								}
							}
						}
					}
				}
				else
				{
					func_485();
					if (bLocal_111)
					{
						bLocal_111 = false;
					}
					if (iLocal_116)
					{
						iLocal_116 = 0;
					}
				}
				break;
			
			case 1:
				if (func_14(unk_0x93E99A2DBCBA9CFA(), 1, 1))
				{
					if (!func_167(unk_0xF2CFBB1105511E1A(unk_0x93E99A2DBCBA9CFA()), 1215605247, &uLocal_343, 0, 500, 1, 0))
					{
						Local_458[unk_0xD378D2332270959A() /*4*/].f_1 = 2;
					}
				}
				else
				{
					unk_0x061B1200C95204CB(&uLocal_587, 4);
					unk_0x061B1200C95204CB(&uLocal_587, 6);
					Local_458[unk_0xD378D2332270959A() /*4*/].f_1 = 0;
				}
				break;
			
			case 2:
				Local_458[unk_0xD378D2332270959A() /*4*/].f_1 = 3;
				break;
			
			case 3:
				if (unk_0x35DF833D93BCC488())
				{
					func_482(17, 1, -1);
					if (BitTest(uLocal_587, 4))
					{
						unk_0xECDAB41968FF21A8(&(Local_458[unk_0xD378D2332270959A() /*4*/].f_2), true);
						func_481();
					}
					else
					{
						func_479();
					}
					if (bLocal_100)
					{
						if (BitTest(uLocal_587, 6))
						{
							Local_85.f_2 = -2004889829;
						}
						else
						{
							Local_85.f_2 = 1559364338;
						}
						Local_85.f_3 = Local_458[unk_0xD378D2332270959A() /*4*/];
						Local_85.f_10 = iLocal_348[0];
						Local_85.f_11 = iLocal_348[1];
						Local_85.f_12 = iLocal_348[2];
						Local_85.f_13 = iLocal_348[3];
						if (!BitTest(uLocal_587, 6))
						{
						}
					}
					unk_0x061B1200C95204CB(&uLocal_587, 6);
					func_478(4, iLocal_323);
					func_462(&iLocal_323, 1);
					if (iLocal_323 > 0)
					{
						if (func_461())
						{
							func_450(941287179, iLocal_323, &iVar12, 0, 0, 0);
							Global_4535172[iVar12 /*85*/].f_3 = iLocal_356;
						}
						else
						{
							unk_0xC2531A4C46B7D49C(iLocal_323, iLocal_356);
						}
					}
					if (iLocal_320 > 0)
					{
						func_449("IMPEX_PASS", iLocal_323, 7000, 0);
					}
					else
					{
						func_449("IMPEX_PASS", iLocal_323, 7000, 0);
					}
					func_414(2, "XPT_IMPEXP", -1636175450, -1930707410, iLocal_324, 1, -1, 0);
					func_413(29);
					func_494(unk_0x93E99A2DBCBA9CFA(), 1, 0, 0);
					Local_458[unk_0xD378D2332270959A() /*4*/].f_1 = 0;
					Local_458[unk_0xD378D2332270959A() /*4*/] = -1;
					unk_0x061B1200C95204CB(&uLocal_587, 4);
					iLocal_122 = 1;
					func_410(-78295735, 12, 0);
				}
				break;
		}
	}
	else
	{
		if (!func_387(unk_0x93E99A2DBCBA9CFA(), 1))
		{
			if (!bLocal_117)
			{
				if (iLocal_115)
				{
					func_174(0);
					iLocal_115 = 0;
				}
			}
			else if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && func_504(1215605247, 18))
			{
				iVar2 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				if (func_252(iVar2, 0))
				{
					if (!iLocal_115)
					{
						func_174(1);
						iLocal_115 = 1;
					}
					bLocal_101 = true;
				}
			}
			else if (iLocal_115)
			{
				func_174(0);
				iLocal_115 = 0;
				bLocal_101 = false;
			}
		}
		if (bLocal_104)
		{
			bLocal_104 = false;
		}
		if (bLocal_105)
		{
			bLocal_105 = false;
		}
		if (bLocal_107)
		{
			bLocal_107 = false;
		}
		if (bLocal_108)
		{
			bLocal_108 = false;
		}
	}
}

void func_410(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_412(iParam1, iParam2))
	{
		iVar0 = func_411();
		Global_2694418[iVar0] = iParam1;
		Global_2694429[iVar0] = iParam0;
	}
}

int func_411()
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

int func_412(int iParam0, var uParam1)
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

void func_413(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9036)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_516() /*5568*/].f_681.f_4242[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

var func_414(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_415(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_415(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_416(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_416(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_441();
	if (func_440(uParam2))
	{
	}
	if (func_439())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_437(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_436(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_434(0, &iVar1);
					break;
				
				case 3:
					func_434(1, &iVar1);
					break;
				
				case 1:
					func_431(&iVar1);
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
			func_489(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_426((func_430(unk_0x93E99A2DBCBA9CFA()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x140AEC0C03C45A46(iVar1, iParam8, iParam9);
				if (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_2 != -1)
				{
					func_489(1166, iVar1, -1);
				}
				func_421(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_417((func_419(unk_0x93E99A2DBCBA9CFA()) + iVar1));
			}
			else
			{
				func_417((func_419(unk_0x93E99A2DBCBA9CFA()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_417(int iParam0)
{
	if (func_439())
	{
		Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_5 = iParam0;
		func_418(joaat("mpply_globalxp"), iParam0);
	}
}

void func_418(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, uParam1, 1);
	}
}

int func_419(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_14(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			{
				return func_420(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_5;
			}
		}
		else
		{
			return func_420(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_420(int iParam0)
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

void func_421(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_199(unk_0x93E99A2DBCBA9CFA()) };
	if (unk_0xE52BCF7D5014E06E())
	{
		if (unk_0x7DD2CE58D33238D9(&Var0))
		{
			iVar13 = func_424(func_425(&Var0));
			if (iVar13 == 0)
			{
				func_423(&Global_1665493, iParam0);
				func_422(joaat("mpply_crew_local_xp_0"), Global_1665493);
			}
			else if (iVar13 == 1)
			{
				func_423(&Global_1665494, iParam0);
				func_422(joaat("mpply_crew_local_xp_1"), Global_1665494);
			}
			else if (iVar13 == 2)
			{
				func_423(&Global_1665495, iParam0);
				func_422(joaat("mpply_crew_local_xp_2"), Global_1665495);
			}
			else if (iVar13 == 3)
			{
				func_423(&Global_1665496, iParam0);
				func_422(joaat("mpply_crew_local_xp_3"), Global_1665496);
			}
			else if (iVar13 == 4)
			{
				func_423(&Global_1665497, iParam0);
				func_422(joaat("mpply_crew_local_xp_4"), Global_1665497);
			}
		}
	}
}

void func_422(int iParam0, int iParam1)
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
			Global_1665488 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1665490 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1665490 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1665491 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1665492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1665493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1665494 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1665495 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1665496 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1665497 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1665498 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1665499 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1665500 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1665501 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1665502 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1665503 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1665504 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_423(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_424(int iParam0)
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

int func_425(var uParam0)
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

void func_426(int iParam0, int iParam1, int iParam2)
{
	if (func_439())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10070 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1665638[func_81(-1)])
				{
					unk_0x140AEC0C03C45A46(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1665638[func_81(-1)])
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
		if (func_245(unk_0x93E99A2DBCBA9CFA()))
		{
			Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_1 = iParam0;
			Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_6 = func_428(iParam0, 1);
		}
		func_427(640, iParam0, -1, 1);
		func_145(641, func_428(iParam0, 1), -1, 1, 0);
		Global_1665638[func_81(-1)] = iParam0;
		func_410(-1109644434, 7, 0);
	}
}

void func_427(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2805027[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_81(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_81(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_81(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_81(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_81(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_81(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_81(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_81(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_81(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_81(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_81(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_81(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_81(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_81(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_81(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_81(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_81(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_81(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_81(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_81(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_81(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_81(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_81(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_81(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851323[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851323[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851323[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851323[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851502[func_81(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_81(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_81(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_81(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_81(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_81(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_81(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_81(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851411[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851411[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851411[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851411[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851411[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851505[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851505[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851505[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851505[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851505[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851521[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851521[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851521[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851521[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851521[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851411[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851323[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851537[func_81(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851546[func_81(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851540[func_81(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851549[func_81(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851543[func_81(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851552[func_81(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851555[func_81(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851411[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851323[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851411[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851323[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851411[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851323[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851411[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851323[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851411[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851323[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851411[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851323[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851411[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851323[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851411[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851323[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851411[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851323[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851411[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851323[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851411[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851323[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851411[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851323[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851323[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851323[18 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851323[19 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851323[20 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851558[func_81(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851561[func_81(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851564[func_81(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851567[func_81(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851570[func_81(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851573[func_81(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851576[func_81(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851579[func_81(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851582[func_81(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851585[func_81(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851588[func_81(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851591[func_81(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851594[func_81(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851597[func_81(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851323[21 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851411[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851323[22 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851411[24 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851323[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851323[24 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851323[25 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851411[27 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851323[26 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851411[28 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851323[27 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_428(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_429(iParam0, 0);
}

int func_429(int iParam0, int iParam1)
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

int func_430(int iParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			{
				return Global_1665638[func_81(-1)];
			}
			else if (func_245(iParam0))
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_81(-1)];
	}
	return 0;
}

void func_431(int iParam0)
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
				if (unk_0x4292F1DE8BA2D22E(iVar5) == iVar1 || func_209(unk_0x4292F1DE8BA2D22E(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != unk_0x93E99A2DBCBA9CFA())
					{
						if (func_433(unk_0x93E99A2DBCBA9CFA(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_432(*iParam0, 100) * (10f * Global_262145.f_4228)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_432(*iParam0, 100) * (20f * Global_262145.f_4221)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_432(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_433(int iParam0, int iParam1)
{
	if (unk_0xE52BCF7D5014E06E())
	{
		Global_2764201 = { func_199(iParam0) };
		Global_2764214 = { func_199(iParam1) };
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

void func_434(bool bParam0, int iParam1)
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
				if (func_14(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x93E99A2DBCBA9CFA())
					{
						iVar1++;
						if (func_433(unk_0x93E99A2DBCBA9CFA(), iVar4))
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
			if (func_14(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x93E99A2DBCBA9CFA())
				{
					if (func_435(unk_0x93E99A2DBCBA9CFA(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_433(unk_0x93E99A2DBCBA9CFA(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_432(*iParam1, 100) * (10f * Global_262145.f_4228)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_432(*iParam1, 100) * (20f * Global_262145.f_4221)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_435(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_28(iParam0), func_28(iParam1));
	return 0f;
}

int func_436(int iParam0)
{
	int iVar0;
	
	if (unk_0xD5361E259B8F211D() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_432(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_437(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x3CDF9E9E483AADE1(iParam0) > func_430(unk_0x93E99A2DBCBA9CFA()))
		{
			iParam0 = -func_430(unk_0x93E99A2DBCBA9CFA());
		}
	}
	if (func_438(8000, 0, 0) > 0)
	{
		if (func_438(8000, 0, 0) < (iParam0 + func_430(unk_0x93E99A2DBCBA9CFA())))
		{
			iParam0 = (func_438(8000, 0, 0) - func_430(unk_0x93E99A2DBCBA9CFA()));
		}
	}
	return iParam0;
}

int func_438(int iParam0, bool bParam1, int iParam2)
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

int func_439()
{
	return 1;
}

int func_440(char* sParam0)
{
	if (unk_0xB71C73D0269747D5(uParam0))
	{
		return 1;
	}
	else if (unk_0x4310A0DB886F9FED(uParam0, "") || unk_0x4310A0DB886F9FED(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_441()
{
	int iVar0;
	
	if (func_448(unk_0x93E99A2DBCBA9CFA()) || func_447(unk_0x93E99A2DBCBA9CFA()))
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
	else if (func_445() || func_442(unk_0x93E99A2DBCBA9CFA()))
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

int func_442(int iParam0)
{
	return func_443(func_444(iParam0));
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_444(int iParam0)
{
	if (func_122(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_445()
{
	if (unk_0x1758F8A8511510AB())
	{
		return func_30();
	}
	return func_446(Global_4718592.f_113724);
}

int func_446(int iParam0)
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

bool func_447(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 2;
}

bool func_448(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 7;
}

void func_449(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x7FC9F66A5DE18E09(sParam0);
	unk_0x64C50E40AA09A6B5(iParam1);
	unk_0xAC8CD22C06543F95(iParam2, 1);
}

void func_450(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_461())
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
				func_451(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_451(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_451(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_451(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_451(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_461())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x366262A55539062C(func_26()) || unk_0xF0773A1CAE4717D9())
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
			*uParam0 = func_458(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_457(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_452(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_452(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xECDAB41968FF21A8(&(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_126.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_453(iParam0);
	}
}

void func_453(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_461())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_456(iParam0))
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
		func_454(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_454(var uParam0)
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
	func_455(&(uParam0->f_14));
	func_455(&(uParam0->f_14.f_13));
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

void func_455(var uParam0)
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

int func_456(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_457(int iParam0, var uParam1)
{
	Global_2697013 = uParam1;
	Global_2697012 = iParam0;
}

int func_458(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_461())
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
				func_459(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_459(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_8(Var0.f_1);
	if ((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_460();
		unk_0x46F55A5B9F053761(1, &Var0, 36, iVar36);
	}
}

void func_460()
{
	unk_0x3EC562D93709C894("AM_ARENA_SHP");
}

int func_461()
{
	if (unk_0xCC17806DB0C41C19())
	{
		return unk_0xF6919DB2626A28C5();
	}
	return 0;
}

void func_462(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_477())
		{
			if (func_476(0))
			{
				if (!func_472(0))
				{
					if (unk_0xE6DEE82DB0922DF0(func_471()))
					{
						if (func_470() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_470());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_468(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_467("GB_BCUT_TICK1", func_471(), iVar0, 0, 0, 1);
						}
						func_466(20);
						func_463(func_471(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_463(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_14(bParam0, 0, 1))
	{
		Var0.f_0 = -1597942809;
		Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_465(bParam0);
		func_464(&(Var0.f_6), &(Var0.f_7));
		unk_0x46F55A5B9F053761(1, &Var0, 8, func_8(bParam0));
	}
}

void func_464(var uParam0, var uParam1)
{
	*uParam0 = Global_1923597.f_9;
	*uParam1 = Global_1923597.f_10;
}

var func_465(int iParam0)
{
	return Global_1894573[iParam0 /*608*/].f_510;
}

void func_466(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	unk_0xECDAB41968FF21A8(&(Global_2793044.f_5225.f_7[iVar0]), bVar1);
}

int func_467(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0x35451336B8B420D6(func_202(iParam1, -2, 1, 0, 0));
		unk_0x76B34CBB6F5FA1BB(func_200(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x35451336B8B420D6(iParam3);
		}
		unk_0x64C50E40AA09A6B5(iParam2);
		iVar0 = unk_0xEAFC6135DF75DE92(0, 1);
		func_194(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_468(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_469(1);
	}
	else
	{
		iVar1 = func_469(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_469(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_12865;
}

int func_470()
{
	return Global_262145.f_12864;
}

bool func_471()
{
	return Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10;
}

bool func_472(bool bParam0)
{
	return func_473(unk_0x93E99A2DBCBA9CFA(), bParam0);
}

int func_473(int iParam0, bool bParam1)
{
	return func_474(iParam0, bParam1, 1);
}

int func_474(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_121())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_475(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_121() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_475(int iParam0, int iParam1)
{
	if (iParam0 != func_121())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_121())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_476(bool bParam0)
{
	return func_224(unk_0x93E99A2DBCBA9CFA(), bParam0);
}

bool func_477()
{
	return func_225(unk_0x93E99A2DBCBA9CFA());
}

void func_478(int iParam0, int iParam1)
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

void func_479()
{
	int iVar0;
	
	iVar0 = func_480(42);
	Global_2645068[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_480(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645068[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645068[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_481()
{
	int iVar0;
	
	iVar0 = func_480(43);
	Global_2645068[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_482(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_484(iParam0, func_81(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_483(iParam0, iVar0, iParam2);
}

void func_483(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2850192[iParam0 /*3*/][func_81(iParam2)];
	unk_0x3CC35ACFFC9C730E(iVar0, iParam1, 1);
}

int func_484(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2850192[iParam0 /*3*/][func_81(iParam1)];
	if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_485()
{
	if (bLocal_110)
	{
		bLocal_110 = false;
	}
	if (bLocal_105)
	{
		bLocal_105 = false;
	}
	if (bLocal_106)
	{
		bLocal_106 = false;
	}
	if (bLocal_107)
	{
		bLocal_107 = false;
	}
	if (bLocal_109)
	{
		bLocal_109 = false;
	}
	if (bLocal_108)
	{
		bLocal_108 = false;
	}
}

void func_486()
{
	Global_2359296[func_516() /*5568*/].f_681.f_35 = unk_0xD48CE560FB238316();
}

void func_487(int iParam0, bool bParam1)
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
			Global_2359296[func_516() /*5568*/].f_681.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_516() /*5568*/].f_681.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_516() /*5568*/].f_681.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_516() /*5568*/].f_681.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_516() /*5568*/].f_681.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_516() /*5568*/].f_681.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_516() /*5568*/].f_681.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_516() /*5568*/].f_681.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_516() /*5568*/].f_681.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_516() /*5568*/].f_681.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_516() /*5568*/].f_681.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_516() /*5568*/].f_681.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_516() /*5568*/].f_681.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_516() /*5568*/].f_681.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_516() /*5568*/].f_681.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_516() /*5568*/].f_681.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_516() /*5568*/].f_681.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_516() /*5568*/].f_681.f_30 = iVar0;
			break;
	}
}

void func_488()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_80(1200, -1, 0);
	if (!BitTest(iVar0, 3))
	{
		unk_0xECDAB41968FF21A8(&iVar0, 3);
		unk_0xECDAB41968FF21A8(&uLocal_588, true);
		bVar1 = true;
	}
	else if (!BitTest(iVar0, 4))
	{
		unk_0xECDAB41968FF21A8(&iVar0, 4);
		unk_0xECDAB41968FF21A8(&uLocal_588, 2);
		bVar1 = true;
	}
	else if (!BitTest(iVar0, 5))
	{
		unk_0xECDAB41968FF21A8(&iVar0, 5);
		unk_0xECDAB41968FF21A8(&uLocal_588, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		func_145(1200, iVar0, -1, 1, 0);
	}
}

void func_489(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_80(iParam0, func_81(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_490(iParam0))
	{
		func_145(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_427(iParam0, iVar0, iParam2, 1);
	}
}

int func_490(int iParam0)
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

void func_491()
{
	if (!Global_2793044.f_4625)
	{
		Global_2793044.f_4625 = 1;
	}
	func_257(&(Global_2793044.f_4626), 0, 0);
}

int func_492(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 9000;
		
		case joaat("serrano"):
			return 9254;
		
		case joaat("jackal"):
			return 9350;
		
		case joaat("schafter2"):
			return 9804;
		
		case joaat("dubsta"):
			return 10500;
		
		case joaat("f620"):
			return 12000;
		
		case joaat("schwarzer"):
			return 12000;
		
		case joaat("rocoto"):
			return 12750;
		
		case joaat("sentinel2"):
			return 14250;
		
		case joaat("felon2"):
			return 14250;
		
		case joaat("comet2"):
			return 15000;
		
		case joaat("banshee"):
			return 15750;
		
		case joaat("surano"):
			return 16500;
		
		case joaat("coquette"):
			return 19800;
		
		case joaat("carbonizzare"):
			return 20000;
		
		case joaat("exemplar"):
			return 20000;
		
		case joaat("feltzer2"):
			return 20000;
		
		case joaat("bullet"):
			return 20000;
		
		case joaat("superd"):
			return 20000;
		
		case joaat("infernus"):
			return 20000;
		
		default:
	}
	return -1;
}

int func_493()
{
	int iVar0;
	
	if (func_14(unk_0x93E99A2DBCBA9CFA(), 1, 1))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
			{
				if (!unk_0x9CFCDD9C62B56708(iVar0, -1, 0))
				{
					if (unk_0xA66E176E5772E965(iVar0, -1, 0) == unk_0xC1A5EC5C986B98AD())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_494(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x9AA69AA7F99F66A2())
		{
			unk_0xD111D6644D1D5BD5(0);
		}
	}
	if (func_502())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0xA26A9A07F761D8F8())
	{
		uVar0 = iParam2;
		unk_0xE333240A90F2FF3C(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x1758F8A8511510AB())
		{
			bVar1 = false;
		}
		if (!func_135())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0xE6DEE82DB0922DF0(iParam0) && (unk_0x48DC6A21D1CAD89C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x055111B11E6624FD(unk_0xF2CFBB1105511E1A(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0xF2CFBB1105511E1A(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0xA26A9A07F761D8F8())
				{
					unk_0x0D78C94B1B789F7C(1);
				}
				else if (bVar14 || (!func_24(unk_0x93E99A2DBCBA9CFA(), 0) && !func_239()))
				{
					unk_0x724FFAED1C56CE2B(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0xA26A9A07F761D8F8() && !bVar19)
					{
						unk_0x0D78C94B1B789F7C(0);
					}
					Global_2657589[iParam0 /*466*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_499(0, 0, 0);
					if (bVar25)
					{
						unk_0x3EF548873C55CA64();
					}
				}
				if (!func_498(uVar27) && !unk_0x24405041A9F1A910(uVar27))
				{
					if (!bVar22)
					{
						unk_0xDDE449983CE7572E(iVar27, true, 0);
					}
				}
				if (!unk_0xDC116D955A63BDBE(iVar27))
				{
					if (!bVar21)
					{
						unk_0x2718E9CC165A99F6(iVar27, false);
					}
					unk_0xAD02BD8A749B79F9(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x2718E9CC165A99F6(iVar27, false);
				}
				unk_0xD14067404D35AAE7(iVar27, true);
				unk_0xA7225B88CE344621(iParam0, 0);
				unk_0xD99DA01241D40C5D(iParam0, 0);
				if (unk_0x1951CE8AED052DA4(iVar27) && unk_0x655790C883F82CEB(iVar27))
				{
					unk_0xC7A494C74ED33C50(iVar27);
				}
				unk_0xAC2C285C82A9244C(iVar27, 1);
				if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) == 0)
				{
					func_497();
					func_496();
				}
				if (unk_0xCB964814D9915DE0())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x58A962BEF2DDE1DF())
				{
				}
				Global_2657589[iParam0 /*466*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635559.f_2681)
				{
					Global_2635559.f_2681 = 0;
				}
			}
			else
			{
				if (!func_498(iVar27) && !unk_0x24405041A9F1A910(iVar27))
				{
					if (!bVar22)
					{
						unk_0xDDE449983CE7572E(iVar27, !bVar15, 0);
					}
					if (!unk_0xDC116D955A63BDBE(iVar27))
					{
						if (!bVar21)
						{
							unk_0x2718E9CC165A99F6(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0xAD02BD8A749B79F9(iVar27, 1);
						}
					}
					if (func_495(Global_4718592.f_166301))
					{
						unk_0x2718E9CC165A99F6(iVar27, true);
					}
				}
				if (Global_1575035)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xA7225B88CE344621(iParam0, 0);
				}
				else
				{
					unk_0xA7225B88CE344621(iParam0, 1);
				}
				unk_0xD14067404D35AAE7(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x53E0F2012E168A73(iVar27) && !unk_0x3C3D6D026CF7F51B(iVar27, 0))
					{
						unk_0x35DD50D05C962B6A(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xE333240A90F2FF3C(iParam0, bParam1, iVar28);
		}
	}
}

bool func_495(int iParam0)
{
	return iParam0 == 17;
}

void func_496()
{
	struct<3> Var0;
	
	Global_2672505.f_1023 = 0;
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1030 = -1;
	Global_2672505.f_1031 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_497()
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_498(int iParam0)
{
	int iVar0;
	
	if (unk_0x3C3D6D026CF7F51B(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF5F493B789EA063E(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_499(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x055111B11E6624FD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x7DE17ACDD8BA2642(iParam1))
		{
			if (unk_0x60A06DE259634304(iParam1))
			{
				if (!unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), unk_0xB850F932D03EF34D(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_501();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x84365510DF670D46(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), true);
			}
		}
		if (func_24(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			unk_0xBD35A36DC2D7FB43(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7C5666BA9400B9BF(iParam0, iParam1);
		}
		unk_0xC05C32F03C89FD59(iParam0, iParam1);
		func_500(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_500(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD19BD90E0B76FB05(iVar0, iParam1, 1);
	}
}

void func_501()
{
	int iVar0;
	
	if (!unk_0x8253CEEA17ED481B())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x80A3F4E694565F6A(iVar0);
				iVar0++;
			}
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 2);
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), false);
		}
	}
}

int func_502()
{
	if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_503()
{
	func_117();
}

int func_504(int iParam0, int iParam1)
{
	if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), func_170(iParam0), 1) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_505(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		if (unk_0xA66E176E5772E965(iParam0, -1, 0) == unk_0xC1A5EC5C986B98AD())
		{
			if (!func_397(iParam0))
			{
				if (iParam0 != iLocal_591)
				{
					if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_506()
{
	if (Global_2672505.f_61.f_20 || Global_2672505.f_61.f_21)
	{
		return 1;
	}
	return 0;
}

void func_507(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam2;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_508(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_508(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_515(iParam1);
			break;
		
		case 1:
			iVar0 = func_514(iParam1);
			break;
		
		case 2:
			iVar0 = func_513(iParam1);
			break;
		
		case 3:
			iVar0 = func_512(iParam1);
			break;
		
		case 4:
			iVar0 = func_511(iParam1);
			break;
		
		case 5:
			iVar0 = func_510(iParam1);
			break;
		
		case 6:
			iVar0 = func_509(iParam1);
			break;
	}
	return iVar0;
}

int func_509(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("serrano"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("infernus"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("coquette"));
			break;
	}
	return iVar0;
}

int func_510(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("zion"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("comet2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("surano"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_511(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("schwarzer"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("feltzer2"));
			break;
	}
	return iVar0;
}

int func_512(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("comet2"));
			break;
	}
	return iVar0;
}

int func_513(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("feltzer2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("rocoto"));
			break;
	}
	return iVar0;
}

int func_514(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("coquette"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("dubsta"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("infernus"));
			break;
	}
	return iVar0;
}

int func_515(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("rocoto"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_516()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_517(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_518(uParam0, bParam2, 0);
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

void func_518(var uParam0, bool bParam1, bool bParam2)
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

bool func_519(var uParam0)
{
	return uParam0->f_1;
}

void func_520()
{
	Global_2359296[func_516() /*5568*/].f_681.f_36 = unk_0xD48CE560FB238316();
}

void func_521(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x058EE3447262300D();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_508(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2359296[func_516() /*5568*/].f_681.f_37 = iVar1;
}

void func_522()
{
	func_525("CELL_CLTEST1", 0);
	func_523("CELL_CLTEST1");
	func_525("CELL_CLTEST6", 0);
	func_523("CELL_CLTEST6");
}

void func_523(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xB71C73D0269747D5(&(Global_113648.f_14143[iVar0 /*104*/])))
		{
			if (unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iVar0 /*104*/]), sParam0))
			{
				if (Global_113648.f_14143[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_306();
					Global_113648.f_14143[iVar0 /*104*/].f_99[Global_20383] = 0;
					if (func_524(iVar0))
					{
					}
					else
					{
						Global_113648.f_14143[iVar0 /*104*/].f_24 = 0;
						Global_113648.f_14143[iVar0 /*104*/].f_28 = 0;
						Global_113648.f_14143[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x341B37C2C5AA5999(Global_113648.f_14143[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_524(int iParam0)
{
	if ((Global_113648.f_14143[iParam0 /*104*/].f_99[0] == 1 || Global_113648.f_14143[iParam0 /*104*/].f_99[1] == 1) || Global_113648.f_14143[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_525(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xB71C73D0269747D5(&(Global_113648.f_14143[iVar0 /*104*/])))
		{
			if (unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iVar0 /*104*/]), sParam0))
			{
				if (Global_113648.f_14143[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_113648.f_14143[iVar0 /*104*/].f_24 = 1;
				if (Global_113648.f_14143[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_113648.f_14143[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_113648.f_14053[0 /*20*/].f_17 = 0;
					}
					if (Global_113648.f_14143[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_113648.f_14053[1 /*20*/].f_17 = 0;
					}
					if (Global_113648.f_14143[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_113648.f_14053[2 /*20*/].f_17 = 0;
					}
					if (Global_113648.f_14143[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_113648.f_14053[3 /*20*/].f_17 = 0;
					}
					Global_113648.f_14143[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_113648.f_14143[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_526()
{
	if (unk_0xF0E4B64AC0B5660E())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!unk_0x35DF833D93BCC488())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (func_138(unk_0x93E99A2DBCBA9CFA(), 1, 0))
	{
		return 0;
	}
	if (func_110())
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
	if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (Global_1836367)
	{
		return 0;
	}
	if (func_264())
	{
		return 0;
	}
	if (func_263())
	{
		return 0;
	}
	if (func_537())
	{
		return 0;
	}
	if (unk_0x1758F8A8511510AB())
	{
		return 0;
	}
	if (func_527())
	{
		return 0;
	}
	if (!func_135())
	{
		return 0;
	}
	if (func_108())
	{
		return 0;
	}
	if (unk_0x359808AE8C4C629B())
	{
		return 0;
	}
	return 1;
}

bool func_527()
{
	return Global_75693;
}

bool func_528()
{
	if (Global_2359296[func_516() /*5568*/].f_681.f_35 == 0)
	{
		return 0;
	}
	return (unk_0xD48CE560FB238316() - Global_2359296[func_516() /*5568*/].f_681.f_35) < 86400;
}

bool func_529()
{
	if (Global_2359296[func_516() /*5568*/].f_681.f_36 == 0)
	{
		return 0;
	}
	return (unk_0xD48CE560FB238316() - Global_2359296[func_516() /*5568*/].f_681.f_36) < 86400;
}

bool func_530()
{
	if (!BitTest(uLocal_587, 2))
	{
		if (!func_24(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			if ((((((!unk_0x359808AE8C4C629B() && !func_138(unk_0x93E99A2DBCBA9CFA(), 1, 0)) && !func_112()) && (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))) && unk_0x35DF833D93BCC488()) && func_532(19)) && !func_531(unk_0x93E99A2DBCBA9CFA()))
			{
				unk_0xECDAB41968FF21A8(&uLocal_587, 2);
			}
		}
	}
	return BitTest(uLocal_587, 2);
}

int func_531(int iParam0)
{
	if (iParam0 != func_121())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 4);
	}
	return 0;
}

int func_532(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_534(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = func_533(unk_0x93E99A2DBCBA9CFA(), 1);
	iVar2 = func_428(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_533(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_430(iParam0);
}

int func_534(int iParam0)
{
	if (func_103())
	{
		return 1;
	}
	if (func_102())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_535(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_535(int iParam0)
{
	return func_536(123, iParam0);
}

int func_536(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2848280[iParam0 /*3*/][func_81(uParam1)];
	if (unk_0x494B367FE0CBD765(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_537()
{
	return Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_192 != 0;
}

int func_538()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 1;
		}
	}
	if (func_544())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_543())
	{
		return 1;
	}
	if (func_542(159))
	{
		if (!func_541())
		{
			return 1;
		}
	}
	if (func_542(157))
	{
		return 1;
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 1;
	}
	if (func_539() != 0)
	{
		if (unk_0x24B651D85CCE5EB4(func_539()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_539()
{
	switch (func_83())
	{
		case 0:
			return func_540();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_540()
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_541()
{
	return Global_2683862.f_698;
}

int func_542(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_543()
{
	return Global_2694524;
}

bool func_544()
{
	return Global_2683862.f_693;
}

void func_545()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_546()
{
	if (iLocal_125 != -1)
	{
		func_142(iLocal_125, 0);
	}
	func_548(&iLocal_342);
	if (BitTest(uLocal_587, 1))
	{
		func_547(0f, 0f, 0f, func_374(19), 1);
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		if (unk_0xE85391CF212DE622())
		{
			if (unk_0x44F576187FB1916E(Local_382.f_24))
			{
				unk_0x76FB1A3801008C0D(Local_382.f_24);
			}
			Local_382.f_24 = -1;
		}
	}
	func_384();
	Global_2793044.f_1748 = 0;
	Global_2793044.f_1749 = 0;
	Global_2793044.f_1751 = 0;
	Global_2793044.f_1777 = 0;
	if (BitTest(uLocal_587, 7))
	{
		func_266(6, 0);
	}
	func_406();
	if (unk_0xCE4AAA035282336C(Global_1935136))
	{
		unk_0x45533C09A6C9B409(&Global_1935136);
	}
	func_259(0);
	if (unk_0xCE4AAA035282336C(Global_1935147))
	{
		unk_0x45533C09A6C9B409(&Global_1935147);
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		if (iLocal_102)
		{
			func_175(1215605247, 0, 0);
			func_174(0);
		}
		if (iLocal_115)
		{
			func_174(0);
		}
	}
	unk_0x675D9C12C73D3DE7();
}

void func_547(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0x2AC37494BBF1DB16(uParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x4310A0DB886F9FED(&(Global_2793044.f_4063[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_31(Global_2793044.f_4063[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2793044.f_4063[iVar0 /*26*/] = 0;
					Global_2793044.f_4063[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2793044.f_4063[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2793044.f_4063[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

void func_548(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_549(*iParam0);
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

int func_549(int iParam0)
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

int func_550(struct<21> Param0)
{
	func_556(func_557(Param0.f_0), Param0);
	func_553(0, -1, 0);
	unk_0xAC5E62CB7808A363(&Local_382, 74, 0);
	unk_0x10BF12101F9D80A4(&Local_458, 129, 0);
	unk_0xF1440897111F3111(0);
	if (!func_552())
	{
		return 0;
	}
	Global_2793044.f_1751 = 0;
	Global_2793044.f_4481 = 0;
	if (unk_0xE85391CF212DE622())
	{
	}
	if (func_71(unk_0x93E99A2DBCBA9CFA(), 6))
	{
		func_266(6, 0);
	}
	func_551();
	return 1;
}

void func_551()
{
	var uVar0;
	
	uVar0 = func_80(1200, -1, 0);
	if (BitTest(uVar0, 3))
	{
		unk_0xECDAB41968FF21A8(&uLocal_588, true);
	}
	if (BitTest(uVar0, 4))
	{
		unk_0xECDAB41968FF21A8(&uLocal_588, 2);
	}
	if (BitTest(uVar0, 5))
	{
		unk_0xECDAB41968FF21A8(&uLocal_588, 3);
		unk_0xECDAB41968FF21A8(&uLocal_588, false);
	}
}

int func_552()
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
		if (func_544())
		{
			return 0;
		}
		if (func_542(157))
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

int func_553(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xA1089192E8AE61F4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_555();
			}
			else
			{
				return 0;
			}
		}
		if (!func_554(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
				{
					if (!bParam2)
					{
						func_555();
					}
					else
					{
						return 0;
					}
				}
				if (func_544())
				{
					if (!bParam2)
					{
						func_555();
					}
					else
					{
						return 0;
					}
				}
				if (func_542(157))
				{
					if (!bParam2)
					{
						func_555();
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
					func_555();
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
				func_555();
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
			func_555();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_554(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_555()
{
	unk_0x675D9C12C73D3DE7();
}

void func_556(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		func_555();
	}
	unk_0xCF50389093DECE87(uParam0, 0, Param1.f_16);
}

int func_557(int iParam0)
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
	switch (func_558(func_559(iParam0, 1)))
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

int func_558(int iParam0)
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

int func_559(int iParam0, bool bParam1)
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

