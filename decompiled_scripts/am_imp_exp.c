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
	struct<14> Local_83 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = 0;
	bool bLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 16;
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
	int iLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	int iLocal_298[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_309 = 0;
	bool bLocal_310 = 0;
	bool bLocal_311 = 0;
	bool bLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	float fLocal_319 = 0f;
	float fLocal_320 = 0f;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
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
	int iLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346[4] = { 0, 0, 0, 0 };
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_368 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_380 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	struct<4> Local_456[32];
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	int iLocal_587 = 0;
	char* sLocal_588 = NULL;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
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
	iLocal_114 = 1;
	bLocal_116 = true;
	bLocal_118 = true;
	iLocal_123 = -1;
	bLocal_311 = true;
	bLocal_312 = true;
	iLocal_315 = -1;
	iLocal_316 = -1;
	iLocal_340 = -1;
	iLocal_343 = -1;
	if (!func_546(ScriptParam_0))
	{
		func_542();
	}
	iLocal_355[0] = unk_0x12FECC81BE9413BA(unk_0xB3AAEF02E08EA464(-891.3f, 807.9f, 188.1f));
	iLocal_355[1] = unk_0x12FECC81BE9413BA(unk_0xB3AAEF02E08EA464(-276.5f, -206.3f, 38.4f));
	iLocal_355[2] = unk_0x12FECC81BE9413BA(unk_0xB3AAEF02E08EA464(-1485.5f, -644.5f, 30.1f));
	iLocal_355[3] = unk_0x12FECC81BE9413BA(unk_0xB3AAEF02E08EA464(-1746.3f, -939.5f, 7.7f));
	iLocal_355[4] = unk_0x12FECC81BE9413BA(unk_0xB3AAEF02E08EA464(-2106.4f, -345.3f, 13f));
	iLocal_355[5] = unk_0x12FECC81BE9413BA(unk_0xB3AAEF02E08EA464(-1520f, 74.4f, 61.3f));
	iLocal_355[6] = unk_0x12FECC81BE9413BA(unk_0xB3AAEF02E08EA464(-1333f, -286f, 40.3f));
	iLocal_355[7] = unk_0x12FECC81BE9413BA(unk_0xB3AAEF02E08EA464(-1178.1f, 54.8f, 53.9f));
	iLocal_355[8] = unk_0x12FECC81BE9413BA(unk_0xB3AAEF02E08EA464(-1298.7f, -359.4f, 36.7f));
	iLocal_355[9] = unk_0x12FECC81BE9413BA(unk_0xB3AAEF02E08EA464(-355.2f, 147.5f, 75.8f));
	iLocal_355[10] = unk_0x12FECC81BE9413BA(unk_0xB3AAEF02E08EA464(-982.1f, -1064.7f, 2.2f));
	iLocal_355[11] = unk_0x12FECC81BE9413BA(unk_0xB3AAEF02E08EA464(-1313.1f, -1560.2f, 4.3f));
	while (true)
	{
		func_541();
		bLocal_99 = false;
		bLocal_101 = false;
		bLocal_104 = false;
		bLocal_107 = false;
		bLocal_109 = false;
		Global_2815059.f_1750 = 0;
		if (func_534() || func_533())
		{
			func_542();
		}
		if (func_526())
		{
			if (!func_525())
			{
				if (!func_524())
				{
					if (func_522())
					{
						if (!iLocal_97)
						{
							func_518();
							func_517(&Local_368, 5);
							func_516();
							bLocal_118 = true;
							bLocal_119 = true;
							if (BitTest(uLocal_585, 1))
							{
								unk_0xB0550BC91B0159D6(&uLocal_585, true);
							}
							iLocal_97 = 1;
							iLocal_343 = -999;
						}
					}
				}
			}
			else if (!func_524())
			{
				if (!bLocal_119)
				{
					if (!func_515(&uLocal_296))
					{
						func_514(&uLocal_296, 0, 0);
					}
					else if (func_513(&uLocal_296, 100, 0))
					{
						if (!BitTest(uLocal_585, 1))
						{
							if (func_522())
							{
								func_503(&Local_368, 5, Global_2359296[func_512() /*5567*/].f_681.f_37);
								bLocal_118 = false;
								bLocal_119 = true;
								iLocal_97 = 1;
								iLocal_343 = -999;
							}
						}
					}
				}
			}
			func_405();
			func_401();
			func_385();
			func_378();
			func_268();
			func_175();
		}
		func_171();
		func_141();
		func_76();
		func_73();
		if (!iLocal_121)
		{
			if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), 471.9266f, -1308.596f, 28.2359f) < 1000f)
			{
				unk_0xE87A5B1B96B0EC6F(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), 1);
				unk_0xE87A5B1B96B0EC6F(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0xE87A5B1B96B0EC6F(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), 1);
				unk_0xE87A5B1B96B0EC6F(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0xE87A5B1B96B0EC6F(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), 1);
				unk_0xE87A5B1B96B0EC6F(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvtext"), 1);
				iLocal_121 = 1;
			}
		}
		if (unk_0x54E30A65F4FA4962())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_116)
	{
	}
	else
	{
		if (iLocal_117 >= Local_456.f_0)
		{
			iLocal_117 = 0;
			unk_0xB0550BC91B0159D6(&uLocal_585, 10);
			unk_0xB0550BC91B0159D6(&(Local_380.f_23), 7);
			unk_0xB0550BC91B0159D6(&uLocal_585, 11);
			unk_0xB0550BC91B0159D6(&uLocal_585, 23);
			if (BitTest(Local_380.f_23, 0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_380.f_23), true);
				unk_0xB0550BC91B0159D6(&(Local_380.f_23), 3);
			}
		}
		iVar0 = iLocal_117;
		if (Local_456[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_380[iVar1] == -1)
				{
					if (!Local_380.f_6[iVar1])
					{
						if (Local_380[iVar1] == Local_456[iVar0 /*4*/])
						{
							if (Local_380[iVar1] == Local_380.f_28)
							{
								func_72();
							}
							Local_380.f_33 = 0;
							Local_380.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (BitTest(Local_380.f_23, 0))
		{
			if (!BitTest(Local_380.f_23, 7))
			{
				if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
				{
					if (Local_456[iVar0 /*4*/].f_3 > 0 || func_71(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar0)), 6))
					{
						if (Local_456[iVar0 /*4*/].f_3 < 3)
						{
							unk_0xCED9E32812D6C7C7(&(Local_380.f_23), 7);
						}
					}
				}
			}
		}
		if (BitTest(Local_380.f_23, 0))
		{
			if (!BitTest(uLocal_585, 11))
			{
				if (BitTest(Local_456[iVar0 /*4*/].f_2, 2))
				{
					unk_0xCED9E32812D6C7C7(&uLocal_585, 11);
				}
			}
			if (!BitTest(uLocal_585, 21))
			{
				if (!BitTest(uLocal_585, 3))
				{
					if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
					{
						if (BitTest(Local_456[iVar0 /*4*/].f_2, 3))
						{
							unk_0xCED9E32812D6C7C7(&uLocal_585, 21);
						}
					}
				}
			}
		}
		iLocal_117++;
		if (iLocal_117 >= Local_456.f_0)
		{
			unk_0xCED9E32812D6C7C7(&uLocal_585, 10);
			if (BitTest(Local_380.f_23, 7) || BitTest(uLocal_585, 23))
			{
				unk_0xB0550BC91B0159D6(&(Local_380.f_23), true);
			}
			if (BitTest(uLocal_585, 11))
			{
				unk_0xCED9E32812D6C7C7(&(Local_380.f_23), 3);
			}
			if (BitTest(uLocal_585, 21))
			{
				unk_0xCED9E32812D6C7C7(&(Local_380.f_23), 6);
			}
		}
	}
	if (func_70())
	{
		if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_380.f_29) > 180000)
		{
			func_69();
		}
	}
	switch (Local_380.f_20)
	{
		case 0:
			func_66();
			Local_380.f_32++;
			Local_380.f_20 = 1;
			func_65();
			break;
		
		case 1:
			if (func_64())
			{
				uLocal_339 = unk_0x0A89FDFA763DCAED();
				Local_380.f_20 = 2;
			}
			else if (Local_380.f_28 == -1)
			{
				func_72();
			}
			break;
		
		case 2:
			if (!Local_380.f_17 && unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uLocal_339) > Global_262145.f_11941)
			{
				Local_380.f_20 = 0;
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
	
	switch (Local_380.f_26)
	{
		case 0:
			if (!BitTest(Local_380.f_23, 0))
			{
				if (bLocal_311)
				{
					if (bLocal_312)
					{
						if (Global_2815059.f_1723)
						{
							unk_0xB0550BC91B0159D6(&(Local_380.f_23), 2);
							unk_0xB0550BC91B0159D6(&(Local_380.f_23), 6);
							unk_0xB0550BC91B0159D6(&uLocal_585, 21);
							unk_0xC1F83F3B5F8E7D3B(0);
							Local_380.f_34 = 0;
							unk_0xCED9E32812D6C7C7(&(Local_380.f_23), false);
							Global_2815059.f_1723 = 0;
						}
					}
					else if (Local_380.f_27 == -15)
					{
						unk_0xB0550BC91B0159D6(&(Local_380.f_23), 2);
						unk_0xB0550BC91B0159D6(&(Local_380.f_23), 6);
						unk_0xB0550BC91B0159D6(&uLocal_585, 21);
						unk_0xC1F83F3B5F8E7D3B(0);
						Local_380.f_34 = 0;
						iVar4 = func_63();
						func_49(&(Local_380.f_27), func_62(iVar4), func_61(iVar4), func_60(iVar4), func_59(iVar4), func_58(iVar4), func_56(iVar4));
						func_48(&(Local_380.f_27), 0, unk_0x5853B15F78E1A265(0, 60), unk_0x5853B15F78E1A265(0, 8), 1, 0, 0);
					}
					else if (!func_47(6))
					{
						if (!func_515(&uLocal_328))
						{
							func_514(&uLocal_328, 0, 0);
						}
						else if (func_513(&uLocal_328, 10000, 0))
						{
							func_46(&uLocal_328);
							if (func_42(Local_380.f_27))
							{
								unk_0xCED9E32812D6C7C7(&(Local_380.f_23), false);
							}
						}
					}
				}
			}
			else if (Local_380.f_67 == 0)
			{
				if (func_36(1, 1, 1))
				{
					if (unk_0xD0C6888814987992(Local_380.f_24))
					{
						unk_0x6E248B3E8CD8823C(Local_380.f_24);
					}
					Local_380.f_24 = -1;
					iLocal_314 = unk_0x5853B15F78E1A265(0, 10);
					iVar5 = func_33();
					if (iVar5 != 0)
					{
						Local_380.f_67 = iVar5;
						unk_0xC1F83F3B5F8E7D3B(1);
						Local_380.f_34 = 1;
					}
				}
			}
			else if (unk_0x993E56B8150C834F(1))
			{
				if (func_32(Local_380.f_67))
				{
					if (!unk_0xCCDCD6672DAE6835(Local_380.f_22))
					{
						if (func_21(&Var0, &uVar3))
						{
							if (func_18(&(Local_380.f_22), Local_380.f_67, Var0, uVar3, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0))
							{
								if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
								{
									if (unk_0xF2549FF74D64B720(unk_0xA5677134B9672173(Local_380.f_22), "MPBitset"))
									{
										iVar6 = unk_0xC3B76795ECBDEF41(unk_0xA5677134B9672173(Local_380.f_22), "MPBitset");
									}
									unk_0xCED9E32812D6C7C7(&iVar6, 5);
									unk_0x05B874E9ABFF72B4(unk_0xA5677134B9672173(Local_380.f_22), "MPBitset", iVar6);
								}
								if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
								{
									if (unk_0xF2549FF74D64B720(unk_0xA5677134B9672173(Local_380.f_22), "MPBitset"))
									{
										iVar7 = unk_0xC3B76795ECBDEF41(unk_0xA5677134B9672173(Local_380.f_22), "MPBitset");
									}
									unk_0xCED9E32812D6C7C7(&iVar7, 10);
									unk_0x05B874E9ABFF72B4(unk_0xA5677134B9672173(Local_380.f_22), "MPBitset", iVar7);
								}
								if (unk_0x6BD06F4780EAC5DD("Not_Allow_As_Saved_Veh", 3))
								{
									unk_0x05B874E9ABFF72B4(unk_0xA5677134B9672173(Local_380.f_22), "Not_Allow_As_Saved_Veh", 1);
								}
								unk_0xCED9E32812D6C7C7(&(Local_380.f_23), false);
								unk_0xB0550BC91B0159D6(&(Local_380.f_23), 2);
								unk_0xB0550BC91B0159D6(&(Local_380.f_23), 4);
								unk_0xB0550BC91B0159D6(&(Local_380.f_23), 3);
								unk_0xB0550BC91B0159D6(&uLocal_585, 11);
								unk_0xB0550BC91B0159D6(&(Local_380.f_23), 6);
								unk_0xCED9E32812D6C7C7(&uLocal_585, 23);
								unk_0xF1A23B343DFEDFD0(Local_380.f_67);
								Local_380.f_26 = 1;
								func_46(&(Local_380.f_30));
								func_514(&(Local_380.f_30), 0, 0);
								unk_0x3B2646B62E7BBE11(unk_0xA5677134B9672173(Local_380.f_22), 7);
								unk_0x0BAE77E76EBD33D2(unk_0xA5677134B9672173(Local_380.f_22), 1);
								unk_0x7CD708DEB04F8474(Local_380.f_67, 1);
								unk_0x3673EB5A3C81BA8A(Local_380.f_22, 1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!BitTest(Local_380.f_23, 2))
			{
				if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
				{
					if (!unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(Local_380.f_22), 0))
					{
						Local_83.f_2 = -1337074122;
						func_16(Local_83, func_17(1));
						unk_0xCED9E32812D6C7C7(&(Local_380.f_23), 2);
					}
				}
			}
			if (BitTest(uLocal_585, 3) || (BitTest(uLocal_585, 10) && BitTest(Local_380.f_23, 1)))
			{
				if (!BitTest(uLocal_585, 3))
				{
					if (!BitTest(Local_380.f_23, 2))
					{
						if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
						{
							if (!unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(Local_380.f_22), 0))
							{
								Local_83.f_2 = -1337074122;
								func_16(Local_83, func_17(1));
								unk_0xCED9E32812D6C7C7(&(Local_380.f_23), 2);
							}
						}
					}
				}
				Local_380.f_26 = 2;
			}
			if (func_15(unk_0xA5677134B9672173(Local_380.f_22)))
			{
				Local_380.f_26 = 2;
				Local_83.f_2 = 1837020641;
				func_16(Local_83, func_17(1));
			}
			if (!BitTest(Local_380.f_23, 4))
			{
				if (func_513(&(Local_380.f_30), 360000, 0))
				{
					unk_0xCED9E32812D6C7C7(&(Local_380.f_23), 4);
					func_46(&(Local_380.f_30));
					func_514(&(Local_380.f_30), 0, 0);
				}
			}
			else if (BitTest(uLocal_585, 10))
			{
				if (!BitTest(Local_380.f_23, 3))
				{
					if (func_515(&(Local_380.f_30)))
					{
						if (func_513(&(Local_380.f_30), 120000, 0))
						{
							Local_380.f_26 = 2;
							Local_83.f_2 = 1837020641;
							func_16(Local_83, func_17(1));
						}
					}
					else
					{
						func_514(&(Local_380.f_30), 0, 0);
					}
				}
				else if (func_515(&(Local_380.f_30)))
				{
					func_46(&(Local_380.f_30));
				}
			}
			if (BitTest(Local_380.f_23, 6))
			{
				if (!BitTest(uLocal_585, 3))
				{
					if (Local_380.f_26 == 1)
					{
						Local_380.f_26 = 2;
					}
				}
			}
			if (func_11(6))
			{
				if (Local_380.f_26 == 1)
				{
					Local_380.f_26 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
			{
				if (func_10(Local_380.f_22))
				{
					func_9(&(Local_380.f_22));
					Local_380.f_26 = 3;
				}
			}
			else
			{
				Local_380.f_26 = 3;
			}
			break;
		
		case 3:
			if (BitTest(uLocal_585, 10))
			{
				if (BitTest(Local_380.f_23, 1))
				{
					Local_380.f_26 = 0;
					unk_0xB0550BC91B0159D6(&(Local_380.f_23), false);
					Local_380.f_27 = -15;
					if (Local_380.f_67 != 0)
					{
						unk_0x7CD708DEB04F8474(Local_380.f_67, 0);
					}
					Local_380.f_67 = 0;
					if (bLocal_312)
					{
						func_7(func_8(unk_0xCBE03D1B06A08744("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()
{
	if (unk_0x54E30A65F4FA4962())
	{
		switch (Local_380.f_69)
		{
			case 0:
				if (BitTest(Local_380.f_23, 8))
				{
					if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
					{
						if (!func_6())
						{
							if (unk_0x1F723890B0FBFFEA(unk_0xA5677134B9672173(Local_380.f_22)))
							{
								if (!unk_0xD132EDDA78FF4A51(unk_0xA5677134B9672173(Local_380.f_22), 1204.053f, -3102.311f, 1.770506f, 1204.265f, -3121.974f, 17.92032f, 31.625f, 0, 1, 0))
								{
									if (!BitTest(Local_380.f_23, 9))
									{
										unk_0xCED9E32812D6C7C7(&(Local_380.f_23), 9);
									}
								}
							}
						}
						else if (BitTest(Local_380.f_23, 9))
						{
							unk_0xB0550BC91B0159D6(&(Local_380.f_23), 9);
						}
					}
				}
				break;
			}
	}
	if (BitTest(Local_380.f_23, 9))
	{
		if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
		{
			if (func_4(Local_380.f_22))
			{
				if (unk_0x07B2F8356DC13CF4(Local_380.f_22))
				{
					unk_0x959E1626CBC7D38A(unk_0xA5677134B9672173(Local_380.f_22), true, 0);
					unk_0x3B2646B62E7BBE11(unk_0xA5677134B9672173(Local_380.f_22), 1);
					unk_0x5C65DDDC219B3AA5(unk_0xA5677134B9672173(Local_380.f_22), false);
					unk_0x28271FBFA024090B(unk_0xA5677134B9672173(Local_380.f_22), 1, 1);
					unk_0xB0550BC91B0159D6(&(Local_380.f_23), 9);
				}
				else
				{
					unk_0xC31EECA11005273C(Local_380.f_22);
				}
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(Local_380.f_23), 9);
			}
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Local_380.f_23), 9);
		}
	}
}

int func_4(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return !func_5(unk_0xA5677134B9672173(uParam0));
	}
	return 0;
}

int func_5(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x55A0C756C4A8220C(iParam0, 0))
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
	
	if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
	{
		if (func_4(Local_380.f_22))
		{
			iVar0 = unk_0xAB793EA186AB8DAA(unk_0xA5677134B9672173(Local_380.f_22), -1, 0);
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
	
	Var0.f_0 = 2144233578;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 3, iParam0);
	}
}

int func_8(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, bParam0);
	}
	return uVar0;
}

void func_9(var uParam0)
{
	var uVar0;
	
	if (unk_0x90F6E2F6488B98BA(*uParam0))
	{
		uVar0 = unk_0xF2D8DACFAEBD9629(*uParam0);
		unk_0xEC548B5E95E61DF6(&uVar0);
	}
}

int func_10(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		unk_0xC31EECA11005273C(uParam0);
		return unk_0x07B2F8356DC13CF4(uParam0);
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
			if (Global_262145.f_7119)
			{
				return 0;
			}
			if (func_71(unk_0x9E2D6C50374FCFA9(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7120)
			{
				return 0;
			}
			if (func_71(unk_0x9E2D6C50374FCFA9(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7121)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7122)
			{
				return 0;
			}
			if (func_71(unk_0x9E2D6C50374FCFA9(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x9E2D6C50374FCFA9(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x9E2D6C50374FCFA9(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x9E2D6C50374FCFA9(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 1))
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
			if (func_71(unk_0x9E2D6C50374FCFA9(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x9E2D6C50374FCFA9(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x9E2D6C50374FCFA9(), 7))
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
		if (func_14(unk_0xA1087A6350CD9244(iVar0), 0, 1))
		{
			if (BitTest(Global_2689235[iVar0 /*453*/].f_216, bParam0))
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

int func_15(int iParam0)
{
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (unk_0x6BD06F4780EAC5DD("bombdec1", 3))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (unk_0x6BD06F4780EAC5DD("bombdec", 3))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (unk_0x6BD06F4780EAC5DD("bombowner", 3))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_16(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -1529596656;
	Param0.f_1 = unk_0x9E2D6C50374FCFA9();
	if (!iParam14 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Param0, 14, iParam14);
	}
}

int func_17(int iParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar1)))
		{
			bVar2 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar1));
			if (func_14(bVar2, 0, 0))
			{
				if (bVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, bVar2);
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
	
	if (!unk_0x61ADF697DF551DA6(iParam1))
	{
		return 0;
	}
	if (!unk_0x993E56B8150C834F(1))
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
		unk_0x02B222EADC9DC566(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xBA715A7BEBA5A1F9(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0xE5965CDF24F93A9F(iVar1))
	{
		*uParam0 = unk_0xA08CC064DAC564A5(iVar1);
		Global_2815059.f_6679 = iVar1;
		if (unk_0xCCDCD6672DAE6835(*uParam0))
		{
			if (bParam15)
			{
				unk_0x229DD509EDB2FBD4(iVar1, 1);
			}
			unk_0x398C962F550CF3B4(iVar1, iParam10);
			if (unk_0xD64C90C3F536F963(iVar1))
			{
				if (bParam8)
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 1);
				}
				else
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xAEBA172874A3DEFC(*uParam0, unk_0x9E2D6C50374FCFA9(), 1);
				}
			}
			unk_0x4FA753674D81BF2E(iVar1, iParam9);
			unk_0x41EC6688527C1C31(iVar1, 1);
			if (bParam12)
			{
				unk_0xA4FCB26551D216B8(iVar1);
				unk_0x59492C1B3DB11BDE(iVar1, 5, 5, 1f);
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
	
	if (func_20(unk_0x9E2D6C50374FCFA9(), Param0, iParam4) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam5 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam4) && unk_0x2A488C176D52CCA5(Global_2667225.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = uParam3;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam4;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam5;
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
			if (Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x48053974ED6F63CE((Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
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
	switch (iLocal_314)
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
		if (iLocal_314 < 10)
		{
			if (Local_380.f_24 == -1)
			{
				Local_380.f_24 = unk_0xD3077B6D45CD100E(Var0, Var3);
			}
			else if (unk_0xD0C6888814987992(Local_380.f_24))
			{
				if (unk_0x1C2607B54DDC8B70(Local_380.f_24))
				{
					if (!unk_0x39D52F5CDFC288E7(Local_380.f_24))
					{
						if (!func_22(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							unk_0x6E248B3E8CD8823C(Local_380.f_24);
							Local_380.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_314++;
							unk_0x6E248B3E8CD8823C(Local_380.f_24);
							Local_380.f_24 = -1;
						}
					}
					else
					{
						iLocal_314++;
						unk_0x6E248B3E8CD8823C(Local_380.f_24);
						Local_380.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_314 = 0;
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
		if (func_14(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xA829C9A2767AC8EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x987A5F1E1A67E3C0(func_27(unk_0x9E2D6C50374FCFA9()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x0318E2EE6FB4563F(Param0, fParam3))
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
			if (!func_24(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x9E2D6C50374FCFA9()))
				{
					if ((func_23(iVar1) || !bParam10) && !Global_2689235[iVar1 /*453*/].f_267)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x0E40F846A70BA3EC(iVar1) != unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))) || unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x987A5F1E1A67E3C0(func_27(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0809D748691DCA79(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x0E40F846A70BA3EC(iVar1) != iParam8 || unk_0x0E40F846A70BA3EC(iVar1) == -1)
						{
							if (unk_0x987A5F1E1A67E3C0(func_27(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0809D748691DCA79(iVar1, Param0, fParam3))
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
	if (unk_0x4A1EA713628C49D4(unk_0x407E03586628E458(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_25(-1, 0) == 8;
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

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

int func_26()
{
	return Global_1574918;
}

Vector3 func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_30() && Global_1853348[iVar0 /*834*/].f_804) && !func_29(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_28(iParam0);
}

Vector3 func_28(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
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
	return Global_2714762.f_19;
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
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

int func_33()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (Global_262145.f_2344 != 0)
	{
		iVar1 = Global_262145.f_2344;
		if (unk_0x51046EEE00E2BBDA(iVar1))
		{
			if (unk_0x2886B1BFE0896A9A(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar2 = func_35(&Local_380);
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
	
	iVar0 = unk_0x5853B15F78E1A265(0, 5);
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
	
	if (!BitTest(Global_1661006, 0))
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
		if (!bParam4 && Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/] != 3)
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
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_40(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_217;
			}
			else
			{
				return unk_0x8736933282D0483C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_218;
			}
			else
			{
				return unk_0xBD7B8099C8298D2F(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_219;
			}
			else
			{
				return unk_0xC162EEC794CBB80B(!bParam1, 0);
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
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
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
	
	func_55(&uVar0, unk_0xAA2844CAD88768B5());
	func_54(&uVar0, unk_0x80F97D7D29800A1A());
	func_53(&uVar0, unk_0x09FC827691DACE59());
	func_51(&uVar0, unk_0xD52BD97E61483713());
	func_52(&uVar0, unk_0x771485043FDC55DE());
	func_50(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

int func_64()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_380.f_6[iVar0])
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
	
	if (!BitTest(Local_380.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_380.f_35[iVar0] = -1;
			iVar0++;
		}
		unk_0xCED9E32812D6C7C7(&(Local_380.f_23), 5);
	}
}

void func_66()
{
	int iVar0;
	
	func_517(&Local_380, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_380.f_12[iVar0] = func_67();
		iVar0++;
	}
	Local_380.f_33 = 1;
}

int func_67()
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 10);
	while (func_68(iVar0))
	{
		iVar0 = unk_0x5853B15F78E1A265(0, 10);
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
			if (Local_380.f_12[iVar0] == iParam0)
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
	
	iVar0 = func_35(&Local_380);
	if (iVar0 != Local_380.f_28)
	{
		Local_380.f_28 = iVar0;
		Local_380.f_29 = unk_0x0A89FDFA763DCAED();
	}
}

int func_70()
{
	if (Local_380.f_20 > 0)
	{
		if (Local_380[0] != Local_380[1])
		{
			return 1;
		}
	}
	return 0;
}

bool func_71(int iParam0, int iParam1)
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

void func_72()
{
	Local_380.f_29 = 0;
}

void func_73()
{
	int iVar0;
	
	if (func_70())
	{
		if (Global_2815059.f_4451 == 0 || BitTest(Global_2815059.f_4452, 0))
		{
			if (!func_515(&uLocal_334) || func_513(&uLocal_334, 2000, 0))
			{
				iVar0 = func_35(&Local_368);
				if (iVar0 > -1)
				{
					Global_2815059.f_4451 = func_34(iVar0);
					func_46(&uLocal_332);
					func_514(&uLocal_332, 0, 0);
					if (BitTest(Global_2815059.f_4452, 0))
					{
						unk_0xB0550BC91B0159D6(&(Global_2815059.f_4452), false);
					}
				}
				else
				{
					func_46(&uLocal_334);
					func_514(&uLocal_334, 0, 0);
				}
			}
		}
		else if (Global_2815059.f_4451 != 0)
		{
			if (func_513(&uLocal_332, 20000, 0))
			{
				if (!func_74(&Local_368, Global_2815059.f_4451))
				{
					Global_2815059.f_4451 = 0;
				}
				func_46(&uLocal_332);
				func_514(&uLocal_332, 0, 0);
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
	
	if (((((bLocal_103 || bLocal_104) || bLocal_105) || bLocal_107) || bLocal_106) || bLocal_108)
	{
		if (((((Global_2815059.f_28.f_41 || func_138(unk_0x9E2D6C50374FCFA9(), 1, 0)) || func_137(unk_0x9E2D6C50374FCFA9())) || !func_135()) || func_123()) || func_118())
		{
			bLocal_103 = false;
			bLocal_105 = false;
			bLocal_104 = false;
			bLocal_107 = false;
			bLocal_106 = false;
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
	if (bLocal_108)
	{
		if (!func_116("FM_IHELP_LCP"))
		{
			if (!unk_0x559C03F53E6937FC())
			{
				if (func_98())
				{
					if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
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
	else if (!BitTest(uLocal_585, 18))
	{
		if (func_116("FM_IHELP_LCP"))
		{
			func_84("FM_IHELP_LCP");
		}
	}
	if (bLocal_103)
	{
		if (!func_116("FM_CTUT_MOD"))
		{
			if (!unk_0x559C03F53E6937FC())
			{
				if (func_98())
				{
					if (BitTest(uLocal_338, 2))
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
	else if (!BitTest(uLocal_585, 18))
	{
		if (func_116("FM_CTUT_MOD"))
		{
			func_84("FM_CTUT_MOD");
		}
	}
	if (bLocal_105)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!unk_0x559C03F53E6937FC())
			{
				if (unk_0xE9E8955A780DDA01())
				{
					if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
					{
						if (!func_138(unk_0x9E2D6C50374FCFA9(), 1, 0))
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
	else if (!BitTest(uLocal_585, 18))
	{
		if (func_116("FM_CTUT_RSP"))
		{
			func_84("FM_CTUT_RSP");
		}
	}
	if (bLocal_106)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!unk_0x559C03F53E6937FC())
			{
				if (unk_0xE9E8955A780DDA01())
				{
					if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
					{
						if (!func_138(unk_0x9E2D6C50374FCFA9(), 1, 0))
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
	else if (!BitTest(uLocal_585, 18))
	{
		if (func_116("FM_CTUT_REP"))
		{
			func_84("FM_CTUT_REP");
		}
	}
	if (bLocal_107)
	{
		if (!func_116("FM_CTUT_LLS"))
		{
			if (!unk_0x559C03F53E6937FC())
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
	else if (!BitTest(uLocal_585, 18))
	{
		if (func_116("FM_CTUT_LLS"))
		{
			func_84("FM_CTUT_LLS");
		}
	}
	if (bLocal_104)
	{
		if (!func_116("FM_IMP_SIM"))
		{
			if (!unk_0x559C03F53E6937FC())
			{
				if (func_98() || func_77())
				{
					if (BitTest(uLocal_338, 3))
					{
						if (!iLocal_110)
						{
							if (func_97())
							{
								func_91("FM_IMP_SIM", 0);
								if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
								{
									if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
									{
										iLocal_353 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
									}
								}
							}
						}
						else if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
						{
							if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
							{
								iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
								if (iVar0 != iLocal_353)
								{
									iLocal_110 = 0;
									func_46(&uLocal_336);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_515(&uLocal_336))
		{
			func_514(&uLocal_336, 0, 0);
		}
		else if (func_513(&uLocal_336, 20000, 0))
		{
			func_117();
			iLocal_110 = 1;
		}
	}
	else if (!BitTest(uLocal_585, 18))
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
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_83() == 0)
		{
			return BitTest(func_80(func_82(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2826809[iParam0 /*3*/][func_81(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
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

int func_83()
{
	return Global_31959;
}

void func_84(char* sParam0)
{
	bool bVar0;
	
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_90())
	{
		if (Global_1574757 == 11)
		{
			if (unk_0x4B83FFC4B00987D9(sParam0) > 63)
			{
				return;
			}
			bVar0 = unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574757.f_16));
		}
		else
		{
			if (unk_0x4B83FFC4B00987D9(sParam0) > 23)
			{
				return;
			}
			bVar0 = unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574757.f_12));
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
	
	bVar0 = unk_0x9315DBF7D972F07A();
	Global_1574757 = 20;
	StringCopy(&(Global_1574757.f_1), "", 32);
	Global_1574757.f_9 = 0;
	if (bVar0)
	{
		Global_1574757.f_10 = unk_0x0A89FDFA763DCAED();
		Global_1574757.f_11 = unk_0x0A89FDFA763DCAED();
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
		unk_0x1419D7B938CBFF2E(&(Global_1574757.f_12));
		func_88();
		unk_0xF4666BA5B36DBCB2();
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
			unk_0x2AE954BA77A66307(Global_1574757.f_52);
			return;
		
		case 2:
			unk_0x2AE954BA77A66307(Global_1574757.f_52);
			unk_0x2AE954BA77A66307(Global_1574757.f_53);
			return;
		
		case 3:
			unk_0x26C23BE14F66F202(&(Global_1574757.f_16));
			return;
		
		case 4:
			unk_0x26C23BE14F66F202(&(Global_1574757.f_16));
			unk_0x26C23BE14F66F202(&(Global_1574757.f_32));
			return;
		
		case 5:
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			return;
		
		case 6:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			return;
		
		case 7:
			unk_0x26C23BE14F66F202(&(Global_1574757.f_16));
			return;
		
		case 8:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_16));
			return;
		
		case 9:
			unk_0x702B349761F63A9E(&(Global_1574757.f_16));
			return;
		
		case 10:
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_32));
			return;
		
		case 12:
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			unk_0x26C23BE14F66F202(&(Global_1574757.f_32));
			return;
		
		case 13:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_16));
			unk_0x138506D6C7564EF1(Global_1574757.f_57);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_32));
			return;
		
		case 11:
			unk_0x702B349761F63A9E(&(Global_1574757.f_16));
			return;
		
		case 14:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_32));
			return;
		
		case 15:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			unk_0x138506D6C7564EF1(Global_1574757.f_57);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_32));
			return;
		
		case 17:
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_32));
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_48));
			return;
		
		case 16:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			return;
		
		case 19:
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_16));
			return;
		
		case 18:
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_16));
			unk_0x138506D6C7564EF1(Global_1574757.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574757.f_48));
			unk_0x76DB21247AE4E4E2(&(Global_1574757.f_32));
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
	unk_0x09684FD679B0E474(&(Global_1574757.f_12));
	func_88();
	return unk_0xD7AA4C82B5D00977();
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
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return;
	}
	if (unk_0x4B83FFC4B00987D9(sParam0) > 23)
	{
		return;
	}
	if (func_95(sParam0))
	{
		return;
	}
	func_85();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), unk_0x05CBA41180F5D521(), 32);
	Global_1574757.f_9 = unk_0x2E87280918B16506(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_94();
	func_93(bParam1);
	func_92();
}

void func_92()
{
	unk_0xCED9E32812D6C7C7(&(Global_1574757.f_59), true);
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1574757.f_59), false);
		return;
	}
	unk_0xB0550BC91B0159D6(&(Global_1574757.f_59), false);
}

void func_94()
{
	Global_1574757.f_10 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), 86400000);
	Global_1574757.f_11 = unk_0x0A89FDFA763DCAED();
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
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	return unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574757.f_12));
}

bool func_96(char* sParam0)
{
	if (!func_90())
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	return unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574757.f_16));
}

bool func_97()
{
	bool bVar0;
	
	if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
	{
		if (func_4(Local_380.f_22))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_380.f_22)))
				{
				}
			}
		}
	}
	if (!BitTest(uLocal_586, 0))
	{
		if (!BitTest(uLocal_586, 1))
		{
			bVar0 = true;
		}
		else if (!BitTest(uLocal_586, 2))
		{
			bVar0 = true;
		}
		else if (!BitTest(uLocal_586, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			unk_0xCED9E32812D6C7C7(&uLocal_586, false);
		}
	}
	return bVar0;
}

int func_98()
{
	if ((((((((((((((((((!func_14(unk_0x9E2D6C50374FCFA9(), 1, 1) || unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A())) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || func_114(8, -1)) || func_114(15, -1)) || func_113()) || func_114(3, -1)) || func_138(unk_0x9E2D6C50374FCFA9(), 1, 0)) || func_112()) || func_115()) || func_111()) || func_110()) || func_108()) || func_107()) || unk_0x559C03F53E6937FC()) || func_106() > 0) || !func_135()) || func_99()) || func_118())
	{
		return 0;
	}
	return 1;
}

int func_99()
{
	if (func_71(unk_0x9E2D6C50374FCFA9(), 8))
	{
		return 1;
	}
	if (func_71(unk_0x9E2D6C50374FCFA9(), 10))
	{
		return 1;
	}
	if (func_71(unk_0x9E2D6C50374FCFA9(), 12))
	{
		return 1;
	}
	if (func_71(unk_0x9E2D6C50374FCFA9(), 14))
	{
		return 1;
	}
	if (func_71(unk_0x9E2D6C50374FCFA9(), 13))
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
	
	if (BitTest(Global_2815059.f_1794, 7))
	{
		return 1;
	}
	uVar0 = Global_1659747[func_81(-1)];
	if (BitTest(uVar0, 6))
	{
		unk_0xCED9E32812D6C7C7(&(Global_2815059.f_1794), 7);
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
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_139, 2);
}

bool func_102()
{
	return Global_1575046;
}

bool func_103()
{
	return Global_1575048;
}

int func_104()
{
	if (BitTest(Global_2815059.f_1794, 28) && !BitTest(Global_2815059.f_1794, 29))
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return BitTest(Global_2815059.f_1795, 3);
}

int func_106()
{
	return Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_193;
}

int func_107()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
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
	return Global_1641031.f_40 == 3;
}

bool func_110()
{
	return Global_2703735.f_2724.f_582;
}

bool func_111()
{
	return Global_100493.f_376 > 0;
}

bool func_112()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 0);
}

var func_113()
{
	return Global_2656955;
}

bool func_114(int iParam0, int iParam1)
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

bool func_115()
{
	return unk_0x320D1840B6DAA1CC() <= Global_23150.f_6269 + 100;
}

int func_116(char* sParam0)
{
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	if (!func_90())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		if (unk_0x4B83FFC4B00987D9(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x4B83FFC4B00987D9(sParam0) > 23)
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
	if (!unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == Global_1574757.f_9)
	{
		return;
	}
	func_85();
}

int func_118()
{
	if (func_122(unk_0x9E2D6C50374FCFA9(), 1))
	{
		return 1;
	}
	if (func_119(unk_0x9E2D6C50374FCFA9()))
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
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_120(Global_2689235[iParam0 /*453*/].f_318.f_6) == 14;
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
	}
	return -1;
}

int func_121()
{
	return -1;
}

int func_122(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
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
	if (func_124(unk_0x9E2D6C50374FCFA9(), 1))
	{
		return 1;
	}
	if (func_122(unk_0x9E2D6C50374FCFA9(), 1))
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 && func_125(Global_1892703[iParam0 /*599*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1)
	{
		if (func_125(Global_1892703[iParam0 /*599*/].f_10.f_32))
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
	if (!func_134(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_130(unk_0x9E2D6C50374FCFA9()) || func_129(unk_0x9E2D6C50374FCFA9()) != -1)
		{
			return 1;
		}
		if (func_128(unk_0x9E2D6C50374FCFA9()) && Global_1836844.f_4 == 133)
		{
			return 1;
		}
	}
	return 0;
}

var func_128(int iParam0)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 4);
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/];
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
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_133(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

bool func_134(int iParam0)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 2);
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
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_833, 2);
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
	if (Global_1853348[iParam0 /*834*/] == -1)
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
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

void func_141()
{
	if (bLocal_101)
	{
		if (!unk_0x12DD4A0B247D9B4D(Global_1931386))
		{
			Global_1931386 = unk_0xC5B823372B67998A(Global_1931387);
			unk_0x1A5B5BA56167D412(Global_1931386, 293);
			unk_0x293A9399E902A33B(Global_1931386, 1f);
			unk_0xA241A7085A493F20(Global_1931386, 0);
			unk_0xAF62582F3EA39095(Global_1931386, "IMPEX_BLIP_FM");
			if (func_170())
			{
				unk_0x9705014C37E60003(Global_1931386, 1);
			}
		}
	}
	else if (unk_0x12DD4A0B247D9B4D(Global_1931386))
	{
		unk_0xFFD8EB5462B07B59(&Global_1931386);
		if (bLocal_310)
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
				{
					if (!func_165(unk_0x407E03586628E458(unk_0x9E2D6C50374FCFA9()), 1215605247, &uLocal_341, 0, 500, 1, 0))
					{
						if (func_118())
						{
							func_164("IMPEX_HIPR_DAM", -1);
						}
					}
				}
			}
		}
	}
	if (bLocal_102)
	{
		if (iLocal_123 == -1)
		{
			iLocal_123 = func_148(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 4, -1);
			if (iLocal_123 != -1)
			{
				func_142(iLocal_123, 1);
			}
		}
	}
	else if (iLocal_123 != -1)
	{
		func_142(iLocal_123, 0);
		iLocal_123 = -1;
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
		unk_0xB0550BC91B0159D6(&(Global_100493.f_1393[iParam0]), bParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_83() == 0)
		{
			uVar0 = func_80(func_82(iParam0), -1, 0);
			unk_0xB0550BC91B0159D6(&uVar0, bParam1);
			func_145(func_82(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

void func_145(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

void func_146(int iParam0)
{
	Global_100493.f_196[iParam0] = 1;
	Global_100493.f_195 = 1;
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
		unk_0xCED9E32812D6C7C7(&(Global_100493.f_1393[iParam0]), bParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_83() == 0)
		{
			uVar0 = func_80(func_82(iParam0), -1, 0);
			unk_0xCED9E32812D6C7C7(&uVar0, bParam1);
			func_145(func_82(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Global_113386.f_668[iParam0]), bParam1);
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
	while (iVar0 <= 57)
	{
		if (iParam3 == 6 || iParam3 == func_163(iVar0))
		{
			iVar4 = iVar0;
			if (func_162(iVar4))
			{
				fVar1 = unk_0x987A5F1E1A67E3C0(Param0, func_149(iVar0, 0), 1);
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
			return func_159(Global_102568);
			break;
		
		case 46:
			if (Global_1853185 != func_121())
			{
				if (func_158(Global_1853185))
				{
					return func_151(2, 2);
				}
				else if (func_150(Global_1853185))
				{
					return func_151(45, 3);
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
			return Global_1966112;
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
			switch (Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_6)
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
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_150(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 0) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_151(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853185 != func_121())
	{
		if (iParam1 == 3)
		{
			if (func_152(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 4))
			{
				if (func_152(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 5))
			{
				if (func_152(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_152(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_157(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_157(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_155(iParam0) };
	}
	else
	{
		Var12 = { func_154(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_153(Var18, -Var0.f_3.f_2) };
	Var18 = { func_153(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0x6DB7FBD602C51670(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_153(struct<3> Param0, float fParam3)
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

struct<6> func_154(int iParam0)
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

struct<6> func_155(int iParam0)
{
	return func_156(iParam0);
}

struct<6> func_156(int iParam0)
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

int func_157(int iParam0, var uParam1)
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

int func_158(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_159(int iParam0)
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
			if (func_160() == 0)
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
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_160()
{
	return func_161(unk_0x9E2D6C50374FCFA9());
}

var func_161(int iParam0)
{
	return unk_0xF6CF013E72C680B4(Global_2689235[iParam0 /*453*/].f_318.f_3, 28, 31);
}

bool func_162(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = unk_0x12DD4A0B247D9B4D(Global_100493.f_255[39]);
			break;
		
		case 40:
			bVar0 = unk_0x12DD4A0B247D9B4D(Global_100493.f_255[40]);
			break;
		
		case 41:
			bVar0 = unk_0x12DD4A0B247D9B4D(Global_100493.f_255[41]);
			break;
		
		case 42:
			bVar0 = unk_0x12DD4A0B247D9B4D(Global_100493.f_255[42]);
			break;
		
		case 43:
			bVar0 = unk_0x12DD4A0B247D9B4D(Global_100493.f_255[43]);
			break;
		
		case 44:
			bVar0 = unk_0x12DD4A0B247D9B4D(Global_100493.f_255[44]);
			break;
	}
	return bVar0;
}

int func_163(int iParam0)
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

void func_164(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_165(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!func_515(uParam2))
	{
		func_514(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_166(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<8> Var3;
	
	if (!func_515(uParam3))
	{
		func_514(uParam3, 0, 0);
	}
	func_169(&Var3, iParam1);
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			if (func_167(iParam0, iParam1, 30))
			{
				if (unk_0x9044EDB8A7BF67B4(iParam0))
				{
					uVar0 = unk_0x28AA31872A651BC7(iParam0);
					if (!unk_0xF68107C40359970C(uVar0))
					{
						if (unk_0x65FAB09725E2FE75(iVar0))
						{
							uVar2 = unk_0xFF65CDB0EB7ACE71(iVar0);
							if (bParam2)
							{
								if (unk_0x3BBE1AEFBFFE5646(iParam1, uVar2, fParam4, -1))
								{
									if (uParam7 || (!unk_0xF2706324C8CE4795(iParam1, uVar2, 2) && !(Var3.f_7 != 0 && unk_0xF2706324C8CE4795(iParam1, uVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
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
							else if (unk_0x3BBE1AEFBFFE5646(iParam1, uVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (unk_0xF2706324C8CE4795(iParam1, uVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && unk_0xF2706324C8CE4795(iParam1, uVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (unk_0xD5C6B5E3B93A5EDC(iVar0, 0))
						{
							uVar1 = unk_0xB3FF0049C1FD38EC(iVar0, 0);
							if (unk_0xE5965CDF24F93A9F(uVar1))
							{
								if (bParam2)
								{
									if (unk_0x26B6FBD29E6B5DF6(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!unk_0xE251D6FAC6328ABF(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && unk_0xE251D6FAC6328ABF(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
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
								else if (unk_0x26B6FBD29E6B5DF6(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (unk_0xE251D6FAC6328ABF(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && unk_0xE251D6FAC6328ABF(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
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
							if (unk_0x26B6FBD29E6B5DF6(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!unk_0xE251D6FAC6328ABF(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xE251D6FAC6328ABF(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
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
						else if (unk_0x26B6FBD29E6B5DF6(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0xE251D6FAC6328ABF(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && unk_0xE251D6FAC6328ABF(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
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
				else if (unk_0x04D9F44466CBF3CA(iParam0) || unk_0x0086095F1731DE17(iParam0))
				{
					if (bParam2)
					{
						if (unk_0x26B6FBD29E6B5DF6(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!unk_0xE251D6FAC6328ABF(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xE251D6FAC6328ABF(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
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
					else if (unk_0x26B6FBD29E6B5DF6(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (unk_0xE251D6FAC6328ABF(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && unk_0xE251D6FAC6328ABF(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam3)) >= iParam5)
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

int func_167(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iParam0, 1), func_168(iParam1), 1) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_168(int iParam0)
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

void func_169(var uParam0, int iParam1)
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

int func_170()
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

void func_171()
{
	if (bLocal_99)
	{
		if (!iLocal_100)
		{
			func_173(1215605247, 1, 0);
			func_172(1);
			iLocal_100 = 1;
		}
	}
	else if (iLocal_100)
	{
		func_173(1215605247, 0, 0);
		func_172(0);
		iLocal_100 = 0;
	}
}

void func_172(bool bParam0)
{
	if (Global_2815059.f_4586 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2815059.f_4586 = bParam0;
	}
}

void func_173(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x9315DBF7D972F07A())
	{
	}
	else if (bParam1)
	{
		if (!BitTest(Global_2815059.f_4565, func_174(iParam0)))
		{
			if (bParam2)
			{
				unk_0xCED9E32812D6C7C7(&(Global_2815059.f_4565.f_1), func_174(iParam0));
			}
			unk_0xCED9E32812D6C7C7(&(Global_2815059.f_4565), func_174(iParam0));
		}
	}
	else if (BitTest(Global_2815059.f_4565, func_174(iParam0)))
	{
		if (bParam2)
		{
			unk_0xB0550BC91B0159D6(&(Global_2815059.f_4565.f_1), func_174(iParam0));
		}
		unk_0xB0550BC91B0159D6(&(Global_2815059.f_4565), func_174(iParam0));
	}
}

int func_174(int iParam0)
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

void func_175()
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_380.f_23, 0))
	{
		if (iLocal_344 >= 32)
		{
			unk_0xB0550BC91B0159D6(&uLocal_585, 5);
			iLocal_344 = 0;
			iLocal_316 = -1;
		}
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iLocal_344)))
		{
			iVar0 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iLocal_344));
			iVar1 = unk_0x407E03586628E458(iVar0);
			if (func_14(iVar0, 0, 1))
			{
				if (!BitTest(uLocal_585, 3))
				{
					if (BitTest(Local_456[iLocal_344 /*4*/].f_2, 1))
					{
						unk_0xCED9E32812D6C7C7(&uLocal_585, 3);
					}
				}
				if (iLocal_316 == -1)
				{
					if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
					{
						if (func_4(Local_380.f_22))
						{
							if (!unk_0xF68107C40359970C(iVar1))
							{
								if (unk_0x87B449F4C26E764A(iVar1, unk_0xA5677134B9672173(Local_380.f_22)))
								{
									if (unk_0xAB793EA186AB8DAA(unk_0xA5677134B9672173(Local_380.f_22), -1, 0) == iVar1)
									{
										iLocal_316 = iLocal_344;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_344++;
		if (iLocal_344 >= 32)
		{
			unk_0xCED9E32812D6C7C7(&uLocal_585, 5);
		}
		func_266();
		if (!BitTest(uLocal_585, 3))
		{
			if (!BitTest(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2, 3))
			{
				if (!BitTest(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2, 1))
				{
					if (func_264())
					{
						unk_0xCED9E32812D6C7C7(&(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_313 != Local_380.f_34)
	{
		if (Local_380.f_34 == 0)
		{
			if (!unk_0x90F6E2F6488B98BA(Local_380.f_22))
			{
				iLocal_313 = Local_380.f_34;
				unk_0xC1F83F3B5F8E7D3B(iLocal_313);
			}
		}
		else
		{
			iLocal_313 = Local_380.f_34;
			unk_0xC1F83F3B5F8E7D3B(iLocal_313);
		}
	}
	if (BitTest(Local_380.f_23, 0))
	{
		switch (Local_456[unk_0xF1354995C6159A78() /*4*/].f_3)
		{
			case 0:
				if (!Global_2815059.f_1722)
				{
				}
				if (BitTest(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2, 3))
				{
					unk_0xB0550BC91B0159D6(&(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2), 3);
				}
				if (BitTest(uLocal_585, 21))
				{
					unk_0xB0550BC91B0159D6(&uLocal_585, 21);
				}
				if (BitTest(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2, 1))
				{
					unk_0xB0550BC91B0159D6(&(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2), true);
				}
				if (((!func_138(unk_0x9E2D6C50374FCFA9(), 1, 0) && !func_112()) && !func_263(unk_0x9E2D6C50374FCFA9(), 1, 0)) || func_71(unk_0x9E2D6C50374FCFA9(), 6))
				{
					if (BitTest(uLocal_585, 3))
					{
						unk_0xB0550BC91B0159D6(&uLocal_585, 3);
					}
					if (BitTest(uLocal_585, 19))
					{
						unk_0xB0550BC91B0159D6(&uLocal_585, 19);
					}
					if (BitTest(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2, 3))
					{
						unk_0xB0550BC91B0159D6(&(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2), 3);
					}
					if (iLocal_315 != -1)
					{
						iLocal_315 = -1;
					}
					if (BitTest(Local_380.f_23, 0))
					{
						if (!BitTest(uLocal_585, 16))
						{
							unk_0xCED9E32812D6C7C7(&uLocal_585, 16);
							func_262(6, 1);
							unk_0xCED9E32812D6C7C7(&uLocal_585, 7);
							Global_2815059.f_1721 = 1;
							Global_2815059.f_1722 = 0;
						}
						if (unk_0x993E56B8150C834F(1))
						{
							if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
							{
								if (func_256())
								{
									if (Local_380.f_67 != 0)
									{
										unk_0x7CD708DEB04F8474(Local_380.f_67, 1);
									}
									Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 = 1;
									Global_1931397 = unk_0xEFD6451BF0F3352F(unk_0xA5677134B9672173(Local_380.f_22));
									if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(unk_0xA5677134B9672173(Local_380.f_22))))
									{
										unk_0x1A5B5BA56167D412(Global_1931397, 348);
										func_164("IMPEX_HIPB_INT", -1);
									}
									else
									{
										unk_0x1A5B5BA56167D412(Global_1931397, 225);
										func_164("IMPEX_HIPR_INT", -1);
									}
									unk_0xA582EE8380437B1B(Global_1931397, 2);
									unk_0xAF62582F3EA39095(Global_1931397, "IMPEX_HIPR_BLP");
									func_262(6, 1);
									unk_0xCED9E32812D6C7C7(&uLocal_585, 7);
									Global_2815059.f_1721 = 1;
									if (func_118())
									{
										unk_0x94C2F928B167AA54(Global_1931397, 0);
									}
								}
							}
						}
					}
				}
				else if (!Global_2815059.f_1722)
				{
					Global_2815059.f_1722 = 1;
				}
				break;
			
			case 1:
				if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
				{
					if (unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(Local_380.f_22), 0))
					{
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
						{
							if (unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_380.f_22)))
							{
								func_255(1);
								if (func_254())
								{
									func_249(2, 0, 1);
								}
								if (unk_0x12DD4A0B247D9B4D(Global_1931397))
								{
									unk_0xFFD8EB5462B07B59(&Global_1931397);
								}
							}
							else
							{
								func_255(0);
								if (!func_248(unk_0xA5677134B9672173(Local_380.f_22), 0))
								{
									if (!unk_0x12DD4A0B247D9B4D(Global_1931397))
									{
										if (!iLocal_122)
										{
											func_247();
										}
									}
								}
							}
						}
						if (!BitTest(uLocal_585, 19))
						{
							if (func_256())
							{
								if (func_245())
								{
									if (!unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_380.f_22)))
									{
										if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_380.f_22), 1)) < 2500f)
										{
											if (func_118())
											{
												func_164("FM_IMP_JAC", -1);
											}
											unk_0xCED9E32812D6C7C7(&uLocal_585, 19);
										}
									}
								}
							}
						}
						if (func_244())
						{
						}
						func_242();
					}
					else
					{
						if (unk_0x12DD4A0B247D9B4D(Global_1931397))
						{
							unk_0xFFD8EB5462B07B59(&Global_1931397);
						}
						func_262(6, 0);
						unk_0xB0550BC91B0159D6(&uLocal_585, 7);
						Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_380.f_67 != 0)
					{
						unk_0x7CD708DEB04F8474(Local_380.f_67, 0);
					}
					if (unk_0x12DD4A0B247D9B4D(Global_1931397))
					{
						unk_0xFFD8EB5462B07B59(&Global_1931397);
					}
					func_262(6, 0);
					unk_0xB0550BC91B0159D6(&uLocal_585, 7);
					Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 = 3;
				}
				if (BitTest(uLocal_585, 3))
				{
					func_262(6, 0);
					unk_0xB0550BC91B0159D6(&uLocal_585, 7);
					if (unk_0x12DD4A0B247D9B4D(Global_1931397))
					{
						unk_0xFFD8EB5462B07B59(&Global_1931397);
					}
					Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 = 3;
				}
				if (Local_380.f_26 == 3)
				{
					if (Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 == 1)
					{
						if (Local_380.f_67 != 0)
						{
							unk_0x7CD708DEB04F8474(Local_380.f_67, 0);
						}
						if (unk_0x12DD4A0B247D9B4D(Global_1931397))
						{
							unk_0xFFD8EB5462B07B59(&Global_1931397);
						}
						if (BitTest(uLocal_585, 16))
						{
							unk_0xB0550BC91B0159D6(&uLocal_585, 16);
						}
						func_262(6, 0);
						unk_0xB0550BC91B0159D6(&uLocal_585, 7);
						Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 = 3;
					}
				}
				break;
			
			case 3:
				func_255(0);
				break;
		}
		if (func_239())
		{
			if (func_238("IMPEX_HIPR_INT"))
			{
				unk_0x3410421C60BF7143(1);
			}
			if (unk_0x12DD4A0B247D9B4D(Global_1931397))
			{
				unk_0xFFD8EB5462B07B59(&Global_1931397);
			}
			if (Local_380.f_67 != 0)
			{
				unk_0x7CD708DEB04F8474(Local_380.f_67, 0);
			}
			Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 = 3;
			func_262(6, 0);
			unk_0xB0550BC91B0159D6(&uLocal_585, 7);
			if (BitTest(uLocal_585, 16))
			{
				unk_0xB0550BC91B0159D6(&uLocal_585, 16);
			}
			func_255(0);
		}
		func_190();
		if (Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 > 0 && Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 < 3)
		{
			func_187();
		}
	}
	else
	{
		if (Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 != 0)
		{
			if (Local_380.f_67 != 0)
			{
				unk_0x7CD708DEB04F8474(Local_380.f_67, 0);
			}
			Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 = 0;
		}
		if (BitTest(uLocal_585, 21))
		{
			unk_0xB0550BC91B0159D6(&uLocal_585, 21);
		}
		if (Global_2815059.f_1721)
		{
			if (!func_515(&uLocal_326))
			{
				func_514(&uLocal_326, 0, 0);
			}
			else if (func_513(&uLocal_326, 5000, 0))
			{
				func_46(&uLocal_326);
				Global_2815059.f_1721 = 0;
			}
		}
		if (BitTest(uLocal_585, 16))
		{
			if (Local_380.f_34 == 0)
			{
				unk_0xB0550BC91B0159D6(&uLocal_585, 16);
			}
		}
	}
	func_176();
}

void func_176()
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	var uVar7;
	bool bVar8;
	
	if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
	{
		if (func_4(Local_380.f_22))
		{
			if (!func_245())
			{
				if (!func_515(&uLocal_591))
				{
					func_514(&uLocal_591, 0, 0);
				}
				if (func_513(&uLocal_591, 1000, 0))
				{
					if (unk_0x07B2F8356DC13CF4(Local_380.f_22))
					{
						Var3 = { unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_380.f_22), 1) };
						if (func_184(Var3, func_185(39), func_149(39, 0)))
						{
							if (func_179(39, 0, &Var0, &uVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_184(Var3, func_185(40), func_149(40, 0)))
						{
							if (func_179(40, 0, &Var0, &uVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_184(Var3, func_185(41), func_149(41, 0)))
						{
							if (func_179(41, 0, &Var0, &uVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_184(Var3, func_185(42), func_149(42, 0)))
						{
							if (func_179(42, 0, &Var0, &uVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_184(Var3, func_185(43), func_149(43, 0)))
						{
							if (func_179(43, 0, &Var0, &uVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_184(Var3, func_185(44), func_149(44, 0)))
						{
							if (func_179(44, 0, &Var0, &uVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
					}
					func_46(&uLocal_591);
				}
				if (bVar8)
				{
					if (unk_0x07B2F8356DC13CF4(Local_380.f_22))
					{
						if (func_177(unk_0xA5677134B9672173(Local_380.f_22), 1, 0, 0, 0, 0, 1, 0, 1))
						{
							unk_0xA539EDE8DA5BBC22(unk_0xA5677134B9672173(Local_380.f_22), Var0, 0, 0, 1);
							unk_0xBBF86885619695CE(unk_0xA5677134B9672173(Local_380.f_22), uVar6);
							unk_0x28271FBFA024090B(unk_0xA5677134B9672173(Local_380.f_22), 1, 1);
							unk_0x5C65DDDC219B3AA5(unk_0xA5677134B9672173(Local_380.f_22), false);
							unk_0x3B2646B62E7BBE11(unk_0xA5677134B9672173(Local_380.f_22), 1);
						}
					}
				}
			}
		}
	}
}

int func_177(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			iVar2 = func_178(iParam0, (iVar0 - 1), bParam6, iParam7);
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
						if (((!unk_0xF68107C40359970C(iVar2) && iVar3 != func_121()) && func_14(iVar3, 1, 1)) || iParam8)
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

int func_178(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_179(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
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
	else if (func_183(iParam0, iParam5))
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
	else if (func_182(iParam0, iParam5))
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
	else if (func_181(iParam0, iParam5))
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
	else if (func_180(iParam0, iParam5))
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

int func_180(int iParam0, int iParam1)
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

int func_181(int iParam0, int iParam1)
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

int func_182(int iParam0, int iParam1)
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

int func_183(int iParam0, int iParam1)
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

int func_184(struct<3> Param0, var uParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x15616E8442D3D1E8(Param0))
	{
		iVar0 = unk_0x63AC7EFB770FCB6F(Param4, uParam3);
		if (!unk_0xBCC73B466E2B2350(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x6F7D2FF0780E66BE(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

char* func_185(int iParam0)
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
			return func_186(Global_102568);
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
	}
	return "";
}

char* func_186(int iParam0)
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
			if (func_160() == 0)
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
		
		default:
			return "";
			break;
	}
	return "";
}

void func_187()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_316 > -1)
	{
		if (iLocal_316 != unk_0xF1354995C6159A78())
		{
			if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iLocal_316)))
			{
				iVar0 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iLocal_316));
				bVar1 = true;
				if (unk_0xA9E699D3DC7C0B15(iVar0, unk_0x9E2D6C50374FCFA9()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
	{
		if (func_4(Local_380.f_22))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_380.f_22), 0))
				{
					if (Local_456[unk_0xF1354995C6159A78() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_188(unk_0xA5677134B9672173(Local_380.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_188(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x2F046C9381D8E91B(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
	if (iParam1 == 0)
	{
	}
	unk_0xE0A93E5ADBED87DE(iParam0);
	if (func_14(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (func_189(iParam0) == 0)
			{
				if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iParam0, 0))
				{
					if (unk_0xE390839FC176621D(iParam0))
					{
						unk_0x891F90FBEC8D4E80(iParam0, "MP_Arrow");
						unk_0x43B60611864DF57C(iParam0, uVar0, uVar1, uVar2, 190);
						unk_0x83DFB8C3B0B37AED(iParam0, 1);
					}
				}
			}
		}
	}
}

int func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	if (unk_0x4262B4DCEADC2695(iVar0) == 0 && unk_0xD6F7D32A98E07F93(iVar0) == 0)
	{
		return 0;
	}
	if (unk_0x78006D212FD7243E(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_190()
{
	int iVar0;
	
	if (BitTest(uLocal_585, 5))
	{
		if (iLocal_315 != iLocal_316)
		{
			if (iLocal_316 > -1)
			{
				if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iLocal_316)))
				{
					iVar0 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iLocal_316));
					if (iVar0 != unk_0x9E2D6C50374FCFA9())
					{
						if (!func_263(unk_0x9E2D6C50374FCFA9(), 1, 0))
						{
							func_191("IMPEX_TICK_DHPV", iVar0, 0, 0, 0, 1, 0);
						}
					}
					if (unk_0x54E30A65F4FA4962())
					{
						if (!BitTest(Local_380.f_23, 8))
						{
							unk_0xCED9E32812D6C7C7(&(Local_380.f_23), 8);
						}
					}
				}
			}
			iLocal_315 = iLocal_316;
		}
	}
}

int func_191(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x0E40F846A70BA3EC(iParam1);
	if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x61042CA2A97BBB69(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x61042CA2A97BBB69(iParam1), 64);
		}
		if (unk_0xACC32B78196FBC2A(&Var2))
		{
		}
		unk_0x150D8F58B26E9F70(sParam0);
		if ((iVar1 != -1 && unk_0x44859561F653DD4E()) && iVar1 < 4)
		{
			if (Global_4718592.f_111249[iVar1] != -1)
			{
				unk_0x138506D6C7564EF1(func_236(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x138506D6C7564EF1(func_200(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x138506D6C7564EF1(func_200(iParam1, -2, 1, 0, 0));
		}
		unk_0x76DB21247AE4E4E2(func_198(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x187DF98ED95E5557(0, 1);
		}
		else
		{
			Global_2787505 = { func_197(iParam1) };
			if (unk_0x4FFBF2C0D8249E45(&Global_2787435, 35, &Global_2787505))
			{
				iVar18 = 0;
				if (unk_0x3C57C2F07FEE34D2(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2787435.f_21 > 0)
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
						Var2 = { func_196(&Var2) };
					}
					iVar0 = unk_0x2FE2977F89F2C159(iVar19, unk_0x780A8BCE22FA646B(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, iVar18, 0, Global_2787435, &Var2, Global_1576215, Global_1576216, Global_1576217);
				}
				else
				{
					iVar0 = unk_0xBC04C06C5EBC8BD5(iVar19, unk_0x780A8BCE22FA646B(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, iVar18, 0, Global_2787435, Global_1576215, Global_1576216, Global_1576217);
				}
			}
			else
			{
				iVar0 = unk_0x187DF98ED95E5557(0, 1);
			}
		}
		func_192(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_192(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_195() || !unk_0x44859561F653DD4E()) || !func_24(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return;
	}
	iVar0 = func_193(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1940311.f_5[iVar0 /*53*/] = iParam0;
		Global_1940311.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1940311.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1940311.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1940311.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1940311.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1940311.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_193(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1940311 - 1))
	{
		if (iParam0 > Global_1940311.f_5[iVar0 /*53*/].f_1)
		{
			func_194(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1940311++;
	if (Global_1940311 > 5)
	{
		Global_1940311 = 5;
		return Global_1940311;
	}
	return (Global_1940311 - 1);
}

void func_194(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1940311.f_5[iVar0 /*53*/] = { Global_1940311.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_195()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}

struct<16> func_196(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_197(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

var func_198(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_199(&cVar0);
}

var func_199(char[4] cParam0)
{
	return cParam0;
}

int func_200(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_234(iParam0) && !bParam4)
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
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_234(unk_0x9E2D6C50374FCFA9()) || (func_233() && func_232())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = func_231();
		if (unk_0xE5965CDF24F93A9F(iVar1))
		{
			if (unk_0x65FAB09725E2FE75(iVar1))
			{
				if (unk_0xFF65CDB0EB7ACE71(iVar1) != -1)
				{
					if (func_14(unk_0xFF65CDB0EB7ACE71(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return func_236(iParam1, iParam0, 0);
							}
							else
							{
								return func_213(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_213(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return func_236(iParam1, iParam0, 0);
				}
				else
				{
					return func_201(0, -1, 0);
				}
			}
			else
			{
				return func_201(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return func_236(iParam1, iParam0, 0);
		}
		else
		{
			return func_213(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
		}
	}
	return func_213(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
}

int func_201(bool bParam0, int iParam1, bool bParam2)
{
	return func_202(unk_0x9E2D6C50374FCFA9(), bParam0, iParam1, bParam2);
}

int func_202(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x0D01086B38EC256F(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	if ((func_212() || (func_211() && func_209())) && Global_1659814.f_1)
	{
		if (bParam1)
		{
			return func_208(iParam2, iVar0);
		}
		else
		{
			return func_208(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_207(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_206(1);
				}
				else
				{
					return func_206(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_203(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_203(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_206(1);
	}
	return func_206(0);
}

int func_203(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_205(iParam0, iParam1, iParam3);
	if (func_204(Global_4718592.f_116524, 1))
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

int func_204(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_168757 == 65)
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
		if (iParam0 == Global_262145.f_9485[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_205(int iParam0, int iParam1, int iParam2)
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
			if (!func_207(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_206(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_207(int iParam0, int iParam1, int iParam2)
{
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
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 0);
				
				case 1:
					return BitTest(Global_4718592.f_607, 1);
				
				case 2:
					return BitTest(Global_4718592.f_607, 2);
				
				case 3:
					return BitTest(Global_4718592.f_607, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 4);
				
				case 1:
					return BitTest(Global_4718592.f_607, 5);
				
				case 2:
					return BitTest(Global_4718592.f_607, 6);
				
				case 3:
					return BitTest(Global_4718592.f_607, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 8);
				
				case 1:
					return BitTest(Global_4718592.f_607, 9);
				
				case 2:
					return BitTest(Global_4718592.f_607, 10);
				
				case 3:
					return BitTest(Global_4718592.f_607, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 12);
				
				case 1:
					return BitTest(Global_4718592.f_607, 13);
				
				case 2:
					return BitTest(Global_4718592.f_607, 14);
				
				case 3:
					return BitTest(Global_4718592.f_607, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_208(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_205(iParam1, iParam0, 4);
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

int func_209()
{
	if (func_210())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_172946, 4);
}

bool func_210()
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_211()
{
	if (unk_0x44859561F653DD4E())
	{
		return BitTest(Global_4718592.f_172946, 0);
	}
	return ((BitTest(Global_4718592.f_172946, 0) || Global_1922895) && unk_0xB4C854DD86E40FDA(joaat("fm_deathmatch_creator")) > 0);
}

int func_212()
{
	if (func_210() && unk_0x44859561F653DD4E())
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853348[iVar2 /*834*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_222())
			{
				iVar3 = func_218(iParam0);
				if (!iVar3 == -1)
				{
					return func_216(iVar3);
				}
			}
			if ((func_215(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_207(unk_0x0E40F846A70BA3EC(iParam1), unk_0x0E40F846A70BA3EC(iParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_206(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_214(1);
			}
			else
			{
				return func_202(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[iParam0 /*834*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return func_206(1);
			}
			else
			{
				return func_202(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_218(iParam0);
	if (!iVar4 == -1)
	{
		return func_216(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_214(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_215(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && unk_0x0E40F846A70BA3EC(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == unk_0x0E40F846A70BA3EC(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
	}
	return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
}

int func_216(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_217(iParam0);
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

var func_217(int iParam0)
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_218(int iParam0)
{
	if (!iParam0 == func_121())
	{
		if (func_220(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_219(iParam0)];
		}
	}
	return -1;
}

int func_219(int iParam0)
{
	if (iParam0 != func_121())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_121();
}

bool func_220(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_221(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_121();
}

int func_221(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_121())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_222()
{
	if ((((((func_230() || func_229()) || func_30()) || func_228()) || func_227()) || func_225()) || func_223())
	{
		return 1;
	}
	if (unk_0x44859561F653DD4E() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	return func_224(Global_4718592.f_116524);
}

int func_224(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31703[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_225()
{
	return func_226(Global_4718592.f_116524);
}

int func_226(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_227()
{
	return Global_2714762.f_24;
}

var func_228()
{
	return Global_2714762.f_21;
}

var func_229()
{
	return Global_2714762.f_18;
}

var func_230()
{
	return Global_2714762.f_17;
}

var func_231()
{
	return Global_2621446.f_2;
}

var func_232()
{
	return BitTest(Global_2621446, 4);
}

var func_233()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 14);
}

int func_234(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_235())
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

bool func_235()
{
	return BitTest(Global_2621446, 3);
}

int func_236(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058069.f_14[iParam0];
	if (func_222())
	{
		iVar2 = func_218(iParam1);
		if (!iVar2 == -1)
		{
			return func_216(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_7911[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_121())
	{
		if (Global_4718592.f_111249[iParam0] != -1 && Global_4718592.f_111249[iParam0] <= 4)
		{
			if (Global_4718592.f_111249[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_111249[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_111249[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_111249[iParam0] == 4)
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
				iVar0 = Global_4718592.f_111249[iParam0];
			}
		}
		else
		{
			iVar0 = func_202(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_237(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_207(iParam0, unk_0x0E40F846A70BA3EC(iParam1), 0))
		{
			iVar0 = func_214(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_237(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_168914;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_168915;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_168916;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_168917;
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

bool func_238(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

int func_239()
{
	if ((Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 > 0 && Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 < 3) || (Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 == 0 && func_71(unk_0x9E2D6C50374FCFA9(), 6)))
	{
		if (func_138(unk_0x9E2D6C50374FCFA9(), 1, 0) || func_112())
		{
			if ((!func_240(unk_0x9E2D6C50374FCFA9(), 5) && !func_240(unk_0x9E2D6C50374FCFA9(), 32)) && !func_240(unk_0x9E2D6C50374FCFA9(), 148))
			{
				return 1;
			}
			else if (!iLocal_122)
			{
				if (unk_0x12DD4A0B247D9B4D(Global_1931397))
				{
					unk_0xFFD8EB5462B07B59(&Global_1931397);
				}
				iLocal_122 = 1;
			}
		}
		else if (iLocal_122)
		{
			func_247();
			iLocal_122 = 0;
		}
		if (Local_380.f_26 == 3)
		{
			if (Local_456[unk_0xF1354995C6159A78() /*4*/].f_3 == 0 && func_71(unk_0x9E2D6C50374FCFA9(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_240(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_83() != 0)
	{
		return 0;
	}
	if (!func_241(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853348[iVar0 /*834*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, iParam0);
	}
	return 1;
}

void func_242()
{
	if (unk_0x12DD4A0B247D9B4D(Global_1931397))
	{
		if (func_118() || func_243())
		{
			unk_0x94C2F928B167AA54(Global_1931397, 0);
		}
		else
		{
			unk_0x94C2F928B167AA54(Global_1931397, 4);
		}
		if (!iLocal_111)
		{
			if (func_263(unk_0x9E2D6C50374FCFA9(), 1, 0))
			{
				unk_0xA241A7085A493F20(Global_1931397, 1);
				iLocal_111 = 1;
			}
		}
		else if (!func_263(unk_0x9E2D6C50374FCFA9(), 1, 0))
		{
			unk_0xA241A7085A493F20(Global_1931397, 0);
			iLocal_111 = 0;
		}
	}
}

var func_243()
{
	return Global_2678393.f_1865;
}

int func_244()
{
	if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
	{
		if (func_4(Local_380.f_22))
		{
			if (unk_0xF798DCF92C74B531(unk_0xA5677134B9672173(Local_380.f_22), 0, 7000) || unk_0xF798DCF92C74B531(unk_0xA5677134B9672173(Local_380.f_22), 1, 40000))
			{
				if (unk_0x3BA0A79B368FAA6D(Local_380.f_22))
				{
					if (unk_0x07B2F8356DC13CF4(Local_380.f_22))
					{
						unk_0x2EE80CD0EAEB9B5B(unk_0xA5677134B9672173(Local_380.f_22), -2000f);
						unk_0x448AD51B3157C957(unk_0xA5677134B9672173(Local_380.f_22), 0f);
					}
					return 1;
				}
				else if (unk_0x54E30A65F4FA4962())
				{
					if (func_10(Local_380.f_22))
					{
						unk_0x2EE80CD0EAEB9B5B(unk_0xA5677134B9672173(Local_380.f_22), -2000f);
						unk_0x448AD51B3157C957(unk_0xA5677134B9672173(Local_380.f_22), 0f);
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

int func_245()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_316 == -1 && BitTest(uLocal_585, 5))
	{
		return 0;
	}
	if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
	{
		if (func_4(Local_380.f_22))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_380.f_22)))
				{
					if (func_246(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_380.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_316 >= 0)
			{
				if (iLocal_316 != unk_0xF1354995C6159A78())
				{
					if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iLocal_316)))
					{
						iVar0 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iLocal_316));
						if (func_14(iVar0, 1, 1))
						{
							iVar1 = unk_0x407E03586628E458(iVar0);
							if (unk_0x87B449F4C26E764A(iVar1, unk_0xA5677134B9672173(Local_380.f_22)))
							{
								if (func_246(iVar1, unk_0xA5677134B9672173(Local_380.f_22), -1))
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

int func_246(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0) && !unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		if (unk_0x87B449F4C26E764A(iParam0, iParam1))
		{
			if (unk_0xAB793EA186AB8DAA(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_247()
{
	Global_1931397 = unk_0xEFD6451BF0F3352F(unk_0xA5677134B9672173(Local_380.f_22));
	if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(unk_0xA5677134B9672173(Local_380.f_22))))
	{
		unk_0x1A5B5BA56167D412(Global_1931397, 348);
	}
	else
	{
		unk_0x1A5B5BA56167D412(Global_1931397, 225);
	}
	unk_0xA582EE8380437B1B(Global_1931397, 2);
	unk_0xAF62582F3EA39095(Global_1931397, "IMPEX_HIPR_BLP");
	if (func_118())
	{
		unk_0x94C2F928B167AA54(Global_1931397, 0);
	}
}

int func_248(int iParam0, int iParam1)
{
	if (func_165(iParam0, 1215605247, &uLocal_341, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_249(int iParam0, int iParam1, bool bParam2)
{
	if (func_254())
	{
		if (iParam1 == 1)
		{
			if (Global_2815059.f_4462 == -1)
			{
				Global_2815059.f_4462 = Global_262145.f_27172;
			}
			func_253(&(Global_2815059.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2815059.f_4465 == -1)
				{
					Global_2815059.f_4465 = Global_262145.f_27173;
				}
				func_253(&(Global_2815059.f_4463), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_8 = 0;
				func_252(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_8 = 0;
			func_252(1);
		}
		if ((!unk_0x44859561F653DD4E() && !func_251()) && !func_250(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1057408 = 0;
		}
		unk_0x5106CAAF87C49A90(0, -1, -1, iParam0);
	}
}

int func_250(int iParam0)
{
	if (func_138(iParam0, 1, 0))
	{
		if (Global_1853348[iParam0 /*834*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_251()
{
	return Global_2714762.f_841;
}

void func_252(bool bParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
		if (!func_254())
		{
			if (func_14(unk_0x9E2D6C50374FCFA9(), 1, 0))
			{
				unk_0x027BDA95C9BD0667(unk_0xE2D3D51028F0428A(), 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 342, 0);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 122, 0);
			}
			unk_0x0ACD4D4123D79892(unk_0x9E2D6C50374FCFA9(), 1f);
			unk_0x00F11F13DB7B0557(0);
			unk_0xAE3C2157FD741193(1);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					unk_0x6CA6298E3E0086F4(0, 0);
				}
			}
		}
		else
		{
			if (func_14(unk_0x9E2D6C50374FCFA9(), 1, 1))
			{
				unk_0x027BDA95C9BD0667(unk_0xE2D3D51028F0428A(), 0);
				unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 342, 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 122, 1);
				unk_0x0ACD4D4123D79892(unk_0x9E2D6C50374FCFA9(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					unk_0x6CA6298E3E0086F4(1, 0);
				}
			}
			unk_0x00F11F13DB7B0557(1);
			unk_0xAE3C2157FD741193(0);
		}
	}
}

void func_253(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x0A89FDFA763DCAED();
		}
		else
		{
			*uParam0 = unk_0xE75390F3CA208D5E();
		}
	}
	else
	{
		*uParam0 = unk_0x320D1840B6DAA1CC();
	}
	uParam0->f_1 = 1;
}

bool func_254()
{
	return Global_1574582;
}

void func_255(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_2815059.f_4660, 28))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2815059.f_4660), 28);
		}
	}
	else if (BitTest(Global_2815059.f_4660, 28))
	{
		unk_0xB0550BC91B0159D6(&(Global_2815059.f_4660), 28);
	}
}

int func_256()
{
	if (func_118())
	{
		return 0;
	}
	if (!func_257(0, 1, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_257(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xF847447D4467709D())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!unk_0xE9E8955A780DDA01())
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
		if (func_138(unk_0x9E2D6C50374FCFA9(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_261(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (func_110())
	{
		return 0;
	}
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (Global_1836356)
	{
		return 0;
	}
	if (func_260())
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (func_533())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (Global_2825428)
	{
		return 0;
	}
	if (func_258())
	{
		return 0;
	}
	return 1;
}

bool func_258()
{
	return Global_2788198;
}

bool func_259()
{
	return Global_2714762.f_691;
}

bool func_260()
{
	return Global_2714762.f_845;
}

int func_261(int iParam0)
{
	if (Global_2689235[iParam0 /*453*/].f_216 == 0)
	{
		return 0;
	}
	return 1;
}

void func_262(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_216, bParam0))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_216), bParam0);
		}
	}
	else if (BitTest(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_216, bParam0))
	{
		unk_0xB0550BC91B0159D6(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_216), bParam0);
	}
}

int func_263(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_121())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_264()
{
	struct<3> Var0;
	
	if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
	{
		if (func_4(Local_380.f_22))
		{
			if (!func_245())
			{
				Var0 = { unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_380.f_22), 1) };
				if (func_265(Var0, 1215605247, 18))
				{
					if (func_248(unk_0xA5677134B9672173(Local_380.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_265(struct<3> Param0, int iParam3, int iParam4)
{
	if (unk_0x987A5F1E1A67E3C0(Param0, func_168(iParam3), 1) <= IntToFloat(iParam4))
	{
		return 1;
	}
	return 0;
}

void func_266()
{
	if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
	{
		if (func_4(Local_380.f_22))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_380.f_22), 0))
				{
					if (!BitTest(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2, 2))
					{
						unk_0xCED9E32812D6C7C7(&(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2), 2);
					}
				}
				else if (func_267(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_380.f_22), 1) < 180f)
				{
					if (!BitTest(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2, 2))
					{
						unk_0xCED9E32812D6C7C7(&(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2), 2);
					}
				}
				else if (BitTest(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2, 2))
				{
					unk_0xB0550BC91B0159D6(&(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2), 2);
				}
			}
		}
	}
}

float func_267(int iParam0, int iParam1, int iParam2)
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

void func_268()
{
	int iVar0;
	
	if (iLocal_97)
	{
		func_374();
		if (!BitTest(uLocal_585, 1))
		{
			if (Global_2815059.f_1746 > 0)
			{
				if (Global_2815059.f_1749 == 0)
				{
					Global_2815059.f_1749 = unk_0x0A89FDFA763DCAED();
				}
				else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2815059.f_1749) > Global_262145.f_11941)
				{
					if (!func_107())
					{
						if (func_70())
						{
							if (func_256())
							{
								if (!func_373())
								{
									if (!func_372(0) && !func_123())
									{
										Global_22710 = 0;
										iVar0 = func_80(1200, -1, 0);
										if (!BitTest(iVar0, 0))
										{
											if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2815059.f_1749) > 20000)
											{
												if (func_371(18, "CELL_CLTEST6", 2, "NULL", Global_2815059.f_1746, "TestSender1", 4, 0, 1, 0, 0, bLocal_118, 0, 0, 0, 0, 0))
												{
													unk_0xCED9E32812D6C7C7(&iVar0, false);
													func_145(1200, iVar0, -1, 1, 0);
													unk_0xCED9E32812D6C7C7(&uLocal_585, true);
													func_369(0f, 0f, 0f, func_370(19), "");
													Global_2815059.f_1748 = 1;
													iLocal_97 = 0;
												}
											}
										}
										else if (func_371(18, "CELL_CLTEST1", 2, "NULL", Global_2815059.f_1746, "TestSender1", 4, 0, 1, 0, 0, bLocal_118, 0, 0, 0, 0, 0))
										{
											func_369(0f, 0f, 0f, func_370(19), "");
											unk_0xCED9E32812D6C7C7(&uLocal_585, true);
											Global_2815059.f_1748 = 1;
											iLocal_97 = 0;
										}
									}
								}
								else
								{
									Global_2815059.f_1749 = unk_0x0A89FDFA763DCAED();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (BitTest(uLocal_585, 1))
	{
		if (!BitTest(uLocal_338, 5))
		{
			if (func_256())
			{
				if (bLocal_118)
				{
					func_164("IMPEX_HELP_LNCH", -1);
				}
				unk_0xCED9E32812D6C7C7(&uLocal_338, 5);
				func_514(&uLocal_324, 0, 0);
			}
		}
	}
	if (iLocal_120)
	{
		if (func_522())
		{
			if (!func_515(&uLocal_128))
			{
				func_514(&uLocal_128, 0, 0);
			}
			else if (func_513(&uLocal_128, 10000, 0))
			{
				if (func_269(18, "CELL_IMPT", 0, 0))
				{
					iLocal_120 = 0;
					func_46(&uLocal_128);
				}
			}
		}
	}
}

bool func_269(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_270(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_270(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_271(&uVar0, iParam0, func_368(), sParam1, iVar165, 3, uParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_271(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xACC32B78196FBC2A(sParam2))
	{
		return 0;
	}
	if (unk_0x4B83FFC4B00987D9(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam3))
	{
		return 0;
	}
	if (unk_0x4B83FFC4B00987D9(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x2E87280918B16506(unk_0x05CBA41180F5D521());
	iVar1 = func_367(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xACC32B78196FBC2A(uParam7))
	{
		iVar2 = unk_0x2E87280918B16506(sParam7);
	}
	if (func_366(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_362(uParam6))
	{
		return 0;
	}
	if (func_359(iVar0, iVar1, iVar2))
	{
		if (func_358())
		{
			return 0;
		}
		func_357();
		return func_278(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_277(iParam4))
	{
		return 0;
	}
	func_272(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_272(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1641031.f_40.f_1 = iParam0;
	Global_1641031.f_40.f_2 = iParam1;
	Global_1641031.f_40.f_3 = iParam2;
	StringCopy(&(Global_1641031.f_40.f_4), sParam3, 16);
	Global_1641031.f_40.f_8 = iParam4;
	Global_1641031.f_40.f_9 = iParam5;
	Global_1641031.f_40.f_14 = uParam6;
	func_273(iParam4);
	func_357();
	Global_1641031.f_40.f_13 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), 7000);
}

void func_273(int iParam0)
{
	if (func_276(iParam0))
	{
		func_275();
		return;
	}
	func_274();
}

void func_274()
{
	Global_1641031.f_40.f_10 = 0;
}

void func_275()
{
	Global_1641031.f_40.f_10 = 1;
}

int func_276(int iParam0)
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

bool func_277(int iParam0)
{
	return iParam0 > Global_1641031.f_40.f_8;
}

int func_278(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_356();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_353(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_350(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_353(uParam0, sParam3, sParam4);
		}
		return func_333(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_332(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_321(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_320(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_279(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_279(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_319();
	bVar0 = true;
	if (func_281(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_280(120000);
		return 1;
	}
	return 0;
}

void func_280(int iParam0)
{
	Global_1641031.f_40.f_11 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), iParam0);
	Global_1641031.f_40.f_12 = 1;
}

int func_281(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0x61042CA2A97BBB69(iVar0);
		iVar1 = func_313(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Global_1641031.f_40.f_13))
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
	sVar4 = func_312(uParam5, bParam6, &iVar3);
	uVar5 = func_310(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		iVar6++;
		if (!unk_0xACC32B78196FBC2A(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3C57C2F07FEE34D2(sVar4, " "))
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
	if (!iVar3 == 0 || !unk_0xACC32B78196FBC2A(sVar2))
	{
		bVar12 = func_309(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_285(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_284();
	}
	func_319();
	func_283();
	func_282();
	return 1;
}

void func_282()
{
	Global_1641031.f_57 = 0;
	Global_1641031.f_57.f_1 = 0;
}

void func_283()
{
	Global_1641031.f_40 = 3;
}

void func_284()
{
	unk_0xCED9E32812D6C7C7(&Global_8136, 8);
}

int func_285(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_286(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			unk_0xCED9E32812D6C7C7(&Global_4541229, false);
		}
		return 1;
	}
	return 0;
}

int func_286(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3C57C2F07FEE34D2(sParam14, sParam15))
	{
	}
	func_302();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
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
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
			{
				return 0;
			}
		}
		if (Global_4541214 == 1)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_301() == 0)
	{
		func_299();
		return 0;
	}
	func_298(Global_4541213);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/]), sParam1, 64);
	Global_4539964[Global_4541213 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4539964[Global_4541213 /*104*/].f_24 = iParam2;
	}
	Global_4539964[Global_4541213 /*104*/].f_25 = iParam7;
	Global_4539964[Global_4541213 /*104*/].f_26 = uParam8;
	Global_4539964[Global_4541213 /*104*/].f_29 = uParam9;
	Global_4539964[Global_4541213 /*104*/].f_30 = uParam12;
	Global_4539964[Global_4541213 /*104*/].f_31 = uParam11;
	Global_4539964[Global_4541213 /*104*/].f_28 = 0;
	Global_4539964[Global_4541213 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_33), sParam4, 64);
	Global_4539964[Global_4541213 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_50), sParam5, 64);
	Global_4539964[Global_4541213 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_83), sParam15, 64);
	func_302();
	switch (iParam16)
	{
		case 3:
			Global_4539964[Global_4541213 /*104*/].f_99[Global_20266] = 1;
			break;
		
		case 0:
			Global_4539964[Global_4541213 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4539964[Global_4541213 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4539964[Global_4541213 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20266)
		{
			case 0:
				func_297(0);
				break;
			
			case 1:
				func_297(1);
				break;
			
			case 2:
				func_297(2);
				break;
			
			case 3:
				func_297(3);
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
				Global_4541214 = 1;
				break;
			
			case 0:
				Global_4541214 = 1;
				break;
			
			case 2:
				Global_4541214 = 1;
				break;
			
			case 1:
				Global_4541214 = 1;
				break;
			}
	}
	Global_22674[Global_4541213] = 0;
	if (bParam10)
	{
		func_302();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_296())
			{
				unk_0x91DFC8F68F6D9B05(-1, "Text_Arrive_Tone", &Global_20255, 1);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_295(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_291(1);
			func_295(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_287(iParam0, sParam1, bVar1, func_290(unk_0x9E2D6C50374FCFA9()));
	return 1;
}

void func_287(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_288())
	{
		return;
	}
	unk_0xD6CB1A1C9D35D3EF(iParam0, -1180597171, unk_0x2E87280918B16506(sParam1), 0, bParam2, uParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

int func_288()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_121())
	{
		return 0;
	}
	if (func_289(unk_0x9E2D6C50374FCFA9()))
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

bool func_289(int iParam0)
{
	return func_132(iParam0, 20);
}

var func_290(int iParam0)
{
	return Global_1853348[iParam0 /*834*/].f_205.f_6;
}

void func_291(int iParam0)
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
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_294(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20468 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_293(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar2);
								unk_0x6F06CF0E9AB02847();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_292(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[iVar0] = 1;
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
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_292(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									iVar4 = 0;
									iVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_292(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											iVar6 = Global_44249;
											break;
										
										case 1:
											iVar6 = Global_44250;
											break;
										
										case 2:
											iVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_292(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_292(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_293(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(Global_8142);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_293(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar7);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20468 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_293(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar8);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 8)
							{
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_293(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if ((iVar1 == 23 && unk_0x3C57C2F07FEE34D2(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_293(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_292(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_292(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_292(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xACC32B78196FBC2A(uParam7))
	{
		func_293(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(iParam8))
	{
		func_293(iParam8);
	}
	if (!unk_0xACC32B78196FBC2A(iParam9))
	{
		func_293(iParam9);
	}
	if (!unk_0xACC32B78196FBC2A(iParam10))
	{
		func_293(iParam10);
	}
	if (!unk_0xACC32B78196FBC2A(iParam11))
	{
		func_293(iParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_293(var uParam0)
{
	unk_0x4ADC8B166E139423(uParam0);
	unk_0xD1D4F8D5470AFA4C();
}

bool func_294(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_295(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x6F06CF0E9AB02847();
}

bool func_296()
{
	return Global_1575058;
}

void func_297(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113386.f_14051[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_298(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xAA2844CAD88768B5();
	uVar1 = unk_0x80F97D7D29800A1A();
	uVar2 = unk_0x09FC827691DACE59();
	uVar3 = unk_0xD52BD97E61483713();
	uVar4 = unk_0x771485043FDC55DE() + 1;
	uVar5 = unk_0x1137FD08B8D3F874();
	Global_4539964[iParam0 /*104*/].f_18 = uVar0;
	Global_4539964[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4539964[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4539964[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4539964[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4539964[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_299()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_300(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
		{
			Global_4541213 = iVar2;
		}
		iVar2++;
	}
	Global_4539964[Global_4541213 /*104*/].f_24 = 1;
}

int func_300(struct<6> Param0, struct<6> Param6)
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

int func_301()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0)
		{
			Global_4541213 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0 || Global_4539964[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_300(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
			{
				Global_4541213 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4541213 == 11)
	{
		return 0;
	}
	Global_4539964[Global_4541213 /*104*/].f_99[0] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[1] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[2] = 0;
	return 1;
}

void func_302()
{
	if (func_294(14))
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
		Global_20266 = func_303();
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

var func_303()
{
	func_304();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_304()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_307(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_306(unk_0xE2D3D51028F0428A());
			if (func_305(iVar0) && (!func_294(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_305(Global_113386.f_2363.f_539.f_4321))
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

bool func_305(int iParam0)
{
	return iParam0 < 3;
}

int func_306(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_307(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_307(int iParam0)
{
	if (func_305(iParam0))
	{
		return func_308(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_308(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_309(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_286(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			unk_0xCED9E32812D6C7C7(&Global_4541229, false);
		}
		return 1;
	}
	return 0;
}

int func_310(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_311(2, iParam1);
	return iParam0;
}

void func_311(int iParam0, var uParam1)
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

var func_312(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xACC32B78196FBC2A(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0x3C57C2F07FEE34D2(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_311(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xAEF70623D03F7B02(sParam0);
}

int func_313(int iParam0)
{
	int iVar0;
	
	iVar0 = func_316(iParam0);
	if (iVar0 == -1)
	{
		func_314(iParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_314(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_316(iParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (iParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (func_315(iParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = iParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_315(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660984)
	{
		if (Global_1660951[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_316(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1660944 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660944)
	{
		if (Global_1660783[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x87AF9112820EEC25(Global_1660783[iVar0 /*5*/].f_2) && unk_0x1B28B340344BA310(Global_1660783[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_317(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_317(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1660944)
	{
		return;
	}
	if (unk_0x87AF9112820EEC25(Global_1660783[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1660783[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xE1AFE5E1E834BBF0(Global_1660783[iParam0 /*5*/].f_2), 64);
			unk_0x8BC4D76163FA9E13(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x326ED9DD64134D76(Global_1660783[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1660944)
	{
		Global_1660783[iVar32 /*5*/] = { Global_1660783[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_318(&(Global_1660783[iVar32 /*5*/]));
	Global_1660944 = (Global_1660944 - 1);
}

void func_318(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_121();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x9315DBF7D972F07A())
	{
		uParam0->f_3 = unk_0x0A89FDFA763DCAED();
	}
}

void func_319()
{
	Global_1641031.f_40.f_9 = 4;
}

int func_320(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_319();
	bVar0 = false;
	return func_281(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_321(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_322(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_322(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0x61042CA2A97BBB69(iVar0);
		iVar1 = func_313(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22666 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_312(uParam5, bParam6, &iVar3);
	uVar5 = func_310(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		iVar6++;
		if (!unk_0xACC32B78196FBC2A(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3C57C2F07FEE34D2(sVar4, " "))
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
	if (!iVar3 == 0 || !unk_0xACC32B78196FBC2A(sVar2))
	{
		bVar12 = func_371(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_324(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_284();
	}
	func_323();
	func_283();
	func_282();
	return 1;
}

void func_323()
{
	Global_1641031.f_40.f_9 = 3;
}

int func_324(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xB0550BC91B0159D6(&Global_8136, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_326(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			Global_8746[3 /*6*/] = { func_325(iParam0) };
			Global_8823 = iParam0;
			unk_0xCED9E32812D6C7C7(&Global_8136, true);
			unk_0xCED9E32812D6C7C7(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_325(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_3;
}

int func_326(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3C57C2F07FEE34D2(sParam14, sParam15))
	{
	}
	func_302();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
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
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
			{
				return 0;
			}
		}
		if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_331() == 0)
	{
		func_329();
		return 0;
	}
	func_328(Global_22672);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/]), sParam1, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_24 = iParam2;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_25 = iParam7;
	Global_113386.f_14141[Global_22672 /*104*/].f_26 = uParam8;
	Global_113386.f_14141[Global_22672 /*104*/].f_29 = uParam9;
	Global_113386.f_14141[Global_22672 /*104*/].f_30 = uParam12;
	Global_113386.f_14141[Global_22672 /*104*/].f_31 = uParam11;
	Global_113386.f_14141[Global_22672 /*104*/].f_28 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_33), sParam4, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_50), sParam5, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8136, 10))
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
		Global_8842 = 4;
		func_297(0);
		func_297(2);
		func_297(1);
	}
	else
	{
		func_302();
		switch (iParam16)
		{
			case 3:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[Global_20266] = 1;
				break;
			
			case 0:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20266)
			{
				case 0:
					func_297(0);
					Global_8842 = 0;
					break;
				
				case 1:
					func_297(1);
					Global_8842 = 1;
					break;
				
				case 2:
					func_297(2);
					Global_8842 = 2;
					break;
				
				case 3:
					func_297(3);
					Global_8842 = 3;
					break;
				
				default:
					Global_8842 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8136, 10))
		{
			Global_113386.f_14051[0 /*20*/].f_17 = 1;
			Global_113386.f_14051[1 /*20*/].f_17 = 1;
			Global_113386.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113386.f_14051[Global_20266 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113386.f_14051[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113386.f_14051[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113386.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22674[Global_22672] = 0;
	if (bParam10)
	{
		func_302();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_296())
			{
				unk_0x91DFC8F68F6D9B05(-1, "Text_Arrive_Tone", &Global_20255, 1);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_295(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_291(1);
			func_295(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_327(iParam0, sParam1, bVar1, func_290(unk_0x9E2D6C50374FCFA9()));
	return 1;
}

void func_327(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_288())
	{
		return;
	}
	unk_0xD6CB1A1C9D35D3EF(iParam0, 1654525105, unk_0x2E87280918B16506(sParam1), 0, bParam2, uParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

void func_328(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xAA2844CAD88768B5();
	uVar1 = unk_0x80F97D7D29800A1A();
	uVar2 = unk_0x09FC827691DACE59();
	uVar3 = unk_0xD52BD97E61483713();
	uVar4 = unk_0x771485043FDC55DE() + 1;
	uVar5 = unk_0x1137FD08B8D3F874();
	Global_113386.f_14141[iParam0 /*104*/].f_18 = uVar0;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_329()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
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
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_330(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
		{
			Global_22672 = iVar2;
		}
		iVar2++;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_24 = 1;
}

int func_330(struct<6> Param0, struct<6> Param6)
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

int func_331()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
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
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22672 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0 || Global_113386.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_330(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
			{
				Global_22672 = iVar2;
			}
		}
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22672 == 34)
	{
		return 0;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 0;
	return 1;
}

int func_332(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
	}
	if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	func_323();
	bVar0 = true;
	if (func_322(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_280(120000);
		return 1;
	}
	return 0;
}

int func_333(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
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
		bVar0 = func_349(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_339(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_338(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_337(1);
		}
		func_336();
		func_283();
		func_335();
		func_334();
		return 1;
	}
	return 0;
}

void func_334()
{
	Global_2824944 = 0;
}

void func_335()
{
	Global_1641031.f_57 = 1;
	Global_1641031.f_57.f_1 = 0;
}

void func_336()
{
	Global_1641031.f_40.f_9 = 1;
}

void func_337(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8138, false);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8138, false);
	}
}

void func_338(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 20);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 20);
	}
}

int func_339(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_348(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	Global_2883585 = 0;
	return func_340(sParam3, iParam4, bParam7);
}

int func_340(char* sParam0, int iParam1, bool bParam2)
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
					func_347();
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
		if (func_114(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_346();
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
				func_302();
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
				if (func_345())
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
			if (func_344())
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
			func_343();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_342();
		func_341();
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
		func_347();
	}
	return 0;
}

void func_341()
{
	if (!func_288())
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

void func_342()
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

void func_343()
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

int func_344()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_345()
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

void func_346()
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

void func_347()
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

void func_348(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_349(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_348(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 1;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return func_340(sParam3, iParam4, bParam7);
}

int func_350(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
	}
	if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	if (func_352(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_351();
		func_336();
		func_283();
		func_335();
		func_334();
		return 1;
	}
	return 0;
}

void func_351()
{
	Global_22623 = 0;
}

bool func_352(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_348(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 1;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 1;
	Global_21659 = 0;
	StringCopy(&Global_21753, sParam5, 24);
	Global_2883585 = 0;
	return func_340(sParam3, iParam4, bParam8);
}

int func_353(var uParam0, char* sParam1, char* sParam2)
{
	if (func_355(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_354();
		func_283();
		func_335();
		return 1;
	}
	return 0;
}

void func_354()
{
	Global_1641031.f_40.f_9 = 2;
}

bool func_355(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_340(sParam2, iParam3, 0);
}

void func_356()
{
	Global_1641031.f_55 = Global_1641031.f_40.f_1;
	Global_1641031.f_55.f_1 = Global_1641031.f_40.f_10;
}

void func_357()
{
	Global_1641031.f_40 = 1;
}

bool func_358()
{
	return Global_1641031.f_40 == 1;
}

int func_359(int iParam0, int iParam1, int iParam2)
{
	if (!func_360(iParam0))
	{
		return 0;
	}
	if (Global_1641031.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1641031.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_360(int iParam0)
{
	if (!func_361())
	{
		return 0;
	}
	if (!Global_1641031.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_361()
{
	if (Global_1641031.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_362(var uParam0)
{
	if (func_365())
	{
		return 0;
	}
	if (func_109())
	{
		return 0;
	}
	if (func_372(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1931426 || func_364())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_363())
		{
			return 0;
		}
	}
	return 1;
}

bool func_363()
{
	return unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Global_1659413);
}

int func_364()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_365()
{
	return func_344();
}

int func_366(int iParam0, int iParam1, int iParam2)
{
	if (!func_109())
	{
		return 0;
	}
	return func_359(iParam0, iParam1, iParam2);
}

int func_367(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x2E87280918B16506(&cVar0);
}

char* func_368()
{
	return "TXTMSG";
}

int func_369(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!unk_0xACC32B78196FBC2A(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x3C57C2F07FEE34D2(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), sParam3))
			{
				if (unk_0xACC32B78196FBC2A(&(Global_2815059.f_4033[iVar0 /*26*/].f_4)))
				{
					Global_2815059.f_4033[iVar0 /*26*/] = 1;
					Global_2815059.f_4033[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_31(Global_2815059.f_4033[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2815059.f_4033[iVar0 /*26*/] = 1;
				Global_2815059.f_4033[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_10), sParam4, 64);
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

char* func_370(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_371(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0xB0550BC91B0159D6(&Global_8136, 10);
	iVar0 = 3;
	if (func_326(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			Global_8746[3 /*6*/] = { func_325(iParam0) };
			Global_8823 = iParam0;
			StringCopy(&Global_8824, sParam5, 64);
			unk_0xCED9E32812D6C7C7(&Global_8136, true);
			unk_0xCED9E32812D6C7C7(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

int func_372(int iParam0)
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

bool func_373()
{
	return func_361();
}

void func_374()
{
	if (func_70())
	{
		if (!iLocal_343 == Local_380.f_32)
		{
			Global_2815059.f_1706 = { Local_368 };
			func_375();
			iLocal_343 = Local_380.f_32;
		}
	}
}

void func_375()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2815059.f_1725[iVar1 /*4*/]), "", 16);
		if (!Global_2815059.f_1706[iVar1] == -1 && Global_2815059.f_1706.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2815059.f_1725[iVar0 /*4*/]), func_376(Global_2815059.f_1706[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2815059.f_1746 = iVar0;
}

char* func_376(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_377(bParam1, "IMPEX_2020_0B", "IMPEX_2020_0");
		
		case 1:
			return func_377(bParam1, "IMPEX_2020_1B", "IMPEX_2020_1");
		
		case 2:
			return func_377(bParam1, "IMPEX_2020_2B", "IMPEX_2020_2");
		
		case 3:
			return func_377(bParam1, "IMPEX_2020_3B", "IMPEX_2020_3");
		
		case 4:
			return func_377(bParam1, "IMPEX_2020_4B", "IMPEX_2020_4");
		
		case 5:
			return func_377(bParam1, "IMPEX_2020_5B", "IMPEX_2020_5");
		
		case 6:
			return func_377(bParam1, "IMPEX_2020_6B", "IMPEX_2020_6");
		
		case 7:
			return func_377(bParam1, "IMPEX_2020_7B", "IMPEX_2020_7");
		
		case 8:
			return func_377(bParam1, "IMPEX_2020_8B", "IMPEX_2020_8");
		
		case 9:
			return func_377(bParam1, "IMPEX_2020_9B", "IMPEX_2020_9");
		
		case 10:
			return func_377(bParam1, "IMPEX_2020_10B", "IMPEX_2020_10");
		
		case 11:
			return func_377(bParam1, "IMPEX_2020_11B", "IMPEX_2020_11");
		
		case 12:
			return func_377(bParam1, "IMPEX_2020_12B", "IMPEX_2020_12");
		
		case 13:
			return func_377(bParam1, "IMPEX_2020_13B", "IMPEX_2020_13");
		
		case 14:
			return func_377(bParam1, "IMPEX_2020_14B", "IMPEX_2020_14");
		
		case 15:
			return func_377(bParam1, "IMPEX_2020_15B", "IMPEX_2020_15");
		
		case 16:
			return func_377(bParam1, "IMPEX_2020_16B", "IMPEX_2020_16");
		
		case 17:
			return func_377(bParam1, "IMPEX_2020_17B", "IMPEX_2020_17");
		
		case 18:
			return func_377(bParam1, "IMPEX_2020_18B", "IMPEX_2020_18");
		
		case 19:
			return func_377(bParam1, "IMPEX_2020_19B", "IMPEX_2020_19");
		
		default:
	}
	return "";
}

char* func_377(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_378()
{
	int iVar0;
	
	if (!iLocal_112)
	{
		if (!func_383(unk_0x9E2D6C50374FCFA9(), 1))
		{
			if (!func_122(unk_0x9E2D6C50374FCFA9(), 0))
			{
				if (!Local_380.f_28 == -1)
				{
					if (!iLocal_345 == func_34(Local_380.f_28))
					{
						if (!func_382(unk_0xE2D3D51028F0428A()))
						{
							if (!func_381(unk_0x9E2D6C50374FCFA9()))
							{
								iLocal_345 = func_34(Local_380.f_28);
								iVar0 = 0;
								while (iVar0 < iLocal_355)
								{
									unk_0xE81F6467AD1C34FC(iLocal_355[iVar0], iLocal_345);
									iVar0++;
								}
								iLocal_112 = 1;
								unk_0xD69A0C3662175E68(iLocal_345);
								func_380();
								func_379(iLocal_345);
							}
						}
					}
				}
			}
		}
	}
	else if ((((func_383(unk_0x9E2D6C50374FCFA9(), 1) || (Local_380.f_28 > -1 && !iLocal_345 == func_34(Local_380.f_28))) || func_382(unk_0xE2D3D51028F0428A())) || func_122(unk_0x9E2D6C50374FCFA9(), 0)) || func_381(unk_0x9E2D6C50374FCFA9()))
	{
		unk_0xF1A23B343DFEDFD0(iLocal_345);
		iVar0 = 0;
		while (iVar0 < iLocal_355)
		{
			unk_0x70FCA19A938A5DF3(iLocal_355[iVar0]);
			iVar0++;
		}
		func_380();
		iLocal_345 = 0;
		iLocal_112 = 0;
	}
}

void func_379(int iParam0)
{
	if (BitTest(Local_380.f_23, 0))
	{
		if (iParam0 == Local_380.f_67)
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
			iLocal_298[0] = unk_0x375BB75B2409BEFC(-54.2664f, -1679.549f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[1] = unk_0x375BB75B2409BEFC(-47.0703f, -1115.41f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[2] = unk_0x375BB75B2409BEFC(1227.06f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[3] = unk_0x375BB75B2409BEFC(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[4] = unk_0x375BB75B2409BEFC(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[5] = unk_0x375BB75B2409BEFC(1123.513f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[6] = unk_0x375BB75B2409BEFC(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[7] = unk_0x375BB75B2409BEFC(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[8] = unk_0x375BB75B2409BEFC(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[9] = unk_0x375BB75B2409BEFC(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_309 = 1;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_298[0] = unk_0x375BB75B2409BEFC(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[1] = unk_0x375BB75B2409BEFC(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[2] = unk_0x375BB75B2409BEFC(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[3] = unk_0x375BB75B2409BEFC(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[4] = unk_0x375BB75B2409BEFC(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[5] = unk_0x375BB75B2409BEFC(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[6] = unk_0x375BB75B2409BEFC(-1101.607f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[7] = unk_0x375BB75B2409BEFC(-3018.759f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[8] = unk_0x375BB75B2409BEFC(-1550.796f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[9] = unk_0x375BB75B2409BEFC(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_309 = 1;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_298[0] = unk_0x375BB75B2409BEFC(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[1] = unk_0x375BB75B2409BEFC(-2437.372f, 3377.217f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[2] = unk_0x375BB75B2409BEFC(-1639.857f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[3] = unk_0x375BB75B2409BEFC(-2981.245f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[4] = unk_0x375BB75B2409BEFC(-1542.332f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[5] = unk_0x375BB75B2409BEFC(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[6] = unk_0x375BB75B2409BEFC(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[7] = unk_0x375BB75B2409BEFC(-976.5854f, -2573.472f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[8] = unk_0x375BB75B2409BEFC(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[9] = unk_0x375BB75B2409BEFC(-208.5685f, -2077.887f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_309 = 1;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_298[0] = unk_0x375BB75B2409BEFC(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[1] = unk_0x375BB75B2409BEFC(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[2] = unk_0x375BB75B2409BEFC(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[3] = unk_0x375BB75B2409BEFC(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[4] = unk_0x375BB75B2409BEFC(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[5] = unk_0x375BB75B2409BEFC(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[6] = unk_0x375BB75B2409BEFC(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[7] = unk_0x375BB75B2409BEFC(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[8] = unk_0x375BB75B2409BEFC(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_298[9] = unk_0x375BB75B2409BEFC(1218.18f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_309 = 1;
			break;
	}
}

void func_380()
{
	int iVar0;
	
	if (iLocal_309)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xD23A6EB80C5CA596(iLocal_298[iVar0]))
		{
			unk_0xFE29EC7E7BCC0E15(iLocal_298[iVar0]);
		}
		iLocal_298[iVar0] = 0;
		iVar0++;
	}
	iLocal_309 = 0;
}

int func_381(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_120(Global_2689235[iParam0 /*453*/].f_318.f_6) == 11;
			}
		}
	}
	return 0;
}

bool func_382(int iParam0)
{
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	if (unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
	}
	return unk_0x6D7EE245AD1E10B0(iParam0) == Global_152057;
}

bool func_383(int iParam0, bool bParam1)
{
	if (func_83() != 0)
	{
		return func_384(iParam0) != 0;
	}
	return func_138(iParam0, bParam1, 0);
}

int func_384(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_1;
	}
	return 0;
}

void func_385()
{
	var uVar0;
	
	if (!func_515(&uLocal_330))
	{
		func_514(&uLocal_330, 0, 0);
	}
	else if (func_513(&uLocal_330, 250, 0))
	{
		func_46(&uLocal_330);
		if (func_400(1, 0))
		{
			if (!BitTest(uLocal_338, 5) && !func_399())
			{
			}
			else if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				if ((func_398() || func_399()) || func_394())
				{
					if (!func_393(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
					{
						if (!func_392(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)) && !func_15(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
						{
							if (!unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
							{
								if (func_387(&uVar0))
								{
									if (!BitTest(uLocal_338, 2))
									{
										if (func_256() && unk_0x83666F9FB8FEBD4B() > 500)
										{
											func_164("IMPEX_FSPRAY_FM", -1);
											unk_0xCED9E32812D6C7C7(&uLocal_338, 2);
										}
									}
									else
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
								else if (!BitTest(uLocal_338, 8))
								{
									if (func_256() && unk_0x83666F9FB8FEBD4B() > 500)
									{
										func_164("IMPEX_CASH_FM", -1);
										unk_0xCED9E32812D6C7C7(&uLocal_338, 8);
									}
								}
								else
								{
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else if (!BitTest(uLocal_338, 11))
							{
								if (func_256() && unk_0x83666F9FB8FEBD4B() > 500)
								{
									func_164("IMPEX_WANTED_FM", -1);
									unk_0xCED9E32812D6C7C7(&uLocal_338, 11);
								}
							}
							else
							{
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						else if (!unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
						{
							if (!func_386())
							{
								if (!func_15(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
								{
									if (!BitTest(uLocal_338, 3))
									{
										unk_0xB0550BC91B0159D6(&uLocal_338, 7);
										if (func_256() && unk_0x83666F9FB8FEBD4B() > 2000)
										{
											if (Global_2815059.f_4585 == 0)
											{
												if (!func_248(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
												{
													func_164("IMPEX_DELIVER_FM", -1);
													unk_0xCED9E32812D6C7C7(&uLocal_338, 3);
												}
											}
										}
									}
									else
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
								else if (!BitTest(uLocal_338, 7))
								{
									if (func_256() && unk_0x83666F9FB8FEBD4B() > 2000)
									{
										func_164("IMPEX_RIG_FM", -1);
										unk_0xCED9E32812D6C7C7(&uLocal_338, 7);
									}
								}
								else
								{
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else if (!BitTest(uLocal_338, 6))
							{
								if (func_256() && unk_0x83666F9FB8FEBD4B() > 2000)
								{
									func_164("IMPEX_WANTED_P", -1);
									unk_0xCED9E32812D6C7C7(&uLocal_338, 6);
								}
							}
							else
							{
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						else if (!BitTest(uLocal_338, 4))
						{
							if (func_256() && unk_0x83666F9FB8FEBD4B() > 5000)
							{
								func_164("IMPEX_WANTED_FM", -1);
								unk_0xCED9E32812D6C7C7(&uLocal_338, 4);
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
					if (func_238("IMPEX_FSPRAY_FM"))
					{
						unk_0x3410421C60BF7143(1);
					}
					unk_0xB0550BC91B0159D6(&uLocal_338, 2);
					unk_0xB0550BC91B0159D6(&uLocal_338, 3);
					unk_0xB0550BC91B0159D6(&uLocal_338, 4);
					unk_0xB0550BC91B0159D6(&uLocal_338, 6);
					unk_0xB0550BC91B0159D6(&uLocal_338, 7);
					unk_0xB0550BC91B0159D6(&uLocal_338, 8);
					unk_0xB0550BC91B0159D6(&uLocal_338, 11);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else
			{
				if (func_238("IMPEX_FSPRAY_FM"))
				{
					unk_0x3410421C60BF7143(1);
				}
				unk_0xB0550BC91B0159D6(&uLocal_338, 2);
				unk_0xB0550BC91B0159D6(&uLocal_338, 3);
				unk_0xB0550BC91B0159D6(&uLocal_338, 4);
				unk_0xB0550BC91B0159D6(&uLocal_338, 6);
				unk_0xB0550BC91B0159D6(&uLocal_338, 7);
				unk_0xB0550BC91B0159D6(&uLocal_338, 8);
				unk_0xB0550BC91B0159D6(&uLocal_338, 11);
				if (unk_0x83666F9FB8FEBD4B() > 0)
				{
					unk_0xC1B1E9A034A63A62(0);
				}
			}
		}
		else if (func_238("IMPEX_FSPRAY_FM"))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
}

int func_386()
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar1 = (iVar2 - 1);
		if (!unk_0x7158135695FAE89D(uVar3, iVar1, 0))
		{
			if (unk_0xE5965CDF24F93A9F(unk_0xAB793EA186AB8DAA(iVar3, iVar1, 0)))
			{
				if (!unk_0x55B23FE400FCEA6B(unk_0xAB793EA186AB8DAA(iVar3, iVar1, 0), 0))
				{
					uVar0 = unk_0xAB793EA186AB8DAA(iVar3, iVar1, 0);
					if (!unk_0x65FAB09725E2FE75(uVar0))
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

int func_387(var uParam0)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (unk_0xE5965CDF24F93A9F(iVar0) && unk_0x3A8B0F5B0E3DE13A(iVar0))
		{
			*uParam0 = func_388(iVar0, 0);
			if (!unk_0x616226219F841621((400 + *uParam0), 0, 0, 1, -1, 0))
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

int func_388(int iParam0, bool bParam1)
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
	
	if (func_391(unk_0x9E2D6C50374FCFA9()) && !bParam1)
	{
		return 0;
	}
	fVar3 = unk_0xD3FF3A3C2D524A18(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (unk_0x20E1198E4672F72D(iParam0) / 1000f);
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
	fVar3 = (unk_0xDA70F2C4F36B81CB(iParam0) / 1000f);
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
	fVar3 = (unk_0xBBDA792448DB5A89(unk_0x0CF63873D754B965(iParam0)) / 1000f);
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
	if (unk_0xD37B43EB5FB2E301(iParam0))
	{
		iVar8 += 50;
	}
	if (unk_0xC9D76A6A7441F5A4(iParam0, 1))
	{
		iVar8 += 50;
	}
	else if (unk_0xB27089B11E5DBCAD(iParam0, 1))
	{
		iVar8 += 25;
	}
	if (unk_0xC9D76A6A7441F5A4(iParam0, 0))
	{
		iVar8 += 50;
	}
	else if (unk_0xB27089B11E5DBCAD(iParam0, 0))
	{
		iVar8 += 25;
	}
	if (!unk_0x9CA0CB41F81C959C(iParam0))
	{
		iVar10 += 20;
		if (!unk_0x49E701A18D345B0E(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!unk_0x49E701A18D345B0E(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (unk_0xCB09A834F0C86FBB(unk_0x15CAA6D7B11F1A7C(iParam0)))
	{
		iVar1 = 0;
		if (unk_0x2ABE742A1B0BF1A6(iParam0, 0))
		{
			iVar1++;
		}
		if (unk_0x2ABE742A1B0BF1A6(iParam0, 1))
		{
			iVar1++;
		}
		if (unk_0x2ABE742A1B0BF1A6(iParam0, 2))
		{
			iVar1++;
		}
		if (unk_0x2ABE742A1B0BF1A6(iParam0, 3))
		{
			iVar1++;
		}
		if (unk_0x2ABE742A1B0BF1A6(iParam0, 4))
		{
			iVar1++;
		}
		if (unk_0x2ABE742A1B0BF1A6(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (unk_0x957511EA92CF8139(iParam0))
	{
		iVar8 += 15;
	}
	if (unk_0x2DFAF27126D5D66A(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (unk_0xB4C63F21D1DC6C23(iParam0, iVar2, 0))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (unk_0x588C47CEDF788E4C(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_390(unk_0x15CAA6D7B11F1A7C(iParam0), 0))
	{
		iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_12023));
		if (iVar0 > unk_0xF34EE736CF047844((4f * Global_262145.f_12023)))
		{
			iVar4 = Global_262145.f_12021;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_12022)
		{
			iVar0 = Global_262145.f_12022;
		}
	}
	else if (func_389(iParam0))
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

int func_389(int iParam0)
{
	switch (unk_0x15CAA6D7B11F1A7C(iParam0))
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

int func_390(int iParam0, int iParam1)
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

int func_391(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_120(Global_2689235[iParam0 /*453*/].f_318.f_6) == 22;
			}
		}
	}
	return 0;
}

bool func_392(int iParam0)
{
	return unk_0xF2549FF74D64B720(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_393(int iParam0)
{
	if (unk_0xF2549FF74D64B720(iParam0, "Veh_Modded_By_Player") && unk_0xC3B76795ECBDEF41(iParam0, "Veh_Modded_By_Player") != unk_0x4AE7F6D227ED332C(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

int func_394()
{
	var uVar0;
	
	if (func_524())
	{
		return 0;
	}
	if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
	{
		uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (!func_397(uVar0, 1) && !func_396(uVar0, 1))
		{
			if (func_395(unk_0x15CAA6D7B11F1A7C(uVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_395(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(iParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_380.f_35[iVar1] == iVar0)
			{
				if (!func_513(&(Local_380.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_396(int iParam0, bool bParam1)
{
	if (Global_78319)
	{
		if (unk_0xE5965CDF24F93A9F(uParam0) && (!bParam1 || unk_0x55A0C756C4A8220C(iParam0, 0)))
		{
			if (unk_0x6BD06F4780EAC5DD("TestDrive", 2))
			{
				if (unk_0xF2549FF74D64B720(iParam0, "TestDrive"))
				{
					return unk_0x9A1E55620A6C250D(iParam0, "TestDrive");
				}
			}
		}
	}
	return 0;
}

int func_397(int iParam0, bool bParam1)
{
	if (Global_78319)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && (!bParam1 || unk_0x55A0C756C4A8220C(iParam0, 0)))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_398()
{
	var uVar0;
	
	if (func_524())
	{
		return 0;
	}
	if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
	{
		if (!Global_1922044)
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (!func_397(uVar0, 1) && !func_396(uVar0, 1))
			{
				if (!unk_0xA763B3F87DA3C316(uVar0, 0))
				{
					if (unk_0x55A0C756C4A8220C(iVar0, 1))
					{
						if (Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_32 <= 0)
						{
							if (!unk_0xF2549FF74D64B720(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1922043)
								{
									if (bLocal_310)
									{
										bLocal_310 = false;
									}
									if (func_74(&Local_368, unk_0x15CAA6D7B11F1A7C(iVar0)))
									{
										Global_2815059.f_1750 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_310)
					{
						bLocal_310 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_399()
{
	if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
	{
		if (BitTest(Local_380.f_23, 0))
		{
			if (unk_0x90F6E2F6488B98BA(Local_380.f_22))
			{
				if (func_4(Local_380.f_22))
				{
					if (unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_380.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_400(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		bVar0 = false;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
			{
				bVar0 = false;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (func_138(unk_0x9E2D6C50374FCFA9(), 1, 0))
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
	if (!func_14(unk_0x9E2D6C50374FCFA9(), 0, 0))
	{
		bVar0 = false;
	}
	if (func_71(unk_0x9E2D6C50374FCFA9(), 1))
	{
		bVar0 = false;
	}
	if (func_122(unk_0x9E2D6C50374FCFA9(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_401()
{
	int iVar0;
	
	switch (iLocal_125)
	{
		case 0:
			if (!func_138(unk_0x9E2D6C50374FCFA9(), 1, 0))
			{
				if (!func_515(&uLocal_126) || func_513(&uLocal_126, 2000, 0))
				{
					if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1199.403f, -3113.591f, 4.5453f) < 400f)
						{
							func_404(&uLocal_130, 4, iLocal_124, "MECHANIC_IMP", 0, 1);
							iLocal_587 = 0;
							iLocal_125++;
						}
					}
					func_46(&uLocal_126);
					func_514(&uLocal_126, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (!func_138(unk_0x9E2D6C50374FCFA9(), 1, 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_109)
						{
							if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
							{
								if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1204.224f, -3121.533f, 4.357823f, 1204.521f, -3107.603f, 8.653814f, 5.1875f, 0, 1, 0))
								{
									if (!iLocal_587)
									{
										iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
										if (func_388(iVar0, 0) > 500)
										{
											sLocal_588 = "FM_IEPOOR";
										}
										else
										{
											sLocal_588 = "FM_IEGOOD";
										}
										iLocal_587 = 1;
									}
									else if (func_403(&uLocal_130, "FM_1AU", sLocal_588, 12, 0, 0, 0))
									{
										iLocal_295 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
										iLocal_125++;
										iLocal_587 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_402();
						iLocal_125 = 0;
					}
				}
				else
				{
					func_402();
					iLocal_125 = 0;
				}
			}
			break;
		
		case 2:
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (!func_138(unk_0x9E2D6C50374FCFA9(), 1, 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_109)
						{
							if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
							{
								if (unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0) != iLocal_295)
								{
									iLocal_125 = 1;
								}
							}
						}
					}
					else
					{
						func_402();
						iLocal_125 = 0;
					}
				}
				else
				{
					func_402();
					iLocal_125 = 0;
				}
			}
			break;
	}
}

void func_402()
{
	var uVar0;
	
	if (unk_0xE5965CDF24F93A9F(iLocal_124))
	{
		unk_0xF1A23B343DFEDFD0(joaat("s_m_y_xmech_02"));
		uVar0 = iLocal_124;
		unk_0x531055A66E7A812C(&uVar0);
	}
}

bool func_403(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 1;
	return func_340(sParam2, iParam3, 0);
}

void func_404(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_405()
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
	
	if (func_400(1, 1))
	{
		switch (Local_456[unk_0xF1354995C6159A78() /*4*/].f_1)
		{
			case 0:
				if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
				{
					bVar7 = func_394();
					if ((func_398() || func_399()) || bVar7)
					{
						if (!func_386())
						{
							if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
							{
								if (!func_502())
								{
									if (bLocal_108)
									{
										bLocal_108 = false;
									}
									iVar3 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
									if (unk_0x6BD06F4780EAC5DD("AllowModSprayRepair", 2))
									{
										if (!unk_0xF2549FF74D64B720(iVar3, "AllowModSprayRepair") || (unk_0xF2549FF74D64B720(iVar3, "AllowModSprayRepair") && unk_0x9A1E55620A6C250D(iVar3, "AllowModSprayRepair") == 0))
										{
											unk_0x2C8C3211219C37BD(iVar3, "AllowModSprayRepair", 1);
										}
									}
									if (!iLocal_114)
									{
										if (func_501(iVar3))
										{
											unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 2, 0);
											unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
										}
									}
									iLocal_589 = iVar3;
									if (BitTest(uLocal_585, 15))
									{
										unk_0xB0550BC91B0159D6(&uLocal_585, 15);
									}
									if (BitTest(uLocal_338, 9))
									{
										unk_0xB0550BC91B0159D6(&uLocal_338, 9);
									}
									if (BitTest(uLocal_338, 12))
									{
										unk_0xB0550BC91B0159D6(&uLocal_338, 12);
									}
									if (BitTest(uLocal_338, 10))
									{
										unk_0xB0550BC91B0159D6(&uLocal_338, 10);
									}
									if (!BitTest(uLocal_585, 12))
									{
										if (bVar7)
										{
											unk_0xCED9E32812D6C7C7(&uLocal_585, 12);
										}
									}
									else if (!bVar7)
									{
										unk_0xB0550BC91B0159D6(&uLocal_585, 12);
									}
									if (func_392(iVar3))
									{
										if (!func_15(iVar3))
										{
											bLocal_101 = true;
											if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
											{
												if (bLocal_107)
												{
													bLocal_107 = false;
												}
												if (unk_0xAB793EA186AB8DAA(iVar3, -1, 0) == unk_0xE2D3D51028F0428A())
												{
													bLocal_104 = true;
												}
											}
											else if (func_77())
											{
												if (bLocal_104)
												{
													bLocal_104 = false;
												}
												bLocal_107 = true;
											}
											bLocal_102 = false;
											bLocal_103 = false;
											bLocal_105 = false;
											bLocal_106 = false;
											bLocal_108 = false;
											bLocal_109 = true;
											if (func_500(1215605247, 18))
											{
												bLocal_99 = true;
											}
											iLocal_351 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
											if (!unk_0xE2ED785E8DB4D3FF(iLocal_351))
											{
												if (func_248(iLocal_351, 0))
												{
													if (!BitTest(uLocal_585, 17))
													{
														unk_0xCED9E32812D6C7C7(&uLocal_585, 17);
													}
													else if (func_248(iLocal_351, 1))
													{
														Var9 = { unk_0xC35FBD95659582C4(iLocal_351) };
														if (unk_0x207D53F9E0190691(iLocal_351) < 0.5f || unk_0x48053974ED6F63CE(Var9.f_1) < 1.3f)
														{
															func_499();
															func_490(unk_0x9E2D6C50374FCFA9(), 0, 16388, 0);
															if (func_399())
															{
																unk_0xCED9E32812D6C7C7(&uLocal_585, 4);
																unk_0xCED9E32812D6C7C7(&(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2), true);
															}
															if (func_398() || func_394())
															{
																unk_0xCED9E32812D6C7C7(&uLocal_585, 6);
															}
															if (func_489())
															{
																bLocal_98 = true;
															}
															else
															{
																bLocal_98 = false;
															}
															unk_0x3B2646B62E7BBE11(iLocal_351, 2);
															if (unk_0x3A8B0F5B0E3DE13A(iLocal_351))
															{
																unk_0xBED097BB6359F09C(iLocal_351, 1, 1, 1, 1, 1, 0, 0, 0);
															}
															Local_456[unk_0xF1354995C6159A78() /*4*/] = func_75(unk_0x15CAA6D7B11F1A7C(iLocal_351));
															Local_456[unk_0xF1354995C6159A78() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_346[iVar4] = func_121();
																if (!unk_0x7158135695FAE89D(iLocal_351, iVar1, 0))
																{
																	if (unk_0xE5965CDF24F93A9F(unk_0xAB793EA186AB8DAA(iLocal_351, iVar1, 0)))
																	{
																		if (!unk_0x55B23FE400FCEA6B(unk_0xAB793EA186AB8DAA(iLocal_351, iVar1, 0), 0))
																		{
																			iVar0 = unk_0xAB793EA186AB8DAA(iLocal_351, iVar1, 0);
																			if (unk_0x65FAB09725E2FE75(iVar0))
																			{
																				if (func_14(unk_0xFF65CDB0EB7ACE71(iVar0), 0, 0))
																				{
																					if (unk_0x976D40337FCB1481(unk_0xFF65CDB0EB7ACE71(iVar0)))
																					{
																						iLocal_346[iVar4] = unk_0xFF65CDB0EB7ACE71(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_317 = func_488(unk_0x15CAA6D7B11F1A7C(iLocal_351));
															iLocal_318 = func_388(iLocal_351, 0);
															fLocal_319 = unk_0xBBDA792448DB5A89((iLocal_317 - iLocal_318));
															fLocal_319 = (fLocal_319 * Global_262145.f_2421);
															if (BitTest(uLocal_585, 4))
															{
																fLocal_319 = (fLocal_319 * 1.3f);
															}
															fLocal_319 = (fLocal_319 / unk_0xBBDA792448DB5A89(iVar5));
															fLocal_320 = 500f;
															func_487();
															func_172(0);
															func_485(1248, 1, -1);
															if (func_238("IMPEX_DELIVER_FM"))
															{
																unk_0x3410421C60BF7143(1);
															}
															unk_0xB0550BC91B0159D6(&uLocal_585, 12);
															iVar6 = func_80(1200, -1, 0);
															if (!BitTest(iVar6, 1))
															{
																unk_0xCED9E32812D6C7C7(&iVar6, true);
																func_145(1200, iVar6, -1, 1, 0);
															}
															else if (!BitTest(iVar6, 2))
															{
																unk_0xCED9E32812D6C7C7(&iVar6, 2);
																func_145(1200, iVar6, -1, 1, 0);
															}
															func_484();
															iLocal_321 = 0;
															iLocal_321 = unk_0xF2DB717A73826179(fLocal_319);
															iLocal_321 = (iLocal_321 - (iLocal_321 % 25));
															if (iLocal_590 == iVar3)
															{
																iLocal_321 = (iLocal_321 + iLocal_323);
															}
															if (!BitTest(uLocal_585, 4))
															{
																if (iLocal_321 > Global_262145.f_173)
																{
																	iLocal_321 = Global_262145.f_173;
																}
															}
															else if (iLocal_321 > Global_262145.f_173)
															{
																iLocal_321 = Global_262145.f_173;
															}
															iLocal_322 = 0;
															fLocal_320 = (fLocal_320 * Global_262145.f_4237);
															iLocal_322 = unk_0xF2DB717A73826179(fLocal_320);
															unk_0xB0550BC91B0159D6(&uLocal_585, 17);
															iLocal_352 = iLocal_351;
															iLocal_354 = unk_0x15CAA6D7B11F1A7C(iLocal_351);
															if (!BitTest(uLocal_585, 4))
															{
																unk_0xB69482ECD5B39C5D(19, iLocal_322, iLocal_321, iLocal_351);
															}
															else
															{
																unk_0xB69482ECD5B39C5D(120, iLocal_322, iLocal_321, iLocal_351);
															}
															func_483(19, 1);
															func_482();
															func_518();
														}
														else if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
														{
															func_490(unk_0x9E2D6C50374FCFA9(), 0, 16388, 0);
														}
													}
												}
												else if (BitTest(uLocal_585, 17))
												{
													unk_0xB0550BC91B0159D6(&uLocal_585, 17);
												}
											}
										}
										else
										{
											if (bLocal_101)
											{
												bLocal_101 = false;
											}
											if (bLocal_109)
											{
												bLocal_109 = false;
											}
											if (bLocal_104)
											{
												bLocal_104 = false;
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
									else if (!func_15(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
									{
										if (func_387(&iVar8))
										{
											if (!func_393(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
											{
												if (unk_0xAB793EA186AB8DAA(iVar3, -1, 0) == unk_0xE2D3D51028F0428A())
												{
													if (iLocal_590 != iVar3)
													{
														iLocal_590 = iVar3;
														iLocal_323 = 0;
													}
													else if (iLocal_323 != iVar8)
													{
														if (iLocal_323 < iVar8)
														{
															iLocal_323 = iVar8;
														}
													}
												}
												if (!bLocal_102)
												{
													bLocal_102 = true;
												}
												if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
												{
													if (func_77())
													{
														if (bLocal_103)
														{
															bLocal_103 = false;
														}
														if (unk_0xAB793EA186AB8DAA(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), -1, 0) == unk_0xE2D3D51028F0428A())
														{
															if (func_388(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0) > 0)
															{
																if (!bLocal_106)
																{
																	bLocal_106 = true;
																}
															}
															else
															{
																if (bLocal_106)
																{
																	bLocal_106 = false;
																}
																if (!bLocal_105)
																{
																	bLocal_105 = true;
																}
															}
														}
													}
												}
												else if (!func_77())
												{
													if (bLocal_105)
													{
														bLocal_105 = false;
													}
													if (bLocal_106)
													{
														bLocal_106 = false;
													}
													if (!bLocal_103)
													{
														if (unk_0xAB793EA186AB8DAA(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), -1, 0) == unk_0xE2D3D51028F0428A())
														{
															bLocal_103 = true;
														}
													}
												}
											}
											else
											{
												func_481();
											}
										}
										else
										{
											func_481();
										}
									}
									else
									{
										func_481();
										if (bLocal_109)
										{
											bLocal_109 = false;
										}
									}
								}
							}
							else
							{
								iVar3 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
								if (iLocal_589 != iVar3)
								{
									if (!iLocal_114)
									{
										if (func_501(iVar3))
										{
											unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 2, 0);
											unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
										}
									}
									iLocal_589 = iVar3;
								}
								if (!bLocal_108)
								{
									func_481();
									bLocal_108 = true;
								}
							}
						}
					}
					else
					{
						func_481();
						if (bLocal_109)
						{
							bLocal_109 = false;
						}
						if (iLocal_114)
						{
							if (Local_380.f_33)
							{
								if (bLocal_119)
								{
									iLocal_114 = 0;
								}
							}
						}
						if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
						{
							if ((func_238("IMPEX_NOT_NEED") || func_238("IMPEX_NO_MORE")) || func_238("IMPEX_NOT_PVEH"))
							{
								unk_0x3410421C60BF7143(1);
							}
						}
						iVar2 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
						if (func_397(iVar2, 1))
						{
							if (unk_0xAB793EA186AB8DAA(iVar2, -1, 0) == unk_0xE2D3D51028F0428A())
							{
								if (unk_0xF2549FF74D64B720(iVar2, "Player_Vehicle"))
								{
									if (unk_0xC3B76795ECBDEF41(iVar2, "Player_Vehicle") != unk_0x4AE7F6D227ED332C(unk_0x9E2D6C50374FCFA9()) || iVar2 == iLocal_589)
									{
										if (unk_0x55A0C756C4A8220C(iVar2, 0))
										{
											if (func_256())
											{
												if (!BitTest(uLocal_585, 15))
												{
													if (bVar7 || func_74(&Local_368, unk_0x15CAA6D7B11F1A7C(iVar2)))
													{
														func_164("IMPEX_NOT_PVEH", -1);
														unk_0xCED9E32812D6C7C7(&uLocal_585, 15);
													}
												}
											}
										}
									}
									else if (BitTest(uLocal_585, 15))
									{
										if (iVar2 != iLocal_589)
										{
											unk_0xB0550BC91B0159D6(&uLocal_585, 15);
										}
									}
								}
							}
						}
						else
						{
							if (BitTest(uLocal_585, 15))
							{
								if (iVar2 != iLocal_589)
								{
									unk_0xB0550BC91B0159D6(&uLocal_585, 15);
								}
							}
							if (bLocal_115)
							{
								if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && func_500(1215605247, 18))
								{
									iVar2 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
									if (func_248(iVar2, 0))
									{
										if (!iLocal_113)
										{
											func_172(1);
											iLocal_113 = 1;
										}
										bLocal_99 = true;
									}
								}
								else if (iLocal_113)
								{
									func_172(0);
									iLocal_113 = 0;
									bLocal_99 = false;
								}
							}
						}
						if (func_500(1215605247, 18))
						{
							if (func_256())
							{
								if (func_397(iVar2, 1))
								{
									if (unk_0x55A0C756C4A8220C(iVar2, 0))
									{
										if (!BitTest(uLocal_338, 10))
										{
											func_164("IMPEX_NOT_PVEH", -1);
											unk_0xCED9E32812D6C7C7(&uLocal_338, 10);
										}
									}
								}
								else if (func_74(&Local_368, unk_0x15CAA6D7B11F1A7C(iVar2)))
								{
									if (unk_0xA763B3F87DA3C316(iVar2, 0))
									{
										if (!BitTest(uLocal_338, 12))
										{
											func_164("IMPEX_NOT_CREW", -1);
											unk_0xCED9E32812D6C7C7(&uLocal_338, 12);
										}
									}
								}
								else if (!BitTest(uLocal_338, 9))
								{
									if (unk_0xAB793EA186AB8DAA(iVar2, -1, 0) == unk_0xE2D3D51028F0428A())
									{
										func_164("IMPEX_NOT_NEED", -1);
										unk_0xCED9E32812D6C7C7(&uLocal_338, 9);
									}
								}
							}
						}
						else
						{
							if (BitTest(uLocal_338, 9))
							{
								unk_0xB0550BC91B0159D6(&uLocal_338, 9);
							}
							if (BitTest(uLocal_338, 10))
							{
								unk_0xB0550BC91B0159D6(&uLocal_338, 10);
							}
							if (BitTest(uLocal_338, 12))
							{
								unk_0xB0550BC91B0159D6(&uLocal_338, 12);
							}
							if (BitTest(uLocal_585, 12))
							{
								if (func_256())
								{
									func_164("IMPEX_NO_MORE", -1);
									unk_0xB0550BC91B0159D6(&uLocal_585, 12);
									func_117();
								}
							}
						}
					}
				}
				else
				{
					func_481();
					if (bLocal_109)
					{
						bLocal_109 = false;
					}
					if (iLocal_114)
					{
						iLocal_114 = 0;
					}
				}
				break;
			
			case 1:
				if (func_14(unk_0x9E2D6C50374FCFA9(), 1, 1))
				{
					if (!func_165(unk_0x407E03586628E458(unk_0x9E2D6C50374FCFA9()), 1215605247, &uLocal_341, 0, 500, 1, 0))
					{
						Local_456[unk_0xF1354995C6159A78() /*4*/].f_1 = 2;
					}
				}
				else
				{
					unk_0xB0550BC91B0159D6(&uLocal_585, 4);
					unk_0xB0550BC91B0159D6(&uLocal_585, 6);
					Local_456[unk_0xF1354995C6159A78() /*4*/].f_1 = 0;
				}
				break;
			
			case 2:
				Local_456[unk_0xF1354995C6159A78() /*4*/].f_1 = 3;
				break;
			
			case 3:
				if (unk_0xE9E8955A780DDA01())
				{
					func_478(17, 1, -1);
					if (BitTest(uLocal_585, 4))
					{
						unk_0xCED9E32812D6C7C7(&(Local_456[unk_0xF1354995C6159A78() /*4*/].f_2), true);
						func_477();
					}
					else
					{
						func_475();
					}
					if (bLocal_98)
					{
						if (BitTest(uLocal_585, 6))
						{
							Local_83.f_2 = -579901295;
						}
						else
						{
							Local_83.f_2 = -1559779014;
						}
						Local_83.f_3 = Local_456[unk_0xF1354995C6159A78() /*4*/];
						Local_83.f_10 = iLocal_346[0];
						Local_83.f_11 = iLocal_346[1];
						Local_83.f_12 = iLocal_346[2];
						Local_83.f_13 = iLocal_346[3];
						if (!BitTest(uLocal_585, 6))
						{
						}
					}
					unk_0xB0550BC91B0159D6(&uLocal_585, 6);
					func_474(4, iLocal_321);
					func_458(&iLocal_321, 1);
					if (iLocal_321 > 0)
					{
						if (func_457())
						{
							func_446(941287179, iLocal_321, &iVar12, 0, 0, 0);
							Global_4534105[iVar12 /*85*/].f_3 = iLocal_354;
						}
						else
						{
							unk_0xDD82843E7135B9C4(iLocal_321, iLocal_354);
						}
					}
					if (iLocal_318 > 0)
					{
						func_445("IMPEX_PASS", iLocal_321, 7000, 0);
					}
					else
					{
						func_445("IMPEX_PASS", iLocal_321, 7000, 0);
					}
					func_410(2, "XPT_IMPEXP", -1636175450, -1930707410, iLocal_322, 1, -1, 0);
					func_409(29);
					func_490(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
					Local_456[unk_0xF1354995C6159A78() /*4*/].f_1 = 0;
					Local_456[unk_0xF1354995C6159A78() /*4*/] = -1;
					unk_0xB0550BC91B0159D6(&uLocal_585, 4);
					iLocal_120 = 1;
					func_406(-78295735, 12, 0);
				}
				break;
		}
	}
	else
	{
		if (!func_383(unk_0x9E2D6C50374FCFA9(), 1))
		{
			if (!bLocal_115)
			{
				if (iLocal_113)
				{
					func_172(0);
					iLocal_113 = 0;
				}
			}
			else if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && func_500(1215605247, 18))
			{
				iVar2 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				if (func_248(iVar2, 0))
				{
					if (!iLocal_113)
					{
						func_172(1);
						iLocal_113 = 1;
					}
					bLocal_99 = true;
				}
			}
			else if (iLocal_113)
			{
				func_172(0);
				iLocal_113 = 0;
				bLocal_99 = false;
			}
		}
		if (bLocal_102)
		{
			bLocal_102 = false;
		}
		if (bLocal_103)
		{
			bLocal_103 = false;
		}
		if (bLocal_105)
		{
			bLocal_105 = false;
		}
		if (bLocal_106)
		{
			bLocal_106 = false;
		}
	}
}

void func_406(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_408(iParam1, iParam2))
	{
		iVar0 = func_407();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_407()
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

int func_408(int iParam0, var uParam1)
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

void func_409(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9035)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_512() /*5567*/].f_681.f_4241[iVar0 /*3*/] == iParam0)
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

var func_410(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_411(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_411(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_412(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_412(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_437();
	if (func_436(uParam2))
	{
	}
	if (func_435())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_433(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_432(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_430(0, &iVar1);
					break;
				
				case 3:
					func_430(1, &iVar1);
					break;
				
				case 1:
					func_427(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957716)
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
			func_485(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_422((func_426(unk_0x9E2D6C50374FCFA9()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5842EA5D6A4620E2(iVar1, iParam8, iParam9);
				if (Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_2 != -1)
				{
					func_485(1166, iVar1, -1);
				}
				func_417(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_413((func_415(unk_0x9E2D6C50374FCFA9()) + iVar1));
			}
			else
			{
				func_413((func_415(unk_0x9E2D6C50374FCFA9()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_413(int iParam0)
{
	if (func_435())
	{
		Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_5 = iParam0;
		func_414(joaat("mpply_globalxp"), iParam0);
	}
}

void func_414(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, 1);
	}
}

int func_415(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_14(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return func_416(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_5;
			}
		}
		else
		{
			return func_416(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_416(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_417(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_197(unk_0x9E2D6C50374FCFA9()) };
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(&Var0))
		{
			iVar13 = func_420(func_421(&Var0));
			if (iVar13 == 0)
			{
				func_419(&Global_1659614, iParam0);
				func_418(joaat("mpply_crew_local_xp_0"), Global_1659614);
			}
			else if (iVar13 == 1)
			{
				func_419(&Global_1659615, iParam0);
				func_418(joaat("mpply_crew_local_xp_1"), Global_1659615);
			}
			else if (iVar13 == 2)
			{
				func_419(&Global_1659616, iParam0);
				func_418(joaat("mpply_crew_local_xp_2"), Global_1659616);
			}
			else if (iVar13 == 3)
			{
				func_419(&Global_1659617, iParam0);
				func_418(joaat("mpply_crew_local_xp_3"), Global_1659617);
			}
			else if (iVar13 == 4)
			{
				func_419(&Global_1659618, iParam0);
				func_418(joaat("mpply_crew_local_xp_4"), Global_1659618);
			}
		}
	}
}

void func_418(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1659609 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1659612 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1659613 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1659614 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1659615 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1659616 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1659617 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1659618 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1659619 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1659620 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1659621 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1659622 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1659623 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1659624 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1659625 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_419(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_420(int iParam0)
{
	if (iParam0 == Global_1659609)
	{
		return 0;
	}
	else if (iParam0 == Global_1659610)
	{
		return 1;
	}
	else if (iParam0 == Global_1659611)
	{
		return 2;
	}
	else if (iParam0 == Global_1659612)
	{
		return 3;
	}
	else if (iParam0 == Global_1659613)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_421(var uParam0)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(uParam0))
		{
			return Global_2725345;
		}
	}
	return Global_2725345;
}

void func_422(int iParam0, int iParam1, int iParam2)
{
	if (func_435())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10069 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1659759[func_81(-1)])
				{
					unk_0x5842EA5D6A4620E2(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1659759[func_81(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5842EA5D6A4620E2(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5842EA5D6A4620E2(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_241(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_1 = iParam0;
			Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_6 = func_424(iParam0, 1);
		}
		func_423(640, iParam0, -1, 1);
		func_145(641, func_424(iParam0, 1), -1, 1, 0);
		Global_1659759[func_81(-1)] = iParam0;
		func_406(-1109644434, 7, 0);
	}
}

void func_423(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_81(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1659693[func_81(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1659699[func_81(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1659705[func_81(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1659711[func_81(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1659657[func_81(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1659663[func_81(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1659669[func_81(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1659675[func_81(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1659681[func_81(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1659627[func_81(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1659633[func_81(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1659639[func_81(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1659645[func_81(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1659651[func_81(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1659717[func_81(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1659723[func_81(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1659729[func_81(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1659735[func_81(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1659741[func_81(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1659747[func_81(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1659753[func_81(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1659759[func_81(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1659765[func_81(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 11391:
			Global_2869950[func_81(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1659771[func_81(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1659777[func_81(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1659783[func_81(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1659789[func_81(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1659795[func_81(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1659801[func_81(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2869985[func_81(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2869994[func_81(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2869988[func_81(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2869997[func_81(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2869991[func_81(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2870000[func_81(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2870003[func_81(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2870006[func_81(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2870009[func_81(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2870012[func_81(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2870015[func_81(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2870018[func_81(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2870021[func_81(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2870024[func_81(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2870027[func_81(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2870030[func_81(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2870033[func_81(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2870036[func_81(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2870039[func_81(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2870042[func_81(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2870045[func_81(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_424(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_425(iParam0, 0);
}

int func_425(int iParam0, int iParam1)
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
		if (Global_295824[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_295824[iVar3] < iParam0)
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

int func_426(int iParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return Global_1659759[func_81(-1)];
			}
			else if (func_241(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[func_81(-1)];
	}
	return 0;
}

void func_427(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		iVar4 = unk_0x54F800F95142C750(iVar0);
		if (unk_0x81F82FFBED0CACCA(iVar4))
		{
			iVar5 = unk_0x6B01934FA503547F(iVar4);
			if (unk_0x0E40F846A70BA3EC(iVar5) != -1)
			{
				if (unk_0x0E40F846A70BA3EC(iVar5) == iVar1 || func_207(unk_0x0E40F846A70BA3EC(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9E2D6C50374FCFA9())
					{
						if (func_429(unk_0x9E2D6C50374FCFA9(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_428(*iParam0, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_428(*iParam0, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_428(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_429(int iParam0, int iParam1)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		Global_2787505 = { func_197(iParam0) };
		Global_2787518 = { func_197(iParam1) };
		if (unk_0x8C992447292D600F(&Global_2787505))
		{
			if (unk_0x8C992447292D600F(&Global_2787518))
			{
				unk_0x4FFBF2C0D8249E45(&Global_2787435, 35, &Global_2787505);
				unk_0x4FFBF2C0D8249E45(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_430(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x5D79167FED95F0B0())
		{
			iVar3 = iVar0;
			if (unk_0x81F82FFBED0CACCA(iVar3))
			{
				iVar4 = unk_0x6B01934FA503547F(iVar3);
				if (func_14(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9E2D6C50374FCFA9())
					{
						iVar1++;
						if (func_429(unk_0x9E2D6C50374FCFA9(), iVar4))
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
				if (iVar4 != unk_0x9E2D6C50374FCFA9())
				{
					if (func_431(unk_0x9E2D6C50374FCFA9(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_429(unk_0x9E2D6C50374FCFA9(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_428(*iParam1, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_428(*iParam1, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_431(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_28(iParam0), func_28(iParam1));
	return 0f;
}

int func_432(int iParam0)
{
	int iVar0;
	
	if (unk_0x6F8BA9EF200E4310() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_428(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_433(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x07141611FD632B59(iParam0) > func_426(unk_0x9E2D6C50374FCFA9()))
		{
			iParam0 = -func_426(unk_0x9E2D6C50374FCFA9());
		}
	}
	if (func_434(8000, 0, 0) > 0)
	{
		if (func_434(8000, 0, 0) < (iParam0 + func_426(unk_0x9E2D6C50374FCFA9())))
		{
			iParam0 = (func_434(8000, 0, 0) - func_426(unk_0x9E2D6C50374FCFA9()));
		}
	}
	return iParam0;
}

int func_434(int iParam0, bool bParam1, int iParam2)
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
	return Global_295824[iParam0];
}

int func_435()
{
	return 1;
}

int func_436(char* sParam0)
{
	if (unk_0xE8F6C1F695B25B91(uParam0))
	{
		return 1;
	}
	else if (unk_0x3C57C2F07FEE34D2(uParam0, "") || unk_0x3C57C2F07FEE34D2(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_437()
{
	int iVar0;
	
	if (func_444(unk_0x9E2D6C50374FCFA9()) || func_443(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_262145.f_10101 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10101;
		}
	}
	else if (func_441() || func_438(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_262145.f_23310 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23310;
		}
	}
	else if (Global_262145.f_7094 > 20000)
	{
		iVar0 = 20000;
	}
	else
	{
		iVar0 = Global_262145.f_7094;
	}
	return iVar0;
}

int func_438(int iParam0)
{
	return func_439(func_440(iParam0));
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_440(int iParam0)
{
	if (func_122(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_441()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_30();
	}
	return func_442(Global_4718592.f_116524);
}

int func_442(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5041[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_443(int iParam0)
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

bool func_444(int iParam0)
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

void func_445(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x38BD019DECCC5482(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	unk_0x23D3EE043DE19C4B(iParam2, 1);
}

void func_446(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_457())
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
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_447(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_447(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_447(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_447(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_447(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_457())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_26()) || unk_0xBA5B5030B7954DAA())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x651232F0FBBD6C7F(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE894C3F21E583743(iVar4))
		{
			*uParam0 = func_454(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_453(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_448(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_448(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xCED9E32812D6C7C7(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_449(iParam0);
	}
}

void func_449(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_457())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_452(iParam0))
		{
			if (!bVar0)
			{
				unk_0x349E25EA131C0E2A();
			}
		}
		else if (!bVar0)
		{
			unk_0x5ACE3DE15EF4A616(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_450(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_450(var uParam0)
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
	func_451(&(uParam0->f_14));
	func_451(&(uParam0->f_14.f_13));
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

void func_451(var uParam0)
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

int func_452(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_453(int iParam0, var uParam1)
{
	Global_2727893 = uParam1;
	Global_2727892 = iParam0;
}

int func_454(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_457())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = iParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = unk_0x8142A6539DDC180F();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_455(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_455(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_8(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_456();
		unk_0x2700C00F82C16BF0(1, &Var0, 36, iVar36);
	}
}

void func_456()
{
	unk_0xAF76A37C80EFD1D8("AM_ARENA_SHP");
}

int func_457()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

void func_458(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_473())
		{
			if (func_472(0))
			{
				if (!func_468(0))
				{
					if (unk_0x0D01086B38EC256F(func_467()))
					{
						if (func_466() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_466());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_464(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_463("GB_BCUT_TICK1", func_467(), iVar0, 0, 0, 1);
						}
						func_462(20);
						func_459(func_467(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_459(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_14(bParam0, 0, 1))
	{
		Var0.f_0 = 1146470621;
		Var0.f_1 = unk_0x9E2D6C50374FCFA9();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_461(bParam0);
		func_460(&(Var0.f_6), &(Var0.f_7));
		unk_0x2700C00F82C16BF0(1, &Var0, 8, func_8(bParam0));
	}
}

void func_460(var uParam0, var uParam1)
{
	*uParam0 = Global_1920255.f_9;
	*uParam1 = Global_1920255.f_10;
}

var func_461(int iParam0)
{
	return Global_1892703[iParam0 /*599*/].f_510;
}

void func_462(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	unk_0xCED9E32812D6C7C7(&(Global_2815059.f_5195.f_7[iVar0]), bVar1);
}

int func_463(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x61042CA2A97BBB69(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x61042CA2A97BBB69(iParam1), 64);
		}
		if (unk_0xACC32B78196FBC2A(&Var1))
		{
		}
		unk_0x150D8F58B26E9F70(sParam0);
		unk_0x138506D6C7564EF1(func_200(iParam1, -2, 1, 0, 0));
		unk_0x76DB21247AE4E4E2(func_198(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x138506D6C7564EF1(iParam3);
		}
		unk_0x2AE954BA77A66307(iParam2);
		iVar0 = unk_0x187DF98ED95E5557(0, 1);
		func_192(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_464(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_465(1);
	}
	else
	{
		iVar1 = func_465(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_465(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_12862;
}

int func_466()
{
	return Global_262145.f_12861;
}

bool func_467()
{
	return Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_10;
}

bool func_468(bool bParam0)
{
	return func_469(unk_0x9E2D6C50374FCFA9(), bParam0);
}

int func_469(int iParam0, bool bParam1)
{
	return func_470(iParam0, bParam1, 1);
}

int func_470(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_121())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_471(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_121() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_471(int iParam0, int iParam1)
{
	if (iParam0 != func_121())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_121())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_472(bool bParam0)
{
	return func_220(unk_0x9E2D6C50374FCFA9(), bParam0);
}

bool func_473()
{
	return func_221(unk_0x9E2D6C50374FCFA9());
}

void func_474(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_24025 == 0 || Global_262145.f_24025 == 1)
		{
			if (!unk_0x8FE9914D4872D601() || Global_262145.f_24025 == 1)
			{
				Global_2815059.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7043)
				{
					iParam1 = Global_262145.f_7043;
				}
				Global_2815059.f_284 = iParam1;
				Global_2815059.f_285 = 0;
			}
		}
	}
}

void func_475()
{
	int iVar0;
	
	iVar0 = func_476(42);
	Global_2676732[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_476(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2676732[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2676732[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_477()
{
	int iVar0;
	
	iVar0 = func_476(43);
	Global_2676732[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_478(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_480(iParam0, func_81(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_479(iParam0, iVar0, iParam2);
}

void func_479(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_81(iParam2)];
	unk_0x076A5661EF5ABEE4(iVar0, iParam1, 1);
}

int func_480(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2868734[iParam0 /*3*/][func_81(iParam1)];
	if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_481()
{
	if (bLocal_108)
	{
		bLocal_108 = false;
	}
	if (bLocal_103)
	{
		bLocal_103 = false;
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
	if (bLocal_106)
	{
		bLocal_106 = false;
	}
}

void func_482()
{
	Global_2359296[func_512() /*5567*/].f_681.f_35 = unk_0x48352343BC5A41AE();
}

void func_483(int iParam0, bool bParam1)
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
			Global_2359296[func_512() /*5567*/].f_681.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_512() /*5567*/].f_681.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_512() /*5567*/].f_681.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_512() /*5567*/].f_681.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_512() /*5567*/].f_681.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_512() /*5567*/].f_681.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_512() /*5567*/].f_681.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_512() /*5567*/].f_681.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_512() /*5567*/].f_681.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_512() /*5567*/].f_681.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_512() /*5567*/].f_681.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_512() /*5567*/].f_681.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_512() /*5567*/].f_681.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_512() /*5567*/].f_681.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_512() /*5567*/].f_681.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_512() /*5567*/].f_681.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_512() /*5567*/].f_681.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_512() /*5567*/].f_681.f_30 = iVar0;
			break;
	}
}

void func_484()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_80(1200, -1, 0);
	if (!BitTest(iVar0, 3))
	{
		unk_0xCED9E32812D6C7C7(&iVar0, 3);
		unk_0xCED9E32812D6C7C7(&uLocal_586, true);
		bVar1 = true;
	}
	else if (!BitTest(iVar0, 4))
	{
		unk_0xCED9E32812D6C7C7(&iVar0, 4);
		unk_0xCED9E32812D6C7C7(&uLocal_586, 2);
		bVar1 = true;
	}
	else if (!BitTest(iVar0, 5))
	{
		unk_0xCED9E32812D6C7C7(&iVar0, 5);
		unk_0xCED9E32812D6C7C7(&uLocal_586, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		func_145(1200, iVar0, -1, 1, 0);
	}
}

void func_485(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_80(iParam0, func_81(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_486(iParam0))
	{
		func_145(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_423(iParam0, iVar0, iParam2, 1);
	}
}

int func_486(int iParam0)
{
	if (Global_1659608)
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
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 11391:
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

void func_487()
{
	if (!Global_2815059.f_4595)
	{
		Global_2815059.f_4595 = 1;
	}
	func_253(&(Global_2815059.f_4596), 0, 0);
}

int func_488(int iParam0)
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

int func_489()
{
	int iVar0;
	
	if (func_14(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x55A0C756C4A8220C(iVar0, 0))
			{
				if (!unk_0x7158135695FAE89D(iVar0, -1, 0))
				{
					if (unk_0xAB793EA186AB8DAA(iVar0, -1, 0) == unk_0xE2D3D51028F0428A())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_490(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		if (unk_0x1088B18071ADCCBD())
		{
			unk_0x94B5910A9C945688(0);
		}
	}
	if (func_498())
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
	if (!unk_0x9315DBF7D972F07A())
	{
		uVar0 = iParam2;
		unk_0x64E21045781AFBC9(iParam0, bParam1, uVar0);
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
		if (iParam2 & 33554432 != 0 || unk_0x44859561F653DD4E())
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
		if (unk_0x0D01086B38EC256F(iParam0) && (unk_0x3583A42587543334(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x407E03586628E458(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x9315DBF7D972F07A())
				{
					unk_0x5C53AF694DE011E8(1);
				}
				else if (bVar14 || (!func_24(unk_0x9E2D6C50374FCFA9(), 0) && !func_235()))
				{
					unk_0x1C2ED929474DC6FE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x9315DBF7D972F07A() && !bVar19)
					{
						unk_0x5C53AF694DE011E8(0);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_495(0, 0, 0);
					if (bVar25)
					{
						unk_0x5639E771F6085BF6();
					}
				}
				if (!func_494(uVar27) && !unk_0xE2ED785E8DB4D3FF(uVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(iVar27, true, 0);
					}
				}
				if (!unk_0xE85F749F6D5C809E(iVar27))
				{
					if (!bVar21)
					{
						unk_0x5C65DDDC219B3AA5(iVar27, false);
					}
					unk_0x398C962F550CF3B4(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5C65DDDC219B3AA5(iVar27, false);
				}
				unk_0xA7266A50941DBAEA(iVar27, true);
				unk_0xC099DA307DD6BC62(iParam0, 0);
				unk_0x7E9CA7389EF595E6(iParam0, 0);
				if (unk_0xA13A75665F7E0689(iVar27) && unk_0x6090FC735660B8F7(iVar27))
				{
					unk_0xAD9047296F9EA375(iVar27);
				}
				unk_0xC252F409BDE7A700(iVar27, 1);
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_493();
					func_492();
				}
				if (unk_0xBC4351060BEFB0D2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x2981C54770E1D19C())
				{
				}
				Global_2689235[iParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!func_494(iVar27) && !unk_0xE2ED785E8DB4D3FF(iVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(iVar27, !bVar15, 0);
					}
					if (!unk_0xE85F749F6D5C809E(iVar27))
					{
						if (!bVar21)
						{
							unk_0x5C65DDDC219B3AA5(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x398C962F550CF3B4(iVar27, 1);
						}
					}
					if (func_491(Global_4718592.f_168757))
					{
						unk_0x5C65DDDC219B3AA5(iVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xC099DA307DD6BC62(iParam0, 0);
				}
				else
				{
					unk_0xC099DA307DD6BC62(iParam0, 1);
				}
				unk_0xA7266A50941DBAEA(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xFD478ECFA85A941A(iVar27) && !unk_0xD5C6B5E3B93A5EDC(iVar27, 0))
					{
						unk_0x51BB443B279E4104(iVar27);
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
			unk_0x64E21045781AFBC9(iParam0, bParam1, iVar28);
		}
	}
}

bool func_491(int iParam0)
{
	return iParam0 == 17;
}

void func_492()
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_493()
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_494(int iParam0)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x174CED88B97C78D9(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_495(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x65FAB09725E2FE75(iParam1))
			{
				if (!unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), unk_0xFF65CDB0EB7ACE71(iParam1)))
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
				func_497();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x4B1C22133022D7D3(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), true);
			}
		}
		if (func_24(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0x1FD50AAF9DA2199E(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x86998D41F61B3824(iParam0, iParam1);
		}
		unk_0x6CAF65C4F61A4BBD(iParam0, iParam1);
		func_496(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_496(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41483427EFBC0047(iVar0, iParam1, 1);
	}
}

void func_497()
{
	int iVar0;
	
	if (!unk_0xD852449BF2E2BA8D())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x4DE6A646AFB7CF5C(iVar0);
				iVar0++;
			}
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 2);
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), false);
		}
	}
}

int func_498()
{
	if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_499()
{
	func_117();
}

int func_500(int iParam0, int iParam1)
{
	if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), func_168(iParam0), 1) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_501(int iParam0)
{
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (unk_0xAB793EA186AB8DAA(iParam0, -1, 0) == unk_0xE2D3D51028F0428A())
		{
			if (!func_393(iParam0))
			{
				if (iParam0 != iLocal_589)
				{
					if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < 2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_502()
{
	if (Global_2703735.f_61.f_16 || Global_2703735.f_61.f_17)
	{
		return 1;
	}
	return 0;
}

void func_503(var uParam0, int iParam1, var uParam2)
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
			(*uParam0)[iVar0] = func_504(iVar1, iVar0);
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

int func_504(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_511(iParam1);
			break;
		
		case 1:
			iVar0 = func_510(iParam1);
			break;
		
		case 2:
			iVar0 = func_509(iParam1);
			break;
		
		case 3:
			iVar0 = func_508(iParam1);
			break;
		
		case 4:
			iVar0 = func_507(iParam1);
			break;
		
		case 5:
			iVar0 = func_506(iParam1);
			break;
		
		case 6:
			iVar0 = func_505(iParam1);
			break;
	}
	return iVar0;
}

int func_505(int iParam0)
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

int func_506(int iParam0)
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

int func_507(int iParam0)
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

int func_508(int iParam0)
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

int func_509(int iParam0)
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

int func_510(int iParam0)
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

int func_511(int iParam0)
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

int func_512()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_513(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_514(uParam0, bParam2, 0);
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_514(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x9315DBF7D972F07A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				*uParam0 = unk_0xE75390F3CA208D5E();
			}
		}
		else
		{
			*uParam0 = unk_0x320D1840B6DAA1CC();
		}
		uParam0->f_1 = 1;
	}
}

bool func_515(var uParam0)
{
	return uParam0->f_1;
}

void func_516()
{
	Global_2359296[func_512() /*5567*/].f_681.f_36 = unk_0x48352343BC5A41AE();
}

void func_517(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x4BFEE961F7BC72B6();
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
			(*uParam0)[iVar0] = func_504(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2359296[func_512() /*5567*/].f_681.f_37 = iVar1;
}

void func_518()
{
	func_521("CELL_CLTEST1", 0);
	func_519("CELL_CLTEST1");
	func_521("CELL_CLTEST6", 0);
	func_519("CELL_CLTEST6");
}

void func_519(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xE8F6C1F695B25B91(&(Global_113386.f_14141[iVar0 /*104*/])))
		{
			if (unk_0x3C57C2F07FEE34D2(&(Global_113386.f_14141[iVar0 /*104*/]), sParam0))
			{
				if (Global_113386.f_14141[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_302();
					Global_113386.f_14141[iVar0 /*104*/].f_99[Global_20266] = 0;
					if (func_520(iVar0))
					{
					}
					else
					{
						Global_113386.f_14141[iVar0 /*104*/].f_24 = 0;
						Global_113386.f_14141[iVar0 /*104*/].f_28 = 0;
						Global_113386.f_14141[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x35A0954FC4DC4CAD(Global_113386.f_14141[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_520(int iParam0)
{
	if ((Global_113386.f_14141[iParam0 /*104*/].f_99[0] == 1 || Global_113386.f_14141[iParam0 /*104*/].f_99[1] == 1) || Global_113386.f_14141[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_521(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xE8F6C1F695B25B91(&(Global_113386.f_14141[iVar0 /*104*/])))
		{
			if (unk_0x3C57C2F07FEE34D2(&(Global_113386.f_14141[iVar0 /*104*/]), sParam0))
			{
				if (Global_113386.f_14141[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_113386.f_14141[iVar0 /*104*/].f_24 = 1;
				if (Global_113386.f_14141[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_113386.f_14141[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_113386.f_14051[0 /*20*/].f_17 = 0;
					}
					if (Global_113386.f_14141[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_113386.f_14051[1 /*20*/].f_17 = 0;
					}
					if (Global_113386.f_14141[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_113386.f_14051[2 /*20*/].f_17 = 0;
					}
					if (Global_113386.f_14141[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_113386.f_14051[3 /*20*/].f_17 = 0;
					}
					Global_113386.f_14141[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_113386.f_14141[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_522()
{
	if (unk_0xF847447D4467709D())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!unk_0xE9E8955A780DDA01())
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
	if (func_138(unk_0x9E2D6C50374FCFA9(), 1, 0))
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (Global_1836356)
	{
		return 0;
	}
	if (func_260())
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (func_533())
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	if (func_523())
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
	if (unk_0x0843570206F71F38())
	{
		return 0;
	}
	return 1;
}

bool func_523()
{
	return Global_75485;
}

bool func_524()
{
	if (Global_2359296[func_512() /*5567*/].f_681.f_35 == 0)
	{
		return 0;
	}
	return (unk_0x48352343BC5A41AE() - Global_2359296[func_512() /*5567*/].f_681.f_35) < 86400;
}

bool func_525()
{
	if (Global_2359296[func_512() /*5567*/].f_681.f_36 == 0)
	{
		return 0;
	}
	return (unk_0x48352343BC5A41AE() - Global_2359296[func_512() /*5567*/].f_681.f_36) < 86400;
}

bool func_526()
{
	if (!BitTest(uLocal_585, 2))
	{
		if (!func_24(unk_0x9E2D6C50374FCFA9(), 0))
		{
			if ((((((!unk_0x0843570206F71F38() && !func_138(unk_0x9E2D6C50374FCFA9(), 1, 0)) && !func_112()) && (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))) && unk_0xE9E8955A780DDA01()) && func_528(19)) && !func_527(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0xCED9E32812D6C7C7(&uLocal_585, 2);
			}
		}
	}
	return BitTest(uLocal_585, 2);
}

int func_527(int iParam0)
{
	if (iParam0 != func_121())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 4);
	}
	return 0;
}

int func_528(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_530(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = func_529(unk_0x9E2D6C50374FCFA9(), 1);
	iVar2 = func_424(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_529(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_426(iParam0);
}

int func_530(int iParam0)
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
			if (!func_531(-1))
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

bool func_531(int iParam0)
{
	return func_532(123, iParam0);
}

int func_532(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2866852[iParam0 /*3*/][func_81(uParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_533()
{
	return Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_192 != 0;
}

int func_534()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_540())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_539())
	{
		return 1;
	}
	if (func_538(159))
	{
		if (!func_537())
		{
			return 1;
		}
	}
	if (func_538(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_535() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_535()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_535()
{
	switch (func_83())
	{
		case 0:
			return func_536();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_536()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_537()
{
	return Global_2714762.f_698;
}

int func_538(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_539()
{
	return Global_2725403;
}

bool func_540()
{
	return Global_2714762.f_693;
}

void func_541()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_542()
{
	if (iLocal_123 != -1)
	{
		func_142(iLocal_123, 0);
	}
	func_544(&iLocal_340);
	if (BitTest(uLocal_585, 1))
	{
		func_543(0f, 0f, 0f, func_370(19), 1);
	}
	if (unk_0x9315DBF7D972F07A())
	{
		if (unk_0x54E30A65F4FA4962())
		{
			if (unk_0xD0C6888814987992(Local_380.f_24))
			{
				unk_0x6E248B3E8CD8823C(Local_380.f_24);
			}
			Local_380.f_24 = -1;
		}
	}
	func_380();
	Global_2815059.f_1718 = 0;
	Global_2815059.f_1719 = 0;
	Global_2815059.f_1721 = 0;
	Global_2815059.f_1747 = 0;
	if (BitTest(uLocal_585, 7))
	{
		func_262(6, 0);
	}
	func_402();
	if (unk_0x12DD4A0B247D9B4D(Global_1931386))
	{
		unk_0xFFD8EB5462B07B59(&Global_1931386);
	}
	func_255(0);
	if (unk_0x12DD4A0B247D9B4D(Global_1931397))
	{
		unk_0xFFD8EB5462B07B59(&Global_1931397);
	}
	if (unk_0x9315DBF7D972F07A())
	{
		if (iLocal_100)
		{
			func_173(1215605247, 0, 0);
			func_172(0);
		}
		if (iLocal_113)
		{
			func_172(0);
		}
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_543(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0xACC32B78196FBC2A(uParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x3C57C2F07FEE34D2(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_31(Global_2815059.f_4033[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2815059.f_4033[iVar0 /*26*/] = 0;
					Global_2815059.f_4033[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

void func_544(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_545(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_545(int iParam0)
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
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_546(struct<21> Param0)
{
	func_552(func_553(Param0.f_0), Param0);
	func_549(0, -1, 0);
	unk_0x21F2B09183F31D02(&Local_380, 74, 0);
	unk_0x7157B1051528D729(&Local_456, 129, 0);
	unk_0x2C07CBAFAC54A645(0);
	if (!func_548())
	{
		return 0;
	}
	Global_2815059.f_1721 = 0;
	Global_2815059.f_4451 = 0;
	if (unk_0x54E30A65F4FA4962())
	{
	}
	if (func_71(unk_0x9E2D6C50374FCFA9(), 6))
	{
		func_262(6, 0);
	}
	func_547();
	return 1;
}

void func_547()
{
	var uVar0;
	
	uVar0 = func_80(1200, -1, 0);
	if (BitTest(uVar0, 3))
	{
		unk_0xCED9E32812D6C7C7(&uLocal_586, true);
	}
	if (BitTest(uVar0, 4))
	{
		unk_0xCED9E32812D6C7C7(&uLocal_586, 2);
	}
	if (BitTest(uVar0, 5))
	{
		unk_0xCED9E32812D6C7C7(&uLocal_586, 3);
		unk_0xCED9E32812D6C7C7(&uLocal_586, false);
	}
}

int func_548()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x9315DBF7D972F07A())
		{
			return 0;
		}
		if (unk_0x72FEF2581032D369())
		{
			return 1;
		}
		if (func_540())
		{
			return 0;
		}
		if (func_538(157))
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

int func_549(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_551();
			}
			else
			{
				return 0;
			}
		}
		if (!func_550(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_551();
					}
					else
					{
						return 0;
					}
				}
				if (func_540())
				{
					if (!bParam2)
					{
						func_551();
					}
					else
					{
						return 0;
					}
				}
				if (func_538(157))
				{
					if (!bParam2)
					{
						func_551();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xDB51AF48ABE62D4D())
			{
				if (!bParam2)
				{
					func_551();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x0EEB2C2CA48FB650();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (!bParam2)
			{
				func_551();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xDB51AF48ABE62D4D())
	{
		if (!bParam2)
		{
			func_551();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_550(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_551()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_552(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		func_551();
	}
	unk_0xD9B114A8D3A8319F(uParam0, 0, Param1.f_16);
}

int func_553(int iParam0)
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
		
		case 163:
			return 32;
		
		case 164:
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
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 165:
			return 32;
		
		case 166:
			return 32;
		
		case 170:
			return 32;
		
		case 168:
			return 32;
		
		case 169:
			return 32;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 171:
			return 32;
		
		case 172:
			return 32;
		
		case 177:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 180:
			return 32;
		
		case 181:
			return 2;
		
		case 186:
			return 1;
		
		case 182:
			return 2;
		
		case 183:
			return 4;
		
		case 184:
			return 2;
		
		case 185:
			return 2;
		
		case 167:
			return 1;
		
		case 187:
			return 2;
		
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
			return 0;
		
		case 209:
			return 1;
		
		case 194:
			return 4;
		
		case 197:
			return 4;
		
		case 198:
			return 1;
		
		case 199:
			return 1;
		
		case 205:
			return 1;
		
		case 201:
			return 2;
		
		case 206:
			return 1;
		
		case 202:
			return 1;
		
		case 200:
			return 2;
		
		case 203:
			return 8;
		
		case 204:
			return 8;
		
		case 207:
			return 1;
		
		case 208:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 195:
			return 16;
		
		case 196:
			return 32;
		
		default:
	}
	switch (func_554(func_555(iParam0, 1)))
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

int func_554(int iParam0)
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
		
		default:
	}
	return -1;
}

int func_555(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 181:
			return 15;
		
		case 188:
			return 8;
		
		case 182:
			return 14;
		
		case 186:
			return 122;
		
		case 189:
			return 1;
		
		case 187:
			return 5;
		
		case 190:
			return 6;
		
		case 183:
			return 11;
		
		case 191:
			return 0;
		
		case 192:
			return 2;
		
		case 184:
			return 13;
		
		case 193:
			return 3;
		
		case 185:
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
		
		default:
	}
	if (bParam1)
	{
	}
	return 304;
}

