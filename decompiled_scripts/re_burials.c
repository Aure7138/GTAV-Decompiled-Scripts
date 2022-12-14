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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
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
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54[2] = { 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61[2] = { 0, 0 };
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81[2];
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	float fLocal_97 = 0f;
	float fLocal_98[2] = { 0f, 0f };
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<3> Local_107 = { 0, 0, 0 } ;
	int iLocal_110 = 0;
	var uLocal_111[2] = { 0, 0 };
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	bool bLocal_122 = 0;
	int iLocal_123 = 0;
	bool bLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<3> Local_139 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	bool bLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	struct<6> Local_150 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_156 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_162 = 0;
	var uLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	bool bLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	var uLocal_178 = 16;
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
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
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
	int iVar0;
	
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
	iLocal_18 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	Local_107 = { 154.92f, 6841.12f, 19.14f };
	iLocal_125 = 200;
	Local_139 = { -1161.199f, 934.5912f, 196.7591f };
	Local_142 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_150, "", 24);
	if (unk_0x55EEDBBFDC6E810F(11))
	{
		if (!unk_0x66599E73DBA5A850(iLocal_53))
		{
			if (unk_0xE65E1573677B6119(iLocal_53))
			{
				unk_0xDC21E058EE11964C(iLocal_53);
			}
		}
		func_212();
	}
	if (func_170(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_167(-1);
	}
	else
	{
		unk_0x675D9C12C73D3DE7();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xCBE2EC2868A6C438() || iLocal_131)
		{
			if (!func_166())
			{
				if (func_165())
				{
					func_212();
				}
			}
			unk_0x385C3C9C52E9D548("RE_BU", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_153())
					{
						func_212();
					}
					if (!iLocal_66)
					{
						func_152();
					}
					else
					{
						func_151();
					}
					if (bLocal_52)
					{
						iLocal_162 = 1;
						iLocal_48 = 1;
					}
					break;
				
				case 1:
					if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
					{
						func_150();
						switch (iLocal_49)
						{
							case 0:
								func_140();
								iLocal_49 = 1;
								break;
							
							case 1:
								if ((!func_133(iLocal_54[0], &iLocal_128, &uLocal_127, uLocal_126, iLocal_129, 7f, 0) && !func_133(iLocal_54[1], &iLocal_128, &uLocal_127, uLocal_126, iLocal_129, 7f, 0)) && !func_132())
								{
									switch (iLocal_50)
									{
										case 0:
											func_131();
											if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_78, 50f, 35f, 50f, 0, 1, 0))
											{
												func_130();
											}
											if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_78, 80f, 65f, 50f, 0, 1, 0))
											{
												func_129();
											}
											if (!unk_0x055111B11E6624FD(iLocal_58, 0))
											{
												if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, 1, 0) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_88 - Vector(0f, 0f, 7f), 20f, 15f, 50f, 0, 1, 0))
												{
													func_128();
													if (unk_0xCE4AAA035282336C(uLocal_114))
													{
														unk_0xA4B6A532E7DDE178(uLocal_114, 0);
													}
													iLocal_64 = 0;
													while (iLocal_64 <= 1)
													{
														if (unk_0xCE4AAA035282336C(uLocal_111[iLocal_64]))
														{
															unk_0xA4B6A532E7DDE178(uLocal_111[iLocal_64], 0);
														}
														iLocal_64++;
													}
													if (!func_166())
													{
														func_119(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_128();
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								if ((func_133(iLocal_54[0], &iLocal_128, &uLocal_127, uLocal_126, iLocal_129, 7f, 0) || func_133(iLocal_54[1], &iLocal_128, &uLocal_127, uLocal_126, iLocal_129, 7f, 0)) || iLocal_129)
								{
									iLocal_129 = 1;
									if (!func_166())
									{
										func_119(1);
									}
									if (unk_0xCE4AAA035282336C(uLocal_114))
									{
										unk_0xA4B6A532E7DDE178(uLocal_114, 1);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (unk_0xCE4AAA035282336C(uLocal_111[iLocal_64]))
										{
											unk_0xA4B6A532E7DDE178(uLocal_111[iLocal_64], 1);
										}
										iLocal_64++;
									}
									switch (iLocal_128)
									{
										case 0:
											func_118();
											break;
										
										case 1:
											func_118();
											break;
										
										case 2:
											func_118();
											break;
										
										case 3:
											func_118();
											break;
										
										case 4:
											func_118();
											break;
										
										case 5:
											func_118();
											break;
										}
								}
								if (func_132())
								{
									iLocal_75 = 1;
									if (unk_0xCE4AAA035282336C(uLocal_114))
									{
										unk_0xA4B6A532E7DDE178(uLocal_114, 1);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (unk_0xCE4AAA035282336C(uLocal_111[iLocal_64]))
										{
											unk_0xA4B6A532E7DDE178(uLocal_111[iLocal_64], 1);
										}
										iLocal_64++;
									}
									if (!func_117())
									{
										switch (iLocal_51)
										{
											case 1:
												func_114();
												break;
											
											case 3:
												func_113();
												break;
											
											case 4:
												func_112();
												break;
											
											case 5:
												func_110();
												unk_0x4EDE34FBADD967A6(0);
												if (!unk_0x66599E73DBA5A850(iLocal_54[0]))
												{
													func_108(iLocal_54[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!unk_0x66599E73DBA5A850(iLocal_54[1]))
												{
													func_108(iLocal_54[1], "GENERIC_WAR_CRY", 24);
												}
												func_118();
												break;
											
											case 6:
												func_110();
												unk_0x4EDE34FBADD967A6(0);
												if (!unk_0x66599E73DBA5A850(iLocal_54[0]))
												{
													func_108(iLocal_54[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!unk_0x66599E73DBA5A850(iLocal_54[1]))
												{
													func_108(iLocal_54[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_118();
												break;
										}
									}
									else
									{
										func_110();
										unk_0x4EDE34FBADD967A6(0);
										iVar0 = 0;
										while (iVar0 < iLocal_54)
										{
											if (!unk_0x66599E73DBA5A850(iLocal_54[iVar0]))
											{
												unk_0xCAA87C472B7C75CB(iLocal_54[iVar0], 5, 0, 0);
												unk_0xC6C9BF71106ABCAC(iLocal_54[iVar0], unk_0xC1A5EC5C986B98AD(), 1000f, -1, 0, 0);
												unk_0x71A535529C1CA5DF(iLocal_54[iVar0], 1);
												if (unk_0x7DE17ACDD8BA2642(iLocal_60))
												{
													if (unk_0xDC116D955A63BDBE(iLocal_60))
													{
														unk_0xA81AA70A4D25E140(iLocal_60, 1, 1);
													}
												}
												if (unk_0xCE4AAA035282336C(uLocal_111[iVar0]))
												{
													unk_0x45533C09A6C9B409(&(uLocal_111[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_49 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_130)
								{
									func_107();
								}
								if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
								{
									func_92();
								}
								break;
							
							case 4:
								func_91();
								if (!unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_107, 100f, 100f, 100f, 1, 1, 0))
								{
									unk_0xFF2AF80F9EC7704C(1f);
									if (unk_0x7DE17ACDD8BA2642(iLocal_54[0]) && unk_0x7DE17ACDD8BA2642(iLocal_54[1]))
									{
										unk_0x1EEF71E3CDD868D3(&(iLocal_54[0]));
										unk_0x1EEF71E3CDD868D3(&(iLocal_54[1]));
									}
								}
								if (!unk_0x7DE17ACDD8BA2642(iLocal_57))
								{
									if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_139, 200f, 200f, 200f, 1, 1, 0))
									{
										unk_0x852EC2A7DE66202D(joaat("s_m_m_highsec_01"));
										unk_0x852EC2A7DE66202D(joaat("granger"));
										if (unk_0x0CBB7C273DED26E7(joaat("s_m_m_highsec_01")) && unk_0x0CBB7C273DED26E7(joaat("granger")))
										{
											iLocal_59 = unk_0xABEEDBEF2BBDF5B3(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, 1, 1, 0);
											unk_0x73562E6072D7A39D(iLocal_59, 200);
											unk_0x55D8689ACE5225F2(iLocal_59, 1.5f);
											iLocal_57 = unk_0x4FA078B1B32445FD(iLocal_59, 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
											unk_0xFECAE061D8C80757(iLocal_57, 0, 0, 2, 0);
											unk_0xFECAE061D8C80757(iLocal_57, 3, 0, 0, 0);
											unk_0xFECAE061D8C80757(iLocal_57, 4, 0, 0, 0);
											unk_0xCBDC2B59922F92C3(iLocal_57, joaat("weapon_pistol"), -1, 1, 1);
											unk_0x8386356641D0DED1(iLocal_57, iLocal_177);
										}
									}
								}
								if (!unk_0x66599E73DBA5A850(iLocal_53))
								{
									if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
									{
										if (unk_0x2E240694D642679A(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) < 1)
										{
											if (!iLocal_132)
											{
												func_87(0);
												func_110();
												unk_0x4EDE34FBADD967A6(0);
												func_71(&uLocal_178, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_132 = 1;
											}
										}
									}
									else
									{
										iLocal_132 = 0;
									}
									if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_139, Global_22, 1, 1, 0) && unk_0xEAEF747543427AC5(iLocal_53, unk_0xC1A5EC5C986B98AD(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (unk_0xE65E1573677B6119(iLocal_53))
										{
											if (unk_0xCE4AAA035282336C(uLocal_137))
											{
												unk_0x45533C09A6C9B409(&uLocal_137);
											}
											if (unk_0xCE4AAA035282336C(uLocal_138))
											{
												unk_0x45533C09A6C9B409(&uLocal_138);
											}
											if (func_70())
											{
												iLocal_49 = 5;
											}
											else
											{
												iLocal_49 = 6;
											}
										}
									}
									else
									{
										func_65();
										func_64();
										func_63();
										func_59();
										func_58();
										func_52();
										if (func_51(Local_139))
										{
											func_87(0);
											func_110();
											unk_0x4EDE34FBADD967A6(0);
											func_71(&uLocal_178, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_50())
										{
											func_87(0);
											func_110();
											unk_0x4EDE34FBADD967A6(0);
											func_71(&uLocal_178, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_91();
								if (func_49(1, 0, 1))
								{
									func_48();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 6:
								func_91();
								if (func_49(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (unk_0x7DE17ACDD8BA2642(iLocal_60))
								{
									if (unk_0xDC116D955A63BDBE(iLocal_60))
									{
										if (!unk_0x66599E73DBA5A850(iLocal_54[0]))
										{
											if (unk_0x7BB3D8F4F6310EB8(iLocal_54[0], "random@burial", "a_burial_stop", 3))
											{
												if (unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													unk_0xA81AA70A4D25E140(iLocal_60, 1, 1);
												}
											}
											else
											{
												unk_0xA81AA70A4D25E140(iLocal_60, 1, 1);
											}
										}
									}
								}
								if (unk_0x66599E73DBA5A850(iLocal_54[0]) || unk_0x66599E73DBA5A850(iLocal_54[1]))
								{
									bLocal_147 = true;
								}
								if (bLocal_147)
								{
									if (unk_0xFBD273FDBCF0C5BD(iLocal_58, 0))
									{
										if (!unk_0x66599E73DBA5A850(iLocal_54[0]))
										{
											unk_0xF0654A614CC902C9(iLocal_54[0]);
											if (unk_0x73D13C05CA29773A(iLocal_54[0], iLocal_58, -1, 0, 0) || unk_0x73D13C05CA29773A(iLocal_54[0], iLocal_58, 0, 0, 0))
											{
												if (!iLocal_164)
												{
													unk_0x909F139DC199D8E0(iLocal_54[0]);
													if (unk_0x7DE17ACDD8BA2642(iLocal_60))
													{
														if (unk_0xDC116D955A63BDBE(iLocal_60))
														{
															unk_0xA81AA70A4D25E140(iLocal_60, 1, 1);
														}
													}
													unk_0xDBC7406226B5540E(&uLocal_65);
													unk_0x1F9F6C767BE640D5(0);
													unk_0xA930436FB34B9690(0, unk_0x7394CB479CCA24AF(iLocal_58, -0.5f, 0.5f, 0f), unk_0xC1A5EC5C986B98AD(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0xD30E9CAE1FEA1C7E(0, iLocal_58, -1, -1, 3f, 9, 0);
													unk_0xB8194851FFF54D3B(0, iLocal_58, unk_0xC1A5EC5C986B98AD(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0xF2CFC6EC8C85FA78(uLocal_65);
													unk_0x3D7110D966B0CEA2(iLocal_54[0], uLocal_65);
													unk_0x63EF69C6969A3D26(&uLocal_65);
													unk_0x71A535529C1CA5DF(iLocal_54[0], 1);
													unk_0x3748858CB3A883E2(iLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (unk_0xF5F493B789EA063E(iLocal_54[0], joaat("script_task_perform_sequence")) == 1)
												{
													if (unk_0xD64D855C3A010BF0(iLocal_54[0]) == 3)
													{
														if (!unk_0xEAEF747543427AC5(iLocal_54[0], unk_0xC1A5EC5C986B98AD(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x1C4E4DC1EFE24DF1(iLocal_54[0], Local_88, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0x1EEF71E3CDD868D3(&(iLocal_54[0]));
														}
													}
												}
											}
											else
											{
												unk_0xCAC2B0C65B18E755(iLocal_54[0], unk_0xC1A5EC5C986B98AD(), 0, 16);
												unk_0x71A535529C1CA5DF(iLocal_54[0], 1);
											}
										}
										if (!unk_0x66599E73DBA5A850(iLocal_54[1]))
										{
											unk_0xF0654A614CC902C9(iLocal_54[1]);
											if (unk_0x73D13C05CA29773A(iLocal_54[1], iLocal_58, -1, 0, 0) || unk_0x73D13C05CA29773A(iLocal_54[1], iLocal_58, 0, 0, 0))
											{
												if (!iLocal_164)
												{
													unk_0x909F139DC199D8E0(iLocal_54[1]);
													unk_0xDBC7406226B5540E(&uLocal_65);
													unk_0x1F9F6C767BE640D5(0);
													unk_0xA930436FB34B9690(0, unk_0x7394CB479CCA24AF(iLocal_58, -0.5f, 0.5f, 0f), unk_0xC1A5EC5C986B98AD(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0xD30E9CAE1FEA1C7E(0, iLocal_58, -1, -1, 3f, 9, 0);
													unk_0xB8194851FFF54D3B(0, iLocal_58, unk_0xC1A5EC5C986B98AD(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0xF2CFC6EC8C85FA78(uLocal_65);
													unk_0x3D7110D966B0CEA2(iLocal_54[1], uLocal_65);
													unk_0x63EF69C6969A3D26(&uLocal_65);
													unk_0x71A535529C1CA5DF(iLocal_54[1], 1);
													unk_0x3748858CB3A883E2(iLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (unk_0xF5F493B789EA063E(iLocal_54[1], joaat("script_task_perform_sequence")) == 1)
												{
													if (unk_0xD64D855C3A010BF0(iLocal_54[1]) == 3)
													{
														if (!unk_0xEAEF747543427AC5(iLocal_54[1], unk_0xC1A5EC5C986B98AD(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x1C4E4DC1EFE24DF1(iLocal_54[1], Local_88, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0x1EEF71E3CDD868D3(&(iLocal_54[1]));
														}
													}
												}
											}
											else
											{
												unk_0xCAC2B0C65B18E755(iLocal_54[1], unk_0xC1A5EC5C986B98AD(), 0, 16);
												unk_0x71A535529C1CA5DF(iLocal_54[1], 1);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_49 != 9)
						{
							if (!unk_0x66599E73DBA5A850(iLocal_53))
							{
								if (unk_0x1C4E4DC1EFE24DF1(iLocal_53, Local_142, 5f, 5f, 5f, 0, 1, 0))
								{
									func_8(0);
									unk_0x4EDE34FBADD967A6(0);
									func_110();
									iLocal_49 = 9;
								}
							}
						}
						if (func_6())
						{
							if (unk_0x7DE17ACDD8BA2642(iLocal_53))
							{
								unk_0xE9C250FA35A936C8(&iLocal_53);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_49 != 3)
						{
							if (func_1())
							{
								unk_0x5C37F509B0398DFA("RE6_BOTH_DEAD");
								if (!iLocal_74)
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_106 = unk_0xA5E11AF0A2B928C1() + 8500;
									iLocal_74 = 1;
								}
								if (!unk_0x66599E73DBA5A850(iLocal_53))
								{
									if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_53, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_49 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_49 == 1 || iLocal_49 == 2) || iLocal_49 == 3) || iLocal_49 == 7)
						{
							if (!unk_0x66599E73DBA5A850(iLocal_53))
							{
								if (!bLocal_130)
								{
									if (unk_0xF5F493B789EA063E(iLocal_53, joaat("script_task_synchronized_scene")) != 1 && unk_0xF5F493B789EA063E(iLocal_53, joaat("script_task_synchronized_scene")) != 0)
									{
										unk_0x35DD50D05C962B6A(iLocal_53);
										uLocal_343 = unk_0x191673E3F99212B2(Local_78, -2f, -4f, 18f, 2);
										unk_0x468D976993BF7FE1(iLocal_53, uLocal_343, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										unk_0xA2CBB04560DD6361(uLocal_61[0], uLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0xA2CBB04560DD6361(uLocal_61[1], uLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0x5F243F8265BB664F(uLocal_343, 1);
										unk_0x71A535529C1CA5DF(iLocal_53, 1);
									}
									if (unk_0x584CD220C093B0B4(iLocal_53))
									{
										unk_0xC019B2705F3AC330(iLocal_53, 1);
										unk_0xA354B07ADFAA11F3(iLocal_53, 1);
										unk_0xED2BD879E739E86B(iLocal_53, 0, 0);
									}
								}
								if ((unk_0x02EC000DE597469F(iLocal_53) || unk_0x07960491F4346AF3(iLocal_53)) || (iLocal_125 - unk_0x2935B4D6CE81318D(iLocal_53)) >= 50)
								{
									unk_0xC019B2705F3AC330(iLocal_53, 1);
									unk_0xA354B07ADFAA11F3(iLocal_53, 1);
									unk_0xED2BD879E739E86B(iLocal_53, 0, 0);
								}
								if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && !unk_0x055111B11E6624FD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0))
								{
									if (unk_0xDC58AE028CB223BA(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) < 5f)
									{
									}
									else if (unk_0x110B96B5C67CC73B(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), iLocal_53))
									{
										unk_0xC019B2705F3AC330(iLocal_53, 1);
										unk_0xA354B07ADFAA11F3(iLocal_53, 1);
										unk_0xED2BD879E739E86B(iLocal_53, 0, 0);
									}
								}
								if (!unk_0x055111B11E6624FD(iLocal_58, 0))
								{
									if (unk_0x110B96B5C67CC73B(iLocal_58, iLocal_53))
									{
										unk_0xC019B2705F3AC330(iLocal_53, 1);
										unk_0xA354B07ADFAA11F3(iLocal_53, 1);
										unk_0xED2BD879E739E86B(iLocal_53, 0, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_212();
		}
	}
}

int func_1()
{
	if (!bLocal_130)
	{
		if (!unk_0x7DE17ACDD8BA2642(iLocal_54[0]) && !unk_0x7DE17ACDD8BA2642(iLocal_54[1]))
		{
			return 1;
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_54[0]) && unk_0x7DE17ACDD8BA2642(iLocal_54[1]))
		{
			if (unk_0x66599E73DBA5A850(iLocal_54[0]) && unk_0x66599E73DBA5A850(iLocal_54[1]))
			{
				return 1;
			}
			if (unk_0xDF599E1CB1AF931D(iLocal_54[0]) && unk_0xDF599E1CB1AF931D(iLocal_54[1]))
			{
				return 1;
			}
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_54[0]) && !unk_0x7DE17ACDD8BA2642(iLocal_54[1]))
		{
			if (unk_0x66599E73DBA5A850(iLocal_54[0]))
			{
				return 1;
			}
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_54[1]) && !unk_0x7DE17ACDD8BA2642(iLocal_54[0]))
		{
			if (unk_0x66599E73DBA5A850(iLocal_54[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()
{
	if (unk_0x66599E73DBA5A850(iLocal_54[0]))
	{
		if (unk_0xCE4AAA035282336C(uLocal_111[0]))
		{
			if (unk_0x7DE17ACDD8BA2642(iLocal_60))
			{
				if (unk_0xDC116D955A63BDBE(iLocal_60))
				{
					unk_0xA81AA70A4D25E140(iLocal_60, 1, 1);
				}
			}
			func_3(&uLocal_178, 4);
			unk_0x45533C09A6C9B409(&(uLocal_111[0]));
		}
	}
	if (unk_0x66599E73DBA5A850(iLocal_54[1]))
	{
		if (unk_0xCE4AAA035282336C(uLocal_111[1]))
		{
			func_3(&uLocal_178, 3);
			unk_0x45533C09A6C9B409(&(uLocal_111[1]));
		}
	}
	if (unk_0x66599E73DBA5A850(iLocal_53))
	{
		if (!unk_0x055111B11E6624FD(iLocal_53, 0))
		{
		}
		if (unk_0xCE4AAA035282336C(uLocal_114))
		{
			func_3(&uLocal_178, 5);
			unk_0x45533C09A6C9B409(&uLocal_114);
		}
	}
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	unk_0x5C37F509B0398DFA("RE6_END");
	func_212();
}

int func_5()
{
	if (unk_0x66599E73DBA5A850(iLocal_53))
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if (Global_32403)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)
{
	Global_113634 = iParam0;
}

void func_8(int iParam0)
{
	Global_22736 = iParam0;
}

int func_9()
{
	if (Global_113648.f_24997.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return Global_32402;
}

void func_11()
{
	if (!unk_0x66599E73DBA5A850(iLocal_53))
	{
		if (!unk_0x66599E73DBA5A850(iLocal_54[0]) || !unk_0x66599E73DBA5A850(iLocal_54[1]))
		{
			if (!func_12())
			{
				switch (iLocal_168)
				{
					case 0:
						if (iLocal_106 < unk_0xA5E11AF0A2B928C1())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 1:
						if (iLocal_106 < unk_0xA5E11AF0A2B928C1())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 2:
						if (iLocal_106 < unk_0xA5E11AF0A2B928C1())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 3:
						if (iLocal_106 < unk_0xA5E11AF0A2B928C1())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(3500, 5000));
								iLocal_168 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

void func_13()
{
	while (!func_46())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_6())
	{
		if (func_45() == 0)
		{
			func_42(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_45() == 1)
		{
			func_42(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_45() == 2)
		{
			func_42(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	unk_0xA3F7AA17806EB0A8(unk_0x93E99A2DBCBA9CFA(), 1, 0);
	func_17(-1, 0);
	func_14();
	func_212();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
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

int func_16(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_113648.f_24997.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113636 = iParam1;
		if (Global_113634 == 0)
		{
			if (((Global_113637 == 1 || Global_113637 == 5) || Global_113637 == 11) || Global_113637 == 25)
			{
				func_7(2);
			}
			else if ((Global_113637 == 26 || Global_113637 == 8) || Global_113637 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_18(int iParam0, var uParam1, var uParam2)
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
		func_22((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = uParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_19();
	}
}

void func_19()
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
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113648.f_10196[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113648.f_10196[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113384++;
					fVar1 = (fVar1 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113385++;
					fVar2 = (fVar2 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113386++;
					fVar3 = (fVar3 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113387++;
					fVar4 = (fVar4 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113388++;
					fVar5 = (fVar5 + (Global_113648.f_10196[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113389++;
					fVar6 = (fVar6 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113390++;
					fVar7 = (fVar7 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113367 > 0)
	{
		if (Global_113384 == Global_113367)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113368 > 0)
	{
		if (Global_113385 == Global_113368)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113369 > 0)
	{
		if (Global_113386 == Global_113369)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113370 > 0)
	{
		if (Global_113387 == Global_113370)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113371 > 0)
	{
		if (((Global_113388 == Global_113371 || (Global_113371 * 10 / Global_113388) < 41) || Global_113388 > Global_113374) || Global_113388 == Global_113374)
		{
			if (!BitTest(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					unk_0xE571C8D0AF67E3B4(joaat("num_rndevents_completed"), Global_113371, 0);
					unk_0xECDAB41968FF21A8(&(Global_113648.f_10196.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113372 > 0)
	{
		if (Global_113389 == Global_113372)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113373 > 0)
	{
		if (Global_113390 == Global_113373)
		{
			fVar7 = 5f;
		}
	}
	Global_113648.f_10196.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
	{
		iVar9 = Global_113374;
	}
	else
	{
		iVar9 = Global_113388;
	}
	unk_0x3CC35ACFFC9C730E(joaat("num_missions_completed"), Global_113384, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_missions_available"), Global_113367, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_minigames_completed"), Global_113385, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_minigames_available"), Global_113368, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_oddjobs_completed"), Global_113386, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_oddjobs_available"), Global_113369, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndpeople_completed"), Global_113387, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndpeople_available"), Global_113370, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndevents_available"), Global_113374, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_misc_completed"), (Global_113390 + Global_113389), 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_misc_available"), (Global_113373 + Global_113372), 1);
	Global_113391 = (Global_113384 * 100 / Global_113367);
	Global_113393 = ((Global_113386 + Global_113385) * 100 / (Global_113369 + Global_113368));
	Global_113392 = ((Global_113387 + iVar9) * 100 / (Global_113370 + Global_113374));
	Global_113394 = ((Global_113389 + Global_113390) * 100 / (Global_113372 + Global_113373));
	unk_0x683F4BAF21D6EE25(joaat("total_progress_made"), Global_113648.f_10196.f_3853, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_story_missions"), Global_113391, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_ambient_missions"), Global_113392, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_oddjobs"), Global_113393, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853))
	{
		func_21(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_20() == 2 == 0 && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()
{
	return Global_32163;
}

int func_21(int iParam0, int iParam1)
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
	iVar0 = unk_0xED220A261CE0D89C(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x0B3E167D2C1443C7(iParam0, iParam1);
	}
	return 0;
}

void func_22(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

int func_23()
{
	return Global_1574918;
}

int func_24(int iParam0, int iParam1)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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
		unk_0xECDAB41968FF21A8(&(Global_113648.f_20412.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_29();
	}
}

void func_29()
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

int func_30()
{
	func_31();
	switch (Global_113648.f_2365.f_539.f_4321)
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

void func_31()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_35(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_34(unk_0xC1A5EC5C986B98AD());
			if (func_33(iVar0) && (!func_32(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_33(Global_113648.f_2365.f_539.f_4321))
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

bool func_32(int iParam0)
{
	return Global_43257 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

int func_37(int iParam0)
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
		return BitTest(Global_113648.f_20412.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	unk_0xECDAB41968FF21A8(&(Global_113648.f_24997.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)
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

int func_40()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x688846D56810779A(), 64);
	uVar16 = func_41(Var0);
	return uVar16;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x14580F20CBCE4FA9(&cParam0))
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

int func_42(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	bool bVar15;
	
	if (func_16(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (BitTest(iParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != bParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113648.f_7690.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113648.f_7690.f_911 == Var0.f_0)
		{
			Global_113648.f_7690.f_911 = -1;
		}
		Var0.f_3 = func_44(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0xA5E11AF0A2B928C1() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = bParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x061B1200C95204CB(&(Var0.f_1), 1);
		unk_0x061B1200C95204CB(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0xECDAB41968FF21A8(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xECDAB41968FF21A8(&(Var0.f_1), 10);
		}
		Global_113648.f_7690[Global_113648.f_7690.f_136 /*15*/] = { Var0 };
		Global_113648.f_7690.f_136++;
		bVar15 = false;
		while (bVar15 < 3)
		{
			if (BitTest(iParam2, bVar15))
			{
				func_43(bVar15);
			}
			bVar15++;
		}
		return 1;
	}
	return 0;
}

void func_43(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_136)
	{
		if (BitTest(Global_113648.f_7690[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113648.f_7690[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113648.f_7690[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113648.f_7690.f_764)
	{
		if (BitTest(Global_113648.f_7690.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113648.f_7690.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113648.f_7690.f_919[bParam0] = iVar1;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_45()
{
	func_31();
	return Global_113648.f_2365.f_539.f_4321;
}

int func_46()
{
	return 1;
}

void func_47()
{
	switch (iLocal_136)
	{
		case 0:
			if (!unk_0x66599E73DBA5A850(iLocal_53) && unk_0xFBD273FDBCF0C5BD(iLocal_59, 0))
			{
				if (unk_0xE65E1573677B6119(iLocal_53))
				{
					unk_0xDC21E058EE11964C(iLocal_53);
				}
				unk_0xC5B2830898581862(iLocal_53, 0);
				unk_0xD14067404D35AAE7(iLocal_53, 1);
				unk_0xDBC7406226B5540E(&uLocal_65);
				unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), 5000, 2048, 2);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
				unk_0xD30E9CAE1FEA1C7E(0, iLocal_59, -1, 0, 1f, 1, 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_65);
				unk_0x3D7110D966B0CEA2(iLocal_53, uLocal_65);
				unk_0x63EF69C6969A3D26(&uLocal_65);
				unk_0x71A535529C1CA5DF(iLocal_53, 1);
				func_110();
				unk_0x4EDE34FBADD967A6(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_136++;
			break;
		
		case 1:
			if (unk_0xFBD273FDBCF0C5BD(iLocal_59, 0))
			{
				if (unk_0xE0D346789C5160EB(iLocal_53, iLocal_59, 0))
				{
					if (!unk_0x66599E73DBA5A850(iLocal_57))
					{
						unk_0xA6B22576A5268171(iLocal_57, iLocal_58, 10f, 786599);
						unk_0x71A535529C1CA5DF(iLocal_57, 1);
					}
					unk_0x3748858CB3A883E2(iLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 2:
			iLocal_136++;
			break;
		
		case 3:
			iLocal_136++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_136++;
			}
			break;
		
		case 5:
			unk_0xC1B1E9A034A63A62(0);
			func_13();
			break;
	}
}

void func_48()
{
	switch (iLocal_136)
	{
		case 0:
			unk_0x0133FF6E23A1DCA4(255, iLocal_177, joaat("player"));
			unk_0x0133FF6E23A1DCA4(255, joaat("player"), iLocal_177);
			if (!unk_0x055111B11E6624FD(unk_0xE475C458F52F1781(), 0))
			{
				unk_0xC8927C3AD7C5D2E1(unk_0xE475C458F52F1781(), 5f, 2, 0);
				if (!unk_0x66599E73DBA5A850(iLocal_53) && unk_0xFBD273FDBCF0C5BD(iLocal_59, 0))
				{
					if (unk_0xE65E1573677B6119(iLocal_53))
					{
						unk_0xDC21E058EE11964C(iLocal_53);
					}
					unk_0xC5B2830898581862(iLocal_53, 0);
					unk_0xD14067404D35AAE7(iLocal_53, 1);
					unk_0xDBC7406226B5540E(&uLocal_65);
					unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), 5000, 2048, 2);
					unk_0xD30E9CAE1FEA1C7E(0, iLocal_59, -1, 0, 1f, 1, 0);
					unk_0xF2CFC6EC8C85FA78(uLocal_65);
					unk_0x3D7110D966B0CEA2(iLocal_53, uLocal_65);
					unk_0x63EF69C6969A3D26(&uLocal_65);
					unk_0x71A535529C1CA5DF(iLocal_53, 1);
					func_110();
					unk_0x4EDE34FBADD967A6(0);
					func_71(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2700);
			unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
			iLocal_136++;
			break;
		
		case 1:
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && !unk_0xA8F00D68C81685D6(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0x055111B11E6624FD(unk_0xE475C458F52F1781(), 0))
				{
					if (!unk_0x42BECCBCE4CA667A(unk_0xE475C458F52F1781(), 1))
					{
						if (unk_0x75208DE6B34AB66E(unk_0xE475C458F52F1781(), 1) > 0.1f)
						{
							if (func_45() == 0)
							{
								func_71(&uLocal_178, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_45() == 1)
							{
								func_71(&uLocal_178, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_45() == 2)
							{
								func_71(&uLocal_178, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_136++;
			break;
		
		case 2:
			if (unk_0xFBD273FDBCF0C5BD(iLocal_59, 0))
			{
				if (unk_0xE0D346789C5160EB(iLocal_53, iLocal_59, 0))
				{
					if (!unk_0x66599E73DBA5A850(iLocal_57))
					{
						unk_0xA6B22576A5268171(iLocal_57, iLocal_59, 10f, 786599);
						unk_0x71A535529C1CA5DF(iLocal_57, 1);
					}
					unk_0x3748858CB3A883E2(iLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_124 = true;
			}
			break;
	}
}

int func_49(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x45C0F56FBD8A5C1A())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
		{
			return 0;
		}
		iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (bParam0)
		{
			if (unk_0x055111B11E6624FD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x055111B11E6624FD(iVar0, 0))
			{
				if (unk_0xA66E176E5772E965(iVar0, -1, 0) != unk_0xC1A5EC5C986B98AD())
				{
					return 0;
				}
			}
		}
		if (!unk_0x055111B11E6624FD(iVar0, 0))
		{
			if (unk_0x38B6CF1EE3FC9BC1(iVar0) < 0.95f || unk_0x38B6CF1EE3FC9BC1(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (!unk_0xF66F9ECA31DB2AB0(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	return 1;
}

int func_50()
{
	if (func_45() == 2)
	{
		if (func_10())
		{
			if (unk_0x2E496FE654DA4166(-1014.154f, 4881.411f, 245.0001f, unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), 0), 1) < 400f)
			{
				if (!Global_32407)
				{
					unk_0x5C37F509B0398DFA("AC_EN_ROUTE_CULT");
					Global_32407 = 1;
					if (!Global_32406)
					{
						Global_32406 = 1;
						return 1;
					}
				}
			}
			else if (Global_32407)
			{
				unk_0x5C37F509B0398DFA("AC_LEFT_AREA");
				Global_32407 = 0;
			}
		}
	}
	return 0;
}

int func_51(struct<3> Param0)
{
	if (func_45() == 2)
	{
		if (func_10() && !Global_32405)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Param0) > (fLocal_47 + 200f) || unk_0x2E496FE654DA4166(-1014.154f, 4881.411f, 245.0001f, unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), 0), 1) < 400f)
			{
				Global_32405 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_52()
{
	if (!unk_0x66599E73DBA5A850(iLocal_53))
	{
		if ((((((func_56("REBU2_LV2_2") || func_56("REBU2_LV2_3")) || func_56("REBU2_LV2_4")) || func_56("REBU2_LV2_5")) || func_56("REBU2_LV2_6")) || func_56("REBU2_LV2_7")) || func_56("REBU2_LV2_8"))
		{
			unk_0x1830A4193EBC57B2(iLocal_53, 1, 1);
			unk_0x1F9F6C767BE640D5(iLocal_53);
		}
		if (func_56("REBU2_LV2_9") || iLocal_72 > 1)
		{
			unk_0x1830A4193EBC57B2(iLocal_53, 0, 1);
		}
	}
	if (func_70() && !func_12())
	{
		if (!func_53())
		{
			func_87(1);
		}
		switch (iLocal_72)
		{
			case 0:
				func_71(&uLocal_178, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 1:
				iLocal_73 = unk_0xA5E11AF0A2B928C1() + 1500;
				iLocal_72++;
				break;
			
			case 2:
				if (iLocal_73 < unk_0xA5E11AF0A2B928C1())
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 3:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 4:
				iLocal_73 = unk_0xA5E11AF0A2B928C1() + 500;
				iLocal_72++;
				break;
			
			case 5:
				if (iLocal_73 < unk_0xA5E11AF0A2B928C1())
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 6:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 7:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 8:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 9:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 10:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 11:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 12:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 13:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 14:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 15:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 16:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 17:
				iLocal_73 = unk_0xA5E11AF0A2B928C1() + 1000;
				iLocal_72++;
				break;
			
			case 18:
				if (iLocal_73 < unk_0xA5E11AF0A2B928C1())
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 19:
				iLocal_73 = unk_0xA5E11AF0A2B928C1() + 2500;
				iLocal_72++;
				break;
			
			case 20:
				if (iLocal_73 < unk_0xA5E11AF0A2B928C1())
				{
					if (func_45() == 0)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_45() == 1)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_45() == 2)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_72++;
				}
				break;
			}
	}
}

int func_53()
{
	if (((((((((func_54("REBU2_WV") || func_54("REBU2_UNS1")) || func_54("REBU2_UNS2")) || func_54("REBU2_CULT")) || func_54("REBU2_NEAR")) || func_54("REBU2_WRONG")) || func_54("REBU2_STOP")) || func_54("REBU2_GETOUT")) || func_54("REBU2_JACK")) || func_54("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_54(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_55()}, 4);
		if (unk_0x4310A0DB886F9FED(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_55()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		return Global_21344;
	}
	return Var0;
}

int func_56(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_57()}, 4);
		if (unk_0x4310A0DB886F9FED(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_57()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		iVar6 = unk_0x2EAC620A648B0397();
		iVar6 = (iVar6 + Global_22735);
		if (iVar6 > -1)
		{
			return Global_20593[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_58()
{
	if (!unk_0x66599E73DBA5A850(iLocal_53))
	{
		if (!iLocal_133)
		{
			if (!unk_0x055111B11E6624FD(unk_0xE475C458F52F1781(), 0))
			{
				if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), unk_0xE475C458F52F1781(), 1) && unk_0xE0D346789C5160EB(iLocal_53, unk_0xE475C458F52F1781(), 0))
				{
					if (!func_54("REBU2_LV2"))
					{
						func_87(0);
						func_110();
						unk_0x4EDE34FBADD967A6(0);
						func_71(&uLocal_178, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_133 = 1;
					}
				}
			}
		}
		else if (!unk_0x055111B11E6624FD(unk_0xE475C458F52F1781(), 0))
		{
			if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), unk_0xE475C458F52F1781(), 0) && unk_0xE0D346789C5160EB(iLocal_53, unk_0xE475C458F52F1781(), 0))
			{
				iLocal_133 = 0;
			}
		}
		if (!iLocal_134)
		{
			if (unk_0xA6AA485513271FDF(unk_0xC1A5EC5C986B98AD()))
			{
				func_87(0);
				func_110();
				unk_0x4EDE34FBADD967A6(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_134 = 1;
			}
		}
		else if (!unk_0xA6AA485513271FDF(unk_0xC1A5EC5C986B98AD()))
		{
			iLocal_134 = 0;
		}
		if (!iLocal_135)
		{
			if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
			{
				func_87(0);
				func_110();
				unk_0x4EDE34FBADD967A6(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_135 = 1;
			}
		}
		else if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
		{
			iLocal_135 = 0;
		}
	}
}

void func_59()
{
	if (!unk_0x66599E73DBA5A850(iLocal_53))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
		{
			if (!func_62())
			{
				if (unk_0xE65E1573677B6119(iLocal_53))
				{
					unk_0xDC21E058EE11964C(iLocal_53);
				}
				if (unk_0xF5F493B789EA063E(iLocal_53, joaat("script_task_go_to_entity")) != 1 && unk_0xF5F493B789EA063E(iLocal_53, joaat("script_task_go_to_entity")) != 0)
				{
					unk_0xF41AB1E9C5AC9D70(iLocal_53, unk_0xC1A5EC5C986B98AD(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x3C3D6D026CF7F51B(iLocal_53, 0))
				{
					unk_0x6FE9A0C01D25F413(iLocal_53, 0, 4194304);
				}
				if (!iLocal_132)
				{
					func_87(0);
					func_110();
					unk_0x4EDE34FBADD967A6(0);
					iLocal_132 = 1;
					if (!func_61())
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_132 = 0;
				if (((unk_0xF5F493B789EA063E(iLocal_53, joaat("script_task_go_to_entity")) == 1 || unk_0xF5F493B789EA063E(iLocal_53, joaat("script_task_go_to_entity")) == 0) || unk_0xF5F493B789EA063E(iLocal_53, joaat("script_task_perform_sequence")) == 1) || unk_0xF5F493B789EA063E(iLocal_53, joaat("script_task_perform_sequence")) == 0)
				{
					unk_0x909F139DC199D8E0(iLocal_53);
				}
			}
		}
		else if (((!unk_0xE65E1573677B6119(iLocal_53) && !unk_0x3C3D6D026CF7F51B(iLocal_53, 0)) && unk_0xF5F493B789EA063E(iLocal_53, joaat("script_task_perform_sequence")) != 1) && unk_0xF5F493B789EA063E(iLocal_53, joaat("script_task_perform_sequence")) != 0)
		{
			unk_0xF8463C9FBA8DCD46(iLocal_53, func_60());
			unk_0x8E34561476C30D6C(iLocal_53, 1);
			unk_0x04099862985008A1(iLocal_53, 0);
		}
	}
}

var func_60()
{
	return unk_0x2165FE3E3189DC71(unk_0x5DC3DCA82C806319());
}

int func_61()
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
	{
		if (unk_0xFBD273FDBCF0C5BD(unk_0xB3011BC7288F3091(unk_0xC1A5EC5C986B98AD()), 1))
		{
			if ((unk_0x9C7BEEE2232D4F8A(unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 1))) || unk_0x6CEF99E452573979(unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 1)))) || unk_0x5BCB88597C004FED(unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_62()
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (unk_0xFBD273FDBCF0C5BD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0))
		{
			if (((((!unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()) && !unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD())) && !unk_0xB076EA895B1A6BEC(unk_0xC1A5EC5C986B98AD())) && !unk_0x81F36522FE1E02B8(unk_0xC1A5EC5C986B98AD())) && !unk_0x27368BFBD4421C85(unk_0xC1A5EC5C986B98AD())) && !unk_0x36AEE6FB36B84B00(unk_0xC1A5EC5C986B98AD(), joaat("rhino")))
			{
				if (unk_0x2E240694D642679A(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
	{
		if (unk_0xFBD273FDBCF0C5BD(unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD()), 0))
		{
			if ((((!unk_0x2D92D1084D213DC4(unk_0x504B9BB48D41C264(unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD()))) && !unk_0xAF4434A9F7368F35(unk_0x504B9BB48D41C264(unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD())))) && !unk_0x6123E78FD4B274FB(unk_0x504B9BB48D41C264(unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD())))) && !unk_0xF71BABB2940158F7(unk_0x504B9BB48D41C264(unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD())))) && unk_0x504B9BB48D41C264(unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_63()
{
	if (!unk_0x66599E73DBA5A850(iLocal_53))
	{
		if (unk_0x4FBDBA15B9C41492(iLocal_53))
		{
			if (!iLocal_170)
			{
				iLocal_171 = unk_0xA5E11AF0A2B928C1();
				iLocal_170 = 1;
			}
			else
			{
				iLocal_172 = unk_0xA5E11AF0A2B928C1();
			}
		}
		else
		{
			iLocal_170 = 0;
		}
	}
	if ((iLocal_172 - iLocal_171) > 180000)
	{
		if (!unk_0x66599E73DBA5A850(iLocal_53))
		{
			if (unk_0xE65E1573677B6119(iLocal_53))
			{
				unk_0xDC21E058EE11964C(iLocal_53);
				if (unk_0x1C4E4DC1EFE24DF1(iLocal_53, Local_139, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x7D9A648CC1936BDA(iLocal_53, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x71A535529C1CA5DF(iLocal_53, 1);
				}
				func_110();
				unk_0x4EDE34FBADD967A6(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (unk_0x63E1343737CA1E47(unk_0xC1A5EC5C986B98AD()))
	{
		if (!iLocal_173)
		{
			iLocal_174 = unk_0xA5E11AF0A2B928C1();
			iLocal_173 = 1;
		}
		else
		{
			iLocal_175 = unk_0xA5E11AF0A2B928C1();
		}
	}
	else
	{
		iLocal_173 = 0;
	}
	if ((iLocal_175 - iLocal_174) > 120000)
	{
		if (!unk_0x66599E73DBA5A850(iLocal_53))
		{
			if (unk_0xE65E1573677B6119(iLocal_53))
			{
				unk_0xDC21E058EE11964C(iLocal_53);
				if (unk_0x1C4E4DC1EFE24DF1(iLocal_53, Local_139, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x7D9A648CC1936BDA(iLocal_53, Local_139, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x71A535529C1CA5DF(iLocal_53, 1);
				}
				else
				{
					unk_0x6FE9A0C01D25F413(iLocal_53, 0, 4194304);
				}
				func_110();
				unk_0x4EDE34FBADD967A6(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_65()
{
	if (!unk_0x66599E73DBA5A850(iLocal_53))
	{
		if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_53, 8f, 8f, 8f, 0, 1, 0) || unk_0x741AE70981B696B4(unk_0xC1A5EC5C986B98AD()))
		{
			if ((unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && !unk_0xE0D346789C5160EB(iLocal_53, unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0)) && !unk_0x741AE70981B696B4(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0xCE4AAA035282336C(uLocal_114))
				{
					uLocal_114 = func_68(iLocal_53, 0, 145);
				}
				if (unk_0xCE4AAA035282336C(uLocal_137))
				{
					unk_0x45533C09A6C9B409(&uLocal_137);
				}
			}
			else
			{
				if (!unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0xCE4AAA035282336C(uLocal_114))
					{
						unk_0x45533C09A6C9B409(&uLocal_114);
					}
				}
				if (!unk_0xCE4AAA035282336C(uLocal_137))
				{
					uLocal_137 = func_66(Local_139, 1);
				}
			}
		}
		else if (!unk_0xCE4AAA035282336C(uLocal_114))
		{
			uLocal_114 = func_68(iLocal_53, 0, 145);
		}
		if (!unk_0xE65E1573677B6119(iLocal_53))
		{
			if (!unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_53, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0x909F139DC199D8E0(iLocal_53);
				unk_0xF8463C9FBA8DCD46(iLocal_53, func_60());
				unk_0x8E34561476C30D6C(iLocal_53, 1);
				unk_0x04099862985008A1(iLocal_53, 0);
			}
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
			{
				unk_0x909F139DC199D8E0(iLocal_53);
				unk_0xF8463C9FBA8DCD46(iLocal_53, func_60());
				unk_0x8E34561476C30D6C(iLocal_53, 1);
				unk_0x04099862985008A1(iLocal_53, 0);
			}
		}
		if (!unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_53, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

var func_66(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7F0C74F83813841D(Param0);
	unk_0x225EB85DBC38E707(uVar0, func_67(unk_0xA26A9A07F761D8F8(), 1f, 1f));
	unk_0xBD91E7D4B770F97E(uVar0, iParam3);
	return uVar0;
}

float func_67(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_68(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_69(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE4AAA035282336C(uVar0)) && unk_0x42FA33BDEDF21186(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x4049FDC177C92D4B(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_69(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x53B496178AE44636(iParam0);
	if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_67(unk_0xA26A9A07F761D8F8(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
		}
		else
		{
			unk_0x1886753DA39F38F8(uVar0, 2);
		}
	}
	else if (unk_0x71904BD37B848CAF(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_67(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
		unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_67(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_70()
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		iLocal_169 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (unk_0xFBD273FDBCF0C5BD(iLocal_169, 0))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_53))
			{
				if (unk_0x44A6C9475C859B45(iLocal_53, iLocal_169))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_71(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_72(sParam2, iParam3, 0);
}

int func_72(char* sParam0, int iParam1, bool bParam2)
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
					func_85();
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
		if (func_84(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_83();
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
				func_82();
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
				if (func_81())
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
			if (func_80())
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
			func_79();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_78();
		func_73();
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
		func_85();
	}
	return 0;
}

void func_73()
{
	if (!func_74())
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

int func_74()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_77())
	{
		return 0;
	}
	if (func_75(unk_0x93E99A2DBCBA9CFA()))
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

bool func_75(int iParam0)
{
	return func_76(iParam0, 20);
}

var func_76(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_77()
{
	return -1;
}

void func_78()
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

void func_79()
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

int func_80()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()
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

void func_82()
{
	if (func_32(14))
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
		Global_20383 = func_45();
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

void func_83()
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

bool func_84(int iParam0, int iParam1)
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

void func_85()
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

void func_86(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_87(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_149)
		{
			if (!unk_0x2AC37494BBF1DB16(&Local_156))
			{
				if (func_90(&uLocal_178, "REBU2AU", &Local_156, &Local_150, 8, 0, 0))
				{
					iLocal_149 = 0;
				}
			}
			else
			{
				iLocal_149 = 0;
			}
		}
	}
	else if ((!iLocal_149 && func_12()) && !func_53())
	{
		Local_156 = { func_55() };
		Local_150 = { func_57() };
		func_88();
		iLocal_149 = 1;
	}
}

void func_88()
{
	Global_20591 = 0;
	func_89();
}

void func_89()
{
	if (unk_0x0DCB385165FDE763())
	{
		unk_0x782234C275AFBA24();
		Global_22736 = 0;
		unk_0xD6625E11483B2324(1);
		Global_21725 = 6;
		return;
	}
}

bool func_90(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21732 = 0;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 1;
	StringCopy(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_72(sParam2, iParam4, 0);
}

void func_91()
{
	if (unk_0x7DE17ACDD8BA2642(iLocal_53))
	{
		if (!unk_0x66599E73DBA5A850(iLocal_53))
		{
			unk_0x992BB708B4B7A005(iLocal_53, 394, 1);
		}
		if (unk_0x7559C38E6535AB89(iLocal_53, unk_0xC1A5EC5C986B98AD(), 1))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_53))
			{
				unk_0xC6C9BF71106ABCAC(iLocal_53, unk_0xC1A5EC5C986B98AD(), 150f, -1, 0, 0);
				unk_0x71A535529C1CA5DF(iLocal_53, 1);
			}
			if (!unk_0x66599E73DBA5A850(iLocal_57))
			{
				unk_0x0133FF6E23A1DCA4(5, iLocal_177, joaat("player"));
				unk_0xCAC2B0C65B18E755(iLocal_57, unk_0xC1A5EC5C986B98AD(), 0, 16);
				unk_0x71A535529C1CA5DF(iLocal_57, 1);
			}
			func_110();
			unk_0x4EDE34FBADD967A6(0);
			func_71(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_57))
		{
			if (unk_0x7559C38E6535AB89(iLocal_57, unk_0xC1A5EC5C986B98AD(), 1))
			{
				if (!unk_0x66599E73DBA5A850(iLocal_53))
				{
					unk_0xC6C9BF71106ABCAC(iLocal_53, unk_0xC1A5EC5C986B98AD(), 150f, -1, 0, 0);
					unk_0x71A535529C1CA5DF(iLocal_53, 1);
				}
				if (!unk_0x66599E73DBA5A850(iLocal_57))
				{
					unk_0x0133FF6E23A1DCA4(5, iLocal_177, joaat("player"));
					unk_0xCAC2B0C65B18E755(iLocal_57, unk_0xC1A5EC5C986B98AD(), 0, 16);
					unk_0x71A535529C1CA5DF(iLocal_57, 1);
				}
				func_110();
				unk_0x4EDE34FBADD967A6(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_51 = 4;
			}
		}
	}
	if (!unk_0x66599E73DBA5A850(iLocal_53))
	{
		if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 1)
		{
			unk_0xC6C9BF71106ABCAC(iLocal_53, unk_0xC1A5EC5C986B98AD(), 150f, -1, 0, 0);
			unk_0x71A535529C1CA5DF(iLocal_53, 1);
			func_110();
			unk_0x4EDE34FBADD967A6(0);
			func_71(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
	}
}

void func_92()
{
	int iVar0;
	
	if (!unk_0x66599E73DBA5A850(iLocal_53))
	{
		if ((unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_53, 1.2f, 1.2f, 5f, 0, 1, 0) && unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD())) && !unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()))
		{
			if (func_49(1, 0, 1))
			{
				bLocal_130 = true;
				if (!iLocal_115)
				{
					func_99(1, 1, 1, 0, 0, 0, 0);
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 24);
					unk_0xCD3C8E1022864F65(1);
					unk_0xB1A691274215E4CE(0);
					unk_0x61F7D56FFAFBF706(0);
					unk_0xCB21E46FFA9189A0(unk_0xC1A5EC5C986B98AD(), 1);
					if (unk_0x7DE17ACDD8BA2642(unk_0xE475C458F52F1781()))
					{
						unk_0x85BAE84748AD1A23(unk_0xE475C458F52F1781(), 1, 0);
						if (unk_0x584CD220C093B0B4(unk_0xE475C458F52F1781()))
						{
							func_98(unk_0xE475C458F52F1781());
							unk_0xA598BD64B909AA08(unk_0xE475C458F52F1781(), 200f);
						}
						if (unk_0xEAEF747543427AC5(unk_0xE475C458F52F1781(), iLocal_53, 5f, 5f, 5f, 0, 1, 0) || unk_0x1C4E4DC1EFE24DF1(unk_0xE475C458F52F1781(), Local_88, 5f, 5f, 5f, 0, 1, 0))
						{
							unk_0xC2E3C377D893C17A(unk_0xE475C458F52F1781(), unk_0x30BE8A934C020461(iLocal_53, 1) - Vector(0f, 3f, 5f), 0, 0, 0, 1);
							if (!unk_0x055111B11E6624FD(unk_0xE475C458F52F1781(), 0))
							{
								unk_0xCB8DD5B44DBC2DEB(unk_0xE475C458F52F1781(), 1084227584);
							}
						}
					}
					if (unk_0x7DE17ACDD8BA2642(iLocal_58))
					{
						if (unk_0x584CD220C093B0B4(iLocal_58))
						{
							func_98(iLocal_58);
							unk_0xA598BD64B909AA08(iLocal_58, 200f);
						}
						if (unk_0xEAEF747543427AC5(iLocal_58, iLocal_53, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0xC2E3C377D893C17A(iLocal_58, Local_88, 0, 0, 0, 1);
							if (!unk_0x055111B11E6624FD(iLocal_58, 0))
							{
								unk_0xCB8DD5B44DBC2DEB(iLocal_58, 1084227584);
							}
						}
					}
					if (!unk_0x66599E73DBA5A850(iLocal_53))
					{
						iLocal_169 = unk_0xC51EF944AABAC0E5(unk_0x30BE8A934C020461(iLocal_53, 1), 5f, 0, 2);
						if (!unk_0x055111B11E6624FD(iLocal_169, 0))
						{
							if (unk_0x584CD220C093B0B4(iLocal_169))
							{
								func_98(iLocal_169);
								unk_0xA598BD64B909AA08(iLocal_169, 200f);
							}
							unk_0xC2E3C377D893C17A(iLocal_169, unk_0x30BE8A934C020461(iLocal_53, 1) + Vector(0f, 5f, 5f), 1, 0, 0, 1);
						}
					}
					unk_0x636EFA4C5BC401A8(Local_78, 10f);
					unk_0xB7591EFB00E1E4E4(Local_78, 10f, 0);
					unk_0x10DFA2EC4C030EB3(Local_78, 4.5f, 0, 0, 0, 0, 0, 0, 0);
					unk_0xC2E3C377D893C17A(iLocal_53, Local_78, 1, 0, 0, 1);
					unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), Local_78, 1, 0, 0, 1);
					if (!unk_0x66599E73DBA5A850(iLocal_53))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_54)
					{
						if (unk_0x7DE17ACDD8BA2642(iLocal_54[iVar0]))
						{
							if (unk_0x1C4E4DC1EFE24DF1(iLocal_54[iVar0], unk_0x30BE8A934C020461(iLocal_53, 0), 1.5f, 1.5f, 1.5f, 0, 1, 0))
							{
								unk_0xE9C250FA35A936C8(&(iLocal_54[iVar0]));
							}
						}
						iVar0++;
					}
					if (!unk_0x66599E73DBA5A850(iLocal_53))
					{
						uLocal_343 = unk_0x191673E3F99212B2(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						uLocal_77 = unk_0xDEE46CEB08617ECA("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0x5950D902D5442CB4(uLocal_77, uLocal_343, "untie_cam", "random@burial");
						unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());
						unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), 162.6699f, 6839.238f, 18.8314f, 0, 0, 0, 1);
						unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), 18.2311f);
						unk_0xED2BD879E739E86B(iLocal_53, 200, 0);
						unk_0xC019B2705F3AC330(iLocal_53, 0);
						unk_0xA354B07ADFAA11F3(iLocal_53, 0);
						unk_0x35DD50D05C962B6A(iLocal_53);
						unk_0x468D976993BF7FE1(iLocal_53, uLocal_343, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						unk_0xBB6027D1D193CBA6(iLocal_53, 0, 0);
						unk_0x468D976993BF7FE1(unk_0xC1A5EC5C986B98AD(), uLocal_343, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0xBB6027D1D193CBA6(unk_0xC1A5EC5C986B98AD(), 0, 0);
						unk_0xA2CBB04560DD6361(uLocal_61[0], uLocal_343, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0xA2CBB04560DD6361(uLocal_61[1], uLocal_343, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0xEEF11E0DB5769366(uLocal_77, 1);
						unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
						iLocal_120 = unk_0xA5E11AF0A2B928C1();
						iLocal_115 = 1;
					}
				}
			}
		}
	}
	if (iLocal_115 && !iLocal_117)
	{
		unk_0xE288789FFB1A0C2F();
		if (unk_0x411B750250543BD0(uLocal_343))
		{
			if ((unk_0xABF98B1999FE64CA(uLocal_343) > 0.115f && unk_0xABF98B1999FE64CA(uLocal_343) < 0.12f) || (unk_0xABF98B1999FE64CA(uLocal_343) > 0.355f && unk_0xABF98B1999FE64CA(uLocal_343) < 0.36f))
			{
				unk_0x531D638530A8DB97(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", 1);
			}
			if (unk_0xABF98B1999FE64CA(uLocal_343) > 0.6f)
			{
				if (!iLocal_116)
				{
					func_110();
					unk_0x4EDE34FBADD967A6(0);
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_116 = 1;
					}
				}
			}
		}
		iLocal_119 = unk_0xA5E11AF0A2B928C1();
		if (((iLocal_119 - iLocal_120) > 9700 && !iLocal_123) && unk_0x673F52632EDC33B7() == 4)
		{
			unk_0x451128B7D435FBF2("CamPushInNeutral", 0, 0);
			unk_0x531D638530A8DB97(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			iLocal_123 = 1;
		}
		if ((iLocal_119 - iLocal_120) > 10000)
		{
			iLocal_117 = 1;
		}
		if (func_96(1000))
		{
			func_110();
			unk_0x6D5ACBBD4CE34249(800);
			while (unk_0x984CA71F26DF483C())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_117 = 1;
			bLocal_118 = true;
		}
	}
	if (iLocal_117 && !bLocal_122)
	{
		unk_0xB1A691274215E4CE(1);
		unk_0x61F7D56FFAFBF706(1);
		unk_0xE1549D437DEA008D(uLocal_343, 1f);
		unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());
		unk_0xBB6027D1D193CBA6(unk_0xC1A5EC5C986B98AD(), 0, 0);
		unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), 162.5284f, 6839.658f, 18.8198f, 1, 0, 0, 1);
		unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), 256.7693f);
		if (!unk_0x66599E73DBA5A850(iLocal_53))
		{
			unk_0x35DD50D05C962B6A(iLocal_53);
			unk_0xBB6027D1D193CBA6(iLocal_53, 0, 0);
			unk_0xAC2C285C82A9244C(iLocal_53, 1);
			unk_0xC2E3C377D893C17A(iLocal_53, 164.4963f, 6839.333f, 18.9657f, 1, 0, 0, 1);
			unk_0x692C3FDAD7DB53CC(iLocal_53, 73.449f);
		}
		unk_0xAABD7B0753C5C286(26.1578f);
		unk_0xEAB390443C680F72(-8.1198f, 1065353216);
		unk_0xEEF11E0DB5769366(uLocal_77, 0);
		unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
		unk_0x42B9FA814615C4F9(uLocal_77, 0);
		unk_0xCB21E46FFA9189A0(unk_0xC1A5EC5C986B98AD(), 0);
		if (bLocal_118)
		{
			unk_0x78DD793477D04C42(800);
			while (unk_0x6C9BA681FB2251B6())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		bLocal_122 = true;
	}
	if (!unk_0x66599E73DBA5A850(iLocal_53))
	{
		if (bLocal_122)
		{
			if (!iLocal_121)
			{
				if (!func_12())
				{
					if (func_45() == 0)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_45() == 1)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_45() == 2)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					unk_0x0133FF6E23A1DCA4(1, iLocal_177, joaat("player"));
					unk_0x0133FF6E23A1DCA4(1, joaat("player"), iLocal_177);
					unk_0xDBC7406226B5540E(&uLocal_65);
					unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 2048, 2);
					unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 4000);
					if (unk_0xFBD273FDBCF0C5BD(unk_0xE475C458F52F1781(), 0))
					{
						if (unk_0xEAEF747543427AC5(iLocal_53, unk_0xE475C458F52F1781(), 20f, 20f, 20f, 0, 1, 0) && unk_0x2E240694D642679A(unk_0xE475C458F52F1781()) > 0)
						{
							unk_0xD30E9CAE1FEA1C7E(0, unk_0xE475C458F52F1781(), -1, 0, 1f, 1, 0);
						}
						else if (!unk_0xE65E1573677B6119(iLocal_53))
						{
							unk_0xF8463C9FBA8DCD46(iLocal_53, func_60());
							unk_0x8E34561476C30D6C(iLocal_53, 1);
							unk_0x04099862985008A1(iLocal_53, 0);
						}
					}
					else if (!unk_0xE65E1573677B6119(iLocal_53))
					{
						unk_0xF8463C9FBA8DCD46(iLocal_53, func_60());
						unk_0x8E34561476C30D6C(iLocal_53, 1);
						unk_0x04099862985008A1(iLocal_53, 0);
					}
					unk_0xF2CFC6EC8C85FA78(uLocal_65);
					unk_0x3D7110D966B0CEA2(iLocal_53, uLocal_65);
					unk_0x63EF69C6969A3D26(&uLocal_65);
					if (unk_0xCE4AAA035282336C(uLocal_114))
					{
						unk_0x45533C09A6C9B409(&uLocal_114);
					}
					if (!unk_0xCE4AAA035282336C(uLocal_137))
					{
						uLocal_137 = func_66(Local_139, 1);
					}
					if (func_45() == 2 && !func_9())
					{
						if (!unk_0xCE4AAA035282336C(uLocal_138))
						{
							uLocal_138 = func_66(Local_142, 0);
							unk_0xEA4639F4444B7003(uLocal_138, 269);
							func_94();
						}
					}
					func_93();
					iLocal_131 = 1;
					iLocal_121 = 1;
					unk_0xC1B1E9A034A63A62(0);
					unk_0xC6AD633F6B896D88(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					unk_0x8E09E8C52602EBB2(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0, 1);
					func_99(0, 1, 1, 0, 0, 0, 0);
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 4);
					unk_0x5CE354E3C73D2002(unk_0xC1A5EC5C986B98AD());
					iLocal_49 = 4;
				}
			}
		}
	}
}

void func_93()
{
	if (!func_9())
	{
		if (func_45() == 2)
		{
			Global_32402 = 1;
		}
	}
}

void func_94()
{
	if (func_45() == 2)
	{
		if (!Global_32404)
		{
			func_95("CULT_BLIP_HELP", -1);
			Global_32404 = 1;
		}
	}
}

void func_95(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

int func_96(int iParam0)
{
	if (unk_0x35DF833D93BCC488())
	{
		if ((unk_0xA5E11AF0A2B928C1() - Global_28) > iParam0)
		{
			Global_27 = unk_0xA5E11AF0A2B928C1();
		}
		Global_28 = unk_0xA5E11AF0A2B928C1();
		if ((unk_0xA5E11AF0A2B928C1() - Global_27) > iParam0)
		{
			if (func_97())
			{
				Global_27 = unk_0xA5E11AF0A2B928C1();
				return 1;
			}
		}
	}
	return 0;
}

int func_97()
{
	if (unk_0xFEE065E56A9BEF3F())
	{
		return 0;
	}
	if (unk_0x87644B1F984197FE(0, 18) || unk_0x87644B1F984197FE(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_98(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0))
		{
			if (unk_0x584CD220C093B0B4(iParam0))
			{
				unk_0x7EBCB7BAF31830E1(iParam0);
				unk_0xED2BD879E739E86B(iParam0, unk_0x2935B4D6CE81318D(iParam0) + 200, 0);
				unk_0xA598BD64B909AA08(iParam0, (unk_0x34DAE7F7DF2CC995(iParam0) + 200f));
				unk_0xDC8D24D42F045000(iParam0, (unk_0xF7B2B973FAF93B1B(iParam0) + 200f));
				unk_0x636EFA4C5BC401A8(unk_0x30BE8A934C020461(iParam0, 1), 5f);
				unk_0xF82BC5193AF62796(unk_0x30BE8A934C020461(iParam0, 1), 2.5f, 1, 0, 0, 0);
			}
		}
	}
}

void func_99(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_106(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
			{
				unk_0xD6625E11483B2324(0);
			}
			if (!func_80())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_105(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_106(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0xDB4D82037BD5A339();
		}
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_105(0, iParam3, iParam2, 0);
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((((((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_103(unk_0x93E99A2DBCBA9CFA())) && !func_101(unk_0x93E99A2DBCBA9CFA(), 0)) && !func_100()) && !bParam4) && !bParam5) && !unk_0x8253CEEA17ED481B())
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_103(unk_0x93E99A2DBCBA9CFA())) && !bParam4) && !bParam5)
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_100()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

bool func_101(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_102(-1, 0) == 8;
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

int func_102(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

int func_103(int iParam0)
{
	if (func_101(iParam0, 0))
	{
		return 1;
	}
	if (func_104())
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

bool func_104()
{
	return BitTest(Global_2621446, 3);
}

int func_105(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_106(int iParam0)
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

void func_107()
{
	if (!unk_0x055111B11E6624FD(iLocal_53, 0))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < unk_0xA5E11AF0A2B928C1())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < unk_0xA5E11AF0A2B928C1())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < unk_0xA5E11AF0A2B928C1())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < unk_0xA5E11AF0A2B928C1())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(4000, 5500));
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_108(var uParam0, char* sParam1, int iParam2)
{
	unk_0x824D23CC0FE1835A(uParam0, sParam1, func_109(iParam2), 1);
}

int func_109(int iParam0)
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

void func_110()
{
	Global_20591 = 0;
	func_111();
}

void func_111()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
	}
}

void func_112()
{
	if (!iLocal_67 && unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_107, 30f, 30f, 30f, 0, 1, 0))
	{
		if (!unk_0x66599E73DBA5A850(iLocal_54[1]))
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_67 = 1;
			}
		}
	}
	if (unk_0xFBD273FDBCF0C5BD(iLocal_58, 0))
	{
		if (!unk_0x66599E73DBA5A850(iLocal_54[0]))
		{
			unk_0xB8194851FFF54D3B(iLocal_54[0], iLocal_58, unk_0xC1A5EC5C986B98AD(), 8, 30f, 262144, -1f, 10f, 1);
			unk_0x71A535529C1CA5DF(iLocal_54[0], 1);
		}
		if (!unk_0x66599E73DBA5A850(iLocal_54[1]))
		{
			unk_0xD30E9CAE1FEA1C7E(iLocal_54[1], iLocal_58, -1, 0, 3f, 1, 0);
			unk_0x71A535529C1CA5DF(iLocal_54[1], 1);
		}
	}
	else
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (!unk_0x66599E73DBA5A850(iLocal_54[iLocal_64]))
			{
				unk_0xC6C9BF71106ABCAC(iLocal_54[iLocal_64], unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
				unk_0x71A535529C1CA5DF(iLocal_54[iLocal_64], 1);
			}
			iLocal_64++;
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	func_4();
}

void func_113()
{
	if (!unk_0x66599E73DBA5A850(iLocal_54[0]) && !unk_0x66599E73DBA5A850(iLocal_54[1]))
	{
		if (!unk_0x603C398B47455767(iLocal_54[0]) && !unk_0x603C398B47455767(iLocal_54[1]))
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!unk_0x110D030CCD4E83A6(iLocal_54[1]))
				{
					unk_0x909F139DC199D8E0(iLocal_54[1]);
					unk_0x3EFB5DE67FDF106B(iLocal_54[1], unk_0xC1A5EC5C986B98AD(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
	iLocal_49 = 7;
}

void func_114()
{
	float fVar0;
	
	if (!unk_0x66599E73DBA5A850(iLocal_54[0]) && !unk_0x66599E73DBA5A850(iLocal_54[1]))
	{
		if (!iLocal_69)
		{
			if (!iLocal_68)
			{
				unk_0xDBC7406226B5540E(&uLocal_65);
				unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 2048, 2);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_65);
				unk_0x3D7110D966B0CEA2(iLocal_54[1], uLocal_65);
				unk_0x63EF69C6969A3D26(&uLocal_65);
				iLocal_68 = 1;
			}
			if (unk_0xD495130AEF425591(iLocal_54[1], unk_0xC1A5EC5C986B98AD(), 90f))
			{
				func_110();
				unk_0x4EDE34FBADD967A6(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!unk_0x66599E73DBA5A850(iLocal_54[0]) && !unk_0x66599E73DBA5A850(iLocal_54[1]))
				{
					fVar0 = func_116(iLocal_54[0], unk_0xC1A5EC5C986B98AD(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					unk_0xA81AA70A4D25E140(iLocal_60, 0, 1);
					unk_0xBD02C9D4D7076ECC(iLocal_60, iLocal_54[0], unk_0xCF99BEF1317B66DA(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
					unk_0x909F139DC199D8E0(iLocal_54[0]);
					unk_0xDBC7406226B5540E(&uLocal_65);
					unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 2048, 2);
					unk_0x3EE48ADC8C7F5CC4(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
					unk_0xF2CFC6EC8C85FA78(uLocal_65);
					unk_0x3D7110D966B0CEA2(iLocal_54[0], uLocal_65);
					unk_0x63EF69C6969A3D26(&uLocal_65);
					unk_0x8CC688927B10006C(iLocal_54[1], joaat("weapon_sawnoffshotgun"), 1);
					unk_0x909F139DC199D8E0(iLocal_54[1]);
					unk_0xDBC7406226B5540E(&uLocal_65);
					unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 2048, 2);
					unk_0xF41AB1E9C5AC9D70(0, unk_0xC1A5EC5C986B98AD(), -1, fVar0, 1f, 1073741824, 0);
					unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
					unk_0xF2CFC6EC8C85FA78(uLocal_65);
					unk_0x3D7110D966B0CEA2(iLocal_54[1], uLocal_65);
					unk_0x63EF69C6969A3D26(&uLocal_65);
					iLocal_69 = 1;
				}
			}
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_60))
		{
			if (unk_0xDC116D955A63BDBE(iLocal_60))
			{
				if (unk_0x7BB3D8F4F6310EB8(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0xA81AA70A4D25E140(iLocal_60, 1, 1);
					}
				}
			}
		}
		if (iLocal_69 && !iLocal_165)
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				unk_0xDBC7406226B5540E(&uLocal_65);
				unk_0x65A0C2755CA8C14E(0, unk_0xC1A5EC5C986B98AD(), unk_0xC1A5EC5C986B98AD(), 1f, 0, 3.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), -1, 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_65);
				unk_0x3D7110D966B0CEA2(iLocal_54[1], uLocal_65);
				unk_0x63EF69C6969A3D26(&uLocal_65);
				unk_0x5C37F509B0398DFA("RE6_START");
				iLocal_165 = 1;
			}
		}
		if (iLocal_165 && !iLocal_166)
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xFD42C7B0CE08BA68(iLocal_54[0], unk_0xC1A5EC5C986B98AD(), -1, 0);
				}
				iLocal_166 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		if (iLocal_166 && !bLocal_167)
		{
			if (unk_0xC9D9444186B5A374() > 15000 && !func_12())
			{
				if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x06A2A5F6A6959BE7(iLocal_54[0], unk_0xC1A5EC5C986B98AD(), 0);
					unk_0x06A2A5F6A6959BE7(iLocal_54[1], unk_0xC1A5EC5C986B98AD(), 0);
					func_71(&uLocal_178, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_167 = true;
				}
			}
		}
		if (((!iLocal_70 && iLocal_165) && !unk_0x66599E73DBA5A850(iLocal_54[0])) && !unk_0x66599E73DBA5A850(iLocal_54[1]))
		{
			if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_115())
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				unk_0xDBC7406226B5540E(&uLocal_65);
				unk_0xF41AB1E9C5AC9D70(0, iLocal_54[1], -1, 2f, 1f, 1073741824, 0);
				unk_0x06A2A5F6A6959BE7(0, iLocal_54[1], 0);
				unk_0x2B8574FAEA21141B(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0xF2CFC6EC8C85FA78(uLocal_65);
				unk_0x3D7110D966B0CEA2(iLocal_54[0], uLocal_65);
				unk_0x63EF69C6969A3D26(&uLocal_65);
				unk_0xDBC7406226B5540E(&uLocal_65);
				unk_0xF41AB1E9C5AC9D70(0, iLocal_54[0], -1, 2f, 1f, 1073741824, 0);
				unk_0x06A2A5F6A6959BE7(0, iLocal_54[0], 0);
				unk_0x2B8574FAEA21141B(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0xF2CFC6EC8C85FA78(uLocal_65);
				unk_0x3D7110D966B0CEA2(iLocal_54[1], uLocal_65);
				unk_0x63EF69C6969A3D26(&uLocal_65);
				unk_0x5AE11BC36633DE4E(15000);
				iLocal_145 = 0;
				iLocal_166 = 1;
				iLocal_70 = 1;
			}
		}
		if (bLocal_167)
		{
			func_11();
			func_118();
		}
		if (((unk_0x85D2845BAE56DBF8(iLocal_54[0], unk_0xC1A5EC5C986B98AD()) || unk_0x85D2845BAE56DBF8(iLocal_54[1], unk_0xC1A5EC5C986B98AD())) || unk_0x516AA76FD4DC1458(unk_0x93E99A2DBCBA9CFA(), iLocal_54[0])) || unk_0x516AA76FD4DC1458(unk_0x93E99A2DBCBA9CFA(), iLocal_54[1]))
		{
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 4) && !unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 3))
			{
				if (unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
				{
					if (!iLocal_76)
					{
						func_110();
						unk_0x4EDE34FBADD967A6(0);
						if (func_71(&uLocal_178, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_118();
						}
					}
				}
			}
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 3) && !unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 4))
			{
				if (unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
				{
					if (!iLocal_76)
					{
						func_110();
						unk_0x4EDE34FBADD967A6(0);
						if (func_71(&uLocal_178, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_118();
						}
					}
				}
			}
			if (unk_0xB5297226BE0AD444(unk_0x93E99A2DBCBA9CFA()) || unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
			{
				func_118();
			}
		}
	}
}

int func_115()
{
	if (BitTest(unk_0x15A88CFAAFFC6C4B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_116(int iParam0, int iParam1, int iParam2)
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

int func_117()
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0xFBD273FDBCF0C5BD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0))
			{
				if ((((unk_0x36AEE6FB36B84B00(unk_0xC1A5EC5C986B98AD(), joaat("rhino")) || unk_0x6AE0E79C82A558ED(unk_0xC1A5EC5C986B98AD())) || unk_0x36AEE6FB36B84B00(unk_0xC1A5EC5C986B98AD(), joaat("annihilator"))) || unk_0x36AEE6FB36B84B00(unk_0xC1A5EC5C986B98AD(), joaat("buzzard"))) || unk_0xA87ECD5E2653C4A9(unk_0xC1A5EC5C986B98AD()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_118()
{
	func_11();
	unk_0x5C37F509B0398DFA("RE6_START");
	if (!iLocal_145)
	{
		if (unk_0x7DE17ACDD8BA2642(iLocal_54[0]))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_54[0]))
			{
				unk_0x992BB708B4B7A005(iLocal_54[0], 156, 1);
				if (unk_0x7DE17ACDD8BA2642(iLocal_60))
				{
					unk_0xF0654A614CC902C9(iLocal_54[0]);
					if (unk_0xDC116D955A63BDBE(iLocal_60))
					{
						if (!iLocal_70)
						{
							unk_0xA81AA70A4D25E140(iLocal_60, 0, 1);
							unk_0xBD02C9D4D7076ECC(iLocal_60, iLocal_54[0], unk_0xCF99BEF1317B66DA(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
							unk_0x909F139DC199D8E0(iLocal_54[0]);
							unk_0xDBC7406226B5540E(&uLocal_65);
							unk_0x1F9F6C767BE640D5(0);
							unk_0x3EE48ADC8C7F5CC4(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
							unk_0xF2CFC6EC8C85FA78(uLocal_65);
							unk_0x3D7110D966B0CEA2(iLocal_54[0], uLocal_65);
							unk_0x63EF69C6969A3D26(&uLocal_65);
							unk_0x71A535529C1CA5DF(iLocal_54[0], 1);
							unk_0xBB6027D1D193CBA6(iLocal_54[0], 0, 0);
							iLocal_145 = 1;
						}
					}
					else
					{
						unk_0xDBC7406226B5540E(&uLocal_65);
						unk_0x1F9F6C767BE640D5(0);
						unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
						unk_0xF2CFC6EC8C85FA78(uLocal_65);
						unk_0x3D7110D966B0CEA2(iLocal_54[0], uLocal_65);
						unk_0x63EF69C6969A3D26(&uLocal_65);
						unk_0x71A535529C1CA5DF(iLocal_54[0], 1);
						iLocal_145 = 1;
					}
				}
			}
			else
			{
				iLocal_145 = 1;
			}
		}
		else
		{
			iLocal_145 = 1;
		}
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_60))
	{
		if (unk_0xDC116D955A63BDBE(iLocal_60))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_54[0]))
			{
				if (unk_0x7BB3D8F4F6310EB8(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0xA81AA70A4D25E140(iLocal_60, 1, 1);
					}
				}
			}
		}
	}
	if (!iLocal_146)
	{
		if (unk_0x7DE17ACDD8BA2642(iLocal_54[1]))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_54[1]))
			{
				unk_0x992BB708B4B7A005(iLocal_54[1], 156, 1);
				unk_0xF0654A614CC902C9(iLocal_54[1]);
				unk_0xDBC7406226B5540E(&uLocal_65);
				unk_0x1F9F6C767BE640D5(0);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 500);
				unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
				unk_0xF2CFC6EC8C85FA78(uLocal_65);
				unk_0x3D7110D966B0CEA2(iLocal_54[1], uLocal_65);
				unk_0x63EF69C6969A3D26(&uLocal_65);
				unk_0x71A535529C1CA5DF(iLocal_54[1], 1);
				iLocal_146 = 1;
			}
			else
			{
				iLocal_146 = 1;
			}
		}
		else
		{
			iLocal_146 = 1;
		}
	}
	if (iLocal_146 && iLocal_145)
	{
		iLocal_106 = unk_0xA5E11AF0A2B928C1() + 8500;
		unk_0xC1B1E9A034A63A62(0);
		iLocal_49 = 7;
	}
}

int func_119(int iParam0)
{
	if (func_122())
	{
		Global_113638 = 1;
		Global_113635 = unk_0xA5E11AF0A2B928C1();
		if (func_25(Global_113637))
		{
			func_120(0);
		}
		unk_0x97DBA2AA6C70AFC7(1, "RE_TITLE");
		if (iParam0 && func_25(Global_113637))
		{
			unk_0x01680CFD15C1C85D();
		}
		return 1;
	}
	return 0;
}

void func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_95(func_121(iParam0), -1);
					Global_113648.f_24997.f_2++;
					unk_0xECDAB41968FF21A8(&Global_113644, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113644, 1))
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_95(func_121(iParam0), -1);
					Global_113648.f_24997.f_3++;
					unk_0xECDAB41968FF21A8(&Global_113644, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113644, 2))
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_95(func_121(iParam0), -1);
					Global_113648.f_24997.f_4++;
					unk_0xECDAB41968FF21A8(&Global_113644, 2);
				}
			}
			break;
	}
}

char* func_121(int iParam0)
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

int func_122()
{
	switch (func_123(&Global_32223, 0, 5, 0, unk_0xAF908D5E2416DA93()))
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
		if (Global_98159.f_44 == 1)
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
		Global_43221++;
		*uParam0 = Global_43221;
		unk_0xA7225B88CE344621(unk_0x5DC3DCA82C806319(), 0);
		Global_23131.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xDAD6345C5D317E79(8);
		}
		Global_43257 = iParam2;
		Global_43219 = *uParam0;
		Global_43220 = iParam4;
		Global_43218 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43218 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43218)
			{
				if (Global_43224[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43219 == *uParam0)
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
		if (Global_43218 == 8)
		{
			return 0;
		}
		Global_43221++;
		*uParam0 = Global_43221;
		Global_43224[Global_43218 /*4*/] = Global_43221;
		Global_43224[Global_43218 /*4*/].f_1 = iParam1;
		Global_43224[Global_43218 /*4*/].f_2 = iParam2;
		Global_43224[Global_43218 /*4*/].f_3 = 0;
		Global_43218++;
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

bool func_125(int iParam0)
{
	return func_126(iParam0, Global_43257);
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
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_128()
{
	if (unk_0xCE4AAA035282336C(uLocal_163))
	{
		unk_0x45533C09A6C9B409(&uLocal_163);
	}
	if (!unk_0xCE4AAA035282336C(uLocal_114))
	{
		if (!unk_0x055111B11E6624FD(iLocal_53, 0))
		{
			uLocal_114 = func_68(iLocal_53, 0, 145);
		}
	}
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		if (!unk_0xCE4AAA035282336C(uLocal_111[iLocal_64]))
		{
			if (!unk_0x055111B11E6624FD(iLocal_54[iLocal_64], 0))
			{
				uLocal_111[iLocal_64] = func_68(iLocal_54[iLocal_64], 1, 145);
			}
		}
		iLocal_64++;
	}
}

void func_129()
{
	if (!unk_0x66599E73DBA5A850(iLocal_53))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < unk_0xA5E11AF0A2B928C1())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < unk_0xA5E11AF0A2B928C1())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < unk_0xA5E11AF0A2B928C1())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < unk_0xA5E11AF0A2B928C1())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(4500, 6500));
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_130()
{
	switch (iLocal_110)
	{
		case 0:
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_110++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 4:
			iLocal_106 = unk_0xA5E11AF0A2B928C1() + 3000;
			iLocal_110++;
			break;
		
		case 5:
			break;
	}
}

void func_131()
{
	if (unk_0x7DE17ACDD8BA2642(iLocal_60))
	{
		if (unk_0xDC116D955A63BDBE(iLocal_60))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_54[0]))
			{
				if (unk_0x7BB3D8F4F6310EB8(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial_stop") > 0.124f && unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial") < 0.127f)
					{
						unk_0x5A2F194CFE52F250("scr_burial_dirt", iLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (unk_0x7BB3D8F4F6310EB8(iLocal_54[0], "random@burial", "a_burial", 3))
				{
					if (((((unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial") > 0.04f && unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial") < 0.043f) || (unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial") > 0.24f && unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial") < 0.243f)) || (unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial") > 0.44f && unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial") < 0.443f)) || (unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial") > 0.64f && unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial") < 0.643f)) || (unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial") > 0.84f && unk_0x92377426879E21FF(iLocal_54[0], "random@burial", "a_burial") < 0.843f))
					{
						unk_0x5A2F194CFE52F250("scr_burial_dirt", iLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_132()
{
	if (!iLocal_129)
	{
		if (unk_0x612907CF3208D1E3(Local_88, 100f, 1) || unk_0x612907CF3208D1E3(Local_88, 100f, 1))
		{
			if (unk_0x66599E73DBA5A850(iLocal_54[0]) || unk_0x66599E73DBA5A850(iLocal_54[1]))
			{
				iLocal_51 = 1;
				return 1;
			}
			else if (!unk_0x612907CF3208D1E3(Local_88, 100f, 1) || !unk_0x612907CF3208D1E3(Local_88, 100f, 1))
			{
				iLocal_51 = 1;
				return 1;
			}
		}
		if (((((((((unk_0x900514CEC11CBE3A(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 1) || unk_0x900514CEC11CBE3A(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 1)) || unk_0x900514CEC11CBE3A(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 1)) || unk_0x900514CEC11CBE3A(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 1)) || unk_0x900514CEC11CBE3A(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || unk_0x900514CEC11CBE3A(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 1)) || unk_0x900514CEC11CBE3A(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 1)) || unk_0xB4FF308B9C8698CF(2, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f))) || unk_0xB4FF308B9C8698CF(4, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f))) || unk_0xB4FF308B9C8698CF(0, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f)))
		{
			iLocal_51 = 1;
			return 1;
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_58))
		{
			if (!unk_0x055111B11E6624FD(iLocal_58, 0))
			{
				if (unk_0x7559C38E6535AB89(iLocal_58, unk_0xC1A5EC5C986B98AD(), 1) || unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_58, 0))
				{
					unk_0x5CE354E3C73D2002(iLocal_58);
					func_118();
					iLocal_51 = 3;
					return 1;
				}
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (unk_0x36AEE6FB36B84B00(unk_0xC1A5EC5C986B98AD(), joaat("towtruck")) || unk_0x36AEE6FB36B84B00(unk_0xC1A5EC5C986B98AD(), joaat("towtruck2")))
					{
						if (unk_0xF1A395BE96006DEF(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), iLocal_58))
						{
							func_118();
							iLocal_51 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_75)
		{
			if (!unk_0x66599E73DBA5A850(iLocal_54[0]) && !unk_0x66599E73DBA5A850(iLocal_54[1]))
			{
				if ((((unk_0x85D2845BAE56DBF8(iLocal_54[0], unk_0xC1A5EC5C986B98AD()) || unk_0x85D2845BAE56DBF8(iLocal_54[1], unk_0xC1A5EC5C986B98AD())) || unk_0x516AA76FD4DC1458(unk_0x93E99A2DBCBA9CFA(), iLocal_54[0])) || unk_0x516AA76FD4DC1458(unk_0x93E99A2DBCBA9CFA(), iLocal_54[1])) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_88 - Vector(0f, 0f, 7f), 20f, 15f, 35f, 0, 1, 0))
				{
					if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_88 - Vector(0f, 0f, 7f), 28f, 18f, 35f, 0, 1, 0))
					{
						iLocal_51 = 1;
						return 1;
					}
				}
			}
		}
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_54[0]) && !unk_0x66599E73DBA5A850(iLocal_54[1]))
			{
				if (!unk_0x055111B11E6624FD(unk_0xE475C458F52F1781(), 0))
				{
					if (unk_0x110B96B5C67CC73B(unk_0xE475C458F52F1781(), iLocal_54[0]) || unk_0x110B96B5C67CC73B(unk_0xE475C458F52F1781(), iLocal_54[1]))
					{
						iLocal_51 = 5;
						return 1;
					}
				}
			}
		}
		if (!unk_0x66599E73DBA5A850(iLocal_53))
		{
			if (unk_0x7559C38E6535AB89(iLocal_53, unk_0xC1A5EC5C986B98AD(), 0) || unk_0xE0AC9A4743F9BD05(iLocal_53, joaat("weapon_stungun"), 0))
			{
				iLocal_51 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_51 = 4;
			return 1;
		}
		if (unk_0x055111B11E6624FD(iLocal_54[0], 0) || unk_0x055111B11E6624FD(iLocal_54[1], 0))
		{
			iLocal_51 = 6;
			return 1;
		}
		if (iLocal_75)
		{
			return 1;
		}
	}
	return 0;
}

int func_133(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0x055111B11E6624FD(iParam0, 0) && !bParam4)
	{
		if (unk_0x4FBDBA15B9C41492(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0) && !bParam4)
		{
			Var3 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			Var6 = { unk_0x30BE8A934C020461(iParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!BitTest(uParam3, 3))
			{
				if (func_139(iParam0, iParam6))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_137(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x612907CF3208D1E3(Var6, fParam5, 1))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_137(iParam0);
					return 1;
				}
				if (unk_0x332F7E85F9805351(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_137(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 2))
			{
				fVar0 = unk_0x6A7CD5AFD8C1CE45(unk_0xC1A5EC5C986B98AD());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
				{
					if (unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iParam0) || unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0xC832FC847E3442DA(iParam0, unk_0xC1A5EC5C986B98AD(), 17))
							{
								func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_138("	aggro Ped knows player is pointing gun\n");
								func_134("		lockOnTimer = ", *uParam2);
								func_138("\n");
								func_134("		time since not LockedOn = ", (unk_0xA5E11AF0A2B928C1() - iLocal_19));
								func_138("\n");
								bVar2 = true;
								if (unk_0xA5E11AF0A2B928C1() > (iLocal_19 + *uParam2))
								{
									func_138("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_137(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!BitTest(uParam3, 0))
			{
				if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_137(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = unk_0xA5E11AF0A2B928C1();
	}
	return 0;
}

void func_134(char* sParam0, int iParam1)
{
	func_136(sParam0);
	func_135(iParam1);
}

void func_135(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_136(char* sParam0)
{
	if (unk_0x4310A0DB886F9FED(uParam0, uParam0))
	{
	}
}

void func_137(int iParam0)
{
	unk_0x90B639B1CCB1446C(iParam0);
}

void func_138(char* sParam0)
{
	func_136(sParam0);
}

int func_139(int iParam0, int iParam1)
{
	if (unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x7559C38E6535AB89(iParam0, unk_0xC1A5EC5C986B98AD(), 1))
		{
			return 1;
		}
	}
	else if (unk_0x7559C38E6535AB89(iParam0, unk_0xC1A5EC5C986B98AD(), 1))
	{
		if ((unk_0xAC6860C864E313E3(iParam0) - unk_0x2935B4D6CE81318D(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_140()
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_142(39, 1);
	func_142(40, 1);
	func_142(41, 1);
	func_142(42, 1);
	func_142(43, 1);
	func_142(44, 1);
	unk_0x54ECDA2DAB9CFB10(Local_139 - Vector(20f, 40f, 40f), Local_139 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	unk_0x54ECDA2DAB9CFB10(Local_78 - Vector(20f, 50f, 60f), Local_78 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	unk_0x9C56520AE72AFDBF(iLocal_105, 1);
	unk_0x436EC806292A3DB8(5, 0);
	unk_0x436EC806292A3DB8(3, 0);
	unk_0xFF2AF80F9EC7704C(0f);
	iLocal_53 = unk_0x69FDD9508259E5B5(26, iLocal_102, Local_78, fLocal_97, 1, 1);
	unk_0xC5B2830898581862(iLocal_53, 1);
	unk_0xD14067404D35AAE7(iLocal_53, 0);
	unk_0x474AA9EF29305EA8(iLocal_53, 2, 0);
	unk_0x474AA9EF29305EA8(iLocal_53, 128, 1);
	unk_0x7FE5E05BE63F6CB8(iLocal_53, 1, 0);
	unk_0x7FE5E05BE63F6CB8(iLocal_53, 6, 0);
	unk_0x598D91BBD045C1F3(iLocal_53, 206, 1);
	unk_0x598D91BBD045C1F3(iLocal_53, 318, 0);
	unk_0x598D91BBD045C1F3(iLocal_53, 118, 0);
	unk_0x598D91BBD045C1F3(iLocal_53, 208, 1);
	unk_0xE0A291F406691F03(iLocal_102);
	unk_0xED2BD879E739E86B(iLocal_53, iLocal_125, 0);
	unk_0x1B58D923DDA17255(unk_0xC1A5EC5C986B98AD(), 0);
	unk_0xDA95D0C19E737224("rghKidnappers", &iLocal_176);
	unk_0xDA95D0C19E737224("rghVictim", &iLocal_177);
	unk_0x8386356641D0DED1(iLocal_53, iLocal_177);
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		iLocal_54[iLocal_64] = unk_0x69FDD9508259E5B5(26, iLocal_103, Local_81[iLocal_64 /*3*/], fLocal_98[iLocal_64], 1, 1);
		unk_0xC5B2830898581862(iLocal_54[iLocal_64], 1);
		unk_0xBDB9814951DD4D75(iLocal_54[iLocal_64], 1);
		unk_0x7FE5E05BE63F6CB8(iLocal_54[iLocal_64], 0, 1);
		unk_0x474AA9EF29305EA8(iLocal_54[iLocal_64], 2, 0);
		unk_0x474AA9EF29305EA8(iLocal_54[iLocal_64], 128, 1);
		unk_0x598D91BBD045C1F3(iLocal_54[iLocal_64], 42, 1);
		unk_0x8F758E95FCF28E36(iLocal_54[0], 2);
		unk_0x7FE5E05BE63F6CB8(iLocal_54[0], 50, 1);
		unk_0x5DDC305DCF8431AC(iLocal_54[iLocal_64], 50);
		unk_0x55B25C3B4CEEEF4B(iLocal_54[iLocal_64], 13);
		unk_0x351E6B9FD37CFF33(iLocal_54[iLocal_64], 1, 1);
		unk_0x8386356641D0DED1(iLocal_54[iLocal_64], iLocal_176);
		unk_0xCFFDA1550DF82B52(iLocal_54[iLocal_64], unk_0x15A88CFAAFFC6C4B(800, 2000));
		iLocal_64++;
	}
	unk_0xE0A291F406691F03(iLocal_104);
	unk_0xE0A291F406691F03(iLocal_103);
	unk_0x5DDC305DCF8431AC(iLocal_54[1], 100);
	unk_0x8980E75D09DCDE5F(iLocal_54[1], joaat("FIRING_PATTERN_BURST_FIRE"));
	unk_0x0133FF6E23A1DCA4(5, iLocal_176, joaat("player"));
	unk_0xCBDC2B59922F92C3(iLocal_54[0], joaat("weapon_pistol"), -1, 0, 1);
	unk_0xCBDC2B59922F92C3(iLocal_54[1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
	iLocal_58 = unk_0xABEEDBEF2BBDF5B3(iLocal_105, Local_88, fLocal_101, 1, 1, 0);
	unk_0xCB8DD5B44DBC2DEB(iLocal_58, 1084227584);
	unk_0xDAF60DD724E215CF(iLocal_58, 3);
	unk_0xADDC2DFB04C3C0E9(iLocal_58, 5, 0, 0);
	unk_0xE0A291F406691F03(iLocal_105);
	iLocal_60 = unk_0xF19D6C0E8B56BE23(joaat("prop_ld_shovel"), Local_107, 1, 1, 0);
	unk_0xE0A291F406691F03(joaat("prop_ld_shovel"));
	uLocal_61[0] = unk_0xF19D6C0E8B56BE23(joaat("p_arm_bind_cut_s"), Local_107, 1, 1, 0);
	uLocal_61[1] = unk_0xF19D6C0E8B56BE23(joaat("p_arm_bind_cut_s"), Local_107 + Vector(1f, 1f, 1f), 1, 1, 0);
	unk_0x852EC2A7DE66202D(joaat("p_arm_bind_cut_s"));
	unk_0xBD02C9D4D7076ECC(iLocal_60, iLocal_54[0], unk_0xCF99BEF1317B66DA(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
	unk_0xFECAE061D8C80757(iLocal_54[0], 0, 0, 0, 0);
	unk_0xFECAE061D8C80757(iLocal_54[0], 3, 0, 1, 0);
	unk_0xFECAE061D8C80757(iLocal_54[0], 4, 1, 0, 0);
	unk_0xFECAE061D8C80757(iLocal_54[1], 0, 0, 2, 0);
	unk_0xFECAE061D8C80757(iLocal_54[1], 3, 2, 1, 0);
	unk_0xFECAE061D8C80757(iLocal_54[1], 4, 1, 1, 0);
	Var0 = { Local_78 };
	Var3 = { -2f, -4f, 18f };
	uLocal_343 = unk_0x191673E3F99212B2(Var0, Var3, 2);
	unk_0x468D976993BF7FE1(iLocal_53, uLocal_343, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	unk_0xA2CBB04560DD6361(uLocal_61[0], uLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0xA2CBB04560DD6361(uLocal_61[1], uLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0x5F243F8265BB664F(uLocal_343, 1);
	unk_0x71A535529C1CA5DF(iLocal_53, 1);
	unk_0x3EE48ADC8C7F5CC4(iLocal_54[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x3EE48ADC8C7F5CC4(iLocal_54[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x7AC9DDEB7E6C0D0D(iLocal_54[0], Local_91, Local_94, 2.75f, 0, 0);
	unk_0x7AC9DDEB7E6C0D0D(iLocal_54[1], Local_91, Local_94, 2.75f, 0, 0);
	if (func_45() == 0)
	{
		func_141(&uLocal_178, 0, unk_0xC1A5EC5C986B98AD(), "MICHAEL", 0, 1);
	}
	else if (func_45() == 1)
	{
		func_141(&uLocal_178, 1, unk_0xC1A5EC5C986B98AD(), "FRANKLIN", 0, 1);
	}
	else if (func_45() == 2)
	{
		func_141(&uLocal_178, 2, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
	}
	unk_0xEE72EF85581D1171(iLocal_54[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	unk_0xEE72EF85581D1171(iLocal_54[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	unk_0xEE72EF85581D1171(iLocal_53, "KIDNAPPEDFEMALE");
	func_141(&uLocal_178, 4, iLocal_54[0], "KIDNAPPER2", 0, 1);
	func_141(&uLocal_178, 3, iLocal_54[1], "KIDNAPPER1", 0, 1);
	func_141(&uLocal_178, 5, iLocal_53, "KIDNAPPEDFEMALE", 0, 1);
}

void func_141(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_142(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_149(iParam0, 2, 1))
		{
			func_148(iParam0, 2, 1);
		}
	}
	else if (func_149(iParam0, 2, 1))
	{
		func_143(iParam0, 2, 1);
	}
}

void func_143(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x061B1200C95204CB(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_20() == 0)
		{
			uVar0 = func_146(func_147(iParam0), -1, 0);
			unk_0x061B1200C95204CB(&uVar0, iParam1);
			func_144(func_147(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_668[iParam0]), iParam1);
	}
}

void func_144(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_145(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, uParam1, iParam3);
	}
}

int func_145(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_146(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_145(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_147(int iParam0)
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

void func_148(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xECDAB41968FF21A8(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_20() == 0)
		{
			uVar0 = func_146(func_147(iParam0), -1, 0);
			unk_0xECDAB41968FF21A8(&uVar0, iParam1);
			func_144(func_147(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_668[iParam0]), iParam1);
	}
}

int func_149(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			return BitTest(func_146(func_147(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_150()
{
	var uVar0;
	int iVar1;
	
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
	{
		uVar0 = unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD());
		if (unk_0xFBD273FDBCF0C5BD(uVar0, 0))
		{
			iVar1 = unk_0xA66E176E5772E965(iVar0, 0, 0);
			if (!unk_0x66599E73DBA5A850(iVar1))
			{
				if (iVar1 != unk_0xC1A5EC5C986B98AD())
				{
					if (unk_0x1AFE963DA61006ED(iVar1))
					{
						if (!unk_0xAE07A54F518EB175(iVar1, unk_0xC1A5EC5C986B98AD()))
						{
							unk_0xEDB03CCB50D11479(iVar1, unk_0xC1A5EC5C986B98AD(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_151()
{
	unk_0x852EC2A7DE66202D(iLocal_102);
	unk_0x852EC2A7DE66202D(iLocal_104);
	unk_0x852EC2A7DE66202D(iLocal_103);
	unk_0x852EC2A7DE66202D(iLocal_105);
	unk_0x852EC2A7DE66202D(joaat("prop_ld_shovel"));
	unk_0x852EC2A7DE66202D(joaat("p_arm_bind_cut_s"));
	unk_0x28818732C8F0F80E("random@burial");
	unk_0x10FC49B73AEEBE87();
	unk_0xF6AFEDAAE44A2159("ROPE_CUT", 0, -1);
	unk_0x173922034C9CB651("RE6_BOTH_DEAD_OS");
	if (((((((((unk_0x0CBB7C273DED26E7(iLocal_102) && unk_0x0CBB7C273DED26E7(iLocal_104)) && unk_0x0CBB7C273DED26E7(iLocal_103)) && unk_0x0CBB7C273DED26E7(iLocal_105)) && unk_0x0CBB7C273DED26E7(joaat("prop_ld_shovel"))) && unk_0x0CBB7C273DED26E7(joaat("p_arm_bind_cut_s"))) && unk_0x2BBF749E555360DC("random@burial")) && unk_0x399D29F9238EE6B0()) && unk_0xF6AFEDAAE44A2159("ROPE_CUT", 0, -1)) && unk_0x173922034C9CB651("RE6_BOTH_DEAD_OS"))
	{
		bLocal_52 = true;
	}
	else
	{
		unk_0x852EC2A7DE66202D(iLocal_102);
		unk_0x852EC2A7DE66202D(iLocal_104);
		unk_0x852EC2A7DE66202D(iLocal_103);
		unk_0x852EC2A7DE66202D(iLocal_105);
		unk_0x852EC2A7DE66202D(joaat("prop_ld_shovel"));
		unk_0x852EC2A7DE66202D(joaat("p_arm_bind_cut_s"));
		unk_0x28818732C8F0F80E("random@burial");
		unk_0x10FC49B73AEEBE87();
		unk_0xF6AFEDAAE44A2159("ROPE_CUT", 0, -1);
		unk_0x173922034C9CB651("RE6_BOTH_DEAD_OS");
	}
}

void func_152()
{
	iLocal_102 = joaat("u_f_y_mistress");
	iLocal_103 = joaat("a_m_m_salton_01");
	iLocal_104 = joaat("a_m_m_salton_01");
	iLocal_105 = joaat("bison");
	Local_78 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_97 = 0f;
	Local_81[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_98[0] = 297.0056f;
	Local_81[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_98[1] = 193.3866f;
	Local_88 = { 169.3462f, 6837.805f, 19.1421f };
	fLocal_101 = 265.6862f;
	Local_91 = { 164.0896f, 6836.923f, 19.03899f };
	Local_94 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_66 = 1;
}

int func_153()
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_160())
	{
		return 1;
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_154(float fParam0, bool bParam1)
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
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (func_33(func_45()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113648.f_18576[iVar32 /*6*/], 2) && !BitTest(Global_113648.f_18576[iVar32 /*6*/], 3))
				{
					func_155(iVar32, &Var0);
					fVar35 = unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), Var0.f_6, 1);
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

void func_155(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_156(uParam1, "Abigail1", func_158(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 1:
			func_156(uParam1, "Abigail2", func_158(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 2:
			func_156(uParam1, "Barry1", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 3:
			func_156(uParam1, "Barry2", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 4:
			func_156(uParam1, "Barry3", func_158(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 5:
			func_156(uParam1, "Barry3A", func_158(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 6:
			func_156(uParam1, "Barry3C", func_158(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 7:
			func_156(uParam1, "Barry4", func_158(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_157(iParam0), 0, 0);
			break;
		
		case 8:
			func_156(uParam1, "Dreyfuss1", func_158(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 9:
			func_156(uParam1, "Epsilon1", func_158(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 10:
			func_156(uParam1, "Epsilon2", func_158(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 11:
			func_156(uParam1, "Epsilon3", func_158(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 12:
			func_156(uParam1, "Epsilon4", func_158(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 13:
			func_156(uParam1, "Epsilon5", func_158(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 14:
			func_156(uParam1, "Epsilon6", func_158(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 15:
			func_156(uParam1, "Epsilon7", func_158(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 16:
			func_156(uParam1, "Epsilon8", func_158(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 17:
			func_156(uParam1, "Extreme1", func_158(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 18:
			func_156(uParam1, "Extreme2", func_158(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 19:
			func_156(uParam1, "Extreme3", func_158(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 20:
			func_156(uParam1, "Extreme4", func_158(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 21:
			func_156(uParam1, "Fanatic1", func_158(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 22:
			func_156(uParam1, "Fanatic2", func_158(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 23:
			func_156(uParam1, "Fanatic3", func_158(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_157(iParam0), 0, 1);
			break;
		
		case 24:
			func_156(uParam1, "Hao1", func_158(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_157(iParam0), 0, 1);
			break;
		
		case 25:
			func_156(uParam1, "Hunting1", func_158(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 26:
			func_156(uParam1, "Hunting2", func_158(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 27:
			func_156(uParam1, "Josh1", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 28:
			func_156(uParam1, "Josh2", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 29:
			func_156(uParam1, "Josh3", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 30:
			func_156(uParam1, "Josh4", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 31:
			func_156(uParam1, "Maude1", func_158(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 32:
			func_156(uParam1, "Minute1", func_158(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 33:
			func_156(uParam1, "Minute2", func_158(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 34:
			func_156(uParam1, "Minute3", func_158(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 35:
			func_156(uParam1, "MrsPhilips1", func_158(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 36:
			func_156(uParam1, "MrsPhilips2", func_158(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 37:
			func_156(uParam1, "Nigel1", func_158(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 38:
			func_156(uParam1, "Nigel1A", func_158(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 39:
			func_156(uParam1, "Nigel1B", func_158(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 40:
			func_156(uParam1, "Nigel1C", func_158(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 41:
			func_156(uParam1, "Nigel1D", func_158(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 42:
			func_156(uParam1, "Nigel2", func_158(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 43:
			func_156(uParam1, "Nigel3", func_158(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 44:
			func_156(uParam1, "Omega1", func_158(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 45:
			func_156(uParam1, "Omega2", func_158(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 46:
			func_156(uParam1, "Paparazzo1", func_158(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 47:
			func_156(uParam1, "Paparazzo2", func_158(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 48:
			func_156(uParam1, "Paparazzo3", func_158(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 49:
			func_156(uParam1, "Paparazzo3A", func_158(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 50:
			func_156(uParam1, "Paparazzo3B", func_158(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 51:
			func_156(uParam1, "Paparazzo4", func_158(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 52:
			func_156(uParam1, "Rampage1", func_158(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 54:
			func_156(uParam1, "Rampage3", func_158(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 55:
			func_156(uParam1, "Rampage4", func_158(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 56:
			func_156(uParam1, "Rampage5", func_158(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 53:
			func_156(uParam1, "Rampage2", func_158(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 57:
			func_156(uParam1, "TheLastOne", func_158(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 58:
			func_156(uParam1, "Tonya1", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 59:
			func_156(uParam1, "Tonya2", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 60:
			func_156(uParam1, "Tonya3", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 61:
			func_156(uParam1, "Tonya4", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 62:
			func_156(uParam1, "Tonya5", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_156(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_157(int iParam0)
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

struct<2> func_158(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_159(iParam0) };
	if (unk_0x2AC37494BBF1DB16(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_159(int iParam0)
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

int func_160()
{
	if (func_163() && !func_164())
	{
		return 1;
	}
	if (func_162() && func_161())
	{
		return 1;
	}
	return 0;
}

bool func_161()
{
	return Global_113366 > 0;
}

int func_162()
{
	if (Global_97603 != -1)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

int func_164()
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

int func_165()
{
	if (!func_125(5))
	{
		return 1;
	}
	if (func_160())
	{
		return 1;
	}
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if ((Global_113637 == func_40() && unk_0xA847A0F368810680()) && Global_113638)
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_169(iParam0);
	unk_0x1A59C174B4130991(0);
	unk_0xB1BC77E1EAD07BAE(1);
	Global_113634 = 0;
	func_168();
}

void func_168()
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			unk_0x9C56520AE72AFDBF(unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)), 1);
		}
		unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 32, 0);
	}
}

void func_169(int iParam0)
{
	Global_113637 = iParam0;
}

int func_170(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152234)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_40();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_211())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			Var1 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_164())
			{
				return 0;
			}
		}
		if (!Global_113648.f_9087)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_160())
		{
			return 0;
		}
		if (func_210())
		{
			return 0;
		}
		if (Global_113637 != -1)
		{
			return 0;
		}
		if (func_33(func_45()))
		{
			if (func_154(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_209(iParam3))
		{
			return 0;
		}
		if (func_33(func_45()))
		{
			if (func_208(func_45()) == 4 || func_208(func_45()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_45()))
		{
			if (!func_207(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_206(Global_113648.f_24997.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xA5E11AF0A2B928C1() - Global_113639) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_205())
		{
			return 0;
		}
		if (unk_0x5ABCFD3441B37CA6())
		{
			return 0;
		}
		if (unk_0xA847A0F368810680())
		{
			return 0;
		}
		if (!func_196(4))
		{
			return 0;
		}
		if (!func_125(5))
		{
			return 0;
		}
		if (func_195(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x4D3D95146FD3490D(unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD())))
		{
			if ((unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(377.153f, -717.567f, 10.0536f) || unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(320.9934f, 265.2515f, 82.1221f)) || unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_195(0, 0))
		{
			return 0;
		}
		if (Global_32310)
		{
			return 0;
		}
		if (func_209(30) && !func_195(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_45()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113648.f_2365.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113648.f_2365.f_539.f_2296[iVar4];
				if (func_194(iVar8))
				{
					if (func_172(iVar4))
					{
						if (!func_171(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), Var5) < (210f * 210f))
							{
								if (func_45() != iVar4)
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

bool func_171(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_173(iVar0);
}

int func_173(int iParam0)
{
	return func_174(iParam0, 1);
}

int func_174(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_194(iParam0))
	{
		return 0;
	}
	func_175(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_175(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_176(func_187(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_176(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_186(iParam0, iParam1))
	{
		iVar0 = func_185(iParam1);
		iVar1 = func_183(iParam0);
		iVar2 = (func_183(iParam0) - func_183(iParam1));
		iVar3 = (func_185(iParam0) - func_185(iParam1));
		iVar4 = (func_182(iParam0) - func_182(iParam1));
		iVar5 = (func_181(iParam0) - func_181(iParam1));
		iVar6 = (func_180(iParam0) - func_180(iParam1));
		iVar7 = (func_179(iParam0) - func_179(iParam1));
	}
	else
	{
		iVar0 = func_185(iParam0);
		iVar1 = func_183(iParam1);
		iVar2 = (func_183(iParam1) - func_183(iParam0));
		iVar3 = (func_185(iParam1) - func_185(iParam0));
		iVar4 = (func_182(iParam1) - func_182(iParam0));
		iVar5 = (func_181(iParam1) - func_181(iParam0));
		iVar6 = (func_180(iParam1) - func_180(iParam0));
		iVar7 = (func_179(iParam1) - func_179(iParam0));
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
		iVar4 = (iVar4 + func_178(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_177(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_177(float fParam0, float fParam1, float fParam2)
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

int func_178(int iParam0, int iParam1)
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

int func_179(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_180(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_181(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_182(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_183(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_184(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_184(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_185(int iParam0)
{
	return iParam0 & 15;
}

int func_186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_194(iParam1) || !func_194(iParam0))
	{
		return 1;
	}
	iVar0 = func_183(iParam0);
	iVar1 = func_183(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_182(iParam0);
	iVar1 = func_182(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_181(iParam0);
	iVar1 = func_181(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_180(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	var uVar0;
	
	func_193(&uVar0, unk_0x731F95B6458DCF80());
	func_192(&uVar0, unk_0x77BBAAED3E25322C());
	func_191(&uVar0, unk_0x30DFE1FFD2CC7420());
	func_190(&uVar0, unk_0x8C0F17CAC308A14B());
	func_189(&uVar0, unk_0x61117764C67882B7());
	func_188(&uVar0, unk_0x367F557725B53815());
	return uVar0;
}

void func_188(var uParam0, int iParam1)
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

void func_189(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_190(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_185(*uParam0);
	iVar1 = func_183(*uParam0);
	if (iParam1 < 1 || iParam1 > func_178(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_191(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_192(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_193(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_194(int iParam0)
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
	iVar0 = func_179(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_180(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_181(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_183(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_185(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_182(iParam0);
	if (iVar5 < 1 || iVar5 > func_178(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0, bool bParam1)
{
	if (BitTest(Global_113648.f_24997.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)
{
	int iVar0;
	
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				iVar0 = func_45();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_204()) || Global_112695) || Global_32166) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_200()) || func_199()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_204()) || Global_32166) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_204()) || Global_112695) || Global_32166) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_113648.f_7690.f_919[iVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_204()) || Global_112695) || Global_32166) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_199()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_204() || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || func_84(8, -1)) || func_199()) || func_198()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_84(8, -1) || func_202()) || func_201()) || func_198()) || func_197())
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
							if ((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_204()) || Global_32166) || func_203()) || func_84(8, -1)) || func_201()) || func_200()) || func_199()) || Global_113648.f_7690.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || func_204()) || func_201()) || Global_112695) || Global_32166) || func_203()) || Global_44446) || func_84(8, -1)) || func_200()) || func_198()) || func_199()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0)) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1)) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_204()) || Global_112695) || Global_32166) || func_203()) || func_84(8, -1)) || func_200()) || func_198()) || func_202()) || func_201()) || func_199())
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

var func_197()
{
	return Global_100720.f_1;
}

int func_198()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_199()
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_200()
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

bool func_201()
{
	return Global_100733.f_388 > 0;
}

bool func_202()
{
	return Global_100733.f_387 > 0;
}

var func_203()
{
	return Global_1575060;
}

int func_204()
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_205()
{
	func_82();
	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_206(int iParam0)
{
	return func_186(func_187(), iParam0);
}

int func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_45();
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

int func_208(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_113648.f_7690.f_919[iParam0];
}

int func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_211())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113648.f_24997, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113648.f_24997.f_1, iVar0);
	}
	return iVar1;
}

int func_210()
{
	var uVar0;
	
	if (Global_32315)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0xFBD273FDBCF0C5BD(uVar0, 0))
			{
				if (!unk_0x66599E73DBA5A850(unk_0xA66E176E5772E965(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_211()
{
	var uVar0;
	
	if (Global_152523 == 2)
	{
		return 1;
	}
	else if (Global_152523 == 3)
	{
		return 0;
	}
	if (unk_0x7FFBE14C34D75E19())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (unk_0x001B3EAD68D731CE())
			{
				unk_0xDD7756E2742E0F6D(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xECDAB41968FF21A8(&uVar0, 2);
				unk_0xECDAB41968FF21A8(&uVar0, 4);
				unk_0xECDAB41968FF21A8(&uVar0, 6);
				unk_0xECDAB41968FF21A8(&Global_25, 2);
				unk_0xECDAB41968FF21A8(&Global_25, 4);
				unk_0xECDAB41968FF21A8(&Global_25, 6);
				unk_0x3CC35ACFFC9C730E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x7D33DF1E1089E1D1())
				{
					iVar0 = unk_0x516080EA609481E1(866);
					unk_0xECDAB41968FF21A8(&iVar0, 0);
					unk_0x705949B096008718(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x7D33DF1E1089E1D1())
	{
		if (BitTest(unk_0x516080EA609481E1(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_212()
{
	int iVar0;
	
	if (iLocal_162)
	{
		func_225(0);
		unk_0x1090804F1F0FF051();
		unk_0xEE672D2DF40ECA0F("RE6_BOTH_DEAD_OS");
		if (iLocal_145 || iLocal_165)
		{
			if (Global_32406)
			{
				unk_0x5C37F509B0398DFA("AC_STOP");
			}
			else
			{
				unk_0x5C37F509B0398DFA("RE6_END");
			}
		}
		func_224();
		unk_0x0133FF6E23A1DCA4(255, iLocal_177, joaat("player"));
		unk_0x0133FF6E23A1DCA4(255, joaat("player"), iLocal_177);
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_53))
			{
				unk_0x598D91BBD045C1F3(iLocal_53, 317, 1);
				if (!unk_0x3C3D6D026CF7F51B(iLocal_53, 0))
				{
					unk_0x2578E1A719BF1CA4(iLocal_53);
				}
				if (unk_0xE65E1573677B6119(iLocal_53))
				{
					unk_0xDC21E058EE11964C(iLocal_53);
				}
				unk_0xC5B2830898581862(iLocal_53, 0);
				unk_0xD14067404D35AAE7(iLocal_53, 1);
			}
			else if (!unk_0x055111B11E6624FD(iLocal_53, 0))
			{
				unk_0xC019B2705F3AC330(iLocal_53, 1);
				unk_0xA354B07ADFAA11F3(iLocal_53, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_54)
		{
			if (!unk_0x66599E73DBA5A850(iLocal_54[iVar0]) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0xF0654A614CC902C9(iLocal_54[iVar0]);
				if (iLocal_69 || iLocal_76)
				{
					unk_0xCAC2B0C65B18E755(iLocal_54[iVar0], unk_0xC1A5EC5C986B98AD(), 0, 16);
				}
				else
				{
					unk_0xC6C9BF71106ABCAC(iLocal_54[iVar0], unk_0xC1A5EC5C986B98AD(), 1000f, -1, 0, 0);
					func_110();
				}
				unk_0x71A535529C1CA5DF(iLocal_54[iVar0], 1);
			}
			iVar0++;
		}
		unk_0xEF078F1FEE785D3E(&(uLocal_61[0]));
		unk_0xEF078F1FEE785D3E(&(uLocal_61[1]));
		if (unk_0x7DE17ACDD8BA2642(iLocal_58))
		{
			unk_0x0E4B6CF706BE8AA4(&iLocal_58);
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_60))
		{
			if (unk_0xDC116D955A63BDBE(iLocal_60))
			{
				unk_0xA81AA70A4D25E140(iLocal_60, 1, 1);
			}
			unk_0xC621CC7313639986(&iLocal_60);
		}
		if (unk_0xCE4AAA035282336C(uLocal_163))
		{
			unk_0x45533C09A6C9B409(&uLocal_163);
		}
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (unk_0xCE4AAA035282336C(uLocal_111[iLocal_64]))
			{
				unk_0x45533C09A6C9B409(&(uLocal_111[iLocal_64]));
			}
			iLocal_64++;
		}
		if (unk_0xCE4AAA035282336C(uLocal_114))
		{
			unk_0x45533C09A6C9B409(&uLocal_114);
		}
		if (unk_0xF57C1326FD40C8A7(uLocal_77))
		{
			unk_0x42B9FA814615C4F9(uLocal_77, 0);
		}
		unk_0x436EC806292A3DB8(5, 1);
		unk_0x436EC806292A3DB8(3, 1);
		unk_0xFF2AF80F9EC7704C(1f);
		unk_0x8E09E8C52602EBB2(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 1, 1);
	}
	func_213(-1);
	unk_0x675D9C12C73D3DE7();
}

void func_213(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_166())
	{
		func_217(iParam0);
		unk_0x97DBA2AA6C70AFC7(0, 0);
		Global_113639 = unk_0xA5E11AF0A2B928C1();
		func_216(30000);
		StringCopy(&cVar0, func_215(Global_113637, 1), 64);
		if (func_39(Global_113637) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113636, 64);
		}
		unk_0x36DDD3AC77856423(&cVar0, Global_113634, (unk_0xA5E11AF0A2B928C1() - Global_113635), 0);
	}
	else if (BitTest(Global_113644, 0) && Global_113648.f_24997.f_2 < 3)
	{
		unk_0x061B1200C95204CB(&Global_113644, 0);
	}
	func_214(&Global_32223);
	Global_113638 = 0;
	func_169(-1);
}

void func_214(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43219)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = 0;
	Global_63360 = 0;
}

char* func_215(int iParam0, bool bParam1)
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

void func_216(int iParam0)
{
	Global_43808 = (unk_0xA5E11AF0A2B928C1() + iParam0);
}

void func_217(int iParam0)
{
	func_218(iParam0, 0, func_223(iParam0));
}

void func_218(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_187();
	func_221(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_220(iParam0, &uVar0);
	Var1 = { func_219(&uVar0) };
}

struct<16> func_219(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_181(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_180(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_179(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_182(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_185(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_183(*uParam0), 64);
	return Var0;
}

void func_220(int iParam0, var uParam1)
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
}

void func_221(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_183(*uParam0);
	iVar1 = func_185(*uParam0);
	iVar2 = func_182(*uParam0);
	iVar3 = func_181(*uParam0);
	iVar4 = func_180(*uParam0);
	iVar5 = func_179(*uParam0);
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
	iVar6 = func_178(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_178(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_222(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_193(uParam0, iParam1);
	func_192(uParam0, iParam2);
	func_191(uParam0, iParam3);
	func_189(uParam0, iParam5);
	func_190(uParam0, iParam4);
	func_188(uParam0, iParam6);
}

int func_223(int iParam0)
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

void func_224()
{
	Global_32402 = 0;
	Global_32403 = 0;
	Global_32405 = 0;
	Global_32406 = 0;
	Global_32407 = 0;
}

void func_225(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_142(iVar0, bParam0);
		iVar0++;
	}
}

