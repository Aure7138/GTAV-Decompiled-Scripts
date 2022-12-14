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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	char cLocal_62[64] = "";
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	int iScriptParam_0 = 0;
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
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_35 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	StringCopy(&cLocal_46, "NULL", 64);
	StringCopy(&cLocal_62, "NULL", 64);
	if (unk_0x55EEDBBFDC6E810F(2))
	{
		func_68();
	}
	if (unk_0x7DE17ACDD8BA2642(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_67();
		if (unk_0x7DE17ACDD8BA2642(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_66() && !func_65())) && !func_64(iLocal_43))
			{
				func_68();
			}
			if ((unk_0xB53553DC4AAC7D8A() && unk_0x728FB8B438DDCAB6() != 3) && unk_0x19B3485E7C9D734D() == 3)
			{
				func_68();
			}
			if (func_63(13) || func_63(14))
			{
				func_68();
			}
			if (unk_0x34A8666A2B64A52B(iScriptParam_0, 0))
			{
				func_68();
			}
			if (unk_0x4B85D97500605AE9(iScriptParam_0))
			{
				if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
				{
					func_62();
					if (unk_0x2935B4D6CE81318D(iScriptParam_0) < 950)
					{
						func_68();
					}
					switch (iLocal_29)
					{
						case 0:
							func_59();
							if (iLocal_43 == 5)
							{
								if (func_58(18) == 1 && func_58(20) == 0)
								{
									uLocal_41 = unk_0x4496D5F4C11FDDCD(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x473E24C55772A171(uLocal_41))
									{
										unk_0x0E1082F1307FC31A(uLocal_41, 9);
									}
									unk_0x675D9C12C73D3DE7();
								}
							}
							if (iLocal_43 == -1)
							{
								func_68();
							}
							else
							{
								func_57();
								unk_0x32D2010F2D300EB7("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0xD3EC2BD7C1DEA1A7(0);
								Global_32224[iLocal_43 /*11*/].f_2 = 0;
								Global_32224[iLocal_43 /*11*/].f_6 = 1;
								Global_32224[iLocal_43 /*11*/] = unk_0x15A88CFAAFFC6C4B(0, 2);
								Global_32224[iLocal_43 /*11*/].f_1 = 0;
								Global_32224[iLocal_43 /*11*/].f_4 = 0;
								Global_32224[iLocal_43 /*11*/].f_7 = 0;
								Global_32224[iLocal_43 /*11*/].f_8 = 0;
								Global_32224[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_55(&uLocal_26);
								func_53();
								func_52();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x4CCE9D7982F2B863(iLocal_37) && unk_0x090CA4E691925FE1(iLocal_37, 1119092736))
							{
								if (func_44() || Global_32224[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_43(&iLocal_42);
							}
							break;
						
						case 2:
							func_53();
							if (!func_64(iLocal_43))
							{
								func_43(&iLocal_42);
								if (func_42("TV_HLP1"))
								{
									unk_0xCD3C8E1022864F65(1);
								}
							}
							if (unk_0x7DE17ACDD8BA2642(iLocal_37))
							{
								if (!unk_0x51DF6895C236B231(iLocal_37))
								{
									unk_0x724FFAED1C56CE2B(iLocal_37, 1, 0);
								}
							}
							if (unk_0x7DE17ACDD8BA2642(iLocal_39))
							{
								if (!unk_0x51DF6895C236B231(iLocal_39))
								{
									unk_0x724FFAED1C56CE2B(iLocal_39, 1, 0);
								}
							}
							if (unk_0x7DE17ACDD8BA2642(iLocal_38))
							{
								if (unk_0x51DF6895C236B231(iLocal_38))
								{
									unk_0x724FFAED1C56CE2B(iLocal_38, 0, 0);
								}
							}
							if (!unk_0x4310A0DB886F9FED(&cLocal_46, "NULL"))
							{
								unk_0x72B586B6D6948F3C(&cLocal_46, 0);
							}
							unk_0xBDF13F30A780064C(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x7DE17ACDD8BA2642(iLocal_40))
							{
								unk_0x94DAE427B76B6998(iLocal_40);
							}
							if (!func_64(iLocal_43))
							{
								if ((Global_32224[iLocal_43 /*11*/] == 3 || Global_32224[iLocal_43 /*11*/] == 2) || Global_32224[iLocal_43 /*11*/] == -1)
								{
									Global_32224[iLocal_43 /*11*/] = unk_0x15A88CFAAFFC6C4B(0, 2);
								}
								unk_0xE4B142962C3AB494(Global_32224[iLocal_43 /*11*/]);
								unk_0x1197F4E92A69982B(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_32224[iLocal_43 /*11*/];
								iLocal_45 = Global_32224[iLocal_43 /*11*/].f_1;
								unk_0x32387FC452149DAB(iLocal_44, func_41(iLocal_45), Global_32224[iLocal_43 /*11*/].f_9);
								unk_0xE4B142962C3AB494(iLocal_44);
								if (Global_32224[iLocal_43 /*11*/].f_7)
								{
									Global_32224[iLocal_43 /*11*/].f_5 = 0;
									Global_32224[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_32224[iLocal_43 /*11*/].f_2 = 1;
							func_40(133, 1);
							func_40(131, 1);
							func_40(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_32224[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_32224[iLocal_43 /*11*/].f_7 && func_64(iLocal_43))
							{
								Global_32224[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_38(iLocal_43))
							{
								func_37();
								iLocal_29 = 5;
							}
							else
							{
								func_35();
								if (unk_0xF0BB4D5C6A65330B() == -1)
								{
									unk_0xE4B142962C3AB494(Global_32224[iLocal_43 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_38(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_32224[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_43(&iLocal_42);
							}
							Global_32224[iLocal_43 /*11*/].f_5 = 0;
							Global_32224[iLocal_43 /*11*/].f_4 = 0;
							Global_32224[iLocal_43 /*11*/].f_1 = 0;
							Global_32224[iLocal_43 /*11*/].f_2 = 0;
							Global_32224[iLocal_43 /*11*/].f_7 = 0;
							Global_32224[iLocal_43 /*11*/].f_8 = 0;
							Global_32224[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_68();
			unk_0x675D9C12C73D3DE7();
		}
	}
	func_68();
	unk_0x675D9C12C73D3DE7();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_32224[iLocal_43 /*11*/] = unk_0xF0BB4D5C6A65330B();
	}
	fLocal_30 = unk_0x5FBAEEAE9F688AA1();
	unk_0xE4B142962C3AB494(-1);
	func_4();
	if (unk_0x24B651D85CCE5EB4(joaat("family5")) == 0)
	{
		if (!unk_0x4310A0DB886F9FED(&cLocal_46, "NULL"))
		{
			unk_0x72B586B6D6948F3C(&cLocal_46, 1);
		}
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0xCD3C8E1022864F65(1);
	}
	func_3();
	func_52();
	if (unk_0x7DE17ACDD8BA2642(iLocal_38))
	{
		if (!unk_0x51DF6895C236B231(iLocal_38))
		{
			unk_0x724FFAED1C56CE2B(iLocal_38, 1, 0);
		}
	}
	unk_0xF1BC1CA5D03DCCEC(0);
	func_2();
}

void func_2()
{
	if (unk_0xCC17806DB0C41C19())
	{
		if (iLocal_87 == 1)
		{
			unk_0x6FCC012A63184153();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0x70546D13E82214E2(iLocal_35);
		if (unk_0x7DE17ACDD8BA2642(iLocal_37))
		{
			if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x724FFAED1C56CE2B(iLocal_37, 0, 0);
				if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0xD88E9AF5626B0121(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0xD88E9AF5626B0121(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_39))
	{
		unk_0x724FFAED1C56CE2B(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
		if (unk_0x2DDFF72E939527F8(uLocal_78))
		{
			unk_0xEEF11E0DB5769366(uLocal_78, 0);
		}
		unk_0x42B9FA814615C4F9(uLocal_78, 0);
		unk_0xAABD7B0753C5C286(0);
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), 0);
			unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
			unk_0x952D2B8A054C4FF8(unk_0xC1A5EC5C986B98AD(), Local_31, 1, 0, 2);
			if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				}
			}
			unk_0x724FFAED1C56CE2B(unk_0xC1A5EC5C986B98AD(), 1, 0);
		}
		if (!unk_0x4310A0DB886F9FED(&cLocal_62, "NULL"))
		{
			if (unk_0xD19C2C73F4D74992(&cLocal_62))
			{
				unk_0x3FA8C73B5856A3E4(&cLocal_62);
			}
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_39))
		{
			unk_0x724FFAED1C56CE2B(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0, 0, 0, 0);
		unk_0xF1BC1CA5D03DCCEC(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_14(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
			{
				unk_0xD6625E11483B2324(0);
			}
			if (!func_13())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_14(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0xDB4D82037BD5A339();
		}
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((((((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_10(unk_0x93E99A2DBCBA9CFA())) && !func_7(unk_0x93E99A2DBCBA9CFA(), 0)) && !func_6()) && !bParam4) && !bParam5) && !unk_0x8253CEEA17ED481B())
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_10(unk_0x93E99A2DBCBA9CFA())) && !bParam4) && !bParam5)
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_6()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1574918;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
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

bool func_11()
{
	return BitTest(Global_2621446, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_13()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
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

int func_15()
{
	if (!func_64(iLocal_43))
	{
		if (((((((func_31(&uLocal_26) >= 1f && unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x41AD4BF315E01D41(iLocal_37) == unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD())) && !func_30(8, -1)) && !unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0)) && unk_0x55EDDA33F4D8BBE2(unk_0xC1A5EC5C986B98AD(), Local_31, 90f)) && !unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) && !unk_0xB53553DC4AAC7D8A())
		{
			if (iLocal_42 == -1)
			{
				func_29();
				func_28(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_26(iLocal_42, 1))
			{
				func_43(&iLocal_42);
				func_55(&uLocal_26);
				Global_32224[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0x89A66B65ABE0F206("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x531D638530A8DB97(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_42("TV_HLP5"))
			{
				unk_0xCD3C8E1022864F65(1);
			}
			func_2();
			func_43(&iLocal_42);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_85 == 0)
	{
		unk_0x4150CF46B891FFF5(2, 222);
		if (unk_0x87644B1F984197FE(2, 222))
		{
			func_43(&iLocal_42);
			func_28(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_25();
		}
	}
	else
	{
		unk_0x8B438725D591ED78(2, 200, 1);
		if (unk_0x51DF6895C236B231(unk_0xC1A5EC5C986B98AD()))
		{
			unk_0x724FFAED1C56CE2B(unk_0xC1A5EC5C986B98AD(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
			{
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
			}
		}
		unk_0xE288789FFB1A0C2F();
		unk_0x158E738BD8DFDCB9(unk_0xC1A5EC5C986B98AD());
		func_23(1, 1);
		unk_0x4150CF46B891FFF5(2, 222);
		func_17(0);
		if (unk_0x87644B1F984197FE(2, 222) || (unk_0x42AAFCB5B7854AA9(2) && unk_0xA2C9DE6085F5645B(2, 200)))
		{
			func_43(&iLocal_42);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_21(0))
		{
			func_18(iParam0);
		}
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}
}

void func_18(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_20())
		{
			func_19(1, 1);
		}
		else
		{
			func_19(0, 0);
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
	if (!func_13())
	{
		Global_20383.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_21(0))
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

bool func_20()
{
	return BitTest(Global_1962996, 5);
}

int func_21(int iParam0)
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

bool func_22()
{
	return BitTest(Global_1962996, 19);
}

void func_23(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_24(0))
		{
			if (!iLocal_22)
			{
				if (unk_0x89A66B65ABE0F206("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x531D638530A8DB97(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0xF0BB4D5C6A65330B() == 0)
				{
					unk_0xE4B142962C3AB494(1);
				}
				else
				{
					unk_0xE4B142962C3AB494(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0xAABBB04856172783(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x5FBAEEAE9F688AA1();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x1197F4E92A69982B(fVar2);
				iLocal_24 = unk_0xA5E11AF0A2B928C1();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x5FBAEEAE9F688AA1();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x1197F4E92A69982B(fVar2);
				iLocal_24 = unk_0xA5E11AF0A2B928C1();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0x89A66B65ABE0F206("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x531D638530A8DB97(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0xA5E11AF0A2B928C1() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0xAABBB04856172783(2, 218) - 127);
	if (iParam0 || unk_0x83666F9FB8FEBD4B() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			unk_0xC1B1E9A034A63A62(0);
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_85 == 0)
	{
		uLocal_78 = unk_0x61A083AB40BC7D3F("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0x340E065534525A8A(uLocal_78, 100f);
		unk_0xEEF11E0DB5769366(uLocal_78, 1);
		unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
		if (unk_0x7DE17ACDD8BA2642(iLocal_39))
		{
			unk_0x724FFAED1C56CE2B(iLocal_39, 0, 0);
		}
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), 1);
			unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
			if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
			{
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
				bLocal_36 = true;
			}
			unk_0x952D2B8A054C4FF8(unk_0xC1A5EC5C986B98AD(), Local_31, -1, 0, 2);
			unk_0x724FFAED1C56CE2B(unk_0xC1A5EC5C986B98AD(), 0, 0);
		}
		if (!unk_0x4310A0DB886F9FED(&cLocal_62, "NULL"))
		{
			if (!unk_0xD19C2C73F4D74992(&cLocal_62))
			{
				unk_0xAEA29937C5240DA0(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0, 0, 0, 0);
		unk_0xF1BC1CA5D03DCCEC(1);
		iLocal_85 = 1;
	}
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x48DC6A21D1CAD89C(unk_0x5DC3DCA82C806319()))
	{
		return 0;
	}
	if (func_21(0))
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

int func_27(int iParam0)
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

void func_28(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
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

void func_29()
{
	if (unk_0xCC17806DB0C41C19())
	{
		if (iLocal_87 == 0)
		{
			unk_0x176EB4F2EF6454CB("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

bool func_30(int iParam0, int iParam1)
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

float func_31(var uParam0)
{
	if (func_34(uParam0))
	{
		if (func_33(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_32(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_32(bool bParam0)
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

bool func_33(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_34(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	func_36(&fVar0);
	unk_0x70546D13E82214E2(iLocal_35);
	unk_0xCA0440712A8201E9(4);
	unk_0x23D55A1597EDF500(1);
	unk_0x39BBB5BA8ED18015(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x70546D13E82214E2(unk_0x4C756857F50C3BFF());
}

void func_36(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xE5A34D583EE533B7(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_37()
{
	Global_32224[iLocal_43 /*11*/].f_7 = 0;
	Global_32224[iLocal_43 /*11*/] = unk_0xF0BB4D5C6A65330B();
	fLocal_30 = unk_0x5FBAEEAE9F688AA1();
	if (unk_0xD19C2C73F4D74992(&cLocal_62))
	{
		unk_0x3FA8C73B5856A3E4(&cLocal_62);
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0xCD3C8E1022864F65(1);
	}
	func_43(&iLocal_42);
	unk_0xE4B142962C3AB494(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_52();
}

int func_38(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_39(unk_0x93E99A2DBCBA9CFA()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_39(int iParam0)
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iParam0), 0);
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/])
	{
		unk_0xDD7756E2742E0F6D(Global_59104[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3CC35ACFFC9C730E(Global_59104[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_41(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_42(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

void func_43(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_27(*iParam0);
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

int func_44()
{
	if (func_31(&uLocal_26) < 1f)
	{
		func_43(&iLocal_42);
		return 0;
	}
	if ((!unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x55EDDA33F4D8BBE2(unk_0xC1A5EC5C986B98AD(), Local_31, 90f)) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (unk_0x41AD4BF315E01D41(iLocal_37) != unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (func_30(8, -1))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (Global_97609)
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (Global_32224[iLocal_43 /*11*/].f_8)
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1)
	{
		func_28(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_26(iLocal_42, 1))
	{
		func_43(&iLocal_42);
		func_55(&uLocal_26);
		Global_32224[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0x89A66B65ABE0F206("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0x531D638530A8DB97(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_45(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_45(int iParam0, int iParam1, int iParam2)
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
		func_51((891 + iParam0), 1, -1);
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
		Global_113648.f_10196[iParam0 /*12*/].f_10 = iParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = iParam2;
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
		func_46();
	}
}

void func_46()
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
		func_50(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_49() == 2 == 0 && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()
{
	if (func_48(0))
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

int func_48(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_49()
{
	return Global_32163;
}

int func_50(int iParam0, int iParam1)
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

void func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

void func_52()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0xD0D0D5AD7BA7BF17("tvscreen"))
	{
		unk_0xC7D051779948C4E8("tvscreen");
		iLocal_35 = -1;
		unk_0x70546D13E82214E2(unk_0x4C756857F50C3BFF());
	}
}

void func_53()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_54();
	}
	if (unk_0xD0D0D5AD7BA7BF17("tvscreen"))
	{
		unk_0xC7D051779948C4E8("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x7DE17ACDD8BA2642(iLocal_37))
	{
		func_68();
	}
	iVar0 = unk_0x504B9BB48D41C264(iLocal_37);
	unk_0xDCE8F0B2F7A57CC3("tvscreen", 0);
	unk_0x9D6C4434640FAB90(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x732EDB15717F2504(iVar0))
		{
			if (!unk_0x7DE17ACDD8BA2642(iLocal_37))
			{
				func_68();
			}
			if (!unk_0x4B85D97500605AE9(iLocal_37))
			{
				func_68();
			}
			if (!unk_0xD0D0D5AD7BA7BF17("tvscreen"))
			{
				unk_0xDCE8F0B2F7A57CC3("tvscreen", 0);
			}
			if (!unk_0x732EDB15717F2504(iVar0))
			{
				unk_0x9D6C4434640FAB90(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0xFEAECD5283AE299E("tvscreen");
	func_3();
}

void func_54()
{
	if (unk_0x7DE17ACDD8BA2642(iLocal_37))
	{
		if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0xC3541ED6B6D42728(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0x692C3FDAD7DB53CC(iLocal_37, uLocal_34);
	unk_0x2718E9CC165A99F6(iLocal_37, 1);
	unk_0x724FFAED1C56CE2B(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0xC3541ED6B6D42728(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0x692C3FDAD7DB53CC(iLocal_39, uLocal_34);
	unk_0x2718E9CC165A99F6(iLocal_39, 1);
	unk_0x724FFAED1C56CE2B(iLocal_39, 0, 0);
}

void func_55(var uParam0)
{
	func_56(uParam0, 0f);
}

void func_56(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_32(BitTest(*uParam0, 4)) - fParam1);
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_57()
{
}

int func_58(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

void func_59()
{
	Local_31 = { unk_0x30BE8A934C020461(iLocal_37, 1) };
	uLocal_34 = unk_0xD850DD08D5434072(iLocal_37);
	func_61();
	if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("prop_tv_03"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_43 = 0;
			Local_79 = { -9.8135f, -1440.913f, 31.3654f };
			Local_82 = { 0f, 0f, -134.3211f };
			Local_88 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			Local_79 = { 1978.23f, 3819.65f, 34.2724f };
			Local_82 = { 0f, 0f, -105.15f };
			Local_88 = { 1978.33f, 3819.717f, 32.4501f };
			func_60();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("prop_tv_flat_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_43 = 1;
			Local_79 = { 2.5724f, 527.9989f, 176.1619f };
			Local_82 = { 0f, 0f, -29.9488f };
			Local_88 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("prop_tv_flat_02"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_43 = 3;
			Local_79 = { -1160.502f, -1520.76f, 10.7393f };
			Local_82 = { 0f, 0f, 60.061f };
			Local_88 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_46, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_62, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_scre_off"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_43 = 4;
			Local_79 = { -802.8972f, 172.537f, 74.5801f };
			Local_82 = { 0f, 0f, -69.0273f };
			Local_88 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("des_tvsmash_start"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_43 = 5;
			Local_79 = { -808.3051f, 171.2623f, 77.2822f };
			Local_82 = { 1.8886f, 0f, 110.9232f };
			Local_88 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_60()
{
	iLocal_38 = unk_0xC3541ED6B6D42728(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0x692C3FDAD7DB53CC(iLocal_38, uLocal_34);
	unk_0x724FFAED1C56CE2B(iLocal_38, 1, 0);
	unk_0x2718E9CC165A99F6(iLocal_38, 1);
}

void func_61()
{
	unk_0x32387FC452149DAB(0, func_41(1), 0);
	if (func_58(22))
	{
		unk_0x32387FC452149DAB(1, func_41(12), 0);
	}
	else
	{
		unk_0x32387FC452149DAB(1, func_41(2), 0);
	}
}

void func_62()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_32224[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0x7DE17ACDD8BA2642(iLocal_40))
			{
				unk_0x226C3A30511D5DC4(iLocal_40, 0);
			}
			if (unk_0x7DE17ACDD8BA2642(iLocal_37))
			{
				unk_0x226C3A30511D5DC4(iLocal_37, 0);
			}
			if (unk_0x7DE17ACDD8BA2642(iLocal_39))
			{
				unk_0x226C3A30511D5DC4(iLocal_39, 0);
			}
			if (unk_0x7DE17ACDD8BA2642(iLocal_38))
			{
				unk_0x226C3A30511D5DC4(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0x7DE17ACDD8BA2642(iLocal_40))
		{
			unk_0x226C3A30511D5DC4(iLocal_40, 1);
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_37))
		{
			unk_0x226C3A30511D5DC4(iLocal_37, 1);
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_39))
		{
			unk_0x226C3A30511D5DC4(iLocal_39, 1);
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_38))
		{
			unk_0x226C3A30511D5DC4(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_63(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_64(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_32224[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
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

int func_66()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

void func_67()
{
}

void func_68()
{
	if (iLocal_43 == -1)
	{
		unk_0x675D9C12C73D3DE7();
	}
	func_43(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_32224[iLocal_43 /*11*/].f_6 = 0;
		Global_32224[iLocal_43 /*11*/].f_7 = 0;
		Global_32224[iLocal_43 /*11*/].f_8 = 0;
		Global_32224[iLocal_43 /*11*/].f_4 = 0;
		Global_32224[iLocal_43 /*11*/].f_5 = 0;
		Global_32224[iLocal_43 /*11*/].f_2 = 0;
		Global_32224[iLocal_43 /*11*/] = -1;
		Global_32224[iLocal_43 /*11*/].f_1 = 0;
		Global_32224[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_42("TV_HLP1") || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0xCD3C8E1022864F65(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_69();
	if (unk_0xD19C2C73F4D74992(&cLocal_62))
	{
		unk_0x3FA8C73B5856A3E4(&cLocal_62);
	}
	unk_0xAC9AB2480D86BBAD();
	func_2();
	unk_0x675D9C12C73D3DE7();
}

void func_69()
{
	func_52();
	if (unk_0x7DE17ACDD8BA2642(iLocal_37))
	{
		if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xEF078F1FEE785D3E(&iLocal_37);
			unk_0xE0A291F406691F03(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_39))
	{
		unk_0xEF078F1FEE785D3E(&iLocal_39);
		unk_0xE0A291F406691F03(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_38))
	{
		unk_0xEF078F1FEE785D3E(&iLocal_38);
		unk_0xE0A291F406691F03(joaat("prop_tt_screenstatic"));
	}
}

