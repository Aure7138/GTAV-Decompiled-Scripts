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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	struct<27> Local_83 = { 0, 0, 0, 0, -644710429, 32417469, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_110 = 0;
	struct<3> Local_111[32];
	var uLocal_208 = 0;
	int iLocal_209 = 0;
	var uLocal_210 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x9315DBF7D972F07A() && func_225(unk_0x9E2D6C50374FCFA9(), 0, 1))
	{
		func_210(ScriptParam_0);
	}
	else
	{
		func_206();
	}
	while (true)
	{
		func_205();
		if (func_197() || func_193(15))
		{
			func_206();
		}
		if (unk_0x0843570206F71F38())
		{
			func_206();
		}
		switch (func_192(unk_0xF1354995C6159A78()))
		{
			case 0:
				if (func_191() == 1)
				{
					if (func_190(60000))
					{
						if (unk_0xCCDCD6672DAE6835(Local_83.f_2))
						{
							if (unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(Local_83.f_2), 0))
							{
								if (!func_189())
								{
									if (!BitTest(Local_83.f_1, 0))
									{
										func_188("PTD_HELP1", -1);
									}
									else
									{
										func_188("PTD_HELP1H", -1);
									}
								}
							}
						}
					}
					Local_111[unk_0xF1354995C6159A78() /*3*/] = 1;
				}
				else if (func_191() == 4)
				{
					Local_111[unk_0xF1354995C6159A78() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_191() == 1)
				{
					func_22();
				}
				else if (func_191() == 4)
				{
					Local_111[unk_0xF1354995C6159A78() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_21(&(Local_83.f_24));
				if (func_20(&(Local_83.f_24)))
				{
					Local_111[unk_0xF1354995C6159A78() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_111[unk_0xF1354995C6159A78() /*3*/] = 4;
			
			case 4:
				func_206();
				break;
		}
		if (unk_0x54E30A65F4FA4962())
		{
			switch (func_191())
			{
				case 0:
					if (func_11())
					{
						Local_83.f_0 = 1;
					}
					break;
				
				case 1:
					func_10();
					func_9();
					if (func_1())
					{
						Local_83.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	struct<14> Var0;
	struct<14> Var14;
	
	if (func_7(Local_83.f_2))
	{
		if (Local_83.f_22 > 0)
		{
			if (unk_0xCCDCD6672DAE6835(Local_83.f_2))
			{
				if (!unk_0xD132EDDA78FF4A51(unk_0xA5677134B9672173(Local_83.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, 0, 1, 0))
				{
					if (!BitTest(Local_83.f_1, 0))
					{
						Var0.f_2 = -834923907;
					}
					else
					{
						Var0.f_2 = 990698863;
					}
					func_5(Var0, func_6(1));
					unk_0xCED9E32812D6C7C7(&(Local_83.f_1), true);
					return 1;
				}
			}
		}
	}
	if (Local_83.f_23 == 0)
	{
		if (Local_83.f_0 != 4)
		{
			if (unk_0xCCDCD6672DAE6835(Local_83.f_2))
			{
				if (unk_0x55B23FE400FCEA6B(unk_0xA5677134B9672173(Local_83.f_2), 0))
				{
					if (func_3(&(Local_83.f_26), 3000, 0))
					{
						if (!BitTest(Local_83.f_1, 0))
						{
							Var14.f_2 = -762167709;
						}
						else
						{
							Var14.f_2 = -208885833;
						}
						func_5(Var14, func_6(1));
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

void func_4(var uParam0, bool bParam1, bool bParam2)
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

void func_5(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -1529596656;
	Param0.f_1 = unk_0x9E2D6C50374FCFA9();
	if (!iParam14 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Param0, 14, iParam14);
	}
}

int func_6(int iParam0)
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
			if (func_225(bVar2, 0, 0))
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

int func_7(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return !func_8(unk_0xA5677134B9672173(uParam0));
	}
	return 0;
}

int func_8(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
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

void func_9()
{
	switch (Local_83.f_23)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_10()
{
	struct<14> Var0;
	var uVar14;
	
	if (unk_0x55B23FE400FCEA6B(unk_0xA5677134B9672173(Local_83.f_2), 0))
	{
		if (Local_83.f_0 != 4)
		{
			iLocal_209 = 0;
			while (iLocal_209 < unk_0x5D79167FED95F0B0())
			{
				if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iLocal_209)))
				{
					uVar14 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iLocal_209));
					if (BitTest(Local_111[iLocal_209 /*3*/].f_1, 0))
					{
						if (!BitTest(Local_83.f_1, 0))
						{
							Var0.f_2 = 1338180443;
						}
						else
						{
							Var0.f_2 = -1747140958;
						}
						Var0.f_10 = uVar14;
						func_5(Var0, func_6(1));
						Local_83.f_0 = 4;
						return;
					}
					if (BitTest(Local_111[iLocal_209 /*3*/].f_1, 1))
					{
						if (!BitTest(Local_83.f_1, 2))
						{
							unk_0xCED9E32812D6C7C7(&(Local_83.f_1), 2);
						}
					}
				}
				iLocal_209++;
			}
		}
	}
}

int func_11()
{
	if (func_19(Local_83.f_4) && func_19(Local_83.f_5))
	{
		if (func_14() && func_12())
		{
			unk_0xF1A23B343DFEDFD0(Local_83.f_4);
			unk_0xF1A23B343DFEDFD0(Local_83.f_5);
			return 1;
		}
	}
	return 0;
}

int func_12()
{
	if ((!unk_0xCCDCD6672DAE6835(Local_83.f_3) && func_19(Local_83.f_5)) && unk_0xCCDCD6672DAE6835(Local_83.f_2))
	{
		if (func_7(Local_83.f_2))
		{
			if (func_13(&(Local_83.f_3), Local_83.f_2, 22, Local_83.f_5, -1, 1, 1, 1))
			{
				unk_0x50274A7EACA3133A(unk_0x8AF984152F749D80(Local_83.f_3), 1);
				unk_0xFF4BEB6CFF55A013(unk_0x8AF984152F749D80(Local_83.f_3), Global_1837196);
				unk_0x6E9C0F9EAC1F29FD(unk_0x8AF984152F749D80(Local_83.f_3), 0);
				unk_0xABC2CA6F28903308(unk_0x8AF984152F749D80(Local_83.f_3), 1);
			}
		}
	}
	if (!unk_0xCCDCD6672DAE6835(Local_83.f_3))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xA777DF215CCFCC77(1))
	{
		return 0;
	}
	if (!unk_0xCCDCD6672DAE6835(uParam1))
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xED28EE4BE581A032(unk_0x487C17B41938052C(unk_0xA5677134B9672173(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		unk_0x398C962F550CF3B4(unk_0x8AF984152F749D80(*uParam0), iParam7);
		if (unk_0xD64C90C3F536F963(unk_0x8AF984152F749D80(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x4C6E9D70687FCDCE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_14()
{
	var uVar0;
	
	if (!unk_0xCCDCD6672DAE6835(Local_83.f_2))
	{
		if (func_19(Local_83.f_4))
		{
			if (func_15(&(Local_83.f_2), Local_83.f_4, Local_83.f_6, func_18(Local_83.f_6, Local_83.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				unk_0x3B2646B62E7BBE11(unk_0xA5677134B9672173(Local_83.f_2), 2);
				unk_0x5C65DDDC219B3AA5(unk_0xA5677134B9672173(Local_83.f_2), 0);
				unk_0x4536AE3DABDE0C44(unk_0xA5677134B9672173(Local_83.f_2), 1);
				unk_0xAA8C46C452582702(unk_0xA5677134B9672173(Local_83.f_2));
				unk_0xB2D5451CC5606248(unk_0xA5677134B9672173(Local_83.f_2), 30f);
				unk_0xBAAB64584D161C4D(unk_0xA5677134B9672173(Local_83.f_2));
				unk_0x371D594409A68A18(unk_0xA5677134B9672173(Local_83.f_2), 1, 1, 0);
				unk_0x67829E7E051CA476(unk_0xA5677134B9672173(Local_83.f_2), 0);
				unk_0x398C962F550CF3B4(unk_0xA5677134B9672173(Local_83.f_2), 0);
				if (Local_83.f_4 == joaat("cuban800"))
				{
					unk_0x3739DEED4A756E69(unk_0xA5677134B9672173(Local_83.f_2), 3);
				}
				if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
				{
					if (unk_0xF2549FF74D64B720(unk_0xA5677134B9672173(Local_83.f_2), "MPBitset"))
					{
						uVar0 = unk_0xC3B76795ECBDEF41(unk_0xA5677134B9672173(Local_83.f_2), "MPBitset");
					}
					unk_0xCED9E32812D6C7C7(&uVar0, 10);
					unk_0x05B874E9ABFF72B4(unk_0xA5677134B9672173(Local_83.f_2), "MPBitset", uVar0);
				}
			}
		}
	}
	if (!unk_0xCCDCD6672DAE6835(Local_83.f_2))
	{
		return 0;
	}
	return 1;
}

int func_15(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
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
			func_16(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_16(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_17(unk_0x9E2D6C50374FCFA9(), Param0, iParam4) > -1)
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

int func_17(int iParam0, struct<3> Param1, int iParam4)
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

var func_18(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xD12EFCAB87804BED((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_19(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

int func_20(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_21(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x54E30A65F4FA4962())
		{
			func_4(uParam0, 0, 0);
		}
	}
}

void func_22()
{
	switch (Local_111[unk_0xF1354995C6159A78() /*3*/].f_2)
	{
		case 0:
			func_186();
			func_23();
			if (Local_83.f_23 > 0)
			{
				Local_111[unk_0xF1354995C6159A78() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_206();
			break;
	}
}

void func_23()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar9;
	
	if (unk_0xCCDCD6672DAE6835(Local_83.f_2))
	{
		if (!BitTest(Local_111[unk_0xF1354995C6159A78() /*3*/].f_1, 0))
		{
			if (!unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(Local_83.f_2), 0))
			{
			}
			if (unk_0x55B23FE400FCEA6B(unk_0xA5677134B9672173(Local_83.f_2), 0))
			{
			}
			if (unk_0x55B23FE400FCEA6B(unk_0xA5677134B9672173(Local_83.f_2), 0))
			{
				if (unk_0x9E2D6C50374FCFA9() == unk_0x2AA852E1EBB27A57(Local_83.f_2, &uVar0))
				{
					func_185(2063, -1);
					iVar1 = func_184(2063, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_8563)
					{
						iVar2 = Global_262145.f_8563;
					}
					iVar3 = (Global_262145.f_8561 * iVar2);
					func_129(0, unk_0xE2D3D51028F0428A(), "XPT_KAIE", -875716015, -1219286988, iVar3, 1, -1, 0, 0, 0);
					if (iVar1 > Global_262145.f_8562)
					{
						iVar1 = Global_262145.f_8562;
					}
					iVar4 = (Global_262145.f_8560 * iVar1);
					func_125(iVar4, 1, 1, 1092616192);
					Global_2727753 = iVar4;
					func_61(&iVar4, 1);
					if (iVar4 > 0)
					{
						if (func_60())
						{
							func_48(1780666425, iVar4, &uVar9, 0, 0, 0);
						}
						else
						{
							unk_0xC1F6879B97D260F3(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
						}
					}
					func_43(65, 1, -1);
					if (func_42())
					{
						func_29(2, "PTD_PASS0", 0, 0, -99);
					}
					else
					{
						func_29(2, "PTD_PASS1", 0, 0, -99);
					}
					unk_0xCED9E32812D6C7C7(&(Local_111[unk_0xF1354995C6159A78() /*3*/].f_1), false);
				}
			}
			else
			{
				if (unk_0x54E30A65F4FA4962())
				{
					if (Local_83.f_22 < 4)
					{
						if (unk_0x8F41785F110B0DA0(unk_0xA5677134B9672173(Local_83.f_2), Local_83.f_9[Local_83.f_22 /*3*/], 50f, 50f, 500f, 0, 1, 0))
						{
							Local_83.f_22++;
						}
					}
				}
				if (unk_0x07B2F8356DC13CF4(Local_83.f_2))
				{
					func_27();
					if (func_26())
					{
						if (func_25(Local_83.f_2) && func_25(Local_83.f_3))
						{
							unk_0x04375AABE1BE38AE(unk_0xA5677134B9672173(Local_83.f_2), 1, 1, -1);
							if (unk_0x90F6E2F6488B98BA(Local_83.f_2))
							{
								func_24(&(Local_83.f_2));
							}
							if (unk_0x90F6E2F6488B98BA(Local_83.f_3))
							{
								unk_0xABC2CA6F28903308(unk_0x8AF984152F749D80(Local_83.f_3), 1);
								func_24(&(Local_83.f_3));
							}
						}
					}
				}
			}
		}
	}
}

void func_24(var uParam0)
{
	var uVar0;
	
	if (unk_0x90F6E2F6488B98BA(*uParam0))
	{
		uVar0 = unk_0xF2D8DACFAEBD9629(*uParam0);
		unk_0xEC548B5E95E61DF6(&uVar0);
	}
}

int func_25(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		unk_0xC31EECA11005273C(uParam0);
		return unk_0x07B2F8356DC13CF4(uParam0);
	}
	return 0;
}

int func_26()
{
	if (unk_0xCCDCD6672DAE6835(Local_83.f_2))
	{
		if (unk_0xF798DCF92C74B531(unk_0xA5677134B9672173(Local_83.f_2), 0, 7000))
		{
			return 1;
		}
		if (unk_0xF798DCF92C74B531(unk_0xA5677134B9672173(Local_83.f_2), 1, 40000))
		{
			return 1;
		}
		if (unk_0xF798DCF92C74B531(unk_0xA5677134B9672173(Local_83.f_2), 3, 30000))
		{
			return 1;
		}
		if (unk_0xF798DCF92C74B531(unk_0xA5677134B9672173(Local_83.f_2), 2, 30000))
		{
			return 1;
		}
	}
	return 0;
}

void func_27()
{
	struct<3> Var0;
	
	if (func_7(Local_83.f_2) && !func_28(Local_83.f_3))
	{
		if (unk_0xF6F5D18EF8EAB859(unk_0x8AF984152F749D80(Local_83.f_3), unk_0xA5677134B9672173(Local_83.f_2), 0))
		{
			if (Local_83.f_22 < 4)
			{
				if (!BitTest(Local_83.f_1, 0))
				{
					unk_0xCDAACB23D43F080D(unk_0x8AF984152F749D80(Local_83.f_3), unk_0xA5677134B9672173(Local_83.f_2), 0, 0, Local_83.f_9[Local_83.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, 1);
				}
				else
				{
					unk_0x545C59578966D5B8(unk_0x8AF984152F749D80(Local_83.f_3), unk_0xA5677134B9672173(Local_83.f_2), 0, 0, Local_83.f_9[Local_83.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1082130432, 0);
				}
			}
			else if (!BitTest(Local_83.f_1, 2) && !BitTest(Local_111[unk_0xF1354995C6159A78() /*3*/].f_1, 1))
			{
				Var0 = { unk_0xCACAD935C0BEE14F(unk_0xA5677134B9672173(Local_83.f_2), 0f, 12000f, 0f) };
				if (Var0.f_0 < -3700f)
				{
					Var0.f_0 = -3700f;
				}
				else if (Var0.f_0 > 4500f)
				{
					Var0.f_0 = 4500f;
				}
				if (Var0.f_1 < -3900f)
				{
					Var0.f_1 = -3900f;
				}
				else if (Var0.f_1 > 8000f)
				{
					Var0.f_1 = 8000f;
				}
				Var0.f_2 = 100f;
				if (!BitTest(Local_83.f_1, 0))
				{
					unk_0xCDAACB23D43F080D(unk_0x8AF984152F749D80(Local_83.f_3), unk_0xA5677134B9672173(Local_83.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, 1);
				}
				else
				{
					unk_0x545C59578966D5B8(unk_0x8AF984152F749D80(Local_83.f_3), unk_0xA5677134B9672173(Local_83.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, -1082130432, 0);
				}
				unk_0xCED9E32812D6C7C7(&(Local_111[unk_0xF1354995C6159A78() /*3*/].f_1), true);
			}
		}
	}
}

int func_28(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return unk_0xF68107C40359970C(unk_0x8AF984152F749D80(uParam0));
	}
	return 1;
}

void func_29(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_30(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_30(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_31(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_31(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xACC32B78196FBC2A(sParam1))
	{
		return;
	}
	if (unk_0x4B83FFC4B00987D9(sParam1) > 15)
	{
		return;
	}
	if (!unk_0xACC32B78196FBC2A(sParam4))
	{
		if (unk_0x4B83FFC4B00987D9(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_40();
	if (iVar0 == -1)
	{
		return;
	}
	func_39(iVar0);
	func_38(iVar0, uParam0);
	func_37(iVar0, uParam2, bParam3);
	func_36(iVar0, sParam1);
	if (unk_0xACC32B78196FBC2A(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_35(iVar0);
	if (!unk_0xACC32B78196FBC2A(sParam4))
	{
		func_33(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_32(iVar0, iParam6);
	}
}

void func_32(int iParam0, int iParam1)
{
	Global_1641031.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_33(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1641031.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_34(iParam0);
}

void func_34(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&(Global_1641031.f_59[iParam0 /*16*/]), 5);
}

void func_35(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&(Global_1641031.f_59[iParam0 /*16*/]), 4);
}

void func_36(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1641031.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_37(int iParam0, var uParam1, bool bParam2)
{
	Global_1641031.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1641031.f_59[iParam0 /*16*/]), 2);
		unk_0xB0550BC91B0159D6(&(Global_1641031.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Global_1641031.f_59[iParam0 /*16*/]), 3);
		unk_0xB0550BC91B0159D6(&(Global_1641031.f_59[iParam0 /*16*/]), 2);
	}
}

void func_38(int iParam0, var uParam1)
{
	Global_1641031.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_39(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&(Global_1641031.f_59[iParam0 /*16*/]), false);
}

int func_40()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_41(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)
{
	return BitTest(Global_1641031.f_59[iParam0 /*16*/], 0);
}

int func_42()
{
	if (BitTest(unk_0x5853B15F78E1A265(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_45(iParam0, func_46(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_44(iParam0, iVar0, iParam2);
}

void func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_46(iParam2)];
	unk_0x076A5661EF5ABEE4(iVar0, iParam1, 1);
}

int func_45(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2868734[iParam0 /*3*/][func_46(iParam1)];
	if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

int func_47()
{
	return Global_1574918;
}

void func_48(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_60())
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
				func_49(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_49(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_49(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_49(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_60())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_47()) || unk_0xBA5B5030B7954DAA())
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
			*uParam0 = func_56(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_55(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_50(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_50(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xCED9E32812D6C7C7(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_51(iParam0);
	}
}

void func_51(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_60())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_54(iParam0))
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
		func_52(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_52(var uParam0)
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
	func_53(&(uParam0->f_14));
	func_53(&(uParam0->f_14.f_13));
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

void func_53(var uParam0)
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

int func_54(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_55(int iParam0, var uParam1)
{
	Global_2727893 = uParam1;
	Global_2727892 = iParam0;
}

int func_56(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_60())
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
				func_57(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_57(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_59(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_58();
		unk_0x2700C00F82C16BF0(1, &Var0, 36, iVar36);
	}
}

void func_58()
{
	unk_0xAF76A37C80EFD1D8("AM_ARENA_SHP");
}

var func_59(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, bParam0);
	}
	return uVar0;
}

int func_60()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_124())
		{
			if (func_123(0))
			{
				if (!func_119(0))
				{
					if (unk_0x0D01086B38EC256F(func_118()))
					{
						if (func_117() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_117());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_115(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_66("GB_BCUT_TICK1", func_118(), iVar0, 0, 0, 1);
						}
						func_65(20);
						func_62(func_118(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_62(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_225(bParam0, 0, 1))
	{
		Var0.f_0 = 1146470621;
		Var0.f_1 = unk_0x9E2D6C50374FCFA9();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_64(bParam0);
		func_63(&(Var0.f_6), &(Var0.f_7));
		unk_0x2700C00F82C16BF0(1, &Var0, 8, func_59(bParam0));
	}
}

void func_63(var uParam0, var uParam1)
{
	*uParam0 = Global_1920255.f_9;
	*uParam1 = Global_1920255.f_10;
}

var func_64(int iParam0)
{
	return Global_1892703[iParam0 /*599*/].f_510;
}

void func_65(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	unk_0xCED9E32812D6C7C7(&(Global_2815059.f_5195.f_7[iVar0]), bVar1);
}

int func_66(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0x138506D6C7564EF1(func_75(iParam1, -2, 1, 0, 0));
		unk_0x76DB21247AE4E4E2(func_73(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x138506D6C7564EF1(iParam3);
		}
		unk_0x2AE954BA77A66307(iParam2);
		iVar0 = unk_0x187DF98ED95E5557(0, 1);
		func_67(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_67(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_72() || !unk_0x44859561F653DD4E()) || !func_70(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return;
	}
	iVar0 = func_68(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1940311.f_5[iVar0 /*53*/] = iParam0;
		Global_1940311.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1940311.f_5[iVar0 /*53*/].f_2[0] = uParam4;
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

int func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1940311 - 1))
	{
		if (iParam0 > Global_1940311.f_5[iVar0 /*53*/].f_1)
		{
			func_69(iVar0);
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

void func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1940311.f_5[iVar0 /*53*/] = { Global_1940311.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_70(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_71(-1, 0) == 8;
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

int func_71(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

bool func_72()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}

var func_73(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_74(&cVar0);
}

var func_74(char[4] cParam0)
{
	return cParam0;
}

int func_75(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_113(iParam0) && !bParam4)
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
	if (((func_113(unk_0x9E2D6C50374FCFA9()) || (func_112() && func_111())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		uVar1 = func_110();
		if (unk_0xE5965CDF24F93A9F(uVar1))
		{
			if (unk_0x65FAB09725E2FE75(iVar1))
			{
				if (unk_0xFF65CDB0EB7ACE71(iVar1) != -1)
				{
					if (func_225(unk_0xFF65CDB0EB7ACE71(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return func_108(iParam1, iParam0, 0);
							}
							else
							{
								return func_88(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_88(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return func_108(iParam1, iParam0, 0);
				}
				else
				{
					return func_76(0, -1, 0);
				}
			}
			else
			{
				return func_76(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return func_108(iParam1, iParam0, 0);
		}
		else
		{
			return func_88(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
		}
	}
	return func_88(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
}

int func_76(bool bParam0, int iParam1, bool bParam2)
{
	return func_77(unk_0x9E2D6C50374FCFA9(), bParam0, iParam1, bParam2);
}

int func_77(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x0D01086B38EC256F(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	if ((func_87() || (func_86() && func_84())) && Global_1659814.f_1)
	{
		if (bParam1)
		{
			return func_83(iParam2, iVar0);
		}
		else
		{
			return func_83(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_82(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_81(1);
				}
				else
				{
					return func_81(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_78(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_78(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_81(1);
	}
	return func_81(0);
}

int func_78(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_80(iParam0, iParam1, iParam3);
	if (func_79(Global_4718592.f_116524, 1))
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

int func_79(int iParam0, bool bParam1)
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

int func_80(int iParam0, int iParam1, int iParam2)
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
			if (!func_82(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_81(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_82(int iParam0, int iParam1, int iParam2)
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

int func_83(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_80(iParam1, iParam0, 4);
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

int func_84()
{
	if (func_85())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_172946, 4);
}

bool func_85()
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_86()
{
	if (unk_0x44859561F653DD4E())
	{
		return BitTest(Global_4718592.f_172946, 0);
	}
	return ((BitTest(Global_4718592.f_172946, 0) || Global_1922895) && unk_0xB4C854DD86E40FDA(joaat("fm_deathmatch_creator")) > 0);
}

int func_87()
{
	if (func_85() && unk_0x44859561F653DD4E())
	{
		return 1;
	}
	return 0;
}

int func_88(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_98())
			{
				iVar3 = func_93(iParam0);
				if (!iVar3 == -1)
				{
					return func_91(iVar3);
				}
			}
			if ((func_90(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_82(unk_0x0E40F846A70BA3EC(iParam1), unk_0x0E40F846A70BA3EC(iParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_81(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_89(1);
			}
			else
			{
				return func_77(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[iParam0 /*834*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return func_81(1);
			}
			else
			{
				return func_77(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_93(iParam0);
	if (!iVar4 == -1)
	{
		return func_91(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_89(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_90(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_91(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_92(iParam0);
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

var func_92(int iParam0)
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_93(int iParam0)
{
	if (!iParam0 == func_97())
	{
		if (func_95(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_94(iParam0)];
		}
	}
	return -1;
}

int func_94(int iParam0)
{
	if (iParam0 != func_97())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_97();
}

bool func_95(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_96(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_97();
}

int func_96(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_97())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_97()
{
	return -1;
}

int func_98()
{
	if ((((((func_107() || func_106()) || func_105()) || func_104()) || func_103()) || func_101()) || func_99())
	{
		return 1;
	}
	if (unk_0x44859561F653DD4E() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	return func_100(Global_4718592.f_116524);
}

int func_100(int iParam0)
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

int func_101()
{
	return func_102(Global_4718592.f_116524);
}

int func_102(int iParam0)
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

var func_103()
{
	return Global_2714762.f_24;
}

var func_104()
{
	return Global_2714762.f_21;
}

var func_105()
{
	return Global_2714762.f_19;
}

var func_106()
{
	return Global_2714762.f_18;
}

var func_107()
{
	return Global_2714762.f_17;
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058069.f_14[iParam0];
	if (func_98())
	{
		iVar2 = func_93(iParam1);
		if (!iVar2 == -1)
		{
			return func_91(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_7911[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_97())
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
			iVar0 = func_77(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_109(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_82(iParam0, unk_0x0E40F846A70BA3EC(iParam1), 0))
		{
			iVar0 = func_89(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_109(int iParam0)
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

var func_110()
{
	return Global_2621446.f_2;
}

var func_111()
{
	return BitTest(Global_2621446, 4);
}

var func_112()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 14);
}

int func_113(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return 1;
	}
	if (func_114())
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

bool func_114()
{
	return BitTest(Global_2621446, 3);
}

void func_115(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_116(1);
	}
	else
	{
		iVar1 = func_116(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_116(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_12862;
}

int func_117()
{
	return Global_262145.f_12861;
}

bool func_118()
{
	return Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_10;
}

bool func_119(bool bParam0)
{
	return func_120(unk_0x9E2D6C50374FCFA9(), bParam0);
}

int func_120(int iParam0, bool bParam1)
{
	return func_121(iParam0, bParam1, 1);
}

int func_121(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_97())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_122(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_97() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0, int iParam1)
{
	if (iParam0 != func_97())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_97())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_123(bool bParam0)
{
	return func_95(unk_0x9E2D6C50374FCFA9(), bParam0);
}

bool func_124()
{
	return func_96(unk_0x9E2D6C50374FCFA9());
}

void func_125(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_126(iParam0, iParam1, iParam2, fParam3);
}

void func_126(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_127(iParam0, iParam1, iParam2, fParam3);
}

void func_127(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_4 = iVar1;
	Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_3 = (Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_128(iVar1, 0);
	}
}

void func_128(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_129(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_130(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_130(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_140(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (unk_0x44859561F653DD4E() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x9044EDB8A7BF67B4(iParam1))
			{
				uVar1 = unk_0x28AA31872A651BC7(iParam1);
				func_136(unk_0x6EA486FF6D815B4B(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_131(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_131(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_134(iParam0, 1) };
	if (iParam0 == func_133(unk_0xE2D3D51028F0428A()))
	{
		func_132(1);
	}
	func_136(Var0, iParam1, 0, sParam2, uParam3);
}

void func_132(int iParam0)
{
	Global_2703735.f_1568 = iParam0;
}

int func_133(var uParam0)
{
	return uParam0;
}

Vector3 func_134(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x66DEF7450747437A())
	{
		Var3 = { unk_0x9C0ED16B4F524508(2) };
	}
	if (iParam0 == func_135(unk_0xE2D3D51028F0428A()) && unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
	{
		Var0 = { unk_0xCACAD935C0BEE14F(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		fVar6 = unk_0x82FE2343F8BDFF0B(iParam0);
		if (unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xB38EF75835FAF667(unk_0x15CAA6D7B11F1A7C(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x6DB7FBD602C51670(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_135(var uParam0)
{
	return uParam0;
}

void func_136(struct<3> Param0, int iParam3, int iParam4, char* sParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703735.f_967[iVar0 /*30*/].f_6 == 0 || Global_2703735.f_967[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703735.f_967[iVar1 /*30*/] = { Param0 };
			Global_2703735.f_967[iVar1 /*30*/].f_6 = 1;
			Global_2703735.f_967[iVar1 /*30*/].f_4 = func_139(Global_2703735.f_967[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703735.f_967[iVar1 /*30*/].f_7 = unk_0x0A89FDFA763DCAED();
			Global_2703735.f_967[iVar1 /*30*/].f_3 = iParam3;
			Global_2703735.f_967[iVar1 /*30*/].f_8 = iParam4;
			Global_2703735.f_967[iVar1 /*30*/].f_9 = func_138();
			Global_2703735.f_967[iVar1 /*30*/].f_10 = func_137();
			StringCopy(&(Global_2703735.f_967[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2703735.f_967[iVar1 /*30*/].f_26 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), uParam6);
		}
	}
}

int func_137()
{
	if (Global_2703735.f_1568)
	{
		Global_2703735.f_1568 = 0;
		return 1;
	}
	Global_2703735.f_1568 = 0;
	return 0;
}

var func_138()
{
	var uVar0;
	
	uVar0 = Global_2703735.f_1570;
	Global_2703735.f_1570 = 1;
	return uVar0;
}

float func_139(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x987A5F1E1A67E3C0(unk_0xCB284F809B594322(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_140(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_141(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_141(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_175();
	if (func_174(uParam2))
	{
	}
	if (func_173())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_171(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_170(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_167(0, &iVar1);
					break;
				
				case 3:
					func_167(1, &iVar1);
					break;
				
				case 1:
					func_164(&iVar1);
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
			func_162(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_152((func_161(unk_0x9E2D6C50374FCFA9()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5842EA5D6A4620E2(iVar1, iParam8, iParam9);
				if (Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_2 != -1)
				{
					func_162(1166, iVar1, -1);
				}
				func_146(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_142((func_144(unk_0x9E2D6C50374FCFA9()) + iVar1));
			}
			else
			{
				func_142((func_144(unk_0x9E2D6C50374FCFA9()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_142(int iParam0)
{
	if (func_173())
	{
		Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_5 = iParam0;
		func_143(joaat("mpply_globalxp"), iParam0);
	}
}

void func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, 1);
	}
}

int func_144(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_225(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return func_145(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_5;
			}
		}
		else
		{
			return func_145(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_145(int iParam0)
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

void func_146(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_151(unk_0x9E2D6C50374FCFA9()) };
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(&Var0))
		{
			iVar13 = func_149(func_150(&Var0));
			if (iVar13 == 0)
			{
				func_148(&Global_1659614, iParam0);
				func_147(joaat("mpply_crew_local_xp_0"), Global_1659614);
			}
			else if (iVar13 == 1)
			{
				func_148(&Global_1659615, iParam0);
				func_147(joaat("mpply_crew_local_xp_1"), Global_1659615);
			}
			else if (iVar13 == 2)
			{
				func_148(&Global_1659616, iParam0);
				func_147(joaat("mpply_crew_local_xp_2"), Global_1659616);
			}
			else if (iVar13 == 3)
			{
				func_148(&Global_1659617, iParam0);
				func_147(joaat("mpply_crew_local_xp_3"), Global_1659617);
			}
			else if (iVar13 == 4)
			{
				func_148(&Global_1659618, iParam0);
				func_147(joaat("mpply_crew_local_xp_4"), Global_1659618);
			}
		}
	}
}

void func_147(int iParam0, int iParam1)
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

void func_148(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_149(int iParam0)
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

int func_150(var uParam0)
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

struct<13> func_151(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

void func_152(int iParam0, int iParam1, int iParam2)
{
	if (func_173())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10069 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1659759[func_46(-1)])
				{
					unk_0x5842EA5D6A4620E2(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1659759[func_46(-1)])
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
		if (func_160(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_1 = iParam0;
			Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_6 = func_158(iParam0, 1);
		}
		func_157(640, iParam0, -1, 1);
		func_156(641, func_158(iParam0, 1), -1, 1, 0);
		Global_1659759[func_46(-1)] = iParam0;
		func_153(-1109644434, 7, 0);
	}
}

void func_153(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_155(iParam1, iParam2))
	{
		iVar0 = func_154();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_154()
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

int func_155(int iParam0, var uParam1)
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

void func_156(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_46(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

void func_157(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_46(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_46(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1659693[func_46(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1659699[func_46(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1659705[func_46(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1659711[func_46(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1659657[func_46(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1659663[func_46(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1659669[func_46(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1659675[func_46(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1659681[func_46(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1659627[func_46(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1659633[func_46(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1659639[func_46(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1659645[func_46(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1659651[func_46(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1659717[func_46(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1659723[func_46(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1659729[func_46(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1659735[func_46(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1659741[func_46(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1659747[func_46(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1659753[func_46(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1659759[func_46(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1659765[func_46(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 11391:
			Global_2869950[func_46(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1659771[func_46(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1659777[func_46(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1659783[func_46(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1659789[func_46(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1659795[func_46(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1659801[func_46(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2869985[func_46(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2869994[func_46(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2869988[func_46(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2869997[func_46(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2869991[func_46(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2870000[func_46(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2870003[func_46(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2870006[func_46(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2870009[func_46(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2870012[func_46(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2870015[func_46(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2870018[func_46(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2870021[func_46(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2870024[func_46(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2870027[func_46(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2870030[func_46(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2870033[func_46(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2870036[func_46(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2870039[func_46(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2870042[func_46(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2870045[func_46(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_158(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_159(iParam0, 0);
}

int func_159(int iParam0, int iParam1)
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

int func_160(int iParam0)
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

int func_161(int iParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return Global_1659759[func_46(-1)];
			}
			else if (func_160(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[func_46(-1)];
	}
	return 0;
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_184(iParam0, func_46(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_163(iParam0))
	{
		func_156(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_157(iParam0, iVar0, iParam2, 1);
	}
}

int func_163(int iParam0)
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

void func_164(int iParam0)
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
				if (unk_0x0E40F846A70BA3EC(iVar5) == iVar1 || func_82(unk_0x0E40F846A70BA3EC(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9E2D6C50374FCFA9())
					{
						if (func_166(unk_0x9E2D6C50374FCFA9(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_165(*iParam0, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_165(*iParam0, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_165(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_166(int iParam0, int iParam1)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		Global_2787505 = { func_151(iParam0) };
		Global_2787518 = { func_151(iParam1) };
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

void func_167(bool bParam0, int iParam1)
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
				if (func_225(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9E2D6C50374FCFA9())
					{
						iVar1++;
						if (func_166(unk_0x9E2D6C50374FCFA9(), iVar4))
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
			if (func_225(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9E2D6C50374FCFA9())
				{
					if (func_168(unk_0x9E2D6C50374FCFA9(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_166(unk_0x9E2D6C50374FCFA9(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_165(*iParam1, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_165(*iParam1, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_168(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_169(iParam0), func_169(iParam1));
	return 0f;
}

Vector3 func_169(var uParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(uParam0), 0);
}

int func_170(int iParam0)
{
	int iVar0;
	
	if (unk_0x6F8BA9EF200E4310() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_165(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_171(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x07141611FD632B59(iParam0) > func_161(unk_0x9E2D6C50374FCFA9()))
		{
			iParam0 = -func_161(unk_0x9E2D6C50374FCFA9());
		}
	}
	if (func_172(8000, 0, 0) > 0)
	{
		if (func_172(8000, 0, 0) < (iParam0 + func_161(unk_0x9E2D6C50374FCFA9())))
		{
			iParam0 = (func_172(8000, 0, 0) - func_161(unk_0x9E2D6C50374FCFA9()));
		}
	}
	return iParam0;
}

int func_172(int iParam0, bool bParam1, int iParam2)
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

int func_173()
{
	return 1;
}

int func_174(var uParam0)
{
	if (unk_0xE8F6C1F695B25B91(uParam0))
	{
		return 1;
	}
	else if (unk_0x3C57C2F07FEE34D2(uParam0, "") || unk_0x3C57C2F07FEE34D2(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_175()
{
	int iVar0;
	
	if (func_183(unk_0x9E2D6C50374FCFA9()) || func_182(unk_0x9E2D6C50374FCFA9()))
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
	else if (func_180() || func_176(unk_0x9E2D6C50374FCFA9()))
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

int func_176(int iParam0)
{
	return func_177(func_178(iParam0));
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_178(int iParam0)
{
	if (func_179(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_179(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_105();
	}
	return func_181(Global_4718592.f_116524);
}

int func_181(int iParam0)
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

bool func_182(int iParam0)
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

bool func_183(int iParam0)
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

int func_184(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2826809[iParam0 /*3*/][func_46(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_185(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_184(iParam0, func_46(iParam1), 0);
	iVar0++;
	if (!func_163(iParam0))
	{
		func_156(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_157(iParam0, iVar0, iParam1, 1);
	}
}

void func_186()
{
	if (unk_0xCCDCD6672DAE6835(Local_83.f_2) && !unk_0x55B23FE400FCEA6B(unk_0xA5677134B9672173(Local_83.f_2), 0))
	{
		if (!unk_0x12DD4A0B247D9B4D(uLocal_210))
		{
			uLocal_210 = unk_0xEFD6451BF0F3352F(unk_0xA5677134B9672173(Local_83.f_2));
			if (!BitTest(Local_83.f_1, 0))
			{
				unk_0x1A5B5BA56167D412(uLocal_210, 307);
				unk_0xAF62582F3EA39095(uLocal_210, "PTD_BLIPN");
			}
			else
			{
				unk_0x1A5B5BA56167D412(uLocal_210, 64);
				unk_0xAF62582F3EA39095(uLocal_210, "PTD_BLIPH");
			}
			unk_0xA582EE8380437B1B(uLocal_210, 1);
			unk_0xE5D4469DCCFB5170(uLocal_210, 7000);
			unk_0x7A610B2EC5DA34E7(uLocal_210, 6);
			if (func_189())
			{
				unk_0x94C2F928B167AA54(uLocal_210, 0);
			}
		}
		else
		{
			if (!BitTest(Local_83.f_1, 0))
			{
				unk_0xB02954D4F69B7A25(uLocal_210, unk_0xF2DB717A73826179(unk_0x82FE2343F8BDFF0B(unk_0xA5677134B9672173(Local_83.f_2))));
			}
			if (func_189() || func_187())
			{
				unk_0x94C2F928B167AA54(uLocal_210, 0);
			}
			else
			{
				unk_0x94C2F928B167AA54(uLocal_210, 4);
			}
		}
	}
}

var func_187()
{
	return Global_2678393.f_1865;
}

void func_188(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_189()
{
	return 1;
}

bool func_190(int iParam0)
{
	return unk_0x07141611FD632B59(unk_0x780A854E3A976A66(Global_2676209, unk_0x0A89FDFA763DCAED())) > iParam0;
}

int func_191()
{
	return Local_83.f_0;
}

int func_192(int iParam0)
{
	return Local_111[iParam0 /*3*/];
}

bool func_193(int iParam0)
{
	return !func_194(iParam0);
}

int func_194(int iParam0)
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
			if (func_196(unk_0x9E2D6C50374FCFA9(), 7))
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
			if (func_196(unk_0x9E2D6C50374FCFA9(), 7))
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
			if (func_196(unk_0x9E2D6C50374FCFA9(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_195(4))
			{
				return 0;
			}
			if (func_196(unk_0x9E2D6C50374FCFA9(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_195(4))
			{
				return 0;
			}
			if (func_196(unk_0x9E2D6C50374FCFA9(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_195(4))
			{
				return 0;
			}
			if (func_196(unk_0x9E2D6C50374FCFA9(), 7))
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
			if (func_195(4))
			{
				return 0;
			}
			if (func_196(unk_0x9E2D6C50374FCFA9(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_195(4))
			{
				return 0;
			}
			if (func_196(unk_0x9E2D6C50374FCFA9(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_195(4))
			{
				return 0;
			}
			if (func_196(unk_0x9E2D6C50374FCFA9(), 7))
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

int func_195(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_225(unk_0xA1087A6350CD9244(iVar0), 0, 1))
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

bool func_196(int iParam0, int iParam1)
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

int func_197()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_204())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_203())
	{
		return 1;
	}
	if (func_202(159))
	{
		if (!func_201())
		{
			return 1;
		}
	}
	if (func_202(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_198() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_198()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_198()
{
	switch (func_200())
	{
		case 0:
			return func_199();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_199()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_200()
{
	return Global_31959;
}

bool func_201()
{
	return Global_2714762.f_698;
}

int func_202(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_203()
{
	return Global_2725403;
}

bool func_204()
{
	return Global_2714762.f_693;
}

void func_205()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_206()
{
	if (unk_0x12DD4A0B247D9B4D(uLocal_210))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_210);
	}
	if (BitTest(Local_83.f_1, 1))
	{
		func_29(2, "PTD_FAIL", 0, 0, -99);
	}
	func_209();
	if (func_191() == 4 && Local_83.f_4 != 0)
	{
		unk_0x7CD708DEB04F8474(Local_83.f_4, 0);
	}
	func_208(15, 0);
	func_207();
}

void func_207()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_208(bool bParam0, bool bParam1)
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

void func_209()
{
	unk_0x7461D7C5BA953BC7(&uLocal_208);
}

void func_210(struct<21> Param0)
{
	int iVar0;
	
	func_221(func_222(Param0.f_0), Param0);
	unk_0xF8B8A6EDAA31F196(1);
	unk_0xC1F83F3B5F8E7D3B(1);
	func_219(0, -1, 0);
	unk_0x21F2B09183F31D02(&Local_83, 28, 0);
	unk_0x7157B1051528D729(&Local_111, 97, 0);
	if (!func_218())
	{
		func_206();
	}
	if (unk_0x9315DBF7D972F07A())
	{
		unk_0x2C07CBAFAC54A645(0);
		if (unk_0x54E30A65F4FA4962())
		{
			iVar0 = unk_0x5853B15F78E1A265(0, 6);
			switch (iVar0)
			{
				case 0:
					Local_83.f_4 = joaat("cuban800");
					Local_83.f_5 = joaat("a_m_m_skidrow_01");
					break;
				
				case 1:
					Local_83.f_4 = joaat("stunt");
					Local_83.f_5 = joaat("a_m_y_eastsa_02");
					break;
				
				case 2:
					Local_83.f_4 = joaat("duster");
					Local_83.f_5 = joaat("a_m_m_prolhost_01");
					break;
				
				case 3:
					Local_83.f_4 = joaat("mammatus");
					Local_83.f_5 = joaat("a_m_y_vinewood_02");
					break;
				
				case 4:
					Local_83.f_4 = joaat("maverick");
					Local_83.f_5 = joaat("a_m_m_eastsa_02");
					unk_0xCED9E32812D6C7C7(&(Local_83.f_1), false);
					break;
				
				case 5:
					Local_83.f_4 = joaat("swift");
					Local_83.f_5 = joaat("a_m_y_busicas_01");
					unk_0xCED9E32812D6C7C7(&(Local_83.f_1), false);
					break;
			}
			if (Local_83.f_4 != 0)
			{
				unk_0x7CD708DEB04F8474(Local_83.f_4, 1);
			}
			func_217();
			func_211();
		}
		func_208(15, 1);
		Local_111[unk_0xF1354995C6159A78() /*3*/] = 0;
	}
	else
	{
		func_206();
	}
}

void func_211()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = unk_0x5853B15F78E1A265(0, 3);
		Local_83.f_9[iVar0 /*3*/] = { func_213(iVar1) };
		if (iVar0 > 0)
		{
			if (func_212(Local_83.f_9[iVar0 /*3*/], Local_83.f_9[(iVar0 - 1) /*3*/], 250f, 0))
			{
				Local_83.f_9[iVar0 /*3*/] = { func_213(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

int func_212(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_213(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 2;
	}
	else if (iParam0 > 2)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_216();
		
		case 1:
			return func_215();
		
		case 2:
			return func_214();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_214()
{
	switch (unk_0x5853B15F78E1A265(0, 13))
	{
		case 0:
			return 1915.902f, 563.9669f, 174.4925f;
		
		case 1:
			return 1402.858f, -2148.418f, 57.9675f;
		
		case 2:
			return 1104.815f, -3142.335f, 4.901f;
		
		case 3:
			return 545.7347f, -3025.327f, 5.0591f;
		
		case 4:
			return 1376.037f, -740.2166f, 66.2331f;
		
		case 5:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 6:
			return -1731.085f, -989.8386f, 4.4152f;
		
		case 7:
			return 728.2132f, -1532.48f, 18.7348f;
		
		case 8:
			return 1140.923f, -1285.639f, 33.6091f;
		
		case 9:
			return 2811.453f, -668.671f, 1.581f;
		
		case 10:
			return -1706.013f, -183.4387f, 56.3712f;
		
		case 11:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 12:
			return 1098.246f, -544.2941f, 56.4061f;
		
		default:
	}
	return 1098.246f, -544.2941f, 56.4061f;
}

Vector3 func_215()
{
	switch (unk_0x5853B15F78E1A265(0, 13))
	{
		case 0:
			return 2312.707f, 1531.258f, 59.8792f;
		
		case 1:
			return 1069.58f, 2366.363f, 43.0396f;
		
		case 2:
			return -1979.781f, 2584.161f, 2.2587f;
		
		case 3:
			return 1458.393f, 1113.066f, 113.334f;
		
		case 4:
			return 817.5361f, 1316.57f, 362.0491f;
		
		case 5:
			return 1671.232f, 3041.176f, 53.0351f;
		
		case 6:
			return -3163.364f, 756.8276f, 2.1183f;
		
		case 7:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 8:
			return -401.2717f, 1211.677f, 324.9297f;
		
		case 9:
			return 2909.154f, 770.3181f, 21.1684f;
		
		case 10:
			return 2778.909f, 2853.266f, 34.7828f;
		
		case 11:
			return 585.3987f, 2893.778f, 38.5297f;
		
		case 12:
			return -498.3305f, 3006.906f, 27.4341f;
		
		default:
	}
	return -498.3305f, 3006.906f, 27.4341f;
}

Vector3 func_216()
{
	switch (unk_0x5853B15F78E1A265(0, 13))
	{
		case 0:
			return 1015.599f, 4350.668f, 41.484f;
		
		case 1:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 2:
			return -2436.25f, 4181.913f, 7.7719f;
		
		case 3:
			return 2463.142f, 3769.651f, 40.328f;
		
		case 4:
			return 1888.61f, 4626.815f, 37.4665f;
		
		case 5:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 6:
			return 3800f, 4462f, 5f;
		
		case 7:
			return 3350f, 5152f, 20f;
		
		case 8:
			return 2200f, 5600f, 54f;
		
		case 9:
			return 1410f, 6560f, 20f;
		
		case 10:
			return -330f, 6100f, 32f;
		
		case 11:
			return -1365f, 4380f, 42f;
		
		case 12:
			return 700f, 3900f, 30f;
		
		default:
	}
	return 700f, 3900f, 30f;
}

void func_217()
{
	Local_83.f_6 = { func_213(unk_0x5853B15F78E1A265(0, 3)) };
	Local_83.f_6 = { Local_83.f_6 + Vector(120f, 0f, 0f) };
}

int func_218()
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
		if (func_204())
		{
			return 0;
		}
		if (func_202(157))
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

int func_219(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_207();
			}
			else
			{
				return 0;
			}
		}
		if (!func_220(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_207();
					}
					else
					{
						return 0;
					}
				}
				if (func_204())
				{
					if (!bParam2)
					{
						func_207();
					}
					else
					{
						return 0;
					}
				}
				if (func_202(157))
				{
					if (!bParam2)
					{
						func_207();
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
					func_207();
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
				func_207();
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
			func_207();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_220(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_221(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		func_207();
	}
	unk_0xD9B114A8D3A8319F(uParam0, 0, Param1.f_16);
}

int func_222(int iParam0)
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
	switch (func_223(func_224(iParam0, 1)))
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

int func_223(int iParam0)
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

int func_224(int iParam0, bool bParam1)
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

int func_225(int iParam0, bool bParam1, bool bParam2)
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

