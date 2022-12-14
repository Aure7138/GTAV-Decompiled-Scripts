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
	if (unk_0x55EEDBBFDC6E810F(82))
	{
		func_96(1);
	}
	uLocal_85 = unk_0xF2CFBB1105511E1A(unk_0x93E99A2DBCBA9CFA());
	iLocal_95 = 0;
	func_94(&Global_112299, 0);
	func_91();
	if (func_90(uLocal_94, 1))
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
	if (unk_0x24B651D85CCE5EB4(unk_0x63C7B2D430A46FC3()) > 1 && !func_90(uLocal_94, 4194304))
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
		uLocal_85 = unk_0xF2CFBB1105511E1A(unk_0x93E99A2DBCBA9CFA());
		if (func_90(uLocal_94, 1048576))
		{
			if (unk_0x055111B11E6624FD(uLocal_85, 0))
			{
				func_96(1);
			}
		}
		if (unk_0x7DE17ACDD8BA2642(uLocal_85) && !unk_0x055111B11E6624FD(iLocal_85, 0))
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
					if (unk_0xE3C3FF8D5649A77D())
					{
						func_96(1);
						return;
					}
					if (!func_88(iLocal_100))
					{
						if (!func_90(uLocal_94, 8))
						{
							bVar1 = true;
							if (unk_0x4310A0DB886F9FED(&(Global_100681.f_3), &cLocal_69))
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
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_100715)
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
						if (!func_76(3) && !Global_100715)
						{
							if (func_90(uLocal_94, 2097152))
							{
								if ((!func_90(uLocal_94, 1) || !unk_0x7DE17ACDD8BA2642(func_75())) && !Global_100715)
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
						if ((!func_66(6) || Global_112695) || func_65())
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
						if (Global_78558)
						{
							bVar2 = false;
						}
						if (func_60())
						{
							bVar2 = false;
						}
						if (unk_0xB53553DC4AAC7D8A())
						{
							bVar2 = false;
						}
						if (func_59() || func_58(8, -1))
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
						if (func_57(0) || func_56())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (unk_0x3C3D6D026CF7F51B(iLocal_85, 0))
							{
								if (!unk_0x1C4E4DC1EFE24DF1(unk_0x95DC39736F6748E3(iLocal_85, 0), ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 20f, 0, 0, iLocal_103))
								{
									bVar2 = false;
								}
							}
							else if (!unk_0x1C4E4DC1EFE24DF1(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar2 = false;
							}
							if (!unk_0x1C4E4DC1EFE24DF1(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, 0))
							{
								func_62(&uLocal_94, 128);
								bVar2 = false;
							}
							iVar3 = unk_0x30DFE1FFD2CC7420();
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
							if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0x4150CF46B891FFF5(0, 51);
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
									else if (!func_90(uLocal_94, 2048) || !unk_0xF0E4B64AC0B5660E())
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
											if (unk_0xF0E4B64AC0B5660E())
											{
												func_94(&uLocal_94, 2048);
												unk_0xCD3C8E1022864F65(0);
											}
										}
										unk_0x3EC562D93709C894(&cLocal_69);
										unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 56);
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
										if (unk_0xF0E4B64AC0B5660E())
										{
											func_94(&uLocal_94, 2048);
											unk_0xCD3C8E1022864F65(0);
										}
									}
									unk_0x3EC562D93709C894(&cLocal_69);
									unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 56);
									func_83(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_96 != -1)
							{
								if (unk_0xF0E4B64AC0B5660E())
								{
									func_43(&iLocal_96);
									func_94(&uLocal_94, 2048);
									unk_0xCD3C8E1022864F65(0);
								}
							}
						}
					}
					func_39();
					break;
				
				case 5:
					unk_0x4150CF46B891FFF5(0, 51);
					if (unk_0x6CAF14BE58B4BFF8(&cLocal_69))
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
							if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
							{
								unk_0xE90EAC9EC6471EB9(unk_0x93E99A2DBCBA9CFA());
							}
							func_35();
							if (Global_44446)
							{
								func_26(unk_0xC1A5EC5C986B98AD());
							}
							unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 56);
							iLocal_52 = unk_0xE81651AD79516E48(&cLocal_69, iLocal_97);
							unk_0x037A80676B8FF0F5(&cLocal_69);
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
					if (func_90(Global_112299, 262144))
					{
						func_94(&Global_112299, 262144);
						func_15();
					}
					if (func_90(uLocal_94, 2097152))
					{
						if (!func_76(3) && !unk_0xB8CEC43FB7EF2D92(iLocal_52))
						{
							func_83(10);
						}
					}
					if (!unk_0xB8CEC43FB7EF2D92(iLocal_52))
					{
						unk_0xD094BE9EF72C6999(unk_0xF2DB717A73826179((func_11(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_10(&uLocal_107);
						func_94(&uLocal_94, 256);
						func_7();
						if (bVar0)
						{
							func_94(&uLocal_94, 2);
						}
						else if (func_90(uLocal_94, 2))
						{
							if (func_90(Global_112299, 0))
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
							if (func_90(Global_112299, 0))
							{
								unk_0x427014D38567361E(func_19(iLocal_99), 0, Global_100718, 0);
								func_5(func_19(iLocal_99), 0, Global_100718, 1, 0);
							}
							else
							{
								unk_0x427014D38567361E(func_19(iLocal_99), 0, Global_100718, 0);
								func_5(func_19(iLocal_99), 0, Global_100718, 0, 0);
							}
						}
						func_4();
						func_94(&Global_112299, 0);
						if (func_90(uLocal_94, 16777216))
						{
							func_96(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_113648.f_9087)
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
					if (!unk_0x2AC37494BBF1DB16(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0xCD3C8E1022864F65(1);
						}
					}
					func_83(4);
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
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
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

void func_6(int iParam0)
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

void func_7()
{
	char cVar0[24];
	
	if (unk_0xCCE9BCDAB8B7FAED() || func_9())
	{
		unk_0x989939160154E37F(StackVal, 0, 0, 0);
	}
	else if (unk_0x674D69D3896862C7() || func_8())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x98F31DBBB3410994(0, &cVar0);
	}
}

var func_8()
{
	return (unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A());
}

var func_9()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
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
	if (!unk_0x2AC37494BBF1DB16(&Global_97751))
	{
		unk_0x83332E38D6284FF5(&Global_97751, 0, 0, 0, 1, 0);
		StringCopy(&Global_97751, "", 64);
	}
	StringCopy(&Global_97751, sParam0, 64);
	unk_0x363D7D2154F0040D(sParam0, iParam1, iParam2, func_18(0));
}

int func_18(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
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
	
	if (unk_0xCCE9BCDAB8B7FAED() || func_9())
	{
		uVar0 = iParam0;
		unk_0x989939160154E37F(8, &uVar0, 1, 1);
	}
	else if (unk_0x674D69D3896862C7() || func_8())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x98F31DBBB3410994(8, &cVar1);
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
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
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
	
	if (unk_0x4CC2E3CEA74EF758(-1370.625f, 56.1227f, 52.7033f, 100f, 1, 1, &uVar0, 0, 0, -1))
	{
		if (!unk_0x66599E73DBA5A850(uVar0))
		{
			iVar102 = unk_0xA5D17FEE5372152E(iVar0, &uVar1, -1);
			unk_0x909F139DC199D8E0(iVar0);
		}
		if (iVar102 == 0)
		{
		}
		iVar103 = 0;
		iVar103 = 0;
		while (iVar103 < iVar102)
		{
			if (!unk_0x66599E73DBA5A850(uVar1[iVar103]))
			{
				unk_0x909F139DC199D8E0(uVar1[iVar103]);
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
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return;
	}
	iVar0 = func_34(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44232[iVar0 /*5*/];
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

int func_28(int iParam0)
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
	Global_44313[iVar0 /*6*/] = iParam0;
	Global_44313[iVar0 /*6*/].f_1 = iParam1;
	Global_44313[iVar0 /*6*/].f_2 = iParam2;
	Global_44313[iVar0 /*6*/].f_3 = iParam3;
	Global_44313[iVar0 /*6*/].f_4 = iParam4;
	Global_44313[iVar0 /*6*/].f_5 = iParam5;
}

int func_31()
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

void func_35()
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

int func_36(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_38(0))
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
		if (!func_88(iParam2))
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
			func_37(iParam0, iParam4);
		}
	}
	return 2;
}

void func_37(var uParam0, int iParam1)
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

int func_38(int iParam0)
{
	if (Global_43257 == 15)
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
	if (unk_0x1C4E4DC1EFE24DF1(iLocal_85, Local_90, fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
	{
		unk_0x8B438725D591ED78(0, 46, 1);
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
	return Global_113648.f_24906[iParam0 /*4*/];
}

int func_41(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_42(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x48DC6A21D1CAD89C(unk_0x5DC3DCA82C806319()))
	{
		return 0;
	}
	if (func_57(0))
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
		if (Global_44000[iVar0 /*32*/].f_1 == iParam0)
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
		if (Global_44000[iVar0 /*32*/])
		{
			Global_44000[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_44(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0x64C50E40AA09A6B5(iParam1);
	unk_0xBC8969B539DCA239(0, 1, 1, -1);
}

void func_45(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x24B651D85CCE5EB4(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB53553DC4AAC7D8A())
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

int func_46(var uParam0)
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		uParam0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (!unk_0xDA70CA6A0D1738D3(uParam0) && unk_0xD565A4F8A4D47FCB(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_47(char* sParam0, int iParam1, int iParam2)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0x64C50E40AA09A6B5(iParam1);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam2);
}

int func_48(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xDD7756E2742E0F6D(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xDD7756E2742E0F6D(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xDD7756E2742E0F6D(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_49()
{
	func_50();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_50()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_53(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_52(unk_0xC1A5EC5C986B98AD());
			if (func_51(iVar0) && (!func_78(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_51(Global_113648.f_2365.f_539.f_4321))
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

bool func_51(int iParam0)
{
	return iParam0 < 3;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
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
	return Global_2028[iParam0 /*29*/];
}

void func_55(char* sParam0, int iParam1, int iParam2)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0x64C50E40AA09A6B5(iParam1);
	unk_0x64C50E40AA09A6B5(iParam2);
	unk_0xBC8969B539DCA239(0, 0, 1, -1);
}

var func_56()
{
	return Global_75693;
}

int func_57(int iParam0)
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

var func_58(int iParam0, int iParam1)
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

bool func_59()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

int func_60()
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_61(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23131.f_4 && Global_23131.f_104 == 4);
	}
	return Global_23131.f_4;
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

int func_66(int iParam0)
{
	int iVar0;
	
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
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
						if (((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_73()) || Global_112695) || Global_32166) || func_72()) || func_58(8, -1)) || func_71()) || func_70()) || func_69()) || func_60()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_73()) || Global_32166) || func_72()) || func_58(8, -1)) || func_69()) || func_71()) || func_70()) || func_60()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_73()) || Global_112695) || Global_32166) || func_72()) || func_58(8, -1)) || func_69()) || func_71()) || func_70()) || func_60()) || Global_113648.f_7690.f_919[iVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_73()) || Global_112695) || Global_32166) || func_72()) || func_58(8, -1)) || func_71()) || func_70()) || func_60()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_73() || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || func_58(8, -1)) || func_60()) || func_68()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_58(8, -1) || func_71()) || func_70()) || func_68()) || func_67())
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
							if ((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_73()) || Global_32166) || func_72()) || func_58(8, -1)) || func_70()) || func_69()) || func_60()) || Global_113648.f_7690.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || func_73()) || func_70()) || Global_112695) || Global_32166) || func_72()) || Global_44446) || func_58(8, -1)) || func_69()) || func_68()) || func_60()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0)) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1)) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_73()) || Global_112695) || Global_32166) || func_72()) || func_58(8, -1)) || func_69()) || func_68()) || func_71()) || func_70()) || func_60())
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
	return Global_100720.f_1;
}

int func_68()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_69()
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

bool func_70()
{
	return Global_100733.f_388 > 0;
}

bool func_71()
{
	return Global_100733.f_387 > 0;
}

var func_72()
{
	return Global_1575060;
}

int func_73()
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_74()
{
	if (unk_0x24B651D85CCE5EB4(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_75()
{
	return Global_96513;
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
	return unk_0xCE4AAA035282336C(Global_32543[iVar0 /*23*/].f_19);
}

bool func_78(int iParam0)
{
	return Global_43257 == iParam0;
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

int func_85()
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

int func_86()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
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
	iVar0 = BitTest(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

bool func_88(int iParam0)
{
	return func_89(iParam0, Global_43257);
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
		iLocal_120 = func_93(unk_0x7DE17ACDD8BA2642(func_75()));
		sLocal_101 = "PAY_PLAY_GOLF";
	}
	iLocal_105 = 68;
	fLocal_102 = (unk_0xBBDA792448DB5A89(func_92(iLocal_105)) + 5f);
	iLocal_97 = 54000;
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
			unk_0xCD3C8E1022864F65(0);
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
	unk_0x675D9C12C73D3DE7();
}

void func_97()
{
	func_94(&uLocal_94, 4);
	func_98();
	if (unk_0xB8CEC43FB7EF2D92(iLocal_52))
	{
		unk_0xCE24BFA06404D6AC(iLocal_52, 3);
	}
	if (!unk_0xB71C73D0269747D5(&cLocal_69))
	{
		if (unk_0xA7D1818D200CD09B(&cLocal_69) != 0)
		{
			unk_0x037A80676B8FF0F5(&cLocal_69);
		}
	}
}

void func_98()
{
}

bool func_99(char* sParam0, int iParam1)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	unk_0x64C50E40AA09A6B5(uParam1);
	return unk_0x6A92D111B5409879(0);
}

