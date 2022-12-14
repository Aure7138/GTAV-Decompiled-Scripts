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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	struct<16> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
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
	var uLocal_118 = 1;
	var uLocal_119 = 0;
	var uLocal_120 = 1;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	struct<3> Local_123 = { 0, 0, 0 } ;
	var uLocal_126 = 0;
	var uLocal_127 = 16;
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
	bool bLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
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
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	Local_90 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_90 = { Local_90 };
	uLocal_86 = uLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (unk_0x55EEDBBFDC6E810F(114))
	{
		func_143(1);
	}
	uLocal_85 = unk_0xF2CFBB1105511E1A(unk_0x93E99A2DBCBA9CFA());
	iLocal_95 = 0;
	func_141(&Global_112299, 0);
	func_135();
	unk_0x78E45C2D5AB9D24C(1);
	if (func_134(uLocal_94, 1))
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
	if (!func_134(uLocal_94, 8))
	{
		if (!func_132(iLocal_100))
		{
			if (func_131(0, iLocal_99))
			{
				func_143(0);
			}
			else
			{
				func_143(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_131(0, iLocal_99))
		{
			func_143(1);
		}
	}
	if (func_134(uLocal_94, 8388608))
	{
		func_143(1);
	}
	if (func_134(uLocal_94, 524288) && (func_130() && !func_129()))
	{
		func_143(1);
	}
	if (unk_0x24B651D85CCE5EB4(unk_0x63C7B2D430A46FC3()) > 1 && !func_134(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_128(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_127(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_143(1);
		}
		uLocal_85 = unk_0xF2CFBB1105511E1A(unk_0x93E99A2DBCBA9CFA());
		if (func_134(uLocal_94, 1048576))
		{
			if (unk_0x055111B11E6624FD(uLocal_85, 0))
			{
				func_143(1);
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
					if (func_132(iLocal_100) || (func_134(uLocal_94, 16) && !func_134(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_123();
						func_127(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_128(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_127(10);
						}
						if ((Local_87.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_121())
					{
						iLocal_103 = iLocal_103;
						func_127(3);
					}
					else
					{
						func_123();
					}
					break;
				
				case 3:
					if (unk_0xE3C3FF8D5649A77D())
					{
						func_143(1);
						return;
					}
					if (!func_132(iLocal_100))
					{
						if (!func_134(uLocal_94, 8))
						{
							bVar1 = true;
							if (unk_0x4310A0DB886F9FED(&(Global_100681.f_3), &Local_69))
							{
								Local_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_143(0);
								break;
							}
						}
					}
					if (!func_134(uLocal_94, 4))
					{
						func_118();
						func_117(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_100715)
					{
						if (iLocal_105 != 263)
						{
							if (func_116(6) && !func_115(iLocal_105))
							{
							}
							else
							{
								func_128(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_127(10);
					}
					else
					{
						Local_69 = { Local_53 };
						bVar2 = !func_134(uLocal_94, 64);
						func_141(&uLocal_94, 128);
						if (!func_114(3) && !Global_100715)
						{
							if (func_134(uLocal_94, 2097152))
							{
								if ((!func_134(uLocal_94, 1) || !unk_0x7DE17ACDD8BA2642(func_113())) && !Global_100715)
								{
									func_127(10);
									break;
								}
							}
						}
						if (func_134(uLocal_94, 524288) && (func_130() && !func_129()))
						{
							func_143(1);
						}
						if (func_112())
						{
							func_143(1);
						}
						if ((!func_104(6) || Global_112695) || func_103())
						{
							bVar2 = false;
						}
						if (func_134(uLocal_94, 1))
						{
							if (!func_102())
							{
								func_100(&uLocal_94, 128);
								bVar2 = false;
							}
						}
						if (func_99(1))
						{
							bVar2 = false;
						}
						if (Global_78558)
						{
							bVar2 = false;
						}
						if (func_98())
						{
							bVar2 = false;
						}
						if (unk_0xB53553DC4AAC7D8A())
						{
							bVar2 = false;
						}
						if (func_97() || func_96(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xF66F9ECA31DB2AB0(unk_0x93E99A2DBCBA9CFA()))
						{
							bVar2 = false;
						}
						if (!unk_0x2E27C24397D7F166(unk_0x93E99A2DBCBA9CFA()))
						{
							bVar2 = false;
						}
						if (func_95(0) || func_94())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!unk_0x1C4E4DC1EFE24DF1(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar2 = false;
							}
							if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0x4150CF46B891FFF5(0, 51);
								if (func_93(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_92(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_100(&uLocal_94, 2048);
									}
									else if (!func_134(uLocal_94, 2048) || !unk_0xF0E4B64AC0B5660E())
									{
										func_91(&iLocal_96);
										func_141(&uLocal_94, 2048);
									}
									if (func_89(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_91(&iLocal_96);
										func_141(&uLocal_94, 2048);
										unk_0x3EC562D93709C894(&Local_69);
										unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 56);
										func_127(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_91(&iLocal_96);
									func_141(&uLocal_94, 2048);
									unk_0x3EC562D93709C894(&Local_69);
									unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 56);
									func_127(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_96 != -1)
							{
								func_91(&iLocal_96);
								func_141(&uLocal_94, 2048);
								unk_0xCD3C8E1022864F65(0);
							}
						}
					}
					func_86();
					break;
				
				case 5:
					unk_0x4150CF46B891FFF5(0, 51);
					if (unk_0x6CAF14BE58B4BFF8(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_91(&iLocal_96);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_134(uLocal_94, 1))
						{
							if (func_116(6) || func_116(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_83(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
							{
								unk_0xE90EAC9EC6471EB9(unk_0x93E99A2DBCBA9CFA());
							}
							func_82();
							if (Global_44446)
							{
								func_73(unk_0xC1A5EC5C986B98AD());
							}
							unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 56);
							uLocal_52 = func_26();
							func_100(&uLocal_94, 2);
							func_127(6);
							func_22(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_21(iLocal_99);
								func_18(func_20(iLocal_99), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_17();
						}
						else if (iVar3 == 0)
						{
							func_127(10);
						}
					}
					else
					{
						func_17();
					}
					break;
				
				case 6:
					if (func_134(Global_112299, 262144))
					{
						func_141(&Global_112299, 262144);
						func_16();
					}
					if (func_134(uLocal_94, 2097152))
					{
						if (!func_114(3) && !unk_0xB8CEC43FB7EF2D92(uLocal_52))
						{
							func_127(10);
						}
					}
					if (!unk_0xB8CEC43FB7EF2D92(uLocal_52))
					{
						unk_0xD094BE9EF72C6999(unk_0xF2DB717A73826179((func_12(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_11(&uLocal_107);
						func_141(&uLocal_94, 256);
						func_8();
						if (bVar0)
						{
							func_141(&uLocal_94, 2);
						}
						else if (func_134(uLocal_94, 2))
						{
							if (func_134(Global_112299, 0))
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_141(&uLocal_94, 2);
							}
							else
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_141(&uLocal_94, 2);
							}
						}
						func_127(0);
						if (iLocal_99 != -1)
						{
							if (func_134(Global_112299, 0))
							{
								unk_0x427014D38567361E(func_20(iLocal_99), 0, Global_100718, 0);
								func_6(func_20(iLocal_99), 0, Global_100718, 1, 0);
							}
							else
							{
								unk_0x427014D38567361E(func_20(iLocal_99), 0, Global_100718, 0);
								func_6(func_20(iLocal_99), 0, Global_100718, 0, 0);
							}
						}
						func_5();
						func_141(&Global_112299, 0);
						if (func_134(uLocal_94, 16777216))
						{
							func_143(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_113648.f_9087)
							{
								if (!func_131(0, iLocal_99))
								{
									func_143(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_127(0);
					break;
				
				case 10:
					func_143(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_128(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_127(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_128(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_91(&iLocal_96);
					}
					if (!unk_0x2AC37494BBF1DB16(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0xCD3C8E1022864F65(1);
						}
					}
					func_127(4);
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
									if (func_132(iLocal_100) && func_131(0, iLocal_99))
									{
										func_135();
										if (iLocal_105 != 263)
										{
											func_128(iLocal_105, 1, 0);
										}
										func_127(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_128(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_127(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_135();
									if (iLocal_105 != 263)
									{
										func_128(iLocal_105, 1, 0);
									}
									func_127(0);
								}
							}
						}
						else
						{
							func_128(iLocal_105, 1, 0);
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
	func_3(&uLocal_118);
	func_3(&uLocal_120);
	unk_0x0B34FA69ECCE3927("pickup_object");
	unk_0x0B34FA69ECCE3927("oddjobs@basejump@ig_15");
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
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_7(int iParam0)
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

void func_8()
{
	char cVar0[24];
	
	if (unk_0xCCE9BCDAB8B7FAED() || func_10())
	{
		unk_0x989939160154E37F(StackVal, 0, 0, 0);
	}
	else if (unk_0x674D69D3896862C7() || func_9())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x98F31DBBB3410994(0, &cVar0);
	}
}

var func_9()
{
	return (unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A());
}

var func_10()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
}

void func_11(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_12(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_13(bool bParam0)
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

bool func_14(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_15(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_16()
{
	return 1;
}

void func_17()
{
}

void func_18(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2AC37494BBF1DB16(&Global_97751))
	{
		unk_0x83332E38D6284FF5(&Global_97751, 0, 0, 0, 1, 0);
		StringCopy(&Global_97751, "", 64);
	}
	StringCopy(&Global_97751, sParam0, 64);
	unk_0x363D7D2154F0040D(sParam0, iParam1, iParam2, func_19(0));
}

int func_19(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

char* func_20(int iParam0)
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

void func_21(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xCCE9BCDAB8B7FAED() || func_10())
	{
		uVar0 = iParam0;
		unk_0x989939160154E37F(8, &uVar0, 1, 1);
	}
	else if (unk_0x674D69D3896862C7() || func_9())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x98F31DBBB3410994(8, &cVar1);
	}
}

void func_22(var uParam0)
{
	if (!func_15(uParam0))
	{
		func_25(uParam0);
	}
	else
	{
		func_23(uParam0);
	}
}

void func_23(var uParam0)
{
	func_24(uParam0, 0f);
}

void func_24(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_13(BitTest(*uParam0, 4)) - fParam1);
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_25(var uParam0)
{
	if (!func_15(uParam0))
	{
		func_23(uParam0);
	}
}

int func_26()
{
	int iVar0;
	
	Global_113648.f_18969 = iLocal_122;
	switch (iLocal_122)
	{
		case 4:
		case 8:
			func_27(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_27(0);
			break;
		
		default:
			break;
	}
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 177, 1);
	}
	iVar0 = unk_0xB8BA7F44DF1575E1(&Local_53, &Local_123, 170, iLocal_97);
	unk_0x037A80676B8FF0F5(&Local_53);
	return iVar0;
}

void func_27(bool bParam0)
{
	var uVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	bool bVar16;
	
	Var12 = { func_72(iLocal_122) };
	Var12 = { func_71(unk_0xD0FFB162F40A139C(Var12.f_2), unk_0x0BADBFA3B172435F(Var12.f_2), unk_0xFB30D0CD31C8C4E2(Var12.f_0)) };
	unk_0x05541906569796AF(func_70(iLocal_122), Var12, 5000f, 0);
	unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 256);
	unk_0xB1A691274215E4CE(0);
	unk_0x61F7D56FFAFBF706(0);
	func_68(1);
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
		unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 177, 1);
		if (unk_0xDC58AE028CB223BA(unk_0xC1A5EC5C986B98AD()) > 0.3f)
		{
			unk_0x56FD1401249AC499(unk_0xC1A5EC5C986B98AD(), -1);
			while (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0) && unk_0xDC58AE028CB223BA(unk_0xC1A5EC5C986B98AD()) > 0.3f)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 177, 1);
				}
			}
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_297))
		{
			Var6 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) - unk_0x30BE8A934C020461(iLocal_297, 0) };
			Var6.f_2 = 0f;
			fVar15 = unk_0x652D2EEEF1D3E62C(Var6);
			unk_0xDBC7406226B5540E(&uVar3);
			if (fVar15 > 0.8f)
			{
				Var6 = { Var6 * FtoV((0.78f / fVar15)) };
				Var9 = { unk_0x30BE8A934C020461(iLocal_297, 0) + Var6 };
				if (iLocal_122 == 12)
				{
					unk_0x7D9A648CC1936BDA(0, Var9, 1f, 20000, 1048576000, 0, func_67(Var9, unk_0x30BE8A934C020461(iLocal_297, 0)));
				}
				else
				{
					unk_0x99C48B4CDA4D89A7(0, Var9, 1f, -1, func_67(Var9, unk_0x30BE8A934C020461(iLocal_297, 0)), 1056964608);
				}
			}
			else if (fVar15 > 0.15f)
			{
				unk_0x2CD3E39D98CC3FA9(0, func_67(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iLocal_297, 0)), 0);
			}
			unk_0x3EE48ADC8C7F5CC4(0, "pickup_object", "pickup_low", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0xF2CFC6EC8C85FA78(uVar3);
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
				unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 177, 1);
				unk_0x3D7110D966B0CEA2(unk_0xC1A5EC5C986B98AD(), uVar3);
			}
			unk_0x63EF69C6969A3D26(&uVar3);
			func_68(1);
		}
	}
	func_25(&uLocal_293);
	while ((func_12(&uLocal_293) < 6f && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0)) && !unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "pickup_object", "pickup_low", 3))
	{
		unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 177, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0) && unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "pickup_object", "pickup_low", 3))
	{
		unk_0x9C13FF73F24F78C9(unk_0xC1A5EC5C986B98AD(), "pickup_object", "pickup_low", 0.8f);
		bVar16 = true;
	}
	while ((func_12(&uLocal_293) < 6f && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0)) && unk_0x92377426879E21FF(unk_0xC1A5EC5C986B98AD(), "pickup_object", "pickup_low") < 0.22f)
	{
		unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 177, 1);
		if (!bVar16 && unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "pickup_object", "pickup_low", 3))
		{
			unk_0x9C13FF73F24F78C9(unk_0xC1A5EC5C986B98AD(), "pickup_object", "pickup_low", 0.8f);
			bVar16 = true;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!bVar16 && unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "pickup_object", "pickup_low", 3))
		{
			unk_0x9C13FF73F24F78C9(unk_0xC1A5EC5C986B98AD(), "pickup_object", "pickup_low", 0.7f);
			bVar16 = true;
		}
		unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 177, 1);
	}
	func_11(&uLocal_293);
	func_43();
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_37() == 0)
		{
			unk_0xFECAE061D8C80757(unk_0xC1A5EC5C986B98AD(), 9, 5, 0, 0);
		}
		else if (func_37() == 1)
		{
			unk_0xFECAE061D8C80757(unk_0xC1A5EC5C986B98AD(), 8, 1, 0, 0);
		}
		else if (func_37() == 2)
		{
			unk_0xFECAE061D8C80757(unk_0xC1A5EC5C986B98AD(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_35(func_36(iLocal_122)) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
			unk_0x7D9A648CC1936BDA(unk_0xC1A5EC5C986B98AD(), func_36(iLocal_122), 1f, -1, 1048576000, 0, 1193033728);
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_297))
		{
			unk_0xEF078F1FEE785D3E(&iLocal_297);
		}
		uVar4 = unk_0xD5B705094825AC04(26379945, func_34(iLocal_122), func_33(iLocal_122), func_32(iLocal_122), 1, 2);
		uVar5 = unk_0xD5B705094825AC04(26379945, func_31(iLocal_122), func_30(iLocal_122), func_29(iLocal_122), 0, 2);
		unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
		unk_0x61C33BB16C9D8909("HAND_SHAKE", 0.2f);
		func_25(&uVar0);
		while (func_12(&uVar0) < 1.5f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x6FF2543994335DB3(uVar5, uVar4, func_28(iLocal_122), 1, 1);
		func_23(&uVar0);
		while (func_12(&uVar0) < ((unk_0xBBDA792448DB5A89(func_28(iLocal_122)) / 1000f) + 0.3f))
		{
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 177, 1);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		Local_123.f_2 = iLocal_297;
	}
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 177, 1);
	}
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_29(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_30(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		
		case 8:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_32(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_33(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		
		case 8:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_36(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_37()
{
	func_38();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_38()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_41(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_40(unk_0xC1A5EC5C986B98AD());
			if (func_39(iVar0) && (!func_116(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_39(Global_113648.f_2365.f_539.f_4321))
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

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_42(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_42(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_43()
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	var uVar8;
	
	if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		return;
	}
	unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
	if (unk_0x7DE17ACDD8BA2642(iLocal_297))
	{
		unk_0xEF078F1FEE785D3E(&iLocal_297);
	}
	func_51(0, 0, 1);
	iLocal_297 = unk_0xC3541ED6B6D42728(joaat("p_parachute_s"), func_50(iLocal_122), 1, 1, 0);
	unk_0x464B5B0F22497FC5(iLocal_297, func_49(iLocal_122), 2, 1);
	func_44(&Var0, &uVar3);
	Var4 = { 0f, 0f, uVar3 };
	uVar7 = unk_0x191673E3F99212B2(Var0, Var4, 2);
	unk_0xA2CBB04560DD6361(iLocal_297, uVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
		unk_0x468D976993BF7FE1(unk_0xC1A5EC5C986B98AD(), uVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	unk_0x531D638530A8DB97(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", 1);
	uVar8 = unk_0xDEE46CEB08617ECA("DEFAULT_ANIMATED_CAMERA", 0);
	unk_0x5950D902D5442CB4(uVar8, uVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0xEEF11E0DB5769366(uVar8, 1);
	unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
	while (unk_0xABF98B1999FE64CA(uVar7) < 0.6f)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
}

void func_44(var uParam0, var uParam1)
{
	*uParam0 = { func_48(iLocal_122) };
	switch (iLocal_122)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = func_47(func_67(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_46(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_45(*uParam1, -104.04f);
			}
			break;
		
		case 8:
			*uParam1 = func_47(func_67(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_46(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_45(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_47(func_67(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_47(func_67(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), *uParam0), -180f, 180f);
			break;
	}
}

float func_45(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_46(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_47(float fParam0, float fParam1, float fParam2)
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

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_49(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		
		case 5:
			return 10f, 0f, -134.58f;
		
		case 6:
			return 76f, 0f, -89.95f;
		
		case 8:
			return 12f, 0f, 89.56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_50(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 8:
			return -801.57f, 298.85f, 85.25f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 0, iParam0);
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x636EFA4C5BC401A8(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 15f);
	}
	unk_0xC3578D74003B8E01(iParam1);
	func_63(0);
	func_53(1, 1, iParam2, 0, 0, 0, 0);
	unk_0x61F7D56FFAFBF706(0);
	unk_0xB1A691274215E4CE(0);
	func_52(23, 1);
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&Global_32412, iParam0);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_32412, iParam0);
	}
}

void func_53(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_62(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
			{
				unk_0xD6625E11483B2324(0);
			}
			if (!func_61())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_60(1, iParam3, uParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_62(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0xDB4D82037BD5A339();
		}
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_60(0, iParam3, uParam2, 0);
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((((((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_58(unk_0x93E99A2DBCBA9CFA())) && !func_55(unk_0x93E99A2DBCBA9CFA(), 0)) && !func_54()) && !bParam4) && !bParam5) && !unk_0x8253CEEA17ED481B())
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_58(unk_0x93E99A2DBCBA9CFA())) && !bParam4) && !bParam5)
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_54()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

bool func_55(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_56(-1, 0) == 8;
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

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_57();
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

int func_57()
{
	return Global_1574918;
}

int func_58(int iParam0)
{
	if (func_55(iParam0, 0))
	{
		return 1;
	}
	if (func_59())
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

bool func_59()
{
	return BitTest(Global_2621446, 3);
}

int func_60(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_61()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_62(int iParam0)
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

void func_63(int iParam0)
{
	if (func_66())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_65())
		{
			func_64(1, 1);
		}
		else
		{
			func_64(0, 0);
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
	if (!func_61())
	{
		Global_20383.f_1 = 3;
	}
}

void func_64(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_95(0))
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

bool func_65()
{
	return BitTest(Global_1962996, 5);
}

bool func_66()
{
	return BitTest(Global_1962996, 19);
}

float func_67(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x06A2A02CDC68090B((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_68(bool bParam0)
{
	if (bParam0)
	{
		func_69();
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			unk_0xECDAB41968FF21A8(&Global_8254, 16);
		}
		Global_20383.f_1 = 1;
		if (func_95(0))
		{
			func_63(0);
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

void func_69()
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}
}

Vector3 func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_71(struct<3> Param0)
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

Vector3 func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_73(int iParam0)
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
	iVar0 = func_81(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44232[iVar0 /*5*/];
		func_76(1, iVar1, 1);
		return;
	}
	iVar2 = func_75(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_74(iVar2);
}

void func_74(int iParam0)
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

int func_75(int iParam0)
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

void func_76(int iParam0, int iParam1, int iParam2)
{
	func_77(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_79(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_78();
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

int func_78()
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

int func_79(int iParam0, int iParam1, int iParam2)
{
	if (func_80(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0, int iParam1, int iParam2)
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

int func_81(int iParam0)
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

void func_82()
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

int func_83(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_85(0))
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
		if (!func_132(iParam2))
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
			func_84(iParam0, iParam4);
		}
	}
	return 2;
}

void func_84(var uParam0, int iParam1)
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

int func_85(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_132(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_86()
{
	switch (iLocal_122)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_87();
			break;
		
		default:
			break;
	}
}

void func_87()
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = unk_0xE475C458F52F1781();
	if (unk_0x7DE17ACDD8BA2642(uVar0))
	{
		Local_123.f_1 = iVar0;
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_297))
	{
		Var1 = { unk_0x30BE8A934C020461(iLocal_297, 1) };
		if (unk_0xB7A628320EFF8E47(Var1, Local_90) > 25f)
		{
			func_88(0);
		}
	}
}

void func_88(int iParam0)
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

int func_89(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_90(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x48DC6A21D1CAD89C(unk_0x5DC3DCA82C806319()))
	{
		return 0;
	}
	if (func_95(0))
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

int func_90(int iParam0)
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

void func_91(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_90(*iParam0);
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

void func_92(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x24B651D85CCE5EB4(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB53553DC4AAC7D8A())
	{
		if (!*iParam0 == -1)
		{
			func_91(iParam0);
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

int func_93(var uParam0)
{
	return 1;
}

var func_94()
{
	return Global_75693;
}

int func_95(int iParam0)
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

var func_96(int iParam0, int iParam1)
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

bool func_97()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

int func_98()
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_99(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23131.f_4 && Global_23131.f_104 == 4);
	}
	return Global_23131.f_4;
}

void func_100(var uParam0, int iParam1)
{
	func_101(uParam0, iParam1);
}

void func_101(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_102()
{
	return 1;
}

bool func_103()
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

int func_104(int iParam0)
{
	int iVar0;
	
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				iVar0 = func_37();
				if (!func_39(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_111()) || Global_112695) || Global_32166) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_107()) || func_98()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_111()) || Global_32166) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_111()) || Global_112695) || Global_32166) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_113648.f_7690.f_919[iVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_111()) || Global_112695) || Global_32166) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_98()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_111() || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || func_96(8, -1)) || func_98()) || func_106()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_96(8, -1) || func_109()) || func_108()) || func_106()) || func_105())
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
							if ((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_111()) || Global_32166) || func_110()) || func_96(8, -1)) || func_108()) || func_107()) || func_98()) || Global_113648.f_7690.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || func_111()) || func_108()) || Global_112695) || Global_32166) || func_110()) || Global_44446) || func_96(8, -1)) || func_107()) || func_106()) || func_98()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0)) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1)) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_111()) || Global_112695) || Global_32166) || func_110()) || func_96(8, -1)) || func_107()) || func_106()) || func_109()) || func_108()) || func_98())
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

var func_105()
{
	return Global_100720.f_1;
}

int func_106()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_107()
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

bool func_108()
{
	return Global_100733.f_388 > 0;
}

bool func_109()
{
	return Global_100733.f_387 > 0;
}

var func_110()
{
	return Global_1575060;
}

int func_111()
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_112()
{
	if (unk_0x24B651D85CCE5EB4(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_113()
{
	return Global_96513;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_116(6) || func_116(7))
			{
				return 1;
			}
			else
			{
				return func_114(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_132(5))
			{
				if (func_104(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xCE4AAA035282336C(Global_32543[iVar0 /*23*/].f_19);
}

bool func_116(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_118()
{
	struct<3> Var0;
	
	if (bLocal_296)
	{
		switch (iLocal_122)
		{
			case 4:
			case 5:
			case 8:
				iLocal_297 = unk_0xC3541ED6B6D42728(joaat("p_parachute_s"), func_50(iLocal_122), 1, 1, 0);
				unk_0x464B5B0F22497FC5(iLocal_297, func_49(iLocal_122), 2, 1);
				unk_0x2718E9CC165A99F6(iLocal_297, 1);
				break;
			
			case 6:
			case 12:
				iLocal_297 = unk_0xC3541ED6B6D42728(joaat("p_parachute_s"), func_50(iLocal_122), 1, 1, 0);
				unk_0x464B5B0F22497FC5(iLocal_297, func_49(iLocal_122), 2, 1);
				unk_0x32AB41A77450E87D(iLocal_297);
				Var0 = { func_120(iLocal_122) };
				if (!func_35(Var0))
				{
					uLocal_298 = unk_0xABEEDBEF2BBDF5B3(joaat("bati"), Var0, func_119(iLocal_122), 1, 1, 0);
					uLocal_298 = uLocal_298;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_119(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_120(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_121()
{
	switch (iLocal_122)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((unk_0x2BBF749E555360DC("pickup_object") && unk_0x2BBF749E555360DC("oddjobs@basejump@ig_15")) && func_122(&uLocal_118)) && func_122(&uLocal_120));
			break;
		
		case 12:
			return ((unk_0x2BBF749E555360DC("pickup_object") && unk_0x2BBF749E555360DC("oddjobs@basejump@ig_15")) && func_122(&uLocal_118));
			break;
		
		default:
			break;
	}
	return (func_122(&uLocal_118) && func_122(&uLocal_120));
}

int func_122(var uParam0)
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

void func_123()
{
	switch (iLocal_122)
	{
		case 5:
		case 8:
			func_125(&uLocal_118, joaat("p_parachute_s"));
			unk_0x28818732C8F0F80E("pickup_object");
			unk_0x28818732C8F0F80E("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_125(&uLocal_118, joaat("p_parachute_s"));
			func_125(&uLocal_120, joaat("bati"));
			unk_0x28818732C8F0F80E("pickup_object");
			unk_0x28818732C8F0F80E("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_125(&uLocal_118, joaat("p_parachute_s"));
			unk_0x28818732C8F0F80E("pickup_object");
			unk_0x28818732C8F0F80E("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_124(&uLocal_118);
	func_124(&uLocal_120);
}

void func_124(var uParam0)
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

int func_125(var uParam0, int iParam1)
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
	iVar1 = func_126(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_126(var uParam0)
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

void func_127(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_128(int iParam0, bool bParam1, bool bParam2)
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

int func_129()
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

int func_130()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

int func_131(int iParam0, int iParam1)
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

bool func_132(int iParam0)
{
	return func_133(iParam0, Global_43257);
}

int func_133(int iParam0, int iParam1)
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

bool func_134(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_135()
{
	if (unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		func_100(&uLocal_94, 8388608);
		return;
	}
	StringCopy(&Local_53, "bj", 64);
	iLocal_122 = func_139(Local_90, 0);
	switch (iLocal_122)
	{
		case 4:
			iLocal_105 = 129;
			break;
		
		case 5:
			iLocal_105 = 130;
			break;
		
		case 6:
			iLocal_105 = 131;
			break;
		
		case 8:
			iLocal_105 = 133;
			break;
		
		case 12:
			iLocal_105 = 137;
			break;
		
		default:
			break;
	}
	if (iLocal_105 == 129)
	{
		if (func_138(19))
		{
			func_137(iLocal_105);
		}
	}
	func_100(&uLocal_94, 4194304);
	iLocal_99 = 0;
	fLocal_102 = (unk_0xBBDA792448DB5A89(func_136(iLocal_105)) + 5f);
	fLocal_117 = 1.1f;
	sLocal_101 = "PLAY_BASEJUMP_G";
	if (iLocal_105 != 263)
	{
		if (!func_131(0, iLocal_99))
		{
			bLocal_296 = false;
			func_137(iLocal_105);
		}
		else
		{
			bLocal_296 = true;
		}
	}
	else
	{
		bLocal_296 = false;
	}
	if (unk_0x24B651D85CCE5EB4(joaat("bj")) > 0)
	{
		func_100(&uLocal_94, 8);
	}
	else
	{
		func_141(&uLocal_94, 8);
	}
	if (func_116(12))
	{
		func_100(&uLocal_94, 8);
	}
	iLocal_97 = 54000;
}

int func_136(int iParam0)
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

void func_137(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_128(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_91(&iLocal_96);
		iLocal_95 = 9;
	}
}

bool func_138(int iParam0)
{
	return Global_112735[iParam0 /*10*/].f_1;
}

int func_139(struct<3> Param0, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_140(iVar3))
		{
			fVar1 = unk_0xB7A628320EFF8E47(Param0, func_48(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_141(var uParam0, int iParam1)
{
	func_142(uParam0, iParam1);
}

void func_142(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_143(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_128(iLocal_105, 0, 0);
		}
	}
	func_91(&iLocal_96);
	if (func_134(uLocal_94, 2))
	{
		func_5();
		func_141(&uLocal_94, 2);
		func_7(&iLocal_98);
	}
	iLocal_98 = -1;
	func_144();
	unk_0x675D9C12C73D3DE7();
}

void func_144()
{
	func_141(&uLocal_94, 4);
	func_145();
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

void func_145()
{
}

