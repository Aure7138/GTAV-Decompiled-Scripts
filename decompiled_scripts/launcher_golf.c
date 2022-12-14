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
	int iLocal_52 = 0;
	struct<16> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_69[64] = "";
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
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
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
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
	int iVar4;
	
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
	iLocal_118 = 6;
	iLocal_119 = 18;
	Local_90 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_90 = { Local_90 };
	uLocal_86 = uLocal_86;
	cLocal_69 = { cLocal_69 };
	bVar0 = false;
	if (unk_0x4B34601C5C56F3EE(82))
	{
		func_96(1);
	}
	uLocal_85 = unk_0x407E03586628E458(unk_0x9E2D6C50374FCFA9());
	iLocal_95 = 0;
	func_94(&Global_112037, 0);
	func_91();
	if (func_90(uLocal_94, 1))
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
	if (!func_90(uLocal_94, 8))
	{
		if (!func_88(iLocal_100))
		{
			if (func_87(0, iLocal_99))
			{
				func_96(0);
			}
			else
			{
				func_96(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_87(0, iLocal_99))
		{
			func_96(1);
		}
	}
	if (func_90(uLocal_94, 8388608))
	{
		func_96(1);
	}
	if (func_90(uLocal_94, 524288) && (func_86() && !func_85()))
	{
		func_96(1);
	}
	if (unk_0xB4C854DD86E40FDA(unk_0x1307D54181723A6E()) > 1 && !func_90(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_84(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_83(10);
	}
	while (true)
	{
		uLocal_85 = unk_0x407E03586628E458(unk_0x9E2D6C50374FCFA9());
		if (func_90(uLocal_94, 1048576))
		{
			if (unk_0x55B23FE400FCEA6B(uLocal_85, 0))
			{
				func_96(1);
			}
		}
		if (unk_0xE5965CDF24F93A9F(uLocal_85) && !unk_0x55B23FE400FCEA6B(iLocal_85, 0))
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
					if (func_88(iLocal_100) || (func_90(uLocal_94, 16) && !func_90(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_82();
						func_83(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_84(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_83(10);
						}
						if ((Local_87.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_81())
					{
						iLocal_103 = iLocal_103;
						func_83(3);
					}
					else
					{
						func_82();
					}
					break;
				
				case 3:
					if (unk_0xDB51AF48ABE62D4D())
					{
						func_96(1);
						return;
					}
					if (!func_88(iLocal_100))
					{
						if (!func_90(uLocal_94, 8))
						{
							bVar1 = true;
							if (unk_0x3C57C2F07FEE34D2(&(Global_100441.f_3), &cLocal_69))
							{
								cLocal_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_96(0);
								break;
							}
						}
					}
					if (!func_90(uLocal_94, 4))
					{
						func_80();
						func_79(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_100475)
					{
						if (iLocal_105 != 263)
						{
							if (func_78(6) && !func_77(iLocal_105))
							{
							}
							else
							{
								func_84(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_83(10);
					}
					else
					{
						cLocal_69 = { Local_53 };
						bVar2 = !func_90(uLocal_94, 64);
						func_94(&uLocal_94, 128);
						if (!func_76(3) && !Global_100475)
						{
							if (func_90(uLocal_94, 2097152))
							{
								if ((!func_90(uLocal_94, 1) || !unk_0xE5965CDF24F93A9F(func_75())) && !Global_100475)
								{
									func_83(10);
									break;
								}
							}
						}
						if (func_90(uLocal_94, 524288) && (func_86() && !func_85()))
						{
							func_96(1);
						}
						if (func_74())
						{
							func_96(1);
						}
						if ((!func_66(6) || Global_112433) || func_65())
						{
							bVar2 = false;
						}
						if (func_90(uLocal_94, 1))
						{
							if (!func_64())
							{
								func_62(&uLocal_94, 128);
								bVar2 = false;
							}
						}
						if (func_61(1))
						{
							bVar2 = false;
						}
						if (Global_78319)
						{
							bVar2 = false;
						}
						if (func_60())
						{
							bVar2 = false;
						}
						if (unk_0x04458B4E5D9E466A())
						{
							bVar2 = false;
						}
						if (func_59() || func_58(8, -1))
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
						if (func_57(0) || func_56())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (unk_0xD5C6B5E3B93A5EDC(iLocal_85, 0))
							{
								if (!unk_0x8F41785F110B0DA0(unk_0xB3FF0049C1FD38EC(iLocal_85, 0), ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 20f, 0, 0, iLocal_103))
								{
									bVar2 = false;
								}
							}
							else if (!unk_0x8F41785F110B0DA0(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar2 = false;
							}
							if (!unk_0x8F41785F110B0DA0(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, 0))
							{
								func_62(&uLocal_94, 128);
								bVar2 = false;
							}
							iVar3 = unk_0x09FC827691DACE59();
							if (iLocal_118 > iLocal_119)
							{
								if (iVar3 < iLocal_118 && iVar3 >= iLocal_119)
								{
									func_62(&uLocal_94, 128);
									bVar2 = false;
									if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
									{
										if (!func_90(uLocal_94, 134217728))
										{
											func_55("MG_NA_TIME", iLocal_118, iLocal_119);
											func_62(&uLocal_94, 134217728);
										}
									}
									else
									{
										func_94(&uLocal_94, 134217728);
									}
								}
							}
							else if (iVar3 < iLocal_118 || iVar3 >= iLocal_119)
							{
								func_62(&uLocal_94, 128);
								bVar2 = false;
								if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
								{
									if (!func_90(uLocal_94, 134217728))
									{
										func_55("MG_NA_TIME", iLocal_118, iLocal_119);
										func_62(&uLocal_94, 134217728);
									}
								}
								else
								{
									func_94(&uLocal_94, 134217728);
								}
							}
							if (bVar2 && func_48(func_49()) < iLocal_120)
							{
								func_62(&uLocal_94, 128);
								bVar2 = false;
								if (!func_90(uLocal_94, 33554432))
								{
									func_47("MG_YOU_IS_BROKE", iLocal_120, -1);
									func_62(&uLocal_94, 33554432);
								}
							}
							else
							{
								func_94(&uLocal_94, 33554432);
							}
							if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0x07899AAA5D680386(0, 51);
								if (func_46(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										if (iLocal_120 > 0)
										{
											func_45(&iLocal_96, 4, "", 1, 0, 0, 0);
											func_44(sLocal_101, iLocal_120);
											func_62(&uLocal_94, 2048);
										}
										else
										{
											func_45(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
											func_62(&uLocal_94, 2048);
										}
									}
									else if (!func_90(uLocal_94, 2048) || !unk_0xF847447D4467709D())
									{
										func_43(&iLocal_96);
										func_94(&uLocal_94, 2048);
									}
									if (func_41(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_43(&iLocal_96);
										func_94(&uLocal_94, 2048);
										if (func_90(uLocal_94, 2048))
										{
											if (unk_0xF847447D4467709D())
											{
												func_94(&uLocal_94, 2048);
												unk_0x3410421C60BF7143(0);
											}
										}
										unk_0xAF76A37C80EFD1D8(&cLocal_69);
										unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 56);
										func_83(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_43(&iLocal_96);
									func_94(&uLocal_94, 2048);
									if (func_90(uLocal_94, 2048))
									{
										if (unk_0xF847447D4467709D())
										{
											func_94(&uLocal_94, 2048);
											unk_0x3410421C60BF7143(0);
										}
									}
									unk_0xAF76A37C80EFD1D8(&cLocal_69);
									unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 56);
									func_83(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_96 != -1)
							{
								if (unk_0xF847447D4467709D())
								{
									func_43(&iLocal_96);
									func_94(&uLocal_94, 2048);
									unk_0x3410421C60BF7143(0);
								}
							}
						}
					}
					func_39();
					break;
				
				case 5:
					unk_0x07899AAA5D680386(0, 51);
					if (unk_0xF79F112CE5999680(&cLocal_69))
					{
						if (iLocal_96 != -1)
						{
							func_43(&iLocal_96);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_90(uLocal_94, 1))
						{
							if (func_78(6) || func_78(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_36(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
							{
								unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
							}
							func_35();
							if (Global_44238)
							{
								func_26(unk_0xE2D3D51028F0428A());
							}
							unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 56);
							iLocal_52 = unk_0xE81651AD79516E48(&cLocal_69, iLocal_97);
							unk_0xD195D79715508EFA(&cLocal_69);
							Local_53 = { cLocal_69 };
							StringCopy(&cLocal_69, "", 64);
							func_94(&uLocal_94, 4);
							func_25();
							func_62(&uLocal_94, 2);
							func_83(6);
							func_21(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_20(iLocal_99);
								func_17(func_19(iLocal_99), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_16();
						}
						else if (iVar4 == 0)
						{
							func_83(10);
						}
					}
					else
					{
						func_16();
					}
					break;
				
				case 6:
					if (func_90(Global_112037, 262144))
					{
						func_94(&Global_112037, 262144);
						func_15();
					}
					if (func_90(uLocal_94, 2097152))
					{
						if (!func_76(3) && !unk_0x87C0DA419F19FF57(iLocal_52))
						{
							func_83(10);
						}
					}
					if (!unk_0x87C0DA419F19FF57(iLocal_52))
					{
						unk_0xA5C246361B61ED23(unk_0xF2DB717A73826179((func_11(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_10(&uLocal_107);
						func_94(&uLocal_94, 256);
						func_7();
						if (bVar0)
						{
							func_94(&uLocal_94, 2);
						}
						else if (func_90(uLocal_94, 2))
						{
							if (func_90(Global_112037, 0))
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_94(&uLocal_94, 2);
							}
							else
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_94(&uLocal_94, 2);
							}
						}
						func_83(0);
						if (iLocal_99 != -1)
						{
							if (func_90(Global_112037, 0))
							{
								unk_0x0B33380E33B61778(func_19(iLocal_99), 0, Global_100478, 0);
								func_5(func_19(iLocal_99), 0, Global_100478, 1, 0);
							}
							else
							{
								unk_0x0B33380E33B61778(func_19(iLocal_99), 0, Global_100478, 0);
								func_5(func_19(iLocal_99), 0, Global_100478, 0, 0);
							}
						}
						func_4();
						func_94(&Global_112037, 0);
						if (func_90(uLocal_94, 16777216))
						{
							func_96(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_113386.f_9085)
							{
								if (!func_87(0, iLocal_99))
								{
									func_96(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_83(0);
					break;
				
				case 10:
					func_96(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_84(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_83(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_84(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_43(&iLocal_96);
					}
					if (!unk_0xACC32B78196FBC2A(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0x3410421C60BF7143(1);
						}
					}
					func_83(4);
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
									if (func_88(iLocal_100) && func_87(0, iLocal_99))
									{
										func_91();
										if (iLocal_105 != 263)
										{
											func_84(iLocal_105, 1, 0);
										}
										func_83(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_84(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_83(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_91();
									if (iLocal_105 != 263)
									{
										func_84(iLocal_105, 1, 0);
									}
									func_83(0);
								}
							}
						}
						else
						{
							func_84(iLocal_105, 1, 0);
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
}

void func_3()
{
}

void func_4()
{
}

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_6(int iParam0)
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

void func_7()
{
	char cVar0[24];
	
	if (unk_0xDFC67688F9088B45() || func_9())
	{
		unk_0x5F540C4C109AB569(StackVal, 0, 0, 0);
	}
	else if (unk_0x527312C0DF85960A() || func_8())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x6E34665F75B2EE0A(0, &cVar0);
	}
}

bool func_8()
{
	return (unk_0xA7384DAD7CF469DA() || unk_0x807ABE1AB65C24D2());
}

bool func_9()
{
	return (unk_0x3EBD3AF4E5D7A08C() || unk_0xC545AB1CF97ABB34());
}

void func_10(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_11(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_12(bool bParam0)
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

bool func_13(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_14(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_15()
{
	return 1;
}

void func_16()
{
}

void func_17(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xACC32B78196FBC2A(&Global_97511))
	{
		unk_0xA77F683FA0E7B1F5(&Global_97511, 0, 0, 0, 1, 0);
		StringCopy(&Global_97511, "", 64);
	}
	StringCopy(&Global_97511, sParam0, 64);
	unk_0xB85C479D5C3EA069(sParam0, iParam1, iParam2, func_18(0));
}

int func_18(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

char* func_19(int iParam0)
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

void func_20(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xDFC67688F9088B45() || func_9())
	{
		uVar0 = iParam0;
		unk_0x5F540C4C109AB569(8, &uVar0, 1, 1);
	}
	else if (unk_0x527312C0DF85960A() || func_8())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x6E34665F75B2EE0A(8, &cVar1);
	}
}

void func_21(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_24(uParam0);
	}
	else
	{
		func_22(uParam0);
	}
}

void func_22(var uParam0)
{
	func_23(uParam0, 0f);
}

void func_23(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_12(BitTest(*uParam0, 4)) - fParam1);
	unk_0xCED9E32812D6C7C7(uParam0, 1);
	unk_0xB0550BC91B0159D6(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_24(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_22(uParam0);
	}
}

void func_25()
{
	var uVar0;
	var uVar1[100];
	int iVar102;
	int iVar103;
	
	if (unk_0x72E575062E5D1004(-1370.625f, 56.1227f, 52.7033f, 100f, 1, 1, &uVar0, 0, 0, -1))
	{
		if (!unk_0xF68107C40359970C(uVar0))
		{
			iVar102 = unk_0x46951D3186547C7A(iVar0, &uVar1, -1);
			unk_0x03A927199A2DFE46(iVar0);
		}
		if (iVar102 == 0)
		{
		}
		iVar103 = 0;
		iVar103 = 0;
		while (iVar103 < iVar102)
		{
			if (!unk_0xF68107C40359970C(uVar1[iVar103]))
			{
				unk_0x03A927199A2DFE46(uVar1[iVar103]);
			}
			iVar103++;
		}
	}
}

void func_26(int iParam0)
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
	iVar0 = func_34(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44024[iVar0 /*5*/];
		func_29(1, iVar1, 1);
		return;
	}
	iVar2 = func_28(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_27(iVar2);
}

void func_27(int iParam0)
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

int func_28(int iParam0)
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

void func_29(int iParam0, int iParam1, int iParam2)
{
	func_30(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_32(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_31();
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

int func_31()
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

int func_32(int iParam0, int iParam1, int iParam2)
{
	if (func_33(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_33(int iParam0, int iParam1, int iParam2)
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

int func_34(int iParam0)
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

void func_35()
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

int func_36(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_38(0))
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
		if (!func_88(iParam2))
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
			func_37(iParam0, iParam4);
		}
	}
	return 2;
}

void func_37(var uParam0, int iParam1)
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

int func_38(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_88(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_39()
{
	if (unk_0x8F41785F110B0DA0(iLocal_85, Local_90, fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
	{
		unk_0x7653D561C9574763(0, 46, 1);
	}
	if (iLocal_120 > 0)
	{
		if (func_40(8) == func_49())
		{
			iLocal_120 = 0;
			sLocal_101 = "PLAY_GOLF";
		}
	}
}

int func_40(int iParam0)
{
	return Global_113386.f_24904[iParam0 /*4*/];
}

int func_41(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_42(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x3583A42587543334(unk_0xB6BA8B8E3D0B41C6()))
	{
		return 0;
	}
	if (func_57(0))
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

int func_42(int iParam0)
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

void func_43(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_42(*iParam0);
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

void func_44(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

void func_45(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xB4C854DD86E40FDA(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x04458B4E5D9E466A())
	{
		if (!*iParam0 == -1)
		{
			func_43(iParam0);
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

int func_46(var uParam0)
{
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		uParam0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (!unk_0xCE282187B0A6217E(uParam0) && unk_0x78006D212FD7243E(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_47(char* sParam0, int iParam1, int iParam2)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam2);
}

int func_48(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x61481F9FBB1C7EDD(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x61481F9FBB1C7EDD(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x61481F9FBB1C7EDD(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_49()
{
	func_50();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_50()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_53(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_52(unk_0xE2D3D51028F0428A());
			if (func_51(iVar0) && (!func_78(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_51(Global_113386.f_2363.f_539.f_4321))
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

bool func_51(int iParam0)
{
	return iParam0 < 3;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_53(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_53(int iParam0)
{
	if (func_51(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_54(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_55(char* sParam0, int iParam1, int iParam2)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	unk_0x2AE954BA77A66307(iParam2);
	unk_0x89B545A74F93B1DD(0, 0, 1, -1);
}

var func_56()
{
	return Global_75485;
}

int func_57(int iParam0)
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

var func_58(int iParam0, int iParam1)
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

bool func_59()
{
	return unk_0x320D1840B6DAA1CC() <= Global_23150.f_6269 + 100;
}

int func_60()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_61(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

void func_62(var uParam0, int iParam1)
{
	func_63(uParam0, iParam1);
}

void func_63(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_64()
{
	if (func_78(6) || func_78(7))
	{
		return func_77(68);
	}
	return 1;
}

bool func_65()
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

int func_66(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_49();
				if (!func_51(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_73()) || Global_112433) || Global_31962) || func_72()) || func_58(8, -1)) || func_71()) || func_70()) || func_69()) || func_60()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_73()) || Global_31962) || func_72()) || func_58(8, -1)) || func_69()) || func_71()) || func_70()) || func_60()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_73()) || Global_112433) || Global_31962) || func_72()) || func_58(8, -1)) || func_69()) || func_71()) || func_70()) || func_60()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_73()) || Global_112433) || Global_31962) || func_72()) || func_58(8, -1)) || func_71()) || func_70()) || func_60()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_73() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_58(8, -1)) || func_60()) || func_68()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_58(8, -1) || func_71()) || func_70()) || func_68()) || func_67())
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
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_73()) || Global_31962) || func_72()) || func_58(8, -1)) || func_70()) || func_69()) || func_60()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_73()) || func_70()) || Global_112433) || Global_31962) || func_72()) || Global_44238) || func_58(8, -1)) || func_69()) || func_68()) || func_60()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_73()) || Global_112433) || Global_31962) || func_72()) || func_58(8, -1)) || func_69()) || func_68()) || func_71()) || func_70()) || func_60())
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

var func_67()
{
	return Global_100480.f_1;
}

int func_68()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_69()
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

bool func_70()
{
	return Global_100493.f_376 > 0;
}

bool func_71()
{
	return Global_100493.f_375 > 0;
}

var func_72()
{
	return Global_1575058;
}

int func_73()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_74()
{
	if (unk_0xB4C854DD86E40FDA(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_75()
{
	return Global_96273;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_78(6) || func_78(7))
			{
				return 1;
			}
			else
			{
				return func_76(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_88(5))
			{
				if (func_66(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x12DD4A0B247D9B4D(Global_32338[iVar0 /*23*/].f_19);
}

bool func_78(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_80()
{
}

int func_81()
{
	return 1;
}

void func_82()
{
}

void func_83(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_84(int iParam0, bool bParam1, bool bParam2)
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

int func_85()
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

int func_86()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_87(int iParam0, int iParam1)
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

bool func_88(int iParam0)
{
	return func_89(iParam0, Global_43052);
}

int func_89(int iParam0, int iParam1)
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

bool func_90(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_91()
{
	StringCopy(&Local_53, "golf", 64);
	iLocal_99 = 2;
	fLocal_117 = 7f;
	func_79(&uLocal_94, 1);
	if (func_78(6) || func_78(7))
	{
		iLocal_103 = 0;
	}
	if (func_40(8) == func_49())
	{
		iLocal_120 = 0;
		sLocal_101 = "PLAY_GOLF";
	}
	else
	{
		iLocal_120 = func_93(unk_0xE5965CDF24F93A9F(func_75()));
		sLocal_101 = "PAY_PLAY_GOLF";
	}
	iLocal_105 = 68;
	fLocal_102 = (unk_0xBBDA792448DB5A89(func_92(iLocal_105)) + 5f);
	iLocal_97 = 51000;
}

int func_92(int iParam0)
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

int func_93(bool bParam0)
{
	if (bParam0)
	{
		return 200;
	}
	return 100;
}

void func_94(var uParam0, int iParam1)
{
	func_95(uParam0, iParam1);
}

void func_95(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_96(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_84(iLocal_105, 0, 0);
		}
	}
	func_43(&iLocal_96);
	if (func_90(uLocal_94, 2048))
	{
		if (func_99(sLocal_101, iLocal_120))
		{
			func_94(&uLocal_94, 2048);
			unk_0x3410421C60BF7143(0);
		}
	}
	if (func_90(uLocal_94, 2))
	{
		func_4();
		func_94(&uLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_97();
	unk_0xAFBDF6A5E54114C1();
}

void func_97()
{
	func_94(&uLocal_94, 4);
	func_98();
	if (unk_0x87C0DA419F19FF57(iLocal_52))
	{
		unk_0xD4798E4F64B31C25(iLocal_52, 3);
	}
	if (!unk_0xE8F6C1F695B25B91(&cLocal_69))
	{
		if (unk_0xEE91150B7F06C500(&cLocal_69) != 0)
		{
			unk_0xD195D79715508EFA(&cLocal_69);
		}
	}
}

void func_98()
{
}

bool func_99(char* sParam0, int iParam1)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x2AE954BA77A66307(uParam1);
	return unk_0x73CB3406A86A3A02(0);
}

