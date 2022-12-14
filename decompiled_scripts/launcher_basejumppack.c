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
	if (unk_0x4B34601C5C56F3EE(114))
	{
		func_143(1);
	}
	uLocal_85 = unk_0x407E03586628E458(unk_0x9E2D6C50374FCFA9());
	iLocal_95 = 0;
	func_141(&Global_112037, 0);
	func_135();
	unk_0x3E397AA8C35A7536(1);
	if (func_134(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_38391)
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
	if (unk_0xB4C854DD86E40FDA(unk_0x1307D54181723A6E()) > 1 && !func_134(uLocal_94, 4194304))
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
		uLocal_85 = unk_0x407E03586628E458(unk_0x9E2D6C50374FCFA9());
		if (func_134(uLocal_94, 1048576))
		{
			if (unk_0x55B23FE400FCEA6B(uLocal_85, 0))
			{
				func_143(1);
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_85) && !unk_0x55B23FE400FCEA6B(iLocal_85, 0))
		{
			Local_87 = { unk_0x6B62510F212526DC(iLocal_85, 1) };
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
					if (unk_0xDB51AF48ABE62D4D())
					{
						func_143(1);
						return;
					}
					if (!func_132(iLocal_100))
					{
						if (!func_134(uLocal_94, 8))
						{
							bVar1 = true;
							if (unk_0x3C57C2F07FEE34D2(&(Global_100441.f_3), &Local_69))
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
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_100475)
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
						if (!func_114(3) && !Global_100475)
						{
							if (func_134(uLocal_94, 2097152))
							{
								if ((!func_134(uLocal_94, 1) || !unk_0xE5965CDF24F93A9F(func_113())) && !Global_100475)
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
						if ((!func_104(6) || Global_112433) || func_103())
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
						if (Global_78319)
						{
							bVar2 = false;
						}
						if (func_98())
						{
							bVar2 = false;
						}
						if (unk_0x04458B4E5D9E466A())
						{
							bVar2 = false;
						}
						if (func_97() || func_96(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0x4965181A7DE78866(unk_0x9E2D6C50374FCFA9()))
						{
							bVar2 = false;
						}
						if (!unk_0x9895F96718388657(unk_0x9E2D6C50374FCFA9()))
						{
							bVar2 = false;
						}
						if (func_95(0) || func_94())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!unk_0x8F41785F110B0DA0(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar2 = false;
							}
							if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0x07899AAA5D680386(0, 51);
								if (func_93(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_92(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_100(&uLocal_94, 2048);
									}
									else if (!func_134(uLocal_94, 2048) || !unk_0xF847447D4467709D())
									{
										func_91(&iLocal_96);
										func_141(&uLocal_94, 2048);
									}
									if (func_89(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_91(&iLocal_96);
										func_141(&uLocal_94, 2048);
										unk_0xAF76A37C80EFD1D8(&Local_69);
										unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 56);
										func_127(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_91(&iLocal_96);
									func_141(&uLocal_94, 2048);
									unk_0xAF76A37C80EFD1D8(&Local_69);
									unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 56);
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
								unk_0x3410421C60BF7143(0);
							}
						}
					}
					func_86();
					break;
				
				case 5:
					unk_0x07899AAA5D680386(0, 51);
					if (unk_0xF79F112CE5999680(&Local_69))
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
							if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
							{
								unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
							}
							func_82();
							if (Global_44238)
							{
								func_73(unk_0xE2D3D51028F0428A());
							}
							unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 56);
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
					if (func_134(Global_112037, 262144))
					{
						func_141(&Global_112037, 262144);
						func_16();
					}
					if (func_134(uLocal_94, 2097152))
					{
						if (!func_114(3) && !unk_0x87C0DA419F19FF57(uLocal_52))
						{
							func_127(10);
						}
					}
					if (!unk_0x87C0DA419F19FF57(uLocal_52))
					{
						unk_0xA5C246361B61ED23(unk_0xF2DB717A73826179((func_12(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_11(&uLocal_107);
						func_141(&uLocal_94, 256);
						func_8();
						if (bVar0)
						{
							func_141(&uLocal_94, 2);
						}
						else if (func_134(uLocal_94, 2))
						{
							if (func_134(Global_112037, 0))
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
							if (func_134(Global_112037, 0))
							{
								unk_0x0B33380E33B61778(func_20(iLocal_99), 0, Global_100478, 0);
								func_6(func_20(iLocal_99), 0, Global_100478, 1, 0);
							}
							else
							{
								unk_0x0B33380E33B61778(func_20(iLocal_99), 0, Global_100478, 0);
								func_6(func_20(iLocal_99), 0, Global_100478, 0, 0);
							}
						}
						func_5();
						func_141(&Global_112037, 0);
						if (func_134(uLocal_94, 16777216))
						{
							func_143(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_113386.f_9085)
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
					if (!unk_0xACC32B78196FBC2A(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0x3410421C60BF7143(1);
						}
					}
					func_127(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
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
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_2()
{
	func_3(&uLocal_118);
	func_3(&uLocal_120);
	unk_0xAFC1FBF3F6AE7B9A("pickup_object");
	unk_0xAFC1FBF3F6AE7B9A("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xF1A23B343DFEDFD0((*uParam0)[iVar0]);
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
	if (unk_0xACC32B78196FBC2A(&Global_97511))
	{
		return;
	}
	if (unk_0x1C1342F0ADFEA3B3(sParam0, &Global_97511, 0, -1) != 0)
	{
		return;
	}
	unk_0xA77F683FA0E7B1F5(sParam0, iParam1, iParam2, iParam3, iParam4, Global_94618);
	StringCopy(&Global_97511, "", 64);
}

void func_7(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43014)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

void func_8()
{
	char cVar0[24];
	
	if (unk_0xDFC67688F9088B45() || func_10())
	{
		unk_0x5F540C4C109AB569(StackVal, 0, 0, 0);
	}
	else if (unk_0x527312C0DF85960A() || func_9())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x6E34665F75B2EE0A(0, &cVar0);
	}
}

bool func_9()
{
	return (unk_0xA7384DAD7CF469DA() || unk_0x807ABE1AB65C24D2());
}

bool func_10()
{
	return (unk_0x3EBD3AF4E5D7A08C() || unk_0xC545AB1CF97ABB34());
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
	if (!unk_0xACC32B78196FBC2A(&Global_97511))
	{
		unk_0xA77F683FA0E7B1F5(&Global_97511, 0, 0, 0, 1, 0);
		StringCopy(&Global_97511, "", 64);
	}
	StringCopy(&Global_97511, sParam0, 64);
	unk_0xB85C479D5C3EA069(sParam0, iParam1, iParam2, func_19(0));
}

int func_19(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
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
	
	if (unk_0xDFC67688F9088B45() || func_10())
	{
		uVar0 = iParam0;
		unk_0x5F540C4C109AB569(8, &uVar0, 1, 1);
	}
	else if (unk_0x527312C0DF85960A() || func_9())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x6E34665F75B2EE0A(8, &cVar1);
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
	unk_0xCED9E32812D6C7C7(uParam0, 1);
	unk_0xB0550BC91B0159D6(uParam0, 2);
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
	
	Global_113386.f_18967 = iLocal_122;
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
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 177, 1);
	}
	iVar0 = unk_0xB8BA7F44DF1575E1(&Local_53, &Local_123, 170, iLocal_97);
	unk_0xD195D79715508EFA(&Local_53);
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
	Var12 = { func_71(unk_0xD0FFB162F40A139C(Var12.f_2), unk_0x0BADBFA3B172435F(Var12.f_2), unk_0x06A2016215B8E171(Var12.f_0)) };
	unk_0xB37C5672EE23D04F(func_70(iLocal_122), Var12, 5000f, 0);
	unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 256);
	unk_0x72DB022C36FCEA24(0);
	unk_0xB60709BD0E075903(0);
	func_68(1);
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 177, 1);
		if (unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) > 0.3f)
		{
			unk_0x83F5BCFFFBA26699(unk_0xE2D3D51028F0428A(), -1);
			while (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) > 0.3f)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
				{
					unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 177, 1);
				}
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_297))
		{
			Var6 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) - unk_0x6B62510F212526DC(iLocal_297, 0) };
			Var6.f_2 = 0f;
			fVar15 = unk_0x652D2EEEF1D3E62C(Var6);
			unk_0xA888F8CC04F25CC8(&uVar3);
			if (fVar15 > 0.8f)
			{
				Var6 = { Var6 * FtoV((0.78f / fVar15)) };
				Var9 = { unk_0x6B62510F212526DC(iLocal_297, 0) + Var6 };
				if (iLocal_122 == 12)
				{
					unk_0x7D1424753688EE7A(0, Var9, 1f, 20000, 1048576000, 0, func_67(Var9, unk_0x6B62510F212526DC(iLocal_297, 0)));
				}
				else
				{
					unk_0x13C3030981EA7C3B(0, Var9, 1f, -1, func_67(Var9, unk_0x6B62510F212526DC(iLocal_297, 0)), 1056964608);
				}
			}
			else if (fVar15 > 0.15f)
			{
				unk_0x30E00B59448AB97E(0, func_67(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_297, 0)), 0);
			}
			unk_0x49D97B076E3590AC(0, "pickup_object", "pickup_low", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0xC963A45B50851768(uVar3);
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
				unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 177, 1);
				unk_0x8ACADA903FCAA42F(unk_0xE2D3D51028F0428A(), uVar3);
			}
			unk_0x7461D7C5BA953BC7(&uVar3);
			func_68(1);
		}
	}
	func_25(&uLocal_293);
	while ((func_12(&uLocal_293) < 6f && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0)) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "pickup_object", "pickup_low", 3))
	{
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 177, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "pickup_object", "pickup_low", 3))
	{
		unk_0xB5CB6BC7AD4CDCCE(unk_0xE2D3D51028F0428A(), "pickup_object", "pickup_low", 0.8f);
		bVar16 = true;
	}
	while ((func_12(&uLocal_293) < 6f && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0)) && unk_0xD01FAFCE275C94F3(unk_0xE2D3D51028F0428A(), "pickup_object", "pickup_low") < 0.22f)
	{
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 177, 1);
		if (!bVar16 && unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "pickup_object", "pickup_low", 3))
		{
			unk_0xB5CB6BC7AD4CDCCE(unk_0xE2D3D51028F0428A(), "pickup_object", "pickup_low", 0.8f);
			bVar16 = true;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!bVar16 && unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "pickup_object", "pickup_low", 3))
		{
			unk_0xB5CB6BC7AD4CDCCE(unk_0xE2D3D51028F0428A(), "pickup_object", "pickup_low", 0.7f);
			bVar16 = true;
		}
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 177, 1);
	}
	func_11(&uLocal_293);
	func_43();
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (func_37() == 0)
		{
			unk_0xE3752B10DC995E95(unk_0xE2D3D51028F0428A(), 9, 5, 0, 0);
		}
		else if (func_37() == 1)
		{
			unk_0xE3752B10DC995E95(unk_0xE2D3D51028F0428A(), 8, 1, 0, 0);
		}
		else if (func_37() == 2)
		{
			unk_0xE3752B10DC995E95(unk_0xE2D3D51028F0428A(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_35(func_36(iLocal_122)) && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
			unk_0x7D1424753688EE7A(unk_0xE2D3D51028F0428A(), func_36(iLocal_122), 1f, -1, 1048576000, 0, 1193033728);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_297))
		{
			unk_0x4BDA5AFD88C085EB(&iLocal_297);
		}
		uVar4 = unk_0x1BCEC0B1056BD6AC(26379945, func_34(iLocal_122), func_33(iLocal_122), func_32(iLocal_122), 1, 2);
		uVar5 = unk_0x1BCEC0B1056BD6AC(26379945, func_31(iLocal_122), func_30(iLocal_122), func_29(iLocal_122), 0, 2);
		unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
		unk_0x7B6613DCAA2C2C29("HAND_SHAKE", 0.2f);
		func_25(&uVar0);
		while (func_12(&uVar0) < 1.5f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x889B4F9D52E23DEE(uVar5, uVar4, func_28(iLocal_122), 1, 1);
		func_23(&uVar0);
		while (func_12(&uVar0) < ((unk_0xBBDA792448DB5A89(func_28(iLocal_122)) / 1000f) + 0.3f))
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 177, 1);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		Local_123.f_2 = iLocal_297;
	}
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 177, 1);
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
	return Global_113386.f_2363.f_539.f_4321;
}

void func_38()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_41(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_40(unk_0xE2D3D51028F0428A());
			if (func_39(iVar0) && (!func_116(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_39(Global_113386.f_2363.f_539.f_4321))
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

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
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
	return Global_1998[iParam0 /*29*/];
}

void func_43()
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	var uVar8;
	
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return;
	}
	unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
	if (unk_0xE5965CDF24F93A9F(iLocal_297))
	{
		unk_0x4BDA5AFD88C085EB(&iLocal_297);
	}
	func_51(0, 0, 1);
	iLocal_297 = unk_0x0A7322C6D0E1A985(joaat("p_parachute_s"), func_50(iLocal_122), 1, 1, 0);
	unk_0x8CE3D365F064F69E(iLocal_297, func_49(iLocal_122), 2, 1);
	func_44(&Var0, &uVar3);
	Var4 = { 0f, 0f, uVar3 };
	uVar7 = unk_0x8F5F4164BF5FB513(Var0, Var4, 2);
	unk_0xAA8557AFE4A4A184(iLocal_297, uVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
		unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	unk_0x91DFC8F68F6D9B05(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", 1);
	uVar8 = unk_0xB93A4265CB0F5B1F("DEFAULT_ANIMATED_CAMERA", 0);
	unk_0x7B8CE3A05613F41C(uVar8, uVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0xDD786B89B15AA63F(uVar8, 1);
	unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
	while (unk_0x54DE1614490C2A83(uVar7) < 0.6f)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
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
			*uParam1 = func_47(func_67(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), *uParam0), -180f, 180f);
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
			*uParam1 = func_47(func_67(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), *uParam0), -180f, 180f);
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
			*uParam1 = func_47(func_67(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_47(func_67(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), *uParam0), -180f, 180f);
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
	unk_0x64E21045781AFBC9(unk_0xB6BA8B8E3D0B41C6(), 0, iParam0);
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0x85050CAC8798CDD0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 15f);
	}
	unk_0xEE61327A6ED2D0B8(iParam1);
	func_63(0);
	func_53(1, 1, iParam2, 0, 0, 0, 0);
	unk_0xB60709BD0E075903(0);
	unk_0x72DB022C36FCEA24(0);
	func_52(23, 1);
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&Global_32207, iParam0);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_32207, iParam0);
	}
}

void func_53(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_62(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_61())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_60(1, iParam3, uParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_62(0);
		unk_0x45227777D3EBECE5();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_60(0, iParam3, uParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_58(unk_0x9E2D6C50374FCFA9())) && !func_55(unk_0x9E2D6C50374FCFA9(), 0)) && !func_54()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_58(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_78317 = 0;
	}
}

bool func_54()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 14);
}

bool func_55(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_56(-1, 0) == 8;
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

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_57();
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

bool func_59()
{
	return BitTest(Global_2621446, 3);
}

int func_60(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_61()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_62(int iParam0)
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

void func_63(int iParam0)
{
	if (func_66())
	{
		return;
	}
	if (Global_20464)
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
	if (!func_61())
	{
		Global_20266.f_1 = 3;
	}
}

void func_64(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_95(0))
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

bool func_65()
{
	return BitTest(Global_1958711, 5);
}

bool func_66()
{
	return BitTest(Global_1958711, 19);
}

float func_67(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0xD12EFCAB87804BED((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_68(bool bParam0)
{
	if (bParam0)
	{
		func_69();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0xCED9E32812D6C7C7(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_95(0))
		{
			func_63(0);
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

void func_69()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
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
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return;
	}
	iVar0 = func_81(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44024[iVar0 /*5*/];
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
	if (!Global_43998[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_43998[iParam0 /*5*/].f_1 == unk_0xE2D3D51028F0428A())
		{
			Global_44236 = 0;
		}
	}
	Global_43998[iParam0 /*5*/] = 13;
	Global_43998[iParam0 /*5*/].f_1 = 0;
	Global_43998[iParam0 /*5*/].f_2 = 0;
	Global_43998[iParam0 /*5*/].f_3 = 0;
	Global_43998[iParam0 /*5*/].f_4 = 0;
	Global_43996 = (Global_43996 - 1);
	if (Global_43996 < 0)
	{
		Global_43996 = 0;
	}
}

int func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/].f_1 == iParam0)
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
	Global_44105[iVar0 /*6*/] = iParam0;
	Global_44105[iVar0 /*6*/].f_1 = iParam1;
	Global_44105[iVar0 /*6*/].f_2 = iParam2;
	Global_44105[iVar0 /*6*/].f_3 = iParam3;
	Global_44105[iVar0 /*6*/].f_4 = iParam4;
	Global_44105[iVar0 /*6*/].f_5 = iParam5;
}

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44105[iVar0 /*6*/].f_2 == 6)
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
		if (iParam2 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				if (iParam1 == Global_44105[iVar0 /*6*/].f_1)
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
		if (!Global_44024[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
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
	if (Global_8941[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xB0550BC91B0159D6(&Global_8136, 25);
	unk_0xCED9E32812D6C7C7(&Global_8137, 11);
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
		if (Global_97919.f_44 == 1)
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
		Global_43016++;
		*iParam0 = Global_43016;
		unk_0xC099DA307DD6BC62(unk_0xB6BA8B8E3D0B41C6(), 0);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x2481B055C8B5CA09(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *iParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *iParam0)
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
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*iParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
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

int func_85(int iParam0)
{
	if (Global_43052 == 15)
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
	
	uVar0 = unk_0x9993EF7FDBCDB632();
	if (unk_0xE5965CDF24F93A9F(uVar0))
	{
		Local_123.f_1 = iVar0;
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_297))
	{
		Var1 = { unk_0x6B62510F212526DC(iLocal_297, 1) };
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
	if (!unk_0x3583A42587543334(unk_0xB6BA8B8E3D0B41C6()))
	{
		return 0;
	}
	if (func_95(0))
	{
		return 0;
	}
	if (unk_0xF34D8FCAE3FD4EE4())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1 && Global_43792[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43792[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43792[iVar0 /*32*/].f_5 = 1;
			Global_43792[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43792[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43792[iVar0 /*32*/].f_7)
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
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
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
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_92(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xB4C854DD86E40FDA(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x04458B4E5D9E466A())
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
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = unk_0x69CE66B03B2184EB();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xACC32B78196FBC2A(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_43792[iVar0 /*32*/].f_1;
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
	return Global_75485;
}

int func_95(int iParam0)
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

var func_96(int iParam0, int iParam1)
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

bool func_97()
{
	return unk_0x320D1840B6DAA1CC() <= Global_23150.f_6269 + 100;
}

int func_98()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_99(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
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
	
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1);
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
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		return ((((bVar1 && unk_0x4C1B8C5717647539(0, 69)) || (bVar1 && unk_0x4C1B8C5717647539(0, 70))) || (bVar1 && unk_0x4C1B8C5717647539(0, 68))) || unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9()));
	}
	return (((((bVar1 && unk_0x4C1B8C5717647539(0, 24)) || (bVar1 && unk_0x4C1B8C5717647539(0, 25))) || (bVar1 && unk_0x4C1B8C5717647539(0, 47))) || unk_0x1E6ABFB33BDD2A4C(unk_0xE2D3D51028F0428A())) || unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9()));
}

int func_104(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
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
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_111()) || Global_112433) || Global_31962) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_107()) || func_98()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_111()) || Global_31962) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_111()) || Global_112433) || Global_31962) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_111()) || Global_112433) || Global_31962) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_98()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_111() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_96(8, -1)) || func_98()) || func_106()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_96(8, -1) || func_109()) || func_108()) || func_106()) || func_105())
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
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_111()) || Global_31962) || func_110()) || func_96(8, -1)) || func_108()) || func_107()) || func_98()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_111()) || func_108()) || Global_112433) || Global_31962) || func_110()) || Global_44238) || func_96(8, -1)) || func_107()) || func_106()) || func_98()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_111()) || Global_112433) || Global_31962) || func_110()) || func_96(8, -1)) || func_107()) || func_106()) || func_109()) || func_108()) || func_98())
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
	return Global_100480.f_1;
}

int func_106()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_107()
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

bool func_108()
{
	return Global_100493.f_376 > 0;
}

bool func_109()
{
	return Global_100493.f_375 > 0;
}

var func_110()
{
	return Global_1575058;
}

int func_111()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_112()
{
	if (unk_0xB4C854DD86E40FDA(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_113()
{
	return Global_96273;
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
	return unk_0x12DD4A0B247D9B4D(Global_32338[iVar0 /*23*/].f_19);
}

bool func_116(int iParam0)
{
	return Global_43052 == iParam0;
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
				iLocal_297 = unk_0x0A7322C6D0E1A985(joaat("p_parachute_s"), func_50(iLocal_122), 1, 1, 0);
				unk_0x8CE3D365F064F69E(iLocal_297, func_49(iLocal_122), 2, 1);
				unk_0x5C65DDDC219B3AA5(iLocal_297, 1);
				break;
			
			case 6:
			case 12:
				iLocal_297 = unk_0x0A7322C6D0E1A985(joaat("p_parachute_s"), func_50(iLocal_122), 1, 1, 0);
				unk_0x8CE3D365F064F69E(iLocal_297, func_49(iLocal_122), 2, 1);
				unk_0x82AF23F360C69CAE(iLocal_297);
				Var0 = { func_120(iLocal_122) };
				if (!func_35(Var0))
				{
					uLocal_298 = unk_0xBA715A7BEBA5A1F9(joaat("bati"), Var0, func_119(iLocal_122), 1, 1, 0);
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
			return (((unk_0x6F940C2636C076AD("pickup_object") && unk_0x6F940C2636C076AD("oddjobs@basejump@ig_15")) && func_122(&uLocal_118)) && func_122(&uLocal_120));
			break;
		
		case 12:
			return ((unk_0x6F940C2636C076AD("pickup_object") && unk_0x6F940C2636C076AD("oddjobs@basejump@ig_15")) && func_122(&uLocal_118));
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
			if (!unk_0x0152AA00FA3130F1((*uParam0)[iVar0]))
			{
				if (!unk_0x0152AA00FA3130F1((*uParam0)[iVar0]))
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
			unk_0x8FB472886552D737("pickup_object");
			unk_0x8FB472886552D737("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_125(&uLocal_118, joaat("p_parachute_s"));
			func_125(&uLocal_120, joaat("bati"));
			unk_0x8FB472886552D737("pickup_object");
			unk_0x8FB472886552D737("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_125(&uLocal_118, joaat("p_parachute_s"));
			unk_0x8FB472886552D737("pickup_object");
			unk_0x8FB472886552D737("oddjobs@basejump@ig_15");
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
			unk_0xD69A0C3662175E68((*uParam0)[iVar0]);
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

int func_129()
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

int func_130()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
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
	iVar0 = BitTest(Global_113386.f_9085.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

bool func_132(int iParam0)
{
	return func_133(iParam0, Global_43052);
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
	if (unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
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
	if (unk_0xB4C854DD86E40FDA(joaat("bj")) > 0)
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
	iLocal_97 = 51000;
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
	return Global_112473[iParam0 /*10*/].f_1;
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
	unk_0xAFBDF6A5E54114C1();
}

void func_144()
{
	func_141(&uLocal_94, 4);
	func_145();
	if (unk_0x87C0DA419F19FF57(uLocal_52))
	{
		unk_0xD4798E4F64B31C25(uLocal_52, 3);
	}
	if (!unk_0xE8F6C1F695B25B91(&Local_69))
	{
		if (unk_0xEE91150B7F06C500(&Local_69) != 0)
		{
			unk_0xD195D79715508EFA(&Local_69);
		}
	}
}

void func_145()
{
}

