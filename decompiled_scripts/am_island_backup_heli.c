#region Local Var
	int iLocal_0 = 0;
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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	float fLocal_71[2] = { 0f, 0f };
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<21> Local_79 = { 0, 0, 745926877, 0, 2, 0, 2064532783, 0, 2064532783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_100[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
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
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_68 = -1f;
	iLocal_74 = 23;
	if (unk_0x9315DBF7D972F07A())
	{
		func_96(ScriptParam_0);
	}
	while (true)
	{
		func_95();
		if (func_87())
		{
			func_84();
		}
		if (unk_0x54E30A65F4FA4962())
		{
			if (Global_2815059.f_444)
			{
				Local_79.f_20 = 1;
				if (unk_0xD4538F501EDCD96C() == 1)
				{
					func_84();
				}
			}
		}
		else if (Local_79.f_20)
		{
			func_84();
		}
		if (unk_0x9315DBF7D972F07A())
		{
			func_83();
			switch (func_82(unk_0xF1354995C6159A78()))
			{
				case 0:
					if (func_81() > 0)
					{
						iLocal_100[unk_0xF1354995C6159A78()] = 2;
					}
					break;
				
				case 2:
					func_61();
					if (func_81() == 3)
					{
						iLocal_100[unk_0xF1354995C6159A78()] = 3;
					}
					break;
				
				case 3:
					func_84();
					break;
			}
			if (unk_0x54E30A65F4FA4962())
			{
				switch (func_81())
				{
					case 0:
						Local_79.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	func_7();
	if (Local_79.f_1.f_2 == 5)
	{
		Local_79.f_0 = 3;
	}
	if (func_6(&(Local_79.f_1.f_17)))
	{
		if (func_4(&(Local_79.f_1.f_17), 20000, 0))
		{
			Local_79.f_0 = 3;
		}
	}
	if (func_3())
	{
		Local_79.f_0 = 3;
	}
	if (bLocal_62)
	{
		if (!unk_0x0843570206F71F38())
		{
			Local_79.f_0 = 3;
		}
	}
	else if (unk_0x0843570206F71F38())
	{
		Local_79.f_0 = 3;
	}
	if (func_2())
	{
		Local_79.f_0 = 3;
	}
}

bool func_2()
{
	return Global_1922955.f_3;
}

bool func_3()
{
	return Global_1574582;
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
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

void func_5(var uParam0, bool bParam1, bool bParam2)
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

bool func_6(var uParam0)
{
	return uParam0->f_1;
}

void func_7()
{
	switch (Local_79.f_1.f_2)
	{
		case 0:
			func_60(1);
			break;
		
		case 1:
			if (func_40())
			{
				if (func_27())
				{
					func_5(&(Local_79.f_1.f_15), 0, 0);
					func_60(2);
				}
			}
			break;
		
		case 2:
			func_18();
			func_16();
			if (func_15())
			{
				func_60(3);
				func_14(0);
			}
			if (!func_12(Local_79.f_1))
			{
				if (func_11(Local_79.f_1.f_3[0 /*2*/]) && func_11(Local_79.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_79.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_79.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_79.f_1.f_3[1 /*2*/]))
			{
				func_60(3);
			}
			else
			{
				if (func_6(&(Local_79.f_1.f_15)))
				{
					if (func_4(&(Local_79.f_1.f_15), Global_262145.f_11082, 0))
					{
						func_60(3);
					}
				}
				if (func_10(unk_0x9E2D6C50374FCFA9(), 0))
				{
					func_60(3);
				}
				if (bLocal_63)
				{
					func_60(3);
				}
				if (func_8(unk_0x9E2D6C50374FCFA9(), 136))
				{
					func_60(3);
				}
			}
			break;
		
		case 3:
			func_18();
			if (!func_12(Local_79.f_1))
			{
				if (func_11(Local_79.f_1.f_3[0 /*2*/]) && func_11(Local_79.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_79.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_79.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/] == iParam1)
	{
		return func_9(iParam0);
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

int func_11(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return unk_0xF68107C40359970C(unk_0x8AF984152F749D80(uParam0));
	}
	return 1;
}

int func_12(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return !func_13(unk_0xA5677134B9672173(uParam0));
	}
	return 0;
}

int func_13(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (unk_0x55B23FE400FCEA6B(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x55A0C756C4A8220C(uParam0, 0))
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

void func_14(int iParam0)
{
	Global_2815059.f_443 = iParam0;
}

bool func_15()
{
	return Global_2815059.f_443;
}

void func_16()
{
	if (Global_2703735.f_3689)
	{
		func_17(1, 600000);
		bLocal_63 = true;
	}
	if (Global_2703735.f_3688 >= 250f)
	{
		func_17(1, 600000);
		bLocal_63 = true;
	}
}

void func_17(int iParam0, int iParam1)
{
	if (Global_2703735.f_3572[iParam0] < iParam1)
	{
		Global_2703735.f_3572[iParam0] = iParam1;
	}
	unk_0xCED9E32812D6C7C7(&(Global_2703735.f_3571), iParam0);
}

void func_18()
{
	iLocal_66 = 0;
	iLocal_67 = 0;
	if (func_12(Local_79.f_1))
	{
		iLocal_66++;
	}
	else if (unk_0xE5965CDF24F93A9F(unk_0xA5677134B9672173(Local_79.f_1)))
	{
		func_26(&(Local_79.f_1));
		iLocal_66++;
	}
	if (func_11(Local_79.f_1.f_3[0 /*2*/]))
	{
		if (unk_0x90F6E2F6488B98BA(Local_79.f_1.f_3[0 /*2*/]))
		{
			func_26(&(Local_79.f_1.f_3[0 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (func_11(Local_79.f_1.f_3[1 /*2*/]))
	{
		if (unk_0x90F6E2F6488B98BA(Local_79.f_1.f_3[1 /*2*/]))
		{
			func_26(&(Local_79.f_1.f_3[1 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (unk_0xBD7B8099C8298D2F(false, 0) != iLocal_66)
	{
		if (func_25(iLocal_66, 0, 1))
		{
			unk_0xC1F83F3B5F8E7D3B(iLocal_66);
		}
	}
	if (unk_0x8736933282D0483C(false, 0) != iLocal_67)
	{
		if (func_19(iLocal_67, 0, 1))
		{
			unk_0xF8B8A6EDAA31F196(iLocal_67);
		}
	}
}

bool func_19(int iParam0, bool bParam1, bool bParam2)
{
	return func_20(0, iParam0, 1, bParam1, bParam2);
}

int func_20(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_24(iParam0) - func_23(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_22(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_23(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_21(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_217;
			}
			else
			{
				return unk_0x8736933282D0483C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_218;
			}
			else
			{
				return unk_0xBD7B8099C8298D2F(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_219;
			}
			else
			{
				return unk_0xC162EEC794CBB80B(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

bool func_25(int iParam0, bool bParam1, bool bParam2)
{
	return func_20(1, iParam0, 1, bParam1, bParam2);
}

void func_26(var uParam0)
{
	var uVar0;
	
	if (unk_0x90F6E2F6488B98BA(*uParam0))
	{
		uVar0 = unk_0xF2D8DACFAEBD9629(*uParam0);
		unk_0xEC548B5E95E61DF6(&uVar0);
	}
}

int func_27()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = joaat("a_m_m_farmer_01");
	if (func_39(Local_79.f_1.f_1))
	{
		if (func_39(Local_79.f_1.f_3[1 /*2*/].f_1) && func_39(iVar0))
		{
			if (!func_12(Local_79.f_1))
			{
				if (func_36(&(Local_79.f_1), Local_79.f_1.f_1, Local_79.f_1.f_8, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					uVar1 = unk_0xA5677134B9672173(Local_79.f_1);
					if (unk_0x03AC3319D1B50189(uVar1) > 0)
					{
						unk_0x3C1BCE3438ECBFC0(uVar1, 0);
					}
					unk_0x58DAFDEB2F46A5EA(uVar1, 127, 0);
					unk_0xBAAB64584D161C4D(uVar1);
					unk_0x371D594409A68A18(uVar1, 1, 1, 0);
					unk_0x3B2646B62E7BBE11(uVar1, 1);
					unk_0xAA8C46C452582702(uVar1);
					unk_0x4536AE3DABDE0C44(uVar1, 1);
					func_35(uVar1, 4);
					Global_2703735.f_3690 = uVar1;
					unk_0xF160248D9083ED0C(uVar1, Global_262145.f_11083, 0);
					if (func_34(&(Local_79.f_1.f_3[0 /*2*/]), Local_79.f_1, 4, iVar0, -1, 1, 1, 1))
					{
						uVar2 = unk_0x8AF984152F749D80(Local_79.f_1.f_3[0 /*2*/]);
						func_29(Local_79.f_1.f_3[0 /*2*/]);
						func_28(uVar2, 0, 0, 1);
						unk_0x0F1F0C82FA94500F(uVar2, unk_0x9E2D6C50374FCFA9());
						func_35(uVar2, 4);
						Global_2703735.f_3690.f_1[0] = uVar2;
						unk_0xE3752B10DC995E95(uVar2, 0, 1, 1, 0);
						unk_0xE3752B10DC995E95(uVar2, 2, 1, 1, 0);
						unk_0xE3752B10DC995E95(uVar2, 3, 0, 0, 0);
						unk_0xE3752B10DC995E95(uVar2, 4, 0, 0, 0);
						unk_0xE3752B10DC995E95(uVar2, 8, 0, 1, 0);
						unk_0xD9D122A54FFE62B8(uVar2, 1, 0, 0, 0);
						unk_0xD9D122A54FFE62B8(uVar2, 0, 0, 0, 0);
						if (func_34(&(Local_79.f_1.f_3[1 /*2*/]), Local_79.f_1, 4, Local_79.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_29(Local_79.f_1.f_3[1 /*2*/]);
							func_28(unk_0x8AF984152F749D80(Local_79.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0x0F1F0C82FA94500F(unk_0x8AF984152F749D80(Local_79.f_1.f_3[1 /*2*/]), unk_0x9E2D6C50374FCFA9());
							func_35(unk_0x8AF984152F749D80(Local_79.f_1.f_3[1 /*2*/]), 4);
							Global_2703735.f_3690.f_1[1] = unk_0x8AF984152F749D80(Local_79.f_1.f_3[1 /*2*/]);
							unk_0xF1A23B343DFEDFD0(Local_79.f_1.f_3[1 /*2*/].f_1);
							unk_0xF1A23B343DFEDFD0(iVar0);
							unk_0xF1A23B343DFEDFD0(Local_79.f_1.f_1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_28(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	unk_0x5399A284D9FAD3BD(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0xBC12D08EE7559CCD(uParam0, 5, 1);
	unk_0xBC12D08EE7559CCD(uParam0, 3, 0);
	unk_0x71B502FC2E129665(uParam0, 2);
	unk_0x395228F7A14C6543(uParam0, 2);
	unk_0x3DAB02AAC9E9EC02(uParam0, 2);
	unk_0x7DCB4594ACF18DA7(uParam0, 1);
	unk_0x25D0F99524B26091(uParam0, 1);
	unk_0xA7266A50941DBAEA(uParam0, 1);
	unk_0xE014FF3C785EEFB5(uParam0, (fLocal_71[iParam1] + 100f));
	unk_0x52EA1154D214BFB6(uParam0, 400f);
	unk_0x9DC5CCC4C16546CB(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0x8FBB27C41710F120(uParam0, 250);
			unk_0xF160248D9083ED0C(uParam0, 250, 0);
			unk_0x495F6EBD50BCB090(uParam0, 250);
		}
	}
	else
	{
		unk_0x9210F85E9CD785F1(uParam0, 1);
	}
}

void func_29(var uParam0)
{
	var uVar0;
	
	if (!func_31(unk_0x9E2D6C50374FCFA9(), 0, 0) && !func_30())
	{
		uVar0 = Global_1837209[5];
	}
	else
	{
		uVar0 = unk_0x6F8FB52F5D1D0B84(unk_0xE2D3D51028F0428A());
	}
	unk_0xFF4BEB6CFF55A013(unk_0x8AF984152F749D80(uParam0), uVar0);
}

bool func_30()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 0);
}

int func_31(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_32(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[iParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_32(int iParam0)
{
	return func_33(iParam0);
}

var func_33(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

int func_34(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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
	*uParam0 = unk_0xED28EE4BE581A032(unk_0x487C17B41938052C(unk_0xA5677134B9672173(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
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

void func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF2549FF74D64B720(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0xC3B76795ECBDEF41(uParam0, "AttributeDamage");
	}
	unk_0xCED9E32812D6C7C7(&iVar0, iParam1);
	unk_0x05B874E9ABFF72B4(uParam0, "AttributeDamage", iVar0);
}

int func_36(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
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
	iVar1 = unk_0xBA715A7BEBA5A1F9(iParam1, Param2, fParam5, iParam7, iParam6, iParam14);
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
			func_37(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_37(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_38(unk_0x9E2D6C50374FCFA9(), Param0, iParam4) > -1)
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

int func_38(int iParam0, struct<3> Param1, int iParam4)
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

int func_39(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

int func_40()
{
	struct<3> Var0;
	
	if (func_59(Local_79.f_1.f_8))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				Var0 = { func_57(func_58(unk_0x9E2D6C50374FCFA9()), 0f, (-200f * unk_0x0BADBFA3B172435F((unk_0xBBDA792448DB5A89(Local_79.f_1.f_13) * 30f))), (200f * unk_0xD0FFB162F40A139C((unk_0xBBDA792448DB5A89(Local_79.f_1.f_13) * 30f))), 0f) };
				Var0.f_2 = unk_0xE11E41EC1840AB62(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_41(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_79.f_1.f_8 = { Var0 };
					return 1;
				}
				else
				{
					Local_79.f_1.f_13++;
					if (Local_79.f_1.f_13 >= 12)
					{
						Local_79.f_1.f_13 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_41(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2667225.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x34FAA537D539192C(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xAC48FF26FAAA8DD0(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xAC48FF26FAAA8DD0(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2D3CDDF3FE35FCA6(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam13)
	{
		if (unk_0x3FDE5764A07BA515(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam14 > 0f)
	{
		if (func_50(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_42(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_42(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_49(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xA829C9A2767AC8EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x987A5F1E1A67E3C0(func_47(unk_0x9E2D6C50374FCFA9()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x0318E2EE6FB4563F(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_49(iVar1, 1, 1))
		{
			if (!func_44(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x9E2D6C50374FCFA9()))
				{
					if ((func_43(iVar1) || !bParam10) && !Global_2689235[iVar1 /*453*/].f_267)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x0E40F846A70BA3EC(iVar1) != unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))) || unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x987A5F1E1A67E3C0(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0809D748691DCA79(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x0E40F846A70BA3EC(iVar1) != iParam8 || unk_0x0E40F846A70BA3EC(iVar1) == -1)
						{
							if (unk_0x987A5F1E1A67E3C0(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0809D748691DCA79(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0)
{
	if (unk_0x4A1EA713628C49D4(unk_0x407E03586628E458(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

bool func_44(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_45(-1, 0) == 8;
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

int func_45(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
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

int func_46()
{
	return Global_1574918;
}

Vector3 func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_48() && Global_1853348[iVar0 /*834*/].f_804) && !func_59(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_58(iParam0);
}

var func_48()
{
	return Global_2714762.f_19;
}

int func_49(int iParam0, bool bParam1, bool bParam2)
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

int func_50(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x9E2D6C50374FCFA9() != iVar1) || iParam8 == 0)
		{
			if (func_49(iVar1, bParam4, bParam5))
			{
				if (iParam10 || unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
				{
					if (!bParam7 || (!unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar1)) && func_43(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) != unk_0x0E40F846A70BA3EC(iVar1))) || unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
						{
							if (((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && uParam9) && bParam6) && func_51(iVar1))
							{
							}
							else if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
							{
								if (unk_0x987A5F1E1A67E3C0(func_58(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_51(int iParam0)
{
	if (func_56(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	Global_2787505 = { func_55(iParam0) };
	if (unk_0x106C9EE9D83F20DF(&Global_2787505))
	{
		return 1;
	}
	if (func_52(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_54(iParam0);
	if (!iVar0 == func_53())
	{
		if (iVar0 == func_54(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	return -1;
}

int func_54(int iParam0)
{
	if (iParam0 != func_53())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_53();
}

struct<13> func_55(var uParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(uParam0, &Var0, 13);
	return Var0;
}

int func_56(int iParam0, var uParam1)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		Global_2787505 = { func_55(iParam0) };
		Global_2787518 = { func_55(uParam1) };
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

Vector3 func_57(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = unk_0xD0FFB162F40A139C(fVar3);
	fVar5 = unk_0x0BADBFA3B172435F(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

Vector3 func_58(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

int func_59(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0)
{
	Local_79.f_1.f_2 = iParam0;
}

void func_61()
{
	func_67();
	func_62();
}

void func_62()
{
	if (Local_79.f_1.f_2 == 2)
	{
		func_64();
	}
	else
	{
		func_63();
	}
}

void func_63()
{
	if (unk_0x12DD4A0B247D9B4D(uLocal_61))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_61);
	}
}

void func_64()
{
	var uVar0;
	
	uVar0 = unk_0xA5677134B9672173(Local_79.f_1);
	if (!unk_0x12DD4A0B247D9B4D(uLocal_61) && unk_0xE5965CDF24F93A9F(uVar0))
	{
		uLocal_61 = unk_0xEFD6451BF0F3352F(iVar0);
		unk_0x1A5B5BA56167D412(uLocal_61, 422);
		unk_0x3430966AC4550BB9(uLocal_61, 0);
		unk_0xAF62582F3EA39095(uLocal_61, "MPCT_MERRY3");
		func_65(&uLocal_61, 1);
	}
}

void func_65(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		uVar0 = func_66(iParam1);
		unk_0xA582EE8380437B1B(*uParam0, uVar0);
	}
}

int func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x2F046C9381D8E91B(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_67()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	switch (Local_79.f_1.f_2)
	{
		case 0:
			func_63();
			break;
		
		case 1:
			func_63();
			break;
		
		case 2:
			if (func_12(Local_79.f_1))
			{
				uVar1 = unk_0xA5677134B9672173(Local_79.f_1);
				func_64();
				if (func_80(Local_79.f_1))
				{
					if (unk_0x07B2F8356DC13CF4(Local_79.f_1))
					{
						if (unk_0xCD1DF129E7E656D9(uVar1))
						{
							if (func_79())
							{
								if (!unk_0x09113F944FB63ED2(uVar1))
								{
									unk_0xA132A7A6A765A696(uVar1, 1, 0);
								}
							}
							else if (unk_0x09113F944FB63ED2(uVar1))
							{
								unk_0xA132A7A6A765A696(uVar1, 0, 0);
							}
						}
					}
				}
				func_69();
				if (unk_0xCCDCD6672DAE6835(Local_79.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0x8AF984152F749D80(Local_79.f_1.f_3[0 /*2*/]);
					if (!unk_0xF68107C40359970C(uVar0))
					{
						iVar2 = unk_0xF9EEC73AE0B9C439(uVar1);
						if (iVar2 != iLocal_74 || fLocal_71[0] != fLocal_68)
						{
							if (func_80(Local_79.f_1))
							{
								if (unk_0x07B2F8356DC13CF4(Local_79.f_1.f_3[0 /*2*/]))
								{
									fLocal_71[0] = fLocal_68;
									unk_0x50274A7EACA3133A(uVar0, 1);
									func_28(uVar0, 0, 0, 0);
									unk_0xBAAB64584D161C4D(uVar1);
									unk_0x371D594409A68A18(uVar1, 1, 1, 0);
									if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
									{
										if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
										{
											unk_0x545C59578966D5B8(uVar0, uVar1, 0, unk_0xE2D3D51028F0428A(), 0f, 0f, 0f, iLocal_74, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_71[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
					}
				}
				if (unk_0xCCDCD6672DAE6835(Local_79.f_1.f_3[1 /*2*/]))
				{
					uVar0 = unk_0x8AF984152F749D80(Local_79.f_1.f_3[1 /*2*/]);
					if (!unk_0xF68107C40359970C(uVar0))
					{
						if (!unk_0xCED7266BAB0BDC20(uVar0, 0) || fLocal_71[1] != fLocal_68)
						{
							if (func_80(Local_79.f_1))
							{
								if (unk_0x07B2F8356DC13CF4(Local_79.f_1.f_3[1 /*2*/]))
								{
									fLocal_71[1] = fLocal_68;
									unk_0x50274A7EACA3133A(uVar0, 0);
									func_28(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_79.f_1) || func_11(Local_79.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		
		case 3:
			func_63();
			if (!func_6(&(Local_79.f_1.f_17)))
			{
				func_5(&(Local_79.f_1.f_17), 0, 0);
			}
			if (func_12(Local_79.f_1))
			{
				uVar1 = unk_0xA5677134B9672173(Local_79.f_1);
				if (!func_11(Local_79.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0x8AF984152F749D80(Local_79.f_1.f_3[0 /*2*/]);
					if (iLocal_64 == 0)
					{
						if (func_80(Local_79.f_1))
						{
							if (unk_0x07B2F8356DC13CF4(Local_79.f_1.f_3[0 /*2*/]))
							{
								unk_0x50274A7EACA3133A(uVar0, 0);
								unk_0x03A927199A2DFE46(uVar0);
								unk_0xFF4BEB6CFF55A013(uVar0, Global_1837194);
								if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
								{
									if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
									{
										unk_0x545C59578966D5B8(uVar0, uVar1, 0, unk_0xE2D3D51028F0428A(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										unk_0xABC2CA6F28903308(uVar0, 1);
										iLocal_64 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_11(Local_79.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_65 == 0)
					{
						uVar0 = unk_0x8AF984152F749D80(Local_79.f_1.f_3[1 /*2*/]);
						if (func_80(Local_79.f_1))
						{
							if (unk_0x07B2F8356DC13CF4(Local_79.f_1.f_3[1 /*2*/]))
							{
								unk_0x03A927199A2DFE46(uVar0);
								unk_0x50274A7EACA3133A(uVar0, 1);
								unk_0xABC2CA6F28903308(uVar0, 1);
								iLocal_65 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_79.f_1) || func_11(Local_79.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		
		case 5:
			func_63();
			break;
	}
}

void func_68()
{
	var uVar0;
	
	if (!func_11(Local_79.f_1.f_3[0 /*2*/]))
	{
		if (func_80(Local_79.f_1.f_3[0 /*2*/]))
		{
			if (unk_0x07B2F8356DC13CF4(Local_79.f_1.f_3[0 /*2*/]))
			{
				uVar0 = unk_0x8AF984152F749D80(Local_79.f_1.f_3[0 /*2*/]);
				unk_0xF160248D9083ED0C(uVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_79.f_1.f_3[1 /*2*/]))
	{
		if (func_80(Local_79.f_1.f_3[1 /*2*/]))
		{
			if (unk_0x07B2F8356DC13CF4(Local_79.f_1.f_3[1 /*2*/]))
			{
				uVar0 = unk_0x8AF984152F749D80(Local_79.f_1.f_3[1 /*2*/]);
				unk_0xF160248D9083ED0C(uVar0, 0, 0);
			}
		}
	}
}

void func_69()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	
	if (!Global_1958700)
	{
		return;
	}
	if (!unk_0x07B2F8356DC13CF4(Local_79.f_1))
	{
		return;
	}
	uVar0 = unk_0xA5677134B9672173(Local_79.f_1);
	if (func_78(uVar0))
	{
		return;
	}
	if (!func_77(uVar0))
	{
		return;
	}
	if (iLocal_77 == func_53())
	{
		func_71();
		return;
	}
	uVar1 = unk_0x407E03586628E458(iLocal_77);
	if (!func_6(&uLocal_75))
	{
		if (iLocal_77 != func_53() && func_77(uVar1))
		{
			if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(uVar1, 1), unk_0x6B62510F212526DC(uVar0, 1), 0) > 50f)
			{
				return;
			}
		}
	}
	if (!func_4(&uLocal_75, Global_1958699, 0))
	{
		return;
	}
	func_70(&uLocal_75);
	iVar3 = Local_79.f_1.f_3;
	bVar4 = false;
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		uVar5 = unk_0x8AF984152F749D80(Local_79.f_1.f_3[iVar2 /*2*/]);
		if (func_77(uVar5) && unk_0xCED7266BAB0BDC20(uVar5, 0))
		{
			bVar4 = true;
		}
		else
		{
			iVar2++;
		}
	}
	if (!bVar4)
	{
		iLocal_77 = func_53();
	}
}

void func_70(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_71()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	iVar1 = unk_0x9E2D6C50374FCFA9();
	uVar3 = unk_0x8AF984152F749D80(Local_79.f_1.f_3[0 /*2*/]);
	uVar4 = unk_0xA5677134B9672173(Local_79.f_1);
	uVar5 = func_74(unk_0x9E2D6C50374FCFA9());
	uVar6 = unk_0x407E03586628E458(uVar5);
	iLocal_77 = func_53();
	iLocal_78++;
	iLocal_78 = func_73(iLocal_78, 32);
	iVar0 = iLocal_78;
	if (iVar0 == func_53())
	{
		return;
	}
	if (iVar0 == iLocal_77)
	{
		return;
	}
	if (!func_49(iVar0, 1, 1))
	{
		return;
	}
	uVar2 = unk_0x407E03586628E458(iVar0);
	if (!func_77(uVar2))
	{
		return;
	}
	if (func_77(uVar6))
	{
		if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(uVar6, 1), unk_0x6B62510F212526DC(uVar2, 1), 0) > Global_1958701)
		{
			return;
		}
	}
	if (func_52(iVar1, iVar0) || func_72(iVar1, iVar0, -2, 0))
	{
		unk_0x545C59578966D5B8(uVar3, uVar4, 0, uVar2, 0f, 0f, 0f, iLocal_74, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_71[0]), 10, -1082130432, 0);
		iLocal_77 = iVar0;
	}
}

bool func_72(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_73(int iParam0, int iParam1)
{
	return (((iParam0 % iParam1) + iParam1) % iParam1);
}

int func_74(int iParam0)
{
	if (func_75(iParam0, 1))
	{
		return Global_1892703[func_54(iParam0) /*599*/].f_10.f_462;
	}
	return func_53();
}

bool func_75(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_76(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_53();
}

int func_76(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_53())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_77(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (!unk_0xEF9410C312F2B117(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_79()
{
	if (unk_0x09FC827691DACE59() >= 22)
	{
		return 1;
	}
	if (unk_0x09FC827691DACE59() <= 6 && unk_0x09FC827691DACE59() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_80(var uParam0)
{
	if (unk_0x3BA0A79B368FAA6D(uParam0))
	{
		return 1;
	}
	if (unk_0x54E30A65F4FA4962())
	{
		unk_0xC31EECA11005273C(uParam0);
	}
	return 0;
}

int func_81()
{
	return Local_79.f_0;
}

int func_82(int iParam0)
{
	return iLocal_100[iParam0];
}

void func_83()
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_68 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_69))
	{
		func_5(&uLocal_69, 0, 0);
	}
	else if (func_4(&uLocal_69, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { func_58(unk_0x9E2D6C50374FCFA9()) };
		fLocal_68 = unk_0xE11E41EC1840AB62(Var1.f_0, Var1.f_1);
		if (fLocal_68 < Global_262145.f_11084)
		{
			fLocal_68 = Global_262145.f_11084;
		}
		func_70(&uLocal_69);
	}
}

void func_84()
{
	if (unk_0xE5965CDF24F93A9F(Global_2703735.f_3690.f_1[0]))
	{
		unk_0x05CB75C0837196F9(&(Global_2703735.f_3690.f_1[0]));
	}
	if (unk_0xE5965CDF24F93A9F(Global_2703735.f_3690.f_1[1]))
	{
		unk_0x05CB75C0837196F9(&(Global_2703735.f_3690.f_1[1]));
	}
	if (unk_0xE5965CDF24F93A9F(Global_2703735.f_3690))
	{
		unk_0xD59CC8123FD1A789(&(Global_2703735.f_3690));
	}
	Global_2703735.f_3690.f_5 = 0f;
	Global_2703735.f_3690.f_6 = 0;
	Global_2703735.f_3690.f_7 = 0;
	func_86(0);
	func_85();
}

void func_85()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_86(int iParam0)
{
	Global_2815059.f_444 = iParam0;
}

int func_87()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_94())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_93())
	{
		return 1;
	}
	if (func_92(159))
	{
		if (!func_91())
		{
			return 1;
		}
	}
	if (func_92(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_88() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_88()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	switch (func_90())
	{
		case 0:
			return func_89();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_89()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_90()
{
	return Global_31959;
}

bool func_91()
{
	return Global_2714762.f_698;
}

int func_92(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_93()
{
	return Global_2725403;
}

bool func_94()
{
	return Global_2714762.f_693;
}

void func_95()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_96(struct<21> Param0)
{
	func_86(0);
	func_100(32, Param0);
	unk_0xF8B8A6EDAA31F196(2);
	unk_0xC1F83F3B5F8E7D3B(1);
	func_98(0, -1, 0);
	unk_0x21F2B09183F31D02(&Local_79, 21, 0);
	unk_0x7157B1051528D729(&iLocal_100, 33, 0);
	unk_0x2C07CBAFAC54A645(0);
	if (!func_97())
	{
		func_84();
	}
	if (unk_0x0843570206F71F38())
	{
		bLocal_62 = true;
	}
	iLocal_77 = unk_0x9E2D6C50374FCFA9();
	iLocal_100[unk_0xF1354995C6159A78()] = 0;
}

int func_97()
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
		if (func_94())
		{
			return 0;
		}
		if (func_92(157))
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

int func_98(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_85();
			}
			else
			{
				return 0;
			}
		}
		if (!func_99(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_85();
					}
					else
					{
						return 0;
					}
				}
				if (func_94())
				{
					if (!bParam2)
					{
						func_85();
					}
					else
					{
						return 0;
					}
				}
				if (func_92(157))
				{
					if (!bParam2)
					{
						func_85();
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
					func_85();
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
				func_85();
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
			func_85();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_99(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_100(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		func_85();
	}
	unk_0xD9B114A8D3A8319F(iParam0, 0, Param1.f_16);
}

