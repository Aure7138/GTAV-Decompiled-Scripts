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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	float fLocal_47 = 0f;
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
	var uLocal_60 = 0;
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
	int iLocal_85 = 0;
	struct<2> Local_86 = { 0, 0 } ;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<2> Local_90 = { 0, 0 } ;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	struct<2> Local_94 = { 0, 0 } ;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	struct<2> Local_98 = { 0, 0 } ;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	struct<2> Local_102 = { 0, 0 } ;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	struct<2> Local_106 = { 0, 0 } ;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	StringCopy(&Local_86, "CELL_206", 16);
	StringCopy(&Local_90, "CELL_214", 16);
	StringCopy(&Local_94, "CELL_243", 16);
	StringCopy(&Local_98, "CELL_244", 16);
	StringCopy(&Local_102, "CELL_265", 16);
	StringCopy(&Local_106, "CELL_300", 16);
	unk_0x389D5B1C24A046B5();
	func_98(&uLocal_113);
	iLocal_110 = 0;
	func_96();
	func_95(Global_20364, "SET_THEME", unk_0xBBDA792448DB5A89(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_85(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_84();
		func_83();
		if (!Global_20383.f_1 == 9 && Global_20383.f_1 > 3)
		{
			switch (iLocal_85)
			{
				case 0:
					func_47();
					break;
				
				case 1:
					func_31();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_20383.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_20383.f_1 == 1 || Global_20383.f_1 == 3) || Global_20383.f_1 == 0) || Global_20327 == 1)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	Global_1890001.f_6 = 0;
	unk_0x675D9C12C73D3DE7();
}

int func_3()
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;
	
	Global_1890001.f_6 = 1;
	if (iLocal_112)
	{
		if (unk_0x6BD2D66249562506(2, Global_20352))
		{
			iLocal_112 = 0;
		}
		return;
	}
	if (unk_0x6BD2D66249562506(2, 201))
	{
		iLocal_85 = 1;
		iVar0 = func_29(iLocal_110, 0);
		func_6(iVar0);
		return;
	}
	if (unk_0x6BD2D66249562506(2, 202))
	{
		iLocal_85 = 1;
		return;
	}
	unk_0xDC38CC1E35B6A5D7("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, false, -1, 0, 0, true, 0);
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1890001.f_7[iParam0 /*8*/].f_2;
	if (Global_1890001.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_111 == iVar0)
	{
		func_26(iVar0, Global_1890001.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}
	Global_1890001.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (func_12())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_11())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_20383.f_1 = 3;
	}
}

int func_8()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
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

int func_10(int iParam0)
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

bool func_11()
{
	return BitTest(Global_1962996, 5);
}

bool func_12()
{
	return BitTest(Global_1962996, 19);
}

void func_13(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1890001.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (BitTest(Global_1890001.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_25();
				if (Global_1890001.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1890001.f_4 = (Global_1890001.f_4 - 1);
					if (Global_1890001.f_4 < 0)
					{
						Global_1890001.f_4 = 0;
					}
					func_18();
				}
			}
			unk_0x061B1200C95204CB(&(Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10.f_22), Global_1890001.f_7[iParam0 /*8*/].f_2);
			unk_0x341B37C2C5AA5999(Global_1890001.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1890001.f_7[iVar0 /*8*/] = { Global_1890001.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1890001.f_7[9 /*8*/].f_1 = 0;
		Global_1890001.f_7[9 /*8*/].f_2 = func_14();
	}
}

int func_14()
{
	return -1;
}

void func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		unk_0xECDAB41968FF21A8(&(Global_1890001.f_3), iParam0);
	}
}

bool func_16(int iParam0)
{
	return BitTest(Global_1890001.f_3, iParam0);
}

void func_17()
{
	Global_1890001 = (Global_1890001 - 1);
}

void func_18()
{
	Global_22788 = (Global_22788 - 1);
	if (Global_22788 < 0)
	{
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_19();
}

void func_19()
{
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_95(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_95(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_20(int iParam0)
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
		if (func_23(14))
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
								func_22(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(iVar2);
								unk_0xAE3413B0654A0035();
							}
							if (Global_2694519)
							{
								if (iVar1 == 14)
								{
									func_21(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_21(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_21(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_21(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_21(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_22(&(Global_8260[iVar1 /*15*/]));
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
								func_22(&(Global_8260[iVar1 /*15*/]));
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
								func_22(&(Global_8260[iVar1 /*15*/]));
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
								func_22(&(Global_8260[iVar1 /*15*/]));
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
								func_22(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(42);
								unk_0xAE3413B0654A0035();
							}
							else if (Global_8260[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890001.f_1;
								func_21(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_21(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
	if (!unk_0x2AC37494BBF1DB16(sParam7))
	{
		func_22(sParam7);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam8))
	{
		func_22(sParam8);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam9))
	{
		func_22(sParam9);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam10))
	{
		func_22(sParam10);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam11))
	{
		func_22(sParam11);
	}
	unk_0xAE3413B0654A0035();
}

void func_22(char* sParam0)
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
}

bool func_23(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_24(char* sParam0)
{
	if (Global_22788 != 0)
	{
		if (!unk_0x2AC37494BBF1DB16(sParam0))
		{
		}
		Global_22788 = 0;
	}
}

void func_25()
{
	Global_1890001.f_1 = (Global_1890001.f_1 - 1);
	if (Global_1890001.f_1 < 0)
	{
		Global_1890001.f_1 = 0;
	}
}

void func_26(int iParam0, var uParam1)
{
	if (Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10.f_26 == func_14())
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10.f_26 = iParam0;
			Global_2793044.f_5225.f_225 = uParam1;
			func_27(func_28(iParam0));
		}
	}
}

void func_27(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 1848110702;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	if (!iParam0 == 0)
	{
		unk_0x46F55A5B9F053761(1, &Var0, 2, iParam0);
	}
}

int func_28(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xECDAB41968FF21A8(&uVar0, iParam0);
	}
	return uVar0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1890001.f_7[iVar0 /*8*/].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30()
{
	return Global_1890001;
}

void func_31()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iLocal_110, 0);
	if (iLocal_110 == -1)
	{
		func_85(1);
		return;
	}
	iVar1 = Global_1890001.f_7[iVar0 /*8*/].f_2;
	if (!func_46(iVar1, 0, 1) || iLocal_111 != iVar1)
	{
		func_85(1);
		return;
	}
	func_41(&uLocal_113);
	if (func_39(&uLocal_113))
	{
		func_85(1);
		return;
	}
	if (func_38(&uLocal_113))
	{
		func_13(iVar0);
		func_85(1);
		return;
	}
	if (func_34(&uLocal_113))
	{
		if (func_33())
		{
			iLocal_112 = 1;
			iLocal_85 = 3;
		}
		else if (Global_1890001.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1890001.f_7[iVar0 /*8*/] == 1)
		{
			func_32(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_32(int iParam0)
{
	unk_0xECDAB41968FF21A8(&Global_1836078, 15);
	func_13(iParam0);
	Global_1890001.f_6 = 0;
	func_7(0);
}

bool func_33()
{
	return Global_1574582;
}

int func_34(var uParam0)
{
	if (!BitTest(*uParam0, 0))
	{
		return 0;
	}
	if (Global_20361)
	{
		return 0;
	}
	if (!unk_0x35DF833D93BCC488())
	{
		return 0;
	}
	if (!unk_0x87644B1F984197FE(2, Global_20352))
	{
		return 0;
	}
	func_35();
	Global_20361 = 1;
	return 1;
}

void func_35()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Accept", &Global_20372, 1);
		func_36();
	}
}

void func_36()
{
	if (func_37())
	{
		unk_0x8C27BB4299B24A0D(5);
	}
}

int func_37()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78558)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x990C52ABB0EFEBA9();
	iVar1 = unk_0x80A3F4E694565F6A(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4542575 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_38(var uParam0)
{
	if (!BitTest(*uParam0, 1))
	{
		return 0;
	}
	if (Global_20361)
	{
		return 0;
	}
	if (!unk_0x35DF833D93BCC488())
	{
		return 0;
	}
	if (!unk_0x87644B1F984197FE(2, Global_20355))
	{
		return 0;
	}
	func_35();
	Global_20361 = 1;
	return 1;
}

int func_39(var uParam0)
{
	if (!BitTest(*uParam0, 2))
	{
		return 0;
	}
	if (Global_20361)
	{
		return 0;
	}
	if (!unk_0x35DF833D93BCC488())
	{
		return 0;
	}
	if (!unk_0x87644B1F984197FE(2, Global_20353))
	{
		return 0;
	}
	func_40();
	Global_20361 = 1;
	return 1;
}

void func_40()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Back", &Global_20372, 1);
	}
}

void func_41(var uParam0)
{
	if (unk_0xA5E11AF0A2B928C1() < uParam0->f_1)
	{
		return;
	}
	if (!unk_0x35DF833D93BCC488())
	{
		return;
	}
	if (unk_0x87644B1F984197FE(2, Global_20359) || unk_0x87644B1F984197FE(2, 181))
	{
		func_44();
		uParam0->f_1 = unk_0xA5E11AF0A2B928C1() + 50;
	}
	if (unk_0x87644B1F984197FE(2, Global_20360) || unk_0x87644B1F984197FE(2, 180))
	{
		func_42();
		uParam0->f_1 = unk_0xA5E11AF0A2B928C1() + 50;
	}
}

void func_42()
{
	func_95(Global_20364, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
	func_43();
}

void func_43()
{
	if (func_37())
	{
		if (Global_20589 == 0)
		{
			unk_0x8C27BB4299B24A0D(2);
		}
		else
		{
			unk_0x8C27BB4299B24A0D(1);
		}
	}
}

void func_44()
{
	func_95(Global_20364, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
	func_45();
}

void func_45()
{
	if (func_37())
	{
		if (Global_20589 == 0)
		{
			unk_0x8C27BB4299B24A0D(1);
		}
		else
		{
			unk_0x8C27BB4299B24A0D(2);
		}
	}
}

int func_46(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0xE6DEE82DB0922DF0(uParam0))
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

void func_47()
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_30() > 1)
	{
		func_41(&uLocal_113);
	}
	if (func_34(&uLocal_113))
	{
		unk_0x9FD96C5DE6EDFC15(Global_20364, "GET_CURRENT_SELECTION");
		uVar0 = unk_0x08320883763BEFA3();
		while (!unk_0x4F815B9C87A967FD(uVar0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iLocal_110 = unk_0x67FFE44BB8589F1E(uVar0);
		iVar1 = func_29(iLocal_110, 0);
		switch (Global_1890001.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_49();
				break;
			
			default:
				return;
		}
		Global_20383.f_1 = 8;
		return;
	}
	if (func_38(&uLocal_113))
	{
		unk_0x9FD96C5DE6EDFC15(Global_20364, "GET_CURRENT_SELECTION");
		uVar2 = unk_0x08320883763BEFA3();
		while (!unk_0x4F815B9C87A967FD(uVar2))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iLocal_110 = unk_0x67FFE44BB8589F1E(uVar2);
		iVar3 = func_29(iLocal_110, 0);
		switch (Global_1890001.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_13(iVar3);
				func_85(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_16(0))
	{
		func_48(0);
		func_85(0);
	}
}

void func_48(int iParam0)
{
	if (func_16(iParam0))
	{
		unk_0x061B1200C95204CB(&(Global_1890001.f_3), iParam0);
	}
}

void func_49()
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar21[3];
	bool bVar25;
	int iVar26;
	int iVar27;
	char cVar28[16];
	struct<16> Var32;
	char cVar48[16];
	
	if (Global_20383.f_1 != 8)
	{
		Global_20383.f_1 = 8;
	}
	func_95(Global_20364, "SET_DATA_SLOT_EMPTY", unk_0xBBDA792448DB5A89(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_29(iLocal_110, 0);
	iLocal_111 = Global_1890001.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1890001.f_7[iVar3 /*8*/].f_2;
	unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
	unk_0xC6A3EF6C4A3412C1(26);
	unk_0xC6A3EF6C4A3412C1(0);
	if (func_46(iVar4, 0, 1))
	{
		Var5 = { func_82(iVar4) };
		unk_0x2AF11E92DE43CDE3("STRING");
		unk_0x35451336B8B420D6(func_76(iVar4));
		unk_0x76B34CBB6F5FA1BB(&Var5);
		unk_0xF8FCA9E7130CE1C8();
		bVar0 = true;
	}
	else
	{
		func_22("");
	}
	if (Global_1890001.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_15419)
		{
			bVar25 = func_75(iVar4);
			iVar26 = 0;
			while (iVar26 < 3)
			{
				if (iVar27 < 3)
				{
					if (Global_1894573[iVar4 /*608*/].f_10.f_11[iVar26] != func_14())
					{
						if (func_46(Global_1894573[iVar4 /*608*/].f_10.f_11[iVar26], 0, 1))
						{
							uVar21[iVar27] = Global_1894573[iVar4 /*608*/].f_10.f_11[iVar26];
							iVar27++;
						}
					}
				}
				iVar26++;
			}
			if (iVar27 == 0)
			{
				if (bVar25)
				{
					func_22("BA_APP_BODYCTA");
				}
				else
				{
					func_22("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar28, "BA_APP_BODY_T4", 16);
				if (bVar25)
				{
					StringCopy(&cVar28, "BA_APP_BODYCT4", 16);
				}
				if (iVar27 == 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar27 > 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T6", 16);
					}
				}
				unk_0x2AF11E92DE43CDE3(&cVar28);
				iVar26 = 0;
				while (iVar26 < iVar27)
				{
					Var32 = { func_82(uVar21[iVar26]) };
					unk_0x76B34CBB6F5FA1BB(&Var32);
					iVar26++;
				}
				unk_0xF8FCA9E7130CE1C8();
			}
		}
		else
		{
			if (Global_1890001.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1890001.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar48, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar48, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1890001.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar48, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar48, "BA_APP_BODY_T10", 16);
			}
			unk_0x2AF11E92DE43CDE3(&cVar48);
			unk_0x64C50E40AA09A6B5(Global_1890001.f_88[iVar3 /*5*/]);
			unk_0x64C50E40AA09A6B5(func_74(iVar4));
			unk_0x64C50E40AA09A6B5(Global_1890001.f_88[iVar3 /*5*/].f_3);
			unk_0x64C50E40AA09A6B5(Global_1890001.f_88[iVar3 /*5*/].f_4);
			unk_0xF8FCA9E7130CE1C8();
		}
	}
	else if (Global_1890001.f_7[iVar3 /*8*/] == 1)
	{
		unk_0x2AF11E92DE43CDE3("BA_APP_BODY_DM2");
		unk_0x35451336B8B420D6(func_76(Global_1890001.f_7[iVar3 /*8*/].f_2));
		unk_0x76B34CBB6F5FA1BB(func_61(Global_1890001.f_7[iVar3 /*8*/].f_2));
		unk_0xF8FCA9E7130CE1C8();
	}
	if (bVar0)
	{
		iVar2 = func_55(Global_1890001.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = unk_0x0E2FD3D4F40014B2(iVar2);
		}
	}
	if (bVar0)
	{
		unk_0xB4541E12446D5367(sVar1);
	}
	else
	{
		func_22(&Local_106);
	}
	unk_0xAE3413B0654A0035();
	func_95(Global_20364, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53(&Local_102);
	func_50(13, &Local_94, 12, &Local_98, 4, &Local_86, &uLocal_113);
	iLocal_85 = 1;
}

void func_50(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, var uParam6)
{
	func_51(2, iParam0, sParam1, 0, uParam6, -1);
	func_51(1, iParam2, sParam3, 1, uParam6, 17);
	func_51(3, iParam4, sParam5, 2, uParam6, -1);
}

void func_51(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_21(Global_20364, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 0f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x061B1200C95204CB(uParam4, iParam3);
		func_52(iParam5, 0);
		return;
	}
	if (Global_20371)
	{
		func_21(Global_20364, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 1f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0xECDAB41968FF21A8(uParam4, iParam3);
		func_52(iParam5, 1);
		return;
	}
	func_21(Global_20364, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 1f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xECDAB41968FF21A8(uParam4, iParam3);
	func_52(iParam5, 1);
}

void func_52(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, iParam0);
		return;
	}
	unk_0x061B1200C95204CB(&Global_8253, iParam0);
}

void func_53(char* sParam0)
{
	func_54(Global_20364, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_54(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	func_22(sParam2);
	if (!unk_0x2AC37494BBF1DB16(sParam3))
	{
		func_22(sParam3);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam4))
	{
		func_22(sParam4);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam5))
	{
		func_22(sParam5);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam6))
	{
		func_22(sParam6);
	}
	unk_0xAE3413B0654A0035();
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (iVar0 == -1)
	{
		func_56(iParam0, 1);
		return 0;
	}
	Global_1666668[iVar0 /*5*/].f_4 = 1;
	return Global_1666668[iVar0 /*5*/].f_2;
}

void func_56(int iParam0, bool bParam1)
{
	if (!func_46(iParam0, 0, 1))
	{
		return;
	}
	if (func_58(iParam0) != -1)
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
	if (func_57(iParam0))
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

int func_57(int iParam0)
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

int func_58(int iParam0)
{
	int iVar0;
	
	if (!func_46(iParam0, 0, 1))
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
			func_59(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_59(int iParam0)
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
	func_60(&(Global_1666668[iVar32 /*5*/]));
	Global_1666829 = (Global_1666829 - 1);
}

void func_60(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA26A9A07F761D8F8())
	{
		uParam0->f_3 = unk_0x0DB7F8294D73598B();
	}
}

char* func_61(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		uVar0 = func_73(&(Global_1894573[iParam0 /*608*/].f_10.f_105));
		return uVar0;
	}
	if (Global_1894573[iParam0 /*608*/].f_10.f_121 != Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10.f_121)
	{
		uVar0 = func_68(iParam0, 0);
		return uVar0;
	}
	if (((func_67(iParam0, 28) || func_67(unk_0x93E99A2DBCBA9CFA(), 28)) || func_66(iParam0)) && !func_64(iParam0))
	{
		return func_68(iParam0, 0);
	}
	iVar1 = func_63(iParam0);
	if (iVar1 != func_14())
	{
		if (iVar1 != unk_0x93E99A2DBCBA9CFA())
		{
			if (!func_62() && !unk_0xEDEBDBC4D313E8E0(0, -1, 1))
			{
				return func_68(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_14())
	{
		uVar0 = func_73(&(Global_1894573[iVar1 /*608*/].f_10.f_105));
		if (unk_0x2AC37494BBF1DB16(uVar0))
		{
			return func_68(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_62()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
}

int func_63(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_14();
}

int func_64(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_65(iParam0) };
	if (func_62())
	{
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
		{
			return 1;
		}
		else if (unk_0x5EEE0DA7B180E4F7(0))
		{
			if (unk_0x345199BCC9F5F448(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_65(int iParam0)
{
	struct<13> Var0;
	
	unk_0x23BD70608BA4F8D9(iParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_14())
	{
		Var0 = { func_65(iParam0) };
		if ((unk_0x01689609224A6C92() && !unk_0xEE17703CF2C2875A()) || unk_0xCC17806DB0C41C19())
		{
			if (unk_0x5EEE0DA7B180E4F7(0))
			{
				return 0;
			}
		}
		else if (func_62() || unk_0xEE17703CF2C2875A())
		{
			if (unk_0x5EEE0DA7B180E4F7(0))
			{
				if (unk_0x345199BCC9F5F448(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_67(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

var func_68(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_70(iParam0, 1))
		{
			return func_69();
		}
	}
	return unk_0x45816CECE89B5B19("GB_REST_ACC");
}

var func_69()
{
	return unk_0x45816CECE89B5B19("GB_REST_ACCM");
}

bool func_70(int iParam0, bool bParam1)
{
	return func_71(iParam0, bParam1, 1);
}

int func_71(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_72(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_14() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0, int iParam1)
{
	if (iParam0 != func_14())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_14())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_73(var uParam0)
{
	return uParam0;
}

int func_74(int iParam0)
{
	if (func_63(iParam0) == func_14())
	{
		return 0;
	}
	return Global_1894573[iParam0 /*608*/].f_10.f_19;
}

int func_75(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 26);
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = func_79(iParam0);
	if (iVar0 != -1)
	{
		return func_77(iVar0);
	}
	return 1;
}

int func_77(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_78(iParam0);
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

var func_78(int iParam0)
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_79(int iParam0)
{
	if (!iParam0 == func_14())
	{
		if (func_80(iParam0, 1))
		{
			return Global_2648605.f_818.f_11[func_63(iParam0)];
		}
	}
	return -1;
}

bool func_80(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_81(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_14();
}

int func_81(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_14())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

struct<16> func_82(var uParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, unk_0x1D25117F71EE3811(uParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_83()
{
	if (Global_1890001.f_6)
	{
		if (iLocal_85 != 3)
		{
			if (!unk_0x47F8B78DC1737D5C())
			{
				Global_1890001.f_6 = 0;
			}
		}
	}
}

void func_84()
{
	unk_0x4150CF46B891FFF5(0, 176);
	unk_0x4150CF46B891FFF5(0, 177);
}

void func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_111 = func_14();
	if (!Global_20383.f_1 == 7)
	{
		Global_20383.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_110;
	}
	if (iVar0 >= Global_1665288)
	{
		iVar0 = 0;
	}
	if (Global_22785)
	{
		func_49();
		Global_22785 = 0;
		return;
	}
	iVar1 = func_30();
	iVar1 = (iVar1 - func_94());
	if ((func_80(unk_0x93E99A2DBCBA9CFA(), 0) && !func_93(1)) && iVar1 <= 0)
	{
		func_91();
		return;
	}
	func_86();
	func_95(Global_20364, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(25), unk_0xBBDA792448DB5A89(iVar0), -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_50(13, &Local_90, 12, &Local_98, 4, &Local_86, &uLocal_113);
	}
	else
	{
		func_50(1, "", 1, "", 4, &Local_86, &uLocal_113);
	}
	iLocal_85 = 0;
}

void func_86()
{
	int iVar0;
	int iVar1;
	
	func_95(Global_20364, "SET_DATA_SLOT_EMPTY", unk_0xBBDA792448DB5A89(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1890001.f_7[iVar0 /*8*/].f_1 == 1 && Global_1890001.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1890001.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_90(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_88(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_87();
}

void func_87()
{
	bool bVar0;
	
	unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
	unk_0xC6A3EF6C4A3412C1(25);
	unk_0xC6A3EF6C4A3412C1(0);
	if (func_81(unk_0x93E99A2DBCBA9CFA()))
	{
		func_22("BA_APP_NONEB");
	}
	else
	{
		func_22("BA_APP_NONE");
	}
	func_22("");
	unk_0xC6A3EF6C4A3412C1(-1);
	unk_0xC6A3EF6C4A3412C1(1);
	bVar0 = unk_0xA26A9A07F761D8F8();
	unk_0xD546F85F5AF0F231(bVar0);
	unk_0xAE3413B0654A0035();
}

int func_88(int iParam0, int iParam1)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	
	if (Global_1890001.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1890001.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
	unk_0xC6A3EF6C4A3412C1(25);
	unk_0xC6A3EF6C4A3412C1(iParam1);
	Var0 = { func_82(Global_1890001.f_7[iParam0 /*8*/].f_2) };
	func_89(&Var0);
	unk_0x2AF11E92DE43CDE3("BA_APP_BODY_DM1");
	unk_0xF8FCA9E7130CE1C8();
	unk_0xC6A3EF6C4A3412C1(-1);
	iVar16 = 1;
	iVar17 = func_79(Global_1890001.f_7[iParam0 /*8*/].f_2);
	if (iVar17 != -1)
	{
		iVar16 = func_77(iVar17);
	}
	unk_0xC6A3EF6C4A3412C1(iVar16);
	unk_0xD546F85F5AF0F231(true);
	unk_0xAE3413B0654A0035();
	return 1;
}

void func_89(var uParam0)
{
	unk_0x7DDE71A42D80E8FA(uParam0);
}

int func_90(int iParam0, int iParam1)
{
	struct<16> Var0;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (Global_1890001.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1890001.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
	unk_0xC6A3EF6C4A3412C1(25);
	unk_0xC6A3EF6C4A3412C1(iParam1);
	Var0 = { func_82(Global_1890001.f_7[iParam0 /*8*/].f_2) };
	func_89(&Var0);
	bVar16 = func_75(Global_1890001.f_7[iParam0 /*8*/].f_2);
	iVar17 = func_74(Global_1890001.f_7[iParam0 /*8*/].f_2);
	if (iVar17 == 0)
	{
		if (bVar16)
		{
			func_22("BA_APP_BODYCT");
		}
		else
		{
			func_22("BA_APP_BODY_T");
		}
	}
	else if (iVar17 == 1)
	{
		if (bVar16)
		{
			unk_0x2AF11E92DE43CDE3("BA_APP_BODYCT3");
		}
		else
		{
			unk_0x2AF11E92DE43CDE3("BA_APP_BODY_T3");
		}
		unk_0x64C50E40AA09A6B5(iVar17);
		unk_0xF8FCA9E7130CE1C8();
	}
	else
	{
		if (bVar16)
		{
			unk_0x2AF11E92DE43CDE3("BA_APP_BODYCT2");
		}
		else
		{
			unk_0x2AF11E92DE43CDE3("BA_APP_BODY_T2");
		}
		unk_0x64C50E40AA09A6B5(iVar17);
		unk_0xF8FCA9E7130CE1C8();
	}
	unk_0xC6A3EF6C4A3412C1(-1);
	iVar18 = 1;
	iVar19 = func_79(Global_1890001.f_7[iParam0 /*8*/].f_2);
	if (iVar19 != -1)
	{
		iVar18 = func_77(iVar19);
	}
	unk_0xC6A3EF6C4A3412C1(iVar18);
	unk_0xD546F85F5AF0F231(true);
	unk_0xAE3413B0654A0035();
	return 1;
}

void func_91()
{
	func_95(Global_20364, "SET_DATA_SLOT_EMPTY", unk_0xBBDA792448DB5A89(26), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
	unk_0xC6A3EF6C4A3412C1(26);
	unk_0xC6A3EF6C4A3412C1(0);
	unk_0x2AF11E92DE43CDE3("STRING");
	unk_0x35451336B8B420D6(func_76(unk_0x93E99A2DBCBA9CFA()));
	unk_0x76B34CBB6F5FA1BB(func_92());
	unk_0xF8FCA9E7130CE1C8();
	func_22("BA_APP_NONEG");
	func_22("CELL_AGBOSSPIC");
	unk_0xAE3413B0654A0035();
	func_95(Global_20364, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	func_50(1, "", 1, "", 4, &Local_86, &uLocal_113);
	iLocal_85 = 2;
}

char* func_92()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_63(unk_0x93E99A2DBCBA9CFA());
	if (iVar0 != func_14())
	{
		if (iVar0 != unk_0x93E99A2DBCBA9CFA())
		{
			if (((func_67(iVar0, 28) || func_67(unk_0x93E99A2DBCBA9CFA(), 28)) || func_66(iVar0)) && !func_64(iVar0))
			{
				return func_68(iVar0, 0);
			}
			if (!func_62() && !unk_0xEDEBDBC4D313E8E0(0, -1, 1))
			{
				return func_68(iVar0, 0);
			}
		}
		uVar1 = func_73(&(Global_1894573[iVar0 /*608*/].f_10.f_105));
		if (unk_0x2AC37494BBF1DB16(uVar1))
		{
			return func_68(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_93(bool bParam0)
{
	return func_70(unk_0x93E99A2DBCBA9CFA(), bParam0);
}

int func_94()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1890001.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_95(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_96()
{
	Global_1890001.f_1 = 0;
	func_97();
}

void func_97()
{
	Global_1890001.f_5 = 0;
}

void func_98(var uParam0)
{
	*uParam0 = 0;
}

