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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = 0;
	int iLocal_38[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_47[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	struct<6> Local_72 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_78[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_87 = 16;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_71 = 3;
	if (unk_0x4B34601C5C56F3EE(34))
	{
		unk_0xAFBDF6A5E54114C1();
	}
	func_42();
	func_41(&uLocal_87, 8, 0, "TANNOY", 0, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_40();
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			switch (iLocal_36)
			{
				case 0:
					if (func_39())
					{
						iLocal_36 = 2;
					}
					else
					{
						if (iLocal_58)
						{
							iLocal_68 = 0;
							iLocal_69 = 0;
							iLocal_68 = 0;
							while (iLocal_68 < 8)
							{
								if (iLocal_59[iLocal_68])
								{
									if (func_38(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), iLocal_68 + 1, 0, 0))
									{
										unk_0xABB7D34A8925C872(unk_0x9E2D6C50374FCFA9());
										iLocal_69++;
									}
									else
									{
										iLocal_59[iLocal_68] = 0;
									}
								}
								iLocal_68++;
							}
							if (iLocal_69 == 0)
							{
								iLocal_58 = 0;
							}
						}
						if (unk_0x83666F9FB8FEBD4B() > 125)
						{
							bLocal_37 = iLocal_70 + 1;
							if (func_35(bLocal_37, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0)))
							{
								if (!iLocal_38[iLocal_70])
								{
									iLocal_38[iLocal_70] = 1;
								}
								if (func_34(bLocal_37))
								{
									if (!iLocal_47[iLocal_70])
									{
										iLocal_47[iLocal_70] = 1;
									}
									Local_72 = { func_33(bLocal_37) };
									if (unk_0xB4C854DD86E40FDA(unk_0x2E87280918B16506(&Local_72)) == 0)
									{
										if (!Global_32174[bLocal_37])
										{
											func_32(bLocal_37, Global_32174[bLocal_37]);
										}
									}
								}
								else if (!Global_32174[bLocal_37])
								{
									if (unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()))
									{
										bLocal_56 = false;
										switch (bLocal_37)
										{
											case 1:
												if (func_30() || func_29())
												{
													bLocal_56 = true;
												}
												break;
											
											case 2:
												if (func_27())
												{
													bLocal_56 = true;
												}
												break;
											
											case 7:
												if (func_25())
												{
													bLocal_56 = true;
												}
												break;
										}
										if (!bLocal_56)
										{
											if (func_38(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), bLocal_37, 0, 0))
											{
												if ((unk_0x320D1840B6DAA1CC() - iLocal_78[iLocal_70]) > 8000)
												{
													func_24();
												}
												else if (unk_0x863026E0C5C2E52B(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) + Vector(200f, 200f, 200f), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) - Vector(200f, 200f, 200f), 1))
												{
													func_24();
												}
												else if (bLocal_37 != 4)
												{
													if (!iLocal_57)
													{
														if (func_1(&uLocal_87, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
														{
															iLocal_57 = 1;
														}
													}
												}
											}
											else
											{
												iLocal_78[iLocal_70] = unk_0x320D1840B6DAA1CC();
											}
										}
									}
									else
									{
										bLocal_56 = false;
										switch (bLocal_37)
										{
											case 1:
												if (func_30() || func_29())
												{
													bLocal_56 = true;
												}
												break;
											
											case 2:
												if (func_27())
												{
													bLocal_56 = true;
												}
												break;
											
											case 7:
												if (func_25())
												{
													bLocal_56 = true;
												}
												break;
										}
										if (!bLocal_56)
										{
											if (func_38(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), bLocal_37, 0, 0))
											{
												if (!bLocal_37 == 4 || (unk_0x320D1840B6DAA1CC() - iLocal_78[iLocal_70]) > 8000)
												{
													func_24();
												}
											}
											else
											{
												iLocal_78[iLocal_70] = unk_0x320D1840B6DAA1CC();
											}
										}
									}
								}
								else
								{
									bLocal_56 = false;
									switch (bLocal_37)
									{
										case 1:
											if (func_30() || func_29())
											{
												bLocal_56 = true;
											}
											break;
										
										case 2:
											if (func_27())
											{
												bLocal_56 = true;
											}
											break;
										
										case 7:
											if (func_25())
											{
												bLocal_56 = true;
											}
											break;
									}
									if (!bLocal_56)
									{
										if (func_38(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), bLocal_37, 0, 0))
										{
											func_24();
										}
									}
								}
							}
							else if (iLocal_38[iLocal_70])
							{
								if (func_34(bLocal_37))
								{
									Local_72 = { func_33(bLocal_37) };
									if (unk_0xB4C854DD86E40FDA(unk_0x2E87280918B16506(&Local_72)) == 0)
									{
										func_32(bLocal_37, 0);
										iLocal_38[iLocal_70] = 0;
									}
								}
								else if (Global_32174[bLocal_37])
								{
									Global_32174[bLocal_37] = 0;
									iLocal_38[iLocal_70] = 0;
									iLocal_47[iLocal_70] = 0;
									iLocal_57 = 0;
								}
							}
							iLocal_70++;
							if (iLocal_70 == 8)
							{
								iLocal_70 = 0;
							}
							unk_0xC1B1E9A034A63A62(0);
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					if (!func_39())
					{
						iLocal_36 = 0;
					}
					break;
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

int func_16(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
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

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = uParam5;
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
	switch (iLocal_70)
	{
		case 0:
			iLocal_71 = 2;
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < iLocal_71)
			{
			}
			break;
		
		case 1:
			if (unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()) && unk_0x863026E0C5C2E52B(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) + Vector(200f, 200f, 200f), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) - Vector(200f, 200f, 200f), 1))
			{
				iLocal_71 = 5;
			}
			else
			{
				iLocal_71 = 3;
			}
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < iLocal_71)
			{
			}
			break;
		
		case 2:
			if (unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()) && unk_0x863026E0C5C2E52B(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) + Vector(200f, 200f, 200f), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) - Vector(200f, 200f, 200f), 1))
			{
				iLocal_71 = 5;
			}
			else
			{
				iLocal_71 = 4;
			}
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < iLocal_71)
			{
			}
			break;
		
		case 3:
			iLocal_71 = 4;
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < iLocal_71)
			{
			}
			break;
		
		case 4:
			iLocal_71 = 4;
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < iLocal_71)
			{
			}
			break;
		
		case 5:
			iLocal_71 = 4;
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < iLocal_71)
			{
			}
			break;
		
		case 6:
			iLocal_71 = 2;
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < iLocal_71)
			{
			}
			break;
		
		case 7:
			iLocal_71 = 3;
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < iLocal_71)
			{
			}
			break;
	}
	if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < iLocal_71)
	{
		unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), iLocal_71, 0);
		unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
	}
	iLocal_59[iLocal_70] = 1;
	iLocal_58 = 1;
}

int func_25()
{
	switch (func_13())
	{
		case 0:
			if (func_26(65))
			{
				return 1;
			}
			if (unk_0xB4C854DD86E40FDA(joaat("ambient_solomon")) > 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_26(66))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_26(65))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_26(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

int func_27()
{
	switch (func_13())
	{
		case 0:
			if (func_28(12, 5))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_28(13, 5))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_28(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

int func_29()
{
	var uVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (unk_0xE5965CDF24F93A9F(uVar0))
		{
			if ((unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(uVar0)) || unk_0x15CAA6D7B11F1A7C(uVar0) == joaat("caddy")) || unk_0x15CAA6D7B11F1A7C(uVar0) == joaat("caddy2"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_30()
{
	if (func_31(8) == func_13())
	{
		return 1;
	}
	return 0;
}

int func_31(int iParam0)
{
	return Global_113386.f_24904[iParam0 /*4*/];
}

void func_32(bool bParam0, bool bParam1)
{
	if (BitTest(Global_32118, bParam0))
	{
		if (!bParam1)
		{
			unk_0xB0550BC91B0159D6(&Global_32118, bParam0);
			StringCopy(&(Global_32119[bParam0 /*6*/]), "NULL", 24);
			Global_32174[bParam0] = bParam1;
		}
	}
}

struct<6> func_33(bool bParam0)
{
	return Global_32119[bParam0 /*6*/];
}

int func_34(bool bParam0)
{
	if (BitTest(Global_32118, bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_35(int iParam0, struct<3> Param1)
{
	return unk_0xB7A628320EFF8E47(Param1, func_37(iParam0)) < func_36(iParam0);
}

float func_36(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_37(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1155.877f, 48.3426f, 52.4985f;
			break;
		
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 4:
			return 1701.666f, 2586.261f, 51.4925f;
			break;
		
		case 5:
			return 3525.058f, 3711.323f, 35.6423f;
			break;
		
		case 6:
			return 548.1421f, -3157.961f, 5.0696f;
			break;
		
		case 7:
			return -1142.411f, -526.4487f, 31.6878f;
			break;
		
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_38(struct<3> Param0, bool bParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (bParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x5F8653E60ED2288E(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_39()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

void func_40()
{
}

void func_41(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_42()
{
}

