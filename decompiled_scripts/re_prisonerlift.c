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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	bool bLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	struct<3> Local_76 = { 0, 0, 0 } ;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82[2] = { 0, 0 };
	var uLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	struct<3> Local_91 = { 0, 0, 0 } ;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	float fLocal_109 = 0f;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	struct<3> Local_114 = { 0, 0, 0 } ;
	struct<3> Local_117 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	struct<3> Local_123 = { 0, 0, 0 } ;
	struct<3> Local_126 = { 0, 0, 0 } ;
	struct<3> Local_129 = { 0, 0, 0 } ;
	struct<3> Local_132 = { 0, 0, 0 } ;
	struct<3> Local_135 = { 0, 0, 0 } ;
	struct<3> Local_138 = { 0, 0, 0 } ;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 16;
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
	uLocal_47 = unk_0x1F53E4D96E694CDD();
	uLocal_48 = unk_0xEE612CA913419344();
	Local_63 = { 1492.31f, 2136.53f, 89.15f };
	Local_66 = { 1408.24f, 2522.803f, 41.0419f };
	Local_114 = { 370.2576f, -1597.488f, 35.94954f };
	Local_117 = { 824.992f, -1289.267f, 27.24564f };
	Local_120 = { 450.1889f, -981.6754f, 42.69174f };
	Local_123 = { -1088.37f, -842.2911f, 30.27554f };
	Local_126 = { 608.9076f, 0.806411f, 100.2497f };
	Local_129 = { -562.0159f, -130.8113f, 37.4369f };
	Local_132 = { 1855.237f, 3683.236f, 33.29165f };
	Local_135 = { -443.5063f, 6016.231f, 30.71787f };
	Local_138 = { 1693.518f, 2579.21f, 44.95713f };
	Local_59 = { ScriptParam_0.f_1[0 /*3*/] };
	func_191();
	if (unk_0x55EEDBBFDC6E810F(11))
	{
		if (!unk_0x66599E73DBA5A850(iLocal_72))
		{
			if (unk_0xE65E1573677B6119(iLocal_72))
			{
				unk_0xDC21E058EE11964C(iLocal_72);
			}
		}
		func_176();
	}
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			unk_0x675D9C12C73D3DE7();
		}
	}
	if (func_134(Local_59, 22, bLocal_69, 0, 0))
	{
		func_131(22);
	}
	else
	{
		unk_0x675D9C12C73D3DE7();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xCBE2EC2868A6C438() || iLocal_96)
		{
			if (!func_130())
			{
				if (func_129())
				{
					func_176();
				}
			}
			unk_0x385C3C9C52E9D548("RE_PL", 0);
			switch (iLocal_53)
			{
				case 0:
					if (func_117())
					{
						func_176();
					}
					if (!iLocal_58)
					{
						func_116();
					}
					else
					{
						func_115();
					}
					if (bLocal_57)
					{
						iLocal_141 = 1;
						iLocal_53 = 1;
					}
					break;
				
				case 1:
					if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
					{
						switch (iLocal_54)
						{
							case 0:
								switch (iLocal_55)
								{
									case 0:
										func_108();
										break;
									
									case 1:
										if (iLocal_56 == 0)
										{
											if (!unk_0x66599E73DBA5A850(iLocal_72))
											{
												if ((unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 100f, 100f, 100f, 0, 1, 0) && !unk_0xDB08595445CDE2FF(iLocal_72)) || unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													func_107();
													if (!func_130())
													{
														func_97(1);
														func_96(1);
													}
												}
												if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													if (unk_0xCE4AAA035282336C(uLocal_105))
													{
														unk_0xA4B6A532E7DDE178(uLocal_105, 1);
													}
													func_95();
													if (!func_94())
													{
														if (unk_0x7BB3D8F4F6310EB8(iLocal_72, "random@prisoner_lift", "arms_waving", 3) || unk_0x7BB3D8F4F6310EB8(iLocal_72, "random@prisoner_lift", "loop2_idlelook2", 3))
														{
															unk_0x909F139DC199D8E0(iLocal_72);
														}
														func_93(&uLocal_107);
													}
												}
											}
											else
											{
												func_92();
											}
											func_91();
											func_90();
										}
										else if (iLocal_56 == 1)
										{
											if (!unk_0x66599E73DBA5A850(iLocal_72))
											{
												if ((unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 105f, 105f, 105f, 0, 1, 0) && !unk_0xDB08595445CDE2FF(iLocal_72)) || unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													func_107();
													if (!func_130())
													{
														func_97(1);
														func_96(1);
													}
												}
												if (!unk_0x055111B11E6624FD(iLocal_72, 0))
												{
													if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
													{
														if (unk_0xCE4AAA035282336C(uLocal_105))
														{
															unk_0xA4B6A532E7DDE178(uLocal_105, 1);
														}
														func_95();
													}
												}
												if (bLocal_99)
												{
													if (unk_0x83666F9FB8FEBD4B() > 2000 && unk_0x83666F9FB8FEBD4B() < 2100)
													{
														unk_0xA0E06A3361300416(iLocal_72);
													}
													if (unk_0x83666F9FB8FEBD4B() > 3000)
													{
														if (!iLocal_102)
														{
															if (!func_89())
															{
																func_73(&uLocal_148, "PRI2AU", "PRI2_ASK", 4, 0, 0, 0);
																iLocal_102 = 1;
															}
														}
													}
												}
												if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
												{
													if (unk_0xFBD273FDBCF0C5BD(unk_0xE475C458F52F1781(), 0))
													{
														if (!func_72(unk_0xE475C458F52F1781()))
														{
															if (unk_0xEAEF747543427AC5(unk_0xE475C458F52F1781(), iLocal_72, 40f, 40f, 20f, 0, 1, 0) && unk_0xC832FC847E3442DA(iLocal_72, unk_0xE475C458F52F1781(), 17))
															{
																unk_0x909F139DC199D8E0(iLocal_72);
																if (!unk_0x1AFE963DA61006ED(unk_0xE475C458F52F1781()))
																{
																	unk_0x85BAE84748AD1A23(unk_0xE475C458F52F1781(), 1, 0);
																}
																unk_0xB8194851FFF54D3B(iLocal_72, unk_0xE475C458F52F1781(), unk_0xC1A5EC5C986B98AD(), 8, 22f, 786469, 1f, 1f, 1);
																unk_0x71A535529C1CA5DF(iLocal_72, 1);
																iLocal_55 = 13;
															}
															else if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 20f, 20f, 8f, 0, 1, 0) && unk_0xC832FC847E3442DA(iLocal_72, unk_0xC1A5EC5C986B98AD(), 17))
															{
																func_73(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
																func_92();
															}
														}
														else
														{
															func_73(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_92();
														}
													}
													else
													{
														func_73(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
														func_92();
													}
												}
												if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
												{
													if (unk_0xFBD273FDBCF0C5BD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0))
													{
														if (((unk_0x6AE0E79C82A558ED(unk_0xC1A5EC5C986B98AD()) || unk_0x36AEE6FB36B84B00(unk_0xC1A5EC5C986B98AD(), joaat("rhino"))) || unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD())) || unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD()))
														{
															func_73(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_92();
														}
													}
												}
											}
											if (func_71())
											{
												if (!unk_0x055111B11E6624FD(iLocal_72, 0))
												{
													if (!unk_0x36AEE6FB36B84B00(unk_0xC1A5EC5C986B98AD(), joaat("bus")))
													{
														if (func_70(unk_0xC1A5EC5C986B98AD(), iLocal_72) < 2.5f)
														{
															if (unk_0xDC58AE028CB223BA(uLocal_75) < 1f)
															{
																func_69();
															}
														}
													}
													else if (func_70(unk_0xC1A5EC5C986B98AD(), iLocal_72) < 10f)
													{
														if (unk_0xDC58AE028CB223BA(uLocal_75) < 1f)
														{
															func_69();
														}
													}
												}
											}
										}
										if (func_65())
										{
											if (!unk_0x66599E73DBA5A850(iLocal_72))
											{
												unk_0x909F139DC199D8E0(iLocal_72);
												if (unk_0xE65E1573677B6119(iLocal_72))
												{
													unk_0xDC21E058EE11964C(iLocal_72);
												}
											}
											func_92();
										}
										if (!unk_0x66599E73DBA5A850(iLocal_72))
										{
											unk_0xB3FF3200DBD1FC87(iLocal_72, 0);
										}
										break;
									
									case 2:
										func_64();
										func_90();
										if (!unk_0x66599E73DBA5A850(iLocal_72))
										{
											unk_0xB3FF3200DBD1FC87(iLocal_72, 0);
										}
										break;
									
									case 3:
										if (func_63())
										{
											iLocal_55 = 9;
										}
										func_55();
										func_90();
										if (!unk_0x66599E73DBA5A850(iLocal_72))
										{
											unk_0xB3FF3200DBD1FC87(iLocal_72, 0);
										}
										break;
									
									case 5:
										func_54();
										break;
									
									case 6:
										if (!iLocal_104 && !unk_0x66599E73DBA5A850(iLocal_72))
										{
											unk_0xDBC7406226B5540E(&uLocal_74);
											unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), 5000, 2048, 2);
											unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
											unk_0xA3CD3591C0B0EE9A(0, 1500);
											unk_0x7D9A648CC1936BDA(0, Local_91, 1f, -1, 0.25f, 0, 333.9002f);
											unk_0x2B8574FAEA21141B(0, "WORLD_HUMAN_SMOKING", 0, 1);
											unk_0xF2CFC6EC8C85FA78(uLocal_74);
											unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
											unk_0x63EF69C6969A3D26(&uLocal_74);
											unk_0x71A535529C1CA5DF(iLocal_72, 1);
											func_73(&uLocal_148, "PRI1AU", "PRI1_THK", 4, 0, 0, 0);
											unk_0xDC21E058EE11964C(iLocal_72);
											iLocal_104 = 1;
										}
										if (func_65())
										{
											if (!unk_0x66599E73DBA5A850(iLocal_72))
											{
												unk_0x909F139DC199D8E0(iLocal_72);
												if (unk_0xE65E1573677B6119(iLocal_72))
												{
													unk_0xDC21E058EE11964C(iLocal_72);
												}
												func_52();
												unk_0x4EDE34FBADD967A6(0);
												func_73(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
												unk_0xCF302B47D4B347F1(iLocal_72, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
												unk_0x71A535529C1CA5DF(iLocal_72, 1);
												unk_0x4EDE34FBADD967A6(0);
											}
											func_92();
										}
										if (!func_89())
										{
											func_16();
										}
										break;
									
									case 7:
										func_15();
										break;
									
									case 9:
										func_13();
										break;
									
									case 10:
										func_10();
										func_8();
										if (!unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
										{
											if (!unk_0xCE4AAA035282336C(uLocal_70))
											{
												uLocal_70 = func_6(Local_86, 1);
											}
											if (func_73(&uLocal_148, "PRI1AU", "PRI1_LOS", 4, 0, 0, 0))
											{
												iLocal_55 = 3;
											}
										}
										if (bLocal_100)
										{
											if (unk_0x7DE17ACDD8BA2642(uLocal_85))
											{
												if (!unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0) || func_5(unk_0xC1A5EC5C986B98AD(), uLocal_85, 1) > 200f)
												{
													unk_0x1EEF71E3CDD868D3(&(uLocal_82[0]));
													unk_0x1EEF71E3CDD868D3(&(uLocal_82[1]));
													unk_0x0E4B6CF706BE8AA4(&uLocal_85);
												}
											}
										}
										if (func_65())
										{
											if (!unk_0x66599E73DBA5A850(iLocal_72))
											{
												unk_0x909F139DC199D8E0(iLocal_72);
												if (unk_0xE65E1573677B6119(iLocal_72))
												{
													unk_0xDC21E058EE11964C(iLocal_72);
												}
												unk_0xCF302B47D4B347F1(iLocal_72, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
												unk_0x71A535529C1CA5DF(iLocal_72, 1);
												func_52();
												unk_0x4EDE34FBADD967A6(0);
												func_73(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
											}
											func_92();
										}
										break;
									
									case 11:
										unk_0xFF2AF80F9EC7704C(0.1f);
										if (unk_0xFBD273FDBCF0C5BD(uLocal_75, 0))
										{
											if (!func_72(iLocal_75))
											{
												if (!iLocal_101)
												{
													if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && !unk_0x3C3D6D026CF7F51B(iLocal_72, 0))
													{
														if (!unk_0x66599E73DBA5A850(iLocal_72))
														{
															if (!iLocal_103)
															{
																func_73(&uLocal_148, "PRI2AU", "PRI2_STEAL", 4, 0, 0, 0);
																iLocal_103 = 1;
															}
															unk_0xD30E9CAE1FEA1C7E(iLocal_72, iLocal_75, -1, -1, 2f, 1, 0);
															unk_0x71A535529C1CA5DF(iLocal_72, 1);
															iLocal_55 = 12;
														}
													}
													if (!unk_0x66599E73DBA5A850(iLocal_72))
													{
														if (((unk_0x7559C38E6535AB89(iLocal_72, unk_0xC1A5EC5C986B98AD(), 1) || (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iLocal_72) && unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))) || (unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iLocal_72) && unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))) || (unk_0xDC58AE028CB223BA(iLocal_75) > 2.5f && unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_75, 0)))
														{
															unk_0xCAC2B0C65B18E755(iLocal_72, unk_0xC1A5EC5C986B98AD(), 0, 16);
															func_52();
															iLocal_101 = 1;
														}
													}
												}
											}
											else
											{
												if (unk_0xCE4AAA035282336C(uLocal_105))
												{
													unk_0x45533C09A6C9B409(&uLocal_105);
												}
												if (!unk_0x66599E73DBA5A850(iLocal_72))
												{
													unk_0xDBC7406226B5540E(&uLocal_74);
													unk_0xCF302B47D4B347F1(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													unk_0xCF302B47D4B347F1(0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
													unk_0xF2CFC6EC8C85FA78(uLocal_74);
													unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
													unk_0x63EF69C6969A3D26(&uLocal_74);
													unk_0x71A535529C1CA5DF(iLocal_72, 1);
													iLocal_55 = 13;
												}
											}
										}
										if (!unk_0x66599E73DBA5A850(iLocal_72))
										{
											if (!unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 150f, 150f, 150f, 0, 1, 0))
											{
												unk_0xDBC7406226B5540E(&uLocal_74);
												unk_0xCF302B47D4B347F1(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												unk_0xCF302B47D4B347F1(0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
												unk_0xF2CFC6EC8C85FA78(uLocal_74);
												unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
												unk_0x63EF69C6969A3D26(&uLocal_74);
												unk_0x71A535529C1CA5DF(iLocal_72, 1);
												iLocal_55 = 13;
											}
										}
										else
										{
											iLocal_55 = 13;
										}
										break;
									
									case 12:
										unk_0xFF2AF80F9EC7704C(0.1f);
										if (!unk_0x66599E73DBA5A850(iLocal_72))
										{
											if (unk_0x7559C38E6535AB89(iLocal_72, unk_0xC1A5EC5C986B98AD(), 1))
											{
												if (unk_0xCE4AAA035282336C(uLocal_105))
												{
													unk_0x3BCF1F6A3573A1DF(uLocal_105, 0);
													unk_0x5CE354E3C73D2002(iLocal_72);
												}
											}
											if (unk_0xFBD273FDBCF0C5BD(iLocal_75, 0))
											{
												if (!func_72(iLocal_75))
												{
													if (unk_0xE0D346789C5160EB(iLocal_72, iLocal_75, 0))
													{
														if (!unk_0x1AFE963DA61006ED(iLocal_75))
														{
															unk_0x85BAE84748AD1A23(iLocal_75, 1, 0);
														}
														unk_0xB8194851FFF54D3B(iLocal_72, iLocal_75, unk_0xC1A5EC5C986B98AD(), 8, 22f, 786469, 1f, 1f, 1);
														unk_0x71A535529C1CA5DF(iLocal_72, 1);
														iLocal_55 = 13;
													}
													else if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_75, 0))
													{
														if (bLocal_110)
														{
															unk_0xCAC2B0C65B18E755(iLocal_72, unk_0xC1A5EC5C986B98AD(), 0, 16);
															func_52();
															iLocal_101 = 1;
															iLocal_55 = 11;
														}
														else
														{
															func_69();
														}
													}
													else if (unk_0xF5F493B789EA063E(iLocal_72, joaat("script_task_enter_vehicle")) != 1 && unk_0xF5F493B789EA063E(iLocal_72, joaat("script_task_enter_vehicle")) != 0)
													{
														if (unk_0xF5F493B789EA063E(iLocal_72, joaat("script_task_combat")) != 1 && unk_0xF5F493B789EA063E(iLocal_72, joaat("script_task_combat")) != 0)
														{
														}
														else
														{
															iLocal_55 = 11;
														}
													}
												}
												else
												{
													if (unk_0xCE4AAA035282336C(uLocal_105))
													{
														unk_0x45533C09A6C9B409(&uLocal_105);
													}
													unk_0xDBC7406226B5540E(&uLocal_74);
													unk_0xCF302B47D4B347F1(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													unk_0xCF302B47D4B347F1(0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
													unk_0xF2CFC6EC8C85FA78(uLocal_74);
													unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
													unk_0x63EF69C6969A3D26(&uLocal_74);
													unk_0x71A535529C1CA5DF(iLocal_72, 1);
													iLocal_55 = 13;
												}
											}
											else
											{
												unk_0xDBC7406226B5540E(&uLocal_74);
												unk_0xCF302B47D4B347F1(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												unk_0xCF302B47D4B347F1(0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
												unk_0xF2CFC6EC8C85FA78(uLocal_74);
												unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
												unk_0x63EF69C6969A3D26(&uLocal_74);
												unk_0x71A535529C1CA5DF(iLocal_72, 1);
												iLocal_55 = 13;
											}
											if (!iLocal_101)
											{
												if (((unk_0x7559C38E6535AB89(iLocal_72, unk_0xC1A5EC5C986B98AD(), 1) || (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iLocal_72) && unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))) || (unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iLocal_72) && unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))) || (unk_0xDC58AE028CB223BA(iLocal_75) > 2.5f && unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_75, 0)))
												{
													unk_0xCAC2B0C65B18E755(iLocal_72, unk_0xC1A5EC5C986B98AD(), 0, 16);
													func_52();
													iLocal_101 = 1;
												}
											}
										}
										else
										{
											iLocal_55 = 13;
										}
										break;
									
									case 13:
										iLocal_96 = 1;
										if (!unk_0x66599E73DBA5A850(iLocal_72))
										{
											if (unk_0xF276A75C8A36B189(iLocal_72))
											{
												func_52();
											}
											if (unk_0x3C3D6D026CF7F51B(iLocal_72, 0))
											{
												if (unk_0xCE4AAA035282336C(uLocal_105))
												{
													unk_0x3BCF1F6A3573A1DF(uLocal_105, 0);
												}
												if (unk_0x091E6E360116B927(unk_0x95DC39736F6748E3(iLocal_72, 0), joaat("towtruck")) || unk_0x091E6E360116B927(unk_0x95DC39736F6748E3(iLocal_72, 0), joaat("towtruck2")))
												{
													uLocal_81 = unk_0xE3A09564BAAE0091(unk_0x95DC39736F6748E3(iLocal_72, 0));
													if (unk_0x7DE17ACDD8BA2642(uLocal_81))
													{
														iLocal_80 = unk_0x4DFB7A1A6909D574(uLocal_81);
														if (!unk_0x055111B11E6624FD(unk_0x95DC39736F6748E3(iLocal_72, 0), 0) && !unk_0x055111B11E6624FD(iLocal_80, 0))
														{
															if (unk_0xF1A395BE96006DEF(unk_0x95DC39736F6748E3(iLocal_72, 0), iLocal_80))
															{
																unk_0x73BDC8A76F32E975(unk_0x95DC39736F6748E3(iLocal_72, 0), iLocal_80);
															}
														}
													}
												}
												if (unk_0x41A76CD3380F7685(unk_0xC1A5EC5C986B98AD(), unk_0x95DC39736F6748E3(iLocal_72, 0)))
												{
													unk_0xDBC7406226B5540E(&uLocal_74);
													unk_0x6FE9A0C01D25F413(0, 0, 0);
													unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
													unk_0xF2CFC6EC8C85FA78(uLocal_74);
													unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
													unk_0x63EF69C6969A3D26(&uLocal_74);
													unk_0x71A535529C1CA5DF(iLocal_72, 1);
												}
												if (!iLocal_113)
												{
													if ((func_1(unk_0x95DC39736F6748E3(iLocal_72, 0)) || !unk_0xFBD273FDBCF0C5BD(unk_0x95DC39736F6748E3(iLocal_72, 0), 0)) || func_72(unk_0x95DC39736F6748E3(iLocal_72, 0)))
													{
														if (unk_0xCE4AAA035282336C(uLocal_105))
														{
															unk_0x3BCF1F6A3573A1DF(uLocal_105, 0);
														}
														unk_0xDBC7406226B5540E(&uLocal_74);
														unk_0xCF302B47D4B347F1(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
														unk_0xCF302B47D4B347F1(0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
														unk_0xF2CFC6EC8C85FA78(uLocal_74);
														unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
														unk_0x63EF69C6969A3D26(&uLocal_74);
														unk_0x71A535529C1CA5DF(iLocal_72, 1);
														iLocal_113 = 1;
													}
												}
												if (!unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 245f, 245f, 245f, 0, 1, 0))
												{
													func_92();
												}
											}
											else if (unk_0xF5F493B789EA063E(iLocal_72, joaat("script_task_perform_sequence")) != 1 && unk_0xF5F493B789EA063E(iLocal_72, joaat("script_task_perform_sequence")) != 0)
											{
												iLocal_55 = 11;
											}
											else if (!unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 200f, 200f, 200f, 0, 1, 0))
											{
												func_16();
											}
										}
										else
										{
											func_16();
										}
										break;
								}
								break;
							
							case 1:
								switch (iLocal_95)
								{
									case 1:
										if (!unk_0x66599E73DBA5A850(iLocal_72))
										{
											unk_0x909F139DC199D8E0(iLocal_72);
											if (unk_0xE65E1573677B6119(iLocal_72))
											{
												unk_0xDC21E058EE11964C(iLocal_72);
											}
											unk_0xCF302B47D4B347F1(iLocal_72, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
											unk_0x71A535529C1CA5DF(iLocal_72, 1);
											unk_0x4EDE34FBADD967A6(0);
											func_92();
										}
										break;
									
									case 2:
										if (!unk_0x66599E73DBA5A850(iLocal_72))
										{
											unk_0x909F139DC199D8E0(iLocal_72);
											if (unk_0xE65E1573677B6119(iLocal_72))
											{
												unk_0xDC21E058EE11964C(iLocal_72);
											}
											unk_0xCF302B47D4B347F1(iLocal_72, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
											unk_0x71A535529C1CA5DF(iLocal_72, 1);
											unk_0x4EDE34FBADD967A6(0);
											func_92();
										}
										break;
									
									case 3:
										if (!unk_0x66599E73DBA5A850(iLocal_72))
										{
											unk_0x909F139DC199D8E0(iLocal_72);
											if (unk_0xE65E1573677B6119(iLocal_72))
											{
												unk_0xDC21E058EE11964C(iLocal_72);
											}
											unk_0xCF302B47D4B347F1(iLocal_72, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
											unk_0x71A535529C1CA5DF(iLocal_72, 1);
											unk_0x4EDE34FBADD967A6(0);
											func_92();
										}
										break;
									
									case 4:
										if (!unk_0x66599E73DBA5A850(iLocal_72))
										{
											unk_0x909F139DC199D8E0(iLocal_72);
											if (unk_0xE65E1573677B6119(iLocal_72))
											{
												unk_0xDC21E058EE11964C(iLocal_72);
											}
											unk_0xCF302B47D4B347F1(iLocal_72, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
											unk_0x71A535529C1CA5DF(iLocal_72, 1);
											unk_0x4EDE34FBADD967A6(0);
											func_92();
										}
										break;
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_176();
		}
	}
}

int func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_4(unk_0xC1A5EC5C986B98AD()) && unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0)) && func_2(iParam0))
	{
		iVar0 = unk_0xE475C458F52F1781();
		if (func_2(iVar0))
		{
			iVar1 = unk_0x504B9BB48D41C264(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0xF1A395BE96006DEF(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_2(int iParam0)
{
	if (func_3(iParam0))
	{
		if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		{
			if (!unk_0x584CD220C093B0B4(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if (func_3(iParam0))
	{
		if (!unk_0x66599E73DBA5A850(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

float func_5(int iParam0, int iParam1, int iParam2)
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
	if (!unk_0x055111B11E6624FD(uParam1, 0))
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Var3, iParam2);
}

var func_6(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7F0C74F83813841D(Param0);
	unk_0x225EB85DBC38E707(uVar0, func_7(unk_0xA26A9A07F761D8F8(), 1f, 1f));
	unk_0xBD91E7D4B770F97E(uVar0, iParam3);
	return uVar0;
}

float func_7(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_8()
{
	if (!unk_0x66599E73DBA5A850(iLocal_72))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (!func_94())
			{
				if (unk_0xF5F493B789EA063E(iLocal_72, joaat("script_task_go_to_entity")) != 1 && unk_0xF5F493B789EA063E(iLocal_72, joaat("script_task_go_to_entity")) != 0)
				{
					unk_0xF41AB1E9C5AC9D70(iLocal_72, unk_0xC1A5EC5C986B98AD(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x3C3D6D026CF7F51B(iLocal_72, 0))
				{
					unk_0x6FE9A0C01D25F413(iLocal_72, 0, 0);
				}
				if (!iLocal_111)
				{
					if (!func_89())
					{
						if (func_9())
						{
							func_73(&uLocal_148, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_73(&uLocal_148, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						iLocal_111 = 1;
					}
				}
			}
			else
			{
				iLocal_111 = 0;
				if (unk_0xF5F493B789EA063E(iLocal_72, joaat("script_task_go_to_entity")) == 1 && unk_0xF5F493B789EA063E(iLocal_72, joaat("script_task_go_to_entity")) == 0)
				{
					unk_0x909F139DC199D8E0(iLocal_72);
				}
			}
		}
	}
}

int func_9()
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

void func_10()
{
	if (!unk_0x66599E73DBA5A850(iLocal_72))
	{
		if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 8f, 8f, 8f, 0, 1, 0))
		{
			if (!unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (unk_0xE0D346789C5160EB(iLocal_72, unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0))
					{
						if (unk_0xCE4AAA035282336C(uLocal_105))
						{
							unk_0x45533C09A6C9B409(&uLocal_105);
						}
						if (iLocal_55 != 10)
						{
							if (!unk_0xCE4AAA035282336C(uLocal_70))
							{
								uLocal_70 = func_6(Local_86, 1);
							}
						}
					}
				}
				else
				{
					if (unk_0xCE4AAA035282336C(uLocal_105))
					{
						unk_0x45533C09A6C9B409(&uLocal_105);
					}
					if (iLocal_55 != 10)
					{
						if (!unk_0xCE4AAA035282336C(uLocal_70))
						{
							uLocal_70 = func_6(Local_86, 1);
						}
					}
				}
			}
			else if (unk_0xCE4AAA035282336C(uLocal_70))
			{
				unk_0x45533C09A6C9B409(&uLocal_70);
			}
		}
		else
		{
			if (!unk_0xCE4AAA035282336C(uLocal_105))
			{
				uLocal_105 = func_11(iLocal_72, 0, 145);
			}
			if (unk_0xCE4AAA035282336C(uLocal_70))
			{
				unk_0x45533C09A6C9B409(&uLocal_70);
			}
		}
	}
}

var func_11(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_12(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE4AAA035282336C(uVar0)) && unk_0x42FA33BDEDF21186(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x4049FDC177C92D4B(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x53B496178AE44636(iParam0);
	if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_7(unk_0xA26A9A07F761D8F8(), 1f, 1f));
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
		unk_0x225EB85DBC38E707(uVar0, func_7(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
		unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_7(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_13()
{
	switch (iLocal_106)
	{
		case 0:
			if (func_14())
			{
				if (unk_0xE65E1573677B6119(iLocal_72))
				{
					unk_0xDC21E058EE11964C(iLocal_72);
				}
				func_52();
				unk_0x4EDE34FBADD967A6(0);
				func_73(&uLocal_148, "PRI1AU", "PRI1_STA", 4, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_106++;
			}
			break;
		
		case 1:
			if (func_14())
			{
				if (unk_0x83666F9FB8FEBD4B() > 500)
				{
					if (unk_0xFBD273FDBCF0C5BD(iLocal_75, 0))
					{
						unk_0x372FFB8B2ADD7C61(iLocal_75, -1f);
						if (unk_0xCE4AAA035282336C(uLocal_70))
						{
							unk_0x45533C09A6C9B409(&uLocal_70);
						}
						iLocal_106++;
					}
				}
			}
			break;
		
		case 2:
			if (func_14())
			{
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0xFBD273FDBCF0C5BD(iLocal_75, 0))
					{
						unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
						unk_0xCFAA9546D1402590(unk_0xC1A5EC5C986B98AD(), iLocal_75, 24, 2000);
						iLocal_106++;
					}
				}
			}
			break;
		
		case 3:
			if (func_14())
			{
				if (unk_0x83666F9FB8FEBD4B() > 4000)
				{
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
					if (unk_0xFBD273FDBCF0C5BD(iLocal_75, 0))
					{
						if (!unk_0x66599E73DBA5A850(iLocal_72))
						{
							unk_0xDC21E058EE11964C(iLocal_72);
							unk_0x372FFB8B2ADD7C61(iLocal_75, 0f);
							unk_0xD99DE4ACE73B0000(iLocal_72, iLocal_75, 320);
							if (!unk_0xCE4AAA035282336C(uLocal_105))
							{
								uLocal_105 = func_11(iLocal_72, 1, 145);
							}
							iLocal_106++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xFBD273FDBCF0C5BD(iLocal_75, 0))
			{
				if (!unk_0x66599E73DBA5A850(iLocal_72) && !unk_0xE0D346789C5160EB(iLocal_72, iLocal_75, 0))
				{
					unk_0xCF302B47D4B347F1(iLocal_72, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
					unk_0x71A535529C1CA5DF(iLocal_72, 1);
					func_52();
					unk_0x4EDE34FBADD967A6(0);
					func_73(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
					iLocal_106++;
				}
			}
			break;
		
		case 5:
			unk_0x4EDE34FBADD967A6(0);
			func_92();
			break;
	}
}

int func_14()
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		iLocal_75 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (unk_0xFBD273FDBCF0C5BD(iLocal_75, 0))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_72))
			{
				if (unk_0x44A6C9475C859B45(iLocal_72, iLocal_75))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_15()
{
	if ((!iLocal_104 && !unk_0x66599E73DBA5A850(iLocal_72)) && unk_0xFBD273FDBCF0C5BD(iLocal_75, 0))
	{
		unk_0xDC21E058EE11964C(iLocal_72);
		unk_0xDBC7406226B5540E(&uLocal_74);
		unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), 5000, 2048, 2);
		unk_0x6FE9A0C01D25F413(0, 0, 0);
		unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
		unk_0x7D9A648CC1936BDA(0, Local_91, 1f, -1, 0.25f, 0, 333.9002f);
		unk_0x2B8574FAEA21141B(0, "WORLD_HUMAN_SMOKING", 0, 1);
		unk_0xF2CFC6EC8C85FA78(uLocal_74);
		unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
		unk_0x63EF69C6969A3D26(&uLocal_74);
		unk_0x71A535529C1CA5DF(iLocal_72, 1);
		unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
		iLocal_104 = 1;
	}
	if (func_65())
	{
		if (!unk_0x66599E73DBA5A850(iLocal_72))
		{
			unk_0x909F139DC199D8E0(iLocal_72);
			if (unk_0xE65E1573677B6119(iLocal_72))
			{
				unk_0xDC21E058EE11964C(iLocal_72);
			}
			unk_0xCF302B47D4B347F1(iLocal_72, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
			unk_0x71A535529C1CA5DF(iLocal_72, 1);
			func_52();
			unk_0x4EDE34FBADD967A6(0);
			func_73(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_92();
	}
	if (!func_89())
	{
		func_16();
	}
}

void func_16()
{
	if (!unk_0x66599E73DBA5A850(iLocal_72))
	{
		unk_0xC5B2830898581862(iLocal_72, 0);
	}
	while (!func_51())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (iLocal_56 == 0)
	{
		func_46(func_50(), 4, 3);
	}
	func_20(22, bLocal_69);
	func_17();
	func_176();
}

void func_17()
{
	func_18();
}

int func_18()
{
	if (func_19(0))
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

int func_19(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_20(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_43(iParam0))
	{
		func_42(iParam0, bParam1);
		if (!func_41(51))
		{
			func_31("RE_REWARD", 1, 0, 4000, 10000, func_34(), 0, 138, 0);
			func_30(51);
		}
		if (func_29(iParam0))
		{
			Global_113648.f_24997.f_2 = 3;
		}
		if (func_28(iParam0, bParam1) != 322)
		{
			func_22(func_28(iParam0, bParam1), Local_50.f_0, Local_50.f_1);
		}
		Global_113636 = bParam1;
		if (Global_113634 == 0)
		{
			if (((Global_113637 == 1 || Global_113637 == 5) || Global_113637 == 11) || Global_113637 == 25)
			{
				func_21(2);
			}
			else if ((Global_113637 == 26 || Global_113637 == 8) || Global_113637 == 17)
			{
				func_21(7);
			}
			else
			{
				func_21(1);
			}
		}
	}
}

void func_21(int iParam0)
{
	Global_113634 = iParam0;
}

void func_22(int iParam0, var uParam1, var uParam2)
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
		func_26((891 + iParam0), 1, -1);
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
		func_23();
	}
}

void func_23()
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
		func_25(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_24() == 2 == 0 && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_18();
				}
			}
		}
	}
}

int func_24()
{
	return Global_32163;
}

int func_25(int iParam0, int iParam1)
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

void func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

int func_27()
{
	return Global_1574918;
}

int func_28(int iParam0, int iParam1)
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

int func_29(int iParam0)
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

void func_30(int iParam0)
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

void func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_32(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_32(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_33();
	}
}

void func_33()
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

int func_34()
{
	func_35();
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

void func_35()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_39(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_38(unk_0xC1A5EC5C986B98AD());
			if (func_37(iVar0) && (!func_36(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_37(Global_113648.f_2365.f_539.f_4321))
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

bool func_36(int iParam0)
{
	return Global_43257 == iParam0;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return func_40(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_40(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

int func_41(int iParam0)
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

void func_42(int iParam0, int iParam1)
{
	unk_0xECDAB41968FF21A8(&(Global_113648.f_24997.f_8[iParam0]), iParam1);
}

int func_43(int iParam0)
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

int func_44()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x688846D56810779A(), 64);
	uVar16 = func_45(Var0);
	return uVar16;
}

int func_45(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_46(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 14192;
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
			if (iVar1 != 14192)
			{
				iVar0 = func_49(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_47(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_47(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_48(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_48(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_49(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_48(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_50()
{
	func_35();
	return Global_113648.f_2365.f_539.f_4321;
}

int func_51()
{
	return 1;
}

void func_52()
{
	Global_20591 = 0;
	func_53();
}

void func_53()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
	}
}

void func_54()
{
	if (unk_0xCE4AAA035282336C(uLocal_70))
	{
		unk_0xBD91E7D4B770F97E(uLocal_70, 0);
		unk_0x45533C09A6C9B409(&uLocal_70);
		if (!unk_0x66599E73DBA5A850(iLocal_72))
		{
			unk_0x8581263F2F024518();
			func_52();
			unk_0x4EDE34FBADD967A6(0);
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_THK", 4, 0, 0, 0))
			{
			}
		}
	}
	if (unk_0x83666F9FB8FEBD4B() > 1000)
	{
		iLocal_55 = 7;
	}
}

void func_55()
{
	struct<3> Var0[4];
	
	func_10();
	func_62();
	func_61();
	func_8();
	if (!iLocal_97 && !iLocal_98)
	{
		if (func_50() == 0)
		{
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_CHAT1", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
		else if (func_50() == 1)
		{
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_CHAT2", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
	}
	if (iLocal_97 && !iLocal_98)
	{
		if (func_50() == 0)
		{
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_CHAT1b", 4, 0, 0, 0))
			{
				iLocal_98 = 1;
			}
		}
		else if (func_50() == 1)
		{
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_CHAT2b", 4, 0, 0, 0))
			{
				iLocal_98 = 1;
			}
		}
	}
	if (iLocal_97 && iLocal_98)
	{
		if (func_50() == 0)
		{
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_CHAT1c", 4, 0, 0, 0))
			{
				iLocal_97 = 0;
			}
		}
		else if (func_50() == 1)
		{
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_CHAT2c", 4, 0, 0, 0))
			{
				iLocal_97 = 0;
			}
		}
	}
	if (func_65())
	{
		if (!unk_0x66599E73DBA5A850(iLocal_72))
		{
			unk_0x909F139DC199D8E0(iLocal_72);
			if (unk_0xE65E1573677B6119(iLocal_72))
			{
				unk_0xDC21E058EE11964C(iLocal_72);
			}
			unk_0xCF302B47D4B347F1(iLocal_72, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
			unk_0x71A535529C1CA5DF(iLocal_72, 1);
			func_52();
			unk_0x4EDE34FBADD967A6(0);
			func_73(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_92();
	}
	if (func_60(unk_0xC1A5EC5C986B98AD(), Local_59, 1) > 200f)
	{
		if (!bLocal_100)
		{
			Var0[0 /*3*/] = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) - Vector(0f, 9f, 0f) };
			unk_0xD150D18ADFDC5159(Var0[0 /*3*/], 0, &(Var0[0 /*3*/]), 0);
			Var0[1 /*3*/] = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) + Vector(0f, 9f, 0f) };
			unk_0xD150D18ADFDC5159(Var0[1 /*3*/], 0, &(Var0[1 /*3*/]), 0);
			Var0[2 /*3*/] = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) - Vector(0f, 0f, 9f) };
			unk_0xD150D18ADFDC5159(Var0[2 /*3*/], 0, &(Var0[2 /*3*/]), 0);
			Var0[3 /*3*/] = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) + Vector(0f, 0f, 9f) };
			unk_0xD150D18ADFDC5159(Var0[3 /*3*/], 0, &(Var0[3 /*3*/]), 0);
			if (!unk_0x67670574D396B9A8(Var0[0 /*3*/], 3f))
			{
				uLocal_85 = unk_0xABEEDBEF2BBDF5B3(joaat("sheriff"), Var0[0 /*3*/], func_58(Var0[0 /*3*/], func_59(unk_0x93E99A2DBCBA9CFA())), 1, 1, 0);
				uLocal_82[0] = unk_0x4FA078B1B32445FD(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = unk_0x4FA078B1B32445FD(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				unk_0xCBDC2B59922F92C3(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xCBDC2B59922F92C3(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xE2C528FAB670225B(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
				bLocal_100 = true;
			}
			else if (!unk_0x67670574D396B9A8(Var0[1 /*3*/], 3f))
			{
				uLocal_85 = unk_0xABEEDBEF2BBDF5B3(joaat("sheriff"), Var0[1 /*3*/], func_58(Var0[1 /*3*/], func_59(unk_0x93E99A2DBCBA9CFA())), 1, 1, 0);
				uLocal_82[0] = unk_0x4FA078B1B32445FD(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = unk_0x4FA078B1B32445FD(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				unk_0xCBDC2B59922F92C3(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xCBDC2B59922F92C3(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xE2C528FAB670225B(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
				bLocal_100 = true;
			}
			else if (!unk_0x67670574D396B9A8(Var0[2 /*3*/], 3f))
			{
				uLocal_85 = unk_0xABEEDBEF2BBDF5B3(joaat("sheriff"), Var0[2 /*3*/], func_58(Var0[2 /*3*/], func_59(unk_0x93E99A2DBCBA9CFA())), 1, 1, 0);
				uLocal_82[0] = unk_0x4FA078B1B32445FD(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = unk_0x4FA078B1B32445FD(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				unk_0xCBDC2B59922F92C3(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xCBDC2B59922F92C3(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xE2C528FAB670225B(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
				bLocal_100 = true;
			}
			else if (!unk_0x67670574D396B9A8(Var0[3 /*3*/], 3f))
			{
				uLocal_85 = unk_0xABEEDBEF2BBDF5B3(joaat("sheriff"), Var0[3 /*3*/], func_58(Var0[3 /*3*/], func_59(unk_0x93E99A2DBCBA9CFA())), 1, 1, 0);
				uLocal_82[0] = unk_0x4FA078B1B32445FD(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = unk_0x4FA078B1B32445FD(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				unk_0xCBDC2B59922F92C3(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xCBDC2B59922F92C3(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xE2C528FAB670225B(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
				bLocal_100 = true;
			}
		}
	}
	if (!unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), unk_0x30BE8A934C020461(iLocal_79, 0), 10f, 10f, 10f, 0, 0, 0) || unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		func_57();
	}
	if (!unk_0x66599E73DBA5A850(iLocal_72))
	{
		if (((!unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0) && unk_0x9DC9E896F189AAA5(iLocal_72, 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, 1, 0)) && unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, 1, 0)) || (unk_0x1C4E4DC1EFE24DF1(iLocal_72, Local_86, Global_19, 1, 1, 0) && func_56(1, 0, 1)))
		{
			unk_0xC1B1E9A034A63A62(0);
			if (func_14())
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					unk_0xC8927C3AD7C5D2E1(unk_0xE475C458F52F1781(), 10.5f, 2, 0);
				}
				unk_0x8581263F2F024518();
				iLocal_55 = 5;
			}
			else
			{
				iLocal_55 = 6;
			}
		}
	}
}

int func_56(bool bParam0, bool bParam1, bool bParam2)
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

void func_57()
{
	struct<3> Var0;
	
	Var0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
	if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		if (func_14())
		{
			func_52();
			unk_0x4EDE34FBADD967A6(0);
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				iLocal_55 = 10;
			}
		}
		else if (unk_0x7419F07EFCC23990((Var0.f_0 - 50f), (Var0.f_1 - 50f), (Var0.f_2 - 50f), (Var0.f_0 + 50f), (Var0.f_1 + 50f), (Var0.f_2 + 50f)))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_72))
			{
				unk_0x909F139DC199D8E0(iLocal_72);
				if (unk_0xE65E1573677B6119(iLocal_72))
				{
					unk_0xDC21E058EE11964C(iLocal_72);
				}
				unk_0xCF302B47D4B347F1(iLocal_72, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
				unk_0x71A535529C1CA5DF(iLocal_72, 1);
				unk_0x4EDE34FBADD967A6(0);
			}
			func_92();
		}
	}
	else if (func_14())
	{
		if (unk_0x7419F07EFCC23990((Var0.f_0 - 10f), (Var0.f_1 - 10f), (Var0.f_2 - 10f), (Var0.f_0 + 10f), (Var0.f_1 + 10f), (Var0.f_2 + 10f)))
		{
			func_52();
			unk_0x4EDE34FBADD967A6(0);
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 3, 0);
				unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
				unk_0x76F55D446E8193C3(unk_0x93E99A2DBCBA9CFA(), 0f);
				if (unk_0xCE4AAA035282336C(uLocal_70))
				{
					unk_0x45533C09A6C9B409(&uLocal_70);
				}
				iLocal_55 = 10;
			}
		}
	}
	else if (unk_0x7419F07EFCC23990((Var0.f_0 - 10f), (Var0.f_1 - 10f), (Var0.f_2 - 10f), (Var0.f_0 + 10f), (Var0.f_1 + 10f), (Var0.f_2 + 10f)))
	{
		if (!unk_0x66599E73DBA5A850(iLocal_72))
		{
			unk_0x909F139DC199D8E0(iLocal_72);
			if (unk_0xE65E1573677B6119(iLocal_72))
			{
				unk_0xDC21E058EE11964C(iLocal_72);
			}
			unk_0xCF302B47D4B347F1(iLocal_72, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
			unk_0x71A535529C1CA5DF(iLocal_72, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
		func_92();
	}
}

var func_58(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x06A2A02CDC68090B((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_59(int iParam0)
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iParam0), 0);
}

float func_60(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Param1, iParam4);
}

void func_61()
{
	if (!unk_0x66599E73DBA5A850(iLocal_72))
	{
		if (unk_0x4FBDBA15B9C41492(iLocal_72))
		{
			if (!iLocal_142)
			{
				iLocal_143 = unk_0xA5E11AF0A2B928C1();
				iLocal_142 = 1;
			}
			else
			{
				iLocal_144 = unk_0xA5E11AF0A2B928C1();
			}
		}
		else
		{
			iLocal_142 = 0;
		}
	}
	if ((iLocal_144 - iLocal_143) > 120000)
	{
		if (!unk_0x66599E73DBA5A850(iLocal_72))
		{
			if (unk_0xE65E1573677B6119(iLocal_72))
			{
				if (func_73(&uLocal_148, "PRI1AU", "PRI1_WLK", 4, 0, 0, 0))
				{
					unk_0xDC21E058EE11964C(iLocal_72);
					func_92();
				}
			}
		}
	}
}

void func_62()
{
	if (unk_0x63E1343737CA1E47(unk_0xC1A5EC5C986B98AD()))
	{
		if (!iLocal_145)
		{
			iLocal_146 = unk_0xA5E11AF0A2B928C1();
			iLocal_145 = 1;
		}
		else
		{
			iLocal_147 = unk_0xA5E11AF0A2B928C1();
		}
	}
	else
	{
		iLocal_145 = 0;
	}
	if ((iLocal_147 - iLocal_146) > 60000)
	{
		if (!unk_0x66599E73DBA5A850(iLocal_72))
		{
			if (unk_0xE65E1573677B6119(iLocal_72))
			{
				if (func_73(&uLocal_148, "PRI1AU", "PRI1_SLO", 4, 0, 0, 0))
				{
					unk_0xDC21E058EE11964C(iLocal_72);
					func_92();
				}
			}
		}
	}
}

int func_63()
{
	if (!unk_0x66599E73DBA5A850(iLocal_72))
	{
		if (unk_0xE65E1573677B6119(iLocal_72))
		{
			if ((((((((unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_114, 50f, 50f, 50f, 0, 1, 0) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_117, 50f, 50f, 50f, 0, 1, 0)) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_120, 50f, 50f, 50f, 0, 1, 0)) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_123, 50f, 50f, 50f, 0, 1, 0)) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_126, 50f, 50f, 50f, 0, 1, 0)) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_129, 50f, 50f, 50f, 0, 1, 0)) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_132, 50f, 50f, 50f, 0, 1, 0)) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_135, 50f, 50f, 50f, 0, 1, 0)) || func_60(unk_0xC1A5EC5C986B98AD(), Local_138, 1) < 205f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_64()
{
	if (!unk_0x66599E73DBA5A850(iLocal_72) && func_94())
	{
		if (unk_0xFBD273FDBCF0C5BD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0))
		{
			if (unk_0x44A6C9475C859B45(unk_0xC1A5EC5C986B98AD(), unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) && unk_0x44A6C9475C859B45(iLocal_72, unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
			{
				unk_0xC1B1E9A034A63A62(0);
				if (!unk_0xE65E1573677B6119(iLocal_72))
				{
					unk_0xF8463C9FBA8DCD46(iLocal_72, unk_0x2165FE3E3189DC71(unk_0x93E99A2DBCBA9CFA()));
					unk_0x04099862985008A1(iLocal_72, 0);
					unk_0x8E34561476C30D6C(iLocal_72, 1);
				}
				if (iLocal_56 == 0)
				{
					if (!func_89())
					{
						if (func_73(&uLocal_148, "PRI1AU", "PRI1_CH", 4, 0, 0, 0))
						{
							if (!unk_0xCE4AAA035282336C(uLocal_70))
							{
								uLocal_70 = func_6(Local_86, 1);
							}
							unk_0x061B1200C95204CB(&uLocal_94, 3);
							iLocal_96 = 1;
							iLocal_55 = 3;
						}
					}
				}
				else if (iLocal_56 == 1)
				{
					if (func_50() == 0)
					{
						func_73(&uLocal_148, "PRI2AU", "PRI2_WHTM", 4, 0, 0, 0);
					}
					else if (func_50() == 1)
					{
						func_73(&uLocal_148, "PRI2AU", "PRI2_WHTF", 4, 0, 0, 0);
					}
					else if (func_50() == 2)
					{
						func_73(&uLocal_148, "PRI2AU", "PRI2_WHTT", 4, 0, 0, 0);
					}
					unk_0x474AA9EF29305EA8(iLocal_72, 2, 1);
					iLocal_55 = 3;
				}
			}
		}
	}
}

int func_65()
{
	int iVar0;
	
	if (!unk_0x66599E73DBA5A850(iLocal_72))
	{
		if (unk_0xFBD273FDBCF0C5BD(unk_0xE475C458F52F1781(), 0))
		{
			if (unk_0x7559C38E6535AB89(iLocal_72, unk_0xE475C458F52F1781(), 1))
			{
				func_52();
				return 1;
			}
		}
		if (unk_0x7559C38E6535AB89(iLocal_72, unk_0xC1A5EC5C986B98AD(), 1))
		{
			func_52();
			return 1;
		}
		if (!unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 250f, 250f, 250f, 0, 1, 0))
		{
			return 1;
		}
		if (iLocal_56 == 0)
		{
			iVar0 = 0;
			if (func_68())
			{
				iVar0 = 0;
				while (iVar0 < func_67())
				{
					if (unk_0x7559C38E6535AB89(func_66(iVar0), unk_0xC1A5EC5C986B98AD(), 0))
					{
						if (unk_0x3C6D9801F427CC2E(unk_0x9C8D7679C15E75FF(func_66(iVar0))) == -1865950624)
						{
							return 1;
						}
					}
					iVar0++;
				}
			}
		}
		if (iLocal_55 < 2)
		{
			if (unk_0x66681C67B07D3657(iLocal_72, 126))
			{
				return 1;
			}
			if (iLocal_56 == 0)
			{
				if (unk_0x7DE17ACDD8BA2642(iLocal_79))
				{
					if (((unk_0x06EADAF3FF0C6092(unk_0x30BE8A934C020461(iLocal_79, 0) + Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), unk_0x30BE8A934C020461(iLocal_79, 0) + Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f)) || unk_0x06EADAF3FF0C6092(unk_0x30BE8A934C020461(iLocal_79, 0) - Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), unk_0x30BE8A934C020461(iLocal_79, 0) - Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f))) || unk_0x06EADAF3FF0C6092(unk_0x30BE8A934C020461(iLocal_79, 0) + Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), unk_0x30BE8A934C020461(iLocal_79, 0) + Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f))) || unk_0x06EADAF3FF0C6092(unk_0x30BE8A934C020461(iLocal_79, 0) - Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), unk_0x30BE8A934C020461(iLocal_79, 0) - Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f)))
					{
						unk_0xC6C9BF71106ABCAC(iLocal_72, unk_0xC1A5EC5C986B98AD(), 1000f, -1, 0, 0);
						unk_0x71A535529C1CA5DF(iLocal_72, 1);
						return 1;
					}
				}
			}
			else if (iLocal_56 == 1)
			{
				if (unk_0x06EADAF3FF0C6092(unk_0x30BE8A934C020461(iLocal_72, 0) - Vector(70f, 70f, 70f), unk_0x30BE8A934C020461(iLocal_72, 0) + Vector(70f, 70f, 70f)))
				{
					return 1;
				}
			}
			if (unk_0x612907CF3208D1E3(unk_0x30BE8A934C020461(iLocal_72, 1), 20f, 1))
			{
				return 1;
			}
			if ((unk_0xD18D609DAEB32038(unk_0x30BE8A934C020461(iLocal_72, 1) - Vector(15f, 15f, 15f), unk_0x30BE8A934C020461(iLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), 1) || unk_0xD18D609DAEB32038(unk_0x30BE8A934C020461(iLocal_72, 1) - Vector(15f, 15f, 15f), unk_0x30BE8A934C020461(iLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), 1)) || unk_0xD18D609DAEB32038(unk_0x30BE8A934C020461(iLocal_72, 1) - Vector(15f, 15f, 15f), unk_0x30BE8A934C020461(iLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), 1))
			{
				return 1;
			}
			if (unk_0x5D9976AAFD4BC43E(unk_0x30BE8A934C020461(iLocal_72, 1), 3f))
			{
				return 1;
			}
			if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
			{
				return 1;
			}
			if ((unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 20f, 20f, 8f, 0, 1, 0) && unk_0xA1DF058198143448(iLocal_72, unk_0xC1A5EC5C986B98AD())) && unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
			{
				if (unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iLocal_72) || unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iLocal_72))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		func_52();
		return 1;
	}
	return 0;
}

var func_66(int iParam0)
{
	return Global_55613.f_25[iParam0];
}

int func_67()
{
	return Global_55613.f_24;
}

bool func_68()
{
	return Global_55613.f_24 > 0;
}

void func_69()
{
	if (unk_0xFBD273FDBCF0C5BD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0))
	{
		if (!unk_0x66599E73DBA5A850(iLocal_72))
		{
			if (!func_89())
			{
				if (func_9())
				{
					func_73(&uLocal_148, "PRI2AU", "PRI2_THREAT", 4, 0, 0, 0);
				}
				else
				{
					func_73(&uLocal_148, "PRI2AU", "PRI2_HIJ", 4, 0, 0, 0);
				}
				if (unk_0xCE4AAA035282336C(uLocal_105))
				{
					unk_0x3BCF1F6A3573A1DF(uLocal_105, false);
				}
				unk_0x909F139DC199D8E0(iLocal_72);
				unk_0xDBC7406226B5540E(&uLocal_74);
				unk_0xFD42C7B0CE08BA68(0, unk_0xC1A5EC5C986B98AD(), 500, 1);
				unk_0x65A0C2755CA8C14E(0, unk_0xC1A5EC5C986B98AD(), unk_0xC1A5EC5C986B98AD(), 1f, 0, 1f, 0.5f, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xD30E9CAE1FEA1C7E(0, unk_0xE475C458F52F1781(), -1, -1, 2f, 9, 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_74);
				unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
				unk_0x63EF69C6969A3D26(&uLocal_74);
				unk_0xC1B1E9A034A63A62(0);
				bLocal_110 = true;
				iLocal_55 = 11;
			}
		}
	}
}

float func_70(var uParam0, int iParam1)
{
	return func_5(uParam0, iParam1, 1);
}

int func_71()
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		iLocal_75 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (unk_0xFBD273FDBCF0C5BD(iLocal_75, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0)
{
	if ((((unk_0x248929CB6622481D(iParam0, 0, 3000) || unk_0x584CD220C093B0B4(iParam0)) || unk_0xE2D062C14C126762(unk_0x30BE8A934C020461(iParam0, 0), 5f) > 0) || unk_0xE0AC9A4743F9BD05(iParam0, joaat("weapon_molotov"), 0)) || unk_0xD18D609DAEB32038(unk_0x30BE8A934C020461(iParam0, 0) - Vector(5f, 5f, 5f), unk_0x30BE8A934C020461(iParam0, 0) + Vector(5f, 5f, 5f), joaat("weapon_molotov"), 0))
	{
		return 1;
	}
	return 0;
}

bool func_73(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_74(sParam2, iParam3, 0);
}

int func_74(char* sParam0, int iParam1, bool bParam2)
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
					func_87();
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
		if (func_86(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_85();
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
				func_84();
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
				if (func_83())
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
			if (func_82())
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
			func_81();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_80();
		func_75();
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
		func_87();
	}
	return 0;
}

void func_75()
{
	if (!func_76())
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

int func_76()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_79())
	{
		return 0;
	}
	if (func_77(unk_0x93E99A2DBCBA9CFA()))
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

bool func_77(int iParam0)
{
	return func_78(iParam0, 20);
}

var func_78(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_79()
{
	return -1;
}

void func_80()
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

void func_81()
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

int func_82()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_83()
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

void func_84()
{
	if (func_36(14))
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
		Global_20383 = func_50();
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

void func_85()
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

bool func_86(int iParam0, int iParam1)
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

void func_87()
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

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_89()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

void func_90()
{
	if (!unk_0x055111B11E6624FD(iLocal_79, 0))
	{
		if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_79, 0) && !unk_0x9CFCDD9C62B56708(iLocal_79, -1, 0))
		{
			unk_0x61D5783E7F429B70(iLocal_79, 60000f);
			unk_0x2AAEAFA8BCFF931F(iLocal_79);
		}
	}
}

void func_91()
{
	switch (iLocal_108)
	{
		case 0:
			if (!unk_0x66599E73DBA5A850(iLocal_72))
			{
				if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
				{
					if (unk_0xDC58AE028CB223BA(unk_0xC1A5EC5C986B98AD()) < 2.5f || !(unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_72, 15f, 15f, 8f, 0, 1, 0)))
					{
						unk_0xDBC7406226B5540E(&uLocal_74);
						unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), 30000, 2050, 2);
						unk_0xF41AB1E9C5AC9D70(0, unk_0xC1A5EC5C986B98AD(), -1, 2f, 1f, 1073741824, 0);
						unk_0xF2CFC6EC8C85FA78(uLocal_74);
						unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
						unk_0x63EF69C6969A3D26(&uLocal_74);
						if (func_73(&uLocal_148, "PRI1AU", "PRI1_ASK", 4, 0, 0, 0))
						{
							bLocal_99 = true;
							iLocal_108++;
						}
					}
				}
			}
			break;
		
		case 1:
			func_93(&uLocal_107);
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
			{
				if (func_94())
				{
					iLocal_75 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
					if (unk_0xDC58AE028CB223BA(iLocal_75) < 9f)
					{
						if (!unk_0x66599E73DBA5A850(iLocal_72))
						{
							if (unk_0xEAEF747543427AC5(iLocal_72, iLocal_75, 20f, 20f, 5f, 0, 1, 0))
							{
								iLocal_108++;
							}
						}
					}
				}
				else if (!bLocal_110)
				{
					fLocal_109 = func_5(iLocal_72, unk_0xC1A5EC5C986B98AD(), 1);
					unk_0xDBC7406226B5540E(&uLocal_74);
					unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), 7000, 2048, 2);
					unk_0xF41AB1E9C5AC9D70(0, unk_0xC1A5EC5C986B98AD(), -1, (fLocal_109 - 3f), 1f, 1073741824, 0);
					unk_0xF2CFC6EC8C85FA78(uLocal_74);
					unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
					unk_0x63EF69C6969A3D26(&uLocal_74);
					if (!func_89())
					{
						if (func_9())
						{
							func_73(&uLocal_148, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_73(&uLocal_148, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						bLocal_110 = true;
						bLocal_99 = true;
					}
				}
			}
			break;
		
		case 2:
			func_93(&uLocal_107);
			if (!iLocal_112)
			{
				if (unk_0xDC58AE028CB223BA(unk_0xC1A5EC5C986B98AD()) < 2.5f)
				{
					if (!unk_0x66599E73DBA5A850(iLocal_72))
					{
						unk_0x909F139DC199D8E0(iLocal_72);
						unk_0x2185DF9550ADAE3F(iLocal_72, iLocal_75, -1, 0, 1f);
						iLocal_112 = 1;
					}
				}
				if (!func_89())
				{
					if (!unk_0x66599E73DBA5A850(iLocal_72))
					{
						unk_0x909F139DC199D8E0(iLocal_72);
						unk_0x2185DF9550ADAE3F(iLocal_72, iLocal_75, -1, 0, 1f);
						iLocal_112 = 1;
					}
				}
			}
			if (func_94())
			{
				iLocal_75 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				if (unk_0xDC58AE028CB223BA(iLocal_75) < 2.5f)
				{
					if (unk_0x1C4E4DC1EFE24DF1(iLocal_75, unk_0x30BE8A934C020461(iLocal_72, 1), 20f, 20f, 5f, 0, 1, 0))
					{
						if (iLocal_56 == 0)
						{
							if (!func_89())
							{
								if (func_50() == 0)
								{
									if (func_9())
									{
										func_73(&uLocal_148, "PRI1AU", "PRI1_GETONM", 4, 0, 0, 0);
									}
									else
									{
										func_73(&uLocal_148, "PRI1AU", "PRI1_JIM", 4, 0, 0, 0);
									}
								}
								else if (func_50() == 1)
								{
									if (func_9())
									{
										func_73(&uLocal_148, "PRI1AU", "PRI1_GETONF", 4, 0, 0, 0);
									}
									else
									{
										func_73(&uLocal_148, "PRI1AU", "PRI1_JIF", 4, 0, 0, 0);
									}
								}
								else if (func_50() == 2)
								{
									func_73(&uLocal_148, "PRI1AU", "PRI1_JIT", 4, 0, 0, 0);
								}
								iLocal_108++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_94())
			{
				iLocal_75 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				if (unk_0xDC58AE028CB223BA(iLocal_75) < 0.5f)
				{
					if (!unk_0x66599E73DBA5A850(iLocal_72))
					{
						unk_0x909F139DC199D8E0(iLocal_72);
						if (!unk_0xE65E1573677B6119(iLocal_72))
						{
							unk_0xF8463C9FBA8DCD46(iLocal_72, unk_0x2165FE3E3189DC71(unk_0x93E99A2DBCBA9CFA()));
							unk_0x04099862985008A1(iLocal_72, 0);
							unk_0x8E34561476C30D6C(iLocal_72, 1);
						}
						iLocal_108++;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_56 == 0)
			{
				if (!func_89())
				{
					if (func_73(&uLocal_148, "PRI1AU", "PRI1_SH", 4, 0, 0, 0))
					{
						iLocal_108++;
					}
				}
			}
			else
			{
				iLocal_108++;
			}
			break;
		
		case 5:
			if (func_94())
			{
				if (unk_0xFBD273FDBCF0C5BD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0))
				{
					if (!unk_0x66599E73DBA5A850(iLocal_72))
					{
						if (unk_0x44A6C9475C859B45(iLocal_72, unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
						{
							if (unk_0xCE4AAA035282336C(uLocal_105))
							{
								unk_0x45533C09A6C9B409(&uLocal_105);
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			else
			{
				func_8();
			}
			break;
	}
}

void func_92()
{
	func_176();
}

void func_93(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (!unk_0x66599E73DBA5A850(iLocal_72))
			{
				if (!unk_0xD495130AEF425591(iLocal_72, unk_0xC1A5EC5C986B98AD(), 90f))
				{
					unk_0x06A2A5F6A6959BE7(iLocal_72, unk_0xC1A5EC5C986B98AD(), 0);
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (!unk_0x66599E73DBA5A850(iLocal_72))
			{
				if (unk_0xD495130AEF425591(iLocal_72, unk_0xC1A5EC5C986B98AD(), 90f))
				{
					*uParam0++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x66599E73DBA5A850(iLocal_72))
			{
				if (!unk_0xD495130AEF425591(iLocal_72, unk_0xC1A5EC5C986B98AD(), 90f))
				{
					*uParam0 = 0;
				}
			}
			break;
	}
}

int func_94()
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (unk_0x7DE17ACDD8BA2642(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
		{
			if ((((((!unk_0x6AE0E79C82A558ED(unk_0xC1A5EC5C986B98AD()) && !unk_0xB076EA895B1A6BEC(unk_0xC1A5EC5C986B98AD())) && !unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD())) && !unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD())) && !unk_0x81F36522FE1E02B8(unk_0xC1A5EC5C986B98AD())) && !unk_0x27368BFBD4421C85(unk_0xC1A5EC5C986B98AD())) && !unk_0xCC4A4E244DA78599(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
			{
				if (unk_0x2E240694D642679A(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_95()
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		iLocal_75 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if ((unk_0xFBD273FDBCF0C5BD(iLocal_75, 0) && !unk_0x66599E73DBA5A850(iLocal_72)) && !bLocal_99)
		{
			fLocal_109 = func_5(iLocal_72, unk_0xC1A5EC5C986B98AD(), 1);
			if (fLocal_109 > 5f)
			{
				fLocal_109 = (fLocal_109 - 2.5f);
			}
			else
			{
				fLocal_109 = (fLocal_109 - 1f);
			}
			unk_0x909F139DC199D8E0(iLocal_72);
			unk_0xDBC7406226B5540E(&uLocal_74);
			if (iLocal_56 == 0)
			{
				unk_0xEDB03CCB50D11479(0, iLocal_75, 10000, 2048, 2);
				unk_0x3EE48ADC8C7F5CC4(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0x65A0C2755CA8C14E(0, unk_0xC1A5EC5C986B98AD(), unk_0xC1A5EC5C986B98AD(), 1f, 0, fLocal_109, 1f, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else if (iLocal_56 == 1)
			{
				unk_0xEDB03CCB50D11479(0, iLocal_75, 10000, 2052, 2);
				unk_0x3EE48ADC8C7F5CC4(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0xCF2A28DE0B1118AA(0, unk_0xC1A5EC5C986B98AD(), -1f, 0f, 0f, 1f, -1, 0.5f, 1);
			}
			unk_0xF2CFC6EC8C85FA78(uLocal_74);
			unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
			unk_0x63EF69C6969A3D26(&uLocal_74);
			if (iLocal_56 == 0)
			{
				func_73(&uLocal_148, "PRI1AU", "PRI1_STO", 4, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				bLocal_99 = true;
			}
			else if (iLocal_56 == 1)
			{
				if (func_73(&uLocal_148, "PRI2AU", "PRI2_STO", 4, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					bLocal_99 = true;
				}
			}
		}
	}
}

void func_96(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_112704, unk_0x688846D56810779A(), 24);
		Global_112698 = 1;
	}
	else
	{
		StringCopy(&Global_112704, "NULL", 24);
		Global_112698 = 0;
	}
}

int func_97(int iParam0)
{
	if (func_101())
	{
		Global_113638 = 1;
		Global_113635 = unk_0xA5E11AF0A2B928C1();
		if (func_29(Global_113637))
		{
			func_98(0);
		}
		unk_0x97DBA2AA6C70AFC7(1, "RE_TITLE");
		if (iParam0 && func_29(Global_113637))
		{
			unk_0x01680CFD15C1C85D();
		}
		return 1;
	}
	return 0;
}

void func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_99(func_100(iParam0), -1);
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
					func_99(func_100(iParam0), -1);
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
					func_99(func_100(iParam0), -1);
					Global_113648.f_24997.f_4++;
					unk_0xECDAB41968FF21A8(&Global_113644, 2);
				}
			}
			break;
	}
}

void func_99(var uParam0, int iParam1)
{
	unk_0x476CC3711883B966(uParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

char* func_100(int iParam0)
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

int func_101()
{
	switch (func_102(&Global_32223, 0, 5, 0, unk_0xAF908D5E2416DA93()))
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

int func_102(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_106(0))
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
		if (!func_104(iParam2))
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
			func_103(uParam0, iParam4);
		}
	}
	return 2;
}

void func_103(var uParam0, int iParam1)
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

bool func_104(int iParam0)
{
	return func_105(iParam0, Global_43257);
}

int func_105(int iParam0, int iParam1)
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

int func_106(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_104(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_107()
{
	if (unk_0xCE4AAA035282336C(uLocal_71))
	{
		unk_0x45533C09A6C9B409(&uLocal_71);
	}
	if (!unk_0xCE4AAA035282336C(uLocal_105))
	{
		uLocal_105 = func_11(iLocal_72, 0, 145);
		unk_0xA4B6A532E7DDE178(uLocal_105, 0);
	}
}

void func_108()
{
	var uVar0;
	var uVar1[2];
	
	func_110(39, 1);
	func_110(40, 1);
	func_110(41, 1);
	func_110(42, 1);
	func_110(43, 1);
	func_110(44, 1);
	unk_0x436EC806292A3DB8(3, 0);
	unk_0x436EC806292A3DB8(5, 0);
	unk_0x436EC806292A3DB8(11, 0);
	iLocal_72 = unk_0x69FDD9508259E5B5(26, iLocal_90, Local_76, fLocal_89, 1, 1);
	unk_0xC5B2830898581862(iLocal_72, 1);
	unk_0x598D91BBD045C1F3(iLocal_72, 134, 1);
	unk_0x598D91BBD045C1F3(iLocal_72, 137, 1);
	unk_0xDA95D0C19E737224("PedPrisoner", &iLocal_73);
	unk_0x8386356641D0DED1(iLocal_72, iLocal_73);
	unk_0x0133FF6E23A1DCA4(5, joaat("COP"), iLocal_73);
	unk_0x0133FF6E23A1DCA4(5, iLocal_73, joaat("COP"));
	unk_0x3EE48ADC8C7F5CC4(iLocal_72, "random@prisoner_lift", "loop2_idlelook2", 2f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0xCFFDA1550DF82B52(iLocal_72, 0);
	unk_0x7FE5E05BE63F6CB8(iLocal_72, 8, 0);
	unk_0x474AA9EF29305EA8(iLocal_72, 128, 1);
	unk_0x474AA9EF29305EA8(iLocal_72, 2, 1);
	unk_0x474AA9EF29305EA8(iLocal_72, 1, 0);
	unk_0xECDAB41968FF21A8(&uLocal_94, 3);
	unk_0xECDAB41968FF21A8(&uLocal_94, 5);
	unk_0xECDAB41968FF21A8(&uLocal_94, 0);
	if (iLocal_56 == 0)
	{
		unk_0xEE72EF85581D1171(iLocal_72, "REPRI1Lost");
		func_109(&uLocal_148, 3, iLocal_72, "REPRI1Lost", 0, 1);
		unk_0x6FCA8E220FB1053D(Local_76, 50f, 0);
		unk_0xF82BC5193AF62796(Local_76, 10f, 0, 0, 0, 0);
		unk_0x54ECDA2DAB9CFB10(Local_76 - Vector(50f, 50f, 50f), Local_76 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		unk_0x54ECDA2DAB9CFB10(Local_86 - Vector(10f, 10f, 10f), Local_86 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
		unk_0x8E09E8C52602EBB2(Local_76 - Vector(10f, 10f, 10f), Local_76 + Vector(10f, 10f, 10f), 0, 1);
		unk_0x0133FF6E23A1DCA4(1, iLocal_73, -1865950624);
		unk_0x0133FF6E23A1DCA4(1, -1865950624, iLocal_73);
		unk_0x7FE5E05BE63F6CB8(iLocal_72, 17, 1);
		iLocal_79 = unk_0xABEEDBEF2BBDF5B3(joaat("sheriff"), 1524.332f, 2173.347f, 79.0619f, 201.6806f, 1, 1, 0);
		unk_0xA598BD64B909AA08(iLocal_79, 0f);
		unk_0xADDC2DFB04C3C0E9(iLocal_79, 4, 0, 0);
		unk_0xDB4B909E3B4F9279(iLocal_79, 0, 0, 1148846080);
		unk_0xF21DDB900A31AF6D(iLocal_79, 0);
		unk_0x70ED307FBC2CD399(1525.566f, 2172.512f, 80.1985f, 1524.423f, 2173.894f, 80.1342f, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
		uVar0 = unk_0x4FA078B1B32445FD(iLocal_79, 26, joaat("s_m_y_ranger_01"), -1, 1, 1);
		unk_0x598D91BBD045C1F3(uVar0, 326, 1);
		unk_0xED2BD879E739E86B(iVar0, 99, 0);
		unk_0x20A91EB10354FFBE(iVar0, 1);
		uVar1[0] = unk_0xABEEDBEF2BBDF5B3(joaat("ratloader"), 1527.4f, 2240.33f, 73.8459f, 216.8133f, 1, 1, 0);
		uVar1[1] = unk_0xABEEDBEF2BBDF5B3(joaat("bfinjection"), 1594.093f, 2198.657f, 77.8709f, 85.3536f, 1, 1, 0);
		unk_0xCB8DD5B44DBC2DEB(uVar1[0], 1084227584);
		unk_0xCB8DD5B44DBC2DEB(uVar1[1], 1084227584);
	}
	else if (iLocal_56 == 1)
	{
		unk_0x9D0EAD95433304CA(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 0, 0, 1);
		unk_0xEE72EF85581D1171(iLocal_72, "G_M_Y_STREETPUNK02_BLACK_MINI_04");
		func_109(&uLocal_148, 3, iLocal_72, "REPRI2Prisoner", 0, 1);
		unk_0xCBDC2B59922F92C3(iLocal_72, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (func_50() == 0)
	{
		func_109(&uLocal_148, 0, unk_0xC1A5EC5C986B98AD(), "MICHAEL", 0, 1);
	}
	else if (func_50() == 1)
	{
		func_109(&uLocal_148, 1, unk_0xC1A5EC5C986B98AD(), "FRANKLIN", 0, 1);
	}
	else if (func_50() == 2)
	{
		func_109(&uLocal_148, 2, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
	}
	iLocal_55 = 1;
}

void func_109(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_110(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_114(iParam0, 2, 1))
		{
			func_113(iParam0, 2, 1);
		}
	}
	else if (func_114(iParam0, 2, 1))
	{
		func_111(iParam0, 2, 1);
	}
}

void func_111(int iParam0, int iParam1, bool bParam2)
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
		if (func_24() == 0)
		{
			uVar0 = func_49(func_112(iParam0), -1, 0);
			unk_0x061B1200C95204CB(&uVar0, iParam1);
			func_47(func_112(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_668[iParam0]), iParam1);
	}
}

int func_112(int iParam0)
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

void func_113(int iParam0, int iParam1, bool bParam2)
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
		if (func_24() == 0)
		{
			uVar0 = func_49(func_112(iParam0), -1, 0);
			unk_0xECDAB41968FF21A8(&uVar0, iParam1);
			func_47(func_112(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_668[iParam0]), iParam1);
	}
}

int func_114(int iParam0, int iParam1, bool bParam2)
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
		if (func_24() == 0)
		{
			return BitTest(func_49(func_112(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_115()
{
	unk_0x852EC2A7DE66202D(iLocal_90);
	unk_0x28818732C8F0F80E("random@prisoner_lift");
	if (iLocal_56 == 0)
	{
		unk_0x852EC2A7DE66202D(joaat("s_m_y_ranger_01"));
		unk_0x852EC2A7DE66202D(joaat("sheriff"));
		unk_0x852EC2A7DE66202D(joaat("ratloader"));
		unk_0x852EC2A7DE66202D(joaat("bfinjection"));
	}
	if (unk_0x0CBB7C273DED26E7(iLocal_90) && unk_0x2BBF749E555360DC("random@prisoner_lift"))
	{
		if (iLocal_56 == 0)
		{
			if (((unk_0x0CBB7C273DED26E7(joaat("s_m_y_ranger_01")) && unk_0x0CBB7C273DED26E7(joaat("sheriff"))) && unk_0x0CBB7C273DED26E7(joaat("ratloader"))) && unk_0x0CBB7C273DED26E7(joaat("bfinjection")))
			{
				bLocal_57 = true;
			}
		}
		else
		{
			bLocal_57 = true;
		}
	}
	else
	{
		unk_0x852EC2A7DE66202D(iLocal_90);
		unk_0x28818732C8F0F80E("random@prisoner_lift");
		if (iLocal_56 == 0)
		{
			unk_0x852EC2A7DE66202D(joaat("s_m_y_ranger_01"));
			unk_0x852EC2A7DE66202D(joaat("sheriff"));
			unk_0x852EC2A7DE66202D(joaat("ratloader"));
			unk_0x852EC2A7DE66202D(joaat("bfinjection"));
		}
	}
}

void func_116()
{
	if (iLocal_62 == 1)
	{
		iLocal_90 = joaat("g_m_y_lost_02");
		Local_76 = { 1538.09f, 2172.344f, 77.826f };
		fLocal_89 = 142.0201f;
		Local_91 = { 984.3975f, -106.9935f, 73.3531f };
		Local_86 = { 960.1481f, -139.4141f, 73.476f };
	}
	if (iLocal_62 == 2)
	{
		iLocal_90 = joaat("s_m_y_prisoner_01");
		Local_76 = { 1401.692f, 2528.085f, 40.3762f };
		fLocal_89 = 301.2458f;
		Local_91 = { 938.5384f, -2167.42f, 29.5153f };
		Local_86 = { 928.9882f, -2173.248f, 29.2873f };
	}
	iLocal_58 = 1;
}

int func_117()
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Local_50) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_128())
		{
			return 0;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (func_118(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_118(float fParam0, bool bParam1)
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
		if (func_37(func_50()))
		{
			iVar36 = func_34();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113648.f_18576[iVar32 /*6*/], 2) && !BitTest(Global_113648.f_18576[iVar32 /*6*/], 3))
				{
					func_119(iVar32, &Var0);
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

void func_119(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_120(uParam1, "Abigail1", func_122(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 1:
			func_120(uParam1, "Abigail2", func_122(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 2:
			func_120(uParam1, "Barry1", func_122(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 3:
			func_120(uParam1, "Barry2", func_122(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 4:
			func_120(uParam1, "Barry3", func_122(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 5:
			func_120(uParam1, "Barry3A", func_122(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 6:
			func_120(uParam1, "Barry3C", func_122(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 7:
			func_120(uParam1, "Barry4", func_122(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_121(iParam0), 0, 0);
			break;
		
		case 8:
			func_120(uParam1, "Dreyfuss1", func_122(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 9:
			func_120(uParam1, "Epsilon1", func_122(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 10:
			func_120(uParam1, "Epsilon2", func_122(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 11:
			func_120(uParam1, "Epsilon3", func_122(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 12:
			func_120(uParam1, "Epsilon4", func_122(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 13:
			func_120(uParam1, "Epsilon5", func_122(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 14:
			func_120(uParam1, "Epsilon6", func_122(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 15:
			func_120(uParam1, "Epsilon7", func_122(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 16:
			func_120(uParam1, "Epsilon8", func_122(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 17:
			func_120(uParam1, "Extreme1", func_122(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 18:
			func_120(uParam1, "Extreme2", func_122(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 19:
			func_120(uParam1, "Extreme3", func_122(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 20:
			func_120(uParam1, "Extreme4", func_122(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 21:
			func_120(uParam1, "Fanatic1", func_122(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_121(iParam0), 1, 0);
			break;
		
		case 22:
			func_120(uParam1, "Fanatic2", func_122(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_121(iParam0), 1, 0);
			break;
		
		case 23:
			func_120(uParam1, "Fanatic3", func_122(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_121(iParam0), 0, 1);
			break;
		
		case 24:
			func_120(uParam1, "Hao1", func_122(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_121(iParam0), 0, 1);
			break;
		
		case 25:
			func_120(uParam1, "Hunting1", func_122(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 26:
			func_120(uParam1, "Hunting2", func_122(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 27:
			func_120(uParam1, "Josh1", func_122(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 28:
			func_120(uParam1, "Josh2", func_122(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 29:
			func_120(uParam1, "Josh3", func_122(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 30:
			func_120(uParam1, "Josh4", func_122(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 31:
			func_120(uParam1, "Maude1", func_122(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 32:
			func_120(uParam1, "Minute1", func_122(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 33:
			func_120(uParam1, "Minute2", func_122(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 34:
			func_120(uParam1, "Minute3", func_122(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 35:
			func_120(uParam1, "MrsPhilips1", func_122(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 36:
			func_120(uParam1, "MrsPhilips2", func_122(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 37:
			func_120(uParam1, "Nigel1", func_122(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 38:
			func_120(uParam1, "Nigel1A", func_122(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 39:
			func_120(uParam1, "Nigel1B", func_122(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 40:
			func_120(uParam1, "Nigel1C", func_122(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 41:
			func_120(uParam1, "Nigel1D", func_122(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 42:
			func_120(uParam1, "Nigel2", func_122(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 43:
			func_120(uParam1, "Nigel3", func_122(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 44:
			func_120(uParam1, "Omega1", func_122(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 45:
			func_120(uParam1, "Omega2", func_122(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 46:
			func_120(uParam1, "Paparazzo1", func_122(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 47:
			func_120(uParam1, "Paparazzo2", func_122(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 48:
			func_120(uParam1, "Paparazzo3", func_122(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 49:
			func_120(uParam1, "Paparazzo3A", func_122(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 50:
			func_120(uParam1, "Paparazzo3B", func_122(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 51:
			func_120(uParam1, "Paparazzo4", func_122(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 52:
			func_120(uParam1, "Rampage1", func_122(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 54:
			func_120(uParam1, "Rampage3", func_122(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 55:
			func_120(uParam1, "Rampage4", func_122(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 56:
			func_120(uParam1, "Rampage5", func_122(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 53:
			func_120(uParam1, "Rampage2", func_122(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 57:
			func_120(uParam1, "TheLastOne", func_122(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 58:
			func_120(uParam1, "Tonya1", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 59:
			func_120(uParam1, "Tonya2", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 60:
			func_120(uParam1, "Tonya3", func_122(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 61:
			func_120(uParam1, "Tonya4", func_122(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 62:
			func_120(uParam1, "Tonya5", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_120(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_121(int iParam0)
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

struct<2> func_122(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_123(iParam0) };
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

struct<2> func_123(int iParam0)
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

int func_124()
{
	if (func_127() && !func_128())
	{
		return 1;
	}
	if (func_126() && func_125())
	{
		return 1;
	}
	return 0;
}

bool func_125()
{
	return Global_113366 > 0;
}

int func_126()
{
	if (Global_97603 != -1)
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

int func_128()
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

int func_129()
{
	if (!func_104(5))
	{
		return 1;
	}
	if (func_124())
	{
		return 1;
	}
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_128())
		{
			return 0;
		}
	}
	if (func_118(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_130()
{
	if ((Global_113637 == func_44() && unk_0xA847A0F368810680()) && Global_113638)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_133(iParam0);
	unk_0x1A59C174B4130991(0);
	unk_0xB1BC77E1EAD07BAE(1);
	Global_113634 = 0;
	func_132();
}

void func_132()
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

void func_133(int iParam0)
{
	Global_113637 = iParam0;
}

int func_134(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_44();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_175())
		{
			return 0;
		}
	}
	Local_50 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			Var1 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_128())
			{
				return 0;
			}
		}
		if (!Global_113648.f_9087)
		{
			return 0;
		}
		if (func_19(0))
		{
			return 0;
		}
		if (func_124())
		{
			return 0;
		}
		if (func_174())
		{
			return 0;
		}
		if (Global_113637 != -1)
		{
			return 0;
		}
		if (func_37(func_50()))
		{
			if (func_118(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !bParam6)
		{
			if ((Var1.f_2 - Local_50.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_173(iParam3))
		{
			return 0;
		}
		if (func_37(func_50()))
		{
			if (func_172(func_50()) == 4 || func_172(func_50()) == 5)
			{
				return 0;
			}
		}
		if (func_37(func_50()))
		{
			if (!func_171(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_170(Global_113648.f_24997.f_43[iParam3]))
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
		if (func_169())
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
		if (!func_160(4))
		{
			return 0;
		}
		if (!func_104(5))
		{
			return 0;
		}
		if (func_159(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_159(0, 0))
		{
			return 0;
		}
		if (Global_32310)
		{
			return 0;
		}
		if (func_173(30) && !func_159(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_37(func_50()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113648.f_2365.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113648.f_2365.f_539.f_2296[iVar4];
				if (func_158(iVar8))
				{
					if (func_136(iVar4))
					{
						if (!func_135(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), Var5) < (210f * 210f))
							{
								if (func_50() != iVar4)
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

bool func_135(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_137(iVar0);
}

int func_137(int iParam0)
{
	return func_138(iParam0, 1);
}

int func_138(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_158(iParam0))
	{
		return 0;
	}
	func_139(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_139(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_140(func_151(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_140(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_150(iParam0, iParam1))
	{
		iVar0 = func_149(iParam1);
		iVar1 = func_147(iParam0);
		iVar2 = (func_147(iParam0) - func_147(iParam1));
		iVar3 = (func_149(iParam0) - func_149(iParam1));
		iVar4 = (func_146(iParam0) - func_146(iParam1));
		iVar5 = (func_145(iParam0) - func_145(iParam1));
		iVar6 = (func_144(iParam0) - func_144(iParam1));
		iVar7 = (func_143(iParam0) - func_143(iParam1));
	}
	else
	{
		iVar0 = func_149(iParam0);
		iVar1 = func_147(iParam1);
		iVar2 = (func_147(iParam1) - func_147(iParam0));
		iVar3 = (func_149(iParam1) - func_149(iParam0));
		iVar4 = (func_146(iParam1) - func_146(iParam0));
		iVar5 = (func_145(iParam1) - func_145(iParam0));
		iVar6 = (func_144(iParam1) - func_144(iParam0));
		iVar7 = (func_143(iParam1) - func_143(iParam0));
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
		iVar4 = (iVar4 + func_142(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_141(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_141(float fParam0, float fParam1, float fParam2)
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

int func_142(int iParam0, int iParam1)
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

int func_143(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_144(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_145(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_146(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_147(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_148(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_148(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_149(int iParam0)
{
	return iParam0 & 15;
}

int func_150(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_158(iParam1) || !func_158(iParam0))
	{
		return 1;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	var uVar0;
	
	func_157(&uVar0, unk_0x731F95B6458DCF80());
	func_156(&uVar0, unk_0x77BBAAED3E25322C());
	func_155(&uVar0, unk_0x30DFE1FFD2CC7420());
	func_154(&uVar0, unk_0x8C0F17CAC308A14B());
	func_153(&uVar0, unk_0x61117764C67882B7());
	func_152(&uVar0, unk_0x367F557725B53815());
	return uVar0;
}

void func_152(var uParam0, int iParam1)
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

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_154(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_149(*uParam0);
	iVar1 = func_147(*uParam0);
	if (iParam1 < 1 || iParam1 > func_142(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_157(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_158(int iParam0)
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
	iVar0 = func_143(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_144(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_145(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_147(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_149(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_146(iParam0);
	if (iVar5 < 1 || iVar5 > func_142(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_159(int iParam0, bool bParam1)
{
	if (BitTest(Global_113648.f_24997.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				iVar0 = func_50();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_168()) || Global_112695) || Global_32166) || func_167()) || func_86(8, -1)) || func_166()) || func_165()) || func_164()) || func_163()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_168()) || Global_32166) || func_167()) || func_86(8, -1)) || func_164()) || func_166()) || func_165()) || func_163()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_168()) || Global_112695) || Global_32166) || func_167()) || func_86(8, -1)) || func_164()) || func_166()) || func_165()) || func_163()) || Global_113648.f_7690.f_919[iVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_168()) || Global_112695) || Global_32166) || func_167()) || func_86(8, -1)) || func_166()) || func_165()) || func_163()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_168() || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || func_86(8, -1)) || func_163()) || func_162()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_86(8, -1) || func_166()) || func_165()) || func_162()) || func_161())
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
							if ((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_168()) || Global_32166) || func_167()) || func_86(8, -1)) || func_165()) || func_164()) || func_163()) || Global_113648.f_7690.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || func_168()) || func_165()) || Global_112695) || Global_32166) || func_167()) || Global_44446) || func_86(8, -1)) || func_164()) || func_162()) || func_163()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0)) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1)) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_168()) || Global_112695) || Global_32166) || func_167()) || func_86(8, -1)) || func_164()) || func_162()) || func_166()) || func_165()) || func_163())
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

var func_161()
{
	return Global_100720.f_1;
}

int func_162()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_163()
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_164()
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

bool func_165()
{
	return Global_100733.f_388 > 0;
}

bool func_166()
{
	return Global_100733.f_387 > 0;
}

var func_167()
{
	return Global_1575060;
}

int func_168()
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_169()
{
	func_84();
	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_170(int iParam0)
{
	return func_150(func_151(), iParam0);
}

int func_171(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_50();
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

int func_172(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_113648.f_7690.f_919[iParam0];
}

int func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_175())
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

int func_174()
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

int func_175()
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

void func_176()
{
	if (iLocal_141)
	{
		func_190(0);
		func_188();
		func_96(0);
		unk_0xFF2AF80F9EC7704C(1f);
		unk_0x8E09E8C52602EBB2(Local_76 - Vector(10f, 10f, 10f), Local_76 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x7DDA49EACF1DBEE2(unk_0x93E99A2DBCBA9CFA());
		unk_0x90DA349CD13C7839(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 1);
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
			{
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
			}
		}
		if (!unk_0x66599E73DBA5A850(iLocal_72))
		{
			unk_0xC5B2830898581862(iLocal_72, 0);
			if (iLocal_56 == 0)
			{
				unk_0x598D91BBD045C1F3(iLocal_72, 317, 1);
				if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					unk_0xDBC7406226B5540E(&uLocal_74);
					unk_0xCF302B47D4B347F1(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					unk_0xCF302B47D4B347F1(0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
					unk_0xF2CFC6EC8C85FA78(uLocal_74);
					unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
					unk_0x63EF69C6969A3D26(&uLocal_74);
					unk_0x71A535529C1CA5DF(iLocal_72, 1);
				}
			}
			else if (iLocal_56 == 1)
			{
				if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					unk_0xDBC7406226B5540E(&uLocal_74);
					unk_0xCF302B47D4B347F1(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					unk_0xCF302B47D4B347F1(0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
					unk_0xF2CFC6EC8C85FA78(uLocal_74);
					unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
					unk_0x63EF69C6969A3D26(&uLocal_74);
					unk_0x71A535529C1CA5DF(iLocal_72, 1);
				}
				else if (unk_0xFBD273FDBCF0C5BD(iLocal_75, 0))
				{
					unk_0xDBC7406226B5540E(&uLocal_74);
					unk_0xD30E9CAE1FEA1C7E(0, iLocal_75, -1, -1, 2f, 9, 0);
					unk_0xCF302B47D4B347F1(0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
					unk_0xF2CFC6EC8C85FA78(uLocal_74);
					unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
					unk_0x63EF69C6969A3D26(&uLocal_74);
					unk_0x71A535529C1CA5DF(iLocal_72, 1);
				}
				else
				{
					unk_0xDBC7406226B5540E(&uLocal_74);
					unk_0xCF302B47D4B347F1(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					unk_0xCF302B47D4B347F1(0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 300f, -1, 0, 0);
					unk_0xF2CFC6EC8C85FA78(uLocal_74);
					unk_0x3D7110D966B0CEA2(iLocal_72, uLocal_74);
					unk_0x63EF69C6969A3D26(&uLocal_74);
					unk_0x71A535529C1CA5DF(iLocal_72, 1);
				}
			}
		}
		unk_0x436EC806292A3DB8(3, 1);
		unk_0x436EC806292A3DB8(5, 1);
		unk_0x436EC806292A3DB8(11, 1);
		unk_0x1090804F1F0FF051();
	}
	func_177(-1);
	unk_0x675D9C12C73D3DE7();
}

void func_177(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_130())
	{
		func_181(iParam0);
		unk_0x97DBA2AA6C70AFC7(0, 0);
		Global_113639 = unk_0xA5E11AF0A2B928C1();
		func_180(30000);
		StringCopy(&cVar0, func_179(Global_113637, 1), 64);
		if (func_43(Global_113637) > 0)
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
	func_178(&Global_32223);
	Global_113638 = 0;
	func_133(-1);
}

void func_178(var uParam0)
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

char* func_179(int iParam0, bool bParam1)
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

void func_180(int iParam0)
{
	Global_43808 = (unk_0xA5E11AF0A2B928C1() + iParam0);
}

void func_181(int iParam0)
{
	func_182(iParam0, 0, func_187(iParam0));
}

void func_182(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_151();
	func_185(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_184(iParam0, &uVar0);
	Var1 = { func_183(&uVar0) };
}

struct<16> func_183(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_145(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_144(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_143(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_146(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_149(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_147(*uParam0), 64);
	return Var0;
}

void func_184(int iParam0, var uParam1)
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
}

void func_185(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_147(*uParam0);
	iVar1 = func_149(*uParam0);
	iVar2 = func_146(*uParam0);
	iVar3 = func_145(*uParam0);
	iVar4 = func_144(*uParam0);
	iVar5 = func_143(*uParam0);
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
	iVar6 = func_142(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_142(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_186(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_186(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_157(uParam0, iParam1);
	func_156(uParam0, iParam2);
	func_155(uParam0, iParam3);
	func_153(uParam0, iParam5);
	func_154(uParam0, iParam4);
	func_152(uParam0, iParam6);
}

int func_187(int iParam0)
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

void func_188()
{
	Global_20591 = 0;
	func_189();
}

void func_189()
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

void func_190(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_110(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_191()
{
	float fVar0;
	
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		fVar0 = unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Local_63, 1);
		iLocal_62 = 1;
		if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Local_66, 1) < fVar0)
		{
			fVar0 = unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Local_66, 1);
			iLocal_62 = 2;
		}
		if (iLocal_62 == 1)
		{
			bLocal_69 = true;
			iLocal_56 = 0;
			return Local_63;
		}
		if (iLocal_62 == 2)
		{
			bLocal_69 = 2;
			iLocal_56 = 1;
			return Local_66;
		}
	}
	return 0f, 0f, 0f;
}

