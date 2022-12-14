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
	int iLocal_64 = 0;
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
	if (unk_0x55EEDBBFDC6E810F(34))
	{
		unk_0x675D9C12C73D3DE7();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_143();
		func_1();
	}
}

void func_1()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (unk_0x15342BF2828C4587())
	{
		iVar2 = 0;
		while (iVar2 < unk_0x89DE709C9F3052C5(1))
		{
			iVar7 = unk_0xB09B723333956A0B(1, iVar2);
			switch (iVar7)
			{
				case 193:
					func_140();
					break;
				
				case 194:
					func_139();
					break;
				
				case 195:
					func_133(iVar2);
					break;
				
				case 196:
					func_132(iVar2);
					break;
				
				case 197:
					func_121(iVar2);
					break;
				
				case 215:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0x89DE709C9F3052C5(0))
	{
		iVar0 = unk_0xB09B723333956A0B(0, iVar2);
		iLocal_64 = 1;
		switch (iVar0)
		{
			case 141:
				unk_0x11DE375695504B75(0, iVar2, &uVar1, 1);
				if (unk_0x7DE17ACDD8BA2642(uVar1))
				{
					if (unk_0xA6B591D40DE982B5(uVar1))
					{
						if (func_2(iVar3))
						{
							Global_55613.f_1[iVar3] = uVar1;
							iVar3++;
						}
					}
					else if (unk_0x71904BD37B848CAF(uVar1))
					{
						if (func_2(iVar5))
						{
							Global_55613.f_25[iVar5] = uVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 142:
				unk_0x11DE375695504B75(0, iVar2, &uVar1, 1);
				if (unk_0x7DE17ACDD8BA2642(uVar1))
				{
					if (unk_0xA6B591D40DE982B5(uVar1))
					{
						if (func_2(iVar4))
						{
							Global_55613.f_13[iVar4] = uVar1;
							iVar4++;
						}
					}
					else if (unk_0x71904BD37B848CAF(uVar1))
					{
						if (func_2(iVar6))
						{
							Global_55613.f_37[iVar6] = uVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_55613 = iVar3;
	Global_55613.f_12 = iVar4;
	Global_55613.f_24 = iVar5;
	Global_55613.f_36 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar39;
	
	if (unk_0x11DE375695504B75(1, iParam0, &Var0, 39))
	{
		iVar39 = unk_0xF2AB5E439A056B7A(Var0.f_38);
		if (iVar39 >= 0 && iVar39 < unk_0xDDD1F4474C7B3838())
		{
			if (unk_0xC509B043851E102A(iVar39) || unk_0xF3C21FF4C6B08D27(iVar39))
			{
				if (unk_0xF3C21FF4C6B08D27(iVar39))
				{
					func_58(iVar39);
				}
				else
				{
					unk_0x0094D99C326F2535(iVar39);
				}
				func_57(Var0.f_37, -1);
			}
			else if (func_49())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param6, var uParam22, struct<13> Param23, var uParam36, int iParam37)
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	struct<10> Var22;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	struct<16> Var36;
	struct<16> Var52;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	var uVar74;
	var uVar75;
	bool bVar76;
	bool bVar77;
	bool bVar78;
	bool bVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	
	bVar0 = false;
	if (iParam37 >= 1000000)
	{
		iParam37 = (iParam37 - 1000000);
		bVar0 = true;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		if (func_48())
		{
			func_47(uParam22);
			return 0;
		}
		if (func_46())
		{
			func_47(uParam22);
			return 0;
		}
	}
	if (!unk_0xA26A9A07F761D8F8())
	{
		if (bVar0)
		{
		}
		else if (!unk_0xF27423FF2D483551(&Param23))
		{
			func_47(uParam22);
			return 0;
		}
		if (Global_20326)
		{
			func_47(uParam22);
			return 0;
		}
		bVar1 = true;
		if (!func_45())
		{
			if (!func_44(0))
			{
				if (bVar1)
				{
					func_47(uParam22);
					return 0;
				}
			}
		}
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		if (!func_43(unk_0x93E99A2DBCBA9CFA()))
		{
			func_47(uParam22);
			return 0;
		}
	}
	if (unk_0x2AC37494BBF1DB16(&Param6))
	{
		func_47(uParam22);
		return 0;
	}
	if (unk_0x2AC37494BBF1DB16(&Param0))
	{
		func_47(uParam22);
		return 0;
	}
	Var2 = { Param6 };
	iVar18 = func_42(Var2);
	if (iVar18 != -1)
	{
		func_39(iVar18);
	}
	uVar19 = unk_0xF2AB5E439A056B7A(uParam22);
	iVar20 = unk_0x25E8C8CAEB440D3D(uVar19);
	iVar21 = 0;
	iVar21 = 0;
	while (iVar21 <= 11)
	{
		if (iVar20 == Global_2625771[iVar21 /*4*/].f_3 && unk_0xA5E11AF0A2B928C1() < Global_2625771[iVar21 /*4*/].f_2)
		{
			Global_2625771[iVar21 /*4*/].f_2 = unk_0xA5E11AF0A2B928C1() + 30000;
			iVar21 = 12;
			func_47(uParam22);
			return 0;
		}
		iVar21++;
	}
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_9 = -1;
	func_38(&Var22);
	iVar32 = 0;
	iVar33 = 0;
	iVar34 = 63;
	iVar35 = 0;
	StringCopy(&Var36, "", 64);
	StringCopy(&Var52, "", 64);
	iVar68 = 0;
	iVar69 = 0;
	iVar70 = 0;
	iVar71 = 1;
	iVar72 = 0;
	iVar73 = 0;
	if (func_37(&Param0, &iVar32, &iVar35))
	{
		iVar34 = 40;
		iVar69 = 0;
		iVar35 = iVar35;
	}
	else if (func_35(&Param0, &Var22, 0))
	{
		iVar34 = Var22.f_2;
		iVar32 = func_34(iVar34, Var22.f_1);
		iVar33 = func_33(&Var22);
		Var36 = { func_32(&Var22, 0) };
		Var52 = { func_31(&Var22) };
		iVar69 = 1;
		iVar68 = func_30(&Var22, 0);
		iVar73 = func_29(&Var22);
		uVar74 = func_27(&Var22);
		uVar75 = func_26(&Var22);
		bVar76 = func_21(&Var22);
		if (!bVar76)
		{
			iVar72 = 1;
		}
	}
	else
	{
		bVar77 = false;
		if (func_19(unk_0x93E99A2DBCBA9CFA(), Param23))
		{
			if (!unk_0xA26A9A07F761D8F8())
			{
				bVar77 = true;
			}
			else
			{
				func_47(uParam22);
				func_17(0);
				return 0;
			}
		}
		if (!func_16())
		{
			if (!bVar77)
			{
				if (func_14(unk_0x93E99A2DBCBA9CFA(), Param23))
				{
					func_47(uParam22);
					func_17(0);
					return 0;
				}
			}
		}
		if (!func_13())
		{
			func_47(uParam22);
			bVar78 = true;
			func_17(bVar78);
			return 0;
		}
		bVar79 = false;
		if (!bVar77)
		{
			if (func_7(Param23, &bVar79, 1))
			{
				func_47(uParam22);
				func_17(bVar79);
				return 0;
			}
		}
		iVar70 = 1;
		iVar71 = 0;
		iVar69 = 1;
	}
	iVar80 = Global_1665317;
	if (iVar80 >= 12)
	{
		iVar80 = (iVar80 - 1);
	}
	iVar81 = (iVar80 - 1);
	while (iVar81 >= 0)
	{
		Global_2623469[iVar80 /*99*/] = { Global_2623469[iVar81 /*99*/] };
		iVar80 = (iVar80 - 1);
		iVar81 = (iVar81 - 1);
	}
	Global_1665317++;
	if (Global_1665317 > 12)
	{
		Global_1665317 = 12;
	}
	iVar82 = 0;
	Global_2623469[iVar82 /*99*/] = 0;
	Global_2623469[iVar82 /*99*/].f_1 = 0;
	Global_2623469[iVar82 /*99*/].f_5 = 0;
	Global_2623469[iVar82 /*99*/].f_2 = iVar70;
	Global_2623469[iVar82 /*99*/].f_3 = 0;
	Global_2623469[iVar82 /*99*/].f_4 = iVar71;
	Global_2623469[iVar82 /*99*/].f_6 = { Param0 };
	Global_2623469[iVar82 /*99*/].f_12 = uVar74;
	Global_2623469[iVar82 /*99*/].f_13 = uVar75;
	Global_2623469[iVar82 /*99*/].f_15 = { Param6 };
	StringCopy(&(Global_2623469[iVar82 /*99*/].f_31), "", 64);
	Global_2623469[iVar82 /*99*/].f_49 = iVar34;
	Global_2623469[iVar82 /*99*/].f_50 = iVar32;
	Global_2623469[iVar82 /*99*/].f_51 = iVar33;
	Global_2623469[iVar82 /*99*/].f_91 = uParam22;
	Global_2623469[iVar82 /*99*/].f_57 = { Var36 };
	Global_2623469[iVar82 /*99*/].f_73 = { Var52 };
	Global_2623469[iVar82 /*99*/].f_52 = iVar68;
	Global_2623469[iVar82 /*99*/].f_53 = 0;
	Global_2623469[iVar82 /*99*/].f_53.f_1 = 0;
	Global_2623469[iVar82 /*99*/].f_53.f_2 = 0;
	Global_2623469[iVar82 /*99*/].f_56 = iVar69;
	Global_2623469[iVar82 /*99*/].f_90 = uParam36;
	Global_2623469[iVar82 /*99*/].f_92 = -1;
	Global_2623469[iVar82 /*99*/].f_93 = iVar72;
	Global_2623469[iVar82 /*99*/].f_94 = Global_2625823;
	Global_2623469[iVar82 /*99*/].f_95 = iVar73;
	Global_2623469[iVar82 /*99*/].f_98 = unk_0xF27423FF2D483551(&Param23);
	if (Global_2623469[iVar82 /*99*/].f_50 == 0)
	{
		if (Global_2623469[iVar82 /*99*/].f_51 == 1)
		{
			Global_2623469[iVar82 /*99*/].f_56 = 0;
		}
	}
	Global_2623469[iVar82 /*99*/].f_96 = func_6(Param23, iVar82);
	Global_2623469[iVar82 /*99*/].f_97 = 0;
	Global_2623469[iVar82 /*99*/].f_89 = iParam37;
	Global_2625823++;
	Global_2623469[iVar82 /*99*/].f_47 = func_5(Param23);
	if (Global_2623469[iVar82 /*99*/].f_47 != -1)
	{
		Global_2623469[iVar82 /*99*/].f_48 = unk_0xA5E11AF0A2B928C1() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)
{
	struct<13> Var0[1];
	int iVar14;
	
	if (!func_16())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar14 = unk_0xDAC1363CD05D8904(&Var0, 1);
	if (iVar14 < 0)
	{
		return -1;
	}
	return iVar14;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!unk_0xF27423FF2D483551(&uParam0))
	{
		return 0;
	}
	if (Global_2623469[iParam13 /*99*/].f_90 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_12(0))
	{
		return 0;
	}
	if (func_16())
	{
		if (!func_11())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(unk_0x93E99A2DBCBA9CFA()) };
	if (!bParam14 && !unk_0x7A033258C83D54CA(&Var0, &uParam0))
	{
		if (!unk_0xF27423FF2D483551(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)
{
	struct<13> Var0;
	
	unk_0x23BD70608BA4F8D9(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)
{
	if (unk_0x674D69D3896862C7() || (func_10() && iParam0 == 0))
	{
		if (unk_0x5EEE0DA7B180E4F7(1) == 0 || unk_0x29F2DE8E71A61D03(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x5EEE0DA7B180E4F7(1) == 0)
	{
		return 0;
	}
	if (func_11() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_10()
{
	return (unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A());
}

int func_11()
{
	if (unk_0x674D69D3896862C7() && unk_0x1D05BD8EFF80B3E3())
	{
		return 1;
	}
	if (unk_0xCCE9BCDAB8B7FAED() && unk_0x1D05BD8EFF80B3E3())
	{
		return 1;
	}
	if ((func_10() && unk_0x2367D34D8582249E() == 0) && unk_0x1D05BD8EFF80B3E3())
	{
		return 1;
	}
	if (func_16() && unk_0x1D05BD8EFF80B3E3())
	{
		return 1;
	}
	if (unk_0xCC17806DB0C41C19() && unk_0x1D05BD8EFF80B3E3())
	{
		return 1;
	}
	return 0;
}

int func_12(int iParam0)
{
	if (unk_0x674D69D3896862C7() || (func_10() && iParam0 == 0))
	{
		if (unk_0x5EEE0DA7B180E4F7(0) == 0 || unk_0x29F2DE8E71A61D03(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x5EEE0DA7B180E4F7(0) == 0)
	{
		return 0;
	}
	if (func_11() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_13()
{
	if (!unk_0xCCE9BCDAB8B7FAED())
	{
		return 1;
	}
	return unk_0x1D05BD8EFF80B3E3();
}

int func_14(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_15(iParam0))
	{
		if (func_16())
		{
			if (unk_0x345199BCC9F5F448(&uParam1))
			{
				return 0;
			}
		}
		if (!unk_0x5EEE0DA7B180E4F7(0))
		{
			if (!unk_0x5EEE0DA7B180E4F7(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

bool func_16()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
}

void func_17(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0xCCE9BCDAB8B7FAED())
		{
			return;
		}
	}
	if (func_16())
	{
		return;
	}
	iVar0 = unk_0xA5E11AF0A2B928C1();
	if (iVar0 < Global_2625820)
	{
		return;
	}
	if (unk_0xF0E4B64AC0B5660E())
	{
		return;
	}
	if (bParam0)
	{
		func_18("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_18("INV_RESTRICT", -1);
	}
	Global_2625820 = (iVar0 + 1800000);
}

void func_18(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

int func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_15(iParam0))
	{
		if (func_16())
		{
			if (unk_0x345199BCC9F5F448(&uParam1))
			{
				return 0;
			}
		}
		if (!func_20())
		{
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if (unk_0x63A535927A165A05() == 0)
	{
		return 0;
	}
	if (func_10())
	{
		if (unk_0x5EEE0DA7B180E4F7(1))
		{
			if (unk_0x1D05BD8EFF80B3E3())
			{
				return 1;
			}
		}
	}
	else if (func_16())
	{
		if (unk_0xEDEBDBC4D313E8E0(0, -3, 1))
		{
			return 1;
		}
	}
	else if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x29F2DE8E71A61D03(0, -1))
		{
			if (unk_0x1D05BD8EFF80B3E3())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_25(uParam0))
	{
		return BitTest(Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return BitTest(Global_2628582.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return BitTest(Global_794709.f_4[iVar1 /*88*/].f_76, 14);
		
		case 62:
			return BitTest(Global_978406.f_1804[iVar1 /*88*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x93E99A2DBCBA9CFA())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_22(var uParam0)
{
	int iVar0;
	
	if (unk_0x2AC37494BBF1DB16(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x4310A0DB886F9FED(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1818)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x4310A0DB886F9FED(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (BitTest(Global_978406.f_1804[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x4310A0DB886F9FED(&(Global_978406.f_1804[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_978406.f_1804[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 300)
			{
				if (BitTest(Global_978406.f_1804[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x4310A0DB886F9FED(&(Global_978406.f_1804[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x93E99A2DBCBA9CFA())
	{
		if (BitTest(Global_1010831.f_4[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x4310A0DB886F9FED(&(Global_1010831.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (BitTest(Global_1010831.f_4[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1573131.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (BitTest(Global_1010831.f_4[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x4310A0DB886F9FED(&(Global_1010831.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_23(var uParam0)
{
	if (Global_2628582)
	{
		if (unk_0x4310A0DB886F9FED(&(Global_2628582.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_24(int iParam0)
{
	return iParam0 == 9999;
}

int func_25(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2625825.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0x4310A0DB886F9FED(&(Global_2625825.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!BitTest(Global_2625825.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_27(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_22(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_28(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_28(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_22(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_159989[iVar13 /*13*/];
		
		case 62:
			return Global_978406.f_28205[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_25(uParam0))
	{
		return BitTest(Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return BitTest(Global_2628582.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return BitTest(Global_794709.f_4[iVar1 /*88*/].f_76, 17);
		
		case 62:
			return BitTest(Global_978406.f_1804[iVar1 /*88*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x93E99A2DBCBA9CFA())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_30(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_25(uParam0))
		{
			if (BitTest(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2628716.f_513[uParam0->f_9];
			}
		}
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2628582.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_54;
		
		case 62:
			return Global_978406.f_1804[iVar1 /*88*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x93E99A2DBCBA9CFA())
	{
		return Global_1010831.f_4[iVar1 /*88*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_31(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_25(uParam0))
	{
		return Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2628582.f_1.f_28;
		}
		return Var0;
	}
	iVar16 = func_22(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar16 /*88*/].f_38;
		
		case 62:
			return Global_978406.f_1804[iVar16 /*88*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x93E99A2DBCBA9CFA())
	{
		return Global_1010831.f_4[iVar16 /*88*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_32(var uParam0, bool bParam1)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_25(uParam0))
		{
			if (BitTest(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2628716[uParam0->f_9 /*16*/];
			}
			return Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2628582.f_1.f_12;
		}
		return Var0;
	}
	iVar16 = func_22(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar16 /*88*/].f_22;
		
		case 62:
			return Global_978406.f_1804[iVar16 /*88*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x93E99A2DBCBA9CFA())
	{
		return Global_1010831.f_4[iVar16 /*88*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_33(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_25(uParam0))
	{
		return Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2628582.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_68;
		
		case 62:
			return Global_978406.f_1804[iVar1 /*88*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x93E99A2DBCBA9CFA())
	{
		return Global_1010831.f_4[iVar1 /*88*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_34(int iParam0, int iParam1)
{
	if (func_24(iParam1))
	{
		if (Global_2628582)
		{
			return Global_2628582.f_1.f_53;
		}
		return 312;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794709.f_4[iParam1 /*88*/].f_65;
		
		case 62:
			return Global_978406.f_1804[iParam1 /*88*/].f_65;
		
		default:
	}
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		return Global_1010831.f_4[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 312;
	}
	return 312;
}

int func_35(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xA26A9A07F761D8F8())
	{
		return 0;
	}
	if (unk_0x2AC37494BBF1DB16(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1818;
	if (!bParam2)
	{
		iVar2 = 1800;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x4310A0DB886F9FED(&(Global_794709.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_794709.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_36(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794709.f_4[iVar0 /*88*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 300)
	{
		if (BitTest(Global_978406.f_1804[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x4310A0DB886F9FED(&(Global_978406.f_1804[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_978406.f_1804[iVar0 /*88*/].f_65;
				*uParam1 = func_36(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (BitTest(Global_1010831.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x4310A0DB886F9FED(&(Global_1010831.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_1010831.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_36(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0x93E99A2DBCBA9CFA();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 191;
		
		case 14:
			return 192;
		
		case 122:
			return 196;
		
		case 11:
			return 193;
		
		case 13:
			return 194;
		
		case 12:
			return 195;
		
		case 8:
			return 198;
		
		case 1:
			return 199;
		
		case 5:
			return 197;
		
		case 6:
			return 200;
		
		case 3:
			return 203;
		
		case 0:
			return 201;
		
		case 2:
			return 202;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 87;
		
		case 183:
			return 88;
		
		case 185:
			return 89;
		
		case 186:
			return 90;
		
		case 190:
			return 91;
		
		case 191:
			return 92;
		
		case 192:
			return 93;
		
		case 193:
			return 94;
		
		case 205:
			return 102;
		
		case 194:
			return 95;
		
		case 197:
			return 96;
		
		case 198:
			return 97;
		
		case 195:
			return 98;
		
		case 199:
			return 99;
		
		case 200:
			return 100;
		
		case 201:
			return 101;
		
		case 207:
			return 103;
		
		case 208:
			return 104;
		
		case 209:
			return 105;
		
		case 210:
			return 106;
		
		case 225:
			return 107;
		
		case 226:
			return 108;
		
		case 227:
			return 109;
		
		case 229:
			return 110;
		
		case 230:
			return 111;
		
		case 233:
			return 113;
		
		case 237:
			return 115;
		
		case 238:
			return 116;
		
		case 249:
			return 123;
		
		case 239:
			return 117;
		
		case 240:
			return 118;
		
		case 241:
			return 119;
		
		case 242:
			return 120;
		
		case 244:
			return 121;
		
		case 248:
			return 122;
		
		case 250:
			return 124;
		
		case 243:
			return 125;
		
		case 158:
			return 126;
		
		case 181:
			return 86;
		
		case 150:
			return 127;
		
		case 24:
			return 128;
		
		case 26:
			return 129;
		
		case 256:
			return 130;
		
		case 258:
			return 131;
		
		case 259:
			return 133;
		
		case 271:
			return 134;
		
		case 273:
			return 135;
		
		case 276:
			return 136;
		
		case 277:
			return 137;
		
		case 262:
			return 138;
		
		case 263:
			return 139;
		
		case 264:
			return 140;
		
		case 268:
			return 141;
		
		case 269:
			return 143;
		
		case 270:
			return 144;
		
		case 275:
			return 145;
		
		case 286:
			return 146;
		
		case 267:
			return 148;
		
		case 266:
			return 147;
		
		case 287:
			return 149;
		
		case 289:
			return 150;
		
		case 147:
			return 151;
		
		case 291:
			return 152;
		
		case 292:
			return 153;
		
		case 293:
			return 154;
		
		case 294:
			return 155;
		
		case 295:
			return 156;
		
		case 296:
			return 157;
		
		case 297:
			return 158;
		
		case 298:
			return 159;
		
		case 299:
			return 160;
		
		case 300:
			return 161;
		
		case 301:
			return 162;
		
		case 288:
			return 163;
		
		case 290:
			return 164;
		
		case 304:
			return 165;
		
		case 305:
			return 166;
		
		case 306:
			return 167;
		
		case 307:
			return 168;
		
		case 308:
			return 169;
		
		case 309:
			return 170;
		
		case 310:
			return 171;
		
		case 311:
			return 172;
		
		default:
	}
	return 0;
}

int func_37(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	char cVar3[16];
	char[] cVar7[8];
	
	if (unk_0x2AC37494BBF1DB16(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0x57049FB1B412BAB7(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0x6A752012CC0081B1(sParam0, 0, 5), 8);
	if (!unk_0x4310A0DB886F9FED(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0x6A752012CC0081B1(sParam0, 5, 12), 16);
	if (unk_0x4310A0DB886F9FED(&cVar3, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0x4310A0DB886F9FED(&cVar3, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0x4310A0DB886F9FED(&cVar3, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0x4310A0DB886F9FED(&cVar3, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0x4310A0DB886F9FED(&cVar3, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0x4310A0DB886F9FED(&cVar3, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar7, unk_0x6A752012CC0081B1(sParam0, 12, iVar0), 8);
	if (!unk_0x0732A776417A2822(&cVar7, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_38(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1665317)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0xA5E11AF0A2B928C1() > Global_2625771[iVar0 /*4*/].f_2 || Global_2625771[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0xDDD1F4474C7B3838() > 0 && Global_2623469[iParam0 /*99*/].f_91 < unk_0xDDD1F4474C7B3838())
			{
				Global_2625771[iVar0 /*4*/].f_3 = unk_0x25E8C8CAEB440D3D(Global_2623469[iParam0 /*99*/].f_91);
				Global_2625771[iVar0 /*4*/].f_2 = unk_0xA5E11AF0A2B928C1() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2623469[iParam0 /*99*/].f_92 != -1)
	{
		unk_0x341B37C2C5AA5999(Global_2623469[iParam0 /*99*/].f_92);
	}
	if (!Global_2623469[iParam0 /*99*/].f_56)
	{
		if (Global_2623469[iParam0 /*99*/].f_52 != 0)
		{
			unk_0x31461FB60027DE08(Global_2623469[iParam0 /*99*/].f_52);
		}
	}
	func_47(Global_2623469[iParam0 /*99*/].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1665317)
	{
		Global_2623469[iVar1 /*99*/] = { Global_2623469[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_41(iVar1);
	Global_1665317 = (Global_1665317 - 1);
	if (Global_1665290)
	{
		if (Global_1665288 > 0)
		{
			func_40();
		}
	}
}

void func_40()
{
	Global_1665290 = 0;
}

void func_41(int iParam0)
{
	Global_2623469[iParam0 /*99*/] = 0;
	Global_2623469[iParam0 /*99*/].f_1 = 0;
	Global_2623469[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_2623469[iParam0 /*99*/].f_15), "", 64);
	StringCopy(&(Global_2623469[iParam0 /*99*/].f_31), "", 64);
	Global_2623469[iParam0 /*99*/].f_47 = -1;
	Global_2623469[iParam0 /*99*/].f_48 = unk_0xA5E11AF0A2B928C1();
	Global_2623469[iParam0 /*99*/].f_49 = -1;
	Global_2623469[iParam0 /*99*/].f_50 = -1;
	Global_2623469[iParam0 /*99*/].f_51 = -1;
	Global_2623469[iParam0 /*99*/].f_52 = 0;
	Global_2623469[iParam0 /*99*/].f_53 = 0;
	Global_2623469[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2623469[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2623469[iParam0 /*99*/].f_56 = 0;
	StringCopy(&(Global_2623469[iParam0 /*99*/].f_57), "", 64);
	StringCopy(&(Global_2623469[iParam0 /*99*/].f_73), "", 64);
	Global_2623469[iParam0 /*99*/].f_89 = 0;
	Global_2623469[iParam0 /*99*/].f_90 = 0;
	Global_2623469[iParam0 /*99*/].f_91 = -1;
	Global_2623469[iParam0 /*99*/].f_92 = -1;
	Global_2623469[iParam0 /*99*/].f_93 = 0;
	Global_2623469[iParam0 /*99*/].f_94 = -1;
	Global_2623469[iParam0 /*99*/].f_95 = 0;
	Global_2623469[iParam0 /*99*/].f_96 = 0;
	Global_2623469[iParam0 /*99*/].f_97 = 0;
	Global_2623469[iParam0 /*99*/].f_98 = 0;
}

int func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1665317)
	{
		if (unk_0x4310A0DB886F9FED(&uParam0, &(Global_2623469[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_43(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_139, 22);
}

int func_44(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_45()
{
	if (Global_113648.f_9087.f_330[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_46()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_139, 2);
}

void func_47(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xF2AB5E439A056B7A(uParam0);
	if (iVar0 < 0 || iVar0 >= unk_0xDDD1F4474C7B3838())
	{
		return;
	}
	if (unk_0x29CB17F1B303F55B(iVar0))
	{
		return;
	}
}

bool func_48()
{
	return Global_1575018 == 10;
}

int func_49()
{
	if (!Global_78558)
	{
		return 1;
	}
	else if (func_50())
	{
		return 1;
	}
	return 0;
}

int func_50()
{
	if (!func_51())
	{
		return 0;
	}
	return 1;
}

int func_51()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_56())
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	return func_52(120, -1);
}

int func_52(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2848280[iParam0 /*3*/][func_53(iParam1)];
	if (unk_0x494B367FE0CBD765(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
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

int func_54()
{
	return Global_1574918;
}

bool func_55()
{
	return Global_1575048;
}

bool func_56()
{
	return Global_1575050;
}

void func_57(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_54();
	}
	Global_1575040[iVar0] = uParam0;
}

void func_58(int iParam0)
{
	func_114();
	if (func_113(1))
	{
		if (!func_102())
		{
			if (!func_91(1))
			{
				if (unk_0x1758F8A8511510AB())
				{
					func_90();
				}
				func_61(1, 0);
				unk_0x0094D99C326F2535(iParam0);
				func_60();
				func_59();
			}
		}
	}
}

void func_59()
{
	Global_1935368.f_7 = 1;
}

void func_60()
{
	Global_1935368.f_6 = 1;
}

void func_61(int iParam0, bool bParam1)
{
	if (func_113(iParam0))
	{
		Global_1935368.f_16[iParam0 /*44*/].f_5 = 1;
		func_63(iParam0, 0);
		func_62();
		if (bParam1)
		{
			Global_1935368 = 1;
		}
	}
}

void func_62()
{
	Global_1935368.f_2 = 1;
}

void func_63(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (!unk_0x1758F8A8511510AB())
	{
		if (bParam1)
		{
			func_89();
			func_75(unk_0x93E99A2DBCBA9CFA(), 0, 81920, 0);
			Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_95 = 8;
			func_74();
			func_73();
		}
		func_72(iParam0);
		func_71(iParam0);
		func_69();
		func_68();
		func_62();
	}
	Var0 = { func_67(iParam0) };
	func_66(iParam0);
	func_64(&Var0);
}

void func_64(char* sParam0)
{
	StringCopy(&(Global_2683862.f_860), sParam0, 24);
	if (func_65())
	{
		StringCopy(&(Global_1048576.f_44), sParam0, 24);
	}
}

bool func_65()
{
	return BitTest(Global_2684799.f_1.f_2809, 5);
}

void func_66(int iParam0)
{
	Global_1935368.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_67(int iParam0)
{
	return Global_1935368.f_16[iParam0 /*44*/].f_6;
}

void func_68()
{
	Global_2683862.f_9 = 100;
}

void func_69()
{
	unk_0xECDAB41968FF21A8(&Global_2683862, 5);
	func_70();
}

void func_70()
{
	unk_0xECDAB41968FF21A8(&Global_2683862, 8);
}

void func_71(var uParam0)
{
	Global_1935368.f_8 = uParam0;
}

void func_72(var uParam0)
{
	Global_1935368.f_9 = uParam0;
}

void func_73()
{
	Global_2692733.f_1 = 0;
}

void func_74()
{
	char* sVar0;
	
	StringCopy(&(Global_2683862.f_860), sVar0, 24);
}

void func_75(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x9AA69AA7F99F66A2())
		{
			unk_0xD111D6644D1D5BD5(0);
		}
	}
	if (func_88())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0xA26A9A07F761D8F8())
	{
		uVar0 = iParam2;
		unk_0xE333240A90F2FF3C(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x1758F8A8511510AB())
		{
			bVar1 = false;
		}
		if (!func_86())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0xE6DEE82DB0922DF0(iParam0) && (unk_0x48DC6A21D1CAD89C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x055111B11E6624FD(unk_0xF2CFBB1105511E1A(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0xF2CFBB1105511E1A(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0xA26A9A07F761D8F8())
				{
					unk_0x0D78C94B1B789F7C(1);
				}
				else if (bVar14 || (!func_84(unk_0x93E99A2DBCBA9CFA(), 0) && !func_83()))
				{
					unk_0x724FFAED1C56CE2B(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0xA26A9A07F761D8F8() && !bVar19)
					{
						unk_0x0D78C94B1B789F7C(0);
					}
					Global_2657589[iParam0 /*466*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_80(0, 0, 0);
					if (bVar25)
					{
						unk_0x3EF548873C55CA64();
					}
				}
				if (!func_79(uVar27) && !unk_0x24405041A9F1A910(uVar27))
				{
					if (!bVar22)
					{
						unk_0xDDE449983CE7572E(uVar27, true, 0);
					}
				}
				if (!unk_0xDC116D955A63BDBE(uVar27))
				{
					if (!bVar21)
					{
						unk_0x2718E9CC165A99F6(uVar27, false);
					}
					unk_0xAD02BD8A749B79F9(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x2718E9CC165A99F6(uVar27, false);
				}
				unk_0xD14067404D35AAE7(uVar27, true);
				unk_0xA7225B88CE344621(iParam0, 0);
				unk_0xD99DA01241D40C5D(iParam0, 0);
				if (unk_0x1951CE8AED052DA4(uVar27) && unk_0x655790C883F82CEB(uVar27))
				{
					unk_0xC7A494C74ED33C50(uVar27);
				}
				unk_0xAC2C285C82A9244C(uVar27, 1);
				if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) == 0)
				{
					func_78();
					func_77();
				}
				if (unk_0xCB964814D9915DE0())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x58A962BEF2DDE1DF())
				{
				}
				Global_2657589[iParam0 /*466*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635559.f_2681)
				{
					Global_2635559.f_2681 = 0;
				}
			}
			else
			{
				if (!func_79(uVar27) && !unk_0x24405041A9F1A910(uVar27))
				{
					if (!bVar22)
					{
						unk_0xDDE449983CE7572E(uVar27, !bVar15, 0);
					}
					if (!unk_0xDC116D955A63BDBE(uVar27))
					{
						if (!bVar21)
						{
							unk_0x2718E9CC165A99F6(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0xAD02BD8A749B79F9(uVar27, 1);
						}
					}
					if (func_76(Global_4718592.f_166301))
					{
						unk_0x2718E9CC165A99F6(uVar27, true);
					}
				}
				if (Global_1575035)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xA7225B88CE344621(iParam0, 0);
				}
				else
				{
					unk_0xA7225B88CE344621(iParam0, 1);
				}
				unk_0xD14067404D35AAE7(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x53E0F2012E168A73(uVar27) && !unk_0x3C3D6D026CF7F51B(uVar27, 0))
					{
						unk_0x35DD50D05C962B6A(uVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xE333240A90F2FF3C(iParam0, bParam1, iVar28);
		}
	}
}

bool func_76(int iParam0)
{
	return iParam0 == 17;
}

void func_77()
{
	struct<3> Var0;
	
	Global_2672505.f_1023 = 0;
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1030 = -1;
	Global_2672505.f_1031 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_78()
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_79(var uParam0)
{
	int iVar0;
	
	if (unk_0x3C3D6D026CF7F51B(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF5F493B789EA063E(uParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x055111B11E6624FD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x7DE17ACDD8BA2642(iParam1))
		{
			if (unk_0x60A06DE259634304(iParam1))
			{
				if (!unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), unk_0xB850F932D03EF34D(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_82();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x84365510DF670D46(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 1);
			}
		}
		if (func_84(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			unk_0xBD35A36DC2D7FB43(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7C5666BA9400B9BF(iParam0, iParam1);
		}
		unk_0xC05C32F03C89FD59(iParam0, iParam1);
		func_81(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD19BD90E0B76FB05(iVar0, iParam1, 1);
	}
}

void func_82()
{
	int iVar0;
	
	if (!unk_0x8253CEEA17ED481B())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x80A3F4E694565F6A(iVar0);
				iVar0++;
			}
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 2);
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_83()
{
	return BitTest(Global_2621446, 3);
}

bool func_84(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_85(-1, 0) == 8;
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

int func_85(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
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

int func_86()
{
	if (func_87() == 0)
	{
		return 1;
	}
	return 0;
}

int func_87()
{
	return Global_1574632.f_18;
}

int func_88()
{
	if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_89()
{
	unk_0xECDAB41968FF21A8(&Global_2683862, 7);
}

void func_90()
{
	unk_0xECDAB41968FF21A8(&(Global_2683862.f_2), 15);
}

int func_91(int iParam0)
{
	if (iParam0 || func_101())
	{
		if (!func_93(1))
		{
			return 1;
		}
		if (!func_92())
		{
			return 1;
		}
		if (unk_0x2BD01C3CAF96EB66())
		{
			return 1;
		}
	}
	return 0;
}

bool func_92()
{
	return Global_1935368.f_4;
}

int func_93(bool bParam0)
{
	if (!func_98())
	{
		return 0;
	}
	if ((func_96(func_97(-1), 0) >= 1 || func_52(123, -1)) && func_52(133, -1))
	{
		func_95();
		return 1;
	}
	else if (bParam0)
	{
		func_94();
	}
	return 0;
}

void func_94()
{
	Global_1935368.f_5 = 1;
}

void func_95()
{
	Global_1935368.f_4 = 1;
}

int func_96(int iParam0, int iParam1)
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
		if (Global_297010[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_297010[iVar3] < iParam0)
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

int func_97(int iParam0)
{
	return Global_1665638[func_53(iParam0)];
}

int func_98()
{
	if (func_100() && func_99(0))
	{
		return 1;
	}
	return 0;
}

var func_99(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_100()
{
	return func_99(func_54() + 1);
}

var func_101()
{
	return Global_1935368.f_2;
}

int func_102()
{
	if (((((func_112() || !func_110(-1)) || !func_108()) || !func_105()) || !func_104()) || func_103())
	{
		return 1;
	}
	return 0;
}

var func_103()
{
	return Global_2694537;
}

int func_104()
{
	if (unk_0x516080EA609481E1(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	int iVar0;
	
	if (func_106(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_106(var uParam0)
{
	if (func_107())
	{
		*uParam0 = 11;
		return 1;
	}
	return unk_0xF347D8760BDA81E9(uParam0);
}

bool func_107()
{
	return Global_32441;
}

int func_108()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_109(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(int iParam0)
{
	if (func_52(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_111(iParam0);
	uVar1 = unk_0x516080EA609481E1(uVar0);
	if (BitTest(uVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

var func_112()
{
	return Global_2683862.f_743;
}

bool func_113(int iParam0)
{
	return Global_1935368.f_16[iParam0 /*44*/].f_4;
}

void func_114()
{
	int iVar0;
	int iVar1;
	
	func_120();
	if (unk_0xF1AF3BF1DCC6BD8B() && !func_117())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0x6878021A5F2AC6FA(func_116(iVar0));
			if (iVar1 > 0)
			{
				Global_1935368.f_16[iVar0 /*44*/] = iVar1;
				func_115(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1935368.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_115(int iParam0, int iParam1)
{
	bool bVar0;
	struct<16> Var1;
	var uVar17;
	
	bVar0 = true;
	if (unk_0xF0AEF7789CC6085E(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1935368.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0xF0AEF7789CC6085E(iParam1, "playlist", &Var1))
	{
		Global_1935368.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x03AA8A725BD96A82(iParam1, &Var1))
	{
		Global_1935368.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0x824E7683AF101883(iParam1, "coronaCountdown", &uVar17))
		{
			Global_1935368.f_16[iParam0 /*44*/].f_1 = uVar17;
		}
		else
		{
			Global_1935368.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1935368.f_16[iParam0 /*44*/].f_2 = 0;
		if (unk_0x824E7683AF101883(iParam1, "eventSubType", &uVar17))
		{
			Global_1935368.f_16[iParam0 /*44*/].f_2 = uVar17;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1935368.f_1 = 1;
		}
		Global_1935368.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1935368.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_117()
{
	if (!func_118())
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (func_119())
	{
		return 0;
	}
	if (unk_0x3FFDF8D1413D95DE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_119()
{
	return Global_2695031;
}

void func_120()
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1935368 = { Var0 };
}

void func_121(int iParam0)
{
	var uVar0;
	
	if (Global_78558)
	{
		unk_0x531D638530A8DB97(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		unk_0x531D638530A8DB97(-1, "Hang_Up", &Global_20372, 1);
	}
	if (unk_0x11DE375695504B75(1, iParam0, &uVar0, 21))
	{
		func_123();
	}
	Global_2800023.f_1 = 0;
	Global_2800023.f_33 = -1;
	Global_2800023.f_34 = -1;
	StringCopy(&(Global_2800023.f_4), "", 64);
	func_122(&(Global_2800023.f_20));
}

void func_122(var uParam0)
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

void func_123()
{
	Global_2800023.f_2 = 1;
	Global_2800023.f_38 = 1;
	if (unk_0x67EBFCF2F78761B9())
	{
		if (unk_0xF75616BEC61DE790())
		{
			while (unk_0x6FABEE1878F226F1())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x925095FD09B13089();
			Global_2800023 = 0;
			Global_2800023.f_2 = 0;
		}
		else if (func_131(Global_2800023.f_20))
		{
			if (unk_0xF27423FF2D483551(&(Global_2800023.f_20)))
			{
				if (!unk_0x109791441E629B4E(&(Global_2800023.f_20)))
				{
					func_130();
				}
			}
		}
		else
		{
			func_130();
		}
	}
	else
	{
		func_130();
	}
	if (Global_2800023.f_37)
	{
		func_124(0);
	}
	Global_2800023.f_37 = 0;
	Global_2800023.f_3 = 0;
}

void func_124(int iParam0)
{
	if (func_129())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_128())
		{
			func_126(1, 1);
		}
		else
		{
			func_126(0, 0);
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
	if (!func_125())
	{
		Global_20383.f_1 = 3;
	}
}

int func_125()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_126(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_127(0))
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

int func_127(int iParam0)
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

bool func_128()
{
	return BitTest(Global_1962996, 5);
}

bool func_129()
{
	return BitTest(Global_1962996, 19);
}

void func_130()
{
	Global_2800023.f_1 = 0;
	Global_2800023 = 0;
	Global_2800023.f_2 = 0;
	Global_2800023.f_33 = -1;
	Global_2800023.f_34 = -1;
	StringCopy(&(Global_2800023.f_4), "", 64);
	StringCopy(&(Global_2800023.f_39[0 /*16*/]), "", 64);
	Global_2800023.f_38 = 0;
	Global_2800023.f_56 = 0;
	Global_2800023.f_57 = 0;
	Global_2800023.f_58 = -2;
	Global_2800023.f_3 = 0;
	func_122(&(Global_2800023.f_20));
}

bool func_131(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x73EC603A60C832F3(&uParam0, 13);
}

void func_132(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x11DE375695504B75(1, iParam0, &Var0, 15))
	{
		Global_2800023.f_33 = Var0.f_1;
		Global_2800023.f_34 = Var0.f_0;
	}
}

void func_133(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0x11DE375695504B75(1, iParam0, &Var0, 21))
	{
		if (Global_2800023.f_3 == 0)
		{
			if (!func_134(&(Var0.f_8)))
			{
				unk_0xA4C204E79EA1469A(0, 2);
			}
			else
			{
				Global_2800023.f_3 = 1;
				MemCopy(&(Global_2800023.f_4), {Var0}, 16);
				Global_2800023.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2800023.f_39[0 /*16*/]), "", 64);
				Global_2800023.f_58 = -2;
				Global_2800023.f_56 = 0;
				Global_2800023.f_57 = 0;
			}
		}
		else if (!func_134(&(Var0.f_8)))
		{
			unk_0xA4C204E79EA1469A(0, 2);
		}
		else
		{
			Global_2800023.f_3 = 1;
			MemCopy(&(Global_2800023.f_4), {Var0}, 16);
			Global_2800023.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2800023.f_39[0 /*16*/]), "", 64);
			Global_2800023.f_58 = -2;
			Global_2800023.f_56 = 0;
			Global_2800023.f_57 = 0;
		}
	}
}

int func_134(var uParam0)
{
	if (Global_78558)
	{
		if (func_50() == 0)
		{
			return 0;
		}
		if (func_138(unk_0x93E99A2DBCBA9CFA(), 1, 1))
		{
			if (unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0xA57B95471CC90EA4(unk_0xC1A5EC5C986B98AD()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0x3FFDF8D1413D95DE() == 0)
	{
		return 0;
	}
	if (Global_2800023.f_1)
	{
	}
	if (Global_20592 == 1)
	{
		return 0;
	}
	if (Global_1836619)
	{
		return 0;
	}
	if (Global_2800023.f_36)
	{
		return 0;
	}
	if (func_125())
	{
		return 0;
	}
	if (((Global_43257 != 6 && Global_43257 != 8) && Global_43257 != 12) && Global_43257 != 15)
	{
		return 0;
	}
	if (func_137() && !func_136(12))
	{
		return 0;
	}
	if (unk_0xE444FD7526C8BB46())
	{
		return 0;
	}
	if (unk_0x34641C4C8576592F())
	{
		return 0;
	}
	if (!func_135(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (unk_0xFEE065E56A9BEF3F())
	{
		return 0;
	}
	if (Global_78819)
	{
		return 0;
	}
	if (unk_0x8E7665C8E7729181())
	{
		if (!unk_0x73A9A190149B93A1(unk_0x93E99A2DBCBA9CFA()))
		{
			return 0;
		}
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 0;
	}
	if (unk_0xC35AE9D997FE51CE(uParam0) || unk_0xE2B60D8572F75482(uParam0))
	{
		return 0;
	}
	if (unk_0xB87D84A47AA15946(uParam0) || unk_0x2B9D0D80BB05E4C7(uParam0))
	{
		return 0;
	}
	if (unk_0x62A83B64C1AA9799())
	{
		if (func_16())
		{
			if (unk_0xE459AC284DA0BE9E())
			{
				return 0;
			}
		}
		else if (func_10())
		{
			return 0;
		}
	}
	return 1;
}

int func_135(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0x63A535927A165A05() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0x93E99A2DBCBA9CFA())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0x674D69D3896862C7() || func_10())
	{
		if (unk_0x29F2DE8E71A61D03(0, iVar0))
		{
			if (unk_0x1D05BD8EFF80B3E3())
			{
				return 1;
			}
		}
	}
	if (unk_0xCCE9BCDAB8B7FAED() || func_16())
	{
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
		{
			if (unk_0x48265A16004DBF89(0, -3, 1) || unk_0x29F2DE8E71A61D03(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (unk_0x29F2DE8E71A61D03(0, -1) || (unk_0x29F2DE8E71A61D03(1, -1) && unk_0xF27423FF2D483551(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x29F2DE8E71A61D03(0, iVar0))
		{
			if (unk_0x1D05BD8EFF80B3E3())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_136(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_137()
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	return 1;
}

int func_138(int iParam0, bool bParam1, bool bParam2)
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

void func_139()
{
	func_130();
}

void func_140()
{
	Global_2800023.f_1 = 1;
	Global_2800023.f_33 = -1;
	Global_2800023.f_34 = -1;
	if (unk_0x5FAF55B1F052A2E6(Global_20364) == 1)
	{
		if (Global_20371)
		{
			func_141(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_20326)
			{
				func_141(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_141(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_141(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_142(sParam7);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam8))
	{
		func_142(iParam8);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam9))
	{
		func_142(iParam9);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam10))
	{
		func_142(iParam10);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam11))
	{
		func_142(iParam11);
	}
	unk_0xAE3413B0654A0035();
}

void func_142(var uParam0)
{
	unk_0x2AF11E92DE43CDE3(uParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_143()
{
	int iVar0;
	
	if (iLocal_64)
	{
		Global_55613 = 0;
		Global_55613.f_12 = 0;
		Global_55613.f_24 = 0;
		Global_55613.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_55613.f_1[iVar0] = 0;
			Global_55613.f_13[iVar0] = 0;
			Global_55613.f_25[iVar0] = 0;
			Global_55613.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_64 = 0;
	}
}

